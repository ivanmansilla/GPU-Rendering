/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_phong;
    QAction *action_gouraud;
    QAction *action_toon;
    QAction *action_obre_fitxer;
    QAction *action_activa_background;
    QAction *action_phong_tex;
    QAction *action_bump_mapping;
    QAction *action_environmental_mapping;
    QAction *action_transparencies;
    QAction *action_afegeix_llum_puntual;
    QAction *action_save_frame_as_image;
    QAction *action_obre_escena;
    QAction *action_start_and_save_animation;
    QAction *action_exit;
    QAction *actionAbout_Qt;
    QAction *action_obre_dades;
    QAction *action_depth;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTabWidget *mainTabs;
    QWidget *perspectiveTab;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *persVerticalAngleSpin;
    QSlider *persVerticalAngleSlider;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDoubleSpinBox *persNearSpin;
    QSlider *persNearSlider;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QDoubleSpinBox *persFarSpin;
    QSlider *persFarSlider;
    QWidget *lookAtTab;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QDoubleSpinBox *lookEyeXSpin;
    QDoubleSpinBox *lookEyeYSpin;
    QDoubleSpinBox *lookEyeZSpin;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QDoubleSpinBox *lookCenterXSpin;
    QDoubleSpinBox *lookCenterYSpin;
    QDoubleSpinBox *lookCenterZSpin;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QDoubleSpinBox *lookUpXSpin;
    QDoubleSpinBox *lookUpYSpin;
    QDoubleSpinBox *lookUpZSpin;
    QWidget *transformTab;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QDoubleSpinBox *scaleSpin;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QDoubleSpinBox *translateXSpin;
    QDoubleSpinBox *translateYSpin;
    QDoubleSpinBox *translateZSpin;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer;
    QLabel *label_10;
    QDoubleSpinBox *rotateXSpin;
    QDoubleSpinBox *rotateYSpin;
    QDoubleSpinBox *rotateZSpin;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_14;
    QDoubleSpinBox *rotateAngleSpin;
    QSlider *rotateAngleSlider;
    QFrame *line;
    QLabel *label_15;
    QWidget *textureTab;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *textureFileEdit;
    QPushButton *browseTextureBtn;
    QWidget *diffuseLightTab;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_12;
    QDoubleSpinBox *lightIa1Spin;
    QDoubleSpinBox *lightIa2Spin;
    QDoubleSpinBox *lightIa3Spin;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_21;
    QDoubleSpinBox *lightIs1Spin;
    QDoubleSpinBox *lightIs2Spin;
    QDoubleSpinBox *lightIs3Spin;
    QHBoxLayout *horizontalLayout_42;
    QLabel *label_421;
    QDoubleSpinBox *lightCoefA;
    QDoubleSpinBox *lightCoefB;
    QDoubleSpinBox *lightCoefC;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QDoubleSpinBox *lightPosXSpin;
    QDoubleSpinBox *lightPosYSpin;
    QDoubleSpinBox *lightPosZSpin;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_13;
    QDoubleSpinBox *lightId1Spin;
    QDoubleSpinBox *lightId2Spin;
    QDoubleSpinBox *lightId3Spin;
    QMenuBar *menuBar;
    QMenu *menuModels;
    QMenu *menuShaders;
    QMenu *menuTextures;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(747, 747);
        action_phong = new QAction(MainWindow);
        action_phong->setObjectName(QString::fromUtf8("action_phong"));
        action_gouraud = new QAction(MainWindow);
        action_gouraud->setObjectName(QString::fromUtf8("action_gouraud"));
        action_toon = new QAction(MainWindow);
        action_toon->setObjectName(QString::fromUtf8("action_toon"));
        action_obre_fitxer = new QAction(MainWindow);
        action_obre_fitxer->setObjectName(QString::fromUtf8("action_obre_fitxer"));
        action_activa_background = new QAction(MainWindow);
        action_activa_background->setObjectName(QString::fromUtf8("action_activa_background"));
        action_phong_tex = new QAction(MainWindow);
        action_phong_tex->setObjectName(QString::fromUtf8("action_phong_tex"));
        action_bump_mapping = new QAction(MainWindow);
        action_bump_mapping->setObjectName(QString::fromUtf8("action_bump_mapping"));
        action_environmental_mapping = new QAction(MainWindow);
        action_environmental_mapping->setObjectName(QString::fromUtf8("action_environmental_mapping"));
        action_transparencies = new QAction(MainWindow);
        action_transparencies->setObjectName(QString::fromUtf8("action_transparencies"));
        action_afegeix_llum_puntual = new QAction(MainWindow);
        action_afegeix_llum_puntual->setObjectName(QString::fromUtf8("action_afegeix_llum_puntual"));
        action_save_frame_as_image = new QAction(MainWindow);
        action_save_frame_as_image->setObjectName(QString::fromUtf8("action_save_frame_as_image"));
        action_obre_escena = new QAction(MainWindow);
        action_obre_escena->setObjectName(QString::fromUtf8("action_obre_escena"));
        action_start_and_save_animation = new QAction(MainWindow);
        action_start_and_save_animation->setObjectName(QString::fromUtf8("action_start_and_save_animation"));
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QString::fromUtf8("action_exit"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        action_obre_dades = new QAction(MainWindow);
        action_obre_dades->setObjectName(QString::fromUtf8("action_obre_dades"));
        action_depth = new QAction(MainWindow);
        action_depth->setObjectName(QString::fromUtf8("action_depth"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        mainTabs = new QTabWidget(centralWidget);
        mainTabs->setObjectName(QString::fromUtf8("mainTabs"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainTabs->sizePolicy().hasHeightForWidth());
        mainTabs->setSizePolicy(sizePolicy1);
        perspectiveTab = new QWidget();
        perspectiveTab->setObjectName(QString::fromUtf8("perspectiveTab"));
        gridLayout_7 = new QGridLayout(perspectiveTab);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(perspectiveTab);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label);

        persVerticalAngleSpin = new QDoubleSpinBox(perspectiveTab);
        persVerticalAngleSpin->setObjectName(QString::fromUtf8("persVerticalAngleSpin"));
        persVerticalAngleSpin->setDecimals(2);
        persVerticalAngleSpin->setMinimum(0.000000000000000);
        persVerticalAngleSpin->setMaximum(180.000000000000000);
        persVerticalAngleSpin->setSingleStep(0.100000000000000);
        persVerticalAngleSpin->setValue(90.000000000000000);

        horizontalLayout_2->addWidget(persVerticalAngleSpin);

        persVerticalAngleSlider = new QSlider(perspectiveTab);
        persVerticalAngleSlider->setObjectName(QString::fromUtf8("persVerticalAngleSlider"));
        persVerticalAngleSlider->setMaximum(18000);
        persVerticalAngleSlider->setPageStep(10);
        persVerticalAngleSlider->setValue(9000);
        persVerticalAngleSlider->setSliderPosition(9000);
        persVerticalAngleSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(persVerticalAngleSlider);


        gridLayout_7->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(perspectiveTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(label_3);

        persNearSpin = new QDoubleSpinBox(perspectiveTab);
        persNearSpin->setObjectName(QString::fromUtf8("persNearSpin"));
        persNearSpin->setDecimals(2);
        persNearSpin->setMinimum(0.000000000000000);
        persNearSpin->setMaximum(999.000000000000000);
        persNearSpin->setSingleStep(0.100000000000000);
        persNearSpin->setValue(0.100000000000000);

        horizontalLayout_4->addWidget(persNearSpin);

        persNearSlider = new QSlider(perspectiveTab);
        persNearSlider->setObjectName(QString::fromUtf8("persNearSlider"));
        persNearSlider->setMaximum(99900);
        persNearSlider->setValue(10);
        persNearSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(persNearSlider);


        gridLayout_7->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(perspectiveTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(label_4);

        persFarSpin = new QDoubleSpinBox(perspectiveTab);
        persFarSpin->setObjectName(QString::fromUtf8("persFarSpin"));
        persFarSpin->setMinimum(0.000000000000000);
        persFarSpin->setMaximum(999.000000000000000);
        persFarSpin->setSingleStep(0.100000000000000);
        persFarSpin->setValue(100.000000000000000);

        horizontalLayout_5->addWidget(persFarSpin);

        persFarSlider = new QSlider(perspectiveTab);
        persFarSlider->setObjectName(QString::fromUtf8("persFarSlider"));
        persFarSlider->setMaximum(99900);
        persFarSlider->setValue(10000);
        persFarSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(persFarSlider);


        gridLayout_7->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        mainTabs->addTab(perspectiveTab, QString());
        lookAtTab = new QWidget();
        lookAtTab->setObjectName(QString::fromUtf8("lookAtTab"));
        gridLayout_3 = new QGridLayout(lookAtTab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(lookAtTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(label_5);

        lookEyeXSpin = new QDoubleSpinBox(lookAtTab);
        lookEyeXSpin->setObjectName(QString::fromUtf8("lookEyeXSpin"));
        lookEyeXSpin->setMinimum(-99999.000000000000000);
        lookEyeXSpin->setMaximum(99999.000000000000000);
        lookEyeXSpin->setSingleStep(0.100000000000000);
        lookEyeXSpin->setValue(0.000000000000000);

        horizontalLayout_6->addWidget(lookEyeXSpin);

        lookEyeYSpin = new QDoubleSpinBox(lookAtTab);
        lookEyeYSpin->setObjectName(QString::fromUtf8("lookEyeYSpin"));
        lookEyeYSpin->setMinimum(-99999.000000000000000);
        lookEyeYSpin->setMaximum(99999.000000000000000);
        lookEyeYSpin->setSingleStep(0.100000000000000);
        lookEyeYSpin->setValue(0.000000000000000);

        horizontalLayout_6->addWidget(lookEyeYSpin);

        lookEyeZSpin = new QDoubleSpinBox(lookAtTab);
        lookEyeZSpin->setObjectName(QString::fromUtf8("lookEyeZSpin"));
        lookEyeZSpin->setMinimum(-99999.000000000000000);
        lookEyeZSpin->setMaximum(99999.000000000000000);
        lookEyeZSpin->setSingleStep(0.100000000000000);
        lookEyeZSpin->setValue(1.000000000000000);

        horizontalLayout_6->addWidget(lookEyeZSpin);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(lookAtTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(label_6);

        lookCenterXSpin = new QDoubleSpinBox(lookAtTab);
        lookCenterXSpin->setObjectName(QString::fromUtf8("lookCenterXSpin"));
        lookCenterXSpin->setMinimum(-99999.000000000000000);
        lookCenterXSpin->setMaximum(99999.000000000000000);
        lookCenterXSpin->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(lookCenterXSpin);

        lookCenterYSpin = new QDoubleSpinBox(lookAtTab);
        lookCenterYSpin->setObjectName(QString::fromUtf8("lookCenterYSpin"));
        lookCenterYSpin->setMinimum(-99999.000000000000000);
        lookCenterYSpin->setMaximum(99999.000000000000000);
        lookCenterYSpin->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(lookCenterYSpin);

        lookCenterZSpin = new QDoubleSpinBox(lookAtTab);
        lookCenterZSpin->setObjectName(QString::fromUtf8("lookCenterZSpin"));
        lookCenterZSpin->setMinimum(-99999.000000000000000);
        lookCenterZSpin->setMaximum(99999.000000000000000);
        lookCenterZSpin->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(lookCenterZSpin);


        gridLayout_3->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(lookAtTab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(label_7);

        lookUpXSpin = new QDoubleSpinBox(lookAtTab);
        lookUpXSpin->setObjectName(QString::fromUtf8("lookUpXSpin"));
        lookUpXSpin->setMinimum(-99999.000000000000000);
        lookUpXSpin->setMaximum(99999.000000000000000);
        lookUpXSpin->setSingleStep(0.100000000000000);

        horizontalLayout_8->addWidget(lookUpXSpin);

        lookUpYSpin = new QDoubleSpinBox(lookAtTab);
        lookUpYSpin->setObjectName(QString::fromUtf8("lookUpYSpin"));
        lookUpYSpin->setMinimum(-99999.000000000000000);
        lookUpYSpin->setMaximum(99999.000000000000000);
        lookUpYSpin->setSingleStep(0.100000000000000);
        lookUpYSpin->setValue(1.000000000000000);

        horizontalLayout_8->addWidget(lookUpYSpin);

        lookUpZSpin = new QDoubleSpinBox(lookAtTab);
        lookUpZSpin->setObjectName(QString::fromUtf8("lookUpZSpin"));
        lookUpZSpin->setMinimum(-99999.000000000000000);
        lookUpZSpin->setMaximum(99999.000000000000000);
        lookUpZSpin->setSingleStep(0.100000000000000);

        horizontalLayout_8->addWidget(lookUpZSpin);


        gridLayout_3->addLayout(horizontalLayout_8, 2, 0, 1, 1);

        mainTabs->addTab(lookAtTab, QString());
        transformTab = new QWidget();
        transformTab->setObjectName(QString::fromUtf8("transformTab"));
        gridLayout_4 = new QGridLayout(transformTab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(transformTab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(label_8);

        scaleSpin = new QDoubleSpinBox(transformTab);
        scaleSpin->setObjectName(QString::fromUtf8("scaleSpin"));
        scaleSpin->setMinimum(-99999.000000000000000);
        scaleSpin->setMaximum(99999.000000000000000);
        scaleSpin->setSingleStep(0.100000000000000);
        scaleSpin->setValue(1.000000000000000);

        horizontalLayout_9->addWidget(scaleSpin);


        gridLayout_4->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_9 = new QLabel(transformTab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        horizontalLayout_10->addWidget(label_9);

        translateXSpin = new QDoubleSpinBox(transformTab);
        translateXSpin->setObjectName(QString::fromUtf8("translateXSpin"));
        translateXSpin->setMinimum(-99999.000000000000000);
        translateXSpin->setMaximum(99999.000000000000000);
        translateXSpin->setSingleStep(0.100000000000000);

        horizontalLayout_10->addWidget(translateXSpin);

        translateYSpin = new QDoubleSpinBox(transformTab);
        translateYSpin->setObjectName(QString::fromUtf8("translateYSpin"));
        translateYSpin->setMinimum(-99999.000000000000000);
        translateYSpin->setMaximum(99999.000000000000000);
        translateYSpin->setSingleStep(0.100000000000000);

        horizontalLayout_10->addWidget(translateYSpin);

        translateZSpin = new QDoubleSpinBox(transformTab);
        translateZSpin->setObjectName(QString::fromUtf8("translateZSpin"));
        translateZSpin->setMinimum(-99999.000000000000000);
        translateZSpin->setMaximum(99999.000000000000000);
        translateZSpin->setSingleStep(0.100000000000000);

        horizontalLayout_10->addWidget(translateZSpin);


        gridLayout_4->addLayout(horizontalLayout_10, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer = new QSpacerItem(19, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        label_10 = new QLabel(transformTab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);

        horizontalLayout_11->addWidget(label_10);

        rotateXSpin = new QDoubleSpinBox(transformTab);
        rotateXSpin->setObjectName(QString::fromUtf8("rotateXSpin"));
        rotateXSpin->setMinimum(-99999.000000000000000);
        rotateXSpin->setMaximum(99999.000000000000000);
        rotateXSpin->setSingleStep(0.100000000000000);

        horizontalLayout_11->addWidget(rotateXSpin);

        rotateYSpin = new QDoubleSpinBox(transformTab);
        rotateYSpin->setObjectName(QString::fromUtf8("rotateYSpin"));
        rotateYSpin->setMinimum(-99999.000000000000000);
        rotateYSpin->setMaximum(99999.000000000000000);
        rotateYSpin->setSingleStep(0.100000000000000);

        horizontalLayout_11->addWidget(rotateYSpin);

        rotateZSpin = new QDoubleSpinBox(transformTab);
        rotateZSpin->setObjectName(QString::fromUtf8("rotateZSpin"));
        rotateZSpin->setMinimum(-99999.000000000000000);
        rotateZSpin->setMaximum(99999.000000000000000);
        rotateZSpin->setSingleStep(0.100000000000000);

        horizontalLayout_11->addWidget(rotateZSpin);


        gridLayout_4->addLayout(horizontalLayout_11, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(19, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_14 = new QLabel(transformTab);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_3->addWidget(label_14);

        rotateAngleSpin = new QDoubleSpinBox(transformTab);
        rotateAngleSpin->setObjectName(QString::fromUtf8("rotateAngleSpin"));
        rotateAngleSpin->setMinimum(-99999.000000000000000);
        rotateAngleSpin->setMaximum(99999.000000000000000);
        rotateAngleSpin->setSingleStep(0.100000000000000);

        horizontalLayout_3->addWidget(rotateAngleSpin);

        rotateAngleSlider = new QSlider(transformTab);
        rotateAngleSlider->setObjectName(QString::fromUtf8("rotateAngleSlider"));
        rotateAngleSlider->setMinimum(-3600);
        rotateAngleSlider->setMaximum(3600);
        rotateAngleSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(rotateAngleSlider);


        gridLayout_4->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        line = new QFrame(transformTab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 2, 0, 1, 1);

        label_15 = new QLabel(transformTab);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 3, 0, 1, 1);

        mainTabs->addTab(transformTab, QString());
        textureTab = new QWidget();
        textureTab->setObjectName(QString::fromUtf8("textureTab"));
        gridLayout_6 = new QGridLayout(textureTab);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(textureTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        textureFileEdit = new QLineEdit(textureTab);
        textureFileEdit->setObjectName(QString::fromUtf8("textureFileEdit"));

        horizontalLayout->addWidget(textureFileEdit);

        browseTextureBtn = new QPushButton(textureTab);
        browseTextureBtn->setObjectName(QString::fromUtf8("browseTextureBtn"));

        horizontalLayout->addWidget(browseTextureBtn);


        gridLayout_6->addLayout(horizontalLayout, 0, 0, 1, 1);

        mainTabs->addTab(textureTab, QString());
        diffuseLightTab = new QWidget();
        diffuseLightTab->setObjectName(QString::fromUtf8("diffuseLightTab"));
        gridLayout_5 = new QGridLayout(diffuseLightTab);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_12 = new QLabel(diffuseLightTab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);

        horizontalLayout_14->addWidget(label_12);

        lightIa1Spin = new QDoubleSpinBox(diffuseLightTab);
        lightIa1Spin->setObjectName(QString::fromUtf8("lightIa1Spin"));
        lightIa1Spin->setSingleStep(0.100000000000000);
        lightIa1Spin->setValue(0.300000000000000);

        horizontalLayout_14->addWidget(lightIa1Spin);

        lightIa2Spin = new QDoubleSpinBox(diffuseLightTab);
        lightIa2Spin->setObjectName(QString::fromUtf8("lightIa2Spin"));
        lightIa2Spin->setSingleStep(0.100000000000000);
        lightIa2Spin->setValue(0.300000000000000);

        horizontalLayout_14->addWidget(lightIa2Spin);

        lightIa3Spin = new QDoubleSpinBox(diffuseLightTab);
        lightIa3Spin->setObjectName(QString::fromUtf8("lightIa3Spin"));
        lightIa3Spin->setSingleStep(0.100000000000000);
        lightIa3Spin->setValue(0.300000000000000);

        horizontalLayout_14->addWidget(lightIa3Spin);


        gridLayout_5->addLayout(horizontalLayout_14, 1, 0, 1, 1);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        label_21 = new QLabel(diffuseLightTab);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy2.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy2);

        horizontalLayout_41->addWidget(label_21);

        lightIs1Spin = new QDoubleSpinBox(diffuseLightTab);
        lightIs1Spin->setObjectName(QString::fromUtf8("lightIs1Spin"));
        lightIs1Spin->setSingleStep(0.100000000000000);
        lightIs1Spin->setValue(0.700000000000000);

        horizontalLayout_41->addWidget(lightIs1Spin);

        lightIs2Spin = new QDoubleSpinBox(diffuseLightTab);
        lightIs2Spin->setObjectName(QString::fromUtf8("lightIs2Spin"));
        lightIs2Spin->setSingleStep(0.100000000000000);
        lightIs2Spin->setValue(0.700000000000000);

        horizontalLayout_41->addWidget(lightIs2Spin);

        lightIs3Spin = new QDoubleSpinBox(diffuseLightTab);
        lightIs3Spin->setObjectName(QString::fromUtf8("lightIs3Spin"));
        lightIs3Spin->setSingleStep(0.100000000000000);
        lightIs3Spin->setValue(0.700000000000000);

        horizontalLayout_41->addWidget(lightIs3Spin);


        gridLayout_5->addLayout(horizontalLayout_41, 3, 0, 1, 1);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        label_421 = new QLabel(diffuseLightTab);
        label_421->setObjectName(QString::fromUtf8("label_421"));
        sizePolicy2.setHeightForWidth(label_421->sizePolicy().hasHeightForWidth());
        label_421->setSizePolicy(sizePolicy2);

        horizontalLayout_42->addWidget(label_421);

        lightCoefA = new QDoubleSpinBox(diffuseLightTab);
        lightCoefA->setObjectName(QString::fromUtf8("lightCoefA"));
        lightCoefA->setSingleStep(0.100000000000000);
        lightCoefA->setValue(0.000000000000000);

        horizontalLayout_42->addWidget(lightCoefA);

        lightCoefB = new QDoubleSpinBox(diffuseLightTab);
        lightCoefB->setObjectName(QString::fromUtf8("lightCoefB"));
        lightCoefB->setSingleStep(0.100000000000000);
        lightCoefB->setValue(0.000000000000000);

        horizontalLayout_42->addWidget(lightCoefB);

        lightCoefC = new QDoubleSpinBox(diffuseLightTab);
        lightCoefC->setObjectName(QString::fromUtf8("lightCoefC"));
        lightCoefC->setSingleStep(0.100000000000000);
        lightCoefC->setValue(0.000000000000000);

        horizontalLayout_42->addWidget(lightCoefC);


        gridLayout_5->addLayout(horizontalLayout_42, 4, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_11 = new QLabel(diffuseLightTab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);

        horizontalLayout_13->addWidget(label_11);

        lightPosXSpin = new QDoubleSpinBox(diffuseLightTab);
        lightPosXSpin->setObjectName(QString::fromUtf8("lightPosXSpin"));
        lightPosXSpin->setMinimum(-99999.000000000000000);
        lightPosXSpin->setMaximum(99999.000000000000000);
        lightPosXSpin->setSingleStep(0.100000000000000);
        lightPosXSpin->setValue(-25.000000000000000);

        horizontalLayout_13->addWidget(lightPosXSpin);

        lightPosYSpin = new QDoubleSpinBox(diffuseLightTab);
        lightPosYSpin->setObjectName(QString::fromUtf8("lightPosYSpin"));
        lightPosYSpin->setMinimum(-99999.000000000000000);
        lightPosYSpin->setMaximum(99999.000000000000000);
        lightPosYSpin->setSingleStep(0.100000000000000);
        lightPosYSpin->setValue(25.000000000000000);

        horizontalLayout_13->addWidget(lightPosYSpin);

        lightPosZSpin = new QDoubleSpinBox(diffuseLightTab);
        lightPosZSpin->setObjectName(QString::fromUtf8("lightPosZSpin"));
        lightPosZSpin->setMinimum(-99999.000000000000000);
        lightPosZSpin->setMaximum(99999.000000000000000);
        lightPosZSpin->setSingleStep(0.100000000000000);
        lightPosZSpin->setValue(25.000000000000000);

        horizontalLayout_13->addWidget(lightPosZSpin);


        gridLayout_5->addLayout(horizontalLayout_13, 0, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_13 = new QLabel(diffuseLightTab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);

        horizontalLayout_15->addWidget(label_13);

        lightId1Spin = new QDoubleSpinBox(diffuseLightTab);
        lightId1Spin->setObjectName(QString::fromUtf8("lightId1Spin"));
        lightId1Spin->setSingleStep(0.100000000000000);
        lightId1Spin->setValue(1.000000000000000);

        horizontalLayout_15->addWidget(lightId1Spin);

        lightId2Spin = new QDoubleSpinBox(diffuseLightTab);
        lightId2Spin->setObjectName(QString::fromUtf8("lightId2Spin"));
        lightId2Spin->setSingleStep(0.100000000000000);
        lightId2Spin->setValue(1.000000000000000);

        horizontalLayout_15->addWidget(lightId2Spin);

        lightId3Spin = new QDoubleSpinBox(diffuseLightTab);
        lightId3Spin->setObjectName(QString::fromUtf8("lightId3Spin"));
        lightId3Spin->setSingleStep(0.100000000000000);
        lightId3Spin->setValue(1.000000000000000);

        horizontalLayout_15->addWidget(lightId3Spin);


        gridLayout_5->addLayout(horizontalLayout_15, 2, 0, 1, 1);

        mainTabs->addTab(diffuseLightTab, QString());

        gridLayout->addWidget(mainTabs, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 747, 22));
        menuModels = new QMenu(menuBar);
        menuModels->setObjectName(QString::fromUtf8("menuModels"));
        menuShaders = new QMenu(menuBar);
        menuShaders->setObjectName(QString::fromUtf8("menuShaders"));
        menuTextures = new QMenu(menuBar);
        menuTextures->setObjectName(QString::fromUtf8("menuTextures"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(mainTabs, persVerticalAngleSpin);
        QWidget::setTabOrder(persVerticalAngleSpin, persVerticalAngleSlider);
        QWidget::setTabOrder(persVerticalAngleSlider, persNearSpin);
        QWidget::setTabOrder(persNearSpin, persNearSlider);
        QWidget::setTabOrder(persNearSlider, persFarSpin);
        QWidget::setTabOrder(persFarSpin, persFarSlider);
        QWidget::setTabOrder(persFarSlider, lookEyeXSpin);
        QWidget::setTabOrder(lookEyeXSpin, lookEyeYSpin);
        QWidget::setTabOrder(lookEyeYSpin, lookEyeZSpin);
        QWidget::setTabOrder(lookEyeZSpin, lookCenterXSpin);
        QWidget::setTabOrder(lookCenterXSpin, lookCenterYSpin);
        QWidget::setTabOrder(lookCenterYSpin, lookCenterZSpin);
        QWidget::setTabOrder(lookCenterZSpin, lookUpXSpin);
        QWidget::setTabOrder(lookUpXSpin, lookUpYSpin);
        QWidget::setTabOrder(lookUpYSpin, lookUpZSpin);
        QWidget::setTabOrder(lookUpZSpin, scaleSpin);
        QWidget::setTabOrder(scaleSpin, translateXSpin);
        QWidget::setTabOrder(translateXSpin, translateYSpin);
        QWidget::setTabOrder(translateYSpin, translateZSpin);
        QWidget::setTabOrder(translateZSpin, rotateXSpin);
        QWidget::setTabOrder(rotateXSpin, rotateYSpin);
        QWidget::setTabOrder(rotateYSpin, rotateZSpin);
        QWidget::setTabOrder(rotateZSpin, rotateAngleSlider);
        QWidget::setTabOrder(rotateAngleSlider, textureFileEdit);
        QWidget::setTabOrder(textureFileEdit, browseTextureBtn);
        QWidget::setTabOrder(browseTextureBtn, lightPosXSpin);
        QWidget::setTabOrder(lightPosXSpin, lightPosYSpin);
        QWidget::setTabOrder(lightPosYSpin, lightPosZSpin);
        QWidget::setTabOrder(lightPosZSpin, lightIa1Spin);
        QWidget::setTabOrder(lightIa1Spin, lightIa2Spin);
        QWidget::setTabOrder(lightIa2Spin, lightIa3Spin);
        QWidget::setTabOrder(lightIa3Spin, lightId1Spin);
        QWidget::setTabOrder(lightId1Spin, lightId2Spin);
        QWidget::setTabOrder(lightId2Spin, lightId3Spin);
        QWidget::setTabOrder(lightId3Spin, lightIs2Spin);
        QWidget::setTabOrder(lightIs2Spin, lightIs3Spin);

        menuBar->addAction(menuModels->menuAction());
        menuBar->addAction(menuShaders->menuAction());
        menuBar->addAction(menuTextures->menuAction());
        menuModels->addAction(action_obre_fitxer);
        menuModels->addAction(action_obre_escena);
        menuModels->addAction(action_obre_dades);
        menuModels->addSeparator();
        menuModels->addAction(action_save_frame_as_image);
        menuModels->addAction(action_start_and_save_animation);
        menuModels->addSeparator();
        menuModels->addAction(actionAbout_Qt);
        menuModels->addSeparator();
        menuModels->addAction(action_exit);
        menuShaders->addAction(action_depth);
        menuShaders->addAction(action_gouraud);
        menuShaders->addAction(action_phong);
        menuShaders->addAction(action_toon);
        menuTextures->addAction(action_activa_background);
        menuTextures->addAction(action_phong_tex);
        menuTextures->addAction(action_bump_mapping);
        menuTextures->addAction(action_environmental_mapping);
        menuTextures->addAction(action_transparencies);

        retranslateUi(MainWindow);

        mainTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_phong->setText(QCoreApplication::translate("MainWindow", "Phong Shader", nullptr));
#if QT_CONFIG(tooltip)
        action_phong->setToolTip(QCoreApplication::translate("MainWindow", "Activar Phong Shader", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_phong->setShortcut(QCoreApplication::translate("MainWindow", "Alt+2", nullptr));
#endif // QT_CONFIG(shortcut)
        action_gouraud->setText(QCoreApplication::translate("MainWindow", "Gouraud Shader", nullptr));
#if QT_CONFIG(tooltip)
        action_gouraud->setToolTip(QCoreApplication::translate("MainWindow", "Activar Gouraud Shader", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_gouraud->setShortcut(QCoreApplication::translate("MainWindow", "Alt+1", nullptr));
#endif // QT_CONFIG(shortcut)
        action_toon->setText(QCoreApplication::translate("MainWindow", "Toon Shader", nullptr));
#if QT_CONFIG(tooltip)
        action_toon->setToolTip(QCoreApplication::translate("MainWindow", "Activar Toon Shader", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_toon->setShortcut(QCoreApplication::translate("MainWindow", "Alt+3", nullptr));
#endif // QT_CONFIG(shortcut)
        action_obre_fitxer->setText(QCoreApplication::translate("MainWindow", "Obre Fitxer .obj", nullptr));
#if QT_CONFIG(tooltip)
        action_obre_fitxer->setToolTip(QCoreApplication::translate("MainWindow", "Obre Fitxer .obj", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_obre_fitxer->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        action_activa_background->setText(QCoreApplication::translate("MainWindow", "Active background", nullptr));
#if QT_CONFIG(shortcut)
        action_activa_background->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        action_phong_tex->setText(QCoreApplication::translate("MainWindow", "PhongTex", nullptr));
#if QT_CONFIG(shortcut)
        action_phong_tex->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        action_bump_mapping->setText(QCoreApplication::translate("MainWindow", "Bump-mapping", nullptr));
#if QT_CONFIG(shortcut)
        action_bump_mapping->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        action_environmental_mapping->setText(QCoreApplication::translate("MainWindow", "Environmental-mapping", nullptr));
#if QT_CONFIG(shortcut)
        action_environmental_mapping->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        action_transparencies->setText(QCoreApplication::translate("MainWindow", "Transparencies", nullptr));
#if QT_CONFIG(shortcut)
        action_transparencies->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+5", nullptr));
#endif // QT_CONFIG(shortcut)
        action_afegeix_llum_puntual->setText(QCoreApplication::translate("MainWindow", "Afegeix Llum", nullptr));
        action_save_frame_as_image->setText(QCoreApplication::translate("MainWindow", "Save Frame as Image", nullptr));
        action_obre_escena->setText(QCoreApplication::translate("MainWindow", "Obre Escena", nullptr));
#if QT_CONFIG(shortcut)
        action_obre_escena->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        action_start_and_save_animation->setText(QCoreApplication::translate("MainWindow", "Start and Save Animation", nullptr));
        action_exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        action_exit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        action_obre_dades->setText(QCoreApplication::translate("MainWindow", "Obre Dades", nullptr));
#if QT_CONFIG(shortcut)
        action_obre_dades->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        action_depth->setText(QCoreApplication::translate("MainWindow", "Depth Shader", nullptr));
#if QT_CONFIG(shortcut)
        action_depth->setShortcut(QCoreApplication::translate("MainWindow", "Alt+0", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Scene Viewer", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Vertical Angle (Zoom) :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Near Plane :", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Far Plane :", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(perspectiveTab), QCoreApplication::translate("MainWindow", "Perspective", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Eye (X,Y,Z) :", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Center (X,Y,Z) :", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Up (X,Y,Z) :", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(lookAtTab), QCoreApplication::translate("MainWindow", "Look At", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Scale :", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Translate (X,Y,Z) :", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Axis (X,Y,Z) :", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Angle (-360 : +360) :", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Rotate:", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(transformTab), QCoreApplication::translate("MainWindow", "Transformation", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Texture File :", nullptr));
        browseTextureBtn->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(textureTab), QCoreApplication::translate("MainWindow", "Texture", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Ia :", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Is :", nullptr));
        label_421->setText(QCoreApplication::translate("MainWindow", "Atenuation :", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Position (X,Y,Z) :", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Id :", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(diffuseLightTab), QCoreApplication::translate("MainWindow", "Point Light", nullptr));
        menuModels->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuShaders->setTitle(QCoreApplication::translate("MainWindow", "Shaders", nullptr));
        menuTextures->setTitle(QCoreApplication::translate("MainWindow", "Textures", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
