/****************************************************************************
** Meta object code from reading C++ file 'mainscene.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../BattleCity-Tanks1990-APfinal/mainscene.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainscene.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainSceneENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainSceneENDCLASS = QtMocHelpers::stringData(
    "MainScene",
    "signalConnect",
    "",
    "slotBullet",
    "start",
    "target",
    "slothit",
    "QGraphicsItem*",
    "item"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainSceneENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[10];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[6];
    char stringdata5[7];
    char stringdata6[8];
    char stringdata7[15];
    char stringdata8[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainSceneENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainSceneENDCLASS_t qt_meta_stringdata_CLASSMainSceneENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "MainScene"
        QT_MOC_LITERAL(10, 13),  // "signalConnect"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 10),  // "slotBullet"
        QT_MOC_LITERAL(36, 5),  // "start"
        QT_MOC_LITERAL(42, 6),  // "target"
        QT_MOC_LITERAL(49, 7),  // "slothit"
        QT_MOC_LITERAL(57, 14),  // "QGraphicsItem*"
        QT_MOC_LITERAL(72, 4)   // "item"
    },
    "MainScene",
    "signalConnect",
    "",
    "slotBullet",
    "start",
    "target",
    "slothit",
    "QGraphicsItem*",
    "item"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainSceneENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    2,   37,    2, 0x08,    4 /* Private */,
       6,    1,   42,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainSceneENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainSceneENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainSceneENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainScene, std::true_type>,
        // method 'signalConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotBullet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        // method 'slothit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGraphicsItem *, std::false_type>
    >,
    nullptr
} };

void MainScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalConnect((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->slotBullet((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 2: _t->slothit((*reinterpret_cast< std::add_pointer_t<QGraphicsItem*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGraphicsItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainScene::*)(int , int );
            if (_t _q_method = &MainScene::signalConnect; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainSceneENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int MainScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MainScene::signalConnect(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
