/****************************************************************************
** Meta object code from reading C++ file 'modulelayouter.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modulelayouter.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modulelayouter.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv14ModuleLayouterE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::ModuleLayouter::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv14ModuleLayouterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::ModuleLayouter",
        "layoutVisualisationStarts",
        "",
        "cModule*",
        "module",
        "QGraphicsScene*",
        "layoutingScene",
        "layoutVisualisationEnds",
        "moduleLayoutChanged",
        "stop",
        "clearLayout",
        "forgetPosition",
        "submodule",
        "refreshPositionFromDS",
        "incrementLayoutSeed",
        "ensureLayouted",
        "fullRelayout"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'layoutVisualisationStarts'
        QtMocHelpers::SignalData<void(cModule *, QGraphicsScene *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Signal 'layoutVisualisationEnds'
        QtMocHelpers::SignalData<void(cModule *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'moduleLayoutChanged'
        QtMocHelpers::SignalData<void(cModule *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'stop'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearLayout'
        QtMocHelpers::SlotData<void(cModule *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'forgetPosition'
        QtMocHelpers::SlotData<void(cModule *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 12 },
        }}),
        // Slot 'refreshPositionFromDS'
        QtMocHelpers::SlotData<void(cModule *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 12 },
        }}),
        // Slot 'incrementLayoutSeed'
        QtMocHelpers::SlotData<void(cModule *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'ensureLayouted'
        QtMocHelpers::SlotData<void(cModule *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'fullRelayout'
        QtMocHelpers::SlotData<void(cModule *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ModuleLayouter, qt_meta_tag_ZN7omnetpp5qtenv14ModuleLayouterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::ModuleLayouter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv14ModuleLayouterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv14ModuleLayouterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv14ModuleLayouterE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::ModuleLayouter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ModuleLayouter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->layoutVisualisationStarts((*reinterpret_cast< std::add_pointer_t<cModule*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGraphicsScene*>>(_a[2]))); break;
        case 1: _t->layoutVisualisationEnds((*reinterpret_cast< std::add_pointer_t<cModule*>>(_a[1]))); break;
        case 2: _t->moduleLayoutChanged((*reinterpret_cast< std::add_pointer_t<cModule*>>(_a[1]))); break;
        case 3: _t->stop(); break;
        case 4: _t->clearLayout((*reinterpret_cast< std::add_pointer_t<cModule*>>(_a[1]))); break;
        case 5: _t->forgetPosition((*reinterpret_cast< std::add_pointer_t<cModule*>>(_a[1]))); break;
        case 6: _t->refreshPositionFromDS((*reinterpret_cast< std::add_pointer_t<cModule*>>(_a[1]))); break;
        case 7: _t->incrementLayoutSeed((*reinterpret_cast< std::add_pointer_t<cModule*>>(_a[1]))); break;
        case 8: _t->ensureLayouted((*reinterpret_cast< std::add_pointer_t<cModule*>>(_a[1]))); break;
        case 9: _t->fullRelayout((*reinterpret_cast< std::add_pointer_t<cModule*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ModuleLayouter::*)(cModule * , QGraphicsScene * )>(_a, &ModuleLayouter::layoutVisualisationStarts, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModuleLayouter::*)(cModule * )>(_a, &ModuleLayouter::layoutVisualisationEnds, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModuleLayouter::*)(cModule * )>(_a, &ModuleLayouter::moduleLayoutChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModuleLayouter::*)()>(_a, &ModuleLayouter::stop, 3))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::ModuleLayouter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::ModuleLayouter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv14ModuleLayouterE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int omnetpp::qtenv::ModuleLayouter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::ModuleLayouter::layoutVisualisationStarts(cModule * _t1, QGraphicsScene * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void omnetpp::qtenv::ModuleLayouter::layoutVisualisationEnds(cModule * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void omnetpp::qtenv::ModuleLayouter::moduleLayoutChanged(cModule * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void omnetpp::qtenv::ModuleLayouter::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
