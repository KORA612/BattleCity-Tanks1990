/****************************************************************************
** Meta object code from reading C++ file 'tank.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../BattleCity-Tanks1990-APfinal/tank.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tank.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
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
struct qt_meta_stringdata_CLASSTankENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTankENDCLASS = QtMocHelpers::stringData(
    "Tank",
    "signalBullet",
    "",
    "start",
    "target",
    "signalDamage",
    "health",
    "ID",
    "slotGameTimer1",
    "slotGameTimer2"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTankENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[5];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[7];
    char stringdata5[13];
    char stringdata6[7];
    char stringdata7[3];
    char stringdata8[15];
    char stringdata9[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTankENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTankENDCLASS_t qt_meta_stringdata_CLASSTankENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Tank"
        QT_MOC_LITERAL(5, 12),  // "signalBullet"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 5),  // "start"
        QT_MOC_LITERAL(25, 6),  // "target"
        QT_MOC_LITERAL(32, 12),  // "signalDamage"
        QT_MOC_LITERAL(45, 6),  // "health"
        QT_MOC_LITERAL(52, 2),  // "ID"
        QT_MOC_LITERAL(55, 14),  // "slotGameTimer1"
        QT_MOC_LITERAL(70, 14)   // "slotGameTimer2"
    },
    "Tank",
    "signalBullet",
    "",
    "start",
    "target",
    "signalDamage",
    "health",
    "ID",
    "slotGameTimer1",
    "slotGameTimer2"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTankENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x06,    1 /* Public */,
       5,    2,   43,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   48,    2, 0x0a,    7 /* Public */,
       9,    0,   49,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Tank::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTankENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTankENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTankENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Tank, std::true_type>,
        // method 'signalBullet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        // method 'signalDamage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotGameTimer1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotGameTimer2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Tank::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tank *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalBullet((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 1: _t->signalDamage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->slotGameTimer1(); break;
        case 3: _t->slotGameTimer2(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Tank::*)(QPointF , QPointF );
            if (_t _q_method = &Tank::signalBullet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Tank::*)(int , int );
            if (_t _q_method = &Tank::signalDamage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Tank::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tank::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTankENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int Tank::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Tank::signalBullet(QPointF _t1, QPointF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tank::signalDamage(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
