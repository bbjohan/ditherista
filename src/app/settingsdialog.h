#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include <QSettings>

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsDialog(QWidget *parent = nullptr);
    ~SettingsDialog();

private slots:
    void browseCacheDirectory();
    void clearCache();
    void restoreDefaults();
    void saveSettings();

private:
    Ui::SettingsDialog *ui;
    QSettings *settings;
    
    void loadSettings();
    QString getDefaultCacheDir();
    qint64 getCacheSize(const QString &path);
};

#endif // SETTINGSDIALOG_H
