/****************************************************************************
** Meta object code from reading C++ file 'impedancecheck_test.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../impedancecheck_test.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'impedancecheck_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImpedanceCheck_test_t {
    QByteArrayData data[15];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImpedanceCheck_test_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImpedanceCheck_test_t qt_meta_stringdata_ImpedanceCheck_test = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ImpedanceCheck_test"
QT_MOC_LITERAL(1, 20, 9), // "setButton"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "resetGUIButton"
QT_MOC_LITERAL(4, 46, 15), // "updateFramesize"
QT_MOC_LITERAL(5, 62, 12), // "newframesize"
QT_MOC_LITERAL(6, 75, 17), // "updateSpacerValue"
QT_MOC_LITERAL(7, 93, 14), // "newspacervalue"
QT_MOC_LITERAL(8, 108, 14), // "updateFontSize"
QT_MOC_LITERAL(9, 123, 11), // "newfontsize"
QT_MOC_LITERAL(10, 135, 9), // "enableEEG"
QT_MOC_LITERAL(11, 145, 13), // "stopstreamEEG"
QT_MOC_LITERAL(12, 159, 10), // "closeEvent"
QT_MOC_LITERAL(13, 170, 12), // "QCloseEvent*"
QT_MOC_LITERAL(14, 183, 5) // "event"

    },
    "ImpedanceCheck_test\0setButton\0\0"
    "resetGUIButton\0updateFramesize\0"
    "newframesize\0updateSpacerValue\0"
    "newspacervalue\0updateFontSize\0newfontsize\0"
    "enableEEG\0stopstreamEEG\0closeEvent\0"
    "QCloseEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImpedanceCheck_test[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void ImpedanceCheck_test::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImpedanceCheck_test *_t = static_cast<ImpedanceCheck_test *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setButton(); break;
        case 1: _t->resetGUIButton(); break;
        case 2: _t->updateFramesize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateSpacerValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->enableEEG(); break;
        case 6: _t->stopstreamEEG(); break;
        case 7: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ImpedanceCheck_test::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ImpedanceCheck_test.data,
      qt_meta_data_ImpedanceCheck_test,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImpedanceCheck_test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImpedanceCheck_test::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImpedanceCheck_test.stringdata0))
        return static_cast<void*>(const_cast< ImpedanceCheck_test*>(this));
    return QWidget::qt_metacast(_clname);
}

int ImpedanceCheck_test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
