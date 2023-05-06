
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

#include "./HardwareInterface/hardwareinterface.h"
#include "./HardwareInterface/comm_serialport.h"
#include "./Protocol/protocol.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Comm_SerialPort *serial_comm;

    QJsonObject json_root;

    bool realtime_show_lock;
    void CreateCmdModTable(QTableWidget *protocolTableCmdMod, QJsonObject deviceInfoObj);
    void CreateCmdModTable(void);


    int32_t JsonObjGetKey(QJsonObject jsonObj, QString keyName);
    int32_t JsonObjGetValue(QJsonObject jsonObj, QString keyName, QJsonValue *value);
    int32_t JsonArrGetValue(QJsonArray jsonArr, QString keyName, QJsonValue *value);
    int32_t JsonObjGetParam(QJsonObject jsonObj, QJsonValue *value);

    int32_t ParseA0Cmd(QJsonValue jsonValue);
    int32_t JsonObjGetDirectChildMemberValue(QJsonObject jsonObj, QString keyName, QJsonValue *value);
    int32_t AsignA0CmdFromJsonObj(QJsonObject A0_CmdObj, A0_CMD_t *A0_Cmd);
    int32_t TableWidgetSetComboBox(QComboBox* comboBox, QString comboBoxText);

private slots:
    void CommTypeUpdate(QString);

    void on_Communication_currentChanged(int index);

    void on_pushButton_SerialConnect_clicked();

    void RecvData();
    void on_pushButton_LockRealTimeWindows_clicked();

    void on_pushButton_CleanRealTimeWindows_clicked();

    void on_actionImportJson_triggered();

    void on_pushButton_Save_clicked();

    void on_listWidget_Device_doubleClicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    HardwareInterface hard_interface;
    Protocol protocol;
    QMap<QString, QTableWidget*> tableMap;
};

#endif // MAINWINDOW_H
