/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *generalTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *updatesGroupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkUpdatesCheckBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *cacheTab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *cacheGroupBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *cacheDescriptionLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *cachePathLineEdit;
    QPushButton *browseCacheButton;
    QLabel *cacheSizeLabel;
    QPushButton *clearCacheButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *performanceTab;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *threadsGroupBox;
    QFormLayout *formLayout;
    QLabel *maxThreadsLabel;
    QSpinBox *maxThreadsSpinBox;
    QLabel *threadsInfoLabel;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *restoreDefaultsButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(600, 450);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        generalTab = new QWidget();
        generalTab->setObjectName(QString::fromUtf8("generalTab"));
        verticalLayout_2 = new QVBoxLayout(generalTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        updatesGroupBox = new QGroupBox(generalTab);
        updatesGroupBox->setObjectName(QString::fromUtf8("updatesGroupBox"));
        verticalLayout_3 = new QVBoxLayout(updatesGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkUpdatesCheckBox = new QCheckBox(updatesGroupBox);
        checkUpdatesCheckBox->setObjectName(QString::fromUtf8("checkUpdatesCheckBox"));
        checkUpdatesCheckBox->setChecked(true);

        verticalLayout_3->addWidget(checkUpdatesCheckBox);


        verticalLayout_2->addWidget(updatesGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(generalTab, QString());
        cacheTab = new QWidget();
        cacheTab->setObjectName(QString::fromUtf8("cacheTab"));
        verticalLayout_4 = new QVBoxLayout(cacheTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        cacheGroupBox = new QGroupBox(cacheTab);
        cacheGroupBox->setObjectName(QString::fromUtf8("cacheGroupBox"));
        verticalLayout_5 = new QVBoxLayout(cacheGroupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        cacheDescriptionLabel = new QLabel(cacheGroupBox);
        cacheDescriptionLabel->setObjectName(QString::fromUtf8("cacheDescriptionLabel"));
        cacheDescriptionLabel->setWordWrap(true);

        verticalLayout_5->addWidget(cacheDescriptionLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cachePathLineEdit = new QLineEdit(cacheGroupBox);
        cachePathLineEdit->setObjectName(QString::fromUtf8("cachePathLineEdit"));
        cachePathLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(cachePathLineEdit);

        browseCacheButton = new QPushButton(cacheGroupBox);
        browseCacheButton->setObjectName(QString::fromUtf8("browseCacheButton"));

        horizontalLayout->addWidget(browseCacheButton);


        verticalLayout_5->addLayout(horizontalLayout);

        cacheSizeLabel = new QLabel(cacheGroupBox);
        cacheSizeLabel->setObjectName(QString::fromUtf8("cacheSizeLabel"));

        verticalLayout_5->addWidget(cacheSizeLabel);

        clearCacheButton = new QPushButton(cacheGroupBox);
        clearCacheButton->setObjectName(QString::fromUtf8("clearCacheButton"));

        verticalLayout_5->addWidget(clearCacheButton);


        verticalLayout_4->addWidget(cacheGroupBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tabWidget->addTab(cacheTab, QString());
        performanceTab = new QWidget();
        performanceTab->setObjectName(QString::fromUtf8("performanceTab"));
        verticalLayout_6 = new QVBoxLayout(performanceTab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        threadsGroupBox = new QGroupBox(performanceTab);
        threadsGroupBox->setObjectName(QString::fromUtf8("threadsGroupBox"));
        formLayout = new QFormLayout(threadsGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        maxThreadsLabel = new QLabel(threadsGroupBox);
        maxThreadsLabel->setObjectName(QString::fromUtf8("maxThreadsLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, maxThreadsLabel);

        maxThreadsSpinBox = new QSpinBox(threadsGroupBox);
        maxThreadsSpinBox->setObjectName(QString::fromUtf8("maxThreadsSpinBox"));
        maxThreadsSpinBox->setMinimum(1);
        maxThreadsSpinBox->setMaximum(32);
        maxThreadsSpinBox->setValue(4);

        formLayout->setWidget(0, QFormLayout::FieldRole, maxThreadsSpinBox);

        threadsInfoLabel = new QLabel(threadsGroupBox);
        threadsInfoLabel->setObjectName(QString::fromUtf8("threadsInfoLabel"));
        threadsInfoLabel->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::SpanningRole, threadsInfoLabel);


        verticalLayout_6->addWidget(threadsGroupBox);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        tabWidget->addTab(performanceTab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        restoreDefaultsButton = new QPushButton(SettingsDialog);
        restoreDefaultsButton->setObjectName(QString::fromUtf8("restoreDefaultsButton"));

        horizontalLayout_2->addWidget(restoreDefaultsButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(SettingsDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Settings", nullptr));
        updatesGroupBox->setTitle(QCoreApplication::translate("SettingsDialog", "Updates", nullptr));
        checkUpdatesCheckBox->setText(QCoreApplication::translate("SettingsDialog", "Check for updates on startup", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(generalTab), QCoreApplication::translate("SettingsDialog", "General", nullptr));
        cacheGroupBox->setTitle(QCoreApplication::translate("SettingsDialog", "Cache Directory", nullptr));
        cacheDescriptionLabel->setText(QCoreApplication::translate("SettingsDialog", "Ditherista caches processed video frames to speed up playback and export. You can change the cache location or clear it to free up disk space.", nullptr));
        browseCacheButton->setText(QCoreApplication::translate("SettingsDialog", "Browse...", nullptr));
        cacheSizeLabel->setText(QCoreApplication::translate("SettingsDialog", "Current cache size: 0.00 MB", nullptr));
        clearCacheButton->setText(QCoreApplication::translate("SettingsDialog", "Clear Cache", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(cacheTab), QCoreApplication::translate("SettingsDialog", "Cache", nullptr));
        threadsGroupBox->setTitle(QCoreApplication::translate("SettingsDialog", "Multi-threading", nullptr));
        maxThreadsLabel->setText(QCoreApplication::translate("SettingsDialog", "Maximum threads:", nullptr));
        threadsInfoLabel->setText(QCoreApplication::translate("SettingsDialog", "Higher values can speed up video processing but may use more CPU and memory.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(performanceTab), QCoreApplication::translate("SettingsDialog", "Performance", nullptr));
        restoreDefaultsButton->setText(QCoreApplication::translate("SettingsDialog", "Restore Defaults", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
