#include "settingsdialog.h"
#include "ui_settingsdialog.h"
#include <QFileDialog>
#include <QStandardPaths>
#include <QDir>
#include <QMessageBox>
#include <QDirIterator>
#include <QThread>

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
    settings = new QSettings("ditherista", "ditherista", this);
    
    setWindowTitle(tr("Settings"));
    setModal(true);
    
    loadSettings();
    
    // Connect signals
    connect(ui->browseCacheButton, &QPushButton::clicked, this, &SettingsDialog::browseCacheDirectory);
    connect(ui->clearCacheButton, &QPushButton::clicked, this, &SettingsDialog::clearCache);
    connect(ui->restoreDefaultsButton, &QPushButton::clicked, this, &SettingsDialog::restoreDefaults);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &SettingsDialog::saveSettings);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &QDialog::reject);
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}

QString SettingsDialog::getDefaultCacheDir()
{
    QString cacheDir = QStandardPaths::writableLocation(QStandardPaths::CacheLocation);
    return cacheDir + "/ditherista";
}

void SettingsDialog::loadSettings()
{
    // Load cache directory
    QString cacheDir = settings->value("cache/directory", getDefaultCacheDir()).toString();
    ui->cachePathLineEdit->setText(cacheDir);
    
    // Calculate and display cache size
    qint64 cacheSize = getCacheSize(cacheDir);
    double sizeMB = cacheSize / (1024.0 * 1024.0);
    ui->cacheSizeLabel->setText(tr("Current cache size: %1 MB").arg(QString::number(sizeMB, 'f', 2)));
    
    // Load other settings
    bool checkUpdates = settings->value("general/checkUpdates", true).toBool();
    ui->checkUpdatesCheckBox->setChecked(checkUpdates);
    
    int maxThreads = settings->value("performance/maxThreads", QThread::idealThreadCount()).toInt();
    ui->maxThreadsSpinBox->setValue(maxThreads);
    ui->maxThreadsSpinBox->setMaximum(QThread::idealThreadCount() * 2);
}

void SettingsDialog::browseCacheDirectory()
{
    QString currentDir = ui->cachePathLineEdit->text();
    QString dir = QFileDialog::getExistingDirectory(this, tr("Select Cache Directory"),
                                                     currentDir,
                                                     QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    
    if (!dir.isEmpty()) {
        ui->cachePathLineEdit->setText(dir);
        
        // Update cache size display
        qint64 cacheSize = getCacheSize(dir);
        double sizeMB = cacheSize / (1024.0 * 1024.0);
        ui->cacheSizeLabel->setText(tr("Current cache size: %1 MB").arg(QString::number(sizeMB, 'f', 2)));
    }
}

void SettingsDialog::clearCache()
{
    QString cacheDir = ui->cachePathLineEdit->text();
    
    QMessageBox::StandardButton reply = QMessageBox::question(this, tr("Clear Cache"),
        tr("Are you sure you want to delete all cached files?\nThis will free up disk space but may slow down video processing temporarily."),
        QMessageBox::Yes | QMessageBox::No);
    
    if (reply == QMessageBox::Yes) {
        QDir dir(cacheDir);
        if (dir.exists()) {
            QDirIterator it(cacheDir, QStringList() << "*", QDir::Files, QDirIterator::Subdirectories);
            int filesDeleted = 0;
            while (it.hasNext()) {
                QString filePath = it.next();
                if (QFile::remove(filePath)) {
                    filesDeleted++;
                }
            }
            
            ui->cacheSizeLabel->setText(tr("Current cache size: 0.00 MB"));
            QMessageBox::information(this, tr("Cache Cleared"),
                tr("Successfully deleted %1 cached file(s).").arg(filesDeleted));
        }
    }
}

void SettingsDialog::restoreDefaults()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, tr("Restore Defaults"),
        tr("Are you sure you want to restore all settings to their default values?"),
        QMessageBox::Yes | QMessageBox::No);
    
    if (reply == QMessageBox::Yes) {
        ui->cachePathLineEdit->setText(getDefaultCacheDir());
        ui->checkUpdatesCheckBox->setChecked(true);
        ui->maxThreadsSpinBox->setValue(QThread::idealThreadCount());
    }
}

void SettingsDialog::saveSettings()
{
    // Save cache directory
    QString cacheDir = ui->cachePathLineEdit->text();
    settings->setValue("cache/directory", cacheDir);
    
    // Create cache directory if it doesn't exist
    QDir dir;
    if (!dir.exists(cacheDir)) {
        if (!dir.mkpath(cacheDir)) {
            QMessageBox::warning(this, tr("Warning"),
                tr("Failed to create cache directory: %1").arg(cacheDir));
        }
    }
    
    // Save other settings
    settings->setValue("general/checkUpdates", ui->checkUpdatesCheckBox->isChecked());
    settings->setValue("performance/maxThreads", ui->maxThreadsSpinBox->value());
    
    settings->sync();
    
    QMessageBox::information(this, tr("Settings Saved"),
        tr("Settings have been saved successfully.\nSome changes may require restarting the application."));
    
    accept();
}

qint64 SettingsDialog::getCacheSize(const QString &path)
{
    qint64 totalSize = 0;
    QDir dir(path);
    
    if (dir.exists()) {
        QDirIterator it(path, QStringList() << "*", QDir::Files, QDirIterator::Subdirectories);
        while (it.hasNext()) {
            QString filePath = it.next();
            QFileInfo fileInfo(filePath);
            totalSize += fileInfo.size();
        }
    }
    
    return totalSize;
}
