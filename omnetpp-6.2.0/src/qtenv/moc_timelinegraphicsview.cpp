/****************************************************************************
** Meta object code from reading C++ file 'timelinegraphicsview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "timelinegraphicsview.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timelinegraphicsview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv20TimeLineGraphicsViewE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::TimeLineGraphicsView::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv20TimeLineGraphicsViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::TimeLineGraphicsView",
        "contextMenuRequested",
        "",
        "QList<cObject*>",
        "objects",
        "globalPos",
        "click",
        "cObject*",
        "object",
        "doubleClick"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'contextMenuRequested'
        QtMocHelpers::SignalData<void(QVector<cObject*>, QPoint)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QPoint, 5 },
        }}),
        // Signal 'click'
        QtMocHelpers::SignalData<void(cObject *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'doubleClick'
        QtMocHelpers::SignalData<void(cObject *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TimeLineGraphicsView, qt_meta_tag_ZN7omnetpp5qtenv20TimeLineGraphicsViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::TimeLineGraphicsView::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv20TimeLineGraphicsViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv20TimeLineGraphicsViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv20TimeLineGraphicsViewE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::TimeLineGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TimeLineGraphicsView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->contextMenuRequested((*reinterpret_cast< std::add_pointer_t<QList<cObject*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 1: _t->click((*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[1]))); break;
        case 2: _t->doubleClick((*reinterpret_cast< std::add_pointer_t<cObject*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TimeLineGraphicsView::*)(QVector<cObject*> , QPoint )>(_a, &TimeLineGraphicsView::contextMenuRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimeLineGraphicsView::*)(cObject * )>(_a, &TimeLineGraphicsView::click, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TimeLineGraphicsView::*)(cObject * )>(_a, &TimeLineGraphicsView::doubleClick, 2))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::TimeLineGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::TimeLineGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv20TimeLineGraphicsViewE_t>.strings))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int omnetpp::qtenv::TimeLineGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::TimeLineGraphicsView::contextMenuRequested(QVector<cObject*> _t1, QPoint _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void omnetpp::qtenv::TimeLineGraphicsView::click(cObject * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void omnetpp::qtenv::TimeLineGraphicsView::doubleClick(cObject * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
