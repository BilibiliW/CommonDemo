/****************************************************************************
** Meta object code from reading C++ file 'protocol.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Protocol/protocol.h"
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
    "DialSwRead",
    "",
    "A0_CMD_t*",
    "Ads8326Read",
    "Ads8326ReadNullParam",
    "SubThreadRun",
    "TestSubThreadSlot"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSProtocolENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[9];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[12];
    char stringdata5[21];
    char stringdata6[13];
    char stringdata7[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSProtocolENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSProtocolENDCLASS_t qt_meta_stringdata_CLASSProtocolENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "Protocol"
        QT_MOC_LITERAL(9, 10),  // "DialSwRead"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 9),  // "A0_CMD_t*"
        QT_MOC_LITERAL(31, 11),  // "Ads8326Read"
        QT_MOC_LITERAL(43, 20),  // "Ads8326ReadNullParam"
        QT_MOC_LITERAL(64, 12),  // "SubThreadRun"
        QT_MOC_LITERAL(77, 17)   // "TestSubThreadSlot"
    },
    "Protocol",
    "DialSwRead",
    "",
    "A0_CMD_t*",
    "Ads8326Read",
    "Ads8326ReadNullParam",
    "SubThreadRun",
    "TestSubThreadSlot"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSProtocolENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    1,   47,    2, 0x06,    3 /* Public */,
       5,    0,   50,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   51,    2, 0x0a,    6 /* Public */,
       7,    1,   52,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,

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
        // method 'DialSwRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'Ads8326Read'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>,
        // method 'Ads8326ReadNullParam'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SubThreadRun'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TestSubThreadSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<A0_CMD_t *, std::false_type>
    >,
    nullptr
} };

void Protocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Protocol *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DialSwRead((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 1: _t->Ads8326Read((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        case 2: _t->Ads8326ReadNullParam(); break;
        case 3: _t->SubThreadRun(); break;
        case 4: _t->TestSubThreadSlot((*reinterpret_cast< std::add_pointer_t<A0_CMD_t*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::DialSwRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Protocol::*)(A0_CMD_t * );
            if (_t _q_method = &Protocol::Ads8326Read; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Protocol::*)();
            if (_t _q_method = &Protocol::Ads8326ReadNullParam; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
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
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Protocol::DialSwRead(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Protocol::Ads8326Read(A0_CMD_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Protocol::Ads8326ReadNullParam()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
