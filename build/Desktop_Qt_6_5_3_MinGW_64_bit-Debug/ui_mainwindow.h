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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_NetConnect;
    QLineEdit *lineEdit_NetIP;
    QLineEdit *lineEdit_NetPortNo;
    QWidget *tab_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_CanConnect;
    QComboBox *comboBox_CanBaudRate;
    QTextEdit *textEdit_RealTimeCommunicateData;
    QListWidget *listWidget_Device;
    QPushButton *pushButton_LockRealTimeWindows;
    QPushButton *pushButton_CleanRealTimeWindows;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_AddCmd;
    QPushButton *pushButton_DelCmd;
    QPushButton *pushButton_AddMod;
    QPushButton *pushButton_DelMod;
    QPushButton *pushButton_Save;
    QMenuBar *menubar;
    QMenu *menuDemo;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 692);
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
        widget = new QWidget(tab_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 355, 26));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_NetConnect = new QPushButton(widget);
        pushButton_NetConnect->setObjectName("pushButton_NetConnect");

        horizontalLayout_3->addWidget(pushButton_NetConnect);

        lineEdit_NetIP = new QLineEdit(widget);
        lineEdit_NetIP->setObjectName("lineEdit_NetIP");

        horizontalLayout_3->addWidget(lineEdit_NetIP);

        lineEdit_NetPortNo = new QLineEdit(widget);
        lineEdit_NetPortNo->setObjectName("lineEdit_NetPortNo");

        horizontalLayout_3->addWidget(lineEdit_NetPortNo);

        Communication->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        widget1 = new QWidget(tab_3);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 10, 152, 26));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_CanConnect = new QPushButton(widget1);
        pushButton_CanConnect->setObjectName("pushButton_CanConnect");

        horizontalLayout_4->addWidget(pushButton_CanConnect);

        comboBox_CanBaudRate = new QComboBox(widget1);
        comboBox_CanBaudRate->setObjectName("comboBox_CanBaudRate");

        horizontalLayout_4->addWidget(comboBox_CanBaudRate);

        Communication->addTab(tab_3, QString());
        textEdit_RealTimeCommunicateData = new QTextEdit(centralwidget);
        textEdit_RealTimeCommunicateData->setObjectName("textEdit_RealTimeCommunicateData");
        textEdit_RealTimeCommunicateData->setGeometry(QRect(120, 450, 891, 161));
        listWidget_Device = new QListWidget(centralwidget);
        listWidget_Device->setObjectName("listWidget_Device");
        listWidget_Device->setGeometry(QRect(0, 0, 111, 611));
        pushButton_LockRealTimeWindows = new QPushButton(centralwidget);
        pushButton_LockRealTimeWindows->setObjectName("pushButton_LockRealTimeWindows");
        pushButton_LockRealTimeWindows->setGeometry(QRect(120, 420, 75, 24));
        pushButton_CleanRealTimeWindows = new QPushButton(centralwidget);
        pushButton_CleanRealTimeWindows->setObjectName("pushButton_CleanRealTimeWindows");
        pushButton_CleanRealTimeWindows->setGeometry(QRect(210, 420, 75, 24));
        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(130, 90, 401, 26));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_AddCmd = new QPushButton(widget2);
        pushButton_AddCmd->setObjectName("pushButton_AddCmd");

        horizontalLayout_2->addWidget(pushButton_AddCmd);

        pushButton_DelCmd = new QPushButton(widget2);
        pushButton_DelCmd->setObjectName("pushButton_DelCmd");

        horizontalLayout_2->addWidget(pushButton_DelCmd);

        pushButton_AddMod = new QPushButton(widget2);
        pushButton_AddMod->setObjectName("pushButton_AddMod");

        horizontalLayout_2->addWidget(pushButton_AddMod);

        pushButton_DelMod = new QPushButton(widget2);
        pushButton_DelMod->setObjectName("pushButton_DelMod");

        horizontalLayout_2->addWidget(pushButton_DelMod);

        pushButton_Save = new QPushButton(widget2);
        pushButton_Save->setObjectName("pushButton_Save");

        horizontalLayout_2->addWidget(pushButton_Save);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1024, 22));
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
        pushButton_CleanRealTimeWindows->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton_AddCmd->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\345\215\217\350\256\256", nullptr));
        pushButton_DelCmd->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\215\217\350\256\256", nullptr));
        pushButton_AddMod->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\346\250\241\345\235\227", nullptr));
        pushButton_DelMod->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\250\241\345\235\227", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        menuDemo->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
