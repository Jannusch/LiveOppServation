/****************************************************************************
** Meta object code from reading C++ file 'iosgviewer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "iosgviewer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iosgviewer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv10IOsgViewerE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::IOsgViewer::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv10IOsgViewerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::IOsgViewer",
        "objectsPicked",
        "",
        "std::vector<cObject*>",
        "applyViewerHints"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'objectsPicked'
        QtMocHelpers::SignalData<void(const std::vector<cObject*> &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'applyViewerHints'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IOsgViewer, qt_meta_tag_ZN7omnetpp5qtenv10IOsgViewerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::IOsgViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv10IOsgViewerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv10IOsgViewerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv10IOsgViewerE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::IOsgViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IOsgViewer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->objectsPicked((*reinterpret_cast< std::add_pointer_t<std::vector<cObject*>>>(_a[1]))); break;
        case 1: _t->applyViewerHints(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (IOsgViewer::*)(const std::vector<cObject*> & )>(_a, &IOsgViewer::objectsPicked, 0))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::IOsgViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::IOsgViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv10IOsgViewerE_t>.strings))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int omnetpp::qtenv::IOsgViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::IOsgViewer::objectsPicked(const std::vector<cObject*> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN7omnetpp5qtenv14DummyOsgViewerE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::DummyOsgViewer::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv14DummyOsgViewerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::DummyOsgViewer",
        "objectsPicked",
        "",
        "std::vector<cObject*>",
        "applyViewerHints"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'objectsPicked'
        QtMocHelpers::SignalData<void(const std::vector<cObject*> &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'applyViewerHints'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DummyOsgViewer, qt_meta_tag_ZN7omnetpp5qtenv14DummyOsgViewerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::DummyOsgViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<IOsgViewer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv14DummyOsgViewerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv14DummyOsgViewerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv14DummyOsgViewerE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::DummyOsgViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DummyOsgViewer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->objectsPicked((*reinterpret_cast< std::add_pointer_t<std::vector<cObject*>>>(_a[1]))); break;
        case 1: _t->applyViewerHints(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DummyOsgViewer::*)(const std::vector<cObject*> & )>(_a, &DummyOsgViewer::objectsPicked, 0))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::DummyOsgViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::DummyOsgViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv14DummyOsgViewerE_t>.strings))
        return static_cast<void*>(this);
    return IOsgViewer::qt_metacast(_clname);
}

int omnetpp::qtenv::DummyOsgViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IOsgViewer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::DummyOsgViewer::objectsPicked(const std::vector<cObject*> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
