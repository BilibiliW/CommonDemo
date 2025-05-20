QT       += core gui
QT       += network
QT       += serialbus

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    FlexibleQDoubleSpinBox.cpp \
    HardwareInterface/comm_net.cpp \
    HardwareInterface/comm_serialport.cpp \
    HardwareInterface/hardwareinterface.cpp \
    MyFlexibleQDoubleSpinBox.cpp \
    Protocol/Check/data_check.cpp \
    Protocol/protocol.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    FlexibleQDoubleSpinBox.h \
    HardwareInterface/comm_net.h \
    HardwareInterface/comm_serialport.h \
    HardwareInterface/hardwareinterface.h \
    MyFlexibleQDoubleSpinBox.h \
    Protocol/Check/data_check.h \
    Protocol/protocol.h \
    mainwindow.h

FORMS += \
    FlexibleQDoubleSpinBox.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
