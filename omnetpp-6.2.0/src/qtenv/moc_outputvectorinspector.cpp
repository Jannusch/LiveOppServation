/****************************************************************************
** Meta object code from reading C++ file 'outputvectorinspector.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "outputvectorinspector.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outputvectorinspector.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv21OutputVectorInspectorE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::OutputVectorInspector::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv21OutputVectorInspectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::OutputVectorInspector",
        "onOptionsDialogTriggerd",
        "",
        "onCustomContextMenuRequested",
        "pos",
        "onClickApply"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onOptionsDialogTriggerd'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCustomContextMenuRequested'
        QtMocHelpers::SlotData<void(QPoint)>(3, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QPoint, 4 },
        }}),
        // Slot 'onClickApply'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OutputVectorInspector, qt_meta_tag_ZN7omnetpp5qtenv21OutputVectorInspectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::OutputVectorInspector::staticMetaObject = { {
    QMetaObject::SuperData::link<Inspector::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv21OutputVectorInspectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv21OutputVectorInspectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv21OutputVectorInspectorE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::OutputVectorInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OutputVectorInspector *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onOptionsDialogTriggerd(); break;
        case 1: _t->onCustomContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->onClickApply(); break;
        default: ;
        }
    }
}

const QMetaObject *omnetpp::qtenv::OutputVectorInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::OutputVectorInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv21OutputVectorInspectorE_t>.strings))
        return static_cast<void*>(this);
    return Inspector::qt_metacast(_clname);
}

int omnetpp::qtenv::OutputVectorInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Inspector::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
