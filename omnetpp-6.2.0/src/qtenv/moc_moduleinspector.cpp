/****************************************************************************
** Meta object code from reading C++ file 'moduleinspector.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "moduleinspector.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moduleinspector.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv15ModuleInspectorE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::ModuleInspector::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv15ModuleInspectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::ModuleInspector",
        "runUntil",
        "",
        "fastRunUntil",
        "relayout",
        "zoomIn",
        "x",
        "y",
        "n",
        "zoomOut",
        "increaseIconSize",
        "decreaseIconSize",
        "addNameFormatItem",
        "SubmoduleNameFormat",
        "format",
        "label",
        "QActionGroup*",
        "actionGroup",
        "QMenu*",
        "subMenu",
        "runPreferencesDialog",
        "click",
        "QMouseEvent*",
        "event",
        "doubleClick",
        "onViewerDragged",
        "center",
        "onObjectsPicked",
        "std::vector<cObject*>",
        "onMarqueeZoom",
        "rect",
        "createContextMenu",
        "objects",
        "globalPos",
        "showCanvasLayersDialog",
        "showMethodCalls",
        "show",
        "showLabels",
        "showArrowheads",
        "setSubmoduleNameFormat",
        "zoomIconsBy",
        "mult",
        "switchToOsgView",
        "switchToCanvasView",
        "onFontChanged",
        "onLayoutVisualizationStarts",
        "cModule*",
        "module",
        "QGraphicsScene*",
        "layoutingScene",
        "onLayoutVisualizationEnds",
        "onModuleLayoutChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'runUntil'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'fastRunUntil'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'relayout'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'zoomIn'
        QtMocHelpers::SlotData<void(int, int, int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { QMetaType::Int, 7 }, { QMetaType::Int, 8 },
        }}),
        // Slot 'zoomIn'
        QtMocHelpers::SlotData<void(int, int)>(5, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'zoomIn'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'zoomIn'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'zoomOut'
        QtMocHelpers::SlotData<void(int, int, int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { QMetaType::Int, 7 }, { QMetaType::Int, 8 },
        }}),
        // Slot 'zoomOut'
        QtMocHelpers::SlotData<void(int, int)>(9, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'zoomOut'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'zoomOut'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'increaseIconSize'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'decreaseIconSize'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addNameFormatItem'
        QtMocHelpers::SlotData<void(SubmoduleNameFormat, QString, QActionGroup *, QMenu *)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { QMetaType::QString, 15 }, { 0x80000000 | 16, 17 }, { 0x80000000 | 18, 19 },
        }}),
        // Slot 'runPreferencesDialog'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'click'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'doubleClick'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'onViewerDragged'
        QtMocHelpers::SlotData<void(QPointF)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPointF, 26 },
        }}),
        // Slot 'onObjectsPicked'
        QtMocHelpers::SlotData<void(const std::vector<cObject*> &)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 28, 2 },
        }}),
        // Slot 'onMarqueeZoom'
        QtMocHelpers::SlotData<void(QRectF)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QRectF, 30 },
        }}),
        // Slot 'createContextMenu'
        QtMocHelpers::SlotData<void(const std::vector<cObject*> &, const QPoint &)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 28, 32 }, { QMetaType::QPoint, 33 },
        }}),
        // Slot 'showCanvasLayersDialog'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showMethodCalls'
        QtMocHelpers::SlotData<void(bool)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Slot 'showLabels'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Slot 'showArrowheads'
        QtMocHelpers::SlotData<void(bool)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Slot 'setSubmoduleNameFormat'
        QtMocHelpers::SlotData<void(SubmoduleNameFormat)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'zoomIconsBy'
        QtMocHelpers::SlotData<void(double)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 41 },
        }}),
        // Slot 'switchToOsgView'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'switchToCanvasView'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFontChanged'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLayoutVisualizationStarts'
        QtMocHelpers::SlotData<void(cModule *, QGraphicsScene *)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 46, 47 }, { 0x80000000 | 48, 49 },
        }}),
        // Slot 'onLayoutVisualizationEnds'
        QtMocHelpers::SlotData<void(cModule *)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 46, 47 },
        }}),
        // Slot 'onModuleLayoutChanged'
        QtMocHelpers::SlotData<void(cModule *)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 46, 47 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ModuleInspector, qt_meta_tag_ZN7omnetpp5qtenv15ModuleInspectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::ModuleInspector::staticMetaObject = { {
    QMetaObject::SuperData::link<Inspector::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv15ModuleInspectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv15ModuleInspectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv15ModuleInspectorE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::ModuleInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ModuleInspector *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->runUntil(); break;
        case 1: _t->fastRunUntil(); break;
        case 2: _t->relayout(); break;
        case 3: _t->zoomIn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 4: _t->zoomIn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->zoomIn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->zoomIn(); break;
        case 7: _t->zoomOut((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 8: _t->zoomOut((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->zoomOut((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->zoomOut(); break;
        case 11: _t->increaseIconSize(); break;
        case 12: _t->decreaseIconSize(); break;
        case 13: _t->addNameFormatItem((*reinterpret_cast< std::add_pointer_t<SubmoduleNameFormat>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QActionGroup*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[4]))); break;
        case 14: _t->runPreferencesDialog(); break;
        case 15: _t->click((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 16: _t->doubleClick((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 17: _t->onViewerDragged((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 18: _t->onObjectsPicked((*reinterpret_cast< std::add_pointer_t<std::vector<cObject*>>>(_a[1]))); break;
        case 19: _t->onMarqueeZoom((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 20: _t->createContextMenu((*reinterpret_cast< std::add_pointer_t<std::vector<cObject*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 21: _t->showCanvasLayersDialog(); break;
        case 22: _t->showMethodCalls((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->showLabels((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->showArrowheads((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->setSubmoduleNameFormat((*reinterpret_cast< std::add_pointer_t<SubmoduleNameFormat>>(_a[1]))); break;
        case 26: _t->zoomIconsBy((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 27: _t->switchToOsgView(); break;
        case 28: _t->switchToCanvasView(); break;
        case 29: _t->onFontChanged(); break;
        case 30: _t->onLayoutVisualizationStarts((*reinterpret_cast< std::add_pointer_t<cModule*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGraphicsScene*>>(_a[2]))); break;
        case 31: _t->onLayoutVisualizationEnds((*reinterpret_cast< std::add_pointer_t<cModule*>>(_a[1]))); break;
        case 32: _t->onModuleLayoutChanged((*reinterpret_cast< std::add_pointer_t<cModule*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *omnetpp::qtenv::ModuleInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::ModuleInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv15ModuleInspectorE_t>.strings))
        return static_cast<void*>(this);
    return Inspector::qt_metacast(_clname);
}

int omnetpp::qtenv::ModuleInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Inspector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 33;
    }
    return _id;
}
QT_WARNING_POP
