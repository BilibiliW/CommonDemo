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
    QTextEdit *textEdit_ads8326;
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
    QPushButton *pushButton_CleanRealTimeWindows;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_Version;
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
        Communication->setGeometry(QRect(120, 0, 751, 81));
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
        textEdit_RealTimeCommunicateData->setGeometry(QRect(120, 450, 891, 121));
        listWidget_Device = new QListWidget(centralwidget);
        listWidget_Device->setObjectName("listWidget_Device");
        listWidget_Device->setGeometry(QRect(0, 0, 111, 571));
        pushButton_LockRealTimeWindows = new QPushButton(centralwidget);
        pushButton_LockRealTimeWindows->setObjectName("pushButton_LockRealTimeWindows");
        pushButton_LockRealTimeWindows->setGeometry(QRect(220, 420, 75, 24));
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(130, 90, 401, 26));
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

        textEdit_ads8326 = new QTextEdit(centralwidget);
        textEdit_ads8326->setObjectName("textEdit_ads8326");
        textEdit_ads8326->setGeometry(QRect(530, 330, 481, 111));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(130, 150, 381, 221));
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

        pushButton_CleanRealTimeWindows = new QPushButton(centralwidget);
        pushButton_CleanRealTimeWindows->setObjectName("pushButton_CleanRealTimeWindows");
        pushButton_CleanRealTimeWindows->setGeometry(QRect(300, 420, 75, 24));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(120, 410, 91, 41));
        label_8->setStyleSheet(QString::fromUtf8(""));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(530, 310, 121, 20));
        label_Version = new QLabel(centralwidget);
        label_Version->setObjectName("label_Version");
        label_Version->setGeometry(QRect(940, 0, 91, 21));
        label_Version->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        Communication->raise();
        textEdit_RealTimeCommunicateData->raise();
        listWidget_Device->raise();
        pushButton_LockRealTimeWindows->raise();
        layoutWidget3->raise();
        textEdit_ads8326->raise();
        pushButton_CleanRealTimeWindows->raise();
        label_8->raise();
        label_9->raise();
        frame->raise();
        label_Version->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1031, 22));
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
        pushButton_CleanRealTimeWindows->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\216\237\345\247\213\351\200\232\350\256\257\346\225\260\346\215\256\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\345\244\232\350\267\257\351\200\211\346\213\251\345\231\250\346\216\245\345\205\245\347\224\265\345\216\213\357\274\232", nullptr));
        label_Version->setText(QCoreApplication::translate("MainWindow", "Version:", nullptr));
        menuDemo->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
