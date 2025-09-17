/****************************************************************************
** Meta object code from reading C++ file 'qtenv.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtenv.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtenv.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv5QtenvE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::Qtenv::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv5QtenvE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::Qtenv",
        "fontChanged",
        "",
        "objectDeletedSignal",
        "cObject*",
        "object",
        "onSelectionChanged",
        "onObjectDoubleClicked",
        "inspect",
        "runUntilModule",
        "runUntilMessage",
        "excludeMessage",
        "utilitiesSubMenu",
        "viewNedSource",
        "updateStoredInspector",
        "newObject",
        "oldObject",
        "setComponentLogLevel",
        "cComponent*",
        "component",
        "LogLevel",
        "level",
        "save",
        "initialSetUpConfiguration"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fontChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'objectDeletedSignal'
        QtMocHelpers::SignalData<void(cObject *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'onSelectionChanged'
        QtMocHelpers::SlotData<void(cObject *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'onObjectDoubleClicked'
        QtMocHelpers::SlotData<void(cObject *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'inspect'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'runUntilModule'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'runUntilMessage'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'excludeMessage'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'utilitiesSubMenu'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'viewNedSource'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateStoredInspector'
        QtMocHelpers::SlotData<void(cObject *, cObject *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 15 }, { 0x80000000 | 4, 16 },
        }}),
        // Slot 'setComponentLogLevel'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setComponentLogLevel'
        QtMocHelpers::SlotData<void(cComponent *, LogLevel, bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 }, { 0x80000000 | 20, 21 }, { QMetaType::Bool, 22 },
        }}),
        // Slot 'setComponentLogLevel'
        QtMocHelpers::SlotData<void(cComponent *, LogLevel)>(17, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 18, 19 }, { 0x80000000 | 20, 21 },
        }}),
        // Slot 'initialSetUpConfiguration'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Qtenv, qt_meta_tag_ZN7omnetpp5qtenv5QtenvE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::Qtenv::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv5QtenvE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv5QtenvE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv5QtenvE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::Qtenv::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Qtenv *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fontChanged(); break;
        case 1: _t->objectDeletedSignal((*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[1]))); break;
        case 2: _t->onSelectionChanged((*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[1]))); break;
        case 3: _t->onObjectDoubleClicked((*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[1]))); break;
        case 4: _t->inspect(); break;
        case 5: _t->runUntilModule(); break;
        case 6: _t->runUntilMessage(); break;
        case 7: _t->excludeMessage(); break;
        case 8: _t->utilitiesSubMenu(); break;
        case 9: _t->viewNedSource(); break;
        case 10: _t->updateStoredInspector((*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[2]))); break;
        case 11: _t->setComponentLogLevel(); break;
        case 12: _t->setComponentLogLevel((*reinterpret_cast< std::add_pointer_t<cComponent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LogLevel>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 13: _t->setComponentLogLevel((*reinterpret_cast< std::add_pointer_t<cComponent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LogLevel>>(_a[2]))); break;
        case 14: _t->initialSetUpConfiguration(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Qtenv::*)()>(_a, &Qtenv::fontChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Qtenv::*)(cObject * )>(_a, &Qtenv::objectDeletedSignal, 1))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::Qtenv::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::Qtenv::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv5QtenvE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "EnvirBase"))
        return static_cast< EnvirBase*>(this);
    return QObject::qt_metacast(_clname);
}

int omnetpp::qtenv::Qtenv::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::Qtenv::fontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void omnetpp::qtenv::Qtenv::objectDeletedSignal(cObject * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
