/****************************************************************************
** Meta object code from reading C++ file 'modulecanvasviewer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modulecanvasviewer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modulecanvasviewer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv18ModuleCanvasViewerE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::ModuleCanvasViewer::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv18ModuleCanvasViewerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::ModuleCanvasViewer",
        "click",
        "",
        "QMouseEvent*",
        "back",
        "forward",
        "doubleClick",
        "contextMenuRequested",
        "std::vector<cObject*>",
        "objects",
        "globalPos",
        "dragged",
        "marqueeZoom",
        "exportToImage",
        "exportToPdf",
        "print",
        "setLayoutingScene",
        "QGraphicsScene*",
        "layoutingScene"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'click'
        QtMocHelpers::SignalData<void(QMouseEvent *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'back'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'forward'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'doubleClick'
        QtMocHelpers::SignalData<void(QMouseEvent *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'contextMenuRequested'
        QtMocHelpers::SignalData<void(const std::vector<cObject*> &, const QPoint &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { QMetaType::QPoint, 10 },
        }}),
        // Signal 'dragged'
        QtMocHelpers::SignalData<void(QPointF)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPointF, 2 },
        }}),
        // Signal 'marqueeZoom'
        QtMocHelpers::SignalData<void(QRectF)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QRectF, 2 },
        }}),
        // Slot 'exportToImage'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'exportToPdf'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'print'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setLayoutingScene'
        QtMocHelpers::SlotData<void(QGraphicsScene *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ModuleCanvasViewer, qt_meta_tag_ZN7omnetpp5qtenv18ModuleCanvasViewerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::ModuleCanvasViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv18ModuleCanvasViewerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv18ModuleCanvasViewerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv18ModuleCanvasViewerE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::ModuleCanvasViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ModuleCanvasViewer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->click((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 1: _t->back(); break;
        case 2: _t->forward(); break;
        case 3: _t->doubleClick((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 4: _t->contextMenuRequested((*reinterpret_cast< std::add_pointer_t<std::vector<cObject*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 5: _t->dragged((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 6: _t->marqueeZoom((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 7: _t->exportToImage(); break;
        case 8: _t->exportToPdf(); break;
        case 9: _t->print(); break;
        case 10: _t->setLayoutingScene((*reinterpret_cast< std::add_pointer_t<QGraphicsScene*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ModuleCanvasViewer::*)(QMouseEvent * )>(_a, &ModuleCanvasViewer::click, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModuleCanvasViewer::*)()>(_a, &ModuleCanvasViewer::back, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModuleCanvasViewer::*)()>(_a, &ModuleCanvasViewer::forward, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModuleCanvasViewer::*)(QMouseEvent * )>(_a, &ModuleCanvasViewer::doubleClick, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModuleCanvasViewer::*)(const std::vector<cObject*> & , const QPoint & )>(_a, &ModuleCanvasViewer::contextMenuRequested, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModuleCanvasViewer::*)(QPointF )>(_a, &ModuleCanvasViewer::dragged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModuleCanvasViewer::*)(QRectF )>(_a, &ModuleCanvasViewer::marqueeZoom, 6))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::ModuleCanvasViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::ModuleCanvasViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv18ModuleCanvasViewerE_t>.strings))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int omnetpp::qtenv::ModuleCanvasViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::ModuleCanvasViewer::click(QMouseEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void omnetpp::qtenv::ModuleCanvasViewer::back()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void omnetpp::qtenv::ModuleCanvasViewer::forward()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void omnetpp::qtenv::ModuleCanvasViewer::doubleClick(QMouseEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void omnetpp::qtenv::ModuleCanvasViewer::contextMenuRequested(const std::vector<cObject*> & _t1, const QPoint & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void omnetpp::qtenv::ModuleCanvasViewer::dragged(QPointF _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void omnetpp::qtenv::ModuleCanvasViewer::marqueeZoom(QRectF _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
