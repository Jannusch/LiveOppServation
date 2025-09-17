/****************************************************************************
** Meta object code from reading C++ file 'genericobjecttreemodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "genericobjecttreemodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'genericobjecttreemodel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv22GenericObjectTreeModelE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::GenericObjectTreeModel::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv22GenericObjectTreeModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::GenericObjectTreeModel",
        "dataEdited",
        "",
        "QModelIndex",
        "index"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dataEdited'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GenericObjectTreeModel, qt_meta_tag_ZN7omnetpp5qtenv22GenericObjectTreeModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::GenericObjectTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv22GenericObjectTreeModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv22GenericObjectTreeModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv22GenericObjectTreeModelE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::GenericObjectTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GenericObjectTreeModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dataEdited((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GenericObjectTreeModel::*)(const QModelIndex & )>(_a, &GenericObjectTreeModel::dataEdited, 0))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::GenericObjectTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::GenericObjectTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv22GenericObjectTreeModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int omnetpp::qtenv::GenericObjectTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::GenericObjectTreeModel::dataEdited(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
