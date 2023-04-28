
#ifndef COMM_SERIALPORT_H
#define COMM_SERIALPORT_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>


class Comm_SerialPort
{
public:
    Comm_SerialPort();
    int SerialInit();

    QStringList GetSerialPortNo();
    QSerialPort *serial_port;
};

#endif // COMM_SERIALPORT_H
