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
    "getId",
    "",
    "QTableView*",
    "table",
    "getTimeOfDayGreeting",
    "updateClock",
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
    "on_PBServiceTableAdd_clicked",
    "on_PBServiceTableDelete_clicked",
    "on_PBServiceTableEdit_clicked",
    "on_TVServices_doubleClicked",
    "on_PBServiceFind_clicked",
    "on_CWAppointments_clicked",
    "date",
    "on_TVAppointments_doubleClicked",
    "on_PBAppointmentAdd_clicked",
    "on_PBAppointmentEdit_clicked",
    "on_PBAppointmentDelete_clicked",
    "on_PBMainMenuUsers_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14mainmenuwindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  158,    2, 0x0a,    1 /* Public */,
       5,    0,  161,    2, 0x08,    3 /* Private */,
       6,    0,  162,    2, 0x08,    4 /* Private */,
       7,    0,  163,    2, 0x08,    5 /* Private */,
       8,    0,  164,    2, 0x08,    6 /* Private */,
       9,    1,  165,    2, 0x08,    7 /* Private */,
      12,    0,  168,    2, 0x08,    9 /* Private */,
      13,    0,  169,    2, 0x08,   10 /* Private */,
      14,    0,  170,    2, 0x08,   11 /* Private */,
      15,    0,  171,    2, 0x08,   12 /* Private */,
      16,    0,  172,    2, 0x08,   13 /* Private */,
      17,    0,  173,    2, 0x08,   14 /* Private */,
      18,    0,  174,    2, 0x08,   15 /* Private */,
      19,    0,  175,    2, 0x08,   16 /* Private */,
      20,    0,  176,    2, 0x08,   17 /* Private */,
      21,    0,  177,    2, 0x08,   18 /* Private */,
      22,    1,  178,    2, 0x08,   19 /* Private */,
      23,    0,  181,    2, 0x08,   21 /* Private */,
      24,    1,  182,    2, 0x08,   22 /* Private */,
      26,    1,  185,    2, 0x08,   24 /* Private */,
      27,    0,  188,    2, 0x08,   26 /* Private */,
      28,    0,  189,    2, 0x08,   27 /* Private */,
      29,    0,  190,    2, 0x08,   28 /* Private */,
      30,    0,  191,    2, 0x08,   29 /* Private */,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 3,    4,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
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
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   25,
    QMetaType::Void, 0x80000000 | 10,   11,
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
        // method 'getId'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableView *, std::false_type>,
        // method 'getTimeOfDayGreeting'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateClock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PBServiceTableDelete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PBServiceTableEdit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_TVServices_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_PBServiceFind_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_CWAppointments_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'on_TVAppointments_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_PBAppointmentAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PBAppointmentEdit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PBAppointmentDelete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PBMainMenuUsers_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mainmenuwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<mainmenuwindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = _t->getId((*reinterpret_cast< std::add_pointer_t<QTableView*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getTimeOfDayGreeting();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->updateClock(); break;
        case 3: _t->on_PBMainMenu_clicked(); break;
        case 4: _t->on_PBPacientList_clicked(); break;
        case 5: _t->on_TVPatients_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->on_PBFindPatient_clicked(); break;
        case 7: _t->on_PBServices_clicked(); break;
        case 8: _t->on_PBAppointment_clicked(); break;
        case 9: _t->on_LESecondName_returnPressed(); break;
        case 10: _t->on_PBPatietTableAdd_clicked(); break;
        case 11: _t->on_PBPatientTableDelete_clicked(); break;
        case 12: _t->on_PBPatientTableEdit_clicked(); break;
        case 13: _t->on_PBServiceTableAdd_clicked(); break;
        case 14: _t->on_PBServiceTableDelete_clicked(); break;
        case 15: _t->on_PBServiceTableEdit_clicked(); break;
        case 16: _t->on_TVServices_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 17: _t->on_PBServiceFind_clicked(); break;
        case 18: _t->on_CWAppointments_clicked((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 19: _t->on_TVAppointments_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 20: _t->on_PBAppointmentAdd_clicked(); break;
        case 21: _t->on_PBAppointmentEdit_clicked(); break;
        case 22: _t->on_PBAppointmentDelete_clicked(); break;
        case 23: _t->on_PBMainMenuUsers_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableView* >(); break;
            }
            break;
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
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_WARNING_POP
