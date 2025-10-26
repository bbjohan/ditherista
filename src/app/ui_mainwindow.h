/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ui_elements/editcombobox.h>
#include "colortree.h"
#include "treewidget.h"
#include "ui_elements/doublelabel.h"
#include "ui_elements/doublepushbutton.h"
#include "ui_elements/elidelabel.h"
#include "ui_elements/sectioncombobox.h"
#include "ui_elements/stackedwidget.h"
#include "viewport/graphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionOpenVideo;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionExportVideo;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionQuickTour;
    QAction *actionChangelog;
    QAction *actionCheck_for_Updates;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_40;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_30;
    GraphicsView *graphicsView;
    QWidget *statusBarWidget;
    QGridLayout *gridLayout_50;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_42;
    EditComboBox *zoomLevelCombo;
    QLabel *label_46;
    QLabel *resolutionLabel;
    QSpacerItem *horizontalSpacer_10;
    QWidget *imageSettingsContainer;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabMono;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    TreeWidget *treeWidgetMono;
    QSpacerItem *verticalSpacer_9;
    QWidget *tabColor;
    QGridLayout *gridLayout_53;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    TreeWidget *treeWidgetColor;
    QSpacerItem *verticalSpacer_10;
    QWidget *tabPalette;
    QGridLayout *gridLayout_29;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *monoPaletteGroup;
    QGridLayout *gridLayout_39;
    QGridLayout *gridLayout_18;
    QSpacerItem *horizontalSpacer;
    DoublePushButton *monoColorOneButton;
    DoublePushButton *monoColorTwoButton;
    QPushButton *resetMonoColors;
    QVBoxLayout *verticalLayout_29;
    QSpacerItem *verticalSpacer_35;
    DoubleLabel *monoColorTwoLabel;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_34;
    DoubleLabel *monoColorOneLabel;
    QGroupBox *colorPaletteGroup;
    QGridLayout *gridLayout_37;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_3;
    QGridLayout *gridLayout_41;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_2;
    QGridLayout *gridLayout_36;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_8;
    QLabel *valueWeightLabel;
    QLabel *chromaWeightLabel;
    QLabel *srcIlluminantLabel;
    QLabel *label;
    QLabel *hueWeightLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QDoubleSpinBox *spinBoxHue;
    QPushButton *resetHueWeightButton;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QDoubleSpinBox *spinBoxChroma;
    QPushButton *resetChromaWeightButton;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QDoubleSpinBox *spinBoxValue;
    QPushButton *resetValueWeightButton;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *srcIlluminantCombo;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_8;
    QComboBox *colorComparisonCombo;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *paletteSourceCombo;
    QSpacerItem *verticalSpacer_7;
    QStackedWidget *paletteSourceWidget;
    QWidget *builtInPalettePage;
    QGridLayout *gridLayout_30;
    QGridLayout *gridLayout_28;
    QLabel *label_2;
    SectionComboBox *predefinedPaletteCombo;
    QSpacerItem *verticalSpacer;
    QWidget *filePalettePage;
    QGridLayout *gridLayout_33;
    QGridLayout *gridLayout_32;
    QLineEdit *palettePathEdit;
    QPushButton *paletteBrowseButton;
    QSpacerItem *verticalSpacer_6;
    QWidget *reducedColorsPage;
    QGridLayout *gridLayout_35;
    QGridLayout *gridLayout_34;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *paletteColorsEdit;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QComboBox *colorReductionCombo;
    QCheckBox *palGenCMYCheck;
    QLabel *label_10;
    QCheckBox *palGenBWCheck;
    QLabel *label_4;
    QCheckBox *palGenRGBCheck;
    QLabel *label_13;
    QLabel *label_14;
    QCheckBox *palGenUniqueColorsCheck;
    QWidget *customColorsPage;
    QGridLayout *gridLayout_49;
    QGridLayout *gridLayout_43;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *savePaletteButton;
    QSpacerItem *verticalSpacer_36;
    ColorTree *colorListWidget;
    StackedWidget *ditherSettings;
    QWidget *pageEmpty;
    QWidget *pageGeneric;
    QGridLayout *gridLayout_12;
    QGroupBox *Generic_groupBox;
    QGridLayout *gridLayout_9;
    ElideLabel *Generic_dither_name;
    QLabel *label_21;
    QWidget *pageDBS;
    QGridLayout *gridLayout_10;
    QGroupBox *DBS_groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QComboBox *DBS_formula;
    QWidget *pageERR;
    QGridLayout *gridLayout_11;
    QGroupBox *ERR_groupBox;
    QGridLayout *gridLayout_6;
    QDoubleSpinBox *ERR_jitter;
    QCheckBox *ERR_serpentine;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *pageORD;
    QGridLayout *gridLayout_14;
    QGroupBox *ORD_groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_22;
    QDoubleSpinBox *ORD_jitter;
    QWidget *pageRIM;
    QGridLayout *gridLayout_15;
    QGroupBox *RIM_groupBox;
    QGridLayout *gridLayout_5;
    QLabel *label_12;
    QCheckBox *RIM_modRiemersma;
    QWidget *pageTHR;
    QGridLayout *gridLayout_16;
    QGroupBox *THR_groupBox;
    QGridLayout *gridLayout_7;
    QCheckBox *THR_autoThreshold;
    QLabel *label_16;
    QDoubleSpinBox *THR_threshold;
    QLabel *label_15;
    QLabel *label_17;
    QDoubleSpinBox *THR_jitter;
    QWidget *pageVAR;
    QGridLayout *gridLayout_13;
    QGroupBox *VAR_groupBox;
    QGridLayout *gridLayout_8;
    QLabel *label_20;
    QCheckBox *VAR_serpentine;
    QWidget *pageALL;
    QGridLayout *gridLayout_26;
    QGroupBox *ALL_groupBox;
    QGridLayout *gridLayout_25;
    QLabel *label_32;
    QCheckBox *ALL_randomize;
    QWidget *pageORD_IGR;
    QGridLayout *gridLayout_23;
    QGroupBox *ORD_IGR_groupBox;
    QGridLayout *gridLayout_22;
    QLabel *label_37;
    QLabel *label_38;
    QDoubleSpinBox *ORD_IGR_a;
    QDoubleSpinBox *ORD_IGR_jitter;
    QLabel *label_39;
    QDoubleSpinBox *ORD_IGR_b;
    QLabel *label_43;
    QDoubleSpinBox *ORD_IGR_c;
    QSpinBox *ORD_IGR_step;
    QLabel *label_41;
    QWidget *pageORD_VAR;
    QGridLayout *gridLayout_21;
    QGroupBox *ORD_VAR_groupBox;
    QGridLayout *gridLayout_20;
    QLabel *label_31;
    QSpinBox *ORD_VAR_step;
    QLabel *label_30;
    QDoubleSpinBox *ORD_VAR_jitter;
    QWidget *pageGRD;
    QGridLayout *gridLayout_27;
    QGroupBox *GRD_groupBox;
    QGridLayout *gridLayout_24;
    QLabel *label_34;
    QCheckBox *GRD_altAlgorithm;
    QLabel *label_36;
    QSpinBox *GRD_height;
    QLabel *label_45;
    QSpinBox *GRD_width;
    QSpinBox *GRD_minPixels;
    QLabel *label_44;
    QWidget *pageERR_C;
    QGridLayout *gridLayout_42;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_46;
    QLabel *label_19;
    QCheckBox *ERR_C_serpentine;
    QWidget *pageORD_VAR_C;
    QGridLayout *gridLayout_44;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_48;
    QLabel *label_27;
    QSpinBox *ORD_VAR_C_step;
    QWidget *pageORD_IGR_C;
    QGridLayout *gridLayout_45;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_47;
    QLabel *label_23;
    QLabel *label_24;
    QDoubleSpinBox *ORD_IGR_C_a;
    QLabel *label_25;
    QLabel *label_26;
    QDoubleSpinBox *ORD_IGR_C_b;
    QDoubleSpinBox *ORD_IGR_C_c;
    QSpinBox *ORD_IGR_C_step;
    QStackedWidget *imageSettingsStackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_38;
    QGroupBox *imageSettingsGroup;
    QGridLayout *gridLayout_17;
    QVBoxLayout *verticalLayout_20;
    QSpacerItem *verticalSpacer_23;
    QPushButton *resetBrightnessButtonMono;
    QDoubleSpinBox *brightnessEditMono;
    QDoubleSpinBox *gammaEditMono;
    QVBoxLayout *verticalLayout_26;
    QSpacerItem *verticalSpacer_29;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_27;
    QSpacerItem *verticalSpacer_30;
    QLabel *label_28;
    QVBoxLayout *verticalLayout_21;
    QSpacerItem *verticalSpacer_24;
    QPushButton *resetContrastButtonMono;
    QDoubleSpinBox *contrastEditMono;
    QVBoxLayout *verticalLayout_28;
    QSpacerItem *verticalSpacer_31;
    QLabel *label_29;
    QVBoxLayout *verticalLayout_23;
    QSpacerItem *verticalSpacer_26;
    QSlider *brightnessSliderMono;
    QVBoxLayout *verticalLayout_25;
    QSpacerItem *verticalSpacer_28;
    QSlider *gammaSliderMono;
    QVBoxLayout *verticalLayout_22;
    QSpacerItem *verticalSpacer_25;
    QPushButton *resetGammaButtonMono;
    QCheckBox *showOriginalMono;
    QVBoxLayout *verticalLayout_24;
    QSpacerItem *verticalSpacer_27;
    QSlider *contrastSliderMono;
    QSpacerItem *verticalSpacer_32;
    QWidget *page_2;
    QGridLayout *gridLayout_31;
    QGroupBox *imageSettingsGroup_2;
    QGridLayout *gridLayout_19;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer_15;
    QSlider *brightnessSliderColor;
    QVBoxLayout *verticalLayout_16;
    QSpacerItem *verticalSpacer_19;
    QLabel *label_11;
    QCheckBox *showOriginalColor;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_14;
    QPushButton *resetSaturationButtonColor;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer_11;
    QPushButton *resetContrastButtonColor;
    QDoubleSpinBox *brightnessEditColor;
    QVBoxLayout *verticalLayout_15;
    QSpacerItem *verticalSpacer_18;
    QSlider *saturationSliderColor;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_13;
    QPushButton *resetGammaButtonColor;
    QVBoxLayout *verticalLayout_14;
    QSpacerItem *verticalSpacer_17;
    QSlider *gammaSliderColor;
    QDoubleSpinBox *gammaEditColor;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_12;
    QPushButton *resetBrightnessButtonColor;
    QDoubleSpinBox *contrastEditColor;
    QVBoxLayout *verticalLayout_17;
    QSpacerItem *verticalSpacer_20;
    QLabel *label_40;
    QVBoxLayout *verticalLayout_19;
    QSpacerItem *verticalSpacer_22;
    QLabel *label_33;
    QDoubleSpinBox *saturationEditColor;
    QVBoxLayout *verticalLayout_18;
    QSpacerItem *verticalSpacer_21;
    QLabel *label_35;
    QVBoxLayout *verticalLayout_13;
    QSpacerItem *verticalSpacer_16;
    QSlider *contrastSliderColor;
    QSpacerItem *verticalSpacer_33;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1039, 955);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionOpenVideo = new QAction(MainWindow);
        actionOpenVideo->setObjectName("actionOpenVideo");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionSave->setEnabled(false);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName("actionSaveAs");
        actionSaveAs->setEnabled(false);
        actionExportVideo = new QAction(MainWindow);
        actionExportVideo->setObjectName("actionExportVideo");
        actionExportVideo->setEnabled(false);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        actionCopy->setEnabled(false);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        actionQuickTour = new QAction(MainWindow);
        actionQuickTour->setObjectName("actionQuickTour");
        actionChangelog = new QAction(MainWindow);
        actionChangelog->setObjectName("actionChangelog");
        actionCheck_for_Updates = new QAction(MainWindow);
        actionCheck_for_Updates->setObjectName("actionCheck_for_Updates");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout_40 = new QGridLayout(widget);
        gridLayout_40->setSpacing(0);
        gridLayout_40->setObjectName("gridLayout_40");
        gridLayout_40->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        splitter->setChildrenCollapsible(false);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayout_30 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_30->setSpacing(0);
        verticalLayout_30->setObjectName("verticalLayout_30");
        verticalLayout_30->setContentsMargins(0, 0, 0, 0);
        graphicsView = new GraphicsView(verticalLayoutWidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);

        verticalLayout_30->addWidget(graphicsView);

        statusBarWidget = new QWidget(verticalLayoutWidget);
        statusBarWidget->setObjectName("statusBarWidget");
        statusBarWidget->setEnabled(false);
        statusBarWidget->setMinimumSize(QSize(0, 26));
        statusBarWidget->setMaximumSize(QSize(16777215, 26));
        gridLayout_50 = new QGridLayout(statusBarWidget);
        gridLayout_50->setSpacing(0);
        gridLayout_50->setObjectName("gridLayout_50");
        gridLayout_50->setContentsMargins(12, 0, 0, 2);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(4);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_42 = new QLabel(statusBarWidget);
        label_42->setObjectName("label_42");

        horizontalLayout_9->addWidget(label_42);

        zoomLevelCombo = new EditComboBox(statusBarWidget);
        zoomLevelCombo->addItem(QString());
        zoomLevelCombo->addItem(QString());
        zoomLevelCombo->addItem(QString());
        zoomLevelCombo->addItem(QString());
        zoomLevelCombo->addItem(QString());
        zoomLevelCombo->addItem(QString());
        zoomLevelCombo->setObjectName("zoomLevelCombo");
        zoomLevelCombo->setEnabled(true);
        zoomLevelCombo->setMinimumSize(QSize(68, 20));
        zoomLevelCombo->setMaximumSize(QSize(68, 20));
        zoomLevelCombo->setBaseSize(QSize(0, 20));
        zoomLevelCombo->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        zoomLevelCombo->setEditable(true);
        zoomLevelCombo->setInsertPolicy(QComboBox::InsertPolicy::NoInsert);

        horizontalLayout_9->addWidget(zoomLevelCombo);

        label_46 = new QLabel(statusBarWidget);
        label_46->setObjectName("label_46");

        horizontalLayout_9->addWidget(label_46);

        resolutionLabel = new QLabel(statusBarWidget);
        resolutionLabel->setObjectName("resolutionLabel");
        resolutionLabel->setMinimumSize(QSize(20, 0));

        horizontalLayout_9->addWidget(resolutionLabel);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);


        gridLayout_50->addLayout(horizontalLayout_9, 0, 0, 1, 1);


        verticalLayout_30->addWidget(statusBarWidget);

        splitter->addWidget(verticalLayoutWidget);
        imageSettingsContainer = new QWidget(splitter);
        imageSettingsContainer->setObjectName("imageSettingsContainer");
        imageSettingsContainer->setEnabled(true);
        imageSettingsContainer->setMinimumSize(QSize(282, 0));
        verticalLayout = new QVBoxLayout(imageSettingsContainer);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 0, 12, 12);
        tabWidget = new QTabWidget(imageSettingsContainer);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(0, 100));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tabWidget->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        tabMono = new QWidget();
        tabMono->setObjectName("tabMono");
        tabMono->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabMono->sizePolicy().hasHeightForWidth());
        tabMono->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(tabMono);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_4 = new QSpacerItem(20, 4, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        treeWidgetMono = new TreeWidget(tabMono);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidgetMono->setHeaderItem(__qtreewidgetitem);
        treeWidgetMono->setObjectName("treeWidgetMono");
        treeWidgetMono->setEnabled(true);
        sizePolicy1.setHeightForWidth(treeWidgetMono->sizePolicy().hasHeightForWidth());
        treeWidgetMono->setSizePolicy(sizePolicy1);
        treeWidgetMono->setMaximumSize(QSize(16777215, 16777215));
        treeWidgetMono->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        treeWidgetMono->setIndentation(0);
        treeWidgetMono->setColumnCount(1);
        treeWidgetMono->header()->setVisible(false);

        horizontalLayout->addWidget(treeWidgetMono);

        verticalSpacer_9 = new QSpacerItem(0, 4, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout->addItem(verticalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tabMono, QString());
        tabColor = new QWidget();
        tabColor->setObjectName("tabColor");
        tabColor->setEnabled(true);
        sizePolicy2.setHeightForWidth(tabColor->sizePolicy().hasHeightForWidth());
        tabColor->setSizePolicy(sizePolicy2);
        gridLayout_53 = new QGridLayout(tabColor);
        gridLayout_53->setObjectName("gridLayout_53");
        gridLayout_53->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer_5 = new QSpacerItem(20, 4, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        treeWidgetColor = new TreeWidget(tabColor);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        treeWidgetColor->setHeaderItem(__qtreewidgetitem1);
        treeWidgetColor->setObjectName("treeWidgetColor");
        treeWidgetColor->setEnabled(true);
        sizePolicy1.setHeightForWidth(treeWidgetColor->sizePolicy().hasHeightForWidth());
        treeWidgetColor->setSizePolicy(sizePolicy1);
        treeWidgetColor->setMaximumSize(QSize(16777215, 16777215));
        treeWidgetColor->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        treeWidgetColor->setIndentation(0);
        treeWidgetColor->setColumnCount(1);
        treeWidgetColor->header()->setVisible(false);

        horizontalLayout_3->addWidget(treeWidgetColor);

        verticalSpacer_10 = new QSpacerItem(0, 4, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_10);


        verticalLayout_4->addLayout(horizontalLayout_3);


        gridLayout_53->addLayout(verticalLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tabColor, QString());
        tabPalette = new QWidget();
        tabPalette->setObjectName("tabPalette");
        sizePolicy2.setHeightForWidth(tabPalette->sizePolicy().hasHeightForWidth());
        tabPalette->setSizePolicy(sizePolicy2);
        gridLayout_29 = new QGridLayout(tabPalette);
        gridLayout_29->setSpacing(0);
        gridLayout_29->setObjectName("gridLayout_29");
        gridLayout_29->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        monoPaletteGroup = new QGroupBox(tabPalette);
        monoPaletteGroup->setObjectName("monoPaletteGroup");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(monoPaletteGroup->sizePolicy().hasHeightForWidth());
        monoPaletteGroup->setSizePolicy(sizePolicy3);
        monoPaletteGroup->setMinimumSize(QSize(0, 50));
        monoPaletteGroup->setMaximumSize(QSize(16777215, 50));
        monoPaletteGroup->setBaseSize(QSize(0, 50));
        gridLayout_39 = new QGridLayout(monoPaletteGroup);
        gridLayout_39->setObjectName("gridLayout_39");
        gridLayout_39->setContentsMargins(8, 2, 8, 6);
        gridLayout_18 = new QGridLayout();
        gridLayout_18->setObjectName("gridLayout_18");
        gridLayout_18->setHorizontalSpacing(4);
        horizontalSpacer = new QSpacerItem(40, 4, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_18->addItem(horizontalSpacer, 0, 5, 1, 1);

        monoColorOneButton = new DoublePushButton(monoPaletteGroup);
        monoColorOneButton->setObjectName("monoColorOneButton");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(monoColorOneButton->sizePolicy().hasHeightForWidth());
        monoColorOneButton->setSizePolicy(sizePolicy4);
        monoColorOneButton->setMinimumSize(QSize(22, 22));
        monoColorOneButton->setMaximumSize(QSize(22, 22));

        gridLayout_18->addWidget(monoColorOneButton, 0, 1, 1, 1);

        monoColorTwoButton = new DoublePushButton(monoPaletteGroup);
        monoColorTwoButton->setObjectName("monoColorTwoButton");
        sizePolicy4.setHeightForWidth(monoColorTwoButton->sizePolicy().hasHeightForWidth());
        monoColorTwoButton->setSizePolicy(sizePolicy4);
        monoColorTwoButton->setMinimumSize(QSize(22, 22));
        monoColorTwoButton->setMaximumSize(QSize(22, 22));

        gridLayout_18->addWidget(monoColorTwoButton, 0, 3, 1, 1);

        resetMonoColors = new QPushButton(monoPaletteGroup);
        resetMonoColors->setObjectName("resetMonoColors");
        resetMonoColors->setEnabled(false);
        sizePolicy4.setHeightForWidth(resetMonoColors->sizePolicy().hasHeightForWidth());
        resetMonoColors->setSizePolicy(sizePolicy4);
        resetMonoColors->setMinimumSize(QSize(20, 20));
        resetMonoColors->setMaximumSize(QSize(20, 20));

        gridLayout_18->addWidget(resetMonoColors, 0, 6, 1, 1);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setSpacing(0);
        verticalLayout_29->setObjectName("verticalLayout_29");
        verticalSpacer_35 = new QSpacerItem(0, 2, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_29->addItem(verticalSpacer_35);

        monoColorTwoLabel = new DoubleLabel(monoPaletteGroup);
        monoColorTwoLabel->setObjectName("monoColorTwoLabel");
        monoColorTwoLabel->setMinimumSize(QSize(64, 22));
        monoColorTwoLabel->setMaximumSize(QSize(64, 22));
        monoColorTwoLabel->setBaseSize(QSize(64, 0));

        verticalLayout_29->addWidget(monoColorTwoLabel);


        gridLayout_18->addLayout(verticalLayout_29, 0, 4, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalSpacer_34 = new QSpacerItem(0, 2, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_34);

        monoColorOneLabel = new DoubleLabel(monoPaletteGroup);
        monoColorOneLabel->setObjectName("monoColorOneLabel");
        monoColorOneLabel->setMinimumSize(QSize(64, 22));
        monoColorOneLabel->setMaximumSize(QSize(64, 22));
        monoColorOneLabel->setBaseSize(QSize(64, 22));

        verticalLayout_7->addWidget(monoColorOneLabel);


        gridLayout_18->addLayout(verticalLayout_7, 0, 2, 1, 1);


        gridLayout_39->addLayout(gridLayout_18, 1, 0, 1, 1);


        verticalLayout_3->addWidget(monoPaletteGroup);

        colorPaletteGroup = new QGroupBox(tabPalette);
        colorPaletteGroup->setObjectName("colorPaletteGroup");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(colorPaletteGroup->sizePolicy().hasHeightForWidth());
        colorPaletteGroup->setSizePolicy(sizePolicy5);
        gridLayout_37 = new QGridLayout(colorPaletteGroup);
        gridLayout_37->setSpacing(0);
        gridLayout_37->setObjectName("gridLayout_37");
        gridLayout_37->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout_5->setContentsMargins(5, 4, 5, 4);
        widget_3 = new QWidget(colorPaletteGroup);
        widget_3->setObjectName("widget_3");
        sizePolicy3.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy3);
        widget_3->setMinimumSize(QSize(0, 0));
        widget_3->setMaximumSize(QSize(16777215, 16777215));
        widget_3->setBaseSize(QSize(0, 0));
        widget_3->setStyleSheet(QString::fromUtf8(""));
        gridLayout_41 = new QGridLayout(widget_3);
        gridLayout_41->setSpacing(0);
        gridLayout_41->setObjectName("gridLayout_41");
        gridLayout_41->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        sizePolicy3.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy3);
        widget_2->setMinimumSize(QSize(0, 0));
        widget_2->setMaximumSize(QSize(16777215, 16777215));
        widget_2->setBaseSize(QSize(0, 0));
        gridLayout_36 = new QGridLayout(widget_2);
        gridLayout_36->setObjectName("gridLayout_36");
        gridLayout_36->setHorizontalSpacing(0);
        gridLayout_36->setVerticalSpacing(2);
        gridLayout_36->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_36->addItem(verticalSpacer_8, 6, 0, 1, 1);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName("label_8");
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);

        gridLayout_36->addWidget(label_8, 1, 0, 1, 1);

        valueWeightLabel = new QLabel(widget_2);
        valueWeightLabel->setObjectName("valueWeightLabel");

        gridLayout_36->addWidget(valueWeightLabel, 5, 0, 1, 1);

        chromaWeightLabel = new QLabel(widget_2);
        chromaWeightLabel->setObjectName("chromaWeightLabel");

        gridLayout_36->addWidget(chromaWeightLabel, 4, 0, 1, 1);

        srcIlluminantLabel = new QLabel(widget_2);
        srcIlluminantLabel->setObjectName("srcIlluminantLabel");
        sizePolicy3.setHeightForWidth(srcIlluminantLabel->sizePolicy().hasHeightForWidth());
        srcIlluminantLabel->setSizePolicy(sizePolicy3);

        gridLayout_36->addWidget(srcIlluminantLabel, 2, 0, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName("label");
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout_36->addWidget(label, 0, 0, 1, 1);

        hueWeightLabel = new QLabel(widget_2);
        hueWeightLabel->setObjectName("hueWeightLabel");
        sizePolicy3.setHeightForWidth(hueWeightLabel->sizePolicy().hasHeightForWidth());
        hueWeightLabel->setSizePolicy(sizePolicy3);

        gridLayout_36->addWidget(hueWeightLabel, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        spinBoxHue = new QDoubleSpinBox(widget_2);
        spinBoxHue->setObjectName("spinBoxHue");
        spinBoxHue->setMinimumSize(QSize(51, 0));
        spinBoxHue->setMaximumSize(QSize(51, 16777215));
        spinBoxHue->setBaseSize(QSize(51, 0));
        spinBoxHue->setKeyboardTracking(false);
        spinBoxHue->setMaximum(1.000000000000000);
        spinBoxHue->setSingleStep(0.040000000000000);

        horizontalLayout_2->addWidget(spinBoxHue);

        resetHueWeightButton = new QPushButton(widget_2);
        resetHueWeightButton->setObjectName("resetHueWeightButton");

        horizontalLayout_2->addWidget(resetHueWeightButton);


        gridLayout_36->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        spinBoxChroma = new QDoubleSpinBox(widget_2);
        spinBoxChroma->setObjectName("spinBoxChroma");
        spinBoxChroma->setMinimumSize(QSize(51, 0));
        spinBoxChroma->setMaximumSize(QSize(51, 16777215));
        spinBoxChroma->setBaseSize(QSize(51, 0));
        spinBoxChroma->setKeyboardTracking(false);
        spinBoxChroma->setMaximum(1.000000000000000);
        spinBoxChroma->setSingleStep(0.040000000000000);

        horizontalLayout_4->addWidget(spinBoxChroma);

        resetChromaWeightButton = new QPushButton(widget_2);
        resetChromaWeightButton->setObjectName("resetChromaWeightButton");

        horizontalLayout_4->addWidget(resetChromaWeightButton);


        gridLayout_36->addLayout(horizontalLayout_4, 4, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        spinBoxValue = new QDoubleSpinBox(widget_2);
        spinBoxValue->setObjectName("spinBoxValue");
        spinBoxValue->setMinimumSize(QSize(51, 0));
        spinBoxValue->setMaximumSize(QSize(51, 16777215));
        spinBoxValue->setBaseSize(QSize(51, 0));
        spinBoxValue->setKeyboardTracking(false);
        spinBoxValue->setMaximum(1.000000000000000);
        spinBoxValue->setSingleStep(0.040000000000000);

        horizontalLayout_5->addWidget(spinBoxValue);

        resetValueWeightButton = new QPushButton(widget_2);
        resetValueWeightButton->setObjectName("resetValueWeightButton");

        horizontalLayout_5->addWidget(resetValueWeightButton);


        gridLayout_36->addLayout(horizontalLayout_5, 5, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        srcIlluminantCombo = new QComboBox(widget_2);
        srcIlluminantCombo->setObjectName("srcIlluminantCombo");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(srcIlluminantCombo->sizePolicy().hasHeightForWidth());
        srcIlluminantCombo->setSizePolicy(sizePolicy6);
        srcIlluminantCombo->setMinimumSize(QSize(100, 0));
        srcIlluminantCombo->setMaximumSize(QSize(100, 16777215));
        srcIlluminantCombo->setBaseSize(QSize(100, 0));
        srcIlluminantCombo->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        horizontalLayout_6->addWidget(srcIlluminantCombo);


        gridLayout_36->addLayout(horizontalLayout_6, 2, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_8 = new QSpacerItem(0, 1, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        colorComparisonCombo = new QComboBox(widget_2);
        colorComparisonCombo->setObjectName("colorComparisonCombo");
        sizePolicy6.setHeightForWidth(colorComparisonCombo->sizePolicy().hasHeightForWidth());
        colorComparisonCombo->setSizePolicy(sizePolicy6);
        colorComparisonCombo->setMinimumSize(QSize(100, 0));
        colorComparisonCombo->setMaximumSize(QSize(100, 16777215));
        colorComparisonCombo->setBaseSize(QSize(100, 0));
        colorComparisonCombo->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        horizontalLayout_8->addWidget(colorComparisonCombo);


        gridLayout_36->addLayout(horizontalLayout_8, 1, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_7 = new QSpacerItem(0, 1, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        paletteSourceCombo = new QComboBox(widget_2);
        paletteSourceCombo->addItem(QString());
        paletteSourceCombo->addItem(QString());
        paletteSourceCombo->addItem(QString());
        paletteSourceCombo->setObjectName("paletteSourceCombo");
        sizePolicy6.setHeightForWidth(paletteSourceCombo->sizePolicy().hasHeightForWidth());
        paletteSourceCombo->setSizePolicy(sizePolicy6);
        paletteSourceCombo->setMinimumSize(QSize(100, 0));
        paletteSourceCombo->setMaximumSize(QSize(100, 16777215));
        paletteSourceCombo->setBaseSize(QSize(100, 0));
        paletteSourceCombo->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        horizontalLayout_7->addWidget(paletteSourceCombo);


        gridLayout_36->addLayout(horizontalLayout_7, 0, 1, 1, 1);


        verticalLayout_6->addWidget(widget_2);


        gridLayout_41->addLayout(verticalLayout_6, 0, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_41->addItem(verticalSpacer_7, 1, 1, 1, 1);


        verticalLayout_5->addWidget(widget_3);

        paletteSourceWidget = new QStackedWidget(colorPaletteGroup);
        paletteSourceWidget->setObjectName("paletteSourceWidget");
        sizePolicy2.setHeightForWidth(paletteSourceWidget->sizePolicy().hasHeightForWidth());
        paletteSourceWidget->setSizePolicy(sizePolicy2);
        paletteSourceWidget->setMinimumSize(QSize(0, 0));
        paletteSourceWidget->setMaximumSize(QSize(16777215, 16777215));
        paletteSourceWidget->setBaseSize(QSize(0, 0));
        paletteSourceWidget->setStyleSheet(QString::fromUtf8(""));
        builtInPalettePage = new QWidget();
        builtInPalettePage->setObjectName("builtInPalettePage");
        sizePolicy.setHeightForWidth(builtInPalettePage->sizePolicy().hasHeightForWidth());
        builtInPalettePage->setSizePolicy(sizePolicy);
        builtInPalettePage->setMinimumSize(QSize(0, 0));
        builtInPalettePage->setMaximumSize(QSize(16777215, 16777215));
        builtInPalettePage->setBaseSize(QSize(0, 0));
        builtInPalettePage->setStyleSheet(QString::fromUtf8(""));
        gridLayout_30 = new QGridLayout(builtInPalettePage);
        gridLayout_30->setSpacing(0);
        gridLayout_30->setObjectName("gridLayout_30");
        gridLayout_30->setContentsMargins(0, 0, 0, 0);
        gridLayout_28 = new QGridLayout();
        gridLayout_28->setSpacing(0);
        gridLayout_28->setObjectName("gridLayout_28");
        gridLayout_28->setContentsMargins(-1, -1, 0, -1);
        label_2 = new QLabel(builtInPalettePage);
        label_2->setObjectName("label_2");

        gridLayout_28->addWidget(label_2, 0, 0, 1, 1);

        predefinedPaletteCombo = new SectionComboBox(builtInPalettePage);
        predefinedPaletteCombo->setObjectName("predefinedPaletteCombo");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(predefinedPaletteCombo->sizePolicy().hasHeightForWidth());
        predefinedPaletteCombo->setSizePolicy(sizePolicy7);
        predefinedPaletteCombo->setMinimumSize(QSize(174, 0));
        predefinedPaletteCombo->setMaximumSize(QSize(174, 16777215));
        predefinedPaletteCombo->setBaseSize(QSize(174, 0));

        gridLayout_28->addWidget(predefinedPaletteCombo, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(1, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_28->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_30->addLayout(gridLayout_28, 0, 0, 1, 1);

        paletteSourceWidget->addWidget(builtInPalettePage);
        filePalettePage = new QWidget();
        filePalettePage->setObjectName("filePalettePage");
        sizePolicy.setHeightForWidth(filePalettePage->sizePolicy().hasHeightForWidth());
        filePalettePage->setSizePolicy(sizePolicy);
        filePalettePage->setMinimumSize(QSize(0, 0));
        filePalettePage->setMaximumSize(QSize(16777215, 16777215));
        filePalettePage->setBaseSize(QSize(0, 0));
        gridLayout_33 = new QGridLayout(filePalettePage);
        gridLayout_33->setSpacing(0);
        gridLayout_33->setObjectName("gridLayout_33");
        gridLayout_33->setContentsMargins(0, 0, 0, 0);
        gridLayout_32 = new QGridLayout();
        gridLayout_32->setObjectName("gridLayout_32");
        gridLayout_32->setHorizontalSpacing(5);
        gridLayout_32->setVerticalSpacing(0);
        palettePathEdit = new QLineEdit(filePalettePage);
        palettePathEdit->setObjectName("palettePathEdit");

        gridLayout_32->addWidget(palettePathEdit, 0, 1, 1, 1);

        paletteBrowseButton = new QPushButton(filePalettePage);
        paletteBrowseButton->setObjectName("paletteBrowseButton");

        gridLayout_32->addWidget(paletteBrowseButton, 0, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(1, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_32->addItem(verticalSpacer_6, 1, 0, 1, 1);


        gridLayout_33->addLayout(gridLayout_32, 0, 0, 1, 1);

        paletteSourceWidget->addWidget(filePalettePage);
        reducedColorsPage = new QWidget();
        reducedColorsPage->setObjectName("reducedColorsPage");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(reducedColorsPage->sizePolicy().hasHeightForWidth());
        reducedColorsPage->setSizePolicy(sizePolicy8);
        reducedColorsPage->setMinimumSize(QSize(0, 0));
        reducedColorsPage->setMaximumSize(QSize(16777215, 16777215));
        reducedColorsPage->setBaseSize(QSize(0, 0));
        gridLayout_35 = new QGridLayout(reducedColorsPage);
        gridLayout_35->setSpacing(0);
        gridLayout_35->setObjectName("gridLayout_35");
        gridLayout_35->setContentsMargins(0, 0, 0, 0);
        gridLayout_34 = new QGridLayout();
        gridLayout_34->setObjectName("gridLayout_34");
        gridLayout_34->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        gridLayout_34->setHorizontalSpacing(5);
        gridLayout_34->setVerticalSpacing(2);
        label_18 = new QLabel(reducedColorsPage);
        label_18->setObjectName("label_18");

        gridLayout_34->addWidget(label_18, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 1, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_34->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        paletteColorsEdit = new QLineEdit(reducedColorsPage);
        paletteColorsEdit->setObjectName("paletteColorsEdit");
        paletteColorsEdit->setMinimumSize(QSize(100, 0));
        paletteColorsEdit->setMaximumSize(QSize(100, 16777215));
        paletteColorsEdit->setBaseSize(QSize(100, 0));
        paletteColorsEdit->setMaxLength(32772);

        gridLayout_34->addWidget(paletteColorsEdit, 0, 2, 1, 1);

        label_3 = new QLabel(reducedColorsPage);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 0));

        gridLayout_34->addWidget(label_3, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(1, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_34->addItem(verticalSpacer_3, 6, 2, 1, 1);

        colorReductionCombo = new QComboBox(reducedColorsPage);
        colorReductionCombo->addItem(QString());
        colorReductionCombo->addItem(QString());
        colorReductionCombo->addItem(QString());
        colorReductionCombo->setObjectName("colorReductionCombo");
        colorReductionCombo->setMinimumSize(QSize(100, 0));
        colorReductionCombo->setMaximumSize(QSize(100, 16777215));
        colorReductionCombo->setBaseSize(QSize(100, 0));
        colorReductionCombo->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        gridLayout_34->addWidget(colorReductionCombo, 1, 2, 1, 1);

        palGenCMYCheck = new QCheckBox(reducedColorsPage);
        palGenCMYCheck->setObjectName("palGenCMYCheck");
        QSizePolicy sizePolicy9(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(palGenCMYCheck->sizePolicy().hasHeightForWidth());
        palGenCMYCheck->setSizePolicy(sizePolicy9);

        gridLayout_34->addWidget(palGenCMYCheck, 5, 2, 1, 1);

        label_10 = new QLabel(reducedColorsPage);
        label_10->setObjectName("label_10");
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(0, 20));

        gridLayout_34->addWidget(label_10, 4, 0, 1, 1);

        palGenBWCheck = new QCheckBox(reducedColorsPage);
        palGenBWCheck->setObjectName("palGenBWCheck");
        sizePolicy9.setHeightForWidth(palGenBWCheck->sizePolicy().hasHeightForWidth());
        palGenBWCheck->setSizePolicy(sizePolicy9);

        gridLayout_34->addWidget(palGenBWCheck, 3, 2, 1, 1);

        label_4 = new QLabel(reducedColorsPage);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 20));

        gridLayout_34->addWidget(label_4, 2, 0, 1, 1);

        palGenRGBCheck = new QCheckBox(reducedColorsPage);
        palGenRGBCheck->setObjectName("palGenRGBCheck");
        sizePolicy9.setHeightForWidth(palGenRGBCheck->sizePolicy().hasHeightForWidth());
        palGenRGBCheck->setSizePolicy(sizePolicy9);

        gridLayout_34->addWidget(palGenRGBCheck, 4, 2, 1, 1);

        label_13 = new QLabel(reducedColorsPage);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(0, 20));

        gridLayout_34->addWidget(label_13, 3, 0, 1, 1);

        label_14 = new QLabel(reducedColorsPage);
        label_14->setObjectName("label_14");
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setMinimumSize(QSize(0, 20));

        gridLayout_34->addWidget(label_14, 5, 0, 1, 1);

        palGenUniqueColorsCheck = new QCheckBox(reducedColorsPage);
        palGenUniqueColorsCheck->setObjectName("palGenUniqueColorsCheck");
        sizePolicy9.setHeightForWidth(palGenUniqueColorsCheck->sizePolicy().hasHeightForWidth());
        palGenUniqueColorsCheck->setSizePolicy(sizePolicy9);

        gridLayout_34->addWidget(palGenUniqueColorsCheck, 2, 2, 1, 1);


        gridLayout_35->addLayout(gridLayout_34, 0, 0, 1, 1);

        paletteSourceWidget->addWidget(reducedColorsPage);
        customColorsPage = new QWidget();
        customColorsPage->setObjectName("customColorsPage");
        gridLayout_49 = new QGridLayout(customColorsPage);
        gridLayout_49->setSpacing(0);
        gridLayout_49->setObjectName("gridLayout_49");
        gridLayout_49->setContentsMargins(0, 0, 0, 0);
        gridLayout_43 = new QGridLayout();
        gridLayout_43->setSpacing(0);
        gridLayout_43->setObjectName("gridLayout_43");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_43->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        savePaletteButton = new QPushButton(customColorsPage);
        savePaletteButton->setObjectName("savePaletteButton");

        gridLayout_43->addWidget(savePaletteButton, 0, 0, 1, 1);

        verticalSpacer_36 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_43->addItem(verticalSpacer_36, 1, 0, 1, 1);


        gridLayout_49->addLayout(gridLayout_43, 0, 0, 1, 1);

        paletteSourceWidget->addWidget(customColorsPage);

        verticalLayout_5->addWidget(paletteSourceWidget);

        colorListWidget = new ColorTree(colorPaletteGroup);
        colorListWidget->setObjectName("colorListWidget");
        QSizePolicy sizePolicy10(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(colorListWidget->sizePolicy().hasHeightForWidth());
        colorListWidget->setSizePolicy(sizePolicy10);
        colorListWidget->setMinimumSize(QSize(0, 28));
        colorListWidget->setStyleSheet(QString::fromUtf8("QTreeWidget {margin-top: 4px; }"));
        colorListWidget->setIndentation(0);
        colorListWidget->header()->setVisible(false);

        verticalLayout_5->addWidget(colorListWidget);

        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 60);

        gridLayout_37->addLayout(verticalLayout_5, 0, 1, 1, 1);


        verticalLayout_3->addWidget(colorPaletteGroup);


        gridLayout_29->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tabPalette, QString());

        verticalLayout->addWidget(tabWidget);

        ditherSettings = new StackedWidget(imageSettingsContainer);
        ditherSettings->setObjectName("ditherSettings");
        ditherSettings->setEnabled(true);
        QSizePolicy sizePolicy11(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(ditherSettings->sizePolicy().hasHeightForWidth());
        ditherSettings->setSizePolicy(sizePolicy11);
        pageEmpty = new QWidget();
        pageEmpty->setObjectName("pageEmpty");
        QSizePolicy sizePolicy12(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(pageEmpty->sizePolicy().hasHeightForWidth());
        pageEmpty->setSizePolicy(sizePolicy12);
        pageEmpty->setMinimumSize(QSize(0, 0));
        ditherSettings->addWidget(pageEmpty);
        pageGeneric = new QWidget();
        pageGeneric->setObjectName("pageGeneric");
        sizePolicy12.setHeightForWidth(pageGeneric->sizePolicy().hasHeightForWidth());
        pageGeneric->setSizePolicy(sizePolicy12);
        pageGeneric->setMinimumSize(QSize(0, 60));
        gridLayout_12 = new QGridLayout(pageGeneric);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setObjectName("gridLayout_12");
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        Generic_groupBox = new QGroupBox(pageGeneric);
        Generic_groupBox->setObjectName("Generic_groupBox");
        gridLayout_9 = new QGridLayout(Generic_groupBox);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_9->setContentsMargins(10, 8, 10, 10);
        Generic_dither_name = new ElideLabel(Generic_groupBox);
        Generic_dither_name->setObjectName("Generic_dither_name");
        Generic_dither_name->setMinimumSize(QSize(0, 22));

        gridLayout_9->addWidget(Generic_dither_name, 0, 1, 1, 1);

        label_21 = new QLabel(Generic_groupBox);
        label_21->setObjectName("label_21");
        label_21->setMinimumSize(QSize(0, 22));

        gridLayout_9->addWidget(label_21, 0, 0, 1, 1);


        gridLayout_12->addWidget(Generic_groupBox, 0, 0, 1, 1);

        ditherSettings->addWidget(pageGeneric);
        pageDBS = new QWidget();
        pageDBS->setObjectName("pageDBS");
        sizePolicy12.setHeightForWidth(pageDBS->sizePolicy().hasHeightForWidth());
        pageDBS->setSizePolicy(sizePolicy12);
        pageDBS->setMinimumSize(QSize(0, 60));
        gridLayout_10 = new QGridLayout(pageDBS);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        DBS_groupBox = new QGroupBox(pageDBS);
        DBS_groupBox->setObjectName("DBS_groupBox");
        gridLayout_3 = new QGridLayout(DBS_groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(10, 8, 10, 10);
        label_5 = new QLabel(DBS_groupBox);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        DBS_formula = new QComboBox(DBS_groupBox);
        DBS_formula->addItem(QString());
        DBS_formula->addItem(QString());
        DBS_formula->addItem(QString());
        DBS_formula->addItem(QString());
        DBS_formula->addItem(QString());
        DBS_formula->addItem(QString());
        DBS_formula->addItem(QString());
        DBS_formula->setObjectName("DBS_formula");

        gridLayout_3->addWidget(DBS_formula, 0, 1, 1, 1);


        gridLayout_10->addWidget(DBS_groupBox, 0, 0, 1, 1);

        ditherSettings->addWidget(pageDBS);
        pageERR = new QWidget();
        pageERR->setObjectName("pageERR");
        sizePolicy12.setHeightForWidth(pageERR->sizePolicy().hasHeightForWidth());
        pageERR->setSizePolicy(sizePolicy12);
        pageERR->setMinimumSize(QSize(0, 84));
        gridLayout_11 = new QGridLayout(pageERR);
        gridLayout_11->setSpacing(0);
        gridLayout_11->setObjectName("gridLayout_11");
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        ERR_groupBox = new QGroupBox(pageERR);
        ERR_groupBox->setObjectName("ERR_groupBox");
        gridLayout_6 = new QGridLayout(ERR_groupBox);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(10, 8, 10, 10);
        ERR_jitter = new QDoubleSpinBox(ERR_groupBox);
        ERR_jitter->setObjectName("ERR_jitter");
        ERR_jitter->setKeyboardTracking(false);
        ERR_jitter->setMaximum(1.000000000000000);
        ERR_jitter->setSingleStep(0.050000000000000);

        gridLayout_6->addWidget(ERR_jitter, 0, 1, 1, 1);

        ERR_serpentine = new QCheckBox(ERR_groupBox);
        ERR_serpentine->setObjectName("ERR_serpentine");
        ERR_serpentine->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        gridLayout_6->addWidget(ERR_serpentine, 1, 1, 1, 1);

        label_6 = new QLabel(ERR_groupBox);
        label_6->setObjectName("label_6");

        gridLayout_6->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(ERR_groupBox);
        label_7->setObjectName("label_7");

        gridLayout_6->addWidget(label_7, 1, 0, 1, 1);


        gridLayout_11->addWidget(ERR_groupBox, 0, 0, 1, 1);

        ditherSettings->addWidget(pageERR);
        pageORD = new QWidget();
        pageORD->setObjectName("pageORD");
        sizePolicy12.setHeightForWidth(pageORD->sizePolicy().hasHeightForWidth());
        pageORD->setSizePolicy(sizePolicy12);
        pageORD->setMinimumSize(QSize(0, 60));
        gridLayout_14 = new QGridLayout(pageORD);
        gridLayout_14->setSpacing(0);
        gridLayout_14->setObjectName("gridLayout_14");
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        ORD_groupBox = new QGroupBox(pageORD);
        ORD_groupBox->setObjectName("ORD_groupBox");
        ORD_groupBox->setEnabled(true);
        gridLayout_4 = new QGridLayout(ORD_groupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(10, 8, 10, 10);
        label_22 = new QLabel(ORD_groupBox);
        label_22->setObjectName("label_22");

        gridLayout_4->addWidget(label_22, 0, 0, 1, 1);

        ORD_jitter = new QDoubleSpinBox(ORD_groupBox);
        ORD_jitter->setObjectName("ORD_jitter");
        ORD_jitter->setKeyboardTracking(false);
        ORD_jitter->setMaximum(1.000000000000000);
        ORD_jitter->setSingleStep(0.010000000000000);

        gridLayout_4->addWidget(ORD_jitter, 0, 1, 1, 1);


        gridLayout_14->addWidget(ORD_groupBox, 0, 0, 1, 1);

        ditherSettings->addWidget(pageORD);
        pageRIM = new QWidget();
        pageRIM->setObjectName("pageRIM");
        sizePolicy12.setHeightForWidth(pageRIM->sizePolicy().hasHeightForWidth());
        pageRIM->setSizePolicy(sizePolicy12);
        pageRIM->setMinimumSize(QSize(0, 60));
        gridLayout_15 = new QGridLayout(pageRIM);
        gridLayout_15->setSpacing(0);
        gridLayout_15->setObjectName("gridLayout_15");
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        RIM_groupBox = new QGroupBox(pageRIM);
        RIM_groupBox->setObjectName("RIM_groupBox");
        gridLayout_5 = new QGridLayout(RIM_groupBox);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(10, 8, 10, 10);
        label_12 = new QLabel(RIM_groupBox);
        label_12->setObjectName("label_12");

        gridLayout_5->addWidget(label_12, 0, 0, 1, 1);

        RIM_modRiemersma = new QCheckBox(RIM_groupBox);
        RIM_modRiemersma->setObjectName("RIM_modRiemersma");
        RIM_modRiemersma->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        gridLayout_5->addWidget(RIM_modRiemersma, 0, 1, 1, 1);


        gridLayout_15->addWidget(RIM_groupBox, 0, 0, 1, 1);

        ditherSettings->addWidget(pageRIM);
        pageTHR = new QWidget();
        pageTHR->setObjectName("pageTHR");
        sizePolicy12.setHeightForWidth(pageTHR->sizePolicy().hasHeightForWidth());
        pageTHR->setSizePolicy(sizePolicy12);
        pageTHR->setMinimumSize(QSize(0, 116));
        gridLayout_16 = new QGridLayout(pageTHR);
        gridLayout_16->setSpacing(0);
        gridLayout_16->setObjectName("gridLayout_16");
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        THR_groupBox = new QGroupBox(pageTHR);
        THR_groupBox->setObjectName("THR_groupBox");
        gridLayout_7 = new QGridLayout(THR_groupBox);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(10, 8, 10, 10);
        THR_autoThreshold = new QCheckBox(THR_groupBox);
        THR_autoThreshold->setObjectName("THR_autoThreshold");
        THR_autoThreshold->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        gridLayout_7->addWidget(THR_autoThreshold, 2, 1, 1, 1);

        label_16 = new QLabel(THR_groupBox);
        label_16->setObjectName("label_16");

        gridLayout_7->addWidget(label_16, 1, 0, 1, 1);

        THR_threshold = new QDoubleSpinBox(THR_groupBox);
        THR_threshold->setObjectName("THR_threshold");
        THR_threshold->setKeyboardTracking(false);
        THR_threshold->setMaximum(1.000000000000000);
        THR_threshold->setSingleStep(0.050000000000000);
        THR_threshold->setValue(0.500000000000000);

        gridLayout_7->addWidget(THR_threshold, 1, 1, 1, 1);

        label_15 = new QLabel(THR_groupBox);
        label_15->setObjectName("label_15");

        gridLayout_7->addWidget(label_15, 0, 0, 1, 1);

        label_17 = new QLabel(THR_groupBox);
        label_17->setObjectName("label_17");
        label_17->setMinimumSize(QSize(0, 22));

        gridLayout_7->addWidget(label_17, 2, 0, 1, 1);

        THR_jitter = new QDoubleSpinBox(THR_groupBox);
        THR_jitter->setObjectName("THR_jitter");
        THR_jitter->setKeyboardTracking(false);
        THR_jitter->setMaximum(1.000000000000000);
        THR_jitter->setSingleStep(0.050000000000000);

        gridLayout_7->addWidget(THR_jitter, 0, 1, 1, 1);


        gridLayout_16->addWidget(THR_groupBox, 0, 0, 1, 1);

        ditherSettings->addWidget(pageTHR);
        pageVAR = new QWidget();
        pageVAR->setObjectName("pageVAR");
        sizePolicy12.setHeightForWidth(pageVAR->sizePolicy().hasHeightForWidth());
        pageVAR->setSizePolicy(sizePolicy12);
        pageVAR->setMinimumSize(QSize(0, 60));
        gridLayout_13 = new QGridLayout(pageVAR);
        gridLayout_13->setSpacing(0);
        gridLayout_13->setObjectName("gridLayout_13");
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        VAR_groupBox = new QGroupBox(pageVAR);
        VAR_groupBox->setObjectName("VAR_groupBox");
        gridLayout_8 = new QGridLayout(VAR_groupBox);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(10, 8, 10, 10);
        label_20 = new QLabel(VAR_groupBox);
        label_20->setObjectName("label_20");

        gridLayout_8->addWidget(label_20, 0, 0, 1, 1);

        VAR_serpentine = new QCheckBox(VAR_groupBox);
        VAR_serpentine->setObjectName("VAR_serpentine");
        VAR_serpentine->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        gridLayout_8->addWidget(VAR_serpentine, 0, 1, 1, 1);


        gridLayout_13->addWidget(VAR_groupBox, 0, 0, 1, 1);

        ditherSettings->addWidget(pageVAR);
        pageALL = new QWidget();
        pageALL->setObjectName("pageALL");
        pageALL->setEnabled(true);
        sizePolicy12.setHeightForWidth(pageALL->sizePolicy().hasHeightForWidth());
        pageALL->setSizePolicy(sizePolicy12);
        pageALL->setMinimumSize(QSize(0, 60));
        gridLayout_26 = new QGridLayout(pageALL);
        gridLayout_26->setSpacing(0);
        gridLayout_26->setObjectName("gridLayout_26");
        gridLayout_26->setContentsMargins(0, 0, 0, 0);
        ALL_groupBox = new QGroupBox(pageALL);
        ALL_groupBox->setObjectName("ALL_groupBox");
        gridLayout_25 = new QGridLayout(ALL_groupBox);
        gridLayout_25->setObjectName("gridLayout_25");
        gridLayout_25->setContentsMargins(10, 8, 10, 10);
        label_32 = new QLabel(ALL_groupBox);
        label_32->setObjectName("label_32");

        gridLayout_25->addWidget(label_32, 0, 0, 1, 1);

        ALL_randomize = new QCheckBox(ALL_groupBox);
        ALL_randomize->setObjectName("ALL_randomize");
        ALL_randomize->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        gridLayout_25->addWidget(ALL_randomize, 0, 1, 1, 1);


        gridLayout_26->addWidget(ALL_groupBox, 0, 0, 1, 1);

        ditherSettings->addWidget(pageALL);
        pageORD_IGR = new QWidget();
        pageORD_IGR->setObjectName("pageORD_IGR");
        sizePolicy12.setHeightForWidth(pageORD_IGR->sizePolicy().hasHeightForWidth());
        pageORD_IGR->setSizePolicy(sizePolicy12);
        pageORD_IGR->setMinimumSize(QSize(0, 180));
        gridLayout_23 = new QGridLayout(pageORD_IGR);
        gridLayout_23->setSpacing(0);
        gridLayout_23->setObjectName("gridLayout_23");
        gridLayout_23->setContentsMargins(0, 0, 0, 0);
        ORD_IGR_groupBox = new QGroupBox(pageORD_IGR);
        ORD_IGR_groupBox->setObjectName("ORD_IGR_groupBox");
        gridLayout_22 = new QGridLayout(ORD_IGR_groupBox);
        gridLayout_22->setObjectName("gridLayout_22");
        gridLayout_22->setContentsMargins(10, 8, 10, 10);
        label_37 = new QLabel(ORD_IGR_groupBox);
        label_37->setObjectName("label_37");

        gridLayout_22->addWidget(label_37, 0, 0, 1, 1);

        label_38 = new QLabel(ORD_IGR_groupBox);
        label_38->setObjectName("label_38");

        gridLayout_22->addWidget(label_38, 1, 0, 1, 1);

        ORD_IGR_a = new QDoubleSpinBox(ORD_IGR_groupBox);
        ORD_IGR_a->setObjectName("ORD_IGR_a");
        ORD_IGR_a->setKeyboardTracking(false);
        ORD_IGR_a->setDecimals(4);
        ORD_IGR_a->setMaximum(100.000000000000000);
        ORD_IGR_a->setSingleStep(0.100000000000000);

        gridLayout_22->addWidget(ORD_IGR_a, 2, 1, 1, 1);

        ORD_IGR_jitter = new QDoubleSpinBox(ORD_IGR_groupBox);
        ORD_IGR_jitter->setObjectName("ORD_IGR_jitter");
        ORD_IGR_jitter->setFocusPolicy(Qt::FocusPolicy::WheelFocus);
        ORD_IGR_jitter->setKeyboardTracking(false);
        ORD_IGR_jitter->setMaximum(1.000000000000000);
        ORD_IGR_jitter->setSingleStep(0.010000000000000);

        gridLayout_22->addWidget(ORD_IGR_jitter, 0, 1, 1, 1);

        label_39 = new QLabel(ORD_IGR_groupBox);
        label_39->setObjectName("label_39");

        gridLayout_22->addWidget(label_39, 3, 0, 1, 1);

        ORD_IGR_b = new QDoubleSpinBox(ORD_IGR_groupBox);
        ORD_IGR_b->setObjectName("ORD_IGR_b");
        ORD_IGR_b->setKeyboardTracking(false);
        ORD_IGR_b->setDecimals(4);
        ORD_IGR_b->setMaximum(1.000000000000000);
        ORD_IGR_b->setSingleStep(0.010000000000000);

        gridLayout_22->addWidget(ORD_IGR_b, 3, 1, 1, 1);

        label_43 = new QLabel(ORD_IGR_groupBox);
        label_43->setObjectName("label_43");

        gridLayout_22->addWidget(label_43, 4, 0, 1, 1);

        ORD_IGR_c = new QDoubleSpinBox(ORD_IGR_groupBox);
        ORD_IGR_c->setObjectName("ORD_IGR_c");
        ORD_IGR_c->setKeyboardTracking(false);
        ORD_IGR_c->setDecimals(4);
        ORD_IGR_c->setMaximum(1.000000000000000);
        ORD_IGR_c->setSingleStep(0.010000000000000);

        gridLayout_22->addWidget(ORD_IGR_c, 4, 1, 1, 1);

        ORD_IGR_step = new QSpinBox(ORD_IGR_groupBox);
        ORD_IGR_step->setObjectName("ORD_IGR_step");
        ORD_IGR_step->setKeyboardTracking(false);
        ORD_IGR_step->setMinimum(2);
        ORD_IGR_step->setMaximum(100);

        gridLayout_22->addWidget(ORD_IGR_step, 1, 1, 1, 1);

        label_41 = new QLabel(ORD_IGR_groupBox);
        label_41->setObjectName("label_41");

        gridLayout_22->addWidget(label_41, 2, 0, 1, 1);


        gridLayout_23->addWidget(ORD_IGR_groupBox, 0, 0, 1, 1);

        ditherSettings->addWidget(pageORD_IGR);
        pageORD_VAR = new QWidget();
        pageORD_VAR->setObjectName("pageORD_VAR");
        sizePolicy12.setHeightForWidth(pageORD_VAR->sizePolicy().hasHeightForWidth());
        pageORD_VAR->setSizePolicy(sizePolicy12);
        pageORD_VAR->setMinimumSize(QSize(0, 90));
        gridLayout_21 = new QGridLayout(pageORD_VAR);
        gridLayout_21->setSpacing(0);
        gridLayout_21->setObjectName("gridLayout_21");
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        ORD_VAR_groupBox = new QGroupBox(pageORD_VAR);
        ORD_VAR_groupBox->setObjectName("ORD_VAR_groupBox");
        gridLayout_20 = new QGridLayout(ORD_VAR_groupBox);
        gridLayout_20->setObjectName("gridLayout_20");
        gridLayout_20->setContentsMargins(10, 8, 10, 10);
        label_31 = new QLabel(ORD_VAR_groupBox);
        label_31->setObjectName("label_31");

        gridLayout_20->addWidget(label_31, 1, 0, 1, 1);

        ORD_VAR_step = new QSpinBox(ORD_VAR_groupBox);
        ORD_VAR_step->setObjectName("ORD_VAR_step");
        ORD_VAR_step->setKeyboardTracking(false);
        ORD_VAR_step->setMaximum(100);

        gridLayout_20->addWidget(ORD_VAR_step, 1, 1, 1, 1);

        label_30 = new QLabel(ORD_VAR_groupBox);
        label_30->setObjectName("label_30");

        gridLayout_20->addWidget(label_30, 0, 0, 1, 1);

        ORD_VAR_jitter = new QDoubleSpinBox(ORD_VAR_groupBox);
        ORD_VAR_jitter->setObjectName("ORD_VAR_jitter");
        ORD_VAR_jitter->setKeyboardTracking(false);
        ORD_VAR_jitter->setMaximum(1.000000000000000);
        ORD_VAR_jitter->setSingleStep(0.010000000000000);

        gridLayout_20->addWidget(ORD_VAR_jitter, 0, 1, 1, 1);


        gridLayout_21->addWidget(ORD_VAR_groupBox, 0, 0, 1, 1);

        ditherSettings->addWidget(pageORD_VAR);
        pageGRD = new QWidget();
        pageGRD->setObjectName("pageGRD");
        sizePolicy12.setHeightForWidth(pageGRD->sizePolicy().hasHeightForWidth());
        pageGRD->setSizePolicy(sizePolicy12);
        pageGRD->setMinimumSize(QSize(0, 144));
        gridLayout_27 = new QGridLayout(pageGRD);
        gridLayout_27->setSpacing(0);
        gridLayout_27->setObjectName("gridLayout_27");
        gridLayout_27->setContentsMargins(0, 0, 0, 0);
        GRD_groupBox = new QGroupBox(pageGRD);
        GRD_groupBox->setObjectName("GRD_groupBox");
        gridLayout_24 = new QGridLayout(GRD_groupBox);
        gridLayout_24->setObjectName("gridLayout_24");
        gridLayout_24->setContentsMargins(10, 8, 10, 10);
        label_34 = new QLabel(GRD_groupBox);
        label_34->setObjectName("label_34");

        gridLayout_24->addWidget(label_34, 0, 0, 1, 1);

        GRD_altAlgorithm = new QCheckBox(GRD_groupBox);
        GRD_altAlgorithm->setObjectName("GRD_altAlgorithm");
        GRD_altAlgorithm->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        gridLayout_24->addWidget(GRD_altAlgorithm, 3, 1, 1, 1);

        label_36 = new QLabel(GRD_groupBox);
        label_36->setObjectName("label_36");

        gridLayout_24->addWidget(label_36, 1, 0, 1, 1);

        GRD_height = new QSpinBox(GRD_groupBox);
        GRD_height->setObjectName("GRD_height");
        GRD_height->setKeyboardTracking(false);
        GRD_height->setMinimum(2);
        GRD_height->setMaximum(100);

        gridLayout_24->addWidget(GRD_height, 1, 1, 1, 1);

        label_45 = new QLabel(GRD_groupBox);
        label_45->setObjectName("label_45");
        label_45->setMinimumSize(QSize(0, 22));

        gridLayout_24->addWidget(label_45, 3, 0, 1, 1);

        GRD_width = new QSpinBox(GRD_groupBox);
        GRD_width->setObjectName("GRD_width");
        GRD_width->setKeyboardTracking(false);
        GRD_width->setMinimum(2);
        GRD_width->setMaximum(100);

        gridLayout_24->addWidget(GRD_width, 0, 1, 1, 1);

        GRD_minPixels = new QSpinBox(GRD_groupBox);
        GRD_minPixels->setObjectName("GRD_minPixels");
        GRD_minPixels->setKeyboardTracking(false);
        GRD_minPixels->setMaximum(100);

        gridLayout_24->addWidget(GRD_minPixels, 2, 1, 1, 1);

        label_44 = new QLabel(GRD_groupBox);
        label_44->setObjectName("label_44");

        gridLayout_24->addWidget(label_44, 2, 0, 1, 1);


        gridLayout_27->addWidget(GRD_groupBox, 0, 0, 1, 1);

        ditherSettings->addWidget(pageGRD);
        pageERR_C = new QWidget();
        pageERR_C->setObjectName("pageERR_C");
        gridLayout_42 = new QGridLayout(pageERR_C);
        gridLayout_42->setSpacing(0);
        gridLayout_42->setObjectName("gridLayout_42");
        gridLayout_42->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(pageERR_C);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_46 = new QGridLayout(groupBox_4);
        gridLayout_46->setObjectName("gridLayout_46");
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName("label_19");

        gridLayout_46->addWidget(label_19, 0, 0, 1, 1);

        ERR_C_serpentine = new QCheckBox(groupBox_4);
        ERR_C_serpentine->setObjectName("ERR_C_serpentine");

        gridLayout_46->addWidget(ERR_C_serpentine, 0, 1, 1, 1);


        gridLayout_42->addWidget(groupBox_4, 0, 0, 1, 1);

        ditherSettings->addWidget(pageERR_C);
        pageORD_VAR_C = new QWidget();
        pageORD_VAR_C->setObjectName("pageORD_VAR_C");
        gridLayout_44 = new QGridLayout(pageORD_VAR_C);
        gridLayout_44->setSpacing(0);
        gridLayout_44->setObjectName("gridLayout_44");
        gridLayout_44->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(pageORD_VAR_C);
        groupBox->setObjectName("groupBox");
        gridLayout_48 = new QGridLayout(groupBox);
        gridLayout_48->setObjectName("gridLayout_48");
        label_27 = new QLabel(groupBox);
        label_27->setObjectName("label_27");

        gridLayout_48->addWidget(label_27, 0, 0, 1, 1);

        ORD_VAR_C_step = new QSpinBox(groupBox);
        ORD_VAR_C_step->setObjectName("ORD_VAR_C_step");
        ORD_VAR_C_step->setKeyboardTracking(false);
        ORD_VAR_C_step->setMaximum(100);

        gridLayout_48->addWidget(ORD_VAR_C_step, 0, 1, 1, 1);


        gridLayout_44->addWidget(groupBox, 0, 0, 1, 1);

        ditherSettings->addWidget(pageORD_VAR_C);
        pageORD_IGR_C = new QWidget();
        pageORD_IGR_C->setObjectName("pageORD_IGR_C");
        gridLayout_45 = new QGridLayout(pageORD_IGR_C);
        gridLayout_45->setSpacing(0);
        gridLayout_45->setObjectName("gridLayout_45");
        gridLayout_45->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(pageORD_IGR_C);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_47 = new QGridLayout(groupBox_2);
        gridLayout_47->setObjectName("gridLayout_47");
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName("label_23");

        gridLayout_47->addWidget(label_23, 0, 0, 1, 1);

        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName("label_24");

        gridLayout_47->addWidget(label_24, 1, 0, 1, 1);

        ORD_IGR_C_a = new QDoubleSpinBox(groupBox_2);
        ORD_IGR_C_a->setObjectName("ORD_IGR_C_a");
        ORD_IGR_C_a->setKeyboardTracking(false);
        ORD_IGR_C_a->setDecimals(4);
        ORD_IGR_C_a->setMaximum(100.000000000000000);
        ORD_IGR_C_a->setSingleStep(0.100000000000000);

        gridLayout_47->addWidget(ORD_IGR_C_a, 1, 1, 1, 1);

        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName("label_25");

        gridLayout_47->addWidget(label_25, 2, 0, 1, 1);

        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName("label_26");

        gridLayout_47->addWidget(label_26, 3, 0, 1, 1);

        ORD_IGR_C_b = new QDoubleSpinBox(groupBox_2);
        ORD_IGR_C_b->setObjectName("ORD_IGR_C_b");
        ORD_IGR_C_b->setKeyboardTracking(false);
        ORD_IGR_C_b->setDecimals(4);
        ORD_IGR_C_b->setMaximum(1.000000000000000);
        ORD_IGR_C_b->setSingleStep(0.010000000000000);

        gridLayout_47->addWidget(ORD_IGR_C_b, 2, 1, 1, 1);

        ORD_IGR_C_c = new QDoubleSpinBox(groupBox_2);
        ORD_IGR_C_c->setObjectName("ORD_IGR_C_c");
        ORD_IGR_C_c->setKeyboardTracking(false);
        ORD_IGR_C_c->setDecimals(4);
        ORD_IGR_C_c->setMaximum(1.000000000000000);
        ORD_IGR_C_c->setSingleStep(0.010000000000000);

        gridLayout_47->addWidget(ORD_IGR_C_c, 3, 1, 1, 1);

        ORD_IGR_C_step = new QSpinBox(groupBox_2);
        ORD_IGR_C_step->setObjectName("ORD_IGR_C_step");
        ORD_IGR_C_step->setKeyboardTracking(false);
        ORD_IGR_C_step->setMinimum(2);
        ORD_IGR_C_step->setMaximum(100);

        gridLayout_47->addWidget(ORD_IGR_C_step, 0, 1, 1, 1);


        gridLayout_45->addWidget(groupBox_2, 0, 0, 1, 1);

        ditherSettings->addWidget(pageORD_IGR_C);

        verticalLayout->addWidget(ditherSettings);

        imageSettingsStackedWidget = new QStackedWidget(imageSettingsContainer);
        imageSettingsStackedWidget->setObjectName("imageSettingsStackedWidget");
        sizePolicy11.setHeightForWidth(imageSettingsStackedWidget->sizePolicy().hasHeightForWidth());
        imageSettingsStackedWidget->setSizePolicy(sizePolicy11);
        imageSettingsStackedWidget->setMinimumSize(QSize(0, 0));
        imageSettingsStackedWidget->setMaximumSize(QSize(16777215, 16777215));
        page = new QWidget();
        page->setObjectName("page");
        sizePolicy.setHeightForWidth(page->sizePolicy().hasHeightForWidth());
        page->setSizePolicy(sizePolicy);
        page->setMinimumSize(QSize(0, 0));
        page->setMaximumSize(QSize(16777215, 16777215));
        page->setBaseSize(QSize(0, 0));
        gridLayout_38 = new QGridLayout(page);
        gridLayout_38->setSpacing(0);
        gridLayout_38->setObjectName("gridLayout_38");
        gridLayout_38->setContentsMargins(0, 0, 0, 0);
        imageSettingsGroup = new QGroupBox(page);
        imageSettingsGroup->setObjectName("imageSettingsGroup");
        imageSettingsGroup->setMinimumSize(QSize(0, 0));
        imageSettingsGroup->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_17 = new QGridLayout(imageSettingsGroup);
        gridLayout_17->setObjectName("gridLayout_17");
        gridLayout_17->setHorizontalSpacing(2);
        gridLayout_17->setVerticalSpacing(1);
        gridLayout_17->setContentsMargins(10, 6, 9, 8);
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(0);
        verticalLayout_20->setObjectName("verticalLayout_20");
        verticalSpacer_23 = new QSpacerItem(1, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_20->addItem(verticalSpacer_23);

        resetBrightnessButtonMono = new QPushButton(imageSettingsGroup);
        resetBrightnessButtonMono->setObjectName("resetBrightnessButtonMono");
        resetBrightnessButtonMono->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        resetBrightnessButtonMono->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_20->addWidget(resetBrightnessButtonMono);


        gridLayout_17->addLayout(verticalLayout_20, 1, 3, 1, 1);

        brightnessEditMono = new QDoubleSpinBox(imageSettingsGroup);
        brightnessEditMono->setObjectName("brightnessEditMono");
        brightnessEditMono->setMinimumSize(QSize(51, 0));
        brightnessEditMono->setMaximumSize(QSize(51, 16777215));
        brightnessEditMono->setBaseSize(QSize(51, 0));
        brightnessEditMono->setKeyboardTracking(false);
        brightnessEditMono->setMinimum(-1.000000000000000);
        brightnessEditMono->setMaximum(1.000000000000000);
        brightnessEditMono->setSingleStep(0.100000000000000);

        gridLayout_17->addWidget(brightnessEditMono, 1, 2, 1, 1);

        gammaEditMono = new QDoubleSpinBox(imageSettingsGroup);
        gammaEditMono->setObjectName("gammaEditMono");
        gammaEditMono->setMinimumSize(QSize(51, 0));
        gammaEditMono->setMaximumSize(QSize(51, 16777215));
        gammaEditMono->setBaseSize(QSize(51, 0));
        gammaEditMono->setKeyboardTracking(false);
        gammaEditMono->setMinimum(-1.000000000000000);
        gammaEditMono->setMaximum(1.000000000000000);
        gammaEditMono->setSingleStep(0.100000000000000);

        gridLayout_17->addWidget(gammaEditMono, 3, 2, 1, 1);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(0);
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalSpacer_29 = new QSpacerItem(1, 4, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_26->addItem(verticalSpacer_29);

        label_9 = new QLabel(imageSettingsGroup);
        label_9->setObjectName("label_9");

        verticalLayout_26->addWidget(label_9);


        gridLayout_17->addLayout(verticalLayout_26, 1, 0, 1, 1);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setSpacing(0);
        verticalLayout_27->setObjectName("verticalLayout_27");
        verticalSpacer_30 = new QSpacerItem(1, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_27->addItem(verticalSpacer_30);

        label_28 = new QLabel(imageSettingsGroup);
        label_28->setObjectName("label_28");

        verticalLayout_27->addWidget(label_28);


        gridLayout_17->addLayout(verticalLayout_27, 2, 0, 1, 1);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setObjectName("verticalLayout_21");
        verticalSpacer_24 = new QSpacerItem(1, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_21->addItem(verticalSpacer_24);

        resetContrastButtonMono = new QPushButton(imageSettingsGroup);
        resetContrastButtonMono->setObjectName("resetContrastButtonMono");
        resetContrastButtonMono->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        verticalLayout_21->addWidget(resetContrastButtonMono);


        gridLayout_17->addLayout(verticalLayout_21, 2, 3, 1, 1);

        contrastEditMono = new QDoubleSpinBox(imageSettingsGroup);
        contrastEditMono->setObjectName("contrastEditMono");
        contrastEditMono->setMinimumSize(QSize(51, 0));
        contrastEditMono->setMaximumSize(QSize(51, 16777215));
        contrastEditMono->setBaseSize(QSize(51, 0));
        contrastEditMono->setKeyboardTracking(false);
        contrastEditMono->setMinimum(-1.000000000000000);
        contrastEditMono->setMaximum(1.000000000000000);
        contrastEditMono->setSingleStep(0.100000000000000);

        gridLayout_17->addWidget(contrastEditMono, 2, 2, 1, 1);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setSpacing(0);
        verticalLayout_28->setObjectName("verticalLayout_28");
        verticalSpacer_31 = new QSpacerItem(1, 4, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_28->addItem(verticalSpacer_31);

        label_29 = new QLabel(imageSettingsGroup);
        label_29->setObjectName("label_29");

        verticalLayout_28->addWidget(label_29);


        gridLayout_17->addLayout(verticalLayout_28, 3, 0, 1, 1);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(0);
        verticalLayout_23->setObjectName("verticalLayout_23");
        verticalSpacer_26 = new QSpacerItem(1, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_23->addItem(verticalSpacer_26);

        brightnessSliderMono = new QSlider(imageSettingsGroup);
        brightnessSliderMono->setObjectName("brightnessSliderMono");
        brightnessSliderMono->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        brightnessSliderMono->setMinimum(-100);
        brightnessSliderMono->setMaximum(100);
        brightnessSliderMono->setTracking(false);
        brightnessSliderMono->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_23->addWidget(brightnessSliderMono);


        gridLayout_17->addLayout(verticalLayout_23, 1, 1, 1, 1);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setSpacing(0);
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalSpacer_28 = new QSpacerItem(1, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_25->addItem(verticalSpacer_28);

        gammaSliderMono = new QSlider(imageSettingsGroup);
        gammaSliderMono->setObjectName("gammaSliderMono");
        gammaSliderMono->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        gammaSliderMono->setMinimum(-100);
        gammaSliderMono->setMaximum(100);
        gammaSliderMono->setTracking(false);
        gammaSliderMono->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_25->addWidget(gammaSliderMono);


        gridLayout_17->addLayout(verticalLayout_25, 3, 1, 1, 1);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(0);
        verticalLayout_22->setObjectName("verticalLayout_22");
        verticalSpacer_25 = new QSpacerItem(1, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_22->addItem(verticalSpacer_25);

        resetGammaButtonMono = new QPushButton(imageSettingsGroup);
        resetGammaButtonMono->setObjectName("resetGammaButtonMono");
        resetGammaButtonMono->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        verticalLayout_22->addWidget(resetGammaButtonMono);


        gridLayout_17->addLayout(verticalLayout_22, 3, 3, 1, 1);

        showOriginalMono = new QCheckBox(imageSettingsGroup);
        showOriginalMono->setObjectName("showOriginalMono");
        showOriginalMono->setMinimumSize(QSize(0, 22));
        showOriginalMono->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        gridLayout_17->addWidget(showOriginalMono, 4, 0, 1, 2);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(0);
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalSpacer_27 = new QSpacerItem(1, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_24->addItem(verticalSpacer_27);

        contrastSliderMono = new QSlider(imageSettingsGroup);
        contrastSliderMono->setObjectName("contrastSliderMono");
        contrastSliderMono->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        contrastSliderMono->setMinimum(-100);
        contrastSliderMono->setMaximum(100);
        contrastSliderMono->setTracking(false);
        contrastSliderMono->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_24->addWidget(contrastSliderMono);


        gridLayout_17->addLayout(verticalLayout_24, 2, 1, 1, 1);

        verticalSpacer_32 = new QSpacerItem(1, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_17->addItem(verticalSpacer_32, 0, 0, 1, 1);


        gridLayout_38->addWidget(imageSettingsGroup, 0, 0, 1, 1);

        imageSettingsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        sizePolicy.setHeightForWidth(page_2->sizePolicy().hasHeightForWidth());
        page_2->setSizePolicy(sizePolicy);
        page_2->setMinimumSize(QSize(0, 0));
        page_2->setMaximumSize(QSize(16777215, 16777215));
        page_2->setBaseSize(QSize(0, 0));
        gridLayout_31 = new QGridLayout(page_2);
        gridLayout_31->setSpacing(0);
        gridLayout_31->setObjectName("gridLayout_31");
        gridLayout_31->setContentsMargins(0, 0, 0, 0);
        imageSettingsGroup_2 = new QGroupBox(page_2);
        imageSettingsGroup_2->setObjectName("imageSettingsGroup_2");
        imageSettingsGroup_2->setMinimumSize(QSize(0, 0));
        imageSettingsGroup_2->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_19 = new QGridLayout(imageSettingsGroup_2);
        gridLayout_19->setObjectName("gridLayout_19");
        gridLayout_19->setHorizontalSpacing(2);
        gridLayout_19->setVerticalSpacing(1);
        gridLayout_19->setContentsMargins(10, 6, 9, 8);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalSpacer_15 = new QSpacerItem(1, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_11->addItem(verticalSpacer_15);

        brightnessSliderColor = new QSlider(imageSettingsGroup_2);
        brightnessSliderColor->setObjectName("brightnessSliderColor");
        brightnessSliderColor->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        brightnessSliderColor->setMinimum(-100);
        brightnessSliderColor->setMaximum(100);
        brightnessSliderColor->setTracking(false);
        brightnessSliderColor->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_11->addWidget(brightnessSliderColor);


        gridLayout_19->addLayout(verticalLayout_11, 1, 1, 1, 1);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalSpacer_19 = new QSpacerItem(1, 4, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_16->addItem(verticalSpacer_19);

        label_11 = new QLabel(imageSettingsGroup_2);
        label_11->setObjectName("label_11");

        verticalLayout_16->addWidget(label_11);


        gridLayout_19->addLayout(verticalLayout_16, 1, 0, 1, 1);

        showOriginalColor = new QCheckBox(imageSettingsGroup_2);
        showOriginalColor->setObjectName("showOriginalColor");
        showOriginalColor->setMinimumSize(QSize(0, 22));
        showOriginalColor->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        gridLayout_19->addWidget(showOriginalColor, 5, 0, 1, 2);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalSpacer_14 = new QSpacerItem(1, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_10->addItem(verticalSpacer_14);

        resetSaturationButtonColor = new QPushButton(imageSettingsGroup_2);
        resetSaturationButtonColor->setObjectName("resetSaturationButtonColor");
        resetSaturationButtonColor->setEnabled(true);
        resetSaturationButtonColor->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        verticalLayout_10->addWidget(resetSaturationButtonColor);


        gridLayout_19->addLayout(verticalLayout_10, 4, 3, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalSpacer_11 = new QSpacerItem(1, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_11);

        resetContrastButtonColor = new QPushButton(imageSettingsGroup_2);
        resetContrastButtonColor->setObjectName("resetContrastButtonColor");
        resetContrastButtonColor->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        verticalLayout_12->addWidget(resetContrastButtonColor);


        gridLayout_19->addLayout(verticalLayout_12, 2, 3, 1, 1);

        brightnessEditColor = new QDoubleSpinBox(imageSettingsGroup_2);
        brightnessEditColor->setObjectName("brightnessEditColor");
        brightnessEditColor->setMinimumSize(QSize(51, 0));
        brightnessEditColor->setMaximumSize(QSize(51, 16777215));
        brightnessEditColor->setBaseSize(QSize(51, 0));
        brightnessEditColor->setKeyboardTracking(false);
        brightnessEditColor->setMinimum(-1.000000000000000);
        brightnessEditColor->setMaximum(1.000000000000000);
        brightnessEditColor->setSingleStep(0.020000000000000);

        gridLayout_19->addWidget(brightnessEditColor, 1, 2, 1, 1);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalSpacer_18 = new QSpacerItem(1, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_15->addItem(verticalSpacer_18);

        saturationSliderColor = new QSlider(imageSettingsGroup_2);
        saturationSliderColor->setObjectName("saturationSliderColor");
        saturationSliderColor->setEnabled(true);
        saturationSliderColor->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        saturationSliderColor->setMinimum(-100);
        saturationSliderColor->setMaximum(100);
        saturationSliderColor->setPageStep(10);
        saturationSliderColor->setValue(0);
        saturationSliderColor->setSliderPosition(0);
        saturationSliderColor->setTracking(false);
        saturationSliderColor->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_15->addWidget(saturationSliderColor);


        gridLayout_19->addLayout(verticalLayout_15, 4, 1, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalSpacer_13 = new QSpacerItem(1, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_9->addItem(verticalSpacer_13);

        resetGammaButtonColor = new QPushButton(imageSettingsGroup_2);
        resetGammaButtonColor->setObjectName("resetGammaButtonColor");
        resetGammaButtonColor->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        verticalLayout_9->addWidget(resetGammaButtonColor);


        gridLayout_19->addLayout(verticalLayout_9, 3, 3, 1, 1);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalSpacer_17 = new QSpacerItem(1, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_14->addItem(verticalSpacer_17);

        gammaSliderColor = new QSlider(imageSettingsGroup_2);
        gammaSliderColor->setObjectName("gammaSliderColor");
        gammaSliderColor->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        gammaSliderColor->setMinimum(-100);
        gammaSliderColor->setMaximum(100);
        gammaSliderColor->setTracking(false);
        gammaSliderColor->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_14->addWidget(gammaSliderColor);


        gridLayout_19->addLayout(verticalLayout_14, 3, 1, 1, 1);

        gammaEditColor = new QDoubleSpinBox(imageSettingsGroup_2);
        gammaEditColor->setObjectName("gammaEditColor");
        gammaEditColor->setMinimumSize(QSize(51, 0));
        gammaEditColor->setMaximumSize(QSize(51, 16777215));
        gammaEditColor->setBaseSize(QSize(51, 0));
        gammaEditColor->setKeyboardTracking(false);
        gammaEditColor->setMinimum(-1.000000000000000);
        gammaEditColor->setMaximum(1.000000000000000);
        gammaEditColor->setSingleStep(0.020000000000000);

        gridLayout_19->addWidget(gammaEditColor, 3, 2, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalSpacer_12 = new QSpacerItem(1, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_12);

        resetBrightnessButtonColor = new QPushButton(imageSettingsGroup_2);
        resetBrightnessButtonColor->setObjectName("resetBrightnessButtonColor");
        resetBrightnessButtonColor->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        resetBrightnessButtonColor->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_8->addWidget(resetBrightnessButtonColor);


        gridLayout_19->addLayout(verticalLayout_8, 1, 3, 1, 1);

        contrastEditColor = new QDoubleSpinBox(imageSettingsGroup_2);
        contrastEditColor->setObjectName("contrastEditColor");
        contrastEditColor->setMinimumSize(QSize(51, 0));
        contrastEditColor->setMaximumSize(QSize(51, 16777215));
        contrastEditColor->setBaseSize(QSize(51, 0));
        contrastEditColor->setKeyboardTracking(false);
        contrastEditColor->setMinimum(-1.000000000000000);
        contrastEditColor->setMaximum(1.000000000000000);
        contrastEditColor->setSingleStep(0.020000000000000);

        gridLayout_19->addWidget(contrastEditColor, 2, 2, 1, 1);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalSpacer_20 = new QSpacerItem(1, 4, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_17->addItem(verticalSpacer_20);

        label_40 = new QLabel(imageSettingsGroup_2);
        label_40->setObjectName("label_40");

        verticalLayout_17->addWidget(label_40);


        gridLayout_19->addLayout(verticalLayout_17, 2, 0, 1, 1);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setObjectName("verticalLayout_19");
        verticalSpacer_22 = new QSpacerItem(1, 4, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_19->addItem(verticalSpacer_22);

        label_33 = new QLabel(imageSettingsGroup_2);
        label_33->setObjectName("label_33");

        verticalLayout_19->addWidget(label_33);


        gridLayout_19->addLayout(verticalLayout_19, 4, 0, 1, 1);

        saturationEditColor = new QDoubleSpinBox(imageSettingsGroup_2);
        saturationEditColor->setObjectName("saturationEditColor");
        saturationEditColor->setMinimumSize(QSize(51, 0));
        saturationEditColor->setMaximumSize(QSize(51, 16777215));
        saturationEditColor->setBaseSize(QSize(51, 0));
        saturationEditColor->setKeyboardTracking(false);
        saturationEditColor->setMinimum(-1.000000000000000);
        saturationEditColor->setMaximum(1.000000000000000);
        saturationEditColor->setSingleStep(0.020000000000000);
        saturationEditColor->setValue(0.000000000000000);

        gridLayout_19->addWidget(saturationEditColor, 4, 2, 1, 1);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(0);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalSpacer_21 = new QSpacerItem(1, 4, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_18->addItem(verticalSpacer_21);

        label_35 = new QLabel(imageSettingsGroup_2);
        label_35->setObjectName("label_35");

        verticalLayout_18->addWidget(label_35);


        gridLayout_19->addLayout(verticalLayout_18, 3, 0, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalSpacer_16 = new QSpacerItem(1, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_13->addItem(verticalSpacer_16);

        contrastSliderColor = new QSlider(imageSettingsGroup_2);
        contrastSliderColor->setObjectName("contrastSliderColor");
        contrastSliderColor->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        contrastSliderColor->setMinimum(-100);
        contrastSliderColor->setMaximum(100);
        contrastSliderColor->setTracking(false);
        contrastSliderColor->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_13->addWidget(contrastSliderColor);


        gridLayout_19->addLayout(verticalLayout_13, 2, 1, 1, 1);

        verticalSpacer_33 = new QSpacerItem(1, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_19->addItem(verticalSpacer_33, 0, 0, 1, 1);


        gridLayout_31->addWidget(imageSettingsGroup_2, 0, 0, 1, 1);

        imageSettingsStackedWidget->addWidget(page_2);

        verticalLayout->addWidget(imageSettingsStackedWidget);

        verticalLayout->setStretch(0, 20);
        verticalLayout->setStretch(1, 1);
        splitter->addWidget(imageSettingsContainer);

        gridLayout_40->addWidget(splitter, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1039, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        QWidget::setTabOrder(monoColorOneButton, monoColorTwoButton);
        QWidget::setTabOrder(monoColorTwoButton, resetMonoColors);
        QWidget::setTabOrder(resetMonoColors, predefinedPaletteCombo);
        QWidget::setTabOrder(predefinedPaletteCombo, paletteBrowseButton);
        QWidget::setTabOrder(paletteBrowseButton, palettePathEdit);
        QWidget::setTabOrder(palettePathEdit, paletteColorsEdit);
        QWidget::setTabOrder(paletteColorsEdit, colorListWidget);
        QWidget::setTabOrder(colorListWidget, DBS_formula);
        QWidget::setTabOrder(DBS_formula, ERR_jitter);
        QWidget::setTabOrder(ERR_jitter, ORD_jitter);
        QWidget::setTabOrder(ORD_jitter, THR_jitter);
        QWidget::setTabOrder(THR_jitter, THR_threshold);
        QWidget::setTabOrder(THR_threshold, ORD_IGR_jitter);
        QWidget::setTabOrder(ORD_IGR_jitter, ORD_IGR_step);
        QWidget::setTabOrder(ORD_IGR_step, ORD_IGR_a);
        QWidget::setTabOrder(ORD_IGR_a, ORD_IGR_b);
        QWidget::setTabOrder(ORD_IGR_b, ORD_IGR_c);
        QWidget::setTabOrder(ORD_IGR_c, ORD_VAR_jitter);
        QWidget::setTabOrder(ORD_VAR_jitter, ORD_VAR_step);
        QWidget::setTabOrder(ORD_VAR_step, GRD_width);
        QWidget::setTabOrder(GRD_width, GRD_height);
        QWidget::setTabOrder(GRD_height, GRD_minPixels);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpenVideo);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionExportVideo);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuHelp->addAction(actionQuickTour);
        menuHelp->addAction(actionChangelog);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCheck_for_Updates);

        retranslateUi(MainWindow);

        zoomLevelCombo->setCurrentIndex(1);
        tabWidget->setCurrentIndex(2);
        paletteSourceWidget->setCurrentIndex(3);
        ditherSettings->setCurrentIndex(9);
        imageSettingsStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "APP_TITLE", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpenVideo->setText(QCoreApplication::translate("MainWindow", "Open Video...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpenVideo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "Save as...", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExportVideo->setText(QCoreApplication::translate("MainWindow", "Export Video...", nullptr));
#if QT_CONFIG(shortcut)
        actionExportVideo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuickTour->setText(QCoreApplication::translate("MainWindow", "Help...", nullptr));
        actionChangelog->setText(QCoreApplication::translate("MainWindow", "Changelog...", nullptr));
        actionCheck_for_Updates->setText(QCoreApplication::translate("MainWindow", "Check for Updates...", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "zoom:", nullptr));
        zoomLevelCombo->setItemText(0, QCoreApplication::translate("MainWindow", "50%", nullptr));
        zoomLevelCombo->setItemText(1, QCoreApplication::translate("MainWindow", "100%", nullptr));
        zoomLevelCombo->setItemText(2, QCoreApplication::translate("MainWindow", "200%", nullptr));
        zoomLevelCombo->setItemText(3, QCoreApplication::translate("MainWindow", "300%", nullptr));
        zoomLevelCombo->setItemText(4, QCoreApplication::translate("MainWindow", "400%", nullptr));
        zoomLevelCombo->setItemText(5, QCoreApplication::translate("MainWindow", "500%", nullptr));

        label_46->setText(QCoreApplication::translate("MainWindow", "dimensions:", nullptr));
        resolutionLabel->setText(QCoreApplication::translate("MainWindow", "none", nullptr));
#if QT_CONFIG(tooltip)
        treeWidgetMono->setToolTip(QCoreApplication::translate("MainWindow", "choose a dither algorithm", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tabMono), QCoreApplication::translate("MainWindow", "Mono", nullptr));
#if QT_CONFIG(tooltip)
        treeWidgetColor->setToolTip(QCoreApplication::translate("MainWindow", "choose a dither algorithm", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tabColor), QCoreApplication::translate("MainWindow", "Color", nullptr));
#if QT_CONFIG(tooltip)
        monoPaletteGroup->setToolTip(QCoreApplication::translate("MainWindow", "Modify colors used for monochrome dithering.", nullptr));
#endif // QT_CONFIG(tooltip)
        monoPaletteGroup->setTitle(QCoreApplication::translate("MainWindow", "Mono Palette", nullptr));
#if QT_CONFIG(tooltip)
        monoColorOneButton->setToolTip(QCoreApplication::translate("MainWindow", "double click to pick a different color", nullptr));
#endif // QT_CONFIG(tooltip)
        monoColorOneButton->setText(QString());
#if QT_CONFIG(tooltip)
        monoColorTwoButton->setToolTip(QCoreApplication::translate("MainWindow", "double click to pick a different color", nullptr));
#endif // QT_CONFIG(tooltip)
        monoColorTwoButton->setText(QString());
        resetMonoColors->setText(QString());
#if QT_CONFIG(tooltip)
        monoColorTwoLabel->setToolTip(QCoreApplication::translate("MainWindow", "Double click to edit the color.", nullptr));
#endif // QT_CONFIG(tooltip)
        monoColorTwoLabel->setText(QCoreApplication::translate("MainWindow", "#FFFFFF", nullptr));
#if QT_CONFIG(tooltip)
        monoColorOneLabel->setToolTip(QCoreApplication::translate("MainWindow", "Double click to edit the color.", nullptr));
#endif // QT_CONFIG(tooltip)
        monoColorOneLabel->setText(QCoreApplication::translate("MainWindow", "#000000", nullptr));
#if QT_CONFIG(tooltip)
        colorPaletteGroup->setToolTip(QCoreApplication::translate("MainWindow", "Color palette settings for color dithering.", nullptr));
#endif // QT_CONFIG(tooltip)
        colorPaletteGroup->setTitle(QCoreApplication::translate("MainWindow", "Color Palette", nullptr));
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("MainWindow", "Choose a color comparison method between colors in the source image and colors in the palette.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("MainWindow", "Color comparison", nullptr));
#if QT_CONFIG(tooltip)
        valueWeightLabel->setToolTip(QCoreApplication::translate("MainWindow", "How much the color comparison should consider the lightness of a color.", nullptr));
#endif // QT_CONFIG(tooltip)
        valueWeightLabel->setText(QCoreApplication::translate("MainWindow", "Value weight", nullptr));
#if QT_CONFIG(tooltip)
        chromaWeightLabel->setToolTip(QCoreApplication::translate("MainWindow", "How much the color comparison should consider the grey-ness of a color.", nullptr));
#endif // QT_CONFIG(tooltip)
        chromaWeightLabel->setText(QCoreApplication::translate("MainWindow", "Chroma weight", nullptr));
#if QT_CONFIG(tooltip)
        srcIlluminantLabel->setToolTip(QCoreApplication::translate("MainWindow", "Specify the illuminant used in the source image.", nullptr));
#endif // QT_CONFIG(tooltip)
        srcIlluminantLabel->setText(QCoreApplication::translate("MainWindow", "Source illuminant", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("MainWindow", "Choose between built-in palettes, a palette loaded from file, or a palette generated from the current image.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "Palette source", nullptr));
#if QT_CONFIG(tooltip)
        hueWeightLabel->setToolTip(QCoreApplication::translate("MainWindow", "How much the color comparison should consider the hue of a color.", nullptr));
#endif // QT_CONFIG(tooltip)
        hueWeightLabel->setText(QCoreApplication::translate("MainWindow", "Hue weight", nullptr));
#if QT_CONFIG(tooltip)
        spinBoxHue->setToolTip(QCoreApplication::translate("MainWindow", "How much the color comparison should consider the hue of a color.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        resetHueWeightButton->setToolTip(QCoreApplication::translate("MainWindow", "Reset hue weight to default", nullptr));
#endif // QT_CONFIG(tooltip)
        resetHueWeightButton->setText(QString());
#if QT_CONFIG(tooltip)
        spinBoxChroma->setToolTip(QCoreApplication::translate("MainWindow", "How much the color comparison should consider the grey-ness of a color.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        resetChromaWeightButton->setToolTip(QCoreApplication::translate("MainWindow", "Reset chroma weight to default.", nullptr));
#endif // QT_CONFIG(tooltip)
        resetChromaWeightButton->setText(QString());
#if QT_CONFIG(tooltip)
        spinBoxValue->setToolTip(QCoreApplication::translate("MainWindow", "How much the color comparison should consider the lightness of a color.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        resetValueWeightButton->setToolTip(QCoreApplication::translate("MainWindow", "Reset value weight to default.", nullptr));
#endif // QT_CONFIG(tooltip)
        resetValueWeightButton->setText(QString());
#if QT_CONFIG(tooltip)
        srcIlluminantCombo->setToolTip(QCoreApplication::translate("MainWindow", "determines how the image's colors will be matched to the colors in the palette", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        colorComparisonCombo->setToolTip(QCoreApplication::translate("MainWindow", "determines how the image's colors will be matched to the colors in the palette", nullptr));
#endif // QT_CONFIG(tooltip)
        paletteSourceCombo->setItemText(0, QCoreApplication::translate("MainWindow", "built-in", nullptr));
        paletteSourceCombo->setItemText(1, QCoreApplication::translate("MainWindow", "from file", nullptr));
        paletteSourceCombo->setItemText(2, QCoreApplication::translate("MainWindow", "reduced", nullptr));

#if QT_CONFIG(tooltip)
        paletteSourceCombo->setToolTip(QCoreApplication::translate("MainWindow", "set palette source", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("MainWindow", "Palette", nullptr));
#if QT_CONFIG(tooltip)
        predefinedPaletteCombo->setToolTip(QCoreApplication::translate("MainWindow", "list of built-in palettes to choose from", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        paletteBrowseButton->setToolTip(QCoreApplication::translate("MainWindow", "load a palette file", nullptr));
#endif // QT_CONFIG(tooltip)
        paletteBrowseButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Color reduction mode", nullptr));
#if QT_CONFIG(tooltip)
        paletteColorsEdit->setToolTip(QCoreApplication::translate("MainWindow", "number of colors to reduce the image's palette to", nullptr));
#endif // QT_CONFIG(tooltip)
        paletteColorsEdit->setText(QCoreApplication::translate("MainWindow", "32", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Colors", nullptr));
        colorReductionCombo->setItemText(0, QCoreApplication::translate("MainWindow", "Median Cut", nullptr));
        colorReductionCombo->setItemText(1, QCoreApplication::translate("MainWindow", "Wu", nullptr));
        colorReductionCombo->setItemText(2, QCoreApplication::translate("MainWindow", "KD-Tree", nullptr));

        palGenCMYCheck->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Include max RGB colors", nullptr));
        palGenBWCheck->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Count unique pixels", nullptr));
        palGenRGBCheck->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "Include brightest / darkest", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Include max CMY colors", nullptr));
        palGenUniqueColorsCheck->setText(QString());
        savePaletteButton->setText(QCoreApplication::translate("MainWindow", "save palette", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = colorListWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "hex", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "index", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPalette), QCoreApplication::translate("MainWindow", "Palette", nullptr));
        Generic_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Dither Settings", nullptr));
        Generic_dither_name->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Ditherer:", nullptr));
        DBS_groupBox->setTitle(QCoreApplication::translate("MainWindow", "DBS Dither Settings", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Formula", nullptr));
        DBS_formula->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        DBS_formula->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        DBS_formula->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        DBS_formula->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        DBS_formula->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        DBS_formula->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        DBS_formula->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));

#if QT_CONFIG(tooltip)
        DBS_formula->setToolTip(QCoreApplication::translate("MainWindow", "changes the coarseness of the dithered pixel distribution", nullptr));
#endif // QT_CONFIG(tooltip)
        ERR_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Error Diffusion Settings", nullptr));
#if QT_CONFIG(tooltip)
        ERR_jitter->setToolTip(QCoreApplication::translate("MainWindow", "introduces randomness into the dithering", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ERR_serpentine->setToolTip(QCoreApplication::translate("MainWindow", "use alternate left-to-right processing", nullptr));
#endif // QT_CONFIG(tooltip)
        ERR_serpentine->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Jitter", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Serpentine", nullptr));
        ORD_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Ordered Dither Settings", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Jitter", nullptr));
#if QT_CONFIG(tooltip)
        ORD_jitter->setToolTip(QCoreApplication::translate("MainWindow", "introduces randomness into the dithering", nullptr));
#endif // QT_CONFIG(tooltip)
        RIM_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Riemersma Dither Settings", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Modified Algorithm", nullptr));
#if QT_CONFIG(tooltip)
        RIM_modRiemersma->setToolTip(QCoreApplication::translate("MainWindow", "uses modified algorithm for dither calculation", nullptr));
#endif // QT_CONFIG(tooltip)
        RIM_modRiemersma->setText(QString());
        THR_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Threshold Settings", nullptr));
#if QT_CONFIG(tooltip)
        THR_autoThreshold->setToolTip(QCoreApplication::translate("MainWindow", "automatically determine threshold based on average brightness", nullptr));
#endif // QT_CONFIG(tooltip)
        THR_autoThreshold->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "Threshold", nullptr));
#if QT_CONFIG(tooltip)
        THR_threshold->setToolTip(QCoreApplication::translate("MainWindow", "brightness threshold when to dither a pixel black or white", nullptr));
#endif // QT_CONFIG(tooltip)
        label_15->setText(QCoreApplication::translate("MainWindow", "Jitter", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Auto Threshold", nullptr));
#if QT_CONFIG(tooltip)
        THR_jitter->setToolTip(QCoreApplication::translate("MainWindow", "introduces randomness into the dithering", nullptr));
#endif // QT_CONFIG(tooltip)
        VAR_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Variable Error Diffusion Settings", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Serpentine", nullptr));
#if QT_CONFIG(tooltip)
        VAR_serpentine->setToolTip(QCoreApplication::translate("MainWindow", "use alternate left-to-right processing", nullptr));
#endif // QT_CONFIG(tooltip)
        VAR_serpentine->setText(QString());
        ALL_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Allebach Dither Settings", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Randomize", nullptr));
#if QT_CONFIG(tooltip)
        ALL_randomize->setToolTip(QCoreApplication::translate("MainWindow", "randomizes the dither pattern", nullptr));
#endif // QT_CONFIG(tooltip)
        ALL_randomize->setText(QString());
        ORD_IGR_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Ordered Dither Settings", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Jitter", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
#if QT_CONFIG(tooltip)
        ORD_IGR_a->setToolTip(QCoreApplication::translate("MainWindow", "matrix direction angle A", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ORD_IGR_jitter->setToolTip(QCoreApplication::translate("MainWindow", "introduces randomness into the dithering", nullptr));
#endif // QT_CONFIG(tooltip)
        label_39->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
#if QT_CONFIG(tooltip)
        ORD_IGR_b->setToolTip(QCoreApplication::translate("MainWindow", "matrix direction angle B", nullptr));
#endif // QT_CONFIG(tooltip)
        label_43->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
#if QT_CONFIG(tooltip)
        ORD_IGR_c->setToolTip(QCoreApplication::translate("MainWindow", "matrix direction angle C", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ORD_IGR_step->setToolTip(QCoreApplication::translate("MainWindow", "width and height of the dither matrix (in pixel)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_41->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        ORD_VAR_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Ordered Dither Settings", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
#if QT_CONFIG(tooltip)
        ORD_VAR_step->setToolTip(QCoreApplication::translate("MainWindow", "dither matrix width and height", nullptr));
#endif // QT_CONFIG(tooltip)
        label_30->setText(QCoreApplication::translate("MainWindow", "Jitter", nullptr));
#if QT_CONFIG(tooltip)
        ORD_VAR_jitter->setToolTip(QCoreApplication::translate("MainWindow", "introduces randomness into the dithering", nullptr));
#endif // QT_CONFIG(tooltip)
        GRD_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Grid Dither Settings", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Grid width", nullptr));
#if QT_CONFIG(tooltip)
        GRD_altAlgorithm->setToolTip(QCoreApplication::translate("MainWindow", "use alternate grid dither algorithm", nullptr));
#endif // QT_CONFIG(tooltip)
        GRD_altAlgorithm->setText(QString());
        label_36->setText(QCoreApplication::translate("MainWindow", "Grid height", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "Alt. Algorithm", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "Min pixels", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Error Diffusion Settings", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Serpentine", nullptr));
        ERR_C_serpentine->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Ordered Dither Settings", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Ordered Dither Settings", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
#if QT_CONFIG(tooltip)
        imageSettingsStackedWidget->setToolTip(QCoreApplication::translate("MainWindow", "Image adjustments for the source image", nullptr));
#endif // QT_CONFIG(tooltip)
        imageSettingsGroup->setTitle(QCoreApplication::translate("MainWindow", "Input Image Settings", nullptr));
#if QT_CONFIG(tooltip)
        resetBrightnessButtonMono->setToolTip(QCoreApplication::translate("MainWindow", "rest brightness to default value", nullptr));
#endif // QT_CONFIG(tooltip)
        resetBrightnessButtonMono->setText(QString());
#if QT_CONFIG(tooltip)
        brightnessEditMono->setToolTip(QCoreApplication::translate("MainWindow", "Adjust source image brightness.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        gammaEditMono->setToolTip(QCoreApplication::translate("MainWindow", "Adjust source image gamma.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_9->setToolTip(QCoreApplication::translate("MainWindow", "Adjust source image brightness.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("MainWindow", "Brightness", nullptr));
#if QT_CONFIG(tooltip)
        label_28->setToolTip(QCoreApplication::translate("MainWindow", "Adjust source image contrast.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_28->setText(QCoreApplication::translate("MainWindow", "Contrast", nullptr));
#if QT_CONFIG(tooltip)
        resetContrastButtonMono->setToolTip(QCoreApplication::translate("MainWindow", "reset contrast to default value", nullptr));
#endif // QT_CONFIG(tooltip)
        resetContrastButtonMono->setText(QString());
#if QT_CONFIG(tooltip)
        contrastEditMono->setToolTip(QCoreApplication::translate("MainWindow", "Adjust source image contrast.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_29->setToolTip(QCoreApplication::translate("MainWindow", "Adjust source image gamma.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_29->setText(QCoreApplication::translate("MainWindow", "Gamma", nullptr));
#if QT_CONFIG(tooltip)
        brightnessSliderMono->setToolTip(QCoreApplication::translate("MainWindow", "adjusts the image's brightness", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        gammaSliderMono->setToolTip(QCoreApplication::translate("MainWindow", "adjusts the image's gamma", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        resetGammaButtonMono->setToolTip(QCoreApplication::translate("MainWindow", "reset gamma to default value", nullptr));
#endif // QT_CONFIG(tooltip)
        resetGammaButtonMono->setText(QString());
#if QT_CONFIG(tooltip)
        showOriginalMono->setToolTip(QCoreApplication::translate("MainWindow", "Toggle between original image and dithered image.", nullptr));
#endif // QT_CONFIG(tooltip)
        showOriginalMono->setText(QCoreApplication::translate("MainWindow", "show original image", nullptr));
#if QT_CONFIG(tooltip)
        contrastSliderMono->setToolTip(QCoreApplication::translate("MainWindow", "adjusts the image's contrast", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        imageSettingsGroup_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        imageSettingsGroup_2->setTitle(QCoreApplication::translate("MainWindow", "Input Image Settings", nullptr));
#if QT_CONFIG(tooltip)
        brightnessSliderColor->setToolTip(QCoreApplication::translate("MainWindow", "adjusts the image's brightness", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("MainWindow", "Brightness", nullptr));
#if QT_CONFIG(tooltip)
        showOriginalColor->setToolTip(QCoreApplication::translate("MainWindow", "shows the original image", nullptr));
#endif // QT_CONFIG(tooltip)
        showOriginalColor->setText(QCoreApplication::translate("MainWindow", "show original image", nullptr));
#if QT_CONFIG(tooltip)
        resetSaturationButtonColor->setToolTip(QCoreApplication::translate("MainWindow", "reset saturation to default value", nullptr));
#endif // QT_CONFIG(tooltip)
        resetSaturationButtonColor->setText(QString());
#if QT_CONFIG(tooltip)
        resetContrastButtonColor->setToolTip(QCoreApplication::translate("MainWindow", "reset contrast to default value", nullptr));
#endif // QT_CONFIG(tooltip)
        resetContrastButtonColor->setText(QString());
#if QT_CONFIG(tooltip)
        brightnessEditColor->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        saturationSliderColor->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        resetGammaButtonColor->setToolTip(QCoreApplication::translate("MainWindow", "reset gamma to default value", nullptr));
#endif // QT_CONFIG(tooltip)
        resetGammaButtonColor->setText(QString());
#if QT_CONFIG(tooltip)
        gammaSliderColor->setToolTip(QCoreApplication::translate("MainWindow", "adjusts the image's gamma", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        gammaEditColor->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        resetBrightnessButtonColor->setToolTip(QCoreApplication::translate("MainWindow", "rest brightness to default value", nullptr));
#endif // QT_CONFIG(tooltip)
        resetBrightnessButtonColor->setText(QString());
#if QT_CONFIG(tooltip)
        contrastEditColor->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_40->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_40->setText(QCoreApplication::translate("MainWindow", "Contrast", nullptr));
#if QT_CONFIG(tooltip)
        label_33->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_33->setText(QCoreApplication::translate("MainWindow", "Saturation", nullptr));
#if QT_CONFIG(tooltip)
        saturationEditColor->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_35->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_35->setText(QCoreApplication::translate("MainWindow", "Gamma", nullptr));
#if QT_CONFIG(tooltip)
        contrastSliderColor->setToolTip(QCoreApplication::translate("MainWindow", "adjusts the image's contrast", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
