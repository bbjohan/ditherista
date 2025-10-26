#include "videoprocessor.h"
#include <QFileInfo>
#include <QDir>
#include <QRegularExpression>
#include <QImageReader>
#include <QImageWriter>
#include <QDebug>
#include <QThread>
#include <QtConcurrent>

VideoProcessor::VideoProcessor(QObject* parent) : QObject(parent) {
    tempDir = new QTemporaryDir();
    if (!tempDir->isValid()) {
        qWarning() << "Failed to create temporary directory for video processing";
    }
    
    // Use all available CPU cores by default
    threadCount = QThread::idealThreadCount();
    if (threadCount < 1) threadCount = 4; // fallback
    
    qDebug() << "VideoProcessor: Using" << threadCount << "threads for parallel processing";
}

VideoProcessor::~VideoProcessor() {
    if (ffmpegProcess) {
        ffmpegProcess->kill();
        ffmpegProcess->waitForFinished();
        delete ffmpegProcess;
    }
    delete tempDir;
}

void VideoProcessor::setThreadCount(int count) {
    if (count > 0 && count <= QThread::idealThreadCount() * 2) {
        threadCount = count;
        qDebug() << "VideoProcessor: Thread count set to" << threadCount;
    }
}

bool VideoProcessor::checkFFmpegAvailable() {
    QProcess process;
    process.start("ffmpeg", QStringList() << "-version");
    process.waitForFinished(3000);
    return process.exitCode() == 0;
}

bool VideoProcessor::getVideoInfo(const QString& videoPath, int& width, int& height, 
                                  double& fps, int& frameCount) {
    if (!checkFFmpegAvailable()) {
        emit errorOccurred(tr("FFmpeg not found. Please install FFmpeg to process videos."));
        return false;
    }

    QProcess process;
    QStringList args;
    args << "-i" << videoPath;
    
    process.start("ffprobe", args);
    process.waitForFinished();
    
    QString output = process.readAllStandardError();
    
    // Parse resolution
    QRegularExpression resRegex(R"((\d{2,5})x(\d{2,5}))");
    QRegularExpressionMatch resMatch = resRegex.match(output);
    if (resMatch.hasMatch()) {
        width = resMatch.captured(1).toInt();
        height = resMatch.captured(2).toInt();
    } else {
        return false;
    }
    
    // Parse FPS
    QRegularExpression fpsRegex(R"((\d+(?:\.\d+)?)\s*fps)");
    QRegularExpressionMatch fpsMatch = fpsRegex.match(output);
    if (fpsMatch.hasMatch()) {
        fps = fpsMatch.captured(1).toDouble();
    } else {
        fps = 30.0; // default
    }
    
    // Parse duration to estimate frame count
    QRegularExpression durRegex(R"(Duration:\s*(\d{2}):(\d{2}):(\d{2})\.(\d{2}))");
    QRegularExpressionMatch durMatch = durRegex.match(output);
    if (durMatch.hasMatch()) {
        int hours = durMatch.captured(1).toInt();
        int minutes = durMatch.captured(2).toInt();
        int seconds = durMatch.captured(3).toInt();
        double totalSeconds = hours * 3600 + minutes * 60 + seconds;
        frameCount = static_cast<int>(totalSeconds * fps);
    } else {
        frameCount = 0;
    }
    
    return true;
}

QImage VideoProcessor::extractSingleFrame(const QString& videoPath, double timeSeconds) {
    /* Extracts a single frame from the video at the specified time */
    if (!checkFFmpegAvailable()) {
        return QImage();
    }

    if (!tempDir->isValid()) {
        return QImage();
    }

    // Create a temporary file for the extracted frame
    QString framePath = tempDir->path() + "/preview_frame.png";
    
    // Remove old preview frame if exists
    QFile::remove(framePath);
    
    QProcess process;
    QStringList args;
    args << "-ss" << QString::number(timeSeconds)
         << "-i" << videoPath
         << "-vframes" << "1"
         << "-f" << "image2"
         << framePath;

    process.start("ffmpeg", args);
    process.waitForFinished(10000); // 10 second timeout
    
    if (process.exitCode() != 0 || !QFile::exists(framePath)) {
        return QImage();
    }

    QImage frame(framePath);
    return frame;
}

bool VideoProcessor::extractFrames(const QString& inputPath) {
    if (!tempDir->isValid()) {
        emit errorOccurred(tr("Temporary directory is not valid"));
        return false;
    }

    state = ExtractingFrames;
    isCancelled = false;
    
    ffmpegProcess = new QProcess(this);
    connect(ffmpegProcess, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            this, &VideoProcessor::onFFmpegExtractFinished);
    connect(ffmpegProcess, &QProcess::readyReadStandardError,
            this, &VideoProcessor::onFFmpegReadyReadStandardError);

    QString framesPattern = tempDir->path() + "/frame_%06d.png";
    QStringList args;
    args << "-i" << inputPath
         << "-vf" << "fps=" + QString::number(videoFps)
         << framesPattern;

    ffmpegProcess->start("ffmpeg", args);
    return ffmpegProcess->waitForStarted();
}

void VideoProcessor::onFFmpegExtractFinished(int exitCode, QProcess::ExitStatus exitStatus) {
    if (isCancelled) {
        emit finished(false, tr("Processing cancelled by user"));
        state = Idle;
        return;
    }

    if (exitStatus != QProcess::NormalExit || exitCode != 0) {
        emit errorOccurred(tr("Failed to extract video frames"));
        emit finished(false, tr("Frame extraction failed"));
        state = Idle;
        return;
    }

    // Start processing frames
    state = ProcessingFrames;
    processedFrames = 0;
    atomicProcessedFrames.storeRelaxed(0);
    
    QDir dir(tempDir->path());
    QStringList filters;
    filters << "frame_*.png";
    QStringList frameFiles = dir.entryList(filters, QDir::Files, QDir::Name);
    totalFrames = frameFiles.count();

    if (totalFrames == 0) {
        emit errorOccurred(tr("No frames extracted from video"));
        emit finished(false, tr("No frames found"));
        state = Idle;
        return;
    }

    emit progressChanged(0, totalFrames);

    // Process frames in parallel using QtConcurrent
    // Split work into batches based on thread count
    int batchSize = std::max(1, totalFrames / (threadCount * 4)); // More batches for better load balancing
    
    QVector<QFuture<void>> futures;
    
    for (int i = 0; i < totalFrames; i += batchSize) {
        if (isCancelled) {
            // Wait for all started tasks to finish
            for (auto& future : futures) {
                future.waitForFinished();
            }
            emit finished(false, tr("Processing cancelled by user"));
            state = Idle;
            return;
        }
        
        int endFrame = std::min(i + batchSize, totalFrames);
        
        // Launch parallel task for this batch
        QFuture<void> future = QtConcurrent::run([this, i, endFrame, frameFiles]() {
            processFramesBatch(i, endFrame, frameFiles);
        });
        
        futures.append(future);
    }
    
    // Wait for all tasks to complete
    for (auto& future : futures) {
        future.waitForFinished();
    }
    
    if (isCancelled) {
        emit finished(false, tr("Processing cancelled by user"));
        state = Idle;
        return;
    }

    // Start encoding
    if (!encodeVideo(currentOutputPath)) {
        emit errorOccurred(tr("Failed to start video encoding"));
        emit finished(false, tr("Encoding failed to start"));
        state = Idle;
    }
}

void VideoProcessor::processFramesBatch(int startFrame, int endFrame, const QStringList& frameFiles) {
    for (int i = startFrame; i < endFrame; ++i) {
        if (isCancelled) {
            return;
        }

        QString framePath = tempDir->path() + "/" + frameFiles[i];
        QImage frame(framePath);
        
        if (frame.isNull()) {
            qWarning() << "Failed to load frame:" << framePath;
            continue;
        }

        // Apply dithering
        QImage ditheredFrame = currentDitherCallback(frame, i);
        
        // Save dithered frame
        QString ditheredPath = tempDir->path() + "/dithered_" + frameFiles[i];
        if (!ditheredFrame.save(ditheredPath, "PNG")) {
            qWarning() << "Failed to save dithered frame:" << i;
            continue;
        }

        // Update progress atomically
        int current = atomicProcessedFrames.fetchAndAddRelaxed(1) + 1;
        
        // Emit progress less frequently to avoid UI overhead
        if (current % 10 == 0 || current == totalFrames) {
            QMetaObject::invokeMethod(this, [this, current]() {
                emit progressChanged(current, totalFrames);
            }, Qt::QueuedConnection);
        }
        
        // Emit frame processed for preview (but not too often)
        if (current % 30 == 0 || current == totalFrames) {
            QMetaObject::invokeMethod(this, [this, ditheredFrame, i]() {
                emit frameProcessed(ditheredFrame, i);
            }, Qt::QueuedConnection);
        }
    }
}

bool VideoProcessor::encodeVideo(const QString& outputPath) {
    state = EncodingVideo;
    
    if (ffmpegProcess) {
        disconnect(ffmpegProcess, nullptr, this, nullptr);
        ffmpegProcess->deleteLater();
    }
    
    ffmpegProcess = new QProcess(this);
    connect(ffmpegProcess, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            this, &VideoProcessor::onFFmpegEncodeFinished);
    connect(ffmpegProcess, &QProcess::readyReadStandardError,
            this, &VideoProcessor::onFFmpegReadyReadStandardError);

    QString framesPattern = tempDir->path() + "/dithered_frame_%06d.png";
    QStringList args;
    args << "-y"  // overwrite output file
         << "-framerate" << QString::number(videoFps)
         << "-i" << framesPattern
         << "-c:v" << "libx264"
         << "-pix_fmt" << "yuv420p"
         << "-preset" << "veryfast"  // Changed from "medium" to "veryfast" for speed
         << "-crf" << "18"
         << "-threads" << QString::number(threadCount)  // Use multiple threads for encoding too
         << outputPath;

    ffmpegProcess->start("ffmpeg", args);
    return ffmpegProcess->waitForStarted();
}

void VideoProcessor::onFFmpegEncodeFinished(int exitCode, QProcess::ExitStatus exitStatus) {
    if (isCancelled) {
        emit finished(false, tr("Processing cancelled by user"));
        state = Idle;
        return;
    }

    if (exitStatus != QProcess::NormalExit || exitCode != 0) {
        emit errorOccurred(tr("Failed to encode video"));
        emit finished(false, tr("Video encoding failed"));
    } else {
        emit finished(true, tr("Video processed successfully"));
    }
    
    state = Idle;
}

void VideoProcessor::onFFmpegReadyReadStandardError() {
    if (ffmpegProcess) {
        QString output = ffmpegProcess->readAllStandardError();
        // Parse progress if needed
        // qDebug() << "FFmpeg output:" << output;
    }
}

bool VideoProcessor::processVideo(const QString& inputPath, 
                                  const QString& outputPath,
                                  std::function<QImage(const QImage&, int)> ditherCallback) {
    if (state != Idle) {
        emit errorOccurred(tr("Video processor is busy"));
        return false;
    }

    if (!checkFFmpegAvailable()) {
        emit errorOccurred(tr("FFmpeg is not installed or not in PATH. Please install FFmpeg to process videos."));
        return false;
    }

    if (!getVideoInfo(inputPath, videoWidth, videoHeight, videoFps, totalFrames)) {
        emit errorOccurred(tr("Failed to get video information"));
        return false;
    }

    currentInputPath = inputPath;
    currentOutputPath = outputPath;
    currentDitherCallback = ditherCallback;

    return extractFrames(inputPath);
}

void VideoProcessor::cancel() {
    isCancelled = true;
    if (ffmpegProcess && ffmpegProcess->state() == QProcess::Running) {
        ffmpegProcess->kill();
    }
}
