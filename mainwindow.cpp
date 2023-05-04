#include <QDateTime>
#include <QFileDialog>
#include <QSettings>
#include <QMessageBox>
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

#include <QLabel>
#include <QCheckBox>
void MainWindow::on_actionImportJson_triggered()
{
    QSettings setting("./Setting.ini", QSettings::IniFormat);  //QSettings能记录一些程序中的信息，下次再打开时可以读取出来
    QString lastPath = setting.value("LastFilePath").toString();  //获取上次的打开路径

    QString fileName = QFileDialog::getOpenFileName(this, QStringLiteral("配置文件"), lastPath, QStringLiteral("json文件(*json);"));
    qDebug()<<fileName;
    if(!fileName.isEmpty())
    {
        setting.setValue("LastFilePath", fileName);  //记录路径到QSetting中保存
    }

    QFile file(fileName);
    QByteArray jsonData;
    if(file.open(QIODevice::ReadOnly)){
        jsonData = file.readAll();
        file.close();
    }

    QJsonDocument jsonDocu = QJsonDocument::fromJson(jsonData);
    if(jsonDocu.isObject()){
//        QJsonObject obj_root = jsonDocu.object();
        json_root = jsonDocu.object();
        QStringList keys = json_root.keys();
        for(auto key : keys){
            QJsonValue value = json_root.value(key);

            if(QString::compare("DeviceList", key) == 0){

                QJsonArray arr = value.toArray();
                for(int i = 0; i < arr.count(); ++i){
                    QListWidgetItem *item = new QListWidgetItem();
                    ui->listWidget_Device->addItem(item);
                    item->setText(arr.at(i).toString());
//                    connect(item, SIGNAL(listItemClicked(int)), this, SLOT(clickedLeftItem(int)));
                }
            }
            if(value.isString()){
                qDebug() << key <<": "<< value.toString();

//                if(qstrcmp("DeviceList", value.toString()) == 0){

//                }
            }
            else if(value.isDouble()){
                qDebug() << key <<": "<< value.toInt();
            }
            else if(value.isArray()){
                QJsonArray arr = value.toArray();
                for(int i = 0; i < arr.count(); ++i){
                    if(arr.at(i).isString()){
                        qDebug() << key <<": "<< arr.at(i).toString();
                    }
                    //这里就不判断是否为其它类型了，因为测试文件已知为字符串，要写也和上面类似，无限套娃
                }
            }
            else if(value.isObject()){
                QJsonObject subObj = value.toObject();
                QStringList subKeys = subObj.keys();
                for(auto subKey : subKeys){
                    QJsonValue subValue = subObj.value(subKey);
                    if(subValue.isString()){
                        qDebug() << subKey <<": "<< subValue.toString();
                    }
                    //这里就不判断是否为其它类型了，因为测试文件已知为字符串，要写也和上面类似，无限套娃
                }
            }
        }
    }
    else{
        QMessageBox::question(this,
                              tr("Info"),
                              tr("Json文件格式异常，请检查！"),
                              QMessageBox::Ok,
                              QMessageBox::Ok);
    }


}


void MainWindow::on_listWidget_Device_itemSelectionChanged()
{
    QString device_name = ui->listWidget_Device->currentItem()->text();
    qDebug()<<"index change"+device_name;
    QTabWidget *protocolTabWidget = new QTabWidget();
    protocolTabWidget->setGeometry(120, 120, 901, 281);

    QStringList keys = json_root.keys();
    for(auto key : keys){
        if(QString::compare("devicesInfo", key) == 0)
        {
            QJsonValue value = json_root.value(key);
//            QJsonObject json_device_info = jsonDocu.object();

            if(value.isArray()){
                QJsonArray arr = value.toArray();
                for(int i = 0; i < arr.count(); ++i){
                    QJsonObject subObj = arr.at(i).toObject();
                    QStringList subKeys = subObj.keys();
                    for(auto subKey : subKeys){
                        QJsonValue subValue = subObj.value(subKey);
                        if(QString::compare("groupInfoList", subKey) == 0){
                            qDebug() << subKey <<": "<< subValue.toString();
                        }
                    }
                }
            }

        }

    }


}

