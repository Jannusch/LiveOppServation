/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::MainWindow",
        "setNewNetwork",
        "",
        "closed",
        "on_actionOneStep_triggered",
        "on_actionRun_triggered",
        "on_actionFastRun_triggered",
        "on_actionExpressRun_triggered",
        "on_actionStop_triggered",
        "on_actionRunUntil_triggered",
        "on_actionDebugNextEvent_triggered",
        "on_actionDebugOnErrors_triggered",
        "checked",
        "on_actionDebugNow_triggered",
        "on_actionQuit_triggered",
        "onSliderValueChanged",
        "value",
        "on_actionSetUpUnconfiguredNetwork_triggered",
        "on_actionSetUpConfiguration_triggered",
        "on_actionRebuildNetwork_triggered",
        "on_actionPreferences_triggered",
        "on_actionStatusDetails_triggered",
        "on_actionFindInspectObjects_triggered",
        "on_actionEventlogRecording_triggered",
        "on_actionAbout_OMNeT_Qtenv_triggered",
        "closeEvent",
        "QCloseEvent*",
        "event",
        "showFindObjectsDialog",
        "cObject*",
        "obj",
        "updateSpeedSlider",
        "enterLayoutingMode",
        "exitLayoutingMode",
        "on_actionVerticalLayout_triggered",
        "on_actionHorizontalLayout_triggered",
        "on_actionFlipWindowLayout_triggered",
        "on_actionTimeline_toggled",
        "isSunken",
        "onSplitterMoved",
        "onSimTimeLabelContextMenuRequested",
        "pos",
        "onSimTimeLabelGroupingTriggered",
        "onSimTimeLabelUnitsTriggered",
        "onEventNumLabelContextMenuRequested",
        "onEventNumLabelGroupingTriggered",
        "on_actionLoadNedFile_triggered",
        "on_actionOpenPrimaryIniFile_triggered",
        "on_actionCreate_Snapshot_triggered",
        "on_actionConcludeSimulation_triggered",
        "on_actionNetwork_triggered",
        "on_actionScheduledEvents_triggered",
        "on_actionSimulation_triggered",
        "on_actionNedComponentTypes_triggered",
        "on_actionRegisteredClasses_triggered",
        "on_actionClassDescriptors_triggered",
        "on_actionNED_Functions_triggered",
        "on_actionRegistered_Enums_triggered",
        "on_actionSupportedConfigurationOption_triggered",
        "on_actionResultFilters_triggered",
        "on_actionResultRecorders_triggered",
        "on_actionMessagePrinters_triggered",
        "on_actionInspectByPointer_triggered",
        "on_actionRecordVideo_toggled",
        "on_actionShowAnimationParams_toggled",
        "on_actionSimulationInfo_triggered",
        "showSimulationInfo"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'setNewNetwork'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closed'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionOneStep_triggered'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionRun_triggered'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionFastRun_triggered'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionExpressRun_triggered'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionStop_triggered'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionRunUntil_triggered'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionDebugNextEvent_triggered'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionDebugOnErrors_triggered'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'on_actionDebugNow_triggered'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionQuit_triggered'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onSliderValueChanged'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Slot 'on_actionSetUpUnconfiguredNetwork_triggered'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionSetUpConfiguration_triggered'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionRebuildNetwork_triggered'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionPreferences_triggered'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionStatusDetails_triggered'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionFindInspectObjects_triggered'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionEventlogRecording_triggered'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionAbout_OMNeT_Qtenv_triggered'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closeEvent'
        QtMocHelpers::SlotData<void(QCloseEvent *)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 26, 27 },
        }}),
        // Slot 'showFindObjectsDialog'
        QtMocHelpers::SlotData<void(cObject *)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 29, 30 },
        }}),
        // Slot 'updateSpeedSlider'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'enterLayoutingMode'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'exitLayoutingMode'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionVerticalLayout_triggered'
        QtMocHelpers::SlotData<void(bool)>(34, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'on_actionHorizontalLayout_triggered'
        QtMocHelpers::SlotData<void(bool)>(35, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'on_actionFlipWindowLayout_triggered'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_actionTimeline_toggled'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 38 },
        }}),
        // Slot 'onSplitterMoved'
        QtMocHelpers::SlotData<void(int, int)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'onSimTimeLabelContextMenuRequested'
        QtMocHelpers::SlotData<void(QPoint)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPoint, 41 },
        }}),
        // Slot 'onSimTimeLabelGroupingTriggered'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSimTimeLabelUnitsTriggered'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEventNumLabelContextMenuRequested'
        QtMocHelpers::SlotData<void(QPoint)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPoint, 41 },
        }}),
        // Slot 'onEventNumLabelGroupingTriggered'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionLoadNedFile_triggered'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpenPrimaryIniFile_triggered'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCreate_Snapshot_triggered'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionConcludeSimulation_triggered'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNetwork_triggered'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionScheduledEvents_triggered'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSimulation_triggered'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNedComponentTypes_triggered'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRegisteredClasses_triggered'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionClassDescriptors_triggered'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNED_Functions_triggered'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRegistered_Enums_triggered'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSupportedConfigurationOption_triggered'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionResultFilters_triggered'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionResultRecorders_triggered'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMessagePrinters_triggered'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInspectByPointer_triggered'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRecordVideo_toggled'
        QtMocHelpers::SlotData<void(bool)>(63, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'on_actionShowAnimationParams_toggled'
        QtMocHelpers::SlotData<void(bool)>(64, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'on_actionSimulationInfo_triggered'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showSimulationInfo'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN7omnetpp5qtenv10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv10MainWindowE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setNewNetwork(); break;
        case 1: _t->closed(); break;
        case 2: _t->on_actionOneStep_triggered(); break;
        case 3: _t->on_actionRun_triggered(); break;
        case 4: _t->on_actionFastRun_triggered(); break;
        case 5: _t->on_actionExpressRun_triggered(); break;
        case 6: _t->on_actionStop_triggered(); break;
        case 7: _t->on_actionRunUntil_triggered(); break;
        case 8: _t->on_actionDebugNextEvent_triggered(); break;
        case 9: _t->on_actionDebugOnErrors_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->on_actionDebugNow_triggered(); break;
        case 11: _t->on_actionQuit_triggered(); break;
        case 12: _t->onSliderValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_actionSetUpUnconfiguredNetwork_triggered(); break;
        case 14: _t->on_actionSetUpConfiguration_triggered(); break;
        case 15: _t->on_actionRebuildNetwork_triggered(); break;
        case 16: _t->on_actionPreferences_triggered(); break;
        case 17: _t->on_actionStatusDetails_triggered(); break;
        case 18: _t->on_actionFindInspectObjects_triggered(); break;
        case 19: _t->on_actionEventlogRecording_triggered(); break;
        case 20: _t->on_actionAbout_OMNeT_Qtenv_triggered(); break;
        case 21: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 22: _t->showFindObjectsDialog((*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[1]))); break;
        case 23: _t->updateSpeedSlider(); break;
        case 24: _t->enterLayoutingMode(); break;
        case 25: _t->exitLayoutingMode(); break;
        case 26: _t->on_actionVerticalLayout_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->on_actionHorizontalLayout_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->on_actionFlipWindowLayout_triggered(); break;
        case 29: _t->on_actionTimeline_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->onSplitterMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 31: _t->onSimTimeLabelContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 32: _t->onSimTimeLabelGroupingTriggered(); break;
        case 33: _t->onSimTimeLabelUnitsTriggered(); break;
        case 34: _t->onEventNumLabelContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 35: _t->onEventNumLabelGroupingTriggered(); break;
        case 36: _t->on_actionLoadNedFile_triggered(); break;
        case 37: _t->on_actionOpenPrimaryIniFile_triggered(); break;
        case 38: _t->on_actionCreate_Snapshot_triggered(); break;
        case 39: _t->on_actionConcludeSimulation_triggered(); break;
        case 40: _t->on_actionNetwork_triggered(); break;
        case 41: _t->on_actionScheduledEvents_triggered(); break;
        case 42: _t->on_actionSimulation_triggered(); break;
        case 43: _t->on_actionNedComponentTypes_triggered(); break;
        case 44: _t->on_actionRegisteredClasses_triggered(); break;
        case 45: _t->on_actionClassDescriptors_triggered(); break;
        case 46: _t->on_actionNED_Functions_triggered(); break;
        case 47: _t->on_actionRegistered_Enums_triggered(); break;
        case 48: _t->on_actionSupportedConfigurationOption_triggered(); break;
        case 49: _t->on_actionResultFilters_triggered(); break;
        case 50: _t->on_actionResultRecorders_triggered(); break;
        case 51: _t->on_actionMessagePrinters_triggered(); break;
        case 52: _t->on_actionInspectByPointer_triggered(); break;
        case 53: _t->on_actionRecordVideo_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 54: _t->on_actionShowAnimationParams_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 55: _t->on_actionSimulationInfo_triggered(); break;
        case 56: _t->showSimulationInfo(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::setNewNetwork, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::closed, 1))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int omnetpp::qtenv::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 57;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::MainWindow::setNewNetwork()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void omnetpp::qtenv::MainWindow::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
