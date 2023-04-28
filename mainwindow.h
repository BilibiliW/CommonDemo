
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    bool realtime_show_lock;
private slots:
    void CommTypeUpdate(QString);

    void on_Communication_currentChanged(int index);

    void on_pushButton_SerialConnect_clicked();

    void RecvData();
    void on_pushButton_LockRealTimeWindows_clicked();

    void on_pushButton_CleanRealTimeWindows_clicked();

private:
    Ui::MainWindow *ui;
    HardwareInterface hard_interface;
};

#endif // MAINWINDOW_H
