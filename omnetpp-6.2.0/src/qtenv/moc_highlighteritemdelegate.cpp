/****************************************************************************
** Meta object code from reading C++ file 'highlighteritemdelegate.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "highlighteritemdelegate.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'highlighteritemdelegate.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv23HighlighterItemDelegateE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::HighlighterItemDelegate::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv23HighlighterItemDelegateE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::HighlighterItemDelegate",
        "editorCreated",
        "",
        "editorDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'editorCreated'
        QtMocHelpers::SignalData<void() const>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'editorDestroyed'
        QtMocHelpers::SignalData<void() const>(3, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<HighlighterItemDelegate, qt_meta_tag_ZN7omnetpp5qtenv23HighlighterItemDelegateE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::HighlighterItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv23HighlighterItemDelegateE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv23HighlighterItemDelegateE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv23HighlighterItemDelegateE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::HighlighterItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HighlighterItemDelegate *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->editorCreated(); break;
        case 1: _t->editorDestroyed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (HighlighterItemDelegate::*)() const>(_a, &HighlighterItemDelegate::editorCreated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (HighlighterItemDelegate::*)() const>(_a, &HighlighterItemDelegate::editorDestroyed, 1))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::HighlighterItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::HighlighterItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv23HighlighterItemDelegateE_t>.strings))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int omnetpp::qtenv::HighlighterItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
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
void omnetpp::qtenv::HighlighterItemDelegate::editorCreated()const
{
    QMetaObject::activate(const_cast< omnetpp::qtenv::HighlighterItemDelegate *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void omnetpp::qtenv::HighlighterItemDelegate::editorDestroyed()const
{
    QMetaObject::activate(const_cast< omnetpp::qtenv::HighlighterItemDelegate *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
