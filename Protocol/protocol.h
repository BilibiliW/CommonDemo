
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
    uint16_t head;
    uint16_t len;
    uint16_t originAddr;
    uint16_t targetAddr;
    uint16_t mainCmdID;
    uint16_t subCmdID;
    uint8_t  cmd_RW_Type;
    QStringList dataType;
    QStringList unit;
    QStringList dataValue;
    QStringList lowLimit;
    QStringList upLimit;
    QStringList defaultValue;
    QString descrip;
    char* data;
    uint16_t dataCount;
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


    QByteArray* frame_arr;
    int32_t ProtocolAnalyse(void);

public slots:
    void SubThreadRun();

signals:
    void DialSwRead(A0_CMD_t*);
    void Ads8326Read(A0_CMD_t*);

};

#endif // PROTOCOL_H
