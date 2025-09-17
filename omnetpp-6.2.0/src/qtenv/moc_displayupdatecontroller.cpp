/****************************************************************************
** Meta object code from reading C++ file 'displayupdatecontroller.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "displayupdatecontroller.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displayupdatecontroller.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv23DisplayUpdateControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::DisplayUpdateController::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv23DisplayUpdateControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::DisplayUpdateController",
        "playbackSpeedChanged",
        "",
        "speed",
        "runModeChanged",
        "RunMode",
        "mode",
        "setPlaybackSpeed",
        "RunModeProfile*",
        "profile",
        "pause",
        "resume"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'playbackSpeedChanged'
        QtMocHelpers::SignalData<void(double)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 3 },
        }}),
        // Signal 'runModeChanged'
        QtMocHelpers::SignalData<void(RunMode)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'setPlaybackSpeed'
        QtMocHelpers::SlotData<void(double)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 3 },
        }}),
        // Slot 'setPlaybackSpeed'
        QtMocHelpers::SlotData<void(double, RunModeProfile *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 3 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'pause'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resume'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DisplayUpdateController, qt_meta_tag_ZN7omnetpp5qtenv23DisplayUpdateControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::DisplayUpdateController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv23DisplayUpdateControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv23DisplayUpdateControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv23DisplayUpdateControllerE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::DisplayUpdateController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DisplayUpdateController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->playbackSpeedChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->runModeChanged((*reinterpret_cast< std::add_pointer_t<RunMode>>(_a[1]))); break;
        case 2: _t->setPlaybackSpeed((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->setPlaybackSpeed((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<RunModeProfile*>>(_a[2]))); break;
        case 4: _t->pause(); break;
        case 5: _t->resume(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DisplayUpdateController::*)(double )>(_a, &DisplayUpdateController::playbackSpeedChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DisplayUpdateController::*)(RunMode )>(_a, &DisplayUpdateController::runModeChanged, 1))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::DisplayUpdateController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::DisplayUpdateController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv23DisplayUpdateControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int omnetpp::qtenv::DisplayUpdateController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::DisplayUpdateController::playbackSpeedChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void omnetpp::qtenv::DisplayUpdateController::runModeChanged(RunMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
