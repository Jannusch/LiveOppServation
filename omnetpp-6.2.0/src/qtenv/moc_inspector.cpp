/****************************************************************************
** Meta object code from reading C++ file 'inspector.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inspector.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inspector.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv9InspectorE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::Inspector::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv9InspectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::Inspector",
        "selectionChanged",
        "",
        "cObject*",
        "object",
        "objectDoubleClicked",
        "inspectedObjectChanged",
        "newObject",
        "oldObject",
        "setObject",
        "goBack",
        "goForward",
        "inspectParent",
        "findObjectsWithin",
        "goUpInto"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selectionChanged'
        QtMocHelpers::SignalData<void(cObject *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'objectDoubleClicked'
        QtMocHelpers::SignalData<void(cObject *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'inspectedObjectChanged'
        QtMocHelpers::SignalData<void(cObject *, cObject *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 7 }, { 0x80000000 | 3, 8 },
        }}),
        // Slot 'setObject'
        QtMocHelpers::SlotData<void(cObject *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'goBack'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'goForward'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'inspectParent'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'findObjectsWithin'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'goUpInto'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Inspector, qt_meta_tag_ZN7omnetpp5qtenv9InspectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::Inspector::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv9InspectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv9InspectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv9InspectorE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::Inspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Inspector *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[1]))); break;
        case 1: _t->objectDoubleClicked((*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[1]))); break;
        case 2: _t->inspectedObjectChanged((*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[2]))); break;
        case 3: _t->setObject((*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[1]))); break;
        case 4: _t->goBack(); break;
        case 5: _t->goForward(); break;
        case 6: _t->inspectParent(); break;
        case 7: _t->findObjectsWithin(); break;
        case 8: _t->goUpInto(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Inspector::*)(cObject * )>(_a, &Inspector::selectionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Inspector::*)(cObject * )>(_a, &Inspector::objectDoubleClicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Inspector::*)(cObject * , cObject * )>(_a, &Inspector::inspectedObjectChanged, 2))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::Inspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::Inspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv9InspectorE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int omnetpp::qtenv::Inspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::Inspector::selectionChanged(cObject * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void omnetpp::qtenv::Inspector::objectDoubleClicked(cObject * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void omnetpp::qtenv::Inspector::inspectedObjectChanged(cObject * _t1, cObject * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
QT_WARNING_POP
