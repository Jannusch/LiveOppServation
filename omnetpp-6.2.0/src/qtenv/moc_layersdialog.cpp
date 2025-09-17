/****************************************************************************
** Meta object code from reading C++ file 'layersdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "layersdialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layersdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv12LayersDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::LayersDialog::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv12LayersDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::LayersDialog",
        "onEnabledCheckBoxClicked",
        "",
        "checked",
        "onExceptCheckBoxClicked",
        "applyTagFilters",
        "accept",
        "reject"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onEnabledCheckBoxClicked'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'onExceptCheckBoxClicked'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'applyTagFilters'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reject'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LayersDialog, qt_meta_tag_ZN7omnetpp5qtenv12LayersDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::LayersDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv12LayersDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv12LayersDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv12LayersDialogE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::LayersDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LayersDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onEnabledCheckBoxClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->onExceptCheckBoxClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->applyTagFilters(); break;
        case 3: _t->accept(); break;
        case 4: _t->reject(); break;
        default: ;
        }
    }
}

const QMetaObject *omnetpp::qtenv::LayersDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::LayersDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv12LayersDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int omnetpp::qtenv::LayersDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
