/****************************************************************************
** Meta object code from reading C++ file 'dlgpreference.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/dlgpreference.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgpreference.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13dlgPreferenceE_t {};
} // unnamed namespace

template <> constexpr inline auto dlgPreference::qt_create_metaobjectdata<qt_meta_tag_ZN13dlgPreferenceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "dlgPreference",
        "on_btnAdd_clicked",
        "",
        "on_btnDel_clicked",
        "on_btnOpenUrl_clicked",
        "on_rbtnAPI_clicked",
        "on_rbtnWeb_clicked",
        "on_btnTest_clicked",
        "on_comboBoxNet_currentTextChanged",
        "arg1",
        "on_comboBoxWeb_currentTextChanged",
        "on_chkShowVolName_clicked",
        "checked",
        "on_chkHideToolbar_stateChanged",
        "on_chkDatabase_stateChanged",
        "on_chkBackupEFI_stateChanged",
        "on_chkMountESP_stateChanged",
        "on_chkRecentOpen_stateChanged",
        "on_chkOpenDir_stateChanged",
        "on_chkBoxLastFile_clicked",
        "on_btnPing_clicked",
        "on_chkSmartKey_clicked",
        "on_btnDownloadKexts_clicked",
        "on_btnStop_clicked",
        "on_myeditFind_textChanged",
        "on_tableKextUrl_itemChanged",
        "QTableWidgetItem*",
        "item",
        "on_myeditFind_returnPressed",
        "on_rbtnToken_clicked",
        "on_btnTokenHelp_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_btnAdd_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDel_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnOpenUrl_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_rbtnAPI_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_rbtnWeb_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnTest_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_comboBoxNet_currentTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'on_comboBoxWeb_currentTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'on_chkShowVolName_clicked'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'on_chkHideToolbar_stateChanged'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'on_chkDatabase_stateChanged'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'on_chkBackupEFI_stateChanged'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'on_chkMountESP_stateChanged'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'on_chkRecentOpen_stateChanged'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'on_chkOpenDir_stateChanged'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'on_chkBoxLastFile_clicked'
        QtMocHelpers::SlotData<void(bool)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'on_btnPing_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_chkSmartKey_clicked'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'on_btnDownloadKexts_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnStop_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_myeditFind_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'on_tableKextUrl_itemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 26, 27 },
        }}),
        // Slot 'on_myeditFind_returnPressed'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_rbtnToken_clicked'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnTokenHelp_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<dlgPreference, qt_meta_tag_ZN13dlgPreferenceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject dlgPreference::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13dlgPreferenceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13dlgPreferenceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13dlgPreferenceE_t>.metaTypes,
    nullptr
} };

void dlgPreference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<dlgPreference *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_btnAdd_clicked(); break;
        case 1: _t->on_btnDel_clicked(); break;
        case 2: _t->on_btnOpenUrl_clicked(); break;
        case 3: _t->on_rbtnAPI_clicked(); break;
        case 4: _t->on_rbtnWeb_clicked(); break;
        case 5: _t->on_btnTest_clicked(); break;
        case 6: _t->on_comboBoxNet_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->on_comboBoxWeb_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->on_chkShowVolName_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_chkHideToolbar_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_chkDatabase_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_chkBackupEFI_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_chkMountESP_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_chkRecentOpen_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_chkOpenDir_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_chkBoxLastFile_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->on_btnPing_clicked(); break;
        case 17: _t->on_chkSmartKey_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->on_btnDownloadKexts_clicked(); break;
        case 19: _t->on_btnStop_clicked(); break;
        case 20: _t->on_myeditFind_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->on_tableKextUrl_itemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 22: _t->on_myeditFind_returnPressed(); break;
        case 23: _t->on_rbtnToken_clicked(); break;
        case 24: _t->on_btnTokenHelp_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *dlgPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlgPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13dlgPreferenceE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dlgPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    return _id;
}
QT_WARNING_POP
