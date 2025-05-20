#ifndef FLEXIBLEQDOUBLESPINBOX_H
#define FLEXIBLEQDOUBLESPINBOX_H

#include <QWidget>
#include "MyFlexibleQDoubleSpinBox.h"

namespace Ui {
class FlexibleQDoubleSpinBox;
}

class FlexibleQDoubleSpinBox : public QWidget
{
    Q_OBJECT

public:
    explicit FlexibleQDoubleSpinBox(QWidget *parent = nullptr);
    ~FlexibleQDoubleSpinBox();

    double GetValue();
    void SetValue(double value);



signals:
    void SignalFlexibleSpinBoxValueChange(double);
    void SignalUpdateFlexibleSpinBoxValue(double);

public slots:
    void SlotExternUpdateFlexibleSpinBoxValue(double);

private slots:
    void SlotInnerFlexibleSpinBoxValueChange(double);
    void SlotInnerUpdateFlexibleSpinBoxValue();

private:
    Ui::FlexibleQDoubleSpinBox *ui;
    MyFlexibleQDoubleSpinBox *myQDoubleSpinBox;

};

#endif // FLEXIBLEQDOUBLESPINBOX_H
