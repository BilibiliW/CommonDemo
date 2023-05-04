
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

#include "./HardwareInterface/hardwareinterface.h"
#include "./HardwareInterface/comm_serialport.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Comm_SerialPort *serial_comm;

    QJsonObject json_root;

    bool realtime_show_lock;
private slots:
    void CommTypeUpdate(QString);

    void on_Communication_currentChanged(int index);

    void on_pushButton_SerialConnect_clicked();

    void RecvData();
    void on_pushButton_LockRealTimeWindows_clicked();

    void on_pushButton_CleanRealTimeWindows_clicked();

    void on_actionImportJson_triggered();

//signals:void listItemClicked(int);

    void on_listWidget_Device_itemSelectionChanged();

    void on_pushButton_Save_clicked();

private:
    Ui::MainWindow *ui;
    HardwareInterface hard_interface;

};

#endif // MAINWINDOW_H
