/****************************************************************************
** Meta object code from reading C++ file 'loginspector.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "loginspector.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginspector.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv12LogInspectorE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::LogInspector::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv12LogInspectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::LogInspector",
        "selectionChanged",
        "",
        "cObject*",
        "globalMessageFormatChanged",
        "globalMessageFormatChangedBroadcast",
        "runUntil",
        "fastRunUntil",
        "onFontChanged",
        "onGlobalMessageFormatChanged",
        "onGlobalMessageFormatChangedBroadcast",
        "onFindButton",
        "findAgain",
        "findAgainReverse",
        "onGoToSimTimeAction",
        "onGoToEventAction",
        "onSetBookmarkAction",
        "onGoToBookmarkAction",
        "goToSimTime",
        "SimTime",
        "t",
        "goToEvent",
        "eventnumber_t",
        "e",
        "onFilterButton",
        "onClearFilterButton",
        "onMessagePrinterTagsButton",
        "onCaretMoved",
        "lineIndex",
        "column",
        "onRightClicked",
        "globalPos",
        "toMessagesMode",
        "toLogMode",
        "saveColumnWidths",
        "restoreColumnWidths",
        "saveFilterSettings",
        "restoreFilterSettings",
        "saveMessagePrinterOptions",
        "restoreMessagePrinterOptions",
        "recreateProviders",
        "saveContent"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selectionChanged'
        QtMocHelpers::SignalData<void(cObject *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'globalMessageFormatChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'globalMessageFormatChangedBroadcast'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'runUntil'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'fastRunUntil'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFontChanged'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onGlobalMessageFormatChanged'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onGlobalMessageFormatChangedBroadcast'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFindButton'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'findAgain'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'findAgainReverse'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onGoToSimTimeAction'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onGoToEventAction'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSetBookmarkAction'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onGoToBookmarkAction'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'goToSimTime'
        QtMocHelpers::SlotData<void(SimTime)>(18, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'goToEvent'
        QtMocHelpers::SlotData<void(eventnumber_t)>(21, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'onFilterButton'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onClearFilterButton'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onMessagePrinterTagsButton'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCaretMoved'
        QtMocHelpers::SlotData<void(int, int)>(27, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 28 }, { QMetaType::Int, 29 },
        }}),
        // Slot 'onRightClicked'
        QtMocHelpers::SlotData<void(QPoint, int, int)>(30, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QPoint, 31 }, { QMetaType::Int, 28 }, { QMetaType::Int, 29 },
        }}),
        // Slot 'toMessagesMode'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'toLogMode'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'saveColumnWidths'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'restoreColumnWidths'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'saveFilterSettings'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'restoreFilterSettings'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'saveMessagePrinterOptions'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'restoreMessagePrinterOptions'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'recreateProviders'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'saveContent'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LogInspector, qt_meta_tag_ZN7omnetpp5qtenv12LogInspectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::LogInspector::staticMetaObject = { {
    QMetaObject::SuperData::link<Inspector::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv12LogInspectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv12LogInspectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv12LogInspectorE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::LogInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LogInspector *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[1]))); break;
        case 1: _t->globalMessageFormatChanged(); break;
        case 2: _t->globalMessageFormatChangedBroadcast(); break;
        case 3: _t->runUntil(); break;
        case 4: _t->fastRunUntil(); break;
        case 5: _t->onFontChanged(); break;
        case 6: _t->onGlobalMessageFormatChanged(); break;
        case 7: _t->onGlobalMessageFormatChangedBroadcast(); break;
        case 8: _t->onFindButton(); break;
        case 9: _t->findAgain(); break;
        case 10: _t->findAgainReverse(); break;
        case 11: _t->onGoToSimTimeAction(); break;
        case 12: _t->onGoToEventAction(); break;
        case 13: _t->onSetBookmarkAction(); break;
        case 14: _t->onGoToBookmarkAction(); break;
        case 15: _t->goToSimTime((*reinterpret_cast< std::add_pointer_t<SimTime>>(_a[1]))); break;
        case 16: _t->goToEvent((*reinterpret_cast< std::add_pointer_t<eventnumber_t>>(_a[1]))); break;
        case 17: _t->onFilterButton(); break;
        case 18: _t->onClearFilterButton(); break;
        case 19: _t->onMessagePrinterTagsButton(); break;
        case 20: _t->onCaretMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 21: _t->onRightClicked((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 22: _t->toMessagesMode(); break;
        case 23: _t->toLogMode(); break;
        case 24: _t->saveColumnWidths(); break;
        case 25: _t->restoreColumnWidths(); break;
        case 26: _t->saveFilterSettings(); break;
        case 27: _t->restoreFilterSettings(); break;
        case 28: _t->saveMessagePrinterOptions(); break;
        case 29: _t->restoreMessagePrinterOptions(); break;
        case 30: _t->recreateProviders(); break;
        case 31: _t->saveContent(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LogInspector::*)(cObject * )>(_a, &LogInspector::selectionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogInspector::*)()>(_a, &LogInspector::globalMessageFormatChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogInspector::*)()>(_a, &LogInspector::globalMessageFormatChangedBroadcast, 2))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::LogInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::LogInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv12LogInspectorE_t>.strings))
        return static_cast<void*>(this);
    return Inspector::qt_metacast(_clname);
}

int omnetpp::qtenv::LogInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Inspector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::LogInspector::selectionChanged(cObject * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void omnetpp::qtenv::LogInspector::globalMessageFormatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void omnetpp::qtenv::LogInspector::globalMessageFormatChangedBroadcast()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
