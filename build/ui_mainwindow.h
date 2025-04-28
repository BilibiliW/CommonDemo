/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
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
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_AddCmd;
    QPushButton *pushButton_DelCmd;
    QPushButton *pushButton_AddMod;
    QPushButton *pushButton_DelMod;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_CleanRealTimeWindows;
    QLabel *label_8;
    QLabel *label_Version;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_dial_sw_get;
    QLineEdit *lineEdit_sw0;
    QLabel *label_6;
    QLabel *label_4;
    QCheckBox *checkBox_DAC8571_B;
    QRadioButton *radioButton_current_Pos;
    QLabel *label_2;
    QPushButton *pushButton_MAX5719_Set;
    QRadioButton *radioButton_current_Neg;
    QLabel *label_5;
    QCheckBox *checkBox_current_B;
    QCheckBox *checkBox_MAX5719_B;
    QCheckBox *checkBox_DAC8571_A;
    QCheckBox *checkBox_current_A;
    QLabel *label;
    QPushButton *pushButton_current_Set;
    QCheckBox *checkBox_MAX5719_A;
    QPushButton *pushButton_DAC8571_Set;
    QLabel *label_3;
    QComboBox *comboBox_multi_sel;
    QPushButton *pushButton_multi_Set;
    QLineEdit *lineEdit_DAC8571;
    QLineEdit *lineEdit_MAX5719;
    QRadioButton *radioButton_current_Close;
    QLineEdit *lineEdit_sw1;
    QLabel *label_7;
    QTextEdit *textEdit_ads8326;
    QLabel *label_9;
    QWidget *tab_5;
    QFrame *frame_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_CoilResist;
    QLineEdit *lineEdit_OutputCurrentA;
    QLabel *label_PowerVol;
    QLabel *label_CoilVol;
    QPushButton *pushButton_CoilVolGet;
    QLineEdit *lineEdit_InputCurrentA;
    QLabel *label_InputVol;
    QPushButton *pushButton_CoilCurrentGet;
    QLineEdit *lineEdit_InputCurrentB;
    QLineEdit *lineEdit_InputVolB;
    QLineEdit *lineEdit_CoilResistA;
    QLineEdit *lineEdit_CoilCurrentA;
    QLabel *label_OutputCurrent;
    QLineEdit *lineEdit_CoilVolA;
    QLineEdit *lineEdit_PowerVolB;
    QLineEdit *lineEdit_CoilResistB;
    QLabel *label_InputCurrent;
    QLineEdit *lineEdit_CoilCurrentB;
    QLabel *label_CoilCurrent;
    QLineEdit *lineEdit_CoilCurrentCoefB;
    QLabel *label_CoilCurrentCoef;
    QLineEdit *lineEdit_InputVolA;
    QLineEdit *lineEdit_CoilVolB;
    QLineEdit *lineEdit_CoilCurrentCoefA;
    QLineEdit *lineEdit_PowerVolA;
    QLineEdit *lineEdit_OutputCurrentB;
    QPushButton *pushButton_InputCurrentGet;
    QLabel *label_CoilVolCoef;
    QLineEdit *lineEdit_CoilVolCoefA;
    QLineEdit *lineEdit_CoilVolCoefB;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_CoilResistSet;
    QPushButton *pushButton_CoilResistGet;
    QPushButton *pushButton_PowerVolGet;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_InputVolSet;
    QPushButton *pushButton_InputVolGet;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_CoilCurrentCoefSet;
    QPushButton *pushButton_CoilCurrentCoefGet;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_CoilVolCoefSet;
    QPushButton *pushButton_CoilVolCoefGet;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_OutputCurrentSet;
    QPushButton *pushButton_OutputCurrentGet;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_ParaReadGet;
    QPushButton *pushButton_ExcitateCurrentSet;
    QLineEdit *lineEdit_ExcitateCurrent;
    QLabel *label_BoardStatus;
    QLineEdit *lineEdit_BoardID;
    QLabel *label_ExcitateCurrent;
    QLabel *label_ParaRestore;
    QLabel *label_BoardID;
    QLabel *label_BoardTemp;
    QLabel *label_Reboot;
    QLabel *label_RefreshInterval;
    QPushButton *pushButton_BoardTempGet;
    QLineEdit *lineEdit_RefreshInterval;
    QLabel *label_ParaRead;
    QLineEdit *lineEdit_BoardTemp;
    QCheckBox *checkBox_RefreshInterval;
    QPushButton *pushButton_ParaRestoreSet;
    QPushButton *pushButton_RebootSet;
    QLineEdit *lineEdit_BoardState;
    QPushButton *pushButton_BoardID_Get;
    QPushButton *pushButton_ParaSaveSet;
    QLabel *label_ParaSave;
    QLineEdit *lineEdit_BoardErrCode;
    QFrame *line;
    QFrame *line_2;
    QPushButton *pushButton_DeviceInfo;
    QPushButton *pushButton_FirmVersion;
    QLabel *label_FirmVersion;
    QLabel *label_DeviceInfo;
    QMenuBar *menubar;
    QMenu *menuDemo;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1031, 650);
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
        icon.addFile(QString::fromUtf8("icon/download.png"), QSize(), QIcon::Normal, QIcon::On);
        action_2->setIcon(icon);
        actioninfo = new QAction(MainWindow);
        actioninfo->setObjectName("actioninfo");
        actioninfo->setCheckable(true);
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8("applications-office");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("icon/info.jpg"), QSize(), QIcon::Active, QIcon::On);
            icon1.addFile(QString::fromUtf8("icon/info.jpg"), QSize(), QIcon::Selected, QIcon::On);
        }
        actioninfo->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Communication = new QTabWidget(centralwidget);
        Communication->setObjectName("Communication");
        Communication->setGeometry(QRect(120, 0, 751, 71));
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
        textEdit_RealTimeCommunicateData->setGeometry(QRect(120, 470, 891, 101));
        listWidget_Device = new QListWidget(centralwidget);
        listWidget_Device->setObjectName("listWidget_Device");
        listWidget_Device->setGeometry(QRect(0, 0, 111, 571));
        pushButton_LockRealTimeWindows = new QPushButton(centralwidget);
        pushButton_LockRealTimeWindows->setObjectName("pushButton_LockRealTimeWindows");
        pushButton_LockRealTimeWindows->setGeometry(QRect(220, 440, 75, 24));
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(130, 80, 401, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
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

        pushButton_CleanRealTimeWindows = new QPushButton(centralwidget);
        pushButton_CleanRealTimeWindows->setObjectName("pushButton_CleanRealTimeWindows");
        pushButton_CleanRealTimeWindows->setGeometry(QRect(300, 440, 75, 24));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(120, 430, 91, 41));
        label_8->setStyleSheet(QString::fromUtf8(""));
        label_Version = new QLabel(centralwidget);
        label_Version->setObjectName("label_Version");
        label_Version->setGeometry(QRect(920, 20, 111, 21));
        label_Version->setStyleSheet(QString::fromUtf8(""));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(130, 110, 891, 331));
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        frame = new QFrame(tab_4);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 10, 381, 221));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"border-radius:10px;\n"
"border:2px solid rgb(160, 160,160)\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_dial_sw_get = new QPushButton(frame);
        pushButton_dial_sw_get->setObjectName("pushButton_dial_sw_get");

        gridLayout_2->addWidget(pushButton_dial_sw_get, 9, 9, 1, 1);

        lineEdit_sw0 = new QLineEdit(frame);
        lineEdit_sw0->setObjectName("lineEdit_sw0");
        lineEdit_sw0->setMinimumSize(QSize(68, 0));
        lineEdit_sw0->setMaximumSize(QSize(68, 1000));

        gridLayout_2->addWidget(lineEdit_sw0, 9, 2, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 9, 3, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 9, 0, 1, 1);

        checkBox_DAC8571_B = new QCheckBox(frame);
        checkBox_DAC8571_B->setObjectName("checkBox_DAC8571_B");

        gridLayout_2->addWidget(checkBox_DAC8571_B, 0, 8, 1, 1);

        radioButton_current_Pos = new QRadioButton(frame);
        radioButton_current_Pos->setObjectName("radioButton_current_Pos");
        radioButton_current_Pos->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(radioButton_current_Pos, 4, 2, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 2);

        pushButton_MAX5719_Set = new QPushButton(frame);
        pushButton_MAX5719_Set->setObjectName("pushButton_MAX5719_Set");

        gridLayout_2->addWidget(pushButton_MAX5719_Set, 1, 9, 1, 1);

        radioButton_current_Neg = new QRadioButton(frame);
        radioButton_current_Neg->setObjectName("radioButton_current_Neg");
        radioButton_current_Neg->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(radioButton_current_Neg, 5, 2, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        checkBox_current_B = new QCheckBox(frame);
        checkBox_current_B->setObjectName("checkBox_current_B");

        gridLayout_2->addWidget(checkBox_current_B, 4, 8, 1, 1);

        checkBox_MAX5719_B = new QCheckBox(frame);
        checkBox_MAX5719_B->setObjectName("checkBox_MAX5719_B");

        gridLayout_2->addWidget(checkBox_MAX5719_B, 1, 8, 1, 1);

        checkBox_DAC8571_A = new QCheckBox(frame);
        checkBox_DAC8571_A->setObjectName("checkBox_DAC8571_A");

        gridLayout_2->addWidget(checkBox_DAC8571_A, 0, 6, 1, 2);

        checkBox_current_A = new QCheckBox(frame);
        checkBox_current_A->setObjectName("checkBox_current_A");

        gridLayout_2->addWidget(checkBox_current_A, 4, 6, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        pushButton_current_Set = new QPushButton(frame);
        pushButton_current_Set->setObjectName("pushButton_current_Set");

        gridLayout_2->addWidget(pushButton_current_Set, 4, 9, 1, 1);

        checkBox_MAX5719_A = new QCheckBox(frame);
        checkBox_MAX5719_A->setObjectName("checkBox_MAX5719_A");

        gridLayout_2->addWidget(checkBox_MAX5719_A, 1, 6, 1, 1);

        pushButton_DAC8571_Set = new QPushButton(frame);
        pushButton_DAC8571_Set->setObjectName("pushButton_DAC8571_Set");

        gridLayout_2->addWidget(pushButton_DAC8571_Set, 0, 9, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 6, 0, 1, 1);

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

        pushButton_multi_Set = new QPushButton(frame);
        pushButton_multi_Set->setObjectName("pushButton_multi_Set");
        pushButton_multi_Set->setMinimumSize(QSize(0, 0));
        pushButton_multi_Set->setMaximumSize(QSize(1000, 16777215));

        gridLayout_2->addWidget(pushButton_multi_Set, 6, 9, 1, 1);

        lineEdit_DAC8571 = new QLineEdit(frame);
        lineEdit_DAC8571->setObjectName("lineEdit_DAC8571");
        lineEdit_DAC8571->setMinimumSize(QSize(0, 0));
        lineEdit_DAC8571->setMaximumSize(QSize(1000, 1000));

        gridLayout_2->addWidget(lineEdit_DAC8571, 0, 2, 1, 1);

        lineEdit_MAX5719 = new QLineEdit(frame);
        lineEdit_MAX5719->setObjectName("lineEdit_MAX5719");
        lineEdit_MAX5719->setMinimumSize(QSize(0, 0));
        lineEdit_MAX5719->setMaximumSize(QSize(1110, 1000));

        gridLayout_2->addWidget(lineEdit_MAX5719, 1, 2, 1, 1);

        radioButton_current_Close = new QRadioButton(frame);
        radioButton_current_Close->setObjectName("radioButton_current_Close");
        radioButton_current_Close->setMinimumSize(QSize(0, 0));
        radioButton_current_Close->setMaximumSize(QSize(10000, 16777215));

        gridLayout_2->addWidget(radioButton_current_Close, 3, 2, 1, 1);

        lineEdit_sw1 = new QLineEdit(frame);
        lineEdit_sw1->setObjectName("lineEdit_sw1");
        lineEdit_sw1->setMinimumSize(QSize(68, 0));
        lineEdit_sw1->setMaximumSize(QSize(68, 1000));

        gridLayout_2->addWidget(lineEdit_sw1, 9, 4, 1, 4);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 9, 8, 1, 1);

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
        frame_2->setGeometry(QRect(0, 10, 871, 291));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"border-radius:10px;\n"
"border:2px solid rgb(160, 160,160)\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_2 = new QWidget(frame_2);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(310, 10, 363, 267));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_CoilResist = new QLabel(gridLayoutWidget_2);
        label_CoilResist->setObjectName("label_CoilResist");

        gridLayout_3->addWidget(label_CoilResist, 4, 0, 1, 1);

        lineEdit_OutputCurrentA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_OutputCurrentA->setObjectName("lineEdit_OutputCurrentA");

        gridLayout_3->addWidget(lineEdit_OutputCurrentA, 8, 1, 1, 1);

        label_PowerVol = new QLabel(gridLayoutWidget_2);
        label_PowerVol->setObjectName("label_PowerVol");

        gridLayout_3->addWidget(label_PowerVol, 5, 0, 1, 1);

        label_CoilVol = new QLabel(gridLayoutWidget_2);
        label_CoilVol->setObjectName("label_CoilVol");

        gridLayout_3->addWidget(label_CoilVol, 3, 0, 1, 1);

        pushButton_CoilVolGet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilVolGet->setObjectName("pushButton_CoilVolGet");

        gridLayout_3->addWidget(pushButton_CoilVolGet, 3, 3, 1, 1);

        lineEdit_InputCurrentA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_InputCurrentA->setObjectName("lineEdit_InputCurrentA");

        gridLayout_3->addWidget(lineEdit_InputCurrentA, 7, 1, 1, 1);

        label_InputVol = new QLabel(gridLayoutWidget_2);
        label_InputVol->setObjectName("label_InputVol");

        gridLayout_3->addWidget(label_InputVol, 6, 0, 1, 1);

        pushButton_CoilCurrentGet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilCurrentGet->setObjectName("pushButton_CoilCurrentGet");

        gridLayout_3->addWidget(pushButton_CoilCurrentGet, 2, 3, 1, 1);

        lineEdit_InputCurrentB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_InputCurrentB->setObjectName("lineEdit_InputCurrentB");

        gridLayout_3->addWidget(lineEdit_InputCurrentB, 7, 2, 1, 1);

        lineEdit_InputVolB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_InputVolB->setObjectName("lineEdit_InputVolB");

        gridLayout_3->addWidget(lineEdit_InputVolB, 6, 2, 1, 1);

        lineEdit_CoilResistA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilResistA->setObjectName("lineEdit_CoilResistA");

        gridLayout_3->addWidget(lineEdit_CoilResistA, 4, 1, 1, 1);

        lineEdit_CoilCurrentA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentA->setObjectName("lineEdit_CoilCurrentA");

        gridLayout_3->addWidget(lineEdit_CoilCurrentA, 2, 1, 1, 1);

        label_OutputCurrent = new QLabel(gridLayoutWidget_2);
        label_OutputCurrent->setObjectName("label_OutputCurrent");

        gridLayout_3->addWidget(label_OutputCurrent, 8, 0, 1, 1);

        lineEdit_CoilVolA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilVolA->setObjectName("lineEdit_CoilVolA");

        gridLayout_3->addWidget(lineEdit_CoilVolA, 3, 1, 1, 1);

        lineEdit_PowerVolB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_PowerVolB->setObjectName("lineEdit_PowerVolB");

        gridLayout_3->addWidget(lineEdit_PowerVolB, 5, 2, 1, 1);

        lineEdit_CoilResistB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilResistB->setObjectName("lineEdit_CoilResistB");

        gridLayout_3->addWidget(lineEdit_CoilResistB, 4, 2, 1, 1);

        label_InputCurrent = new QLabel(gridLayoutWidget_2);
        label_InputCurrent->setObjectName("label_InputCurrent");

        gridLayout_3->addWidget(label_InputCurrent, 7, 0, 1, 1);

        lineEdit_CoilCurrentB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentB->setObjectName("lineEdit_CoilCurrentB");

        gridLayout_3->addWidget(lineEdit_CoilCurrentB, 2, 2, 1, 1);

        label_CoilCurrent = new QLabel(gridLayoutWidget_2);
        label_CoilCurrent->setObjectName("label_CoilCurrent");

        gridLayout_3->addWidget(label_CoilCurrent, 2, 0, 1, 1);

        lineEdit_CoilCurrentCoefB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentCoefB->setObjectName("lineEdit_CoilCurrentCoefB");

        gridLayout_3->addWidget(lineEdit_CoilCurrentCoefB, 9, 2, 1, 1);

        label_CoilCurrentCoef = new QLabel(gridLayoutWidget_2);
        label_CoilCurrentCoef->setObjectName("label_CoilCurrentCoef");

        gridLayout_3->addWidget(label_CoilCurrentCoef, 9, 0, 1, 1);

        lineEdit_InputVolA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_InputVolA->setObjectName("lineEdit_InputVolA");

        gridLayout_3->addWidget(lineEdit_InputVolA, 6, 1, 1, 1);

        lineEdit_CoilVolB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilVolB->setObjectName("lineEdit_CoilVolB");

        gridLayout_3->addWidget(lineEdit_CoilVolB, 3, 2, 1, 1);

        lineEdit_CoilCurrentCoefA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilCurrentCoefA->setObjectName("lineEdit_CoilCurrentCoefA");

        gridLayout_3->addWidget(lineEdit_CoilCurrentCoefA, 9, 1, 1, 1);

        lineEdit_PowerVolA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_PowerVolA->setObjectName("lineEdit_PowerVolA");

        gridLayout_3->addWidget(lineEdit_PowerVolA, 5, 1, 1, 1);

        lineEdit_OutputCurrentB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_OutputCurrentB->setObjectName("lineEdit_OutputCurrentB");

        gridLayout_3->addWidget(lineEdit_OutputCurrentB, 8, 2, 1, 1);

        pushButton_InputCurrentGet = new QPushButton(gridLayoutWidget_2);
        pushButton_InputCurrentGet->setObjectName("pushButton_InputCurrentGet");

        gridLayout_3->addWidget(pushButton_InputCurrentGet, 7, 3, 1, 1);

        label_CoilVolCoef = new QLabel(gridLayoutWidget_2);
        label_CoilVolCoef->setObjectName("label_CoilVolCoef");

        gridLayout_3->addWidget(label_CoilVolCoef, 10, 0, 1, 1);

        lineEdit_CoilVolCoefA = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilVolCoefA->setObjectName("lineEdit_CoilVolCoefA");

        gridLayout_3->addWidget(lineEdit_CoilVolCoefA, 10, 1, 1, 1);

        lineEdit_CoilVolCoefB = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CoilVolCoefB->setObjectName("lineEdit_CoilVolCoefB");

        gridLayout_3->addWidget(lineEdit_CoilVolCoefB, 10, 2, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_CoilResistSet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilResistSet->setObjectName("pushButton_CoilResistSet");

        horizontalLayout_5->addWidget(pushButton_CoilResistSet);

        pushButton_CoilResistGet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilResistGet->setObjectName("pushButton_CoilResistGet");

        horizontalLayout_5->addWidget(pushButton_CoilResistGet);


        gridLayout_3->addLayout(horizontalLayout_5, 4, 3, 1, 1);

        pushButton_PowerVolGet = new QPushButton(gridLayoutWidget_2);
        pushButton_PowerVolGet->setObjectName("pushButton_PowerVolGet");

        gridLayout_3->addWidget(pushButton_PowerVolGet, 5, 3, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_InputVolSet = new QPushButton(gridLayoutWidget_2);
        pushButton_InputVolSet->setObjectName("pushButton_InputVolSet");

        horizontalLayout_6->addWidget(pushButton_InputVolSet);

        pushButton_InputVolGet = new QPushButton(gridLayoutWidget_2);
        pushButton_InputVolGet->setObjectName("pushButton_InputVolGet");

        horizontalLayout_6->addWidget(pushButton_InputVolGet);


        gridLayout_3->addLayout(horizontalLayout_6, 6, 3, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton_CoilCurrentCoefSet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilCurrentCoefSet->setObjectName("pushButton_CoilCurrentCoefSet");

        horizontalLayout_8->addWidget(pushButton_CoilCurrentCoefSet);

        pushButton_CoilCurrentCoefGet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilCurrentCoefGet->setObjectName("pushButton_CoilCurrentCoefGet");

        horizontalLayout_8->addWidget(pushButton_CoilCurrentCoefGet);


        gridLayout_3->addLayout(horizontalLayout_8, 9, 3, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        pushButton_CoilVolCoefSet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilVolCoefSet->setObjectName("pushButton_CoilVolCoefSet");

        horizontalLayout_9->addWidget(pushButton_CoilVolCoefSet);

        pushButton_CoilVolCoefGet = new QPushButton(gridLayoutWidget_2);
        pushButton_CoilVolCoefGet->setObjectName("pushButton_CoilVolCoefGet");

        horizontalLayout_9->addWidget(pushButton_CoilVolCoefGet);


        gridLayout_3->addLayout(horizontalLayout_9, 10, 3, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        pushButton_OutputCurrentSet = new QPushButton(gridLayoutWidget_2);
        pushButton_OutputCurrentSet->setObjectName("pushButton_OutputCurrentSet");

        horizontalLayout_10->addWidget(pushButton_OutputCurrentSet);

        pushButton_OutputCurrentGet = new QPushButton(gridLayoutWidget_2);
        pushButton_OutputCurrentGet->setObjectName("pushButton_OutputCurrentGet");

        horizontalLayout_10->addWidget(pushButton_OutputCurrentGet);


        gridLayout_3->addLayout(horizontalLayout_10, 8, 3, 1, 1);

        gridLayoutWidget_3 = new QWidget(frame_2);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(20, 10, 249, 271));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_ParaReadGet = new QPushButton(gridLayoutWidget_3);
        pushButton_ParaReadGet->setObjectName("pushButton_ParaReadGet");

        gridLayout_4->addWidget(pushButton_ParaReadGet, 5, 2, 1, 1);

        pushButton_ExcitateCurrentSet = new QPushButton(gridLayoutWidget_3);
        pushButton_ExcitateCurrentSet->setObjectName("pushButton_ExcitateCurrentSet");

        gridLayout_4->addWidget(pushButton_ExcitateCurrentSet, 0, 2, 1, 1);

        lineEdit_ExcitateCurrent = new QLineEdit(gridLayoutWidget_3);
        lineEdit_ExcitateCurrent->setObjectName("lineEdit_ExcitateCurrent");

        gridLayout_4->addWidget(lineEdit_ExcitateCurrent, 0, 1, 1, 1);

        label_BoardStatus = new QLabel(gridLayoutWidget_3);
        label_BoardStatus->setObjectName("label_BoardStatus");

        gridLayout_4->addWidget(label_BoardStatus, 7, 0, 1, 1);

        lineEdit_BoardID = new QLineEdit(gridLayoutWidget_3);
        lineEdit_BoardID->setObjectName("lineEdit_BoardID");

        gridLayout_4->addWidget(lineEdit_BoardID, 2, 1, 1, 1);

        label_ExcitateCurrent = new QLabel(gridLayoutWidget_3);
        label_ExcitateCurrent->setObjectName("label_ExcitateCurrent");

        gridLayout_4->addWidget(label_ExcitateCurrent, 0, 0, 1, 1);

        label_ParaRestore = new QLabel(gridLayoutWidget_3);
        label_ParaRestore->setObjectName("label_ParaRestore");

        gridLayout_4->addWidget(label_ParaRestore, 6, 0, 1, 1);

        label_BoardID = new QLabel(gridLayoutWidget_3);
        label_BoardID->setObjectName("label_BoardID");

        gridLayout_4->addWidget(label_BoardID, 2, 0, 1, 1);

        label_BoardTemp = new QLabel(gridLayoutWidget_3);
        label_BoardTemp->setObjectName("label_BoardTemp");

        gridLayout_4->addWidget(label_BoardTemp, 1, 0, 1, 1);

        label_Reboot = new QLabel(gridLayoutWidget_3);
        label_Reboot->setObjectName("label_Reboot");

        gridLayout_4->addWidget(label_Reboot, 3, 0, 1, 1);

        label_RefreshInterval = new QLabel(gridLayoutWidget_3);
        label_RefreshInterval->setObjectName("label_RefreshInterval");

        gridLayout_4->addWidget(label_RefreshInterval, 8, 0, 1, 1);

        pushButton_BoardTempGet = new QPushButton(gridLayoutWidget_3);
        pushButton_BoardTempGet->setObjectName("pushButton_BoardTempGet");

        gridLayout_4->addWidget(pushButton_BoardTempGet, 1, 2, 1, 1);

        lineEdit_RefreshInterval = new QLineEdit(gridLayoutWidget_3);
        lineEdit_RefreshInterval->setObjectName("lineEdit_RefreshInterval");

        gridLayout_4->addWidget(lineEdit_RefreshInterval, 8, 1, 1, 1);

        label_ParaRead = new QLabel(gridLayoutWidget_3);
        label_ParaRead->setObjectName("label_ParaRead");

        gridLayout_4->addWidget(label_ParaRead, 5, 0, 1, 1);

        lineEdit_BoardTemp = new QLineEdit(gridLayoutWidget_3);
        lineEdit_BoardTemp->setObjectName("lineEdit_BoardTemp");

        gridLayout_4->addWidget(lineEdit_BoardTemp, 1, 1, 1, 1);

        checkBox_RefreshInterval = new QCheckBox(gridLayoutWidget_3);
        checkBox_RefreshInterval->setObjectName("checkBox_RefreshInterval");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBox_RefreshInterval->sizePolicy().hasHeightForWidth());
        checkBox_RefreshInterval->setSizePolicy(sizePolicy);
        checkBox_RefreshInterval->setAutoFillBackground(false);

        gridLayout_4->addWidget(checkBox_RefreshInterval, 8, 2, 1, 1);

        pushButton_ParaRestoreSet = new QPushButton(gridLayoutWidget_3);
        pushButton_ParaRestoreSet->setObjectName("pushButton_ParaRestoreSet");

        gridLayout_4->addWidget(pushButton_ParaRestoreSet, 6, 2, 1, 1);

        pushButton_RebootSet = new QPushButton(gridLayoutWidget_3);
        pushButton_RebootSet->setObjectName("pushButton_RebootSet");

        gridLayout_4->addWidget(pushButton_RebootSet, 3, 2, 1, 1);

        lineEdit_BoardState = new QLineEdit(gridLayoutWidget_3);
        lineEdit_BoardState->setObjectName("lineEdit_BoardState");

        gridLayout_4->addWidget(lineEdit_BoardState, 7, 1, 1, 1);

        pushButton_BoardID_Get = new QPushButton(gridLayoutWidget_3);
        pushButton_BoardID_Get->setObjectName("pushButton_BoardID_Get");

        gridLayout_4->addWidget(pushButton_BoardID_Get, 2, 2, 1, 1);

        pushButton_ParaSaveSet = new QPushButton(gridLayoutWidget_3);
        pushButton_ParaSaveSet->setObjectName("pushButton_ParaSaveSet");

        gridLayout_4->addWidget(pushButton_ParaSaveSet, 4, 2, 1, 1);

        label_ParaSave = new QLabel(gridLayoutWidget_3);
        label_ParaSave->setObjectName("label_ParaSave");

        gridLayout_4->addWidget(label_ParaSave, 4, 0, 1, 1);

        lineEdit_BoardErrCode = new QLineEdit(gridLayoutWidget_3);
        lineEdit_BoardErrCode->setObjectName("lineEdit_BoardErrCode");

        gridLayout_4->addWidget(lineEdit_BoardErrCode, 7, 2, 1, 1);

        line = new QFrame(frame_2);
        line->setObjectName("line");
        line->setGeometry(QRect(280, 0, 20, 291));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(frame_2);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(690, 0, 16, 291));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_DeviceInfo = new QPushButton(frame_2);
        pushButton_DeviceInfo->setObjectName("pushButton_DeviceInfo");
        pushButton_DeviceInfo->setGeometry(QRect(710, 10, 75, 23));
        pushButton_FirmVersion = new QPushButton(frame_2);
        pushButton_FirmVersion->setObjectName("pushButton_FirmVersion");
        pushButton_FirmVersion->setGeometry(QRect(790, 10, 75, 23));
        tabWidget->addTab(tab_5, QString());
        label_FirmVersion = new QLabel(centralwidget);
        label_FirmVersion->setObjectName("label_FirmVersion");
        label_FirmVersion->setGeometry(QRect(920, 40, 111, 21));
        label_FirmVersion->setStyleSheet(QString::fromUtf8(""));
        label_DeviceInfo = new QLabel(centralwidget);
        label_DeviceInfo->setObjectName("label_DeviceInfo");
        label_DeviceInfo->setGeometry(QRect(550, 80, 431, 21));
        label_DeviceInfo->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        tabWidget->raise();
        Communication->raise();
        textEdit_RealTimeCommunicateData->raise();
        listWidget_Device->raise();
        pushButton_LockRealTimeWindows->raise();
        layoutWidget2->raise();
        pushButton_CleanRealTimeWindows->raise();
        label_8->raise();
        label_Version->raise();
        label_FirmVersion->raise();
        label_DeviceInfo->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1031, 18));
        menuDemo = new QMenu(menubar);
        menuDemo->setObjectName("menuDemo");
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuDemo->menuAction());
        menuDemo->addAction(actionImportJson);
        menuDemo->addSeparator();
        menuDemo->addAction(actionImportProtocol);
        toolBar->addAction(actioninfo);
        toolBar->addAction(action_2);

        retranslateUi(MainWindow);

        Communication->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


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
        pushButton_AddCmd->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\345\215\217\350\256\256", nullptr));
        pushButton_DelCmd->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\215\217\350\256\256", nullptr));
        pushButton_AddMod->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\346\250\241\345\235\227", nullptr));
        pushButton_DelMod->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\250\241\345\235\227", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        pushButton_CleanRealTimeWindows->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\216\237\345\247\213\351\200\232\350\256\257\346\225\260\346\215\256\357\274\232", nullptr));
        label_Version->setText(QCoreApplication::translate("MainWindow", "Software:", nullptr));
        pushButton_dial_sw_get->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "sw0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\213\250\347\240\201\345\274\200\345\205\263\357\274\232", nullptr));
        checkBox_DAC8571_B->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        radioButton_current_Pos->setText(QCoreApplication::translate("MainWindow", "Pos", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "MAX5719  \357\274\232", nullptr));
        pushButton_MAX5719_Set->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        radioButton_current_Neg->setText(QCoreApplication::translate("MainWindow", "Neg", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\347\224\265\346\265\201\346\226\271\345\220\221\357\274\232", nullptr));
        checkBox_current_B->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        checkBox_MAX5719_B->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        checkBox_DAC8571_A->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        checkBox_current_A->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "DAC8571   \357\274\232", nullptr));
        pushButton_current_Set->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        checkBox_MAX5719_A->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        pushButton_DAC8571_Set->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\244\232\350\267\257\351\200\211\346\213\251\345\231\250 \357\274\232", nullptr));
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

        pushButton_multi_Set->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        radioButton_current_Close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "sw1", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\345\244\232\350\267\257\351\200\211\346\213\251\345\231\250\346\216\245\345\205\245\347\224\265\345\216\213\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\347\241\254\344\273\266\350\260\203\350\257\225", nullptr));
        label_CoilResist->setText(QCoreApplication::translate("MainWindow", "\347\272\277\345\234\210\347\224\265\351\230\273\357\274\232", nullptr));
        label_PowerVol->setText(QCoreApplication::translate("MainWindow", "\344\276\233\347\224\265\347\224\265\345\216\213\357\274\232", nullptr));
        label_CoilVol->setText(QCoreApplication::translate("MainWindow", "\347\272\277\345\234\210\347\224\265\345\216\213\357\274\232", nullptr));
        pushButton_CoilVolGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        label_InputVol->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\347\224\265\345\216\213\357\274\232", nullptr));
        pushButton_CoilCurrentGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        label_OutputCurrent->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\207\272\347\224\265\346\265\201\357\274\232", nullptr));
        label_InputCurrent->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\347\224\265\346\265\201\357\274\232", nullptr));
        label_CoilCurrent->setText(QCoreApplication::translate("MainWindow", "\347\272\277\345\234\210\347\224\265\346\265\201\357\274\232", nullptr));
        label_CoilCurrentCoef->setText(QCoreApplication::translate("MainWindow", "\347\224\265\346\265\201\347\263\273\346\225\260\357\274\232", nullptr));
        pushButton_InputCurrentGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        label_CoilVolCoef->setText(QCoreApplication::translate("MainWindow", "\347\224\265\345\216\213\347\263\273\346\225\260\357\274\232", nullptr));
        pushButton_CoilResistSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_CoilResistGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_PowerVolGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_InputVolSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_InputVolGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_CoilCurrentCoefSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_CoilCurrentCoefGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_CoilVolCoefSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_CoilVolCoefGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_OutputCurrentSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_OutputCurrentGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_ParaReadGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_ExcitateCurrentSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_BoardStatus->setText(QCoreApplication::translate("MainWindow", "\346\235\277\345\215\241\347\212\266\346\200\201\357\274\232", nullptr));
        label_ExcitateCurrent->setText(QCoreApplication::translate("MainWindow", "\346\277\200\345\212\261\347\224\265\346\265\201\357\274\232", nullptr));
        label_ParaRestore->setText(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\346\201\242\345\244\215\357\274\232", nullptr));
        label_BoardID->setText(QCoreApplication::translate("MainWindow", "\346\235\277\345\215\241ID  \357\274\232", nullptr));
        label_BoardTemp->setText(QCoreApplication::translate("MainWindow", "\346\235\277\345\215\241\346\270\251\345\272\246\357\274\232", nullptr));
        label_Reboot->setText(QCoreApplication::translate("MainWindow", "\346\235\277\345\215\241\351\207\215\345\220\257\357\274\232", nullptr));
        label_RefreshInterval->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\351\227\264\351\232\224\357\274\232", nullptr));
        pushButton_BoardTempGet->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        label_ParaRead->setText(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\257\273\345\217\226\357\274\232", nullptr));
        checkBox_RefreshInterval->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        pushButton_ParaRestoreSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_RebootSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_BoardID_Get->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        pushButton_ParaSaveSet->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_ParaSave->setText(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\344\277\235\345\255\230\357\274\232", nullptr));
        pushButton_DeviceInfo->setText(QCoreApplication::translate("MainWindow", "DeviceInfo", nullptr));
        pushButton_FirmVersion->setText(QCoreApplication::translate("MainWindow", "FirmVersion", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\350\260\203\350\257\225", nullptr));
        label_FirmVersion->setText(QCoreApplication::translate("MainWindow", "Firmware:", nullptr));
        label_DeviceInfo->setText(QCoreApplication::translate("MainWindow", "DeviceInfo:", nullptr));
        menuDemo->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
