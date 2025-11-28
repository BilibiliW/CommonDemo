
#ifndef PROTOCOL_H
#define PROTOCOL_H


#include <QWidget>
#include <QTableWidget>
#include <QQueue>
#include <QThread>
#include "./Protocol/Check/data_check.h"

extern  QQueue<uint8_t> RecvQueue;
typedef struct{
    QString cmdName;
    QString cmdType;
    uint8_t head;
    uint8_t len;
    uint8_t originAddr;
    uint8_t targetAddr;
    uint8_t mainCmdID;
    uint8_t subCmdID;
    uint8_t  cmd_RW_Type;
    QStringList dataType;
    QStringList unit;
    QStringList dataValue;
    QStringList lowLimit;
    QStringList upLimit;
    QStringList defaultValue;
    QString descrip;
    char* data;
    uint16_t dataLen;
    QString cmdGroup;
    QString access;
    uint16_t crc;
}A0_CMD_t;

typedef struct{
    QString boardName;
    uint16_t originAddr;
    uint16_t targetAddr;
    QStringList cmdGroup;
    QMap<QString, QList<A0_CMD_t>*> A0_CmdMod;
    QString communicate;
}board_t;

typedef struct{
    uint32_t originAddr;
    uint32_t targetAddr;
}device_t;

typedef enum{
    NO_ERR,
    POWER_VOL_A_ABNORMAL,
    POWER_VOL_B_ABNORMAL,
    POWER_CTRL_VOL_A_ABNORMAL,
    POWER_CTRL_VOL_B_ABNORMAL,
    POWER_CURRENT_A_ABNORMAL,
    POWER_CURRENT_B_ABNORMAL,
    COIL_VOL_A_ABNORMAL,
    COIL_VOL_B_ABNORMAL,
    COIL_CURRENT_A_ABNORMAL,
    COIL_CURRENT_B_ABNORMAL,
    COIL_CTRL_CURRENT_A_ABNORMAL,
    COIL_CTRL_CURRENT_B_ABNORMAL,
    COIL_RESIST_A_ABNORMAL,
    COIL_RESIST_B_ABNORMAL,
    TEMP_OVERHEAT,
}sys_err_code_e;

class Protocol : public QObject
{
    Q_OBJECT
public:
    // explicit Protocol(QWidget *parent = nullptr);
    Protocol(void);
    QList<QTableWidget*> cmd_mod_table;
    QList<QTabWidget*> boardTab;


    board_t board;
    data_check check;
//    A0_CMD_t A0_CMD;
//    QList<A0_CMD_t> *A0_CmdList;
//    QList<A0_Cmd*> A0_CmdMod;
    QMap<QString, QList<A0_CMD_t>*> A0_CmdMod;

    QMap<sys_err_code_e, QString> err_code = {
        {NO_ERR,                        "NO_ERR"                        },
        {POWER_VOL_A_ABNORMAL,          "POWER_VOL_A_ABNORMAL"          },
        {POWER_VOL_B_ABNORMAL,          "POWER_VOL_B_ABNORMAL"          },
        {POWER_CTRL_VOL_A_ABNORMAL,     "POWER_CTRL_VOL_A_ABNORMAL"     },
        {POWER_CTRL_VOL_B_ABNORMAL,     "POWER_CTRL_VOL_B_ABNORMAL"     },
        {POWER_CURRENT_A_ABNORMAL,      "POWER_CURRENT_A_ABNORMAL"      },
        {POWER_CURRENT_B_ABNORMAL,      "POWER_CURRENT_B_ABNORMAL"      },
        {COIL_VOL_A_ABNORMAL,           "COIL_VOL_A_ABNORMAL"           },
        {COIL_VOL_B_ABNORMAL,           "COIL_VOL_B_ABNORMAL"           },
        {COIL_CURRENT_A_ABNORMAL,       "COIL_CURRENT_A_ABNORMAL"       },
        {COIL_CURRENT_B_ABNORMAL,       "COIL_CURRENT_B_ABNORMAL"       },
        {COIL_CTRL_CURRENT_A_ABNORMAL,  "COIL_CTRL_CURRENT_A_ABNORMAL"  },
        {COIL_CTRL_CURRENT_B_ABNORMAL,  "COIL_CTRL_CURRENT_B_ABNORMAL"  },
        {COIL_RESIST_A_ABNORMAL,        "COIL_RESIST_A_ABNORMAL"        },
        {COIL_RESIST_B_ABNORMAL,        "COIL_RESIST_B_ABNORMAL"        },
        {TEMP_OVERHEAT,                 "TEMP_OVERHEAT"                 },
    };

    QByteArray* frame_arr;
    int32_t ProtocolAnalyse(void);

public slots:
    void SubThreadRun();

signals:
    void HandShakeAck(A0_CMD_t*);
    void FirmwareVersion(A0_CMD_t*);
    void DeviceInfoRead(A0_CMD_t*);
    void BoardStatusRead(A0_CMD_t*);
    void BoardSelfCheckResult(A0_CMD_t*);

    void CoilCurrentRead(A0_CMD_t*);
    void CoilVolRead(A0_CMD_t*);
    void CoilResistRead(A0_CMD_t*);
    void PowerVolRead(A0_CMD_t*);
    void InputVolRead(A0_CMD_t*);
    void InputCurrentRead(A0_CMD_t*);
    void OutputCurrentRead(A0_CMD_t*);
    void BoardTempRead(A0_CMD_t*);
    void BoardID_Read(A0_CMD_t*);

    void CoilCurrentGetCoefRead(A0_CMD_t*);
    void CoilCurrentSetCoefRead(A0_CMD_t*);
    void CoilVolCoefRead(A0_CMD_t*);

    void DialSwRead(A0_CMD_t*);
    void Ads8326Read(A0_CMD_t*);

};

#endif // PROTOCOL_H
