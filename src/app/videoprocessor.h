#pragma once
#ifndef VIDEOPROCESSOR_H
#define VIDEOPROCESSOR_H

#include <QObject>
#include <QImage>
#include <QProcess>
#include <QString>
#include <QTemporaryDir>
#include <functional>

class VideoProcessor : public QObject {
    Q_OBJECT

public:
    explicit VideoProcessor(QObject* parent = nullptr);
    ~VideoProcessor() override;

    // Start video processing with a callback for frame dithering
    bool processVideo(const QString& inputPath, 
                     const QString& outputPath,
                     std::function<QImage(const QImage&, int)> ditherCallback);
    
    // Cancel ongoing processing
    void cancel();
    
    // Get video properties
    bool getVideoInfo(const QString& videoPath, int& width, int& height, 
                     double& fps, int& frameCount);
    
    // Extract a single frame from the video at specified time (in seconds)
    QImage extractSingleFrame(const QString& videoPath, double timeSeconds = 0.0);

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
    enum ProcessState {
        Idle,
        ExtractingFrames,
        ProcessingFrames,
        EncodingVideo
    };

    bool extractFrames(const QString& inputPath);
    bool encodeVideo(const QString& outputPath);
    bool checkFFmpegAvailable();
    
    QProcess* ffmpegProcess = nullptr;
    QTemporaryDir* tempDir = nullptr;
    ProcessState state = Idle;
    
    QString currentInputPath;
    QString currentOutputPath;
    std::function<QImage(const QImage&, int)> currentDitherCallback;
    
    int videoWidth = 0;
    int videoHeight = 0;
    double videoFps = 30.0;
    int totalFrames = 0;
    int processedFrames = 0;
    bool isCancelled = false;
};

#endif // VIDEOPROCESSOR_H
