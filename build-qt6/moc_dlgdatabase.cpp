/****************************************************************************
** Meta object code from reading C++ file 'dlgdatabase.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/dlgdatabase.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgdatabase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
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
struct qt_meta_tag_ZN11dlgDatabaseE_t {};
} // unnamed namespace

template <> constexpr inline auto dlgDatabase::qt_create_metaobjectdata<qt_meta_tag_ZN11dlgDatabaseE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "dlgDatabase",
        "on_tableDatabase_cellDoubleClicked",
        "",
        "row",
        "column",
        "on_editFind_textChanged",
        "arg1",
        "on_editFind_returnPressed",
        "on_tableDatabaseFind_cellDoubleClicked",
        "on_readoutput",
        "on_readerror",
        "on_tableDatabase_itemDoubleClicked",
        "QTableWidgetItem*",
        "item",
        "on_btnIntel_clicked",
        "on_btnAMD_clicked",
        "on_btnOpenDir_clicked",
        "on_btnIntelOnline_clicked",
        "on_btnAMDOnline_clicked",
        "on_btnGenerateEFI_clicked",
        "on_tableDatabase_currentItemChanged",
        "current",
        "previous"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_tableDatabase_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Slot 'on_editFind_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Slot 'on_editFind_returnPressed'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tableDatabaseFind_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Slot 'on_readoutput'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_readerror'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tableDatabase_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'on_btnIntel_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnAMD_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnOpenDir_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnIntelOnline_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnAMDOnline_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnGenerateEFI_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tableDatabase_currentItemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *, QTableWidgetItem *)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 21 }, { 0x80000000 | 12, 22 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<dlgDatabase, qt_meta_tag_ZN11dlgDatabaseE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject dlgDatabase::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11dlgDatabaseE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11dlgDatabaseE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11dlgDatabaseE_t>.metaTypes,
    nullptr
} };

void dlgDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<dlgDatabase *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_tableDatabase_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->on_editFind_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_editFind_returnPressed(); break;
        case 3: _t->on_tableDatabaseFind_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->on_readoutput(); break;
        case 5: _t->on_readerror(); break;
        case 6: _t->on_tableDatabase_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 7: _t->on_btnIntel_clicked(); break;
        case 8: _t->on_btnAMD_clicked(); break;
        case 9: _t->on_btnOpenDir_clicked(); break;
        case 10: _t->on_btnIntelOnline_clicked(); break;
        case 11: _t->on_btnAMDOnline_clicked(); break;
        case 12: _t->on_btnGenerateEFI_clicked(); break;
        case 13: _t->on_tableDatabase_currentItemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *dlgDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlgDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11dlgDatabaseE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dlgDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
