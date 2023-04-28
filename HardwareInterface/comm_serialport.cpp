
#include "comm_serialport.h"

Comm_SerialPort::Comm_SerialPort()
{
    this->serial_port = new QSerialPort();
    SerialInit();
}

int Comm_SerialPort::SerialInit()
{
    return 0;
}

QStringList Comm_SerialPort::GetSerialPortNo()
{
    QStringList portNo;
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        portNo.append(info.portName());
    }

    return portNo;
}

