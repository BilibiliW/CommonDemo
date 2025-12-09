/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10MainWindowE = QtMocHelpers::stringData(
    "MainWindow",
    "ErrorAckHandle",
    "",
    "A0_CMD_t*",
    "UpdateHandShakeAck",
    "UpdateFirmwareVersion",
    "UpdateDeviceInfoRead",
    "UpdateBoardStatusRead",
    "UpdateBoardSelfCheckResult",
    "UpdateCoilCurrentRead",
    "UpdateCoilVolRead",
    "UpdateCoilResistRead",
    "UpdatePowerVolRead",
    "UpdateInputVolRead",
    "UpdateInputCurrentRead",
    "UpdateOutputCurrentRead",
    "UpdateBoardTempRead",
    "UpdateBoardID_Read",
    "UpdateMultParam_Read",
    "UpdateCoilCurrentGetCoefRead",
    "UpdateCoilCurrentSetCoefRead",
    "UpdateCoilVolCoefRead",
    "UpdateDialSwVol",
    "UpdateAds8326Vol",
    "CommTypeUpdate",
    "on_Communication_currentChanged",
    "index",
    "on_pushButton_SerialConnect_clicked",
    "RecvData",
    "on_pushButton_LockRealTimeWindows_clicked",
    "on_pushButton_CleanRealTimeWindows_clicked",
    "on_actionImportJson_triggered",
    "on_pushButton_Save_clicked",
    "on_listWidget_Device_doubleClicked",
    "QModelIndex",
    "on_pushButton_dial_sw_get_clicked",
    "on_pushButton_3_clicked",
    "on_pushButton_DAC8571_Set_clicked",
    "on_pushButton_MAX5719_Set_clicked",
    "on_pushButton_current_Set_clicked",
    "on_pushButton_multi_Set_clicked",
    "on_pushButton_ExcitateCurrentSet_clicked",
    "on_pushButton_CoilCurrentGet_clicked",
    "on_pushButton_CoilVolGet_clicked",
    "on_pushButton_PowerVolGet_clicked",
    "on_pushButton_InputCurrentGet_clicked",
    "on_pushButton_CoilResistGet_clicked",
    "on_pushButton_CoilResistSet_clicked",
    "on_pushButton_InputVolGet_clicked",
    "on_pushButton_InputVolSet_clicked",
    "on_pushButton_OutputCurrentGet_clicked",
    "on_pushButton_OutputCurrentSet_clicked",
    "on_pushButton_CoilCurrentGetCoefWrite_clicked",
    "on_pushButton_CoilCurrentGetCoefRead_clicked",
    "on_pushButton_CoilVolCoefSet_clicked",
    "on_pushButton_CoilVolCoefGet_clicked",
    "on_pushButton_BoardTempGet_clicked",
    "on_pushButton_BoardID_Get_clicked",
    "on_pushButton_RebootSet_clicked",
    "on_pushButton_ParaSaveSet_clicked",
    "on_pushButton_ParaReadGet_clicked",
    "on_pushButton_ParaRestoreSet_clicked",
    "on_pushButton_DeviceInfo_clicked",
    "on_pushButton_FirmVersion_clicked",
    "on_pushButton__PowerCtrlHexSet_clicked",
    "on_pushButton_CoilCurrentHexSet_clicked",
    "qSliderConstCurrentValueChange",
    "qSliderOutputCurrentA_ValueChange",
    "qSliderOutputCurrentB_ValueChange",
    "flexibleQDoubleSpinBoxConstCurrentValueChange",
    "flexibleQDoubleSpinBoxOutputCurrentA_ValueChange",
    "flexibleQDoubleSpinBoxOutputCurrentB_ValueChange",
    "on_verticalSlider_ConstCurrent_sliderReleased",
    "on_verticalSlider_ConstCurrent_valueChanged",
    "value",
    "UpdateSysClock",
    "RefreshParam",
    "ExcitateCurrentCmdDelaySend",
    "CoilCurrentCmdDelaySend",
    "on_verticalSlider_OutputCurrentA_sliderReleased",
    "on_verticalSlider_OutputCurrentA_valueChanged",
    "on_verticalSlider_OutputCurrentB_sliderReleased",
    "on_verticalSlider_OutputCurrentB_valueChanged",
    "on_pushButton_SelfCheck_clicked",
    "on_pushButton_WobStart_clicked",
    "on_pushButtonWobClose_clicked",
    "on_pushButton_DegaussStart_clicked",
    "on_pushButton_DegaussAbort_clicked",
    "on_checkBox_BoardEnable_clicked",
    "on_pushButton_CoilCurrentSetCoefWrite_clicked",
    "on_pushButton_CoilCurrentSetCoefRead_clicked",
    "on_checkBox_CalibrateModeEn_clicked",
    "on_pushButton_ErrorClear_clicked",
    "on_checkBox_RefreshInterval_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      88,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  542,    2, 0x0a,    1 /* Public */,
       4,    1,  545,    2, 0x0a,    3 /* Public */,
       5,    1,  548,    2, 0x0a,    5 /* Public */,
       6,    1,  551,    2, 0x0a,    7 /* Public */,
       7,    1,  554,    2, 0x0a,    9 /* Public */,
       8,    1,  557,    2, 0x0a,   11 /* Public */,
       9,    1,  560,    2, 0x0a,   13 /* Public */,
      10,    1,  563,    2, 0x0a,   15 /* Public */,
      11,    1,  566,    2, 0x0a,   17 /* Public */,
      12,    1,  569,    2, 0x0a,   19 /* Public */,
      13,    1,  572,    2, 0x0a,   21 /* Public */,
      14,    1,  575,    2, 0x0a,   23 /* Public */,
      15,    1,  578,    2, 0x0a,   25 /* Public */,
      16,    1,  581,    2, 0x0a,   27 /* Public */,
      17,    1,  584,    2, 0x0a,   29 /* Public */,
      18,    1,  587,    2, 0x0a,   31 /* Public */,
      19,    1,  590,    2, 0x0a,   33 /* Public */,
      20,    1,  593,    2, 0x0a,   35 /* Public */,
      21,    1,  596,    2, 0x0a,   37 /* Public */,
      22,    1,  599,    2, 0x0a,   39 /* Public */,
      23,    1,  602,    2, 0x0a,   41 /* Public */,
      24,    1,  605,    2, 0x08,   43 /* Private */,
      25,    1,  608,    2, 0x08,   45 /* Private */,
      27,    0,  611,    2, 0x08,   47 /* Private */,
      28,    0,  612,    2, 0x08,   48 /* Private */,
      29,    0,  613,    2, 0x08,   49 /* Private */,
      30,    0,  614,    2, 0x08,   50 /* Private */,
      31,    0,  615,    2, 0x08,   51 /* Private */,
      32,    0,  616,    2, 0x08,   52 /* Private */,
      33,    1,  617,    2, 0x08,   53 /* Private */,
      35,    0,  620,    2, 0x08,   55 /* Private */,
      36,    0,  621,    2, 0x08,   56 /* Private */,
      37,    0,  622,    2, 0x08,   57 /* Private */,
      38,    0,  623,    2, 0x08,   58 /* Private */,
      39,    0,  624,    2, 0x08,   59 /* Private */,
      40,    0,  625,    2, 0x08,   60 /* Private */,
      41,    0,  626,    2, 0x08,   61 /* Private */,
      42,    0,  627,    2, 0x08,   62 /* Private */,
      43,    0,  628,    2, 0x08,   63 /* Private */,
      44,    0,  629,    2, 0x08,   64 /* Private */,
      45,    0,  630,    2, 0x08,   65 /* Private */,
      46,    0,  631,    2, 0x08,   66 /* Private */,
      47,    0,  632,    2, 0x08,   67 /* Private */,
      48,    0,  633,    2, 0x08,   68 /* Private */,
      49,    0,  634,    2, 0x08,   69 /* Private */,
      50,    0,  635,    2, 0x08,   70 /* Private */,
      51,    0,  636,    2, 0x08,   71 /* Private */,
      52,    0,  637,    2, 0x08,   72 /* Private */,
      53,    0,  638,    2, 0x08,   73 /* Private */,
      54,    0,  639,    2, 0x08,   74 /* Private */,
      55,    0,  640,    2, 0x08,   75 /* Private */,
      56,    0,  641,    2, 0x08,   76 /* Private */,
      57,    0,  642,    2, 0x08,   77 /* Private */,
      58,    0,  643,    2, 0x08,   78 /* Private */,
      59,    0,  644,    2, 0x08,   79 /* Private */,
      60,    0,  645,    2, 0x08,   80 /* Private */,
      61,    0,  646,    2, 0x08,   81 /* Private */,
      62,    0,  647,    2, 0x08,   82 /* Private */,
      63,    0,  648,    2, 0x08,   83 /* Private */,
      64,    0,  649,    2, 0x08,   84 /* Private */,
      65,    0,  650,    2, 0x08,   85 /* Private */,
      66,    1,  651,    2, 0x08,   86 /* Private */,
      67,    1,  654,    2, 0x08,   88 /* Private */,
      68,    1,  657,    2, 0x08,   90 /* Private */,
      69,    1,  660,    2, 0x08,   92 /* Private */,
      70,    1,  663,    2, 0x08,   94 /* Private */,
      71,    1,  666,    2, 0x08,   96 /* Private */,
      72,    0,  669,    2, 0x08,   98 /* Private */,
      73,    1,  670,    2, 0x08,   99 /* Private */,
      75,    0,  673,    2, 0x08,  101 /* Private */,
      76,    0,  674,    2, 0x08,  102 /* Private */,
      77,    0,  675,    2, 0x08,  103 /* Private */,
      78,    0,  676,    2, 0x08,  104 /* Private */,
      79,    0,  677,    2, 0x08,  105 /* Private */,
      80,    1,  678,    2, 0x08,  106 /* Private */,
      81,    0,  681,    2, 0x08,  108 /* Private */,
      82,    1,  682,    2, 0x08,  109 /* Private */,
      83,    0,  685,    2, 0x08,  111 /* Private */,
      84,    0,  686,    2, 0x08,  112 /* Private */,
      85,    0,  687,    2, 0x08,  113 /* Private */,
      86,    0,  688,    2, 0x08,  114 /* Private */,
      87,    0,  689,    2, 0x08,  115 /* Private */,
      88,    0,  690,    2, 0x08,  116 /* Private */,
      89,    0,  691,    2, 0x08,  117 /* Private */,
      90,    0,  692,    2, 0x08,  118 /* Private */,
      91,    0,  693,    2, 0x08,  119 /* Private */,
      92,    0,  694,    2, 0x08,  120 /* Private */,
      93,    0,  695,    2, 0x08,  121 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10MainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10MainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10MainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'ErrorAckHandle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateHandShakeAck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateFirmwareVersion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateDeviceInfoRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateBoardStatusRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateBoardSelfCheckResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateCoilCurrentRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateCoilVolRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateCoilResistRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdatePowerVolRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateInputVolRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateInputCurrentRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateOutputCurrentRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateBoardTempRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateBoardID_Read'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateMultParam_Read'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateCoilCurrentGetCoefRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateCoilCurrentSetCoefRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateCoilVolCoefRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateDialSwVol'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'UpdateAds8326Vol'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'CommTypeUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_Communication_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_SerialConnect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RecvData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_LockRealTimeWindows_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CleanRealTimeWindows_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionImportJson_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Save_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_listWidget_Device_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_pushButton_dial_sw_get_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_DAC8571_Set_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_MAX5719_Set_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_current_Set_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_multi_Set_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_ExcitateCurrentSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CoilCurrentGet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CoilVolGet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_PowerVolGet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_InputCurrentGet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CoilResistGet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CoilResistSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_InputVolGet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_InputVolSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_OutputCurrentGet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_OutputCurrentSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CoilCurrentGetCoefWrite_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CoilCurrentGetCoefRead_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CoilVolCoefSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CoilVolCoefGet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_BoardTempGet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_BoardID_Get_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_RebootSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_ParaSaveSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_ParaReadGet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_ParaRestoreSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_DeviceInfo_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_FirmVersion_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton__PowerCtrlHexSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CoilCurrentHexSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'qSliderConstCurrentValueChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'qSliderOutputCurrentA_ValueChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'qSliderOutputCurrentB_ValueChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'flexibleQDoubleSpinBoxConstCurrentValueChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'flexibleQDoubleSpinBoxOutputCurrentA_ValueChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'flexibleQDoubleSpinBoxOutputCurrentB_ValueChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_verticalSlider_ConstCurrent_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_verticalSlider_ConstCurrent_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'UpdateSysClock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RefreshParam'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ExcitateCurrentCmdDelaySend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CoilCurrentCmdDelaySend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_verticalSlider_OutputCurrentA_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_verticalSlider_OutputCurrentA_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_verticalSlider_OutputCurrentB_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_verticalSlider_OutputCurrentB_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_SelfCheck_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_WobStart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonWobClose_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_DegaussStart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_DegaussAbort_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_BoardEnable_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CoilCurrentSetCoefWrite_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CoilCurrentSetCoefRead_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_CalibrateModeEn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_ErrorClear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_RefreshInterval_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ErrorAckHandle((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 1: _t->UpdateHandShakeAck((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 2: _t->UpdateFirmwareVersion((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 3: _t->UpdateDeviceInfoRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 4: _t->UpdateBoardStatusRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 5: _t->UpdateBoardSelfCheckResult((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 6: _t->UpdateCoilCurrentRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 7: _t->UpdateCoilVolRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 8: _t->UpdateCoilResistRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 9: _t->UpdatePowerVolRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 10: _t->UpdateInputVolRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 11: _t->UpdateInputCurrentRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 12: _t->UpdateOutputCurrentRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 13: _t->UpdateBoardTempRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 14: _t->UpdateBoardID_Read((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 15: _t->UpdateMultParam_Read((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 16: _t->UpdateCoilCurrentGetCoefRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 17: _t->UpdateCoilCurrentSetCoefRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 18: _t->UpdateCoilVolCoefRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 19: _t->UpdateDialSwVol((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 20: _t->UpdateAds8326Vol((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 21: _t->CommTypeUpdate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->on_Communication_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->on_pushButton_SerialConnect_clicked(); break;
        case 24: _t->RecvData(); break;
        case 25: _t->on_pushButton_LockRealTimeWindows_clicked(); break;
        case 26: _t->on_pushButton_CleanRealTimeWindows_clicked(); break;
        case 27: _t->on_actionImportJson_triggered(); break;
        case 28: _t->on_pushButton_Save_clicked(); break;
        case 29: _t->on_listWidget_Device_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 30: _t->on_pushButton_dial_sw_get_clicked(); break;
        case 31: _t->on_pushButton_3_clicked(); break;
        case 32: _t->on_pushButton_DAC8571_Set_clicked(); break;
        case 33: _t->on_pushButton_MAX5719_Set_clicked(); break;
        case 34: _t->on_pushButton_current_Set_clicked(); break;
        case 35: _t->on_pushButton_multi_Set_clicked(); break;
        case 36: _t->on_pushButton_ExcitateCurrentSet_clicked(); break;
        case 37: _t->on_pushButton_CoilCurrentGet_clicked(); break;
        case 38: _t->on_pushButton_CoilVolGet_clicked(); break;
        case 39: _t->on_pushButton_PowerVolGet_clicked(); break;
        case 40: _t->on_pushButton_InputCurrentGet_clicked(); break;
        case 41: _t->on_pushButton_CoilResistGet_clicked(); break;
        case 42: _t->on_pushButton_CoilResistSet_clicked(); break;
        case 43: _t->on_pushButton_InputVolGet_clicked(); break;
        case 44: _t->on_pushButton_InputVolSet_clicked(); break;
        case 45: _t->on_pushButton_OutputCurrentGet_clicked(); break;
        case 46: _t->on_pushButton_OutputCurrentSet_clicked(); break;
        case 47: _t->on_pushButton_CoilCurrentGetCoefWrite_clicked(); break;
        case 48: _t->on_pushButton_CoilCurrentGetCoefRead_clicked(); break;
        case 49: _t->on_pushButton_CoilVolCoefSet_clicked(); break;
        case 50: _t->on_pushButton_CoilVolCoefGet_clicked(); break;
        case 51: _t->on_pushButton_BoardTempGet_clicked(); break;
        case 52: _t->on_pushButton_BoardID_Get_clicked(); break;
        case 53: _t->on_pushButton_RebootSet_clicked(); break;
        case 54: _t->on_pushButton_ParaSaveSet_clicked(); break;
        case 55: _t->on_pushButton_ParaReadGet_clicked(); break;
        case 56: _t->on_pushButton_ParaRestoreSet_clicked(); break;
        case 57: _t->on_pushButton_DeviceInfo_clicked(); break;
        case 58: _t->on_pushButton_FirmVersion_clicked(); break;
        case 59: _t->on_pushButton__PowerCtrlHexSet_clicked(); break;
        case 60: _t->on_pushButton_CoilCurrentHexSet_clicked(); break;
        case 61: _t->qSliderConstCurrentValueChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 62: _t->qSliderOutputCurrentA_ValueChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 63: _t->qSliderOutputCurrentB_ValueChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 64: _t->flexibleQDoubleSpinBoxConstCurrentValueChange((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 65: _t->flexibleQDoubleSpinBoxOutputCurrentA_ValueChange((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 66: _t->flexibleQDoubleSpinBoxOutputCurrentB_ValueChange((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 67: _t->on_verticalSlider_ConstCurrent_sliderReleased(); break;
        case 68: _t->on_verticalSlider_ConstCurrent_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 69: _t->UpdateSysClock(); break;
        case 70: _t->RefreshParam(); break;
        case 71: _t->ExcitateCurrentCmdDelaySend(); break;
        case 72: _t->CoilCurrentCmdDelaySend(); break;
        case 73: _t->on_verticalSlider_OutputCurrentA_sliderReleased(); break;
        case 74: _t->on_verticalSlider_OutputCurrentA_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 75: _t->on_verticalSlider_OutputCurrentB_sliderReleased(); break;
        case 76: _t->on_verticalSlider_OutputCurrentB_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 77: _t->on_pushButton_SelfCheck_clicked(); break;
        case 78: _t->on_pushButton_WobStart_clicked(); break;
        case 79: _t->on_pushButtonWobClose_clicked(); break;
        case 80: _t->on_pushButton_DegaussStart_clicked(); break;
        case 81: _t->on_pushButton_DegaussAbort_clicked(); break;
        case 82: _t->on_checkBox_BoardEnable_clicked(); break;
        case 83: _t->on_pushButton_CoilCurrentSetCoefWrite_clicked(); break;
        case 84: _t->on_pushButton_CoilCurrentSetCoefRead_clicked(); break;
        case 85: _t->on_checkBox_CalibrateModeEn_clicked(); break;
        case 86: _t->on_pushButton_ErrorClear_clicked(); break;
        case 87: _t->on_checkBox_RefreshInterval_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10MainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 88)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 88;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 88)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 88;
    }
    return _id;
}
QT_WARNING_POP
