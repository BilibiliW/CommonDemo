#include "FlexibleQDoubleSpinBox.h"
#include "ui_FlexibleQDoubleSpinBox.h"

FlexibleQDoubleSpinBox::FlexibleQDoubleSpinBox(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FlexibleQDoubleSpinBox)
{
    ui->setupUi(this);
    myQDoubleSpinBox = new MyFlexibleQDoubleSpinBox(this);

    connect(myQDoubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(SlotInnerFlexibleSpinBoxValueChange(double)));
    connect(myQDoubleSpinBox, SIGNAL(editingFinished()), this, SLOT(SlotInnerUpdateFlexibleSpinBoxValue()));
}

FlexibleQDoubleSpinBox::~FlexibleQDoubleSpinBox()
{
    delete ui;
}

double FlexibleQDoubleSpinBox::GetValue()
{
    return myQDoubleSpinBox->value();
}

void FlexibleQDoubleSpinBox::SetValue(double value)
{
    myQDoubleSpinBox->setValue(value);
    // qDebug()<<"SetValue value:" + QString::number(value, 'f');
}

void FlexibleQDoubleSpinBox::SlotExternUpdateFlexibleSpinBoxValue(double value)
{
    myQDoubleSpinBox->setValue(value);
    qDebug()<<"SlotExternUpdateFlexibleSpinBoxValue value:" + QString::number(value, 'f');
}

void FlexibleQDoubleSpinBox::SlotInnerFlexibleSpinBoxValueChange(double value)
{
    emit SignalFlexibleSpinBoxValueChange(value);
    // qDebug()<<"SlotInnerFlexibleSpinBoxValueChange emit:" + QString::number(value, 'f');
}

void FlexibleQDoubleSpinBox::SlotInnerUpdateFlexibleSpinBoxValue()
{
    double value = myQDoubleSpinBox->value();
    emit SignalUpdateFlexibleSpinBoxValue(value);
    qDebug()<<"SlotInnerUpdateFlexibleSpinBoxValue emit:" + QString::number(value, 'f');
}
