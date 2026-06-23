/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "DisplayLevel",
        "",
        "ScanPolicy",
        "PickerAttributes",
        "ExposeSensitiveData",
        "on_actionFind_triggered",
        "on_btnNVRAMAdd_Add_clicked",
        "on_btnDPAdd_Add0_clicked",
        "on_btnACPIPatch_Add_clicked",
        "on_btnKernelPatchAdd_clicked",
        "on_btnNVRAMAdd_Add0_clicked",
        "on_btnNVRAMAdd_Del0_clicked",
        "on_btnNVRAMLS_Add0_clicked",
        "on_btnNVRAMDel_Add0_clicked",
        "cellEnteredSlot",
        "row",
        "column",
        "on_actionOnline_Download_Updates_triggered",
        "on_actionDatabase_triggered",
        "on_actionPreferences_triggered",
        "on_actionGenerateEFI_triggered",
        "Target",
        "readResultPassHash",
        "clearFindTexts",
        "copyText",
        "QListWidget*",
        "listW",
        "on_line1",
        "on_line2",
        "recentOpen",
        "filename",
        "on_nv1",
        "on_nv2",
        "on_nv3",
        "on_nv4",
        "on_nv5",
        "on_nv6",
        "on_nv7",
        "on_nv8",
        "on_nv9",
        "on_nv10",
        "on_nv11",
        "on_nv12",
        "on_nv01",
        "on_nv02",
        "on_nv03",
        "on_nv04",
        "show_menu",
        "QPoint",
        "show_menu0",
        "dataClassChange_dp",
        "dataClassChange_nv",
        "readResult",
        "readResultDiskInfo",
        "arch_addChange",
        "arch_ForceChange",
        "arch_blockChange",
        "arch_patchChange",
        "arch_Booter_patchChange",
        "ReservedMemoryTypeChange",
        "on_btnOpen",
        "on_table_dp_add0_cellClicked",
        "on_table_dp_add_itemChanged",
        "QTableWidgetItem*",
        "item",
        "on_table_nv_add0_cellClicked",
        "on_table_nv_add_itemChanged",
        "on_table_nv_del0_cellClicked",
        "on_table_nv_ls0_cellClicked",
        "on_table_nv_del_itemChanged",
        "on_table_nv_ls_itemChanged",
        "on_table_dp_del0_cellClicked",
        "on_table_dp_del_itemChanged",
        "on_btnSave",
        "on_table_acpi_add_cellClicked",
        "on_table_acpi_del_cellClicked",
        "on_table_acpi_patch_cellClicked",
        "on_table_booter_cellClicked",
        "on_table_kernel_add_cellClicked",
        "on_table_kernel_block_cellClicked",
        "on_table_kernel_patch_cellClicked",
        "on_tableEntries_cellClicked",
        "on_tableTools_cellClicked",
        "on_table_uefi_ReservedMemory_cellClicked",
        "on_btnKernelPatchDel_clicked",
        "on_btnACPIAdd_Del_clicked",
        "on_btnACPIDel_Add_clicked",
        "on_btnACPIDel_Del_clicked",
        "on_btnACPIPatch_Del_clicked",
        "on_btnBooter_Add_clicked",
        "on_btnBooter_Del_clicked",
        "on_btnDPDel_Add0_clicked",
        "on_btnDPDel_Del0_clicked",
        "on_btnDPDel_Add_clicked",
        "on_btnDPDel_Del_clicked",
        "on_btnACPIAdd_Add_clicked",
        "on_btnDPAdd_Del0_clicked",
        "on_btnDPAdd_Add_clicked",
        "on_btnDPAdd_Del_clicked",
        "on_btnKernelAdd_Add_clicked",
        "on_btnKernelBlock_Add_clicked",
        "on_btnKernelBlock_Del_clicked",
        "on_btnMiscBO_Add_clicked",
        "on_btnMiscBO_Del_clicked",
        "on_btnMiscEntries_Add_clicked",
        "on_btnMiscTools_Add_clicked",
        "on_btnMiscEntries_Del_clicked",
        "on_btnMiscTools_Del_clicked",
        "on_btnNVRAMAdd_Del_clicked",
        "on_btnNVRAMDel_Add_clicked",
        "on_btnNVRAMLS_Add_clicked",
        "on_btnNVRAMDel_Del0_clicked",
        "on_btnNVRAMLS_Del0_clicked",
        "on_btnNVRAMDel_Del_clicked",
        "on_btnNVRAMLS_Del_clicked",
        "on_btnUEFIRM_Add_clicked",
        "on_btnUEFIRM_Del_clicked",
        "on_btnUEFIDrivers_Add_clicked",
        "on_btnUEFIDrivers_Del_clicked",
        "on_btnKernelAdd_Up_clicked",
        "on_btnKernelAdd_Down_clicked",
        "on_btnSaveAs",
        "on_btnKernelAdd_Del_clicked",
        "on_table_dp_add_cellClicked",
        "on_table_dp_add_currentCellChanged",
        "currentRow",
        "currentColumn",
        "previousRow",
        "previousColumn",
        "on_table_nv_add_cellClicked",
        "on_table_nv_add_currentCellChanged",
        "on_table_kernel_add_currentCellChanged",
        "on_table_kernel_block_currentCellChanged",
        "on_table_kernel_patch_currentCellChanged",
        "on_cboxSystemProductName_currentIndexChanged",
        "arg1",
        "on_editIntExposeSensitiveData_textChanged",
        "on_editIntScanPolicy_textChanged",
        "on_editIntDisplayLevel_textChanged",
        "on_editIntPickerAttributes_textChanged",
        "on_btnSystemProductName_clicked",
        "on_btnSystemUUID_clicked",
        "on_table_kernel_Force_cellClicked",
        "on_table_kernel_Force_currentCellChanged",
        "on_btnKernelForce_Add_clicked",
        "on_btnKernelForce_Del_clicked",
        "on_table_uefi_ReservedMemory_currentCellChanged",
        "on_btnHelp",
        "on_tabTotal_tabBarClicked",
        "index",
        "on_tabTotal_currentChanged",
        "on_btnDevices_add_clicked",
        "on_btnDevices_del_clicked",
        "on_cboxUpdateSMBIOSMode_currentIndexChanged",
        "on_table_dp_add0_itemChanged",
        "on_table_dp_del0_itemChanged",
        "on_table_nv_add0_itemChanged",
        "on_table_nv_del0_itemChanged",
        "on_table_nv_ls0_itemChanged",
        "on_table_dp_del_cellClicked",
        "on_tableBlessOverride_cellClicked",
        "on_table_nv_del_cellClicked",
        "on_table_nv_ls_cellClicked",
        "on_tableDevices_cellClicked",
        "on_table_uefi_drivers_cellClicked",
        "on_btnBooterPatchAdd_clicked",
        "on_btnBooterPatchDel_clicked",
        "on_table_Booter_patch_cellClicked",
        "on_table_Booter_patch_currentCellChanged",
        "on_btnCheckUpdate",
        "replyFinished",
        "QNetworkReply*",
        "reply",
        "on_editIntTarget_textChanged",
        "on_editIntHaltLevel_textChanged",
        "on_listMain_itemSelectionChanged",
        "on_listSub_itemSelectionChanged",
        "on_table_dp_add0_itemSelectionChanged",
        "on_table_dp_del0_itemSelectionChanged",
        "on_table_nv_add0_itemSelectionChanged",
        "on_table_nv_del0_itemSelectionChanged",
        "on_table_nv_ls0_itemSelectionChanged",
        "on_table_acpi_add_itemEntered",
        "on_table_acpi_add_cellEntered",
        "lineEdit_textChanged",
        "lineEdit_textEdited",
        "on_table_nv_ls_currentCellChanged",
        "on_table_acpi_add_currentCellChanged",
        "on_table_nv_add0_currentCellChanged",
        "on_table_acpi_del_currentCellChanged",
        "on_table_acpi_patch_currentCellChanged",
        "on_table_booter_currentCellChanged",
        "on_tableBlessOverride_currentCellChanged",
        "on_tableEntries_currentCellChanged",
        "on_tableTools_currentCellChanged",
        "on_tableDevices_currentCellChanged",
        "on_table_uefi_drivers_currentCellChanged",
        "on_table_dp_add0_currentCellChanged",
        "on_table_dp_del0_currentCellChanged",
        "on_table_dp_del_currentCellChanged",
        "on_table_nv_del0_currentCellChanged",
        "on_table_nv_ls0_currentCellChanged",
        "on_table_nv_del_currentCellChanged",
        "on_table_dp_add0_cellDoubleClicked",
        "on_table_dp_add_cellDoubleClicked",
        "on_table_dp_del0_cellDoubleClicked",
        "on_table_acpi_add_cellDoubleClicked",
        "on_table_acpi_del_cellDoubleClicked",
        "on_table_acpi_patch_cellDoubleClicked",
        "on_table_booter_cellDoubleClicked",
        "on_table_Booter_patch_cellDoubleClicked",
        "on_table_kernel_add_cellDoubleClicked",
        "on_table_kernel_block_cellDoubleClicked",
        "on_table_kernel_Force_cellDoubleClicked",
        "on_table_kernel_patch_cellDoubleClicked",
        "on_tableBlessOverride_cellDoubleClicked",
        "on_tableEntries_cellDoubleClicked",
        "on_tableTools_cellDoubleClicked",
        "on_table_nv_add0_cellDoubleClicked",
        "on_table_nv_add_cellDoubleClicked",
        "on_table_nv_del0_cellDoubleClicked",
        "on_table_nv_del_cellDoubleClicked",
        "on_table_nv_ls0_cellDoubleClicked",
        "on_table_nv_ls_cellDoubleClicked",
        "on_tableDevices_cellDoubleClicked",
        "on_table_uefi_drivers_cellDoubleClicked",
        "on_table_uefi_ReservedMemory_cellDoubleClicked",
        "on_table_dp_del_cellDoubleClicked",
        "on_actionNewWindow_triggered",
        "on_actionGo_to_the_previous_triggered",
        "on_actionGo_to_the_next_triggered",
        "on_mycboxFind_currentTextChanged",
        "on_listFind_currentRowChanged",
        "on_listFind_itemClicked",
        "QListWidgetItem*",
        "on_actionBug_Report_triggered",
        "on_actionQuit_triggered",
        "on_actionUpgrade_OC_triggered",
        "on_actionDiscussion_Forum_triggered",
        "on_mycboxTextColor_currentIndexChanged",
        "on_mycboxBackColor_currentIndexChanged",
        "on_editIntConsoleAttributes_textChanged",
        "on_btnGetPassHash_clicked",
        "on_toolButton_clicked",
        "on_calendarWidget_selectionChanged",
        "on_btnROM_clicked",
        "on_myeditPassInput_textChanged",
        "on_myeditPassInput_returnPressed",
        "on_actionOcvalidate_triggered",
        "on_actionMountEsp_triggered",
        "on_btnExportMaster_triggered",
        "on_editDatPasswordHash_textChanged",
        "on_btnImportMaster_triggered",
        "on_editDatPasswordSalt_textChanged",
        "on_btnOpenACPIDir_clicked",
        "on_btnOpenDriversDir_clicked",
        "on_btnOpenToolsDir_clicked",
        "on_btnOpenKextDir_clicked",
        "on_btnDisplayLevel_clicked",
        "on_btnScanPolicy_clicked",
        "on_btnPickerAttributes_clicked",
        "on_btnExposeSensitiveData_clicked",
        "on_actionPlist_editor_triggered",
        "on_actionDSDT_SSDT_editor_triggered",
        "on_actionDifferences_triggered",
        "setWM_RightTable",
        "on_btnUp_clicked",
        "on_btnDown_clicked",
        "on_btnUp_UEFI_Drivers_clicked",
        "on_btnDown_UEFI_Drivers_clicked",
        "on_actionLatest_Release_triggered",
        "on_txtEditHex_textChanged",
        "on_txtEditASCII_textChanged",
        "on_listSub_currentRowChanged",
        "on_listMain_currentRowChanged",
        "on_btnUpdateHex_clicked",
        "on_actionOpen_Directory_triggered",
        "on_actionOpen_database_directory_triggered",
        "on_btnDPAddPreset_clicked",
        "on_btnACPIPatch_clicked",
        "on_btnPresetKernelPatch_clicked",
        "on_btnPresetNVAdd_clicked",
        "on_btnPresetNVDelete_clicked",
        "on_btnPresetNVLegacy_clicked",
        "on_actionAutoChkUpdate_triggered",
        "on_actionEdit_Presets_triggered",
        "on_btnNo_clicked",
        "on_btnYes_clicked",
        "on_btnAddbootArgs_clicked",
        "updateStatus",
        "on_table_nv_add0_itemClicked",
        "on_btnKextPreset_clicked",
        "on_actionOCAuxiliaryToolsDoc_triggered",
        "on_actionBackup_EFI_triggered",
        "on_comboBoxACPI_currentTextChanged",
        "on_comboBoxBooter_currentIndexChanged",
        "on_comboBoxKernel_currentIndexChanged",
        "on_comboBoxUEFI_currentIndexChanged",
        "on_actionOpenCore_DEV_triggered",
        "on_actionDocumentation_triggered",
        "on_btnHide_clicked",
        "on_actionMove_Up_triggered",
        "on_actionMove_Down_triggered",
        "on_actionAdd_triggered",
        "on_actionDelete_triggered",
        "on_mycboxEmulate_currentTextChanged",
        "on_btnImport_clicked",
        "on_btnExport_clicked",
        "on_actionDEBUG_triggered",
        "on_actionInitDatabaseLinux_triggered",
        "on_actionNew_Key_Field_triggered",
        "on_btnSystemSerialNumber_clicked",
        "on_editSystemSerialNumber_textChanged",
        "on_editSystemUUID_textChanged",
        "on_editMLB_textChanged",
        "on_editDatROM_textChanged",
        "on_actionOpenCoreChineseDoc_triggered",
        "dataClassChange_uefi_drivers",
        "on_btnUEFIUnload_Add_clicked",
        "on_btnUEFIUnload_Del_clicked",
        "on_table_uefi_Unload_currentCellChanged",
        "on_table_uefi_Unload_cellDoubleClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'DisplayLevel'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ScanPolicy'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'PickerAttributes'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ExposeSensitiveData'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionFind_triggered'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_btnNVRAMAdd_Add_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_btnDPAdd_Add0_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_btnACPIPatch_Add_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_btnKernelPatchAdd_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_btnNVRAMAdd_Add0_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_btnNVRAMAdd_Del0_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_btnNVRAMLS_Add0_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_btnNVRAMDel_Add0_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cellEnteredSlot'
        QtMocHelpers::SlotData<void(int, int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_actionOnline_Download_Updates_triggered'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionDatabase_triggered'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionPreferences_triggered'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionGenerateEFI_triggered'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Target'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'readResultPassHash'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearFindTexts'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copyText'
        QtMocHelpers::SlotData<void(QListWidget *)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 26, 27 },
        }}),
        // Slot 'on_line1'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_line2'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'recentOpen'
        QtMocHelpers::SlotData<void(QString)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 31 },
        }}),
        // Slot 'on_nv1'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv2'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv3'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv4'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv5'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv6'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv7'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv8'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv9'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv10'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv11'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv12'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv01'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv02'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv03'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nv04'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'show_menu'
        QtMocHelpers::SlotData<void(QPoint)>(48, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 49, 2 },
        }}),
        // Slot 'show_menu0'
        QtMocHelpers::SlotData<void(QPoint)>(50, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 49, 2 },
        }}),
        // Slot 'dataClassChange_dp'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dataClassChange_nv'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'readResult'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'readResultDiskInfo'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'arch_addChange'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'arch_ForceChange'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'arch_blockChange'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'arch_patchChange'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'arch_Booter_patchChange'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ReservedMemoryTypeChange'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnOpen'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_dp_add0_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(62, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_dp_add_itemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(63, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'on_table_nv_add0_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(66, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_nv_add_itemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(67, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'on_table_nv_del0_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(68, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_nv_ls0_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(69, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_nv_del_itemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(70, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'on_table_nv_ls_itemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(71, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'on_table_dp_del0_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(72, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_dp_del_itemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(73, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'on_btnSave'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_acpi_add_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(75, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_acpi_del_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(76, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_acpi_patch_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(77, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_booter_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(78, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_kernel_add_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(79, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_kernel_block_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(80, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_kernel_patch_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(81, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_tableEntries_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(82, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_tableTools_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(83, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_uefi_ReservedMemory_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(84, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_btnKernelPatchDel_clicked'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnACPIAdd_Del_clicked'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnACPIDel_Add_clicked'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnACPIDel_Del_clicked'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnACPIPatch_Del_clicked'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnBooter_Add_clicked'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnBooter_Del_clicked'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDPDel_Add0_clicked'
        QtMocHelpers::SlotData<void()>(92, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDPDel_Del0_clicked'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDPDel_Add_clicked'
        QtMocHelpers::SlotData<void()>(94, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDPDel_Del_clicked'
        QtMocHelpers::SlotData<void()>(95, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnACPIAdd_Add_clicked'
        QtMocHelpers::SlotData<void()>(96, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDPAdd_Del0_clicked'
        QtMocHelpers::SlotData<void()>(97, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDPAdd_Add_clicked'
        QtMocHelpers::SlotData<void()>(98, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDPAdd_Del_clicked'
        QtMocHelpers::SlotData<void()>(99, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnKernelAdd_Add_clicked'
        QtMocHelpers::SlotData<void()>(100, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnKernelBlock_Add_clicked'
        QtMocHelpers::SlotData<void()>(101, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnKernelBlock_Del_clicked'
        QtMocHelpers::SlotData<void()>(102, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnMiscBO_Add_clicked'
        QtMocHelpers::SlotData<void()>(103, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnMiscBO_Del_clicked'
        QtMocHelpers::SlotData<void()>(104, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnMiscEntries_Add_clicked'
        QtMocHelpers::SlotData<void()>(105, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnMiscTools_Add_clicked'
        QtMocHelpers::SlotData<void()>(106, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnMiscEntries_Del_clicked'
        QtMocHelpers::SlotData<void()>(107, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnMiscTools_Del_clicked'
        QtMocHelpers::SlotData<void()>(108, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnNVRAMAdd_Del_clicked'
        QtMocHelpers::SlotData<void()>(109, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnNVRAMDel_Add_clicked'
        QtMocHelpers::SlotData<void()>(110, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnNVRAMLS_Add_clicked'
        QtMocHelpers::SlotData<void()>(111, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnNVRAMDel_Del0_clicked'
        QtMocHelpers::SlotData<void()>(112, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnNVRAMLS_Del0_clicked'
        QtMocHelpers::SlotData<void()>(113, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnNVRAMDel_Del_clicked'
        QtMocHelpers::SlotData<void()>(114, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnNVRAMLS_Del_clicked'
        QtMocHelpers::SlotData<void()>(115, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnUEFIRM_Add_clicked'
        QtMocHelpers::SlotData<void()>(116, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnUEFIRM_Del_clicked'
        QtMocHelpers::SlotData<void()>(117, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnUEFIDrivers_Add_clicked'
        QtMocHelpers::SlotData<void()>(118, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnUEFIDrivers_Del_clicked'
        QtMocHelpers::SlotData<void()>(119, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnKernelAdd_Up_clicked'
        QtMocHelpers::SlotData<void()>(120, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnKernelAdd_Down_clicked'
        QtMocHelpers::SlotData<void()>(121, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnSaveAs'
        QtMocHelpers::SlotData<void()>(122, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnKernelAdd_Del_clicked'
        QtMocHelpers::SlotData<void()>(123, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_dp_add_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(124, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_dp_add_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(125, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_nv_add_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(130, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_nv_add_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(131, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_kernel_add_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(132, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_kernel_block_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(133, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_kernel_patch_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(134, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_cboxSystemProductName_currentIndexChanged'
        QtMocHelpers::SlotData<void(const QString &)>(135, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_editIntExposeSensitiveData_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(137, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_editIntScanPolicy_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(138, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_editIntDisplayLevel_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(139, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_editIntPickerAttributes_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(140, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_btnSystemProductName_clicked'
        QtMocHelpers::SlotData<void()>(141, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnSystemUUID_clicked'
        QtMocHelpers::SlotData<void()>(142, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_kernel_Force_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(143, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_kernel_Force_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(144, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_btnKernelForce_Add_clicked'
        QtMocHelpers::SlotData<void()>(145, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnKernelForce_Del_clicked'
        QtMocHelpers::SlotData<void()>(146, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_uefi_ReservedMemory_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(147, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_btnHelp'
        QtMocHelpers::SlotData<void()>(148, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tabTotal_tabBarClicked'
        QtMocHelpers::SlotData<void(int)>(149, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 150 },
        }}),
        // Slot 'on_tabTotal_currentChanged'
        QtMocHelpers::SlotData<void(int)>(151, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 150 },
        }}),
        // Slot 'on_btnDevices_add_clicked'
        QtMocHelpers::SlotData<void()>(152, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDevices_del_clicked'
        QtMocHelpers::SlotData<void()>(153, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cboxUpdateSMBIOSMode_currentIndexChanged'
        QtMocHelpers::SlotData<void(const QString &)>(154, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_table_dp_add0_itemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(155, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'on_table_dp_del0_itemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(156, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'on_table_nv_add0_itemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(157, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'on_table_nv_del0_itemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(158, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'on_table_nv_ls0_itemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(159, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'on_table_dp_del_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(160, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_tableBlessOverride_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(161, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_nv_del_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(162, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_nv_ls_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(163, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_tableDevices_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(164, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_uefi_drivers_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(165, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_btnBooterPatchAdd_clicked'
        QtMocHelpers::SlotData<void()>(166, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnBooterPatchDel_clicked'
        QtMocHelpers::SlotData<void()>(167, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_Booter_patch_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(168, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_Booter_patch_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(169, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_btnCheckUpdate'
        QtMocHelpers::SlotData<void()>(170, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'replyFinished'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(171, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 172, 173 },
        }}),
        // Slot 'on_editIntTarget_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(174, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_editIntHaltLevel_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(175, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_listMain_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(176, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listSub_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(177, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_dp_add0_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(178, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_dp_del0_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(179, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_nv_add0_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(180, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_nv_del0_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(181, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_nv_ls0_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(182, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_acpi_add_itemEntered'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(183, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'on_table_acpi_add_cellEntered'
        QtMocHelpers::SlotData<void(int, int)>(184, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'lineEdit_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(185, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'lineEdit_textEdited'
        QtMocHelpers::SlotData<void(const QString &)>(186, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_table_nv_ls_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(187, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_acpi_add_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(188, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_nv_add0_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(189, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_acpi_del_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(190, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_acpi_patch_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(191, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_booter_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(192, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_tableBlessOverride_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(193, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_tableEntries_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(194, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_tableTools_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(195, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_tableDevices_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(196, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_uefi_drivers_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(197, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_dp_add0_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(198, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_dp_del0_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(199, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_dp_del_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(200, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_nv_del0_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(201, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_nv_ls0_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(202, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_nv_del_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(203, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_dp_add0_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(204, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_dp_add_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(205, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_dp_del0_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(206, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_acpi_add_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(207, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_acpi_del_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(208, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_acpi_patch_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(209, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_booter_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(210, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_Booter_patch_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(211, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_kernel_add_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(212, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_kernel_block_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(213, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_kernel_Force_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(214, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_kernel_patch_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(215, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_tableBlessOverride_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(216, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_tableEntries_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(217, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_tableTools_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(218, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_nv_add0_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(219, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_nv_add_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(220, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_nv_del0_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(221, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_nv_del_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(222, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_nv_ls0_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(223, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_nv_ls_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(224, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_tableDevices_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(225, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_uefi_drivers_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(226, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_uefi_ReservedMemory_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(227, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_table_dp_del_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(228, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
        // Slot 'on_actionNewWindow_triggered'
        QtMocHelpers::SlotData<void()>(229, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGo_to_the_previous_triggered'
        QtMocHelpers::SlotData<void()>(230, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGo_to_the_next_triggered'
        QtMocHelpers::SlotData<void()>(231, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_mycboxFind_currentTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(232, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_listFind_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(233, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 },
        }}),
        // Slot 'on_listFind_itemClicked'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(234, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 235, 65 },
        }}),
        // Slot 'on_actionBug_Report_triggered'
        QtMocHelpers::SlotData<void()>(236, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionQuit_triggered'
        QtMocHelpers::SlotData<void()>(237, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionUpgrade_OC_triggered'
        QtMocHelpers::SlotData<void()>(238, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDiscussion_Forum_triggered'
        QtMocHelpers::SlotData<void()>(239, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_mycboxTextColor_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(240, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 150 },
        }}),
        // Slot 'on_mycboxBackColor_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(241, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 150 },
        }}),
        // Slot 'on_editIntConsoleAttributes_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(242, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_btnGetPassHash_clicked'
        QtMocHelpers::SlotData<void()>(243, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toolButton_clicked'
        QtMocHelpers::SlotData<void()>(244, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_calendarWidget_selectionChanged'
        QtMocHelpers::SlotData<void()>(245, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnROM_clicked'
        QtMocHelpers::SlotData<void()>(246, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_myeditPassInput_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(247, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_myeditPassInput_returnPressed'
        QtMocHelpers::SlotData<void()>(248, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOcvalidate_triggered'
        QtMocHelpers::SlotData<void()>(249, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMountEsp_triggered'
        QtMocHelpers::SlotData<void()>(250, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnExportMaster_triggered'
        QtMocHelpers::SlotData<void()>(251, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editDatPasswordHash_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(252, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_btnImportMaster_triggered'
        QtMocHelpers::SlotData<void()>(253, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editDatPasswordSalt_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(254, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_btnOpenACPIDir_clicked'
        QtMocHelpers::SlotData<void()>(255, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnOpenDriversDir_clicked'
        QtMocHelpers::SlotData<void()>(256, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnOpenToolsDir_clicked'
        QtMocHelpers::SlotData<void()>(257, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnOpenKextDir_clicked'
        QtMocHelpers::SlotData<void()>(258, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDisplayLevel_clicked'
        QtMocHelpers::SlotData<void()>(259, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnScanPolicy_clicked'
        QtMocHelpers::SlotData<void()>(260, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnPickerAttributes_clicked'
        QtMocHelpers::SlotData<void()>(261, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnExposeSensitiveData_clicked'
        QtMocHelpers::SlotData<void()>(262, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPlist_editor_triggered'
        QtMocHelpers::SlotData<void()>(263, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDSDT_SSDT_editor_triggered'
        QtMocHelpers::SlotData<void()>(264, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDifferences_triggered'
        QtMocHelpers::SlotData<void()>(265, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setWM_RightTable'
        QtMocHelpers::SlotData<void()>(266, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnUp_clicked'
        QtMocHelpers::SlotData<void()>(267, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDown_clicked'
        QtMocHelpers::SlotData<void()>(268, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnUp_UEFI_Drivers_clicked'
        QtMocHelpers::SlotData<void()>(269, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDown_UEFI_Drivers_clicked'
        QtMocHelpers::SlotData<void()>(270, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionLatest_Release_triggered'
        QtMocHelpers::SlotData<void()>(271, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_txtEditHex_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(272, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_txtEditASCII_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(273, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_listSub_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(274, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 },
        }}),
        // Slot 'on_listMain_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(275, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 },
        }}),
        // Slot 'on_btnUpdateHex_clicked'
        QtMocHelpers::SlotData<void()>(276, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpen_Directory_triggered'
        QtMocHelpers::SlotData<void()>(277, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpen_database_directory_triggered'
        QtMocHelpers::SlotData<void()>(278, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDPAddPreset_clicked'
        QtMocHelpers::SlotData<void()>(279, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnACPIPatch_clicked'
        QtMocHelpers::SlotData<void()>(280, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnPresetKernelPatch_clicked'
        QtMocHelpers::SlotData<void()>(281, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnPresetNVAdd_clicked'
        QtMocHelpers::SlotData<void()>(282, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnPresetNVDelete_clicked'
        QtMocHelpers::SlotData<void()>(283, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnPresetNVLegacy_clicked'
        QtMocHelpers::SlotData<void()>(284, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAutoChkUpdate_triggered'
        QtMocHelpers::SlotData<void()>(285, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEdit_Presets_triggered'
        QtMocHelpers::SlotData<void()>(286, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnNo_clicked'
        QtMocHelpers::SlotData<void()>(287, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnYes_clicked'
        QtMocHelpers::SlotData<void()>(288, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnAddbootArgs_clicked'
        QtMocHelpers::SlotData<void()>(289, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateStatus'
        QtMocHelpers::SlotData<void()>(290, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_nv_add0_itemClicked'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(291, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'on_btnKextPreset_clicked'
        QtMocHelpers::SlotData<void()>(292, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOCAuxiliaryToolsDoc_triggered'
        QtMocHelpers::SlotData<void()>(293, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionBackup_EFI_triggered'
        QtMocHelpers::SlotData<void()>(294, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_comboBoxACPI_currentTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(295, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_comboBoxBooter_currentIndexChanged'
        QtMocHelpers::SlotData<void(const QString &)>(296, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_comboBoxKernel_currentIndexChanged'
        QtMocHelpers::SlotData<void(const QString &)>(297, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_comboBoxUEFI_currentIndexChanged'
        QtMocHelpers::SlotData<void(const QString &)>(298, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_actionOpenCore_DEV_triggered'
        QtMocHelpers::SlotData<void()>(299, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDocumentation_triggered'
        QtMocHelpers::SlotData<void()>(300, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnHide_clicked'
        QtMocHelpers::SlotData<void()>(301, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMove_Up_triggered'
        QtMocHelpers::SlotData<void()>(302, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMove_Down_triggered'
        QtMocHelpers::SlotData<void()>(303, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAdd_triggered'
        QtMocHelpers::SlotData<void()>(304, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDelete_triggered'
        QtMocHelpers::SlotData<void()>(305, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_mycboxEmulate_currentTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(306, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_btnImport_clicked'
        QtMocHelpers::SlotData<void()>(307, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnExport_clicked'
        QtMocHelpers::SlotData<void()>(308, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDEBUG_triggered'
        QtMocHelpers::SlotData<void()>(309, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInitDatabaseLinux_triggered'
        QtMocHelpers::SlotData<void()>(310, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNew_Key_Field_triggered'
        QtMocHelpers::SlotData<void()>(311, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnSystemSerialNumber_clicked'
        QtMocHelpers::SlotData<void()>(312, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editSystemSerialNumber_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(313, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_editSystemUUID_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(314, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_editMLB_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(315, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_editDatROM_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(316, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 136 },
        }}),
        // Slot 'on_actionOpenCoreChineseDoc_triggered'
        QtMocHelpers::SlotData<void()>(317, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'dataClassChange_uefi_drivers'
        QtMocHelpers::SlotData<void()>(318, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnUEFIUnload_Add_clicked'
        QtMocHelpers::SlotData<void()>(319, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnUEFIUnload_Del_clicked'
        QtMocHelpers::SlotData<void()>(320, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_table_uefi_Unload_currentCellChanged'
        QtMocHelpers::SlotData<void(int, int, int, int)>(321, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Int, 127 }, { QMetaType::Int, 128 }, { QMetaType::Int, 129 },
        }}),
        // Slot 'on_table_uefi_Unload_cellDoubleClicked'
        QtMocHelpers::SlotData<void(int, int)>(322, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::Int, 17 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->DisplayLevel(); break;
        case 1: _t->ScanPolicy(); break;
        case 2: _t->PickerAttributes(); break;
        case 3: _t->ExposeSensitiveData(); break;
        case 4: _t->on_actionFind_triggered(); break;
        case 5: _t->on_btnNVRAMAdd_Add_clicked(); break;
        case 6: _t->on_btnDPAdd_Add0_clicked(); break;
        case 7: _t->on_btnACPIPatch_Add_clicked(); break;
        case 8: _t->on_btnKernelPatchAdd_clicked(); break;
        case 9: _t->on_btnNVRAMAdd_Add0_clicked(); break;
        case 10: _t->on_btnNVRAMAdd_Del0_clicked(); break;
        case 11: _t->on_btnNVRAMLS_Add0_clicked(); break;
        case 12: _t->on_btnNVRAMDel_Add0_clicked(); break;
        case 13: _t->cellEnteredSlot((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 14: _t->on_actionOnline_Download_Updates_triggered(); break;
        case 15: _t->on_actionDatabase_triggered(); break;
        case 16: _t->on_actionPreferences_triggered(); break;
        case 17: _t->on_actionGenerateEFI_triggered(); break;
        case 18: _t->Target(); break;
        case 19: _t->readResultPassHash(); break;
        case 20: _t->clearFindTexts(); break;
        case 21: _t->copyText((*reinterpret_cast<std::add_pointer_t<QListWidget*>>(_a[1]))); break;
        case 22: _t->on_line1(); break;
        case 23: _t->on_line2(); break;
        case 24: _t->recentOpen((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->on_nv1(); break;
        case 26: _t->on_nv2(); break;
        case 27: _t->on_nv3(); break;
        case 28: _t->on_nv4(); break;
        case 29: _t->on_nv5(); break;
        case 30: _t->on_nv6(); break;
        case 31: _t->on_nv7(); break;
        case 32: _t->on_nv8(); break;
        case 33: _t->on_nv9(); break;
        case 34: _t->on_nv10(); break;
        case 35: _t->on_nv11(); break;
        case 36: _t->on_nv12(); break;
        case 37: _t->on_nv01(); break;
        case 38: _t->on_nv02(); break;
        case 39: _t->on_nv03(); break;
        case 40: _t->on_nv04(); break;
        case 41: _t->show_menu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 42: _t->show_menu0((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 43: _t->dataClassChange_dp(); break;
        case 44: _t->dataClassChange_nv(); break;
        case 45: _t->readResult(); break;
        case 46: _t->readResultDiskInfo(); break;
        case 47: _t->arch_addChange(); break;
        case 48: _t->arch_ForceChange(); break;
        case 49: _t->arch_blockChange(); break;
        case 50: _t->arch_patchChange(); break;
        case 51: _t->arch_Booter_patchChange(); break;
        case 52: _t->ReservedMemoryTypeChange(); break;
        case 53: _t->on_btnOpen(); break;
        case 54: _t->on_table_dp_add0_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 55: _t->on_table_dp_add_itemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 56: _t->on_table_nv_add0_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 57: _t->on_table_nv_add_itemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 58: _t->on_table_nv_del0_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 59: _t->on_table_nv_ls0_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 60: _t->on_table_nv_del_itemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 61: _t->on_table_nv_ls_itemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 62: _t->on_table_dp_del0_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 63: _t->on_table_dp_del_itemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 64: _t->on_btnSave(); break;
        case 65: _t->on_table_acpi_add_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 66: _t->on_table_acpi_del_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 67: _t->on_table_acpi_patch_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 68: _t->on_table_booter_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 69: _t->on_table_kernel_add_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 70: _t->on_table_kernel_block_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 71: _t->on_table_kernel_patch_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 72: _t->on_tableEntries_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 73: _t->on_tableTools_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 74: _t->on_table_uefi_ReservedMemory_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 75: _t->on_btnKernelPatchDel_clicked(); break;
        case 76: _t->on_btnACPIAdd_Del_clicked(); break;
        case 77: _t->on_btnACPIDel_Add_clicked(); break;
        case 78: _t->on_btnACPIDel_Del_clicked(); break;
        case 79: _t->on_btnACPIPatch_Del_clicked(); break;
        case 80: _t->on_btnBooter_Add_clicked(); break;
        case 81: _t->on_btnBooter_Del_clicked(); break;
        case 82: _t->on_btnDPDel_Add0_clicked(); break;
        case 83: _t->on_btnDPDel_Del0_clicked(); break;
        case 84: _t->on_btnDPDel_Add_clicked(); break;
        case 85: _t->on_btnDPDel_Del_clicked(); break;
        case 86: _t->on_btnACPIAdd_Add_clicked(); break;
        case 87: _t->on_btnDPAdd_Del0_clicked(); break;
        case 88: _t->on_btnDPAdd_Add_clicked(); break;
        case 89: _t->on_btnDPAdd_Del_clicked(); break;
        case 90: _t->on_btnKernelAdd_Add_clicked(); break;
        case 91: _t->on_btnKernelBlock_Add_clicked(); break;
        case 92: _t->on_btnKernelBlock_Del_clicked(); break;
        case 93: _t->on_btnMiscBO_Add_clicked(); break;
        case 94: _t->on_btnMiscBO_Del_clicked(); break;
        case 95: _t->on_btnMiscEntries_Add_clicked(); break;
        case 96: _t->on_btnMiscTools_Add_clicked(); break;
        case 97: _t->on_btnMiscEntries_Del_clicked(); break;
        case 98: _t->on_btnMiscTools_Del_clicked(); break;
        case 99: _t->on_btnNVRAMAdd_Del_clicked(); break;
        case 100: _t->on_btnNVRAMDel_Add_clicked(); break;
        case 101: _t->on_btnNVRAMLS_Add_clicked(); break;
        case 102: _t->on_btnNVRAMDel_Del0_clicked(); break;
        case 103: _t->on_btnNVRAMLS_Del0_clicked(); break;
        case 104: _t->on_btnNVRAMDel_Del_clicked(); break;
        case 105: _t->on_btnNVRAMLS_Del_clicked(); break;
        case 106: _t->on_btnUEFIRM_Add_clicked(); break;
        case 107: _t->on_btnUEFIRM_Del_clicked(); break;
        case 108: _t->on_btnUEFIDrivers_Add_clicked(); break;
        case 109: _t->on_btnUEFIDrivers_Del_clicked(); break;
        case 110: _t->on_btnKernelAdd_Up_clicked(); break;
        case 111: _t->on_btnKernelAdd_Down_clicked(); break;
        case 112: _t->on_btnSaveAs(); break;
        case 113: _t->on_btnKernelAdd_Del_clicked(); break;
        case 114: _t->on_table_dp_add_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 115: _t->on_table_dp_add_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 116: _t->on_table_nv_add_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 117: _t->on_table_nv_add_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 118: _t->on_table_kernel_add_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 119: _t->on_table_kernel_block_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 120: _t->on_table_kernel_patch_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 121: _t->on_cboxSystemProductName_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 122: _t->on_editIntExposeSensitiveData_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 123: _t->on_editIntScanPolicy_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 124: _t->on_editIntDisplayLevel_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 125: _t->on_editIntPickerAttributes_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 126: _t->on_btnSystemProductName_clicked(); break;
        case 127: _t->on_btnSystemUUID_clicked(); break;
        case 128: _t->on_table_kernel_Force_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 129: _t->on_table_kernel_Force_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 130: _t->on_btnKernelForce_Add_clicked(); break;
        case 131: _t->on_btnKernelForce_Del_clicked(); break;
        case 132: _t->on_table_uefi_ReservedMemory_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 133: _t->on_btnHelp(); break;
        case 134: _t->on_tabTotal_tabBarClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 135: _t->on_tabTotal_currentChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 136: _t->on_btnDevices_add_clicked(); break;
        case 137: _t->on_btnDevices_del_clicked(); break;
        case 138: _t->on_cboxUpdateSMBIOSMode_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 139: _t->on_table_dp_add0_itemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 140: _t->on_table_dp_del0_itemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 141: _t->on_table_nv_add0_itemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 142: _t->on_table_nv_del0_itemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 143: _t->on_table_nv_ls0_itemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 144: _t->on_table_dp_del_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 145: _t->on_tableBlessOverride_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 146: _t->on_table_nv_del_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 147: _t->on_table_nv_ls_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 148: _t->on_tableDevices_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 149: _t->on_table_uefi_drivers_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 150: _t->on_btnBooterPatchAdd_clicked(); break;
        case 151: _t->on_btnBooterPatchDel_clicked(); break;
        case 152: _t->on_table_Booter_patch_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 153: _t->on_table_Booter_patch_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 154: _t->on_btnCheckUpdate(); break;
        case 155: _t->replyFinished((*reinterpret_cast<std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 156: _t->on_editIntTarget_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 157: _t->on_editIntHaltLevel_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 158: _t->on_listMain_itemSelectionChanged(); break;
        case 159: _t->on_listSub_itemSelectionChanged(); break;
        case 160: _t->on_table_dp_add0_itemSelectionChanged(); break;
        case 161: _t->on_table_dp_del0_itemSelectionChanged(); break;
        case 162: _t->on_table_nv_add0_itemSelectionChanged(); break;
        case 163: _t->on_table_nv_del0_itemSelectionChanged(); break;
        case 164: _t->on_table_nv_ls0_itemSelectionChanged(); break;
        case 165: _t->on_table_acpi_add_itemEntered((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 166: _t->on_table_acpi_add_cellEntered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 167: _t->lineEdit_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 168: _t->lineEdit_textEdited((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 169: _t->on_table_nv_ls_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 170: _t->on_table_acpi_add_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 171: _t->on_table_nv_add0_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 172: _t->on_table_acpi_del_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 173: _t->on_table_acpi_patch_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 174: _t->on_table_booter_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 175: _t->on_tableBlessOverride_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 176: _t->on_tableEntries_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 177: _t->on_tableTools_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 178: _t->on_tableDevices_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 179: _t->on_table_uefi_drivers_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 180: _t->on_table_dp_add0_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 181: _t->on_table_dp_del0_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 182: _t->on_table_dp_del_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 183: _t->on_table_nv_del0_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 184: _t->on_table_nv_ls0_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 185: _t->on_table_nv_del_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 186: _t->on_table_dp_add0_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 187: _t->on_table_dp_add_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 188: _t->on_table_dp_del0_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 189: _t->on_table_acpi_add_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 190: _t->on_table_acpi_del_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 191: _t->on_table_acpi_patch_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 192: _t->on_table_booter_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 193: _t->on_table_Booter_patch_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 194: _t->on_table_kernel_add_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 195: _t->on_table_kernel_block_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 196: _t->on_table_kernel_Force_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 197: _t->on_table_kernel_patch_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 198: _t->on_tableBlessOverride_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 199: _t->on_tableEntries_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 200: _t->on_tableTools_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 201: _t->on_table_nv_add0_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 202: _t->on_table_nv_add_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 203: _t->on_table_nv_del0_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 204: _t->on_table_nv_del_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 205: _t->on_table_nv_ls0_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 206: _t->on_table_nv_ls_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 207: _t->on_tableDevices_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 208: _t->on_table_uefi_drivers_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 209: _t->on_table_uefi_ReservedMemory_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 210: _t->on_table_dp_del_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 211: _t->on_actionNewWindow_triggered(); break;
        case 212: _t->on_actionGo_to_the_previous_triggered(); break;
        case 213: _t->on_actionGo_to_the_next_triggered(); break;
        case 214: _t->on_mycboxFind_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 215: _t->on_listFind_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 216: _t->on_listFind_itemClicked((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 217: _t->on_actionBug_Report_triggered(); break;
        case 218: _t->on_actionQuit_triggered(); break;
        case 219: _t->on_actionUpgrade_OC_triggered(); break;
        case 220: _t->on_actionDiscussion_Forum_triggered(); break;
        case 221: _t->on_mycboxTextColor_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 222: _t->on_mycboxBackColor_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 223: _t->on_editIntConsoleAttributes_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 224: _t->on_btnGetPassHash_clicked(); break;
        case 225: _t->on_toolButton_clicked(); break;
        case 226: _t->on_calendarWidget_selectionChanged(); break;
        case 227: _t->on_btnROM_clicked(); break;
        case 228: _t->on_myeditPassInput_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 229: _t->on_myeditPassInput_returnPressed(); break;
        case 230: _t->on_actionOcvalidate_triggered(); break;
        case 231: _t->on_actionMountEsp_triggered(); break;
        case 232: _t->on_btnExportMaster_triggered(); break;
        case 233: _t->on_editDatPasswordHash_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 234: _t->on_btnImportMaster_triggered(); break;
        case 235: _t->on_editDatPasswordSalt_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 236: _t->on_btnOpenACPIDir_clicked(); break;
        case 237: _t->on_btnOpenDriversDir_clicked(); break;
        case 238: _t->on_btnOpenToolsDir_clicked(); break;
        case 239: _t->on_btnOpenKextDir_clicked(); break;
        case 240: _t->on_btnDisplayLevel_clicked(); break;
        case 241: _t->on_btnScanPolicy_clicked(); break;
        case 242: _t->on_btnPickerAttributes_clicked(); break;
        case 243: _t->on_btnExposeSensitiveData_clicked(); break;
        case 244: _t->on_actionPlist_editor_triggered(); break;
        case 245: _t->on_actionDSDT_SSDT_editor_triggered(); break;
        case 246: _t->on_actionDifferences_triggered(); break;
        case 247: _t->setWM_RightTable(); break;
        case 248: _t->on_btnUp_clicked(); break;
        case 249: _t->on_btnDown_clicked(); break;
        case 250: _t->on_btnUp_UEFI_Drivers_clicked(); break;
        case 251: _t->on_btnDown_UEFI_Drivers_clicked(); break;
        case 252: _t->on_actionLatest_Release_triggered(); break;
        case 253: _t->on_txtEditHex_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 254: _t->on_txtEditASCII_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 255: _t->on_listSub_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 256: _t->on_listMain_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 257: _t->on_btnUpdateHex_clicked(); break;
        case 258: _t->on_actionOpen_Directory_triggered(); break;
        case 259: _t->on_actionOpen_database_directory_triggered(); break;
        case 260: _t->on_btnDPAddPreset_clicked(); break;
        case 261: _t->on_btnACPIPatch_clicked(); break;
        case 262: _t->on_btnPresetKernelPatch_clicked(); break;
        case 263: _t->on_btnPresetNVAdd_clicked(); break;
        case 264: _t->on_btnPresetNVDelete_clicked(); break;
        case 265: _t->on_btnPresetNVLegacy_clicked(); break;
        case 266: _t->on_actionAutoChkUpdate_triggered(); break;
        case 267: _t->on_actionEdit_Presets_triggered(); break;
        case 268: _t->on_btnNo_clicked(); break;
        case 269: _t->on_btnYes_clicked(); break;
        case 270: _t->on_btnAddbootArgs_clicked(); break;
        case 271: _t->updateStatus(); break;
        case 272: _t->on_table_nv_add0_itemClicked((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 273: _t->on_btnKextPreset_clicked(); break;
        case 274: _t->on_actionOCAuxiliaryToolsDoc_triggered(); break;
        case 275: _t->on_actionBackup_EFI_triggered(); break;
        case 276: _t->on_comboBoxACPI_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 277: _t->on_comboBoxBooter_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 278: _t->on_comboBoxKernel_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 279: _t->on_comboBoxUEFI_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 280: _t->on_actionOpenCore_DEV_triggered(); break;
        case 281: _t->on_actionDocumentation_triggered(); break;
        case 282: _t->on_btnHide_clicked(); break;
        case 283: _t->on_actionMove_Up_triggered(); break;
        case 284: _t->on_actionMove_Down_triggered(); break;
        case 285: _t->on_actionAdd_triggered(); break;
        case 286: _t->on_actionDelete_triggered(); break;
        case 287: _t->on_mycboxEmulate_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 288: _t->on_btnImport_clicked(); break;
        case 289: _t->on_btnExport_clicked(); break;
        case 290: _t->on_actionDEBUG_triggered(); break;
        case 291: _t->on_actionInitDatabaseLinux_triggered(); break;
        case 292: _t->on_actionNew_Key_Field_triggered(); break;
        case 293: _t->on_btnSystemSerialNumber_clicked(); break;
        case 294: _t->on_editSystemSerialNumber_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 295: _t->on_editSystemUUID_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 296: _t->on_editMLB_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 297: _t->on_editDatROM_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 298: _t->on_actionOpenCoreChineseDoc_triggered(); break;
        case 299: _t->dataClassChange_uefi_drivers(); break;
        case 300: _t->on_btnUEFIUnload_Add_clicked(); break;
        case 301: _t->on_btnUEFIUnload_Del_clicked(); break;
        case 302: _t->on_table_uefi_Unload_currentCellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 303: _t->on_table_uefi_Unload_cellDoubleClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QListWidget* >(); break;
            }
            break;
        case 155:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 304)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 304;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 304)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 304;
    }
    return _id;
}
QT_WARNING_POP
