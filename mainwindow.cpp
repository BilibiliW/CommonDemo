#include <QDateTime>
#include <QTableWidget>
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
void MainWindow::CreateCmdModTable(QTableWidget *protocolTabWidget, QJsonObject deviceInfoObj, QString group_name){
    QStringList deviceInfoKeys = deviceInfoObj.keys();
    for(auto deviceInfoKey : deviceInfoKeys){
        if(QString::compare("A0Order", deviceInfoKey) == 0){
            QJsonValue A0OrderValue = deviceInfoObj.value(deviceInfoKey);
            QJsonArray A0OrderArr = A0OrderValue.toArray();

//            QStringList A0OrderKeys = A0OrderObj.keys();

            for(int i = 0; i < A0OrderArr.count(); ++i){
                QJsonObject A0OrderSubObj = A0OrderArr.at(i).toObject();
                QStringList A0OrderSubKeys = A0OrderSubObj.keys();
                for(auto A0OrderSubKey : A0OrderSubKeys){

                    if(QString::compare("group", A0OrderSubKey) == 0){
                        if(QString::compare("group", group_name) == 0){
                            qDebug() << A0OrderSubKey <<":CreateCmdModTable "<< A0OrderSubObj.value(A0OrderSubKey);
                        }

                    }
                }
//                if(QString::compare("group", A0OrderArr.at(i).toString()) == 0){
//                    qDebug() << A0OrderArr <<":CreateCmdModTable "<< A0OrderArr.value(A0OrderKey);
//                }
            }

//            for(auto A0OrderKey : A0OrderKeys){

//                if(QString::compare("group", A0OrderKey) == 0){
//                    if(QString::compare("group", group_name) == 0){

//                    }
//                    qDebug() << A0OrderKey <<":CreateCmdModTable "<< A0OrderObj.value(A0OrderKey);
//                }
//            }

        }
    }
//    for(int i = 0; i < this->protocol.cmd_mod_table.count(); i++){
////        protocolTabWidget->addTab(this->protocol.cmd_mod_table.at(i),"tttt");

//    }
}

void MainWindow::on_listWidget_Device_itemSelectionChanged()
{
    QString device_name = ui->listWidget_Device->currentItem()->text();
    qDebug()<<"index change"+device_name;
    if(this->protocol.device_tab.isEmpty() != true){
        qDebug()<<"index change"+device_name+"has already create, skip";
        return;
    }
    QTabWidget *protocolTabWidget = new QTabWidget();
    this->protocol.device_tab.append(protocolTabWidget);
    protocolTabWidget->setParent(this);
    protocolTabWidget->setGeometry(120, 200, 901, 281);
    protocolTabWidget->setMovable(true);
    QStringList keys = json_root.keys();
    for(auto key : keys){
        if(QString::compare("devicesInfo", key) == 0)
        {
            QJsonValue devicesInfoValue = json_root.value(key);

            if(devicesInfoValue.isArray()){
                QJsonArray devicesInfoArr = devicesInfoValue.toArray();
                for(int i = 0; i < devicesInfoArr.count(); ++i){
                    QJsonObject deviceInfoObj = devicesInfoArr.at(i).toObject();
                    QStringList deviceInfoKeys = deviceInfoObj.keys();
                    for(auto deviceInfoKey : deviceInfoKeys){

                        if(QString::compare("groupInfoList", deviceInfoKey) == 0){
                            QJsonValue groupInfoListValue = deviceInfoObj.value(deviceInfoKey);
                            QJsonArray groupInfoListArr = groupInfoListValue.toArray();
                            for(int i = 0; i < groupInfoListArr.count(); ++i){
                                qDebug() << deviceInfoKey <<": "<< groupInfoListArr.at(i).toString();
                                QTableWidget *tab = new QTableWidget;
                                this->protocol.cmd_mod_table.append(tab);
                                protocolTabWidget->addTab(tab, groupInfoListArr.at(i).toString());
                                CreateCmdModTable(tab, deviceInfoObj, groupInfoListArr.at(i).toString());
//                                protocolTabWidget->addTab(groupInfoListArr.at(i).toString());
                            }

                        }
                    }
                }
            }

        }

    }

    protocolTabWidget->show();


}


void MainWindow::on_pushButton_Save_clicked()
{
    QTabWidget *protocolTabWidget = new QTabWidget();
    protocolTabWidget->setParent(this);
//    QWidget* empty = new QWidget(this);
    QTableWidget *tab = new QTableWidget;
    QTableWidget *tab2 = new QTableWidget;
    QTableWidget *tab3 = new QTableWidget;
    this->protocol.cmd_mod_table.append(tab);
    this->protocol.cmd_mod_table.append(tab2);
    this->protocol.cmd_mod_table.append(tab3);
//    protocolTabWidget->setMovable(true);
    protocolTabWidget->setEnabled(true);
    for(int i = 0; i < this->protocol.cmd_mod_table.count(); i++){
        protocolTabWidget->addTab(this->protocol.cmd_mod_table.at(i),"tttt");

    }
//    protocolTabWidget->addTab(tab,"tttt");
//    protocolTabWidget->addTab(tab2,"tttt2");
//    protocolTabWidget->addTab(tab3,"tttt3");
//    protocolTabWidget->setTabText(0,"123d");
    protocolTabWidget->setGeometry(120, 201, 900, 200);

    protocolTabWidget->show();
//    ui->tabWidget->setGeometry(120, 201, 900, 200);
//    ui->tabWidget->addTab(empty,"tttt");

//    QPushButton* buttonTest=new QPushButton();//动态创建按钮
//    buttonTest->setText("手动添加1111111");
//    buttonTest->setParent(this);//设置父控件，有此步骤不需show也可显示
//    buttonTest->setGeometry(120, 201, 900, 200);
//    buttonTest->show();//此步骤显示，如果不设父控件则是悬浮于桌面

}

