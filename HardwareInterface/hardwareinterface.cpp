
#include "hardwareinterface.h"

HardwareInterface::HardwareInterface(QWidget *parent)
    : QWidget{parent}
{
    HardwareInterfaceInit();
}

void HardwareInterface::HardwareInterfaceInit(){
    this->comm_type = "";
}
