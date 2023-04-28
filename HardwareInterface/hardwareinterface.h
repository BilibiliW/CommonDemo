
#ifndef HARDWAREINTERFACE_H
#define HARDWAREINTERFACE_H


#include <QObject>
#include <QWidget>


class HardwareInterface : public QWidget
{
    Q_OBJECT
public:
    explicit HardwareInterface(QWidget *parent = nullptr);

    QString comm_type;

    void HardwareInterfaceInit();
signals:

};

#endif // HARDWAREINTERFACE_H
