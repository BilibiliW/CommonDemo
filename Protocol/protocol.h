
#ifndef PROTOCOL_H
#define PROTOCOL_H


#include <QWidget>
#include <QTableWidget>

class Protocol : public QWidget
{
    Q_OBJECT
public:
    explicit Protocol(QWidget *parent = nullptr);
    QList<QTableWidget*> cmd_mod_table;
    QList<QTabWidget*> device_tab;
signals:

};

#endif // PROTOCOL_H
