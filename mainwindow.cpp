#include <QDateTime>
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serial_comm = NULL;
    realtime_show_lock = false;

    int index = ui->Communication->currentIndex();
    QString tab_text = ui->Communication->tabText(index);
    qDebug("Communication:%d", index);
    qDebug()<<tab_text;
    hard_interface.comm_type = tab_text;
    CommTypeUpdate(tab_text);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CommTypeUpdate(QString tabName)
{
    if(QString::compare(hard_interface.comm_type, tabName) != 0){
        return;
    }

    if(QString::compare(tabName, "Serial") == 0){

        if(serial_comm == NULL){
            serial_comm = new Comm_SerialPort();
            connect(serial_comm->serial_port, &QSerialPort::readyRead, this, &MainWindow::RecvData);
        }
        if(serial_comm == NULL){
            qDebug("new Comm_SerialPort ERR!!!");
            return;
        }

        QStringList portNo = serial_comm->GetSerialPortNo();
        ui->comboBox_SerialPortNo->clear();
        ui->comboBox_SerialPortNo->addItems(portNo);

        ui->comboBox_SerialBaudRate->clear();
        ui->comboBox_SerialBaudRate->addItem(QStringLiteral("9600"), QSerialPort::Baud9600);
        ui->comboBox_SerialBaudRate->addItem(QStringLiteral("19200"), QSerialPort::Baud19200);
        ui->comboBox_SerialBaudRate->addItem(QStringLiteral("115200"), QSerialPort::Baud115200);
        ui->comboBox_SerialBaudRate->addItem(QStringLiteral("460800"), QSerialPort::Baud460800);

        ui->comboBox_SerialDateBits->clear();
        ui->comboBox_SerialDateBits->addItem(QStringLiteral("5"), QSerialPort::Data5);
        ui->comboBox_SerialDateBits->addItem(QStringLiteral("6"), QSerialPort::Data6);
        ui->comboBox_SerialDateBits->addItem(QStringLiteral("7"), QSerialPort::Data7);
        ui->comboBox_SerialDateBits->addItem(QStringLiteral("8"), QSerialPort::Data8);

        ui->comboBox_SerialStopBits->clear();
        ui->comboBox_SerialStopBits->addItem(QStringLiteral("1"), QSerialPort::OneStop);
        ui->comboBox_SerialStopBits->addItem(QStringLiteral("1.5"), QSerialPort::OneAndHalfStop);
        ui->comboBox_SerialStopBits->addItem(QStringLiteral("2"), QSerialPort::TwoStop);

        ui->comboBox_SerialParity->clear();
        ui->comboBox_SerialParity->addItem(QStringLiteral("None"), QSerialPort::NoParity);
        ui->comboBox_SerialParity->addItem(QStringLiteral("Odd"), QSerialPort::OddParity);
        ui->comboBox_SerialParity->addItem(QStringLiteral("Even"), QSerialPort::EvenParity);
        ui->comboBox_SerialParity->addItem(QStringLiteral("Space"), QSerialPort::SpaceParity);
        ui->comboBox_SerialParity->addItem(QStringLiteral("Mark"), QSerialPort::MarkParity);

        ui->comboBox_SerialFlowCtrl->clear();
        ui->comboBox_SerialFlowCtrl->addItem(QStringLiteral("None"), QSerialPort::NoFlowControl);
        ui->comboBox_SerialFlowCtrl->addItem(QStringLiteral("Hardware"), QSerialPort::HardwareControl);
        ui->comboBox_SerialFlowCtrl->addItem(QStringLiteral("Software"), QSerialPort::SoftwareControl);
    }
    else if(QString::compare(tabName, "CAN") == 0){

    }
    else if(QString::compare(tabName, "Net") == 0){

    }


}



void MainWindow::on_Communication_currentChanged(int index)
{
    QString tab_text = ui->Communication->tabText(index);
    qDebug("Communication: %d", index);

    if(QString::compare(hard_interface.comm_type, tab_text) != 0){
        hard_interface.comm_type = tab_text;



    }

}


void MainWindow::on_pushButton_SerialConnect_clicked()
{
    static bool connected = false;

    if(connected == false){
        serial_comm->serial_port->setBaudRate(ui->comboBox_SerialBaudRate->currentText().toInt());
        serial_comm->serial_port->setDataBits(QSerialPort::DataBits(ui->comboBox_SerialDateBits->itemData(ui->comboBox_SerialDateBits->currentIndex()).toInt()));
        serial_comm->serial_port->setStopBits(QSerialPort::StopBits(ui->comboBox_SerialStopBits->itemData(ui->comboBox_SerialStopBits->currentIndex()).toInt()));
        serial_comm->serial_port->setParity(QSerialPort::Parity(ui->comboBox_SerialParity->itemData(ui->comboBox_SerialParity->currentIndex()).toInt()));
        serial_comm->serial_port->setFlowControl(QSerialPort::FlowControl(ui->comboBox_SerialFlowCtrl->itemData(ui->comboBox_SerialFlowCtrl->currentIndex()).toInt()));
        serial_comm->serial_port->setPortName(ui->comboBox_SerialPortNo->currentText());

        qDebug("CurrentNotConnect:ready to connect");
        if(serial_comm->serial_port->open(QIODevice::ReadWrite)){
            connected = true;
            ui->comboBox_SerialPortNo->setEnabled(false);
            ui->comboBox_SerialBaudRate->setEnabled(false);
            ui->comboBox_SerialDateBits->setEnabled(false);
            ui->comboBox_SerialStopBits->setEnabled(false);
            ui->comboBox_SerialParity->setEnabled(false);
            ui->comboBox_SerialFlowCtrl->setEnabled(false);
            ui->pushButton_SerialConnect->setText("断开");

            ui->Communication->setTabEnabled(1, false);
            ui->Communication->setTabEnabled(2, false);
            qDebug("try connect successful");
        }
        else{
            connected = false;
            serial_comm->serial_port->close();

            ui->comboBox_SerialPortNo->setEnabled(true);
            ui->comboBox_SerialBaudRate->setEnabled(true);
            ui->comboBox_SerialDateBits->setEnabled(true);
            ui->comboBox_SerialStopBits->setEnabled(true);
            ui->comboBox_SerialParity->setEnabled(true);
            ui->comboBox_SerialFlowCtrl->setEnabled(true);
            ui->pushButton_SerialConnect->setText("连接");

            ui->Communication->setTabEnabled(1, true);
            ui->Communication->setTabEnabled(2, true);
            qDebug("try connect failed");
        }
    }
    else{
        serial_comm->serial_port->close();
        connected = false;

        ui->comboBox_SerialPortNo->setEnabled(true);
        ui->comboBox_SerialBaudRate->setEnabled(true);
        ui->comboBox_SerialDateBits->setEnabled(true);
        ui->comboBox_SerialStopBits->setEnabled(true);
        ui->comboBox_SerialParity->setEnabled(true);
        ui->comboBox_SerialFlowCtrl->setEnabled(true);
        ui->pushButton_SerialConnect->setText("连接");

        ui->Communication->setTabEnabled(1, true);
        ui->Communication->setTabEnabled(2, true);
        qDebug("CurrentConnected\nDisconnect now");
    }
}

void MainWindow::RecvData()
{    
    QByteArray str_arr = serial_comm->serial_port->readAll();

    if(realtime_show_lock == true)
        return;

    QString str = str_arr.toHex().toUpper();
    uint32_t n = str.length();
    while(n-2 > 0){
        n = n-2;
        str.insert(n, " ");
    }
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date =current_date_time.toString("hh:mm:ss.zzz");

    QTextCursor cursor=ui->textEdit_RealTimeCommunicateData->textCursor();
    cursor.movePosition(QTextCursor::End);
    ui->textEdit_RealTimeCommunicateData->setTextCursor(cursor);
    ui->textEdit_RealTimeCommunicateData->insertPlainText(current_date + ": " + str + '\n');
}


void MainWindow::on_pushButton_LockRealTimeWindows_clicked()
{
    static bool connected = false;

    if(realtime_show_lock == false){
        realtime_show_lock = true;
        ui->pushButton_LockRealTimeWindows->setText("Unlock");
    }
    else{
        realtime_show_lock = false;
        ui->pushButton_LockRealTimeWindows->setText("Lock");
    }

}


void MainWindow::on_pushButton_CleanRealTimeWindows_clicked()
{
    ui->textEdit_RealTimeCommunicateData->setText("");
}

