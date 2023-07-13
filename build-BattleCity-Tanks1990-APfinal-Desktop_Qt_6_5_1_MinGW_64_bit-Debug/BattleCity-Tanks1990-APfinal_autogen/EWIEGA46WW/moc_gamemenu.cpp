/****************************************************************************
** Meta object code from reading C++ file 'gamemenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../BattleCity-Tanks1990-APfinal/gamemenu.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamemenu.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGameMenuENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGameMenuENDCLASS = QtMocHelpers::stringData(
    "GameMenu",
    "play",
    "",
    "newgame",
    "addtank",
    "exit"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGameMenuENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[9];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[8];
    char stringdata5[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGameMenuENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGameMenuENDCLASS_t qt_meta_stringdata_CLASSGameMenuENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "GameMenu"
        QT_MOC_LITERAL(9, 4),  // "play"
        QT_MOC_LITERAL(14, 0),  // ""
        QT_MOC_LITERAL(15, 7),  // "newgame"
        QT_MOC_LITERAL(23, 7),  // "addtank"
        QT_MOC_LITERAL(31, 4)   // "exit"
    },
    "GameMenu",
    "play",
    "",
    "newgame",
    "addtank",
    "exit"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGameMenuENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    0,   39,    2, 0x06,    2 /* Public */,
       4,    0,   40,    2, 0x06,    3 /* Public */,
       5,    0,   41,    2, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GameMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGameMenuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGameMenuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGameMenuENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GameMenu, std::true_type>,
        // method 'play'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newgame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addtank'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GameMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->play(); break;
        case 1: _t->newgame(); break;
        case 2: _t->addtank(); break;
        case 3: _t->exit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameMenu::*)();
            if (_t _q_method = &GameMenu::play; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameMenu::*)();
            if (_t _q_method = &GameMenu::newgame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameMenu::*)();
            if (_t _q_method = &GameMenu::addtank; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GameMenu::*)();
            if (_t _q_method = &GameMenu::exit; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *GameMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGameMenuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void GameMenu::play()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GameMenu::newgame()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GameMenu::addtank()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GameMenu::exit()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
