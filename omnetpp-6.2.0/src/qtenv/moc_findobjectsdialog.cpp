/****************************************************************************
** Meta object code from reading C++ file 'findobjectsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "findobjectsdialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findobjectsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
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
struct qt_meta_tag_ZN7omnetpp5qtenv17FindObjectsDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::FindObjectsDialog::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv17FindObjectsDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::FindObjectsDialog",
        "invalidate",
        "",
        "refresh",
        "inspect",
        "QModelIndex",
        "index",
        "onListBoxSelectionChanged",
        "QItemSelection",
        "selected",
        "deselected",
        "onFontChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'invalidate'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'refresh'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'inspect'
        QtMocHelpers::SlotData<void(QModelIndex)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'onListBoxSelectionChanged'
        QtMocHelpers::SlotData<void(QItemSelection, QItemSelection)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 8, 10 },
        }}),
        // Slot 'onFontChanged'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FindObjectsDialog, qt_meta_tag_ZN7omnetpp5qtenv17FindObjectsDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::FindObjectsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv17FindObjectsDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv17FindObjectsDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv17FindObjectsDialogE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::FindObjectsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FindObjectsDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->invalidate(); break;
        case 1: _t->refresh(); break;
        case 2: _t->inspect((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->onListBoxSelectionChanged((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 4: _t->onFontChanged(); break;
        default: ;
        }
    }
}

const QMetaObject *omnetpp::qtenv::FindObjectsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::FindObjectsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv17FindObjectsDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int omnetpp::qtenv::FindObjectsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
