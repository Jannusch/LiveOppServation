/****************************************************************************
** Meta object code from reading C++ file 'textviewerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "textviewerwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textviewerwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7omnetpp5qtenv16TextViewerWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto omnetpp::qtenv::TextViewerWidget::qt_create_metaobjectdata<qt_meta_tag_ZN7omnetpp5qtenv16TextViewerWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "omnetpp::qtenv::TextViewerWidget",
        "caretMoved",
        "",
        "lineIndex",
        "column",
        "rightClicked",
        "globalPos",
        "onAutoScrollTimer",
        "onCaretBlinkTimer",
        "onHeaderSectionResized",
        "logicalIndex",
        "oldSize",
        "newSize",
        "copySelection",
        "copySelectionUnformatted",
        "onContentChanged",
        "onLinesDiscarded",
        "numLinesDiscarded",
        "onStatusTextChanged",
        "scrolledHorizontally",
        "value",
        "scrolledVertically",
        "revealCaret",
        "QMargins",
        "margins"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'caretMoved'
        QtMocHelpers::SignalData<void(int, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Signal 'rightClicked'
        QtMocHelpers::SignalData<void(QPoint, int, int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 6 }, { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Slot 'onAutoScrollTimer'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCaretBlinkTimer'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onHeaderSectionResized'
        QtMocHelpers::SlotData<void(int, int, int)>(9, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 10 }, { QMetaType::Int, 11 }, { QMetaType::Int, 12 },
        }}),
        // Slot 'copySelection'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'copySelectionUnformatted'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onContentChanged'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onLinesDiscarded'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 },
        }}),
        // Slot 'onStatusTextChanged'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'scrolledHorizontally'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
        // Slot 'scrolledVertically'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
        // Slot 'revealCaret'
        QtMocHelpers::SlotData<void(const QMargins &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 23, 24 },
        }}),
        // Slot 'revealCaret'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TextViewerWidget, qt_meta_tag_ZN7omnetpp5qtenv16TextViewerWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject omnetpp::qtenv::TextViewerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv16TextViewerWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv16TextViewerWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7omnetpp5qtenv16TextViewerWidgetE_t>.metaTypes,
    nullptr
} };

void omnetpp::qtenv::TextViewerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextViewerWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->caretMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->rightClicked((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->onAutoScrollTimer(); break;
        case 3: _t->onCaretBlinkTimer(); break;
        case 4: _t->onHeaderSectionResized((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 5: _t->copySelection(); break;
        case 6: _t->copySelectionUnformatted(); break;
        case 7: _t->onContentChanged(); break;
        case 8: _t->onLinesDiscarded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->onStatusTextChanged(); break;
        case 10: _t->scrolledHorizontally((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->scrolledVertically((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->revealCaret((*reinterpret_cast< std::add_pointer_t<QMargins>>(_a[1]))); break;
        case 13: _t->revealCaret(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TextViewerWidget::*)(int , int )>(_a, &TextViewerWidget::caretMoved, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextViewerWidget::*)(QPoint , int , int )>(_a, &TextViewerWidget::rightClicked, 1))
            return;
    }
}

const QMetaObject *omnetpp::qtenv::TextViewerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::TextViewerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7omnetpp5qtenv16TextViewerWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int omnetpp::qtenv::TextViewerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::TextViewerWidget::caretMoved(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void omnetpp::qtenv::TextViewerWidget::rightClicked(QPoint _t1, int _t2, int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
