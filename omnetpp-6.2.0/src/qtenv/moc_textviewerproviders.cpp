/****************************************************************************
** Meta object code from reading C++ file 'textviewerproviders.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "textviewerproviders.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textviewerproviders.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv25TextViewerContentProviderE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::TextViewerContentProvider::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv25TextViewerContentProviderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::TextViewerContentProvider",
        "textChanged",
        "",
        "linesDiscarded",
        "numDiscardedLines",
        "linesAdded",
        "statusTextChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'textChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'linesDiscarded'
        QtMocHelpers::SignalData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Signal 'linesAdded'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusTextChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TextViewerContentProvider, qt_meta_tag_ZN7omnetpp5qtenv25TextViewerContentProviderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::TextViewerContentProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv25TextViewerContentProviderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv25TextViewerContentProviderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv25TextViewerContentProviderE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::TextViewerContentProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextViewerContentProvider *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->linesDiscarded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->linesAdded(); break;
        case 3: _t->statusTextChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TextViewerContentProvider::*)()>(_a, &TextViewerContentProvider::textChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextViewerContentProvider::*)(int )>(_a, &TextViewerContentProvider::linesDiscarded, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextViewerContentProvider::*)()>(_a, &TextViewerContentProvider::linesAdded, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextViewerContentProvider::*)()>(_a, &TextViewerContentProvider::statusTextChanged, 3))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::TextViewerContentProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::TextViewerContentProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv25TextViewerContentProviderE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int omnetpp::qtenv::TextViewerContentProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::TextViewerContentProvider::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void omnetpp::qtenv::TextViewerContentProvider::linesDiscarded(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void omnetpp::qtenv::TextViewerContentProvider::linesAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void omnetpp::qtenv::TextViewerContentProvider::statusTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
namespace {
struct qt_meta_tag_ZN7omnetpp5qtenv28LineFilteringContentProviderE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::LineFilteringContentProvider::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv28LineFilteringContentProviderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::LineFilteringContentProvider"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LineFilteringContentProvider, qt_meta_tag_ZN7omnetpp5qtenv28LineFilteringContentProviderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::LineFilteringContentProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<TextViewerContentProvider::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv28LineFilteringContentProviderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv28LineFilteringContentProviderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv28LineFilteringContentProviderE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::LineFilteringContentProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LineFilteringContentProvider *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *omnetpp::qtenv::LineFilteringContentProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::LineFilteringContentProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv28LineFilteringContentProviderE_t>.strings))
        return static_cast<void*>(this);
    return TextViewerContentProvider::qt_metacast(_clname);
}

int omnetpp::qtenv::LineFilteringContentProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextViewerContentProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN7omnetpp5qtenv31StringTextViewerContentProviderE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::StringTextViewerContentProvider::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv31StringTextViewerContentProviderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::StringTextViewerContentProvider"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<StringTextViewerContentProvider, qt_meta_tag_ZN7omnetpp5qtenv31StringTextViewerContentProviderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::StringTextViewerContentProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<TextViewerContentProvider::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv31StringTextViewerContentProviderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv31StringTextViewerContentProviderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv31StringTextViewerContentProviderE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::StringTextViewerContentProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StringTextViewerContentProvider *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *omnetpp::qtenv::StringTextViewerContentProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::StringTextViewerContentProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv31StringTextViewerContentProviderE_t>.strings))
        return static_cast<void*>(this);
    return TextViewerContentProvider::qt_metacast(_clname);
}

int omnetpp::qtenv::StringTextViewerContentProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextViewerContentProvider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN7omnetpp5qtenv27ModuleOutputContentProviderE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::ModuleOutputContentProvider::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv27ModuleOutputContentProviderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::ModuleOutputContentProvider",
        "onLogEntryAdded",
        "",
        "LogBuffer::Entry*",
        "entry",
        "onLogLineAdded",
        "onMessageSendAdded",
        "onEntryDiscarded",
        "discardedEntry"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onLogEntryAdded'
        QtMocHelpers::SlotData<void(LogBuffer::Entry *)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onLogLineAdded'
        QtMocHelpers::SlotData<void(LogBuffer::Entry *)>(5, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onMessageSendAdded'
        QtMocHelpers::SlotData<void(LogBuffer::Entry *)>(6, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onEntryDiscarded'
        QtMocHelpers::SlotData<void(LogBuffer::Entry *)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ModuleOutputContentProvider, qt_meta_tag_ZN7omnetpp5qtenv27ModuleOutputContentProviderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::ModuleOutputContentProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<TextViewerContentProvider::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv27ModuleOutputContentProviderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv27ModuleOutputContentProviderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv27ModuleOutputContentProviderE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::ModuleOutputContentProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ModuleOutputContentProvider *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onLogEntryAdded((*reinterpret_cast< std::add_pointer_t<LogBuffer::Entry*>>(_a[1]))); break;
        case 1: _t->onLogLineAdded((*reinterpret_cast< std::add_pointer_t<LogBuffer::Entry*>>(_a[1]))); break;
        case 2: _t->onMessageSendAdded((*reinterpret_cast< std::add_pointer_t<LogBuffer::Entry*>>(_a[1]))); break;
        case 3: _t->onEntryDiscarded((*reinterpret_cast< std::add_pointer_t<LogBuffer::Entry*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *omnetpp::qtenv::ModuleOutputContentProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::ModuleOutputContentProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv27ModuleOutputContentProviderE_t>.strings))
        return static_cast<void*>(this);
    return TextViewerContentProvider::qt_metacast(_clname);
}

int omnetpp::qtenv::ModuleOutputContentProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextViewerContentProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
