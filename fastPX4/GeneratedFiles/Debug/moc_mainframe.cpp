/****************************************************************************
** Meta object code from reading C++ file 'mainframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mainframe_t {
    QByteArrayData data[7];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainframe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainframe_t qt_meta_stringdata_mainframe = {
    {
QT_MOC_LITERAL(0, 0, 9), // "mainframe"
QT_MOC_LITERAL(1, 10, 12), // "LoadWorkPath"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "OpenFolder"
QT_MOC_LITERAL(4, 35, 17), // "DoubleClickedList"
QT_MOC_LITERAL(5, 53, 5), // "index"
QT_MOC_LITERAL(6, 59, 7) // "Develop"

    },
    "mainframe\0LoadWorkPath\0\0OpenFolder\0"
    "DoubleClickedList\0index\0Develop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainframe[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,

       0        // eod
};

void mainframe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mainframe *_t = static_cast<mainframe *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LoadWorkPath(); break;
        case 1: _t->OpenFolder(); break;
        case 2: _t->DoubleClickedList((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->Develop(); break;
        default: ;
        }
    }
}

const QMetaObject mainframe::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_mainframe.data,
      qt_meta_data_mainframe,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mainframe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainframe::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mainframe.stringdata0))
        return static_cast<void*>(const_cast< mainframe*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int mainframe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
