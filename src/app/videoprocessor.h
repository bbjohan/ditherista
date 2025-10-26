#pragma once
#ifndef VIDEOPROCESSOR_H
#define VIDEOPROCESSOR_H

#include <QObject>
#include <QProcess>
#include <QImage>
#include <QTemporaryDir>
#include <functional>
#include <QThreadPool>
#include <QFutureWatcher>
#include <QtConcurrent>

class VideoProcessor : public QObject {
    Q_OBJECT

public:
    explicit VideoProcessor(QObject* parent = nullptr);
    ~VideoProcessor();

    // Get video information
    bool getVideoInfo(const QString& videoPath, int& width, int& height, 
                     double& fps, int& frameCount);
    
    // Extract a single frame at a specific time
    QImage extractSingleFrame(const QString& videoPath, double timeSeconds);
    
    // Process entire video with dithering
    bool processVideo(const QString& inputPath, 
                     const QString& outputPath,
                     std::function<QImage(const QImage&, int)> ditherCallback);
    
    // Cancel current operation
    void cancel();
    
    // Check if FFmpeg is available
    static bool checkFFmpegAvailable();
    
    // Set number of threads for parallel processing (default: CPU cores)
    void setThreadCount(int count);

signals:
    void progressChanged(int current, int total);
    void frameProcessed(const QImage& frame, int frameNumber);
    void finished(bool success, const QString& message);
    void errorOccurred(const QString& error);

private slots:
    void onFFmpegExtractFinished(int exitCode, QProcess::ExitStatus exitStatus);
    void onFFmpegEncodeFinished(int exitCode, QProcess::ExitStatus exitStatus);
    void onFFmpegReadyReadStandardError();

private:
    bool extractFrames(const QString& inputPath);
    bool encodeVideo(const QString& outputPath);
    void processFramesBatch(int startFrame, int endFrame, const QStringList& frameFiles);

    enum State {
        Idle,
        ExtractingFrames,
        ProcessingFrames,
        EncodingVideo
    };

    State state = Idle;
    QProcess* ffmpegProcess = nullptr;
    QTemporaryDir* tempDir = nullptr;
    
    QString currentInputPath;
    QString currentOutputPath;
    std::function<QImage(const QImage&, int)> currentDitherCallback;
    
    int videoWidth = 0;
    int videoHeight = 0;
    double videoFps = 30.0;
    int totalFrames = 0;
    int processedFrames = 0;
    
    bool isCancelled = false;
    int threadCount = QThread::idealThreadCount();
    
    QMutex progressMutex;
    QAtomicInt atomicProcessedFrames;
};

#endif // VIDEOPROCESSOR_H
