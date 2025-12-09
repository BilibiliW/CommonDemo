
#ifndef COMM_SERIALPORT_H
#define COMM_SERIALPORT_H

// #include <QWidget>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QQueue>
#include <QThread>

extern  QQueue<QByteArray> SendQueue;
class Comm_SerialPort : public QObject
{
    Q_OBJECT
public:
    // Comm_SerialPort();
    explicit Comm_SerialPort(QObject *parent = 0);
    int SerialInit();

    QStringList GetSerialPortNo();
    QSerialPort *serial_port;
    QThread* subSendThread;

public slots:
    void subSendThreadRun();
};

#endif // COMM_SERIALPORT_H
