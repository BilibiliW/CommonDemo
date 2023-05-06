#include <QDateTime>
#include <QTableWidget>
#include <QHeaderView>
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

/***********************************************************************************
 * @brief 实时数据窗口
 * @par
 * None
 * @retval
 **********************************************************************************/
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

/***********************************************************************************
 * @brief 实时数据窗口内容锁定和解锁
 * @par
 * None
 * @retval
 **********************************************************************************/
void MainWindow::on_pushButton_LockRealTimeWindows_clicked()
{
    if(realtime_show_lock == false){
        realtime_show_lock = true;
        ui->pushButton_LockRealTimeWindows->setText("Unlock");
    }
    else{
        realtime_show_lock = false;
        ui->pushButton_LockRealTimeWindows->setText("Lock");
    }
}

/***********************************************************************************
 * @brief 清空实时数据窗口数据
 * @par
 * None
 * @retval
 **********************************************************************************/
void MainWindow::on_pushButton_CleanRealTimeWindows_clicked()
{
    ui->textEdit_RealTimeCommunicateData->setText("");
}



int32_t MainWindow::JsonObjGetValue(QJsonObject jsonObj, QString keyName, QJsonValue *value){
    QStringList jsonObjKeys = jsonObj.keys();
    for(auto jsonObjKey : jsonObjKeys){
        if(QString::compare(keyName, jsonObjKey) == 0){
            *value = jsonObj.value(jsonObjKey);
            return 0;
        }
    }
    return -1;

//    QStringList jsonObjKeys = jsonObj.keys();
//    for(auto jsonObjKey : jsonObjKeys){
//        if(QString::compare(keyName, jsonObjKey) == 0){
//            *value = jsonObj.value(jsonObjKey);
//            return 0;
//        }
//    }
    //    return -1;
}

int32_t MainWindow::JsonArrGetValue(QJsonArray jsonArr, QString keyName, QJsonValue *value)
{
    return 0;
}

int32_t MainWindow::JsonObjGetParam(QJsonObject jsonObj, QJsonValue *value){
    QJsonValue access;
    if(JsonObjGetValue(jsonObj, "access", &access) < 0){
        qDebug() << "not find key access!";
        return -1;
    }

    QString keyName;
    if(QString::compare(access.toString(), "R") || QString::compare(access.toString(), "RW")){
        keyName = "Read";
    }
    else{
        keyName = "Write";
    }

    QJsonValue readOrWrite;

    if(JsonObjGetValue(jsonObj, keyName, &readOrWrite) < 0){
        qDebug() << "not find key readOrWrite!";
        return -1;
    }

    QJsonValue parameter;
    if(JsonObjGetValue(readOrWrite.toObject(), "parameter", &parameter) < 0){
        qDebug() << "not find key parameter!";
        return -1;
    }
    QJsonArray parameterArr = parameter.toArray();

    return parameterArr.count();
}



void MainWindow::CreateCmdModTable(QTableWidget *tableCmdMod, QJsonObject deviceInfoObj){
    QJsonValue access;
    if(JsonObjGetValue(deviceInfoObj, "access", &access) < 0){
        qDebug() << "not find key access!";
        return;
    }

    QJsonValue parameter;
    int parameterCount = JsonObjGetParam(deviceInfoObj, &parameter);
    if(parameterCount <= 0){
        qDebug() << "parameter count <= 0 !";
        return;
    }
    int rowCount = tableCmdMod->rowCount();
    tableCmdMod->setRowCount(rowCount+parameterCount);
    for(int i = 0; i < parameterCount; i++){
        QTableWidgetItem *item = new QTableWidgetItem("liu");
        tableCmdMod->setItem(rowCount+i, 12, item);
    }
}

int32_t MainWindow::TableWidgetSetComboBox(QComboBox* comboBox, QString comboBoxText){
    for(int i = 0; i < comboBox->count(); i++){
        if(QString::compare(comboBox->itemText(i), comboBoxText) == 0){
            comboBox->setCurrentIndex(i);
        }
    }

    return 0;
}

void MainWindow::CreateCmdModTable(void){
    QList<QString> keyList = tableMap.keys();//存放的就是QMap的key值
    for(int i=0;i<keyList.size();i++)
    {
        QString groupName = keyList.at(i);
        QTableWidget *tab = tableMap.value(groupName);
        qDebug()<<"tableMap: "+groupName;

        QList<A0_CMD_t>* cmdGroupList = (this->protocol.A0_CmdMod.value(groupName));

        for(int i = 0; i < cmdGroupList->count(); i++){

            A0_CMD_t A0Cmd = cmdGroupList->at(i);
            int rowCount = tab->rowCount();
            tab->setRowCount(rowCount + A0Cmd.dataCount);

            QTableWidgetItem *item = new QTableWidgetItem(A0Cmd.cmdName);
            tab->setItem(rowCount, 0, item);
            tab->setSpan(rowCount, 0, A0Cmd.dataCount, 1);

            QComboBox *comboBoxCmdType = new QComboBox();
            QStringList cmdTypeList = {"A0", "A1", "A2", "A3"};
            comboBoxCmdType->addItems(cmdTypeList);
            tab->setCellWidget(rowCount, 1, comboBoxCmdType);
            tab->setSpan(rowCount, 1, A0Cmd.dataCount, 1);
            TableWidgetSetComboBox(comboBoxCmdType, A0Cmd.cmdType);

            QTableWidgetItem *item2 = new QTableWidgetItem(QString::number(A0Cmd.len));
            tab->setItem(rowCount, 2, item2);
            tab->setSpan(rowCount, 2, A0Cmd.dataCount, 1);

            QTableWidgetItem *item3 = new QTableWidgetItem(QString::number(A0Cmd.originAddr));
            tab->setItem(rowCount, 3, item3);
            tab->setSpan(rowCount, 3, A0Cmd.dataCount, 1);

            qDebug()<<"originAddr:"+(QString::number(A0Cmd.originAddr));

            QTableWidgetItem *item4 = new QTableWidgetItem(QString::number(A0Cmd.targetAddr));
            tab->setItem(rowCount, 4, item4);
            tab->setSpan(rowCount, 4, A0Cmd.dataCount, 1);

            QTableWidgetItem *item5 = new QTableWidgetItem(QString::number(A0Cmd.mainCmdID));
            tab->setItem(rowCount, 5, item5);
            tab->setSpan(rowCount, 5, A0Cmd.dataCount, 1);

            QTableWidgetItem *item6 = new QTableWidgetItem(QString::number(A0Cmd.subCmdID));
            tab->setItem(rowCount, 6, item6);
            tab->setSpan(rowCount, 6, A0Cmd.dataCount, 1);

            for(int i = 0; i < A0Cmd.unit.count(); i++){
                QComboBox *comboBoxDataType = new QComboBox();
                QStringList dataTypeList = {"bool", "uint8_t", "int8_t", "uint16_t", "int16_t", "uint32_t", "int32_t", "uint64_t", "int64_t", "float", "double", "string"};
                comboBoxDataType->addItems(dataTypeList);
                tab->setCellWidget(rowCount + i, 7, comboBoxDataType);
                TableWidgetSetComboBox(comboBoxDataType, A0Cmd.dataType.at(i));

                QString str = A0Cmd.unit.at(i);
                qDebug()<<"A0Cmd.unit :"+str;
                QTableWidgetItem *itemDataValue = new QTableWidgetItem("");
                tab->setItem(rowCount + i, 8, itemDataValue);

                QTableWidgetItem *itemUnit = new QTableWidgetItem(A0Cmd.unit.at(i));
                tab->setItem(rowCount + i, 9, itemUnit);
            }

//            QPushButton *btnRead = new QPushButton("读");
//            tab->setCellWidget(rowCount, 10, btnRead);

            QPushButton *btnRead = new QPushButton("读");
            QPushButton *btnWrite = new QPushButton("写");

            QWidget *widgetReadWrite = new QWidget();
            QHBoxLayout *layoutReadWrite = new QHBoxLayout(widgetReadWrite);
            layoutReadWrite->addWidget(btnRead);
            layoutReadWrite->addWidget(btnWrite);
            layoutReadWrite->sizeHint();

            tab->setCellWidget(rowCount, 10, widgetReadWrite);
            tab->setSpan(rowCount, 10, A0Cmd.dataCount, 1);

        }

    }
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
/***********************************************************************************
 * @brief 根据Key名查找QJsonObject第一级对应成员，并赋值给*value
 * @par jsonObj
 * None
 * @par keyName
 * None
 * @par *value
 * None
 * @retval
 **********************************************************************************/
int32_t MainWindow::JsonObjGetDirectChildMemberValue(QJsonObject jsonObj, QString keyName, QJsonValue *value)
{
    QStringList jsonObjKeys = jsonObj.keys();
    for(auto jsonObjKey : jsonObjKeys){
        if(QString::compare(keyName, jsonObjKey) == 0){
            *value = jsonObj.value(jsonObjKey);
            return 0;
        }
    }
    return -1;
}
/***********************************************************************************
 * @brief 解析A0Cmd QJsonObject并赋值到*A0_Cmd中
 * @par A0_CmdObj
 * None
 * @par *A0_Cmd
 * None
 * @retval
 **********************************************************************************/
int32_t MainWindow::AsignA0CmdFromJsonObj(QJsonObject A0_CmdObj, A0_CMD_t *A0_Cmd){
    A0_Cmd->originAddr = this->protocol.board.originAddr;
    A0_Cmd->targetAddr = this->protocol.board.targetAddr;

    QStringList A0_CmdKeys = A0_CmdObj.keys();
    for(auto A0_CmdKey : A0_CmdKeys){
//        if(QString::compare("group", A0_CmdKey) == 0){
//            A0_Cmd->cmdGroup = A0_CmdObj.value(A0_CmdKey);
//        }
        if(QString::compare("cmdName", A0_CmdKey) == 0){
            A0_Cmd->cmdName = A0_CmdObj.value(A0_CmdKey).toString();
        }
        else if(QString::compare("cmdType", A0_CmdKey) == 0){
            A0_Cmd->cmdType = A0_CmdObj.value(A0_CmdKey).toString();
        }
        else if(QString::compare("access", A0_CmdKey) == 0){
            A0_Cmd->access = A0_CmdObj.value(A0_CmdKey).toString();
        }
        else if(QString::compare("mainCmdID", A0_CmdKey) == 0){
            A0_Cmd->mainCmdID = A0_CmdObj.value(A0_CmdKey).toInt();
        }
        else if(QString::compare("subCmdID", A0_CmdKey) == 0){
            A0_Cmd->subCmdID = A0_CmdObj.value(A0_CmdKey).toInt();
        }
        else if(QString::compare("desp", A0_CmdKey) == 0){
            A0_Cmd->descrip = A0_CmdObj.value(A0_CmdKey).toString();
        }
        else if(QString::compare("dataType", A0_CmdKey) == 0){
            QJsonArray dataTypeArr = A0_CmdObj.value(A0_CmdKey).toArray();
            QStringList dataTypeList;
            for(int i = 0; i < dataTypeArr.count(); i++){
                QString str = dataTypeArr.at(i).toString();
                dataTypeList.append(str);
            }
            A0_Cmd->dataType = dataTypeList;
            A0_Cmd->dataCount = dataTypeArr.count();
        }
        else if(QString::compare("unit", A0_CmdKey) == 0){
            QJsonArray unitArr = A0_CmdObj.value(A0_CmdKey).toArray();
            QStringList unitList;
            for(int i = 0; i < unitArr.count(); i++){
                QString str = unitArr.at(i).toString();
                unitList.append(str);
            }
            A0_Cmd->unit = unitList;
        }
        else if(QString::compare("lowLimit", A0_CmdKey) == 0){
            QJsonArray lowLimitArr = A0_CmdObj.value(A0_CmdKey).toArray();
            QStringList lowLimitList;
            for(int i = 0; i < lowLimitArr.count(); i++){
                QString str = lowLimitArr.at(i).toString();
                lowLimitList.append(str);
            }
            A0_Cmd->lowLimit = lowLimitList;
        }
        else if(QString::compare("upLimit", A0_CmdKey) == 0){
            QJsonArray upLimitArr = A0_CmdObj.value(A0_CmdKey).toArray();
            QStringList upLimitList;
            for(int i = 0; i < upLimitArr.count(); i++){
                QString str = upLimitArr.at(i).toString();
                upLimitList.append(str);
            }
            A0_Cmd->upLimit = upLimitList;
        }
    }
    return 0;
}
/***********************************************************************************
 * @brief 解析A0Cmd数组里的CmdObj成员，将每个CmdObj解析后的数据赋值给A0_CMD_t，
 *        并插入A0_CmdMod->A0CmdGroupList中
 * @par
 * None
 * @retval
 **********************************************************************************/
int32_t MainWindow::ParseA0Cmd(QJsonValue A0CmdArrValue)
{
    QJsonArray A0CmdArr =  A0CmdArrValue.toArray();
    for(int i = 0; i < A0CmdArr.count(); i++){
        QJsonObject A0CmdObj = A0CmdArr.at(i).toObject();
        QJsonValue groupNameValue;
        if(JsonObjGetDirectChildMemberValue(A0CmdObj, "groupName", &groupNameValue) < 0){
            qDebug() << "not find key groupName!";
            return -1;
        }

        QString strGroupName = groupNameValue.toString();
        QList<A0_CMD_t>* A0CmdGroupList = this->protocol.A0_CmdMod.value(strGroupName);

        A0_CMD_t A0Cmd;
        A0Cmd.cmdGroup = strGroupName;
        A0Cmd.originAddr = this->protocol.board.originAddr;
        A0Cmd.targetAddr = this->protocol.board.targetAddr;

        AsignA0CmdFromJsonObj(A0CmdObj, &A0Cmd);

        A0CmdGroupList->append(A0Cmd);

    }
}
/***********************************************************************************
 * @brief 双击QListWidget里的板卡名生成QTabWidget协议表
 * @par
 * None
 * @retval
 **********************************************************************************/
void MainWindow::on_listWidget_Device_doubleClicked(const QModelIndex &index)
{
    QString device_name = ui->listWidget_Device->currentItem()->text();
    qDebug()<<"index change"+device_name;
    if(this->protocol.boardTab.isEmpty() != true){
        qDebug()<<"index change"+device_name+"has already create, skip";
        return;
    }
    QTabWidget *protocolTabWidget = new QTabWidget();
    this->protocol.boardTab.append(protocolTabWidget);
    protocolTabWidget->setParent(this);
    protocolTabWidget->setGeometry(120, 180, 901, 281);
    protocolTabWidget->setMovable(true);
    QStringList keys = json_root.keys();

    QJsonValue cmdGroup;
    if(JsonObjGetDirectChildMemberValue(json_root, "cmdGroup", &cmdGroup)<0){
        qDebug()<<"not found cmdGroup";
        return;
    }

    QJsonArray cmdGroupArr = cmdGroup.toArray();
    for(int i = 0; i < cmdGroupArr.count(); ++i){
        QString cmdGroupMember = cmdGroupArr.at(i).toString();
        this->protocol.board.cmdGroup.append(cmdGroupMember);
        qDebug() <<"cmdGroupMember: "+cmdGroupMember;

        QTableWidget *tab = new QTableWidget;
        this->protocol.cmd_mod_table.append(tab);
        protocolTabWidget->addTab(tab, cmdGroupMember);
        QStringList tableHeadStrList = {"指令名称","指令类型","长度", "源地址", "目的地址", "主命令", "子命令", "类型", "值", "单位", "操作", "说明"};
        tab->setColumnCount(12);
        tab->setHorizontalHeaderLabels(tableHeadStrList);
        tab->horizontalHeader()->setStyleSheet(
            "QHeaderView::section{"
            "border-top:0px solid #E5E5E5;"
            "border-left:0px solid #E5E5E5;"
            "border-right:0.5px solid #E5E5E5;"
            "border-bottom: 0.5px solid #E5E5E5;"
            "background-color:white;"
            "padding:4px;"
            "}"
            );
        tableMap.insert(cmdGroupMember, tab);

        QList<A0_CMD_t> *A0_CmdList = new QList<A0_CMD_t>;
        this->protocol.A0_CmdMod.insert(cmdGroupMember, A0_CmdList);
    }

    QJsonValue A0CmdValue;
    if(JsonObjGetDirectChildMemberValue(json_root, "A0Cmd", &A0CmdValue)<0){
        qDebug()<<"not found A0Cmd";
        return;
    }

    ParseA0Cmd(A0CmdValue);
    CreateCmdModTable();

    protocolTabWidget->show();
}

/***********************************************************************************
 * @brief 加载Json文件
 *        在QListWidget里根据板卡名新增一行板卡记录
 * @par
 * None
 * @retval
 **********************************************************************************/
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
        json_root = jsonDocu.object();
        QJsonValue boardName;
        if(JsonObjGetDirectChildMemberValue(json_root, "boardName", &boardName)<0){
            QMessageBox::question(this,
                                  tr("Info"),
                                  tr("Json文件加载异常，未找到boardName，请检查！"),
                                  QMessageBox::Ok,
                                  QMessageBox::Ok);
        }
        this->protocol.board.boardName = boardName.toString();

        QJsonValue originAddress;
        if(JsonObjGetDirectChildMemberValue(json_root, "originAddress", &originAddress)<0){
            qDebug()<<"not found originAddress";
        }
        this->protocol.board.originAddr = originAddress.toInt();

        QJsonValue targetAddress;
        if(JsonObjGetDirectChildMemberValue(json_root, "targetAddress", &targetAddress)<0){
            qDebug()<<"not found targetAddress";
        }
        this->protocol.board.targetAddr = targetAddress.toInt();

//        QJsonValue cmdGroup;
//        if(JsonObjGetDirectChildMemberValue(json_root, "cmdGroup", &cmdGroup)<0){
//            qDebug()<<"not found cmdGroup";
//        }

        QListWidgetItem *itemBoard = new QListWidgetItem();
        ui->listWidget_Device->addItem(itemBoard);
        itemBoard->setText(boardName.toString());
    }
    else{
        QMessageBox::question(this,
                              tr("Info"),
                              tr("Json文件格式异常，请检查！"),
                              QMessageBox::Ok,
                              QMessageBox::Ok);
    }
}
