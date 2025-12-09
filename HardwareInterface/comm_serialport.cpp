
#include "comm_serialport.h"
#include <QDebug>

QQueue<QByteArray> SendQueue;
Comm_SerialPort::Comm_SerialPort(QObject *parent) : QObject(parent)
{
    qDebug() << "main thread" << QThread::currentThread();

    // subSendThread =  new QThread;
    serial_port = new QSerialPort(this);
    SerialInit();
    // connect(subSendThread, SIGNAL(started()), this, SLOT(subSendThreadRun()), Qt::DirectConnection);


    // this->moveToThread(subSendThread);
    // subSendThread->start();

    // qDebug() << "QSerialPort thread" << serial_port->thread();
    // qDebug() << "Comm_SerialPort thread" << this->QObject::thread();
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

void Comm_SerialPort::subSendThreadRun()
{
    QByteArray sendFrame;
    while(1){
        if(!SendQueue.isEmpty()){
            sendFrame = SendQueue.dequeue();
            this->serial_port->write(sendFrame);
            // UpdateTextLine(sendFrame, false);
            QThread::msleep(60);
        }
        QThread::msleep(1);
    }
}
