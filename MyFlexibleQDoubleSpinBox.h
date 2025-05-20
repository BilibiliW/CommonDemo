#ifndef MYFLEXIBLEQDOUBLESPINBOX_H
#define MYFLEXIBLEQDOUBLESPINBOX_H
#include <QDoubleSpinBox>

// #include <QSpinBox>
// #include <QApplication>
// #include <QVBoxLayout>
#include <QWidget>
#include <QLocale>
#include <QLineEdit>
#include <QMouseEvent>
#include <QDebug>
class MyFlexibleQDoubleSpinBox : public QDoubleSpinBox
{
    Q_OBJECT
public:
    MyFlexibleQDoubleSpinBox(QWidget *parent = nullptr) : QDoubleSpinBox(parent){
        setLocale(QLocale::English);
        setRange(-3.000000, 3.000000);
        setDecimals(6);
        setSingleStep(1);
        setValue(0.000000);
        selectedDigit = -1;
        InitCursorPos();
        setSuffix("A");
        // 给 QLineEdit 安装事件过滤器
        lineEdit()->installEventFilter(this);
    }

protected:
    bool eventFilter(QObject *obj, QEvent *event) override{
        if(obj == lineEdit() && event->type() == QEvent::MouseButtonPress){
            QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
            handleMousePress(mouseEvent);
            return false; // 继续处理原事件
        }
        return QDoubleSpinBox::eventFilter(obj, event);
    }

    void keyPressEvent(QKeyEvent *event) override{
        QString text = lineEdit()->text();
        int decimalIndex = text.indexOf('.');
        uint8_t negative_value = 0;

        if(text.mid(0, 1) == '-')
            negative_value = 1;

        if(event->key() == Qt::Key_Left){
            selectedDigit++;
            if(selectedDigit == 0)
                selectedDigit++;

            if(selectedDigit > decimalIndex - negative_value)
                selectedDigit = decimalIndex - negative_value;

            lineEdit()->setCursorPosition(-(selectedDigit) + decimalIndex + 1);
        }
        else if(event->key() == Qt::Key_Right){
            selectedDigit--;
            if(selectedDigit == 0)
                selectedDigit--;

            if(selectedDigit < -decimals())
                selectedDigit = -decimals();


            lineEdit()->setCursorPosition(-(selectedDigit) + decimalIndex + 1);
        }
        else {
            // 对于其他按键，调用基类的处理方法
            QDoubleSpinBox::keyPressEvent(event);
        }
    }

    void InitCursorPos(void){
        QString text = lineEdit()->text();
        int decimalIndex = text.indexOf('.');
        lineEdit()->setCursorPosition(abs(selectedDigit) + decimalIndex + 1);
    }

    void handleMousePress(QMouseEvent *event){
        QLineEdit *edit = lineEdit();
        QPoint pos = event->pos();
        QString text = edit->text();
        QFontMetrics metrics(edit->font());
        int cursorPos = 0;
        int totalWidth = 0;
        uint8_t negative_value = 0;

        if(text.mid(0, 1) == '-')
            negative_value = 1;

        int i = 0;
        for(i = 0; i < text.length(); ++i){
            totalWidth += metrics.horizontalAdvance(text[i]);
            if(totalWidth > pos.x()){
                cursorPos = i;
                break;
            }
        }

        if(i >= text.length())
            cursorPos = text.length();

        int decimalIndex = text.indexOf('.');
        if(decimalIndex == -1){
            selectedDigit = cursorPos;
        }
        else{

            selectedDigit = decimalIndex - cursorPos + 1;

            if(selectedDigit == 0)
                selectedDigit++;

        }

        if(selectedDigit < -decimals()){
            selectedDigit = -decimals();
        }
        if(selectedDigit > decimalIndex - negative_value){
            selectedDigit = decimalIndex - negative_value;
        }

        lineEdit()->setCursorPosition(-selectedDigit + decimalIndex + 1);

        qDebug()<<"decimalIndex:" + QString::number(decimalIndex) + "   cursorPos:" + QString::number(cursorPos) + "    selectedDigit:" + QString::number(selectedDigit);
    }

    void stepBy(int steps) override{
        if (selectedDigit <= 0){
            double currentValue = value();
            // qDebug()<<"currentValue: " + QString::number(currentValue);
            double factor = qPow(10, selectedDigit);
            currentValue += steps * singleStep() * factor;
            setValue(currentValue);
            lineEdit()->setText(textFromValue(currentValue));

            QString text = lineEdit()->text();
            int decimalIndex = text.indexOf('.');
            lineEdit()->setCursorPosition(-(selectedDigit) + decimalIndex + 1);
        }
        else{
            double currentValue = value();
            double factor = qPow(10, selectedDigit - 1);
            currentValue += steps * singleStep() * factor;
            setValue(currentValue);

            lineEdit()->setText(textFromValue(value()));

            QString text = lineEdit()->text();
            int decimalIndex = text.indexOf('.');
            lineEdit()->setCursorPosition(-(selectedDigit) + decimalIndex + 1);
        }
    }

    QString textFromValue(double value) const override{
        return QLocale().toString(value, 'f', decimals());
    }

    double valueFromText(const QString &text) const override{
        QString cleanedText = text;
        cleanedText.remove(",");
        cleanedText.remove("A");
        return cleanedText.toDouble();
    }

private:
    int selectedDigit;
};

#endif // MYFLEXIBLEQDOUBLESPINBOX_H
