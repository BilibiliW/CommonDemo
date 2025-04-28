
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QQueue>
#include <stdint.h>
#include "./HardwareInterface/hardwareinterface.h"
#include "./HardwareInterface/comm_serialport.h"
#include "./Protocol/protocol.h"
#include "./Protocol/Check/data_check.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

#define SOFTWARE_VERSION " v0.0.4"

// QQueue<uint8_t> RecvQueue;
typedef union{
    float data_float;
    uint8_t data_arr[4];
}data_convert_u;
class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Comm_SerialPort *serial_comm;

    data_check check;
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



    // int32_t ProtocolAnalyse(void);

    void UpdateTextLine(QByteArray, bool isRx);
    QString formatFloatToString(double value, int intWidth, int fracWidth);

public slots:
    void UpdateHandShakeAck(A0_CMD_t*);
    void UpdateFirmwareVersion(A0_CMD_t*);
    void UpdateDeviceInfoRead(A0_CMD_t*);
    void UpdateBoardStatusRead(A0_CMD_t*);

    void UpdateCoilCurrentRead(A0_CMD_t*);
    void UpdateCoilVolRead(A0_CMD_t*);
    void UpdateCoilResistRead(A0_CMD_t*);
    void UpdatePowerVolRead(A0_CMD_t*);
    void UpdateInputVolRead(A0_CMD_t*);
    void UpdateInputCurrentRead(A0_CMD_t*);
    void UpdateOutputCurrentRead(A0_CMD_t*);
    void UpdateBoardTempRead(A0_CMD_t*);
    void UpdateBoardID_Read(A0_CMD_t*);

    void UpdateCoilCurrentCoefRead(A0_CMD_t*);
    void UpdateCoilVolCoefRead(A0_CMD_t*);

    void UpdateDialSwVol(A0_CMD_t*);
    void UpdateAds8326Vol(A0_CMD_t*);

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

    void on_pushButton_dial_sw_get_clicked();


    void on_pushButton_3_clicked();

    void on_pushButton_DAC8571_Set_clicked();

    void on_pushButton_MAX5719_Set_clicked();

    void on_pushButton_current_Set_clicked();

    void on_pushButton_multi_Set_clicked();

// signals:
//     void DialSwRead(A0_CMD_t*);
//     void Ads8326Read(A0_CMD_t*);



    void on_pushButton_ExcitateCurrentSet_clicked();

    void on_pushButton_CoilCurrentGet_clicked();

    void on_pushButton_CoilVolGet_clicked();

    void on_pushButton_PowerVolGet_clicked();

    void on_pushButton_InputCurrentGet_clicked();

    void on_pushButton_CoilResistGet_clicked();

    void on_pushButton_CoilResistSet_clicked();

    void on_pushButton_InputVolGet_clicked();

    void on_pushButton_InputVolSet_clicked();

    void on_pushButton_OutputCurrentGet_clicked();

    void on_pushButton_OutputCurrentSet_clicked();

    void on_pushButton_CoilCurrentCoefSet_clicked();

    void on_pushButton_CoilCurrentCoefGet_clicked();

    void on_pushButton_CoilVolCoefSet_clicked();

    void on_pushButton_CoilVolCoefGet_clicked();

    void on_pushButton_BoardTempGet_clicked();

    void on_pushButton_BoardID_Get_clicked();

    void on_pushButton_RebootSet_clicked();

    void on_pushButton_ParaSaveSet_clicked();

    void on_pushButton_ParaReadGet_clicked();

    void on_pushButton_ParaRestoreSet_clicked();

    void on_pushButton_DeviceInfo_clicked();

    void on_pushButton_FirmVersion_clicked();

private:
    Ui::MainWindow *ui;
    HardwareInterface hard_interface;
    Protocol* protocol;
    QThread* subThread;
    QMap<QString, QTableWidget*> tableMap;
};

#endif // MAINWINDOW_H
