/****************************************************************************
** Meta object code from reading C++ file 'mainmenuwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainmenuwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainmenuwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
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
struct qt_meta_tag_ZN14mainmenuwindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN14mainmenuwindowE = QtMocHelpers::stringData(
    "mainmenuwindow",
    "getPatientId",
    "",
    "on_PBMainMenu_clicked",
    "on_PBPacientList_clicked",
    "on_TVPatients_doubleClicked",
    "QModelIndex",
    "index",
    "on_PBFindPatient_clicked",
    "on_PBServices_clicked",
    "on_PBAppointment_clicked",
    "on_LESecondName_returnPressed",
    "on_PBPatietTableAdd_clicked",
    "on_PBPatientTableDelete_clicked",
    "on_PBPatientTableEdit_clicked",
    "on_PBServiceTableAdd_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14mainmenuwindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x0a,    1 /* Public */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    1,   89,    2, 0x08,    4 /* Private */,
       8,    0,   92,    2, 0x08,    6 /* Private */,
       9,    0,   93,    2, 0x08,    7 /* Private */,
      10,    0,   94,    2, 0x08,    8 /* Private */,
      11,    0,   95,    2, 0x08,    9 /* Private */,
      12,    0,   96,    2, 0x08,   10 /* Private */,
      13,    0,   97,    2, 0x08,   11 /* Private */,
      14,    0,   98,    2, 0x08,   12 /* Private */,
      15,    0,   99,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
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

Q_CONSTINIT const QMetaObject mainmenuwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN14mainmenuwindowE.offsetsAndSizes,
    qt_meta_data_ZN14mainmenuwindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN14mainmenuwindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<mainmenuwindow, std::true_type>,
        // method 'getPatientId'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_PBMainMenu_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PBPacientList_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_TVPatients_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_PBFindPatient_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PBServices_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PBAppointment_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_LESecondName_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PBPatietTableAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PBPatientTableDelete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PBPatientTableEdit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PBServiceTableAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mainmenuwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<mainmenuwindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = _t->getPatientId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->on_PBMainMenu_clicked(); break;
        case 2: _t->on_PBPacientList_clicked(); break;
        case 3: _t->on_TVPatients_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->on_PBFindPatient_clicked(); break;
        case 5: _t->on_PBServices_clicked(); break;
        case 6: _t->on_PBAppointment_clicked(); break;
        case 7: _t->on_LESecondName_returnPressed(); break;
        case 8: _t->on_PBPatietTableAdd_clicked(); break;
        case 9: _t->on_PBPatientTableDelete_clicked(); break;
        case 10: _t->on_PBPatientTableEdit_clicked(); break;
        case 11: _t->on_PBServiceTableAdd_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *mainmenuwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainmenuwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN14mainmenuwindowE.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int mainmenuwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
