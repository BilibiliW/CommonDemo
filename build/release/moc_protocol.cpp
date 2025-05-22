/****************************************************************************
** Meta object code from reading C++ file 'protocol.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Protocol/protocol.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocol.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSProtocolENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSProtocolENDCLASS = QtMocHelpers::stringData(
    "Protocol",
    "HandShakeAck",
    "",
    "A0_CMD_t*",
    "FirmwareVersion",
    "DeviceInfoRead",
    "BoardStatusRead",
    "BoardSelfCheckResult",
    "CoilCurrentRead",
    "CoilVolRead",
    "CoilResistRead",
    "PowerVolRead",
    "InputVolRead",
    "InputCurrentRead",
    "OutputCurrentRead",
    "BoardTempRead",
    "BoardID_Read",
    "CoilCurrentCoefRead",
    "CoilVolCoefRead",
    "DialSwRead",
    "Ads8326Read",
    "SubThreadRun"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSProtocolENDCLASS_t {
    uint offsetsAndSizes[44];
    char stringdata0[9];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[16];
    char stringdata5[15];
    char stringdata6[16];
    char stringdata7[21];
    char stringdata8[16];
    char stringdata9[12];
    char stringdata10[15];
    char stringdata11[13];
    char stringdata12[13];
    char stringdata13[17];
    char stringdata14[18];
    char stringdata15[14];
    char stringdata16[13];
    char stringdata17[20];
    char stringdata18[16];
    char stringdata19[11];
    char stringdata20[12];
    char stringdata21[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSProtocolENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSProtocolENDCLASS_t qt_meta_stringdata_CLASSProtocolENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "Protocol"
        QT_MOC_LITERAL(9, 12),  // "HandShakeAck"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 9),  // "A0_CMD_t*"
        QT_MOC_LITERAL(33, 15),  // "FirmwareVersion"
        QT_MOC_LITERAL(49, 14),  // "DeviceInfoRead"
        QT_MOC_LITERAL(64, 15),  // "BoardStatusRead"
        QT_MOC_LITERAL(80, 20),  // "BoardSelfCheckResult"
        QT_MOC_LITERAL(101, 15),  // "CoilCurrentRead"
        QT_MOC_LITERAL(117, 11),  // "CoilVolRead"
        QT_MOC_LITERAL(129, 14),  // "CoilResistRead"
        QT_MOC_LITERAL(144, 12),  // "PowerVolRead"
        QT_MOC_LITERAL(157, 12),  // "InputVolRead"
        QT_MOC_LITERAL(170, 16),  // "InputCurrentRead"
        QT_MOC_LITERAL(187, 17),  // "OutputCurrentRead"
        QT_MOC_LITERAL(205, 13),  // "BoardTempRead"
        QT_MOC_LITERAL(219, 12),  // "BoardID_Read"
        QT_MOC_LITERAL(232, 19),  // "CoilCurrentCoefRead"
        QT_MOC_LITERAL(252, 15),  // "CoilVolCoefRead"
        QT_MOC_LITERAL(268, 10),  // "DialSwRead"
        QT_MOC_LITERAL(279, 11),  // "Ads8326Read"
        QT_MOC_LITERAL(291, 12)   // "SubThreadRun"
    },
    "Protocol",
    "HandShakeAck",
    "",
    "A0_CMD_t*",
    "FirmwareVersion",
    "DeviceInfoRead",
    "BoardStatusRead",
    "BoardSelfCheckResult",
    "CoilCurrentRead",
    "CoilVolRead",
    "CoilResistRead",
    "PowerVolRead",
    "InputVolRead",
    "InputCurrentRead",
    "OutputCurrentRead",
    "BoardTempRead",
    "BoardID_Read",
    "CoilCurrentCoefRead",
    "CoilVolCoefRead",
    "DialSwRead",
    "Ads8326Read",
    "SubThreadRun"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSProtocolENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  128,    2, 0x06,    1 /* Public */,
       4,    1,  131,    2, 0x06,    3 /* Public */,
       5,    1,  134,    2, 0x06,    5 /* Public */,
       6,    1,  137,    2, 0x06,    7 /* Public */,
       7,    1,  140,    2, 0x06,    9 /* Public */,
       8,    1,  143,    2, 0x06,   11 /* Public */,
       9,    1,  146,    2, 0x06,   13 /* Public */,
      10,    1,  149,    2, 0x06,   15 /* Public */,
      11,    1,  152,    2, 0x06,   17 /* Public */,
      12,    1,  155,    2, 0x06,   19 /* Public */,
      13,    1,  158,    2, 0x06,   21 /* Public */,
      14,    1,  161,    2, 0x06,   23 /* Public */,
      15,    1,  164,    2, 0x06,   25 /* Public */,
      16,    1,  167,    2, 0x06,   27 /* Public */,
      17,    1,  170,    2, 0x06,   29 /* Public */,
      18,    1,  173,    2, 0x06,   31 /* Public */,
      19,    1,  176,    2, 0x06,   33 /* Public */,
      20,    1,  179,    2, 0x06,   35 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      21,    0,  182,    2, 0x0a,   37 /* Public */,

 // signals: parameters
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

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Protocol::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSProtocolENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSProtocolENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSProtocolENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Protocol, std::true_type>,
        // method 'HandShakeAck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'FirmwareVersion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'DeviceInfoRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'BoardStatusRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'BoardSelfCheckResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'CoilCurrentRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'CoilVolRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'CoilResistRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'PowerVolRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'InputVolRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'InputCurrentRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'OutputCurrentRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'BoardTempRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'BoardID_Read'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'CoilCurrentCoefRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'CoilVolCoefRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'DialSwRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'Ads8326Read'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'SubThreadRun'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Protocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Protocol *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->HandShakeAck((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 1: _t->FirmwareVersion((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 2: _t->DeviceInfoRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 3: _t->BoardStatusRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 4: _t->BoardSelfCheckResult((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 5: _t->CoilCurrentRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 6: _t->CoilVolRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 7: _t->CoilResistRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 8: _t->PowerVolRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 9: _t->InputVolRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 10: _t->InputCurrentRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 11: _t->OutputCurrentRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 12: _t->BoardTempRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 13: _t->BoardID_Read((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 14: _t->CoilCurrentCoefRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 15: _t->CoilVolCoefRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 16: _t->DialSwRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 17: _t->Ads8326Read((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 18: _t->SubThreadRun(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::HandShakeAck; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::FirmwareVersion; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::DeviceInfoRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::BoardStatusRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::BoardSelfCheckResult; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::CoilCurrentRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::CoilVolRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::CoilResistRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::PowerVolRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::InputVolRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::InputCurrentRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::OutputCurrentRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::BoardTempRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::BoardID_Read; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::CoilCurrentCoefRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::CoilVolCoefRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::DialSwRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::Ads8326Read; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
    }
}

const QMetaObject *Protocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Protocol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSProtocolENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Protocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Protocol::HandShakeAck(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Protocol::FirmwareVersion(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Protocol::DeviceInfoRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Protocol::BoardStatusRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Protocol::BoardSelfCheckResult(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Protocol::CoilCurrentRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Protocol::CoilVolRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Protocol::CoilResistRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Protocol::PowerVolRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Protocol::InputVolRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Protocol::InputCurrentRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Protocol::OutputCurrentRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Protocol::BoardTempRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Protocol::BoardID_Read(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Protocol::CoilCurrentCoefRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Protocol::CoilVolCoefRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Protocol::DialSwRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Protocol::Ads8326Read(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
