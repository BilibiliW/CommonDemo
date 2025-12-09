/****************************************************************************
** Meta object code from reading C++ file 'protocol.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Protocol/protocol.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocol.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8ProtocolE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8ProtocolE = QtMocHelpers::stringData(
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
    "MultParamRead",
    "CoilCurrentGetCoefRead",
    "CoilCurrentSetCoefRead",
    "CoilVolCoefRead",
    "DialSwRead",
    "Ads8326Read",
    "GetErrACK",
    "subRecvThreadRun"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN8ProtocolE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  146,    2, 0x06,    1 /* Public */,
       4,    1,  149,    2, 0x06,    3 /* Public */,
       5,    1,  152,    2, 0x06,    5 /* Public */,
       6,    1,  155,    2, 0x06,    7 /* Public */,
       7,    1,  158,    2, 0x06,    9 /* Public */,
       8,    1,  161,    2, 0x06,   11 /* Public */,
       9,    1,  164,    2, 0x06,   13 /* Public */,
      10,    1,  167,    2, 0x06,   15 /* Public */,
      11,    1,  170,    2, 0x06,   17 /* Public */,
      12,    1,  173,    2, 0x06,   19 /* Public */,
      13,    1,  176,    2, 0x06,   21 /* Public */,
      14,    1,  179,    2, 0x06,   23 /* Public */,
      15,    1,  182,    2, 0x06,   25 /* Public */,
      16,    1,  185,    2, 0x06,   27 /* Public */,
      17,    1,  188,    2, 0x06,   29 /* Public */,
      18,    1,  191,    2, 0x06,   31 /* Public */,
      19,    1,  194,    2, 0x06,   33 /* Public */,
      20,    1,  197,    2, 0x06,   35 /* Public */,
      21,    1,  200,    2, 0x06,   37 /* Public */,
      22,    1,  203,    2, 0x06,   39 /* Public */,
      23,    1,  206,    2, 0x06,   41 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      24,    0,  209,    2, 0x0a,   43 /* Public */,

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
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Protocol::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN8ProtocolE.offsetsAndSizes,
    qt_meta_data_ZN8ProtocolE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8ProtocolE_t,
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
        // method 'MultParamRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'CoilCurrentGetCoefRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'CoilCurrentSetCoefRead'
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
        // method 'GetErrACK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'subRecvThreadRun'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Protocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Protocol *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
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
        case 14: _t->MultParamRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 15: _t->CoilCurrentGetCoefRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 16: _t->CoilCurrentSetCoefRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 17: _t->CoilVolCoefRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 18: _t->DialSwRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 19: _t->Ads8326Read((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 20: _t->GetErrACK((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 21: _t->subRecvThreadRun(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::HandShakeAck; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::FirmwareVersion; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::DeviceInfoRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::BoardStatusRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::BoardSelfCheckResult; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::CoilCurrentRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::CoilVolRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::CoilResistRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::PowerVolRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::InputVolRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::InputCurrentRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::OutputCurrentRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::BoardTempRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::BoardID_Read; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::MultParamRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::CoilCurrentGetCoefRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::CoilCurrentSetCoefRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::CoilVolCoefRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::DialSwRead; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::Ads8326Read; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _q_method_type = void (Protocol::*)(A0_CMD_t * );
            if (_q_method_type _q_method = &Protocol::GetErrACK; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 20;
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
    if (!strcmp(_clname, qt_meta_stringdata_ZN8ProtocolE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Protocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
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
void Protocol::MultParamRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Protocol::CoilCurrentGetCoefRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Protocol::CoilCurrentSetCoefRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Protocol::CoilVolCoefRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Protocol::DialSwRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Protocol::Ads8326Read(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Protocol::GetErrACK(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
QT_WARNING_POP
