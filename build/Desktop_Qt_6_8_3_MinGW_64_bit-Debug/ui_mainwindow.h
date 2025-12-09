/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <FlexibleQDoubleSpinBox.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionImportJson;
    QAction *actionImportProtocol;
    QAction *action_2;
    QAction *actioninfo;
    QWidget *centralwidget;
    QTabWidget *Communication;
    QWidget *tab;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_SerialConnect;
    QComboBox *comboBox_SerialPortNo;
    QComboBox *comboBox_SerialBaudRate;
    QComboBox *comboBox_SerialDateBits;
    QComboBox *comboBox_SerialStopBits;
    QComboBox *comboBox_SerialParity;
    QComboBox *comboBox_SerialFlowCtrl;
    QWidget *tab_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_NetConnect;
    QLineEdit *lineEdit_NetIP;
    QLineEdit *lineEdit_NetPortNo;
    QWidget *tab_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_CanConnect;
    QComboBox *comboBox_CanBaudRate;
    QTextEdit *textEdit_RealTimeCommunicateData;
    QListWidget *listWidget_Device;
    QPushButton *pushButton_LockRealTimeWindows;
    QPushButton *pushButton_CleanRealTimeWindows;
    QLabel *label_8;
    QLabel *label_Version;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox_current_B;
    QLabel *label_10;
    QLabel *label_5;
    QLabel *label_2;
    QPushButton *pushButton_CoilCurrentHexSet;
    QLabel *label__PowerCtrlHexCH2;
    QLabel *label_4;
    QPushButton *pushButton_DAC8571_Set;
    QPushButton *pushButton_MAX5719_Set;
    QLineEdit *lineEdit_DAC8571;
    QLineEdit *lineEdit_sw0;
    QPushButton *pushButton__PowerCtrlHexSet;
    QLineEdit *lineEdit_sw1;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label;
    QLineEdit *lineEdit_CoilCurrentHexCH2;
    QPushButton *pushButton_current_Set;
    QCheckBox *checkBox_MAX5719_A;
    QComboBox *comboBox_multi_sel;
    QRadioButton *radioButton_current_Neg;
    QLabel *label_11;
    QPushButton *pushButton_dial_sw_get;
    QCheckBox *checkBox_DAC8571_B;
    QLabel *label_CoilCurrentHexCH1;
    QLineEdit *lineEdit_CoilCurrentHexCH1;
    QRadioButton *radioButton_current_Pos;
    QLineEdit *lineEdit_PowerCtrlHexCH1;
    QPushButton *pushButton_multi_Set;
    QRadioButton *radioButton_current_Close;
    QLabel *label_CoilCurrentHexCH2;
    QLabel *label_7;
    QCheckBox *checkBox_MAX5719_B;
    QCheckBox *checkBox_current_A;
    QLineEdit *lineEdit_MAX5719;
    QLabel *label__PowerCtrlHexCH1;
    QCheckBox *checkBox_DAC8571_A;
    QLineEdit *lineEdit_PowerCtrlHexCH2;
    QTextEdit *textEdit_ads8326;
    QLabel *label_9;
    QWidget *tab_5;
    QFrame *frame_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_InputCurrentB;
    QLabel *label_InputCurrent;
    QLineEdit *lineEdit_CoilVolCoefkB;
    QPushButton *pushButton_InputCurrentGet;
    QLabel *label_CoilVol;
    QLineEdit *lineEdit_CoilCurrentSetCoefbA;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_CoilResistSet;
    QPushButton *pushButton_CoilResistGet;
    QLineEdit *lineEdit_CoilCurrentGetCoefbA;
    QPushButton *pushButton_CoilCurrentGet;
    QLineEdit *lineEdit_CoilVolB;
    FlexibleQDoubleSpinBox *widget_MyQDoubleSpinBox_OutputCurrentB;
    QLineEdit *lineEdit_CoilCurrentSetCoefbB;
    QLineEdit *lineEdit_InputCurrentA;
    QLabel *label_CoilCurrent;
    QLabel *label_OutputCurrent;
    QLineEdit *lineEdit_CoilCurrentGetCoefkB;
    QLineEdit *lineEdit_CoilCurrentSetCoefkB;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_InputVolSet;
    QPushButton *pushButton_InputVolGet;
    QLineEdit *lineEdit_CoilCurrentSetCoefkA;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_CoilCurrentSetCoefWrite;
    QPushButton *pushButton_CoilCurrentSetCoefRead;
    QLabel *label_CoilVolCoef;
    QLineEdit *lineEdit_InputVolB;
    QLineEdit *lineEdit_CoilCurrentA;
    QLabel *label_PowerVol;
    QLabel *label_CoilCurrentSetCoef;
    QPushButton *pushButton_PowerVolGet;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_OutputCurrentSet;
    QPushButton *pushButton_OutputCurrentGet;
    QLineEdit *lineEdit_PowerVolA;
    QLineEdit *lineEdit_InputVolA;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_CoilCurrentGetCoefWrite;
    QPushButton *pushButton_CoilCurrentGetCoefRead;
    QLabel *label_InputVol;
    QLineEdit *lineEdit_CoilVolA;
    QLabel *label_CoilCurrentGetCoef;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_CoilVolCoefSet;
    QPushButton *pushButton_CoilVolCoefGet;
    FlexibleQDoubleSpinBox *widget_MyQDoubleSpinBox_OutputCurrentA;
    QLineEdit *lineEdit_PowerVolB;
    QLineEdit *lineEdit_CoilResistB;
    QLineEdit *lineEdit_CoilCurrentGetCoefkA;
    QPushButton *pushButton_CoilVolGet;
    QLineEdit *lineEdit_CoilResistA;
    QLineEdit *lineEdit_CoilCurrentB;
    QLineEdit *lineEdit_CoilVolCoefkA;
    QLineEdit *lineEdit_CoilCurrentGetCoefbB;
    QLabel *label_CoilResist;
    QLineEdit *lineEdit_CoilVolCoefbA;
    QLineEdit *lineEdit_CoilVolCoefbB;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_ParaReadGet;
    QPushButton *pushButton_SelfCheck;
    QLineEdit *lineEdit_BoardErrCode;
    QLineEdit *lineEdit_BoardTemp;
    QLabel *label_ParaRestore;
    QLabel *label_Reboot;
    QLineEdit *lineEdit_SelfCheck;
    QLabel *label_BoardStatus;
    QPushButton *pushButton_BoardTempGet;
    FlexibleQDoubleSpinBox *widget_MyQDoubleSpinBox_ConstCurrent;
    QPushButton *pushButton_BoardID_Get;
    QLabel *label_ExcitateCurrent;
    QLabel *label_SelfCheck;
    QLabel *label_ParaRead;
    QLabel *label_RefreshInterval;
    QLineEdit *lineEdit_BoardID;
    QPushButton *pushButton_ParaRestoreSet;
    QCheckBox *checkBox_RefreshInterval;
    QLineEdit *lineEdit_BoardState;
    QLabel *label_BoardTemp;
    QCheckBox *checkBox_CalibrateModeEn;
    QPushButton *pushButton_RebootSet;
    QLabel *label_CailibrateMode;
    QLabel *label_ParaSave;
    QPushButton *pushButton_ParaSaveSet;
    QLabel *label_BoardID;
    QLineEdit *lineEdit_RefreshInterval;
    QPushButton *pushButton_ExcitateCurrentSet;
    QLabel *label_ErrorClear;
    QPushButton *pushButton_ErrorClear;
    QFrame *line;
    QFrame *line_2;
    QPushButton *pushButton_DeviceInfo;
    QPushButton *pushButton_FirmVersion;
    QSlider *verticalSlider_ConstCurrent;
    QSlider *verticalSlider_OutputCurrentA;
    QSlider *verticalSlider_OutputCurrentB;
    QLabel *label_ExcitateCurrent_QSlider;
    QLabel *label_OutputCurrent_QSlider_B;
    QLabel *label_OutputCurrent_QSlider_A;
    QWidget *tab_6;
    QFrame *frame_3;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBox_WobCHB;
    QPushButton *pushButtonWobClose;
    QLabel *label_WobAmp;
    QLineEdit *lineEdit_WobPeriod;
    QCheckBox *checkBox_WobCHA;
    QLineEdit *lineEdit_WobAmp;
    QPushButton *pushButton_WobStart;
    QLineEdit *lineEdit_WobOffset;
    QLabel *label_NULL;
    QLabel *label_WobPeriod;
    QLabel *label_WobOffset;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEdit_DegaussPeriodDots;
    QLineEdit *lineEdit_DegaussAmp;
    QLabel *label_DegaussCutoff;
    QLineEdit *lineEdit_DegaussTotalDots;
    QLabel *label_DegaussTotalDots;
    QCheckBox *checkBox_DegaussCHB;
    QCheckBox *checkBox_DegaussCHA;
    QLineEdit *lineEdit_DegaussAtten;
    QLineEdit *lineEdit_DegaussPeriod;
    QLabel *label_DegaussAtten;
    QPushButton *pushButton_DegaussStart;
    QLabel *label_DegaussPeriod;
    QLabel *label_DegaussAmp;
    QLineEdit *lineEdit_DegaussCutoff;
    QLabel *label_DegaussPeriodDots;
    QPushButton *pushButton_DegaussAbort;
    QFrame *line_3;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_FirmVersion;
    QLabel *label_DeviceInfo;
    QLabel *label_BoardCommunicateID;
    QLineEdit *lineEdit_BoardCommunicateID;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_AddCmd;
    QPushButton *pushButton_DelCmd;
    QPushButton *pushButton_AddMod;
    QPushButton *pushButton_DelMod;
    QPushButton *pushButton_Save;
    QLineEdit *lineEdit_ExcitateCurrent;
    QLineEdit *lineEdit_OutputCurrentA;
    QLineEdit *lineEdit_OutputCurrentB;
    QLabel *label_SystemTime;
    QCheckBox *checkBox_BoardEnable;
    QMenuBar *menubar;
    QMenu *menuDemo;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1052, 734);
        MainWindow->setMaximumSize(QSize(10000, 10000));
        MainWindow->setBaseSize(QSize(0, 100));
        MainWindow->setDocumentMode(false);
        actionImportJson = new QAction(MainWindow);
        actionImportJson->setObjectName("actionImportJson");
        actionImportProtocol = new QAction(MainWindow);
        actionImportProtocol->setObjectName("actionImportProtocol");
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        action_2->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon/download.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        action_2->setIcon(icon);
        actioninfo = new QAction(MainWindow);
        actioninfo->setObjectName("actioninfo");
        actioninfo->setCheckable(true);
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8("applications-office");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("icon/info.jpg"), QSize(), QIcon::Mode::Active, QIcon::State::On);
            icon1.addFile(QString::fromUtf8("icon/info.jpg"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        }
        actioninfo->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Communication = new QTabWidget(centralwidget);
        Communication->setObjectName("Communication");
        Communication->setGeometry(QRect(120, 0, 551, 71));
        Communication->setAutoFillBackground(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 527, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_SerialConnect = new QPushButton(layoutWidget);
        pushButton_SerialConnect->setObjectName("pushButton_SerialConnect");

        horizontalLayout->addWidget(pushButton_SerialConnect);

        comboBox_SerialPortNo = new QComboBox(layoutWidget);
        comboBox_SerialPortNo->setObjectName("comboBox_SerialPortNo");

        horizontalLayout->addWidget(comboBox_SerialPortNo);

        comboBox_SerialBaudRate = new QComboBox(layoutWidget);
        comboBox_SerialBaudRate->setObjectName("comboBox_SerialBaudRate");

        horizontalLayout->addWidget(comboBox_SerialBaudRate);

        comboBox_SerialDateBits = new QComboBox(layoutWidget);
        comboBox_SerialDateBits->setObjectName("comboBox_SerialDateBits");

        horizontalLayout->addWidget(comboBox_SerialDateBits);

        comboBox_SerialStopBits = new QComboBox(layoutWidget);
        comboBox_SerialStopBits->setObjectName("comboBox_SerialStopBits");

        horizontalLayout->addWidget(comboBox_SerialStopBits);

        comboBox_SerialParity = new QComboBox(layoutWidget);
        comboBox_SerialParity->setObjectName("comboBox_SerialParity");

        horizontalLayout->addWidget(comboBox_SerialParity);

        comboBox_SerialFlowCtrl = new QComboBox(layoutWidget);
        comboBox_SerialFlowCtrl->setObjectName("comboBox_SerialFlowCtrl");

        horizontalLayout->addWidget(comboBox_SerialFlowCtrl);

        Communication->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 10, 355, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_NetConnect = new QPushButton(layoutWidget1);
        pushButton_NetConnect->setObjectName("pushButton_NetConnect");

        horizontalLayout_3->addWidget(pushButton_NetConnect);

        lineEdit_NetIP = new QLineEdit(layoutWidget1);
        lineEdit_NetIP->setObjectName("lineEdit_NetIP");

        horizontalLayout_3->addWidget(lineEdit_NetIP);

        lineEdit_NetPortNo = new QLineEdit(layoutWidget1);
        lineEdit_NetPortNo->setObjectName("lineEdit_NetPortNo");

        horizontalLayout_3->addWidget(lineEdit_NetPortNo);

        Communication->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        layoutWidget2 = new QWidget(tab_3);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 10, 152, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_CanConnect = new QPushButton(layoutWidget2);
        pushButton_CanConnect->setObjectName("pushButton_CanConnect");

        horizontalLayout_4->addWidget(pushButton_CanConnect);

        comboBox_CanBaudRate = new QComboBox(layoutWidget2);
        comboBox_CanBaudRate->setObjectName("comboBox_CanBaudRate");

        horizontalLayout_4->addWidget(comboBox_CanBaudRate);

        Communication->addTab(tab_3, QString());
        textEdit_RealTimeCommunicateData = new QTextEdit(centralwidget);
        textEdit_RealTimeCommunicateData->setObjectName("textEdit_RealTimeCommunicateData");
        textEdit_RealTimeCommunicateData->setGeometry(QRect(130, 560, 891, 91));
        listWidget_Device = new QListWidget(centralwidget);
        listWidget_Device->setObjectName("listWidget_Device");
        listWidget_Device->setGeometry(QRect(0, 0, 111, 651));
        pushButton_LockRealTimeWindows = new QPushButton(centralwidget);
        pushButton_LockRealTimeWindows->setObjectName("pushButton_LockRealTimeWindows");
        pushButton_LockRealTimeWindows->setGeometry(QRect(230, 530, 75, 24));
        pushButton_CleanRealTimeWindows = new QPushButton(centralwidget);
        pushButton_CleanRealTimeWindows->setObjectName("pushButton_CleanRealTimeWindows");
        pushButton_CleanRealTimeWindows->setGeometry(QRect(310, 530, 75, 24));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(130, 520, 91, 41));
        label_8->setStyleSheet(QString::fromUtf8(""));
        label_Version = new QLabel(centralwidget);
        label_Version->setObjectName("label_Version");
        label_Version->setGeometry(QRect(910, 20, 131, 21));
        label_Version->setStyleSheet(QString::fromUtf8(""));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(130, 110, 911, 421));
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        frame = new QFrame(tab_4);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 10, 381, 261));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"border-radius:10px;\n"
"border:2px solid rgb(160, 160,160)\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        checkBox_current_B = new QCheckBox(frame);
        checkBox_current_B->setObjectName("checkBox_current_B");

        gridLayout_2->addWidget(checkBox_current_B, 4, 8, 1, 1);

        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 10, 0, 1, 2);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 2);

        pushButton_CoilCurrentHexSet = new QPushButton(frame);
        pushButton_CoilCurrentHexSet->setObjectName("pushButton_CoilCurrentHexSet");
        pushButton_CoilCurrentHexSet->setMinimumSize(QSize(0, 0));
        pushButton_CoilCurrentHexSet->setMaximumSize(QSize(1000, 16777215));

        gridLayout_2->addWidget(pushButton_CoilCurrentHexSet, 11, 9, 1, 1);

        label__PowerCtrlHexCH2 = new QLabel(frame);
        label__PowerCtrlHexCH2->setObjectName("label__PowerCtrlHexCH2");

        gridLayout_2->addWidget(label__PowerCtrlHexCH2, 10, 8, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 9, 0, 1, 1);

        pushButton_DAC8571_Set = new QPushButton(frame);
        pushButton_DAC8571_Set->setObjectName("pushButton_DAC8571_Set");

        gridLayout_2->addWidget(pushButton_DAC8571_Set, 0, 9, 1, 1);

        pushButton_MAX5719_Set = new QPushButton(frame);
        pushButton_MAX5719_Set->setObjectName("pushButton_MAX5719_Set");

        gridLayout_2->addWidget(pushButton_MAX5719_Set, 1, 9, 1, 1);

        lineEdit_DAC8571 = new QLineEdit(frame);
        lineEdit_DAC8571->setObjectName("lineEdit_DAC8571");
        lineEdit_DAC8571->setMinimumSize(QSize(0, 0));
        lineEdit_DAC8571->setMaximumSize(QSize(1000, 1000));

        gridLayout_2->addWidget(lineEdit_DAC8571, 0, 2, 1, 1);

        lineEdit_sw0 = new QLineEdit(frame);
        lineEdit_sw0->setObjectName("lineEdit_sw0");
        lineEdit_sw0->setMinimumSize(QSize(68, 0));
        lineEdit_sw0->setMaximumSize(QSize(68, 1000));

        gridLayout_2->addWidget(lineEdit_sw0, 9, 2, 1, 1);

        pushButton__PowerCtrlHexSet = new QPushButton(frame);
        pushButton__PowerCtrlHexSet->setObjectName("pushButton__PowerCtrlHexSet");
        pushButton__PowerCtrlHexSet->setMinimumSize(QSize(0, 0));
        pushButton__PowerCtrlHexSet->setMaximumSize(QSize(1000, 16777215));

        gridLayout_2->addWidget(pushButton__PowerCtrlHexSet, 10, 9, 1, 1);

        lineEdit_sw1 = new QLineEdit(frame);
        lineEdit_sw1->setObjectName("lineEdit_sw1");
        lineEdit_sw1->setMinimumSize(QSize(68, 0));
        lineEdit_sw1->setMaximumSize(QSize(68, 1000));

        gridLayout_2->addWidget(lineEdit_sw1, 9, 6, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 6, 0, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 9, 3, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        lineEdit_CoilCurrentHexCH2 = new QLineEdit(frame);
        lineEdit_CoilCurrentHexCH2->setObjectName("lineEdit_CoilCurrentHexCH2");
        lineEdit_CoilCurrentHexCH2->setMinimumSize(QSize(68, 0));
        lineEdit_CoilCurrentHexCH2->setMaximumSize(QSize(68, 1000));

        gridLayout_2->addWidget(lineEdit_CoilCurrentHexCH2, 11, 6, 1, 1);

        pushButton_current_Set = new QPushButton(frame);
        pushButton_current_Set->setObjectName("pushButton_current_Set");

        gridLayout_2->addWidget(pushButton_current_Set, 4, 9, 1, 1);

        checkBox_MAX5719_A = new QCheckBox(frame);
        checkBox_MAX5719_A->setObjectName("checkBox_MAX5719_A");

        gridLayout_2->addWidget(checkBox_MAX5719_A, 1, 6, 1, 1);

        comboBox_multi_sel = new QComboBox(frame);
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->addItem(QString());
        comboBox_multi_sel->setObjectName("comboBox_multi_sel");
        comboBox_multi_sel->setMinimumSize(QSize(0, 0));
        comboBox_multi_sel->setMaximumSize(QSize(10000, 16777215));

        gridLayout_2->addWidget(comboBox_multi_sel, 6, 2, 1, 1);

        radioButton_current_Neg = new QRadioButton(frame);
        radioButton_current_Neg->setObjectName("radioButton_current_Neg");
        radioButton_current_Neg->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(radioButton_current_Neg, 5, 2, 1, 1);

        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 11, 0, 1, 2);

        pushButton_dial_sw_get = new QPushButton(frame);
        pushButton_dial_sw_get->setObjectName("pushButton_dial_sw_get");

        gridLayout_2->addWidget(pushButton_dial_sw_get, 9, 9, 1, 1);

        checkBox_DAC8571_B = new QCheckBox(frame);
        checkBox_DAC8571_B->setObjectName("checkBox_DAC8571_B");

        gridLayout_2->addWidget(checkBox_DAC8571_B, 0, 8, 1, 1);

        label_CoilCurrentHexCH1 = new QLabel(frame);
        label_CoilCurrentHexCH1->setObjectName("label_CoilCurrentHexCH1");

        gridLayout_2->addWidget(label_CoilCurrentHexCH1, 11, 3, 1, 1);

        lineEdit_CoilCurrentHexCH1 = new QLineEdit(frame);
        lineEdit_CoilCurrentHexCH1->setObjectName("lineEdit_CoilCurrentHexCH1");

        gridLayout_2->addWidget(lineEdit_CoilCurrentHexCH1, 11, 2, 1, 1);

        radioButton_current_Pos = new QRadioButton(frame);
        radioButton_current_Pos->setObjectName("radioButton_current_Pos");
        radioButton_current_Pos->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(radioButton_current_Pos, 4, 2, 1, 1);

        lineEdit_PowerCtrlHexCH1 = new QLineEdit(frame);
        lineEdit_PowerCtrlHexCH1->setObjectName("lineEdit_PowerCtrlHexCH1");

        gridLayout_2->addWidget(lineEdit_PowerCtrlHexCH1, 10, 2, 1, 1);

        pushButton_multi_Set = new QPushButton(frame);
        pushButton_multi_Set->setObjectName("pushButton_multi_Set");
        pushButton_multi_Set->setMinimumSize(QSize(0, 0));
        pushButton_multi_Set->setMaximumSize(QSize(1000, 16777215));

        gridLayout_2->addWidget(pushButton_multi_Set, 6, 9, 1, 1);

        radioButton_current_Close = new QRadioButton(frame);
        radioButton_current_Close->setObjectName("radioButton_current_Close");
        radioButton_current_Close->setMinimumSize(QSize(0, 0));
        radioButton_current_Close->setMaximumSize(QSize(10000, 16777215));

        gridLayout_2->addWidget(radioButton_current_Close, 3, 2, 1, 1);

        label_CoilCurrentHexCH2 = new QLabel(frame);
        label_CoilCurrentHexCH2->setObjectName("label_CoilCurrentHexCH2");

        gridLayout_2->addWidget(label_CoilCurrentHexCH2, 11, 8, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 9, 8, 1, 1);

        checkBox_MAX5719_B = new QCheckBox(frame);
        checkBox_MAX5719_B->setObjectName("checkBox_MAX5719_B");

        gridLayout_2->addWidget(checkBox_MAX5719_B, 1, 8, 1, 1);

        checkBox_current_A = new QCheckBox(frame);
        checkBox_current_A->setObjectName("checkBox_current_A");

        gridLayout_2->addWidget(checkBox_current_A, 4, 6, 1, 1);

        lineEdit_MAX5719 = new QLineEdit(frame);
        lineEdit_MAX5719->setObjectName("lineEdit_MAX5719");
        lineEdit_MAX5719->setMinimumSize(QSize(0, 0));
        lineEdit_MAX5719->setMaximumSize(QSize(1110, 1000));

        gridLayout_2->addWidget(lineEdit_MAX5719, 1, 2, 1, 1);

        label__PowerCtrlHexCH1 = new QLabel(frame);
        label__PowerCtrlHexCH1->setObjectName("label__PowerCtrlHexCH1");

        gridLayout_2->addWidget(label__PowerCtrlHexCH1, 10, 3, 1, 1);

        checkBox_DAC8571_A = new QCheckBox(frame);
        checkBox_DAC8571_A->setObjectName("checkBox_DAC8571_A");

        gridLayout_2->addWidget(checkBox_DAC8571_A, 0, 6, 1, 2);

        lineEdit_PowerCtrlHexCH2 = new QLineEdit(frame);
        lineEdit_PowerCtrlHexCH2->setObjectName("lineEdit_PowerCtrlHexCH2");
        lineEdit_PowerCtrlHexCH2->setMinimumSize(QSize(68, 0));
        lineEdit_PowerCtrlHexCH2->setMaximumSize(QSize(68, 16777215));

        gridLayout_2->addWidget(lineEdit_PowerCtrlHexCH2, 10, 6, 1, 2);

        textEdit_ads8326 = new QTextEdit(tab_4);
        textEdit_ads8326->setObjectName("textEdit_ads8326");
        textEdit_ads8326->setGeometry(QRect(390, 190, 481, 81));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(390, 170, 121, 20));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        frame_2 = new QFrame(tab_5);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 10, 881, 381));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"border-radius:10px;\n"
"border:2px solid rgb(160, 160,160)\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        gridLayoutWidget_2 = new QWidget(frame_2);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(303, 10, 374, 365));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_InputCurrentB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_InputCurrentB->setObjectName("lineEdit_InputCurrentB");
        lineEdit_InputCurrentB->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_InputCurrentB, 7, 2, 1, 1);

        label_InputCurrent = new QLabel(gridLayoutWidget_2);
        label_InputCurrent->setObjectName("label_InputCurrent");

        gridLayout_3->addWidget(label_InputCurrent, 7, 0, 1, 1);

        lineEdit_CoilVolCoefkB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilVolCoefkB->setObjectName("lineEdit_CoilVolCoefkB");
        lineEdit_CoilVolCoefkB->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilVolCoefkB, 13, 2, 1, 1);

        pushButton_InputCurrentGet = new QPushButton(gridLayoutWidget_2);
        pushButton_InputCurrentGet->setObjectName("pushButton_InputCurrentGet");
        pushButton_InputCurrentGet->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(pushButton_InputCurrentGet, 7, 3, 1, 1);

        label_CoilVol = new QLabel(gridLayoutWidget_2);
        label_CoilVol->setObjectName("label_CoilVol");

        gridLayout_3->addWidget(label_CoilVol, 3, 0, 1, 1);

        lineEdit_CoilCurrentSetCoefbA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentSetCoefbA->setObjectName("lineEdit_CoilCurrentSetCoefbA");
        lineEdit_CoilCurrentSetCoefbA->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilCurrentSetCoefbA, 12, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_CoilResistSet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilResistSet->setObjectName("pushButton_CoilResistSet");
        pushButton_CoilResistSet->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(pushButton_CoilResistSet);

        pushButton_CoilResistGet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilResistGet->setObjectName("pushButton_CoilResistGet");
        pushButton_CoilResistGet->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(pushButton_CoilResistGet);


        gridLayout_3->addLayout(horizontalLayout_5, 4, 3, 1, 1);

        lineEdit_CoilCurrentGetCoefbA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentGetCoefbA->setObjectName("lineEdit_CoilCurrentGetCoefbA");
        lineEdit_CoilCurrentGetCoefbA->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilCurrentGetCoefbA, 10, 1, 1, 1);

        pushButton_CoilCurrentGet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilCurrentGet->setObjectName("pushButton_CoilCurrentGet");
        pushButton_CoilCurrentGet->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(pushButton_CoilCurrentGet, 2, 3, 1, 1);

        lineEdit_CoilVolB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilVolB->setObjectName("lineEdit_CoilVolB");
        lineEdit_CoilVolB->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilVolB, 3, 2, 1, 1);

        widget_MyQDoubleSpinBox_OutputCurrentB = new FlexibleQDoubleSpinBox(gridLayoutWidget_2);
        widget_MyQDoubleSpinBox_OutputCurrentB->setObjectName("widget_MyQDoubleSpinBox_OutputCurrentB");
        widget_MyQDoubleSpinBox_OutputCurrentB->setMinimumSize(QSize(85, 0));

        gridLayout_3->addWidget(widget_MyQDoubleSpinBox_OutputCurrentB, 8, 2, 1, 1);

        lineEdit_CoilCurrentSetCoefbB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentSetCoefbB->setObjectName("lineEdit_CoilCurrentSetCoefbB");
        lineEdit_CoilCurrentSetCoefbB->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilCurrentSetCoefbB, 12, 2, 1, 1);

        lineEdit_InputCurrentA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_InputCurrentA->setObjectName("lineEdit_InputCurrentA");
        lineEdit_InputCurrentA->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_InputCurrentA, 7, 1, 1, 1);

        label_CoilCurrent = new QLabel(gridLayoutWidget_2);
        label_CoilCurrent->setObjectName("label_CoilCurrent");

        gridLayout_3->addWidget(label_CoilCurrent, 2, 0, 1, 1);

        label_OutputCurrent = new QLabel(gridLayoutWidget_2);
        label_OutputCurrent->setObjectName("label_OutputCurrent");

        gridLayout_3->addWidget(label_OutputCurrent, 8, 0, 1, 1);

        lineEdit_CoilCurrentGetCoefkB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentGetCoefkB->setObjectName("lineEdit_CoilCurrentGetCoefkB");
        lineEdit_CoilCurrentGetCoefkB->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilCurrentGetCoefkB, 9, 2, 1, 1);

        lineEdit_CoilCurrentSetCoefkB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentSetCoefkB->setObjectName("lineEdit_CoilCurrentSetCoefkB");
        lineEdit_CoilCurrentSetCoefkB->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilCurrentSetCoefkB, 11, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_InputVolSet = new QPushButton(gridLayoutWidget_2);
        pushButton_InputVolSet->setObjectName("pushButton_InputVolSet");
        pushButton_InputVolSet->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_6->addWidget(pushButton_InputVolSet);

        pushButton_InputVolGet = new QPushButton(gridLayoutWidget_2);
        pushButton_InputVolGet->setObjectName("pushButton_InputVolGet");
        pushButton_InputVolGet->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_6->addWidget(pushButton_InputVolGet);


        gridLayout_3->addLayout(horizontalLayout_6, 6, 3, 1, 1);

        lineEdit_CoilCurrentSetCoefkA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentSetCoefkA->setObjectName("lineEdit_CoilCurrentSetCoefkA");
        lineEdit_CoilCurrentSetCoefkA->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilCurrentSetCoefkA, 11, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        pushButton_CoilCurrentSetCoefWrite = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilCurrentSetCoefWrite->setObjectName("pushButton_CoilCurrentSetCoefWrite");
        pushButton_CoilCurrentSetCoefWrite->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_12->addWidget(pushButton_CoilCurrentSetCoefWrite);

        pushButton_CoilCurrentSetCoefRead = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilCurrentSetCoefRead->setObjectName("pushButton_CoilCurrentSetCoefRead");
        pushButton_CoilCurrentSetCoefRead->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_12->addWidget(pushButton_CoilCurrentSetCoefRead);


        gridLayout_3->addLayout(horizontalLayout_12, 11, 3, 1, 1);

        label_CoilVolCoef = new QLabel(gridLayoutWidget_2);
        label_CoilVolCoef->setObjectName("label_CoilVolCoef");

        gridLayout_3->addWidget(label_CoilVolCoef, 13, 0, 1, 1);

        lineEdit_InputVolB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_InputVolB->setObjectName("lineEdit_InputVolB");
        lineEdit_InputVolB->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_InputVolB, 6, 2, 1, 1);

        lineEdit_CoilCurrentA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentA->setObjectName("lineEdit_CoilCurrentA");
        lineEdit_CoilCurrentA->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilCurrentA, 2, 1, 1, 1);

        label_PowerVol = new QLabel(gridLayoutWidget_2);
        label_PowerVol->setObjectName("label_PowerVol");

        gridLayout_3->addWidget(label_PowerVol, 5, 0, 1, 1);

        label_CoilCurrentSetCoef = new QLabel(gridLayoutWidget_2);
        label_CoilCurrentSetCoef->setObjectName("label_CoilCurrentSetCoef");

        gridLayout_3->addWidget(label_CoilCurrentSetCoef, 11, 0, 1, 1);

        pushButton_PowerVolGet = new QPushButton(gridLayoutWidget_2);
        pushButton_PowerVolGet->setObjectName("pushButton_PowerVolGet");
        pushButton_PowerVolGet->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(pushButton_PowerVolGet, 5, 3, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");

        gridLayout_3->addLayout(horizontalLayout_9, 10, 3, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        pushButton_OutputCurrentSet = new QPushButton(gridLayoutWidget_2);
        pushButton_OutputCurrentSet->setObjectName("pushButton_OutputCurrentSet");
        pushButton_OutputCurrentSet->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_10->addWidget(pushButton_OutputCurrentSet);

        pushButton_OutputCurrentGet = new QPushButton(gridLayoutWidget_2);
        pushButton_OutputCurrentGet->setObjectName("pushButton_OutputCurrentGet");
        pushButton_OutputCurrentGet->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_10->addWidget(pushButton_OutputCurrentGet);


        gridLayout_3->addLayout(horizontalLayout_10, 8, 3, 1, 1);

        lineEdit_PowerVolA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_PowerVolA->setObjectName("lineEdit_PowerVolA");
        lineEdit_PowerVolA->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_PowerVolA, 5, 1, 1, 1);

        lineEdit_InputVolA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_InputVolA->setObjectName("lineEdit_InputVolA");
        lineEdit_InputVolA->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_InputVolA, 6, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton_CoilCurrentGetCoefWrite = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilCurrentGetCoefWrite->setObjectName("pushButton_CoilCurrentGetCoefWrite");
        pushButton_CoilCurrentGetCoefWrite->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_8->addWidget(pushButton_CoilCurrentGetCoefWrite);

        pushButton_CoilCurrentGetCoefRead = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilCurrentGetCoefRead->setObjectName("pushButton_CoilCurrentGetCoefRead");
        pushButton_CoilCurrentGetCoefRead->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_8->addWidget(pushButton_CoilCurrentGetCoefRead);


        gridLayout_3->addLayout(horizontalLayout_8, 9, 3, 1, 1);

        label_InputVol = new QLabel(gridLayoutWidget_2);
        label_InputVol->setObjectName("label_InputVol");

        gridLayout_3->addWidget(label_InputVol, 6, 0, 1, 1);

        lineEdit_CoilVolA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilVolA->setObjectName("lineEdit_CoilVolA");
        lineEdit_CoilVolA->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilVolA, 3, 1, 1, 1);

        label_CoilCurrentGetCoef = new QLabel(gridLayoutWidget_2);
        label_CoilCurrentGetCoef->setObjectName("label_CoilCurrentGetCoef");

        gridLayout_3->addWidget(label_CoilCurrentGetCoef, 9, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_CoilVolCoefSet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilVolCoefSet->setObjectName("pushButton_CoilVolCoefSet");
        pushButton_CoilVolCoefSet->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_7->addWidget(pushButton_CoilVolCoefSet);

        pushButton_CoilVolCoefGet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilVolCoefGet->setObjectName("pushButton_CoilVolCoefGet");
        pushButton_CoilVolCoefGet->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_7->addWidget(pushButton_CoilVolCoefGet);


        gridLayout_3->addLayout(horizontalLayout_7, 13, 3, 1, 1);

        widget_MyQDoubleSpinBox_OutputCurrentA = new FlexibleQDoubleSpinBox(gridLayoutWidget_2);
        widget_MyQDoubleSpinBox_OutputCurrentA->setObjectName("widget_MyQDoubleSpinBox_OutputCurrentA");
        widget_MyQDoubleSpinBox_OutputCurrentA->setMinimumSize(QSize(85, 0));

        gridLayout_3->addWidget(widget_MyQDoubleSpinBox_OutputCurrentA, 8, 1, 1, 1);

        lineEdit_PowerVolB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_PowerVolB->setObjectName("lineEdit_PowerVolB");
        lineEdit_PowerVolB->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_PowerVolB, 5, 2, 1, 1);

        lineEdit_CoilResistB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilResistB->setObjectName("lineEdit_CoilResistB");
        lineEdit_CoilResistB->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilResistB, 4, 2, 1, 1);

        lineEdit_CoilCurrentGetCoefkA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentGetCoefkA->setObjectName("lineEdit_CoilCurrentGetCoefkA");
        lineEdit_CoilCurrentGetCoefkA->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilCurrentGetCoefkA, 9, 1, 1, 1);

        pushButton_CoilVolGet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilVolGet->setObjectName("pushButton_CoilVolGet");
        pushButton_CoilVolGet->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(pushButton_CoilVolGet, 3, 3, 1, 1);

        lineEdit_CoilResistA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilResistA->setObjectName("lineEdit_CoilResistA");
        lineEdit_CoilResistA->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilResistA, 4, 1, 1, 1);

        lineEdit_CoilCurrentB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentB->setObjectName("lineEdit_CoilCurrentB");
        lineEdit_CoilCurrentB->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilCurrentB, 2, 2, 1, 1);

        lineEdit_CoilVolCoefkA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilVolCoefkA->setObjectName("lineEdit_CoilVolCoefkA");
        lineEdit_CoilVolCoefkA->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilVolCoefkA, 13, 1, 1, 1);

        lineEdit_CoilCurrentGetCoefbB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentGetCoefbB->setObjectName("lineEdit_CoilCurrentGetCoefbB");
        lineEdit_CoilCurrentGetCoefbB->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilCurrentGetCoefbB, 10, 2, 1, 1);

        label_CoilResist = new QLabel(gridLayoutWidget_2);
        label_CoilResist->setObjectName("label_CoilResist");

        gridLayout_3->addWidget(label_CoilResist, 4, 0, 1, 1);

        lineEdit_CoilVolCoefbA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilVolCoefbA->setObjectName("lineEdit_CoilVolCoefbA");
        lineEdit_CoilVolCoefbA->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilVolCoefbA, 14, 1, 1, 1);

        lineEdit_CoilVolCoefbB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilVolCoefbB->setObjectName("lineEdit_CoilVolCoefbB");
        lineEdit_CoilVolCoefbB->setMaximumSize(QSize(85, 16777215));

        gridLayout_3->addWidget(lineEdit_CoilVolCoefbB, 14, 2, 1, 1);

        gridLayoutWidget_3 = new QWidget(frame_2);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(20, 10, 249, 324));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_ParaReadGet = new QPushButton(gridLayoutWidget_3);
        pushButton_ParaReadGet->setObjectName("pushButton_ParaReadGet");

        gridLayout_4->addWidget(pushButton_ParaReadGet, 5, 2, 1, 1);

        pushButton_SelfCheck = new QPushButton(gridLayoutWidget_3);
        pushButton_SelfCheck->setObjectName("pushButton_SelfCheck");

        gridLayout_4->addWidget(pushButton_SelfCheck, 8, 2, 1, 1);

        lineEdit_BoardErrCode = new QLineEdit(gridLayoutWidget_3);
        lineEdit_BoardErrCode->setObjectName("lineEdit_BoardErrCode");

        gridLayout_4->addWidget(lineEdit_BoardErrCode, 7, 2, 1, 1);

        lineEdit_BoardTemp = new QLineEdit(gridLayoutWidget_3);
        lineEdit_BoardTemp->setObjectName("lineEdit_BoardTemp");
        lineEdit_BoardTemp->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(lineEdit_BoardTemp, 1, 1, 1, 1);

        label_ParaRestore = new QLabel(gridLayoutWidget_3);
        label_ParaRestore->setObjectName("label_ParaRestore");

        gridLayout_4->addWidget(label_ParaRestore, 6, 0, 1, 1);

        label_Reboot = new QLabel(gridLayoutWidget_3);
        label_Reboot->setObjectName("label_Reboot");

        gridLayout_4->addWidget(label_Reboot, 3, 0, 1, 1);

        lineEdit_SelfCheck = new QLineEdit(gridLayoutWidget_3);
        lineEdit_SelfCheck->setObjectName("lineEdit_SelfCheck");

        gridLayout_4->addWidget(lineEdit_SelfCheck, 8, 1, 1, 1);

        label_BoardStatus = new QLabel(gridLayoutWidget_3);
        label_BoardStatus->setObjectName("label_BoardStatus");

        gridLayout_4->addWidget(label_BoardStatus, 7, 0, 1, 1);

        pushButton_BoardTempGet = new QPushButton(gridLayoutWidget_3);
        pushButton_BoardTempGet->setObjectName("pushButton_BoardTempGet");

        gridLayout_4->addWidget(pushButton_BoardTempGet, 1, 2, 1, 1);

        widget_MyQDoubleSpinBox_ConstCurrent = new FlexibleQDoubleSpinBox(gridLayoutWidget_3);
        widget_MyQDoubleSpinBox_ConstCurrent->setObjectName("widget_MyQDoubleSpinBox_ConstCurrent");
        widget_MyQDoubleSpinBox_ConstCurrent->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(widget_MyQDoubleSpinBox_ConstCurrent, 0, 1, 1, 1);

        pushButton_BoardID_Get = new QPushButton(gridLayoutWidget_3);
        pushButton_BoardID_Get->setObjectName("pushButton_BoardID_Get");

        gridLayout_4->addWidget(pushButton_BoardID_Get, 2, 2, 1, 1);

        label_ExcitateCurrent = new QLabel(gridLayoutWidget_3);
        label_ExcitateCurrent->setObjectName("label_ExcitateCurrent");

        gridLayout_4->addWidget(label_ExcitateCurrent, 0, 0, 1, 1);

        label_SelfCheck = new QLabel(gridLayoutWidget_3);
        label_SelfCheck->setObjectName("label_SelfCheck");

        gridLayout_4->addWidget(label_SelfCheck, 8, 0, 1, 1);

        label_ParaRead = new QLabel(gridLayoutWidget_3);
        label_ParaRead->setObjectName("label_ParaRead");

        gridLayout_4->addWidget(label_ParaRead, 5, 0, 1, 1);

        label_RefreshInterval = new QLabel(gridLayoutWidget_3);
        label_RefreshInterval->setObjectName("label_RefreshInterval");

        gridLayout_4->addWidget(label_RefreshInterval, 11, 0, 1, 1);

        lineEdit_BoardID = new QLineEdit(gridLayoutWidget_3);
        lineEdit_BoardID->setObjectName("lineEdit_BoardID");

        gridLayout_4->addWidget(lineEdit_BoardID, 2, 1, 1, 1);

        pushButton_ParaRestoreSet = new QPushButton(gridLayoutWidget_3);
        pushButton_ParaRestoreSet->setObjectName("pushButton_ParaRestoreSet");

        gridLayout_4->addWidget(pushButton_ParaRestoreSet, 6, 2, 1, 1);

        checkBox_RefreshInterval = new QCheckBox(gridLayoutWidget_3);
        checkBox_RefreshInterval->setObjectName("checkBox_RefreshInterval");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBox_RefreshInterval->sizePolicy().hasHeightForWidth());
        checkBox_RefreshInterval->setSizePolicy(sizePolicy);
        checkBox_RefreshInterval->setAutoFillBackground(false);

        gridLayout_4->addWidget(checkBox_RefreshInterval, 11, 2, 1, 1);

        lineEdit_BoardState = new QLineEdit(gridLayoutWidget_3);
        lineEdit_BoardState->setObjectName("lineEdit_BoardState");

        gridLayout_4->addWidget(lineEdit_BoardState, 7, 1, 1, 1);

        label_BoardTemp = new QLabel(gridLayoutWidget_3);
        label_BoardTemp->setObjectName("label_BoardTemp");

        gridLayout_4->addWidget(label_BoardTemp, 1, 0, 1, 1);

        checkBox_CalibrateModeEn = new QCheckBox(gridLayoutWidget_3);
        checkBox_CalibrateModeEn->setObjectName("checkBox_CalibrateModeEn");
        sizePolicy.setHeightForWidth(checkBox_CalibrateModeEn->sizePolicy().hasHeightForWidth());
        checkBox_CalibrateModeEn->setSizePolicy(sizePolicy);
        checkBox_CalibrateModeEn->setAutoFillBackground(false);

        gridLayout_4->addWidget(checkBox_CalibrateModeEn, 10, 2, 1, 1);

        pushButton_RebootSet = new QPushButton(gridLayoutWidget_3);
        pushButton_RebootSet->setObjectName("pushButton_RebootSet");

        gridLayout_4->addWidget(pushButton_RebootSet, 3, 2, 1, 1);

        label_CailibrateMode = new QLabel(gridLayoutWidget_3);
        label_CailibrateMode->setObjectName("label_CailibrateMode");

        gridLayout_4->addWidget(label_CailibrateMode, 10, 0, 1, 1);

        label_ParaSave = new QLabel(gridLayoutWidget_3);
        label_ParaSave->setObjectName("label_ParaSave");

        gridLayout_4->addWidget(label_ParaSave, 4, 0, 1, 1);

        pushButton_ParaSaveSet = new QPushButton(gridLayoutWidget_3);
        pushButton_ParaSaveSet->setObjectName("pushButton_ParaSaveSet");

        gridLayout_4->addWidget(pushButton_ParaSaveSet, 4, 2, 1, 1);

        label_BoardID = new QLabel(gridLayoutWidget_3);
        label_BoardID->setObjectName("label_BoardID");

        gridLayout_4->addWidget(label_BoardID, 2, 0, 1, 1);

        lineEdit_RefreshInterval = new QLineEdit(gridLayoutWidget_3);
        lineEdit_RefreshInterval->setObjectName("lineEdit_RefreshInterval");

        gridLayout_4->addWidget(lineEdit_RefreshInterval, 11, 1, 1, 1);

        pushButton_ExcitateCurrentSet = new QPushButton(gridLayoutWidget_3);
        pushButton_ExcitateCurrentSet->setObjectName("pushButton_ExcitateCurrentSet");

        gridLayout_4->addWidget(pushButton_ExcitateCurrentSet, 0, 2, 1, 1);

        label_ErrorClear = new QLabel(gridLayoutWidget_3);
        label_ErrorClear->setObjectName("label_ErrorClear");

        gridLayout_4->addWidget(label_ErrorClear, 9, 0, 1, 1);

        pushButton_ErrorClear = new QPushButton(gridLayoutWidget_3);
        pushButton_ErrorClear->setObjectName("pushButton_ErrorClear");

        gridLayout_4->addWidget(pushButton_ErrorClear, 9, 2, 1, 1);

        line = new QFrame(frame_2);
        line->setObjectName("line");
        line->setGeometry(QRect(280, 0, 20, 381));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(frame_2);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(670, 0, 16, 381));
        line_2->setMaximumSize(QSize(100, 16777215));
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_DeviceInfo = new QPushButton(frame_2);
        pushButton_DeviceInfo->setObjectName("pushButton_DeviceInfo");
        pushButton_DeviceInfo->setGeometry(QRect(710, 10, 75, 23));
        pushButton_FirmVersion = new QPushButton(frame_2);
        pushButton_FirmVersion->setObjectName("pushButton_FirmVersion");
        pushButton_FirmVersion->setGeometry(QRect(790, 10, 75, 23));
        verticalSlider_ConstCurrent = new QSlider(frame_2);
        verticalSlider_ConstCurrent->setObjectName("verticalSlider_ConstCurrent");
        verticalSlider_ConstCurrent->setGeometry(QRect(710, 40, 22, 291));
        verticalSlider_ConstCurrent->setOrientation(Qt::Orientation::Vertical);
        verticalSlider_OutputCurrentA = new QSlider(frame_2);
        verticalSlider_OutputCurrentA->setObjectName("verticalSlider_OutputCurrentA");
        verticalSlider_OutputCurrentA->setGeometry(QRect(770, 40, 22, 291));
        verticalSlider_OutputCurrentA->setOrientation(Qt::Orientation::Vertical);
        verticalSlider_OutputCurrentB = new QSlider(frame_2);
        verticalSlider_OutputCurrentB->setObjectName("verticalSlider_OutputCurrentB");
        verticalSlider_OutputCurrentB->setGeometry(QRect(830, 40, 22, 291));
        verticalSlider_OutputCurrentB->setOrientation(Qt::Orientation::Vertical);
        label_ExcitateCurrent_QSlider = new QLabel(frame_2);
        label_ExcitateCurrent_QSlider->setObjectName("label_ExcitateCurrent_QSlider");
        label_ExcitateCurrent_QSlider->setGeometry(QRect(690, 330, 51, 21));
        label_OutputCurrent_QSlider_B = new QLabel(frame_2);
        label_OutputCurrent_QSlider_B->setObjectName("label_OutputCurrent_QSlider_B");
        label_OutputCurrent_QSlider_B->setGeometry(QRect(820, 330, 61, 21));
        label_OutputCurrent_QSlider_A = new QLabel(frame_2);
        label_OutputCurrent_QSlider_A->setObjectName("label_OutputCurrent_QSlider_A");
        label_OutputCurrent_QSlider_A->setGeometry(QRect(750, 330, 61, 20));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        frame_3 = new QFrame(tab_6);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 10, 901, 281));
        frame_3->setStyleSheet(QString::fromUtf8("#frame_3{\n"
"border-radius:10px;\n"
"border:2px solid rgb(160, 160,160)\n"
"}"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        gridLayoutWidget_4 = new QWidget(frame_3);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(10, 70, 887, 31));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        checkBox_WobCHB = new QCheckBox(gridLayoutWidget_4);
        checkBox_WobCHB->setObjectName("checkBox_WobCHB");

        gridLayout_5->addWidget(checkBox_WobCHB, 0, 8, 1, 1);

        pushButtonWobClose = new QPushButton(gridLayoutWidget_4);
        pushButtonWobClose->setObjectName("pushButtonWobClose");
        pushButtonWobClose->setMaximumSize(QSize(50, 16777215));

        gridLayout_5->addWidget(pushButtonWobClose, 0, 10, 1, 1);

        label_WobAmp = new QLabel(gridLayoutWidget_4);
        label_WobAmp->setObjectName("label_WobAmp");

        gridLayout_5->addWidget(label_WobAmp, 0, 2, 1, 1);

        lineEdit_WobPeriod = new QLineEdit(gridLayoutWidget_4);
        lineEdit_WobPeriod->setObjectName("lineEdit_WobPeriod");

        gridLayout_5->addWidget(lineEdit_WobPeriod, 0, 1, 1, 1);

        checkBox_WobCHA = new QCheckBox(gridLayoutWidget_4);
        checkBox_WobCHA->setObjectName("checkBox_WobCHA");

        gridLayout_5->addWidget(checkBox_WobCHA, 0, 7, 1, 1);

        lineEdit_WobAmp = new QLineEdit(gridLayoutWidget_4);
        lineEdit_WobAmp->setObjectName("lineEdit_WobAmp");

        gridLayout_5->addWidget(lineEdit_WobAmp, 0, 3, 1, 1);

        pushButton_WobStart = new QPushButton(gridLayoutWidget_4);
        pushButton_WobStart->setObjectName("pushButton_WobStart");
        pushButton_WobStart->setMaximumSize(QSize(50, 16777215));

        gridLayout_5->addWidget(pushButton_WobStart, 0, 9, 1, 1);

        lineEdit_WobOffset = new QLineEdit(gridLayoutWidget_4);
        lineEdit_WobOffset->setObjectName("lineEdit_WobOffset");

        gridLayout_5->addWidget(lineEdit_WobOffset, 0, 5, 1, 1);

        label_NULL = new QLabel(gridLayoutWidget_4);
        label_NULL->setObjectName("label_NULL");
        label_NULL->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_NULL->sizePolicy().hasHeightForWidth());
        label_NULL->setSizePolicy(sizePolicy1);
        label_NULL->setMinimumSize(QSize(335, 0));

        gridLayout_5->addWidget(label_NULL, 0, 6, 1, 1);

        label_WobPeriod = new QLabel(gridLayoutWidget_4);
        label_WobPeriod->setObjectName("label_WobPeriod");

        gridLayout_5->addWidget(label_WobPeriod, 0, 0, 1, 1);

        label_WobOffset = new QLabel(gridLayoutWidget_4);
        label_WobOffset->setObjectName("label_WobOffset");

        gridLayout_5->addWidget(label_WobOffset, 0, 4, 1, 1);

        gridLayoutWidget_5 = new QWidget(frame_3);
        gridLayoutWidget_5->setObjectName("gridLayoutWidget_5");
        gridLayoutWidget_5->setGeometry(QRect(10, 210, 881, 31));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_DegaussPeriodDots = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DegaussPeriodDots->setObjectName("lineEdit_DegaussPeriodDots");
        lineEdit_DegaussPeriodDots->setMaximumSize(QSize(60, 16777215));

        gridLayout_6->addWidget(lineEdit_DegaussPeriodDots, 0, 9, 1, 1);

        lineEdit_DegaussAmp = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DegaussAmp->setObjectName("lineEdit_DegaussAmp");

        gridLayout_6->addWidget(lineEdit_DegaussAmp, 0, 3, 1, 1);

        label_DegaussCutoff = new QLabel(gridLayoutWidget_5);
        label_DegaussCutoff->setObjectName("label_DegaussCutoff");

        gridLayout_6->addWidget(label_DegaussCutoff, 0, 6, 1, 1);

        lineEdit_DegaussTotalDots = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DegaussTotalDots->setObjectName("lineEdit_DegaussTotalDots");
        lineEdit_DegaussTotalDots->setMaximumSize(QSize(60, 16777215));

        gridLayout_6->addWidget(lineEdit_DegaussTotalDots, 0, 11, 1, 1);

        label_DegaussTotalDots = new QLabel(gridLayoutWidget_5);
        label_DegaussTotalDots->setObjectName("label_DegaussTotalDots");

        gridLayout_6->addWidget(label_DegaussTotalDots, 0, 10, 1, 1);

        checkBox_DegaussCHB = new QCheckBox(gridLayoutWidget_5);
        checkBox_DegaussCHB->setObjectName("checkBox_DegaussCHB");

        gridLayout_6->addWidget(checkBox_DegaussCHB, 0, 13, 1, 1);

        checkBox_DegaussCHA = new QCheckBox(gridLayoutWidget_5);
        checkBox_DegaussCHA->setObjectName("checkBox_DegaussCHA");

        gridLayout_6->addWidget(checkBox_DegaussCHA, 0, 12, 1, 1);

        lineEdit_DegaussAtten = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DegaussAtten->setObjectName("lineEdit_DegaussAtten");

        gridLayout_6->addWidget(lineEdit_DegaussAtten, 0, 5, 1, 1);

        lineEdit_DegaussPeriod = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DegaussPeriod->setObjectName("lineEdit_DegaussPeriod");

        gridLayout_6->addWidget(lineEdit_DegaussPeriod, 0, 1, 1, 1);

        label_DegaussAtten = new QLabel(gridLayoutWidget_5);
        label_DegaussAtten->setObjectName("label_DegaussAtten");

        gridLayout_6->addWidget(label_DegaussAtten, 0, 4, 1, 1);

        pushButton_DegaussStart = new QPushButton(gridLayoutWidget_5);
        pushButton_DegaussStart->setObjectName("pushButton_DegaussStart");
        pushButton_DegaussStart->setMaximumSize(QSize(50, 16777215));

        gridLayout_6->addWidget(pushButton_DegaussStart, 0, 14, 1, 1);

        label_DegaussPeriod = new QLabel(gridLayoutWidget_5);
        label_DegaussPeriod->setObjectName("label_DegaussPeriod");

        gridLayout_6->addWidget(label_DegaussPeriod, 0, 0, 1, 1);

        label_DegaussAmp = new QLabel(gridLayoutWidget_5);
        label_DegaussAmp->setObjectName("label_DegaussAmp");

        gridLayout_6->addWidget(label_DegaussAmp, 0, 2, 1, 1);

        lineEdit_DegaussCutoff = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DegaussCutoff->setObjectName("lineEdit_DegaussCutoff");

        gridLayout_6->addWidget(lineEdit_DegaussCutoff, 0, 7, 1, 1);

        label_DegaussPeriodDots = new QLabel(gridLayoutWidget_5);
        label_DegaussPeriodDots->setObjectName("label_DegaussPeriodDots");

        gridLayout_6->addWidget(label_DegaussPeriodDots, 0, 8, 1, 1);

        pushButton_DegaussAbort = new QPushButton(gridLayoutWidget_5);
        pushButton_DegaussAbort->setObjectName("pushButton_DegaussAbort");
        pushButton_DegaussAbort->setMaximumSize(QSize(50, 16777215));

        gridLayout_6->addWidget(pushButton_DegaussAbort, 0, 15, 1, 1);

        line_3 = new QFrame(frame_3);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(0, 130, 901, 20));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        label_12 = new QLabel(frame_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 166, 51, 20));
        label_13 = new QLabel(frame_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 20, 61, 21));
        tabWidget->addTab(tab_6, QString());
        label_FirmVersion = new QLabel(centralwidget);
        label_FirmVersion->setObjectName("label_FirmVersion");
        label_FirmVersion->setGeometry(QRect(910, 40, 131, 21));
        label_FirmVersion->setStyleSheet(QString::fromUtf8(""));
        label_DeviceInfo = new QLabel(centralwidget);
        label_DeviceInfo->setObjectName("label_DeviceInfo");
        label_DeviceInfo->setGeometry(QRect(540, 80, 371, 21));
        label_DeviceInfo->setStyleSheet(QString::fromUtf8(""));
        label_BoardCommunicateID = new QLabel(centralwidget);
        label_BoardCommunicateID->setObjectName("label_BoardCommunicateID");
        label_BoardCommunicateID->setGeometry(QRect(920, 70, 40, 23));
        lineEdit_BoardCommunicateID = new QLineEdit(centralwidget);
        lineEdit_BoardCommunicateID->setObjectName("lineEdit_BoardCommunicateID");
        lineEdit_BoardCommunicateID->setGeometry(QRect(970, 70, 41, 21));
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(130, 80, 403, 28));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_AddCmd = new QPushButton(layoutWidget3);
        pushButton_AddCmd->setObjectName("pushButton_AddCmd");

        horizontalLayout_2->addWidget(pushButton_AddCmd);

        pushButton_DelCmd = new QPushButton(layoutWidget3);
        pushButton_DelCmd->setObjectName("pushButton_DelCmd");

        horizontalLayout_2->addWidget(pushButton_DelCmd);

        pushButton_AddMod = new QPushButton(layoutWidget3);
        pushButton_AddMod->setObjectName("pushButton_AddMod");

        horizontalLayout_2->addWidget(pushButton_AddMod);

        pushButton_DelMod = new QPushButton(layoutWidget3);
        pushButton_DelMod->setObjectName("pushButton_DelMod");

        horizontalLayout_2->addWidget(pushButton_DelMod);

        pushButton_Save = new QPushButton(layoutWidget3);
        pushButton_Save->setObjectName("pushButton_Save");

        horizontalLayout_2->addWidget(pushButton_Save);


        horizontalLayout_11->addLayout(horizontalLayout_2);

        lineEdit_ExcitateCurrent = new QLineEdit(centralwidget);
        lineEdit_ExcitateCurrent->setObjectName("lineEdit_ExcitateCurrent");
        lineEdit_ExcitateCurrent->setGeometry(QRect(390, 530, 87, 21));
        lineEdit_OutputCurrentA = new QLineEdit(centralwidget);
        lineEdit_OutputCurrentA->setObjectName("lineEdit_OutputCurrentA");
        lineEdit_OutputCurrentA->setGeometry(QRect(480, 530, 62, 21));
        lineEdit_OutputCurrentB = new QLineEdit(centralwidget);
        lineEdit_OutputCurrentB->setObjectName("lineEdit_OutputCurrentB");
        lineEdit_OutputCurrentB->setGeometry(QRect(550, 530, 63, 21));
        label_SystemTime = new QLabel(centralwidget);
        label_SystemTime->setObjectName("label_SystemTime");
        label_SystemTime->setGeometry(QRect(890, 0, 121, 16));
        checkBox_BoardEnable = new QCheckBox(centralwidget);
        checkBox_BoardEnable->setObjectName("checkBox_BoardEnable");
        checkBox_BoardEnable->setGeometry(QRect(680, 25, 81, 41));
        MainWindow->setCentralWidget(centralwidget);
        tabWidget->raise();
        Communication->raise();
        textEdit_RealTimeCommunicateData->raise();
        listWidget_Device->raise();
        pushButton_LockRealTimeWindows->raise();
        layoutWidget->raise();
        pushButton_CleanRealTimeWindows->raise();
        label_8->raise();
        label_Version->raise();
        label_FirmVersion->raise();
        label_DeviceInfo->raise();
        lineEdit_BoardCommunicateID->raise();
        label_BoardCommunicateID->raise();
        lineEdit_ExcitateCurrent->raise();
        lineEdit_OutputCurrentA->raise();
        lineEdit_OutputCurrentB->raise();
        label_SystemTime->raise();
        checkBox_BoardEnable->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1052, 22));
        menuDemo = new QMenu(menubar);
        menuDemo->setObjectName("menuDemo");
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuDemo->menuAction());
        menuDemo->addAction(actionImportJson);
        menuDemo->addSeparator();
        menuDemo->addAction(actionImportProtocol);
        toolBar->addAction(actioninfo);
        toolBar->addAction(action_2);

        retranslateUi(MainWindow);

        Communication->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionImportJson->setText(QCoreApplication::translate("MainWindow", "ImportJson", nullptr));
        actionImportProtocol->setText(QCoreApplication::translate("MainWindow", "ImportProtocol", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245", nullptr));
        actioninfo->setText(QCoreApplication::translate("MainWindow", "info", nullptr));
        pushButton_SerialConnect->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        Communication->setTabText(Communication->indexOf(tab), QCoreApplication::translate("MainWindow", "Serial", nullptr));
        pushButton_NetConnect->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        Communication->setTabText(Communication->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Net", nullptr));
        pushButton_CanConnect->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        Communication->setTabText(Communication->indexOf(tab_3), QCoreApplication::translate("MainWindow", "CAN", nullptr));
        pushButton_LockRealTimeWindows->setText(QCoreApplication::translate("MainWindow", "Lock", nullptr));
        pushButton_CleanRealTimeWindows->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\216\237\345\247\213\351\200\232\350\256\257\346\225\260\346\215\256\357\274\232", nullptr));
        label_Version->setText(QCoreApplication::translate("MainWindow", "Software:", nullptr));
        checkBox_current_B->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\344\276\233\347\224\265\346\216\247\345\210\266 0x\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\347\224\265\346\265\201\346\226\271\345\220\221\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "MAX5719  \357\274\232", nullptr));
        pushButton_CoilCurrentHexSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label__PowerCtrlHexCH2->setText(QCoreApplication::translate("MainWindow", "CH2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\213\250\347\240\201\345\274\200\345\205\263\357\274\232", nullptr));
        pushButton_DAC8571_Set->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_MAX5719_Set->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton__PowerCtrlHexSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\244\232\350\267\257\351\200\211\346\213\251\345\231\250 \357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "sw0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "DAC8571   \357\274\232", nullptr));
        pushButton_current_Set->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        checkBox_MAX5719_A->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        comboBox_multi_sel->setItemText(0, QCoreApplication::translate("MainWindow", "ch0", nullptr));
        comboBox_multi_sel->setItemText(1, QCoreApplication::translate("MainWindow", "ch1", nullptr));
        comboBox_multi_sel->setItemText(2, QCoreApplication::translate("MainWindow", "ch2", nullptr));
        comboBox_multi_sel->setItemText(3, QCoreApplication::translate("MainWindow", "ch3", nullptr));
        comboBox_multi_sel->setItemText(4, QCoreApplication::translate("MainWindow", "ch4", nullptr));
        comboBox_multi_sel->setItemText(5, QCoreApplication::translate("MainWindow", "ch5", nullptr));
        comboBox_multi_sel->setItemText(6, QCoreApplication::translate("MainWindow", "ch6", nullptr));
        comboBox_multi_sel->setItemText(7, QCoreApplication::translate("MainWindow", "ch7", nullptr));
        comboBox_multi_sel->setItemText(8, QCoreApplication::translate("MainWindow", "ch8", nullptr));
        comboBox_multi_sel->setItemText(9, QCoreApplication::translate("MainWindow", "ch9", nullptr));
        comboBox_multi_sel->setItemText(10, QCoreApplication::translate("MainWindow", "ch10", nullptr));
        comboBox_multi_sel->setItemText(11, QCoreApplication::translate("MainWindow", "ch11", nullptr));
        comboBox_multi_sel->setItemText(12, QCoreApplication::translate("MainWindow", "ch12", nullptr));
        comboBox_multi_sel->setItemText(13, QCoreApplication::translate("MainWindow", "ch13", nullptr));
        comboBox_multi_sel->setItemText(14, QCoreApplication::translate("MainWindow", "ch14", nullptr));
        comboBox_multi_sel->setItemText(15, QCoreApplication::translate("MainWindow", "ch15", nullptr));
        comboBox_multi_sel->setItemText(16, QCoreApplication::translate("MainWindow", "ch_all", nullptr));

        radioButton_current_Neg->setText(QCoreApplication::translate("MainWindow", "Neg", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\347\272\277\345\234\210\347\224\265\346\265\201 0x\357\274\232", nullptr));
        pushButton_dial_sw_get->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        checkBox_DAC8571_B->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_CoilCurrentHexCH1->setText(QCoreApplication::translate("MainWindow", "CH1", nullptr));
        radioButton_current_Pos->setText(QCoreApplication::translate("MainWindow", "Pos", nullptr));
        pushButton_multi_Set->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        radioButton_current_Close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        label_CoilCurrentHexCH2->setText(QCoreApplication::translate("MainWindow", "CH2", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "sw1", nullptr));
        checkBox_MAX5719_B->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        checkBox_current_A->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label__PowerCtrlHexCH1->setText(QCoreApplication::translate("MainWindow", "CH1", nullptr));
        checkBox_DAC8571_A->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\345\244\232\350\267\257\351\200\211\346\213\251\345\231\250\346\216\245\345\205\245\347\224\265\345\216\213\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\347\241\254\344\273\266\350\260\203\350\257\225", nullptr));
        label_InputCurrent->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\347\224\265\346\265\201\357\274\232", nullptr));
        lineEdit_CoilVolCoefkB->setPlaceholderText(QCoreApplication::translate("MainWindow", "CHB coef_k", nullptr));
        pushButton_InputCurrentGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        label_CoilVol->setText(QCoreApplication::translate("MainWindow", "\347\272\277\345\234\210\347\224\265\345\216\213\357\274\232", nullptr));
        lineEdit_CoilCurrentSetCoefbA->setPlaceholderText(QCoreApplication::translate("MainWindow", "CHA coef_b", nullptr));
        pushButton_CoilResistSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_CoilResistGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        lineEdit_CoilCurrentGetCoefbA->setPlaceholderText(QCoreApplication::translate("MainWindow", "CHA coef_b", nullptr));
        pushButton_CoilCurrentGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        lineEdit_CoilCurrentSetCoefbB->setPlaceholderText(QCoreApplication::translate("MainWindow", "CHB coef_b", nullptr));
        label_CoilCurrent->setText(QCoreApplication::translate("MainWindow", "\347\272\277\345\234\210\347\224\265\346\265\201\357\274\232", nullptr));
        label_OutputCurrent->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\207\272\347\224\265\346\265\201\357\274\232", nullptr));
        lineEdit_CoilCurrentGetCoefkB->setPlaceholderText(QCoreApplication::translate("MainWindow", "CHB coef_k", nullptr));
        lineEdit_CoilCurrentSetCoefkB->setPlaceholderText(QCoreApplication::translate("MainWindow", "CHB coef_k", nullptr));
        pushButton_InputVolSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_InputVolGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        lineEdit_CoilCurrentSetCoefkA->setPlaceholderText(QCoreApplication::translate("MainWindow", "CHA coef_k", nullptr));
        pushButton_CoilCurrentSetCoefWrite->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_CoilCurrentSetCoefRead->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        label_CoilVolCoef->setText(QCoreApplication::translate("MainWindow", "\347\224\265\345\216\213\350\257\273\345\217\226\347\263\273\346\225\260\357\274\232", nullptr));
        label_PowerVol->setText(QCoreApplication::translate("MainWindow", "\344\276\233\347\224\265\347\224\265\345\216\213\357\274\232", nullptr));
        label_CoilCurrentSetCoef->setText(QCoreApplication::translate("MainWindow", "\347\224\265\346\265\201\350\256\276\345\256\232\347\263\273\346\225\260\357\274\232", nullptr));
        pushButton_PowerVolGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_OutputCurrentSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_OutputCurrentGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_CoilCurrentGetCoefWrite->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_CoilCurrentGetCoefRead->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        label_InputVol->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\347\224\265\345\216\213\357\274\232", nullptr));
        label_CoilCurrentGetCoef->setText(QCoreApplication::translate("MainWindow", "\347\224\265\346\265\201\350\257\273\345\217\226\347\263\273\346\225\260\357\274\232", nullptr));
        pushButton_CoilVolCoefSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_CoilVolCoefGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        lineEdit_CoilCurrentGetCoefkA->setPlaceholderText(QCoreApplication::translate("MainWindow", "CHA coef_k", nullptr));
        pushButton_CoilVolGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        lineEdit_CoilVolCoefkA->setPlaceholderText(QCoreApplication::translate("MainWindow", "CHA coef_k", nullptr));
        lineEdit_CoilCurrentGetCoefbB->setPlaceholderText(QCoreApplication::translate("MainWindow", "CHB coef_b", nullptr));
        label_CoilResist->setText(QCoreApplication::translate("MainWindow", "\347\272\277\345\234\210\347\224\265\351\230\273\357\274\232", nullptr));
        lineEdit_CoilVolCoefbA->setPlaceholderText(QCoreApplication::translate("MainWindow", "CHA coef_b", nullptr));
        lineEdit_CoilVolCoefbB->setPlaceholderText(QCoreApplication::translate("MainWindow", "CHB coef_b", nullptr));
        pushButton_ParaReadGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_SelfCheck->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_ParaRestore->setText(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\346\201\242\345\244\215\357\274\232", nullptr));
        label_Reboot->setText(QCoreApplication::translate("MainWindow", "\346\235\277\345\215\241\351\207\215\345\220\257\357\274\232", nullptr));
        label_BoardStatus->setText(QCoreApplication::translate("MainWindow", "\346\235\277\345\215\241\347\212\266\346\200\201\357\274\232", nullptr));
        pushButton_BoardTempGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_BoardID_Get->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        label_ExcitateCurrent->setText(QCoreApplication::translate("MainWindow", "\346\277\200\345\212\261\347\224\265\346\265\201\357\274\232", nullptr));
        label_SelfCheck->setText(QCoreApplication::translate("MainWindow", "\346\235\277\345\215\241\350\207\252\346\243\200\357\274\232", nullptr));
        label_ParaRead->setText(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\257\273\345\217\226\357\274\232", nullptr));
        label_RefreshInterval->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\351\227\264\351\232\224\357\274\232", nullptr));
        pushButton_ParaRestoreSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        checkBox_RefreshInterval->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        label_BoardTemp->setText(QCoreApplication::translate("MainWindow", "\346\235\277\345\215\241\346\270\251\345\272\246\357\274\232", nullptr));
        checkBox_CalibrateModeEn->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        pushButton_RebootSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_CailibrateMode->setText(QCoreApplication::translate("MainWindow", "\350\260\203\350\257\225\346\250\241\345\274\217\357\274\232", nullptr));
        label_ParaSave->setText(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\344\277\235\345\255\230\357\274\232", nullptr));
        pushButton_ParaSaveSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_BoardID->setText(QCoreApplication::translate("MainWindow", "\346\235\277\345\215\241ID  \357\274\232", nullptr));
        pushButton_ExcitateCurrentSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_ErrorClear->setText(QCoreApplication::translate("MainWindow", "\346\225\205\351\232\234\346\270\205\351\231\244\357\274\232", nullptr));
        pushButton_ErrorClear->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_DeviceInfo->setText(QCoreApplication::translate("MainWindow", "DeviceInfo", nullptr));
        pushButton_FirmVersion->setText(QCoreApplication::translate("MainWindow", "FirmVersion", nullptr));
        label_ExcitateCurrent_QSlider->setText(QCoreApplication::translate("MainWindow", "\346\277\200\345\212\261\347\224\265\346\265\201", nullptr));
        label_OutputCurrent_QSlider_B->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\207\272\347\224\265\346\265\201B", nullptr));
        label_OutputCurrent_QSlider_A->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\207\272\347\224\265\346\265\201A", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\350\260\203\350\257\225", nullptr));
        checkBox_WobCHB->setText(QCoreApplication::translate("MainWindow", "CH2", nullptr));
        pushButtonWobClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        label_WobAmp->setText(QCoreApplication::translate("MainWindow", "\345\271\205\345\272\246\357\274\232", nullptr));
        checkBox_WobCHA->setText(QCoreApplication::translate("MainWindow", "CH1", nullptr));
        pushButton_WobStart->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        label_NULL->setText(QString());
        label_WobPeriod->setText(QCoreApplication::translate("MainWindow", "\345\221\250\346\234\237\357\274\232", nullptr));
        label_WobOffset->setText(QCoreApplication::translate("MainWindow", "\345\201\217\347\275\256\357\274\232", nullptr));
        label_DegaussCutoff->setText(QCoreApplication::translate("MainWindow", "\346\210\252\346\255\242\357\274\232", nullptr));
        label_DegaussTotalDots->setText(QCoreApplication::translate("MainWindow", "\346\200\273\347\202\271\346\225\260\357\274\232", nullptr));
        checkBox_DegaussCHB->setText(QCoreApplication::translate("MainWindow", "CH2", nullptr));
        checkBox_DegaussCHA->setText(QCoreApplication::translate("MainWindow", "CH1", nullptr));
        label_DegaussAtten->setText(QCoreApplication::translate("MainWindow", "\350\241\260\345\207\217\357\274\232", nullptr));
        pushButton_DegaussStart->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        label_DegaussPeriod->setText(QCoreApplication::translate("MainWindow", "\345\221\250\346\234\237\357\274\232", nullptr));
        label_DegaussAmp->setText(QCoreApplication::translate("MainWindow", "\345\271\205\345\272\246\357\274\232", nullptr));
        label_DegaussPeriodDots->setText(QCoreApplication::translate("MainWindow", "\345\221\250\346\234\237\347\202\271\346\225\260\357\274\232", nullptr));
        pushButton_DegaussAbort->setText(QCoreApplication::translate("MainWindow", "\347\273\210\346\255\242", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Degauss", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Wobble", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Wobble_Degauss", nullptr));
        label_FirmVersion->setText(QCoreApplication::translate("MainWindow", "Firmware:", nullptr));
        label_DeviceInfo->setText(QCoreApplication::translate("MainWindow", "DeviceInfo:", nullptr));
        label_BoardCommunicateID->setText(QCoreApplication::translate("MainWindow", "\346\235\277\345\215\241ID:", nullptr));
        pushButton_AddCmd->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\345\215\217\350\256\256", nullptr));
        pushButton_DelCmd->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\215\217\350\256\256", nullptr));
        pushButton_AddMod->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\346\250\241\345\235\227", nullptr));
        pushButton_DelMod->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\250\241\345\235\227", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        label_SystemTime->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        checkBox_BoardEnable->setText(QCoreApplication::translate("MainWindow", "\346\235\277\345\215\241\344\275\277\350\203\275", nullptr));
        menuDemo->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
