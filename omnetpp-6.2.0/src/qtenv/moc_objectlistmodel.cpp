/****************************************************************************
** Meta object code from reading C++ file 'objectlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "objectlistmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectlistmodel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv15ObjectListModelE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::ObjectListModel::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv15ObjectListModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::ObjectListModel",
        "sort",
        "",
        "i",
        "Qt::SortOrder",
        "order",
        "removeObject",
        "cObject*",
        "object"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'sort'
        QtMocHelpers::SlotData<void(int, Qt::SortOrder)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Slot 'removeObject'
        QtMocHelpers::SlotData<void(cObject *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ObjectListModel, qt_meta_tag_ZN7omnetpp5qtenv15ObjectListModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::ObjectListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv15ObjectListModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv15ObjectListModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv15ObjectListModelE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::ObjectListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ObjectListModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sort((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::SortOrder>>(_a[2]))); break;
        case 1: _t->removeObject((*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *omnetpp::qtenv::ObjectListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::ObjectListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv15ObjectListModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int omnetpp::qtenv::ObjectListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
