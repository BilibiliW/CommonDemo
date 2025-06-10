/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "UpdateHandShakeAck",
    "",
    "A0_CMD_t*",
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
    "UpdateCoilCurrentCoefRead",
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
    "on_pushButton_CoilCurrentCoefSet_clicked",
    "on_pushButton_CoilCurrentCoefGet_clicked",
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
    "on_pushButton_DegaussAbort_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[168];
    char stringdata0[11];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[22];
    char stringdata5[21];
    char stringdata6[22];
    char stringdata7[27];
    char stringdata8[22];
    char stringdata9[18];
    char stringdata10[21];
    char stringdata11[19];
    char stringdata12[19];
    char stringdata13[23];
    char stringdata14[24];
    char stringdata15[20];
    char stringdata16[19];
    char stringdata17[26];
    char stringdata18[22];
    char stringdata19[16];
    char stringdata20[17];
    char stringdata21[15];
    char stringdata22[32];
    char stringdata23[6];
    char stringdata24[36];
    char stringdata25[9];
    char stringdata26[42];
    char stringdata27[43];
    char stringdata28[30];
    char stringdata29[27];
    char stringdata30[35];
    char stringdata31[12];
    char stringdata32[34];
    char stringdata33[24];
    char stringdata34[34];
    char stringdata35[34];
    char stringdata36[34];
    char stringdata37[32];
    char stringdata38[41];
    char stringdata39[37];
    char stringdata40[33];
    char stringdata41[34];
    char stringdata42[38];
    char stringdata43[36];
    char stringdata44[36];
    char stringdata45[34];
    char stringdata46[34];
    char stringdata47[39];
    char stringdata48[39];
    char stringdata49[41];
    char stringdata50[41];
    char stringdata51[37];
    char stringdata52[37];
    char stringdata53[35];
    char stringdata54[34];
    char stringdata55[32];
    char stringdata56[34];
    char stringdata57[34];
    char stringdata58[37];
    char stringdata59[33];
    char stringdata60[34];
    char stringdata61[39];
    char stringdata62[40];
    char stringdata63[31];
    char stringdata64[34];
    char stringdata65[34];
    char stringdata66[46];
    char stringdata67[49];
    char stringdata68[49];
    char stringdata69[46];
    char stringdata70[44];
    char stringdata71[6];
    char stringdata72[15];
    char stringdata73[28];
    char stringdata74[24];
    char stringdata75[48];
    char stringdata76[46];
    char stringdata77[48];
    char stringdata78[46];
    char stringdata79[32];
    char stringdata80[31];
    char stringdata81[30];
    char stringdata82[35];
    char stringdata83[35];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 18),  // "UpdateHandShakeAck"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 9),  // "A0_CMD_t*"
        QT_MOC_LITERAL(41, 21),  // "UpdateFirmwareVersion"
        QT_MOC_LITERAL(63, 20),  // "UpdateDeviceInfoRead"
        QT_MOC_LITERAL(84, 21),  // "UpdateBoardStatusRead"
        QT_MOC_LITERAL(106, 26),  // "UpdateBoardSelfCheckResult"
        QT_MOC_LITERAL(133, 21),  // "UpdateCoilCurrentRead"
        QT_MOC_LITERAL(155, 17),  // "UpdateCoilVolRead"
        QT_MOC_LITERAL(173, 20),  // "UpdateCoilResistRead"
        QT_MOC_LITERAL(194, 18),  // "UpdatePowerVolRead"
        QT_MOC_LITERAL(213, 18),  // "UpdateInputVolRead"
        QT_MOC_LITERAL(232, 22),  // "UpdateInputCurrentRead"
        QT_MOC_LITERAL(255, 23),  // "UpdateOutputCurrentRead"
        QT_MOC_LITERAL(279, 19),  // "UpdateBoardTempRead"
        QT_MOC_LITERAL(299, 18),  // "UpdateBoardID_Read"
        QT_MOC_LITERAL(318, 25),  // "UpdateCoilCurrentCoefRead"
        QT_MOC_LITERAL(344, 21),  // "UpdateCoilVolCoefRead"
        QT_MOC_LITERAL(366, 15),  // "UpdateDialSwVol"
        QT_MOC_LITERAL(382, 16),  // "UpdateAds8326Vol"
        QT_MOC_LITERAL(399, 14),  // "CommTypeUpdate"
        QT_MOC_LITERAL(414, 31),  // "on_Communication_currentChanged"
        QT_MOC_LITERAL(446, 5),  // "index"
        QT_MOC_LITERAL(452, 35),  // "on_pushButton_SerialConnect_c..."
        QT_MOC_LITERAL(488, 8),  // "RecvData"
        QT_MOC_LITERAL(497, 41),  // "on_pushButton_LockRealTimeWin..."
        QT_MOC_LITERAL(539, 42),  // "on_pushButton_CleanRealTimeWi..."
        QT_MOC_LITERAL(582, 29),  // "on_actionImportJson_triggered"
        QT_MOC_LITERAL(612, 26),  // "on_pushButton_Save_clicked"
        QT_MOC_LITERAL(639, 34),  // "on_listWidget_Device_doubleCl..."
        QT_MOC_LITERAL(674, 11),  // "QModelIndex"
        QT_MOC_LITERAL(686, 33),  // "on_pushButton_dial_sw_get_cli..."
        QT_MOC_LITERAL(720, 23),  // "on_pushButton_3_clicked"
        QT_MOC_LITERAL(744, 33),  // "on_pushButton_DAC8571_Set_cli..."
        QT_MOC_LITERAL(778, 33),  // "on_pushButton_MAX5719_Set_cli..."
        QT_MOC_LITERAL(812, 33),  // "on_pushButton_current_Set_cli..."
        QT_MOC_LITERAL(846, 31),  // "on_pushButton_multi_Set_clicked"
        QT_MOC_LITERAL(878, 40),  // "on_pushButton_ExcitateCurrent..."
        QT_MOC_LITERAL(919, 36),  // "on_pushButton_CoilCurrentGet_..."
        QT_MOC_LITERAL(956, 32),  // "on_pushButton_CoilVolGet_clicked"
        QT_MOC_LITERAL(989, 33),  // "on_pushButton_PowerVolGet_cli..."
        QT_MOC_LITERAL(1023, 37),  // "on_pushButton_InputCurrentGet..."
        QT_MOC_LITERAL(1061, 35),  // "on_pushButton_CoilResistGet_c..."
        QT_MOC_LITERAL(1097, 35),  // "on_pushButton_CoilResistSet_c..."
        QT_MOC_LITERAL(1133, 33),  // "on_pushButton_InputVolGet_cli..."
        QT_MOC_LITERAL(1167, 33),  // "on_pushButton_InputVolSet_cli..."
        QT_MOC_LITERAL(1201, 38),  // "on_pushButton_OutputCurrentGe..."
        QT_MOC_LITERAL(1240, 38),  // "on_pushButton_OutputCurrentSe..."
        QT_MOC_LITERAL(1279, 40),  // "on_pushButton_CoilCurrentCoef..."
        QT_MOC_LITERAL(1320, 40),  // "on_pushButton_CoilCurrentCoef..."
        QT_MOC_LITERAL(1361, 36),  // "on_pushButton_CoilVolCoefSet_..."
        QT_MOC_LITERAL(1398, 36),  // "on_pushButton_CoilVolCoefGet_..."
        QT_MOC_LITERAL(1435, 34),  // "on_pushButton_BoardTempGet_cl..."
        QT_MOC_LITERAL(1470, 33),  // "on_pushButton_BoardID_Get_cli..."
        QT_MOC_LITERAL(1504, 31),  // "on_pushButton_RebootSet_clicked"
        QT_MOC_LITERAL(1536, 33),  // "on_pushButton_ParaSaveSet_cli..."
        QT_MOC_LITERAL(1570, 33),  // "on_pushButton_ParaReadGet_cli..."
        QT_MOC_LITERAL(1604, 36),  // "on_pushButton_ParaRestoreSet_..."
        QT_MOC_LITERAL(1641, 32),  // "on_pushButton_DeviceInfo_clicked"
        QT_MOC_LITERAL(1674, 33),  // "on_pushButton_FirmVersion_cli..."
        QT_MOC_LITERAL(1708, 38),  // "on_pushButton__PowerCtrlHexSe..."
        QT_MOC_LITERAL(1747, 39),  // "on_pushButton_CoilCurrentHexS..."
        QT_MOC_LITERAL(1787, 30),  // "qSliderConstCurrentValueChange"
        QT_MOC_LITERAL(1818, 33),  // "qSliderOutputCurrentA_ValueCh..."
        QT_MOC_LITERAL(1852, 33),  // "qSliderOutputCurrentB_ValueCh..."
        QT_MOC_LITERAL(1886, 45),  // "flexibleQDoubleSpinBoxConstCu..."
        QT_MOC_LITERAL(1932, 48),  // "flexibleQDoubleSpinBoxOutputC..."
        QT_MOC_LITERAL(1981, 48),  // "flexibleQDoubleSpinBoxOutputC..."
        QT_MOC_LITERAL(2030, 45),  // "on_verticalSlider_ConstCurren..."
        QT_MOC_LITERAL(2076, 43),  // "on_verticalSlider_ConstCurren..."
        QT_MOC_LITERAL(2120, 5),  // "value"
        QT_MOC_LITERAL(2126, 14),  // "UpdateSysClock"
        QT_MOC_LITERAL(2141, 27),  // "ExcitateCurrentCmdDelaySend"
        QT_MOC_LITERAL(2169, 23),  // "CoilCurrentCmdDelaySend"
        QT_MOC_LITERAL(2193, 47),  // "on_verticalSlider_OutputCurre..."
        QT_MOC_LITERAL(2241, 45),  // "on_verticalSlider_OutputCurre..."
        QT_MOC_LITERAL(2287, 47),  // "on_verticalSlider_OutputCurre..."
        QT_MOC_LITERAL(2335, 45),  // "on_verticalSlider_OutputCurre..."
        QT_MOC_LITERAL(2381, 31),  // "on_pushButton_SelfCheck_clicked"
        QT_MOC_LITERAL(2413, 30),  // "on_pushButton_WobStart_clicked"
        QT_MOC_LITERAL(2444, 29),  // "on_pushButtonWobClose_clicked"
        QT_MOC_LITERAL(2474, 34),  // "on_pushButton_DegaussStart_cl..."
        QT_MOC_LITERAL(2509, 34)   // "on_pushButton_DegaussAbort_cl..."
    },
    "MainWindow",
    "UpdateHandShakeAck",
    "",
    "A0_CMD_t*",
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
    "UpdateCoilCurrentCoefRead",
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
    "on_pushButton_CoilCurrentCoefSet_clicked",
    "on_pushButton_CoilCurrentCoefGet_clicked",
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
    "on_pushButton_DegaussAbort_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      78,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  482,    2, 0x0a,    1 /* Public */,
       4,    1,  485,    2, 0x0a,    3 /* Public */,
       5,    1,  488,    2, 0x0a,    5 /* Public */,
       6,    1,  491,    2, 0x0a,    7 /* Public */,
       7,    1,  494,    2, 0x0a,    9 /* Public */,
       8,    1,  497,    2, 0x0a,   11 /* Public */,
       9,    1,  500,    2, 0x0a,   13 /* Public */,
      10,    1,  503,    2, 0x0a,   15 /* Public */,
      11,    1,  506,    2, 0x0a,   17 /* Public */,
      12,    1,  509,    2, 0x0a,   19 /* Public */,
      13,    1,  512,    2, 0x0a,   21 /* Public */,
      14,    1,  515,    2, 0x0a,   23 /* Public */,
      15,    1,  518,    2, 0x0a,   25 /* Public */,
      16,    1,  521,    2, 0x0a,   27 /* Public */,
      17,    1,  524,    2, 0x0a,   29 /* Public */,
      18,    1,  527,    2, 0x0a,   31 /* Public */,
      19,    1,  530,    2, 0x0a,   33 /* Public */,
      20,    1,  533,    2, 0x0a,   35 /* Public */,
      21,    1,  536,    2, 0x08,   37 /* Private */,
      22,    1,  539,    2, 0x08,   39 /* Private */,
      24,    0,  542,    2, 0x08,   41 /* Private */,
      25,    0,  543,    2, 0x08,   42 /* Private */,
      26,    0,  544,    2, 0x08,   43 /* Private */,
      27,    0,  545,    2, 0x08,   44 /* Private */,
      28,    0,  546,    2, 0x08,   45 /* Private */,
      29,    0,  547,    2, 0x08,   46 /* Private */,
      30,    1,  548,    2, 0x08,   47 /* Private */,
      32,    0,  551,    2, 0x08,   49 /* Private */,
      33,    0,  552,    2, 0x08,   50 /* Private */,
      34,    0,  553,    2, 0x08,   51 /* Private */,
      35,    0,  554,    2, 0x08,   52 /* Private */,
      36,    0,  555,    2, 0x08,   53 /* Private */,
      37,    0,  556,    2, 0x08,   54 /* Private */,
      38,    0,  557,    2, 0x08,   55 /* Private */,
      39,    0,  558,    2, 0x08,   56 /* Private */,
      40,    0,  559,    2, 0x08,   57 /* Private */,
      41,    0,  560,    2, 0x08,   58 /* Private */,
      42,    0,  561,    2, 0x08,   59 /* Private */,
      43,    0,  562,    2, 0x08,   60 /* Private */,
      44,    0,  563,    2, 0x08,   61 /* Private */,
      45,    0,  564,    2, 0x08,   62 /* Private */,
      46,    0,  565,    2, 0x08,   63 /* Private */,
      47,    0,  566,    2, 0x08,   64 /* Private */,
      48,    0,  567,    2, 0x08,   65 /* Private */,
      49,    0,  568,    2, 0x08,   66 /* Private */,
      50,    0,  569,    2, 0x08,   67 /* Private */,
      51,    0,  570,    2, 0x08,   68 /* Private */,
      52,    0,  571,    2, 0x08,   69 /* Private */,
      53,    0,  572,    2, 0x08,   70 /* Private */,
      54,    0,  573,    2, 0x08,   71 /* Private */,
      55,    0,  574,    2, 0x08,   72 /* Private */,
      56,    0,  575,    2, 0x08,   73 /* Private */,
      57,    0,  576,    2, 0x08,   74 /* Private */,
      58,    0,  577,    2, 0x08,   75 /* Private */,
      59,    0,  578,    2, 0x08,   76 /* Private */,
      60,    0,  579,    2, 0x08,   77 /* Private */,
      61,    0,  580,    2, 0x08,   78 /* Private */,
      62,    0,  581,    2, 0x08,   79 /* Private */,
      63,    1,  582,    2, 0x08,   80 /* Private */,
      64,    1,  585,    2, 0x08,   82 /* Private */,
      65,    1,  588,    2, 0x08,   84 /* Private */,
      66,    1,  591,    2, 0x08,   86 /* Private */,
      67,    1,  594,    2, 0x08,   88 /* Private */,
      68,    1,  597,    2, 0x08,   90 /* Private */,
      69,    0,  600,    2, 0x08,   92 /* Private */,
      70,    1,  601,    2, 0x08,   93 /* Private */,
      72,    0,  604,    2, 0x08,   95 /* Private */,
      73,    0,  605,    2, 0x08,   96 /* Private */,
      74,    0,  606,    2, 0x08,   97 /* Private */,
      75,    0,  607,    2, 0x08,   98 /* Private */,
      76,    1,  608,    2, 0x08,   99 /* Private */,
      77,    0,  611,    2, 0x08,  101 /* Private */,
      78,    1,  612,    2, 0x08,  102 /* Private */,
      79,    0,  615,    2, 0x08,  104 /* Private */,
      80,    0,  616,    2, 0x08,  105 /* Private */,
      81,    0,  617,    2, 0x08,  106 /* Private */,
      82,    0,  618,    2, 0x08,  107 /* Private */,
      83,    0,  619,    2, 0x08,  108 /* Private */,

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
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   23,
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
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
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
        // method 'UpdateCoilCurrentCoefRead'
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
        // method 'on_pushButton_CoilCurrentCoefSet_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_CoilCurrentCoefGet_clicked'
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateHandShakeAck((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 1: _t->UpdateFirmwareVersion((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 2: _t->UpdateDeviceInfoRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 3: _t->UpdateBoardStatusRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 4: _t->UpdateBoardSelfCheckResult((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 5: _t->UpdateCoilCurrentRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 6: _t->UpdateCoilVolRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 7: _t->UpdateCoilResistRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 8: _t->UpdatePowerVolRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 9: _t->UpdateInputVolRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 10: _t->UpdateInputCurrentRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 11: _t->UpdateOutputCurrentRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 12: _t->UpdateBoardTempRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 13: _t->UpdateBoardID_Read((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 14: _t->UpdateCoilCurrentCoefRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 15: _t->UpdateCoilVolCoefRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 16: _t->UpdateDialSwVol((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 17: _t->UpdateAds8326Vol((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 18: _t->CommTypeUpdate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->on_Communication_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->on_pushButton_SerialConnect_clicked(); break;
        case 21: _t->RecvData(); break;
        case 22: _t->on_pushButton_LockRealTimeWindows_clicked(); break;
        case 23: _t->on_pushButton_CleanRealTimeWindows_clicked(); break;
        case 24: _t->on_actionImportJson_triggered(); break;
        case 25: _t->on_pushButton_Save_clicked(); break;
        case 26: _t->on_listWidget_Device_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 27: _t->on_pushButton_dial_sw_get_clicked(); break;
        case 28: _t->on_pushButton_3_clicked(); break;
        case 29: _t->on_pushButton_DAC8571_Set_clicked(); break;
        case 30: _t->on_pushButton_MAX5719_Set_clicked(); break;
        case 31: _t->on_pushButton_current_Set_clicked(); break;
        case 32: _t->on_pushButton_multi_Set_clicked(); break;
        case 33: _t->on_pushButton_ExcitateCurrentSet_clicked(); break;
        case 34: _t->on_pushButton_CoilCurrentGet_clicked(); break;
        case 35: _t->on_pushButton_CoilVolGet_clicked(); break;
        case 36: _t->on_pushButton_PowerVolGet_clicked(); break;
        case 37: _t->on_pushButton_InputCurrentGet_clicked(); break;
        case 38: _t->on_pushButton_CoilResistGet_clicked(); break;
        case 39: _t->on_pushButton_CoilResistSet_clicked(); break;
        case 40: _t->on_pushButton_InputVolGet_clicked(); break;
        case 41: _t->on_pushButton_InputVolSet_clicked(); break;
        case 42: _t->on_pushButton_OutputCurrentGet_clicked(); break;
        case 43: _t->on_pushButton_OutputCurrentSet_clicked(); break;
        case 44: _t->on_pushButton_CoilCurrentCoefSet_clicked(); break;
        case 45: _t->on_pushButton_CoilCurrentCoefGet_clicked(); break;
        case 46: _t->on_pushButton_CoilVolCoefSet_clicked(); break;
        case 47: _t->on_pushButton_CoilVolCoefGet_clicked(); break;
        case 48: _t->on_pushButton_BoardTempGet_clicked(); break;
        case 49: _t->on_pushButton_BoardID_Get_clicked(); break;
        case 50: _t->on_pushButton_RebootSet_clicked(); break;
        case 51: _t->on_pushButton_ParaSaveSet_clicked(); break;
        case 52: _t->on_pushButton_ParaReadGet_clicked(); break;
        case 53: _t->on_pushButton_ParaRestoreSet_clicked(); break;
        case 54: _t->on_pushButton_DeviceInfo_clicked(); break;
        case 55: _t->on_pushButton_FirmVersion_clicked(); break;
        case 56: _t->on_pushButton__PowerCtrlHexSet_clicked(); break;
        case 57: _t->on_pushButton_CoilCurrentHexSet_clicked(); break;
        case 58: _t->qSliderConstCurrentValueChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 59: _t->qSliderOutputCurrentA_ValueChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 60: _t->qSliderOutputCurrentB_ValueChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 61: _t->flexibleQDoubleSpinBoxConstCurrentValueChange((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 62: _t->flexibleQDoubleSpinBoxOutputCurrentA_ValueChange((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 63: _t->flexibleQDoubleSpinBoxOutputCurrentB_ValueChange((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 64: _t->on_verticalSlider_ConstCurrent_sliderReleased(); break;
        case 65: _t->on_verticalSlider_ConstCurrent_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 66: _t->UpdateSysClock(); break;
        case 67: _t->ExcitateCurrentCmdDelaySend(); break;
        case 68: _t->CoilCurrentCmdDelaySend(); break;
        case 69: _t->on_verticalSlider_OutputCurrentA_sliderReleased(); break;
        case 70: _t->on_verticalSlider_OutputCurrentA_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 71: _t->on_verticalSlider_OutputCurrentB_sliderReleased(); break;
        case 72: _t->on_verticalSlider_OutputCurrentB_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 73: _t->on_pushButton_SelfCheck_clicked(); break;
        case 74: _t->on_pushButton_WobStart_clicked(); break;
        case 75: _t->on_pushButtonWobClose_clicked(); break;
        case 76: _t->on_pushButton_DegaussStart_clicked(); break;
        case 77: _t->on_pushButton_DegaussAbort_clicked(); break;
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
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 78)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 78;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 78)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 78;
    }
    return _id;
}
QT_WARNING_POP
