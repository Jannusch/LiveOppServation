/****************************************************************************
** Meta object code from reading C++ file 'objecttreeinspector.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "objecttreeinspector.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objecttreeinspector.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv19ObjectTreeInspectorE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::ObjectTreeInspector::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv19ObjectTreeInspectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::ObjectTreeInspector",
        "onClick",
        "",
        "QModelIndex",
        "index",
        "onDoubleClick",
        "gatherVisibleData",
        "gatherVisibleDataIfSafe",
        "createContextMenu",
        "pos"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onClick'
        QtMocHelpers::SlotData<void(QModelIndex)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onDoubleClick'
        QtMocHelpers::SlotData<void(QModelIndex)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'gatherVisibleData'
        QtMocHelpers::SlotData<bool()>(6, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'gatherVisibleDataIfSafe'
        QtMocHelpers::SlotData<bool()>(7, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'createContextMenu'
        QtMocHelpers::SlotData<void(QPoint)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ObjectTreeInspector, qt_meta_tag_ZN7omnetpp5qtenv19ObjectTreeInspectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::ObjectTreeInspector::staticMetaObject = { {
    QMetaObject::SuperData::link<Inspector::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv19ObjectTreeInspectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv19ObjectTreeInspectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv19ObjectTreeInspectorE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::ObjectTreeInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ObjectTreeInspector *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onClick((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->onDoubleClick((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: { bool _r = _t->gatherVisibleData();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->gatherVisibleDataIfSafe();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->createContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *omnetpp::qtenv::ObjectTreeInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::ObjectTreeInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv19ObjectTreeInspectorE_t>.strings))
        return static_cast<void*>(this);
    return Inspector::qt_metacast(_clname);
}

int omnetpp::qtenv::ObjectTreeInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Inspector::qt_metacall(_c, _id, _a);
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
