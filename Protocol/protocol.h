
#ifndef PROTOCOL_H
#define PROTOCOL_H


#include <QWidget>
#include <QTableWidget>

typedef struct{
    QString cmdName;
    QString cmdType;
    uint16_t len;
    uint16_t originAddr;
    uint16_t targetAddr;
    uint16_t mainCmdID;
    uint16_t subCmdID;
    QStringList dataType;
    QStringList unit;
    QStringList dataValue;
    QStringList lowLimit;
    QStringList upLimit;
    QStringList defaultValue;
    QString descrip;

    uint16_t dataCount;
    QString cmdGroup;
    QString access;
}A0_CMD_t;

typedef struct{
    QString cmdName;

}A0_CMD_MOD_t;
class Protocol : public QWidget
{
    Q_OBJECT
public:
    explicit Protocol(QWidget *parent = nullptr);
    QList<QTableWidget*> cmd_mod_table;
    QList<QTabWidget*> device_tab;

    A0_CMD_t A0_CMD;
    QList<A0_CMD_t> A0_CmdList;
//    QList<A0_Cmd*> A0_CmdMod;
    QMap<QString, QList<A0_CMD_t>> A0_CmdMod;
signals:

};

#endif // PROTOCOL_H
