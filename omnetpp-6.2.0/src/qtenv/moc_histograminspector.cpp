/****************************************************************************
** Meta object code from reading C++ file 'histograminspector.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "histograminspector.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'histograminspector.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv18HistogramInspectorE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::HistogramInspector::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv18HistogramInspectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::HistogramInspector",
        "onShowCellInfo",
        "",
        "bin",
        "onCustomContextMenuRequested",
        "pos",
        "onShowCounts",
        "onShowPDF",
        "onOptionsTriggered",
        "onApplyButtonClicked",
        "onSetUpBinsClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onShowCellInfo'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'onCustomContextMenuRequested'
        QtMocHelpers::SlotData<void(QPoint)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPoint, 5 },
        }}),
        // Slot 'onShowCounts'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowPDF'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOptionsTriggered'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onApplyButtonClicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSetUpBinsClicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<HistogramInspector, qt_meta_tag_ZN7omnetpp5qtenv18HistogramInspectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::HistogramInspector::staticMetaObject = { {
    QMetaObject::SuperData::link<Inspector::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv18HistogramInspectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv18HistogramInspectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv18HistogramInspectorE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::HistogramInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HistogramInspector *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onShowCellInfo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->onCustomContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->onShowCounts(); break;
        case 3: _t->onShowPDF(); break;
        case 4: _t->onOptionsTriggered(); break;
        case 5: _t->onApplyButtonClicked(); break;
        case 6: _t->onSetUpBinsClicked(); break;
        default: ;
        }
    }
}

const QMetaObject *omnetpp::qtenv::HistogramInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::HistogramInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv18HistogramInspectorE_t>.strings))
        return static_cast<void*>(this);
    return Inspector::qt_metacast(_clname);
}

int omnetpp::qtenv::HistogramInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Inspector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
