/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionAbout_2;
    QAction *actionOpenCore_Forum;
    QAction *actionOpenCore_Factory;
    QAction *actionOpenCore;
    QAction *actionPlist_editor;
    QAction *actionDSDT_SSDT_editor;
    QAction *actionOpenCanopyIcons;
    QAction *actionMountEsp;
    QAction *actionOcvalidate;
    QAction *btnExportMaster;
    QAction *btnImportMaster;
    QAction *btnHelp;
    QAction *btnCheckUpdate;
    QAction *actionDatabase;
    QAction *actionGenerateEFI;
    QAction *actionOpen_database_directory;
    QAction *actionNewWindow;
    QAction *actionFind;
    QAction *actionGo_to_the_previous;
    QAction *actionGo_to_the_next;
    QAction *actionBug_Report;
    QAction *actionDiscussion_Forum;
    QAction *actionQuit;
    QAction *actionUpgrade_OC;
    QAction *actionDifferences;
    QAction *actionLatest_Release;
    QAction *actionOnline_Download_Updates;
    QAction *actionOpen_Directory;
    QAction *actionAutoChkUpdate;
    QAction *actionEdit_Presets;
    QAction *actionOCAuxiliaryToolsDoc;
    QAction *actionBackup_EFI;
    QAction *actionOpenCore_DEV;
    QAction *actionPreferences;
    QAction *actionDocumentation;
    QAction *actionMove_Up;
    QAction *actionMove_Down;
    QAction *actionAdd;
    QAction *actionDelete;
    QAction *actionDEBUG;
    QAction *actionNew_Key_Field;
    QAction *actionInitDatabaseLinux;
    QAction *actionOpenCoreChineseDoc;
    QWidget *centralwidget;
    QGridLayout *gridLayout_31;
    QFrame *frameTip;
    QGridLayout *gridLayout_64;
    QLabel *lblFileName;
    QPushButton *btnNo;
    QPushButton *btnYes;
    QListWidget *listMain;
    QFrame *frameToolBar;
    QGridLayout *gridLayout_76;
    QLabel *lblCount;
    QComboBox *mycboxFind;
    QToolButton *btnHide;
    QListWidget *listFind;
    QListWidget *listSub;
    QGridLayout *gridLayout_StatusBar;
    QLineEdit *txtEditHex;
    QLabel *lblTemp1;
    QLineEdit *txtEditASCII;
    QLabel *lblStatusShow;
    QToolButton *btnUpdateHex;
    QLabel *lblTemp2;
    QLabel *lblHexASCII;
    QSpacerItem *horizontalSpacer_37;
    QLabel *lblOCVTip;
    QTabWidget *tabTotal;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTabWidget *tabACPI;
    QWidget *tabACPI1;
    QHBoxLayout *horizontalLayout_106;
    QTableWidget *table_acpi_add;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btnACPIAdd_Add;
    QToolButton *btnACPIAdd_Del;
    QToolButton *btnUp;
    QToolButton *btnDown;
    QToolButton *btnOpenACPIDir;
    QWidget *tabACPI2;
    QGridLayout *gridLayout_4;
    QTableWidget *table_acpi_del;
    QVBoxLayout *verticalLayout_5;
    QToolButton *btnACPIDel_Add;
    QToolButton *btnACPIDel_Del;
    QWidget *tabACPI3;
    QGridLayout *gridLayout_5;
    QTableWidget *table_acpi_patch;
    QVBoxLayout *verticalLayout_4;
    QToolButton *btnACPIPatch_Add;
    QToolButton *btnACPIPatch_Del;
    QToolButton *btnACPIPatch;
    QWidget *tabACPI4;
    QGridLayout *gridLayout_28;
    QFrame *frame_2;
    QGridLayout *gridLayout_43;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_122;
    QComboBox *comboBoxACPI;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame_chk_10;
    QVBoxLayout *verticalLayout_36;
    QCheckBox *chkFadtEnableReset;
    QCheckBox *chkNormalizeHeaders;
    QCheckBox *chkResetLogoStatus;
    QCheckBox *chkResetHwSig;
    QCheckBox *chkRebaseRegions;
    QCheckBox *chkSyncTableIds;
    QSpacerItem *horizontalSpacer_9;
    QWidget *tab_3;
    QGridLayout *gridLayout_53;
    QTabWidget *tabBooter;
    QWidget *tabBooter1;
    QGridLayout *gridLayout_7;
    QTableWidget *table_booter;
    QVBoxLayout *verticalLayout_23;
    QToolButton *btnBooter_Add;
    QToolButton *btnBooter_Del;
    QWidget *tabBooter2;
    QGridLayout *gridLayout_38;
    QTableWidget *table_Booter_patch;
    QVBoxLayout *verticalLayout_24;
    QToolButton *btnBooterPatchAdd;
    QToolButton *btnBooterPatchDel;
    QWidget *tabBooter3;
    QGridLayout *gridLayout_6;
    QFrame *frame_chk_12;
    QVBoxLayout *verticalLayout_38;
    QCheckBox *chkAllowRelocationBlock;
    QCheckBox *chkAvoidRuntimeDefrag;
    QCheckBox *chkDevirtualiseMmio;
    QCheckBox *chkDisableSingleUser;
    QCheckBox *chkDisableVariableWrite;
    QCheckBox *chkDiscardHibernateMap;
    QCheckBox *chkEnableSafeModeSlide;
    QCheckBox *chkEnableWriteUnprotector;
    QCheckBox *chkForceExitBootServices;
    QFrame *frame_chk_13;
    QVBoxLayout *verticalLayout_48;
    QCheckBox *chkForceBooterSignature;
    QCheckBox *chkProtectSecureBoot;
    QCheckBox *chkProtectUefiServices;
    QCheckBox *chkProvideCustomSlide;
    QCheckBox *chkProtectMemoryRegions;
    QCheckBox *chkSetupVirtualMap;
    QCheckBox *chkRebuildAppleMemoryMap;
    QCheckBox *chkSignalAppleOS;
    QCheckBox *chkSyncRuntimePermissions;
    QFrame *frame_edit_9;
    QVBoxLayout *verticalLayout_39;
    QHBoxLayout *horizontalLayout_56;
    QLabel *label_41;
    QLineEdit *editIntProvideMaxSlide;
    QHBoxLayout *horizontalLayout_57;
    QLabel *label_120;
    QLineEdit *editIntResizeAppleGpuBars;
    QGridLayout *gridLayout_67;
    QSpacerItem *horizontalSpacer_12;
    QComboBox *comboBoxBooter;
    QLabel *label_123;
    QSpacerItem *horizontalSpacer_13;
    QWidget *tab_2;
    QGridLayout *gridLayout_8;
    QTabWidget *tabDP;
    QWidget *tabDP1;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_dp_add;
    QTableWidget *table_dp_add0;
    QTableWidget *table_dp_add;
    QVBoxLayout *vlDPAdd;
    QToolButton *btnDPAdd_Add;
    QToolButton *btnDPAdd_Del;
    QVBoxLayout *vlDPAdd0;
    QToolButton *btnDPAdd_Add0;
    QToolButton *btnDPAdd_Del0;
    QToolButton *btnDPAddPreset;
    QWidget *tabDP2;
    QGridLayout *gridLayout_10;
    QTableWidget *table_dp_del0;
    QVBoxLayout *verticalLayout_11;
    QToolButton *btnDPDel_Add0;
    QToolButton *btnDPDel_Del0;
    QTableWidget *table_dp_del;
    QVBoxLayout *verticalLayout_12;
    QToolButton *btnDPDel_Add;
    QToolButton *btnDPDel_Del;
    QWidget *tab_4;
    QGridLayout *gridLayout_11;
    QTabWidget *tabKernel;
    QWidget *tabKernel1;
    QGridLayout *gridLayout_12;
    QVBoxLayout *verticalLayout_3;
    QToolButton *btnKernelAdd_Add;
    QToolButton *btnKernelAdd_Del;
    QToolButton *btnKernelAdd_Up;
    QToolButton *btnKernelAdd_Down;
    QToolButton *btnOpenKextDir;
    QToolButton *btnKextPreset;
    QTableWidget *table_kernel_add;
    QWidget *tabKernel2;
    QGridLayout *gridLayout_13;
    QTableWidget *table_kernel_block;
    QVBoxLayout *verticalLayout_6;
    QToolButton *btnKernelBlock_Add;
    QToolButton *btnKernelBlock_Del;
    QWidget *tabKernel3;
    QGridLayout *gridLayout_42;
    QTableWidget *table_kernel_Force;
    QVBoxLayout *verticalLayout_7;
    QToolButton *btnKernelForce_Add;
    QToolButton *btnKernelForce_Del;
    QWidget *tabKernel4;
    QGridLayout *gridLayout_14;
    QTableWidget *table_kernel_patch;
    QVBoxLayout *verticalLayout_8;
    QToolButton *btnKernelPatchAdd;
    QToolButton *btnKernelPatchDel;
    QToolButton *btnPresetKernelPatch;
    QWidget *tabKernel5;
    QGridLayout *gridLayout_36;
    QFrame *frame_chk_27;
    QVBoxLayout *verticalLayout_40;
    QCheckBox *chkDummyPowerManagement;
    QFrame *frame_edit_22;
    QVBoxLayout *verticalLayout_41;
    QHBoxLayout *horizontalLayout_58;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_126;
    QComboBox *mycboxEmulate;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_59;
    QLabel *label;
    QLineEdit *editDatCpuid1Data;
    QHBoxLayout *horizontalLayout_60;
    QLabel *label_2;
    QLineEdit *editDatCpuid1Mask;
    QHBoxLayout *horizontalLayout_61;
    QLabel *label_97;
    QLineEdit *editMaxKernel;
    QHBoxLayout *horizontalLayout_62;
    QLabel *label_98;
    QLineEdit *editMinKernel;
    QWidget *tabKernel6;
    QGridLayout *gridLayout_44;
    QFrame *frame_chk_14;
    QVBoxLayout *verticalLayout_42;
    QCheckBox *chkAppleCpuPmCfgLock;
    QCheckBox *chkAppleXcpmCfgLock;
    QCheckBox *chkAppleXcpmExtraMsrs;
    QCheckBox *chkAppleXcpmForceBoost;
    QCheckBox *chkCustomSMBIOSGuid;
    QCheckBox *chkDisableIoMapper;
    QCheckBox *chkDisableLinkeditJettison;
    QCheckBox *chkDisableRtcChecksum;
    QCheckBox *chkExtendBTFeatureFlags;
    QFrame *frame_chk_15;
    QVBoxLayout *verticalLayout_43;
    QCheckBox *chkExternalDiskIcons;
    QCheckBox *chkForceSecureBootScheme;
    QCheckBox *chkIncreasePciBarSize;
    QCheckBox *chkLapicKernelPanic;
    QCheckBox *chkLegacyCommpage;
    QCheckBox *chkPanicNoKextDump;
    QCheckBox *chkPowerTimeoutKernelPanic;
    QCheckBox *chkProvideCurrentCpuInfo;
    QCheckBox *chkThirdPartyDrives;
    QCheckBox *chkXhciPortLimit;
    QFrame *frame_edit_10;
    QVBoxLayout *verticalLayout_44;
    QHBoxLayout *horizontalLayout_63;
    QLabel *label_13;
    QLineEdit *editIntSetApfsTrimTimeout;
    QGridLayout *gridLayout_70;
    QSpacerItem *horizontalSpacer_30;
    QComboBox *comboBoxKernel;
    QLabel *label_124;
    QSpacerItem *horizontalSpacer_29;
    QWidget *tabKernel7;
    QGridLayout *gridLayout_60;
    QFrame *frame_chk_16;
    QVBoxLayout *verticalLayout_45;
    QCheckBox *chkCustomKernel;
    QCheckBox *chkFuzzyMatch;
    QFrame *frame_edit_11;
    QVBoxLayout *verticalLayout_46;
    QHBoxLayout *horizontalLayout_64;
    QLabel *label_43;
    QComboBox *cboxKernelArch;
    QHBoxLayout *horizontalLayout_65;
    QLabel *label_42;
    QComboBox *cboxKernelCache;
    QWidget *tab_5;
    QGridLayout *gridLayout_62;
    QTabWidget *tabMisc;
    QWidget *tabMisc1;
    QGridLayout *gridLayout_45;
    QFrame *frame_chk_23;
    QVBoxLayout *verticalLayout_63;
    QCheckBox *chkHideAuxiliary;
    QCheckBox *chkPollAppleHotKeys;
    QCheckBox *chkPickerAudioAssist;
    QCheckBox *chkShowPicker;
    QFrame *frame_edit_16;
    QVBoxLayout *verticalLayout_64;
    QHBoxLayout *horizontalLayout_74;
    QLabel *label_5;
    QLineEdit *editIntPickerAttributes;
    QLabel *lblPickerAttributes;
    QToolButton *btnPickerAttributes;
    QHBoxLayout *horizontalLayout_75;
    QLabel *label_4;
    QComboBox *cboxHibernateMode;
    QLabel *label_108;
    QComboBox *cboxLauncherOption;
    QHBoxLayout *horizontalLayout_76;
    QLabel *label_15;
    QComboBox *cboxLauncherPath;
    QLabel *label_6;
    QComboBox *cboxPickerMode;
    QHBoxLayout *horizontalLayout_77;
    QLabel *label_10;
    QComboBox *cboxPickerVariant;
    QHBoxLayout *horizontalLayout_78;
    QLabel *label_8;
    QLineEdit *editIntTakeoffDelay;
    QLabel *label_7;
    QLineEdit *editIntTimeout;
    QHBoxLayout *horizontalLayout_79;
    QLabel *label_3;
    QLineEdit *editIntConsoleAttributes;
    QHBoxLayout *horizontalLayout_80;
    QLabel *lblColorEffect;
    QHBoxLayout *horizontalLayout_81;
    QLabel *label_118;
    QComboBox *mycboxTextColor;
    QHBoxLayout *horizontalLayout_82;
    QLabel *label_119;
    QComboBox *mycboxBackColor;
    QWidget *tabMisc2;
    QGridLayout *gridLayout_25;
    QFrame *frame_chk_22;
    QVBoxLayout *verticalLayout_61;
    QCheckBox *chkAppleDebug;
    QCheckBox *chkApplePanic;
    QCheckBox *chkDisableWatchDog;
    QCheckBox *chkSerialInit;
    QCheckBox *chkSysReport;
    QFrame *frame_edit_15;
    QVBoxLayout *verticalLayout_62;
    QHBoxLayout *horizontalLayout_67;
    QLabel *label_39;
    QLineEdit *editIntDisplayLevel;
    QLabel *lblDisplayLevel;
    QToolButton *btnDisplayLevel;
    QHBoxLayout *horizontalLayout_70;
    QLabel *label_9;
    QLineEdit *editIntDisplayDelay;
    QHBoxLayout *horizontalLayout_73;
    QLabel *label_11;
    QLineEdit *editIntTarget;
    QLabel *lblTargetHex;
    QCheckBox *mychkT1;
    QCheckBox *mychkT2;
    QCheckBox *mychkT6;
    QCheckBox *mychkT5;
    QCheckBox *mychkT4;
    QCheckBox *mychkT3;
    QCheckBox *mychkT7;
    QWidget *tabMisc3;
    QGridLayout *gridLayout_22;
    QFrame *frame_chk_21;
    QVBoxLayout *verticalLayout_59;
    QCheckBox *chkAuthRestart;
    QCheckBox *chkAllowToggleSip;
    QCheckBox *chkAllowSetDefault;
    QCheckBox *chkAllowNvramReset;
    QCheckBox *chkBlacklistAppleUpdate;
    QCheckBox *chkEnablePassword;
    QFrame *frame_edit_14;
    QVBoxLayout *verticalLayout_60;
    QHBoxLayout *horizontalLayout;
    QLabel *label_27;
    QComboBox *cboxDmgLoading;
    QLabel *label_16;
    QComboBox *cboxVault;
    QHBoxLayout *horizontalLayout_68;
    QLabel *label_45;
    QComboBox *cboxSecureBootModel;
    QLabel *label_44;
    QLineEdit *editIntApECID;
    QHBoxLayout *horizontalLayout_69;
    QLabel *label_14;
    QLineEdit *editIntHaltLevel;
    QLabel *lblHaltLevel;
    QHBoxLayout *horizontalLayout_71;
    QLabel *label_110;
    QLineEdit *editIntExposeSensitiveData;
    QLabel *lblExposeSensitiveData;
    QToolButton *btnExposeSensitiveData;
    QHBoxLayout *horizontalLayout_72;
    QLabel *label_111;
    QLineEdit *editIntScanPolicy;
    QLabel *lblScanPolicy;
    QToolButton *btnScanPolicy;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *btnGetPassHash;
    QLineEdit *myeditPassInput;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_93;
    QLineEdit *editDatPasswordHash;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_94;
    QLineEdit *editDatPasswordSalt;
    QWidget *tabMisc4;
    QGridLayout *gridLayout_20;
    QTableWidget *tableBlessOverride;
    QVBoxLayout *verticalLayout_20;
    QToolButton *btnMiscBO_Add;
    QToolButton *btnMiscBO_Del;
    QWidget *tabMisc5;
    QGridLayout *gridLayout_21;
    QTableWidget *tableEntries;
    QVBoxLayout *verticalLayout_21;
    QToolButton *btnMiscEntries_Add;
    QToolButton *btnMiscEntries_Del;
    QWidget *tabMisc6;
    QGridLayout *gridLayout_16;
    QTableWidget *tableTools;
    QVBoxLayout *verticalLayout_22;
    QToolButton *btnMiscTools_Add;
    QToolButton *btnMiscTools_Del;
    QToolButton *btnOpenToolsDir;
    QWidget *tabMisc7;
    QGridLayout *gridLayout_50;
    QFrame *frame_chk_29;
    QGridLayout *gridLayout_48;
    QVBoxLayout *verticalLayout_74;
    QFrame *frame_edit_23;
    QVBoxLayout *verticalLayout_75;
    QGroupBox *gboxCustom;
    QGridLayout *gridLayout_51;
    QGridLayout *gridLayout_49;
    QLineEdit *editIntFifoControl;
    QLabel *label_130;
    QLabel *label_131;
    QLineEdit *editIntBaudRate;
    QLineEdit *editIntRegisterAccessWidth;
    QLineEdit *editIntRegisterStride;
    QLineEdit *editIntLineControl;
    QLabel *label_128;
    QLabel *label_134;
    QLabel *label_127;
    QLineEdit *editIntRegisterBase;
    QLabel *label_129;
    QLineEdit *editDatPciDeviceInfo;
    QLabel *label_133;
    QLabel *label_132;
    QLabel *label_135;
    QLineEdit *editIntClockRate;
    QCheckBox *chkUseHardwareFlowControl;
    QCheckBox *chkDetectCable;
    QLineEdit *editIntExtendedTxFifoSize;
    QCheckBox *chkUseMmio;
    QWidget *tab_6;
    QGridLayout *gridLayout_23;
    QTabWidget *tabNVRAM;
    QWidget *tabNVRAM1;
    QGridLayout *gridLayout_17;
    QGridLayout *gridLayout_nv_add;
    QTableWidget *table_nv_add0;
    QVBoxLayout *verticalLayout_9;
    QToolButton *btnNVRAMAdd_Add0;
    QToolButton *btnNVRAMAdd_Del0;
    QToolButton *btnPresetNVAdd;
    QTableWidget *table_nv_add;
    QVBoxLayout *verticalLayout_10;
    QToolButton *btnNVRAMAdd_Add;
    QToolButton *btnNVRAMAdd_Del;
    QToolButton *btnAddbootArgs;
    QWidget *tabNVRAM2;
    QGridLayout *gridLayout_18;
    QTableWidget *table_nv_del0;
    QVBoxLayout *verticalLayout_13;
    QToolButton *btnNVRAMDel_Add0;
    QToolButton *btnNVRAMDel_Del0;
    QToolButton *btnPresetNVDelete;
    QTableWidget *table_nv_del;
    QVBoxLayout *verticalLayout_14;
    QToolButton *btnNVRAMDel_Add;
    QToolButton *btnNVRAMDel_Del;
    QWidget *tabNVRAM3;
    QGridLayout *gridLayout_19;
    QTableWidget *table_nv_ls0;
    QVBoxLayout *verticalLayout_15;
    QToolButton *btnNVRAMLS_Add0;
    QToolButton *btnNVRAMLS_Del0;
    QToolButton *btnPresetNVLegacy;
    QTableWidget *table_nv_ls;
    QVBoxLayout *verticalLayout_16;
    QToolButton *btnNVRAMLS_Add;
    QToolButton *btnNVRAMLS_Del;
    QGroupBox *gboxNVRAM;
    QGridLayout *gridLayout_15;
    QFrame *frame_chk_24;
    QVBoxLayout *verticalLayout_69;
    QCheckBox *chkLegacyEnable;
    QFrame *frame_chk_25;
    QVBoxLayout *verticalLayout_72;
    QCheckBox *chkLegacyOverwrite;
    QFrame *frame_chk_26;
    QVBoxLayout *verticalLayout_73;
    QCheckBox *chkWriteFlash;
    QFrame *frame_edit_21;
    QVBoxLayout *verticalLayout_71;
    QVBoxLayout *verticalLayout_70;
    QWidget *tab_7;
    QGridLayout *gridLayout_26;
    QTabWidget *tabPlatformInfo;
    QWidget *tabPlatformInfo1;
    QGridLayout *gridLayout_73;
    QFrame *frame_chk_9;
    QVBoxLayout *verticalLayout_47;
    QCheckBox *chkSpoofVendor;
    QCheckBox *chkMaxBIOSVersion;
    QCheckBox *chkAdviseFeatures;
    QFrame *frame_edit_6;
    QVBoxLayout *verticalLayout_28;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_18;
    QComboBox *cboxSystemProductName;
    QToolButton *btnSystemProductName;
    QSpacerItem *horizontalSpacer_42;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_19;
    QLineEdit *editSystemSerialNumber;
    QToolButton *btnSystemSerialNumber;
    QLabel *label_17;
    QLineEdit *editMLB;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_21;
    QLineEdit *editSystemUUID;
    QToolButton *btnSystemUUID;
    QLabel *label_20;
    QLineEdit *editDatROM;
    QToolButton *btnROM;
    QHBoxLayout *horizontalLayout_46;
    QLabel *label_96;
    QComboBox *cboxSystemMemoryStatus;
    QLabel *label_95;
    QLineEdit *editIntProcessorType_Generic;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnImport;
    QPushButton *btnExport;
    QWidget *tabPlatformInfo2;
    QGridLayout *gridLayout_39;
    QFrame *frame_edit_17;
    QVBoxLayout *verticalLayout_65;
    QHBoxLayout *horizontalLayout_83;
    QLabel *label_46;
    QLineEdit *editIntARTFrequency;
    QHBoxLayout *horizontalLayout_84;
    QLabel *label_48;
    QLineEdit *editDatBoardRevision;
    QHBoxLayout *horizontalLayout_85;
    QLabel *label_47;
    QLineEdit *editBoardProduct;
    QHBoxLayout *horizontalLayout_86;
    QLabel *label_49;
    QLineEdit *editIntDevicePathsSupported;
    QHBoxLayout *horizontalLayout_87;
    QLabel *label_50;
    QLineEdit *editIntFSBFrequency;
    QHBoxLayout *horizontalLayout_88;
    QLabel *label_51;
    QLineEdit *editIntInitialTSC;
    QHBoxLayout *horizontalLayout_89;
    QLabel *label_52;
    QLineEdit *editPlatformName;
    QFrame *frame_edit_18;
    QVBoxLayout *verticalLayout_66;
    QHBoxLayout *horizontalLayout_90;
    QLabel *label_53;
    QLineEdit *editDatSmcBranch;
    QHBoxLayout *horizontalLayout_91;
    QLabel *label_54;
    QLineEdit *editDatSmcPlatform;
    QHBoxLayout *horizontalLayout_92;
    QLabel *label_55;
    QLineEdit *editDatSmcRevision;
    QHBoxLayout *horizontalLayout_93;
    QLabel *label_56;
    QLineEdit *editIntStartupPowerEvents;
    QHBoxLayout *horizontalLayout_94;
    QLabel *label_57;
    QLineEdit *editSystemProductName;
    QHBoxLayout *horizontalLayout_95;
    QLabel *label_58;
    QLineEdit *editSystemSerialNumber_data;
    QHBoxLayout *horizontalLayout_96;
    QLabel *label_59;
    QLineEdit *editSystemUUID_DataHub;
    QWidget *tabPlatformInfo3;
    QGridLayout *gridLayout_3;
    QFrame *frame_edit_7;
    QGridLayout *gridLayout_32;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_105;
    QLineEdit *editIntDataWidth;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_102;
    QLineEdit *editIntErrorCorrection;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_100;
    QLineEdit *editIntFormFactor;
    QHBoxLayout *horizontalLayout_52;
    QLabel *label_101;
    QLineEdit *editIntTotalWidth;
    QHBoxLayout *horizontalLayout_53;
    QLabel *label_103;
    QLineEdit *editIntType;
    QHBoxLayout *horizontalLayout_54;
    QLabel *label_104;
    QLineEdit *editIntTypeDetail;
    QHBoxLayout *horizontalLayout_55;
    QLabel *label_99;
    QLineEdit *editIntMaxCapacity;
    QHBoxLayout *horizontalLayout_107;
    QTableWidget *tableDevices;
    QVBoxLayout *verticalLayout_17;
    QToolButton *btnDevices_add;
    QToolButton *btnDevices_del;
    QFrame *frame_chk_28;
    QHBoxLayout *horizontalLayout_105;
    QHBoxLayout *horizontalLayout_104;
    QWidget *tabPlatformInfo4;
    QGridLayout *gridLayout_40;
    QFrame *frame_edit_19;
    QVBoxLayout *verticalLayout_67;
    QHBoxLayout *horizontalLayout_97;
    QLabel *label_60;
    QLineEdit *editBID;
    QHBoxLayout *horizontalLayout_98;
    QLabel *label_61;
    QLineEdit *editDatFirmwareFeatures;
    QHBoxLayout *horizontalLayout_99;
    QLabel *label_62;
    QLineEdit *editDatFirmwareFeaturesMask;
    QHBoxLayout *horizontalLayout_100;
    QLabel *label_63;
    QLineEdit *editMLB_PNVRAM;
    QHBoxLayout *horizontalLayout_101;
    QLabel *label_64;
    QLineEdit *editDatROM_PNVRAM;
    QHBoxLayout *horizontalLayout_102;
    QLabel *label_109;
    QLineEdit *editSystemSerialNumber_PNVRAM;
    QHBoxLayout *horizontalLayout_103;
    QLabel *label_106;
    QLineEdit *editSystemUUID_PlatformNVRAM;
    QWidget *tabPlatformInfo5;
    QGridLayout *gridLayout_41;
    QFrame *frame_edit_20;
    QVBoxLayout *verticalLayout_68;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_71;
    QLineEdit *editBoardAssetTag;
    QLabel *label_73;
    QLineEdit *editBoardLocationInChassis;
    QLabel *label_75;
    QLineEdit *editBoardManufacturer;
    QLabel *label_77;
    QLineEdit *editBoardProduct_2;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_81;
    QLineEdit *editIntBoardType;
    QLabel *label_83;
    QLineEdit *editBoardVersion;
    QLabel *label_65;
    QLineEdit *editBIOSReleaseDate;
    QLabel *label_67;
    QLineEdit *editBIOSVendor;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_85;
    QLineEdit *editChassisAssetTag;
    QLabel *label_87;
    QLineEdit *editChassisManufacturer;
    QLabel *label_89;
    QLineEdit *editChassisSerialNumber;
    QLabel *label_91;
    QLineEdit *editIntChassisType;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_84;
    QLineEdit *editSystemSKUNumber;
    QLabel *label_78;
    QLineEdit *editSystemFamily;
    QLabel *label_82;
    QLineEdit *editSystemProductName_2;
    QLabel *label_80;
    QLineEdit *editSystemManufacturer;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_88;
    QLineEdit *editSystemUUID_SMBIOS;
    QLabel *label_68;
    QLineEdit *editDatFirmwareFeatures_SMBIOS;
    QLabel *label_90;
    QLineEdit *editSystemVersion;
    QLabel *label_92;
    QLineEdit *editDatFirmwareFeaturesMask_SMBIOS;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_74;
    QLineEdit *editIntProcessorType;
    QLabel *label_76;
    QLineEdit *editDatSmcVersion;
    QLabel *label_72;
    QLineEdit *editIntPlatformFeature;
    QLabel *label_86;
    QLineEdit *editSystemSerialNumber_2;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_66;
    QLineEdit *editChassisVersion;
    QLabel *label_69;
    QLineEdit *editBIOSVersion;
    QLabel *label_79;
    QLineEdit *editBoardSerialNumber;
    QWidget *tabPlatformInfo6;
    QGridLayout *gridLayout_37;
    QTextEdit *textMacInfo;
    QGroupBox *gbox01;
    QGridLayout *gridLayout_24;
    QFrame *frame_chk_17;
    QVBoxLayout *verticalLayout_52;
    QCheckBox *chkAutomatic;
    QCheckBox *mychkSaveDataHub;
    QFrame *frame_chk_18;
    QVBoxLayout *verticalLayout_53;
    QCheckBox *chkCustomMemory;
    QCheckBox *chkUpdateDataHub;
    QCheckBox *chkUseRawUuidEncoding;
    QFrame *frame_chk_19;
    QVBoxLayout *verticalLayout_55;
    QCheckBox *chkUpdateSMBIOS;
    QCheckBox *chkUpdateNVRAM;
    QFrame *frame_edit_12;
    QVBoxLayout *verticalLayout_54;
    QHBoxLayout *horizontalLayout_66;
    QLabel *label_22;
    QComboBox *cboxUpdateSMBIOSMode;
    QWidget *tab_8;
    QGridLayout *gridLayout_47;
    QTabWidget *tabUEFI;
    QWidget *tabUEFI1;
    QGridLayout *gridLayout_59;
    QFrame *frame_chk_2;
    QVBoxLayout *verticalLayout_31;
    QCheckBox *chkEnableJumpstart;
    QCheckBox *chkGlobalConnect;
    QCheckBox *chkHideVerbose;
    QCheckBox *chkJumpstartHotPlug;
    QFrame *frame_edit_2;
    QVBoxLayout *verticalLayout_50;
    QHBoxLayout *horizontalLayout_42;
    QLabel *label_31;
    QLineEdit *editIntMinDate;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_30;
    QLineEdit *editIntMinVersion;
    QGridLayout *gridLayout_57;
    QCalendarWidget *calendarWidget;
    QWidget *tabUEFI2;
    QGridLayout *gridLayout_63;
    QFrame *frame_chk_3;
    QVBoxLayout *verticalLayout_33;
    QCheckBox *chkGraphicsInputMirroring;
    QCheckBox *chkCustomDelays;
    QFrame *frame_edit_3;
    QVBoxLayout *verticalLayout_51;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_114;
    QComboBox *cboxAppleEvent;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_116;
    QLineEdit *editIntKeyInitialDelay;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_113;
    QLineEdit *editIntKeySubsequentDelay;
    QHBoxLayout *horizontalLayout_49;
    QLabel *lblPointerPollMask;
    QLineEdit *editIntPointerPollMask;
    QHBoxLayout *horizontalLayout_50;
    QLabel *lblPointerPollMax;
    QLineEdit *editIntPointerPollMax;
    QHBoxLayout *horizontalLayout_29;
    QLabel *lblPointerPollMin;
    QLineEdit *editIntPointerPollMin;
    QHBoxLayout *horizontalLayout_51;
    QLabel *label_112;
    QLineEdit *editIntPointerSpeedDiv;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_117;
    QLineEdit *editIntPointerSpeedMul;
    QWidget *tabUEFI3;
    QGridLayout *gridLayout_72;
    QFrame *frame_chk;
    QVBoxLayout *verticalLayout_34;
    QCheckBox *chkAudioSupport;
    QCheckBox *chkDisconnectHda;
    QCheckBox *chkResetTrafficClass;
    QFrame *frame_edit;
    QVBoxLayout *verticalLayout_37;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_32;
    QLineEdit *editIntAudioCodec;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_33;
    QLineEdit *editAudioDevice;
    QHBoxLayout *horizontalLayout_13;
    QLabel *lblAudioOutMask;
    QLineEdit *editIntAudioOutMask;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_35;
    QLineEdit *editIntMaximumGain;
    QLabel *lblSystemAudioVolume;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_36;
    QLineEdit *editIntMinimumAssistGain;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_34;
    QLineEdit *editIntMinimumAudibleGain;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_70;
    QComboBox *cboxPlayChime;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_107;
    QLineEdit *editIntSetupDelay;
    QWidget *tabUEFI4;
    QGridLayout *gridLayout_29;
    QTableWidget *table_uefi_drivers;
    QVBoxLayout *verticalLayout_18;
    QToolButton *btnUEFIDrivers_Add;
    QToolButton *btnUEFIDrivers_Del;
    QToolButton *btnUp_UEFI_Drivers;
    QToolButton *btnDown_UEFI_Drivers;
    QToolButton *btnOpenDriversDir;
    QWidget *tabUEFI5;
    QGridLayout *gridLayout_33;
    QFrame *frame_chk_4;
    QVBoxLayout *verticalLayout_32;
    QCheckBox *chkKeySupport;
    QCheckBox *chkKeySwap;
    QCheckBox *chkKeyFiltering;
    QCheckBox *chkPointerSupport;
    QFrame *frame_edit_4;
    QVBoxLayout *verticalLayout_49;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_23;
    QComboBox *cboxKeySupportMode;
    QHBoxLayout *horizontalLayout_48;
    QLabel *label_37;
    QLineEdit *editIntKeyForgetThreshold;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_40;
    QLineEdit *editIntTimerResolution;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_38;
    QLineEdit *editPointerSupportMode;
    QWidget *tabUEFI6;
    QGridLayout *gridLayout_34;
    QFrame *frame_chk_11;
    QVBoxLayout *verticalLayout_29;
    QCheckBox *chkClearScreenOnModeSwitch;
    QCheckBox *chkDirectGopRendering;
    QCheckBox *chkForceResolution;
    QCheckBox *chkIgnoreTextInGraphics;
    QCheckBox *chkProvideConsoleGop;
    QCheckBox *chkReplaceTabWithSpace;
    QCheckBox *chkReconnectGraphicsOnConnect;
    QCheckBox *chkReconnectOnResChange;
    QCheckBox *chkSanitiseClearScreen;
    QCheckBox *chkUgaPassThrough;
    QFrame *frame_edit_8;
    QVBoxLayout *verticalLayout_30;
    QHBoxLayout *horizontalLayout_44;
    QLabel *label_24;
    QComboBox *cboxConsoleMode;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_25;
    QComboBox *cboxResolution;
    QHBoxLayout *horizontalLayout_45;
    QLabel *label_26;
    QComboBox *cboxTextRenderer;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_12;
    QComboBox *cboxGopPassThrough;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_121;
    QLineEdit *editIntUIScale;
    QWidget *tabUEFI7;
    QGridLayout *gridLayout_81;
    QFrame *frame_chk_5;
    QVBoxLayout *verticalLayout_26;
    QCheckBox *chkAppleAudio;
    QCheckBox *chkAppleBootPolicy;
    QCheckBox *chkAppleDebugLog;
    QCheckBox *chkAppleFramebufferInfo;
    QCheckBox *chkAppleImageConversion;
    QCheckBox *chkAppleImg4Verification;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QFrame *frame_chk_8;
    QVBoxLayout *verticalLayout_35;
    QCheckBox *chkDataHub;
    QCheckBox *chkFirmwareVolume;
    QCheckBox *chkDeviceProperties;
    QCheckBox *chkHashServices;
    QCheckBox *chkOSInfo;
    QCheckBox *chkUnicodeCollation;
    QFrame *frame_chk_7;
    QVBoxLayout *verticalLayout_27;
    QCheckBox *chkAppleKeyMap;
    QCheckBox *chkAppleRtcRam;
    QCheckBox *chkAppleSecureBoot;
    QCheckBox *chkAppleSmcIo;
    QCheckBox *chkAppleUserInterfaceTheme;
    QCheckBox *chkAppleEg2Info;
    QSpacerItem *horizontalSpacer_8;
    QWidget *tabUEFI8;
    QGridLayout *gridLayout_27;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_47;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_125;
    QComboBox *comboBoxUEFI;
    QSpacerItem *horizontalSpacer_17;
    QFrame *frame_chk_6;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkEnableVectorAcceleration;
    QCheckBox *chkDisableSecurityPolicy;
    QCheckBox *chkActivateHpetSupport;
    QCheckBox *chkEnableVmx;
    QCheckBox *chkForceOcWriteFlash;
    QCheckBox *chkForgeUefiSupport;
    QCheckBox *chkIgnoreInvalidFlexRatio;
    QCheckBox *chkReloadOptionRoms;
    QCheckBox *chkReleaseUsbOwnership;
    QCheckBox *chkRequestBootVarRouting;
    QCheckBox *chkUnblockFsConnect;
    QFrame *frame_edit_5;
    QVBoxLayout *verticalLayout_25;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_28;
    QLineEdit *editIntExitBootServicesDelay;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_115;
    QLineEdit *editIntResizeGpuBars;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_29;
    QLineEdit *editIntTscSyncTimeout;
    QWidget *tabUEFI9;
    QGridLayout *gridLayout_30;
    QTableWidget *table_uefi_ReservedMemory;
    QVBoxLayout *verticalLayout_19;
    QToolButton *btnUEFIRM_Add;
    QToolButton *btnUEFIRM_Del;
    QWidget *tabUEFI10;
    QHBoxLayout *horizontalLayout_108;
    QTableWidget *table_uefi_Unload;
    QVBoxLayout *verticalLayout_76;
    QToolButton *btnUEFIUnload_Add;
    QToolButton *btnUEFIUnload_Del;
    QGroupBox *gboxUEFI;
    QGridLayout *gridLayout_35;
    QFrame *frame_chk_20;
    QVBoxLayout *verticalLayout_56;
    QCheckBox *chkConnectDrivers;
    QFrame *frame_edit_13;
    QVBoxLayout *verticalLayout_58;
    QVBoxLayout *verticalLayout_57;
    QWidget *tab_42;
    QGridLayout *gridLayout_69;
    QListWidget *listHardwareInfo;
    QToolButton *btnGenerateFromHardware;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1121, 801);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName("actionSave_As");
        actionAbout_2 = new QAction(MainWindow);
        actionAbout_2->setObjectName("actionAbout_2");
        actionOpenCore_Forum = new QAction(MainWindow);
        actionOpenCore_Forum->setObjectName("actionOpenCore_Forum");
        actionOpenCore_Forum->setVisible(false);
        actionOpenCore_Factory = new QAction(MainWindow);
        actionOpenCore_Factory->setObjectName("actionOpenCore_Factory");
        actionOpenCore = new QAction(MainWindow);
        actionOpenCore->setObjectName("actionOpenCore");
        actionOpenCore->setVisible(false);
        actionPlist_editor = new QAction(MainWindow);
        actionPlist_editor->setObjectName("actionPlist_editor");
        actionDSDT_SSDT_editor = new QAction(MainWindow);
        actionDSDT_SSDT_editor->setObjectName("actionDSDT_SSDT_editor");
        actionOpenCanopyIcons = new QAction(MainWindow);
        actionOpenCanopyIcons->setObjectName("actionOpenCanopyIcons");
        actionOpenCanopyIcons->setVisible(false);
        actionMountEsp = new QAction(MainWindow);
        actionMountEsp->setObjectName("actionMountEsp");
        actionOcvalidate = new QAction(MainWindow);
        actionOcvalidate->setObjectName("actionOcvalidate");
        btnExportMaster = new QAction(MainWindow);
        btnExportMaster->setObjectName("btnExportMaster");
        btnImportMaster = new QAction(MainWindow);
        btnImportMaster->setObjectName("btnImportMaster");
        btnHelp = new QAction(MainWindow);
        btnHelp->setObjectName("btnHelp");
        btnCheckUpdate = new QAction(MainWindow);
        btnCheckUpdate->setObjectName("btnCheckUpdate");
        actionDatabase = new QAction(MainWindow);
        actionDatabase->setObjectName("actionDatabase");
        actionGenerateEFI = new QAction(MainWindow);
        actionGenerateEFI->setObjectName("actionGenerateEFI");
        actionOpen_database_directory = new QAction(MainWindow);
        actionOpen_database_directory->setObjectName("actionOpen_database_directory");
        actionNewWindow = new QAction(MainWindow);
        actionNewWindow->setObjectName("actionNewWindow");
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName("actionFind");
        actionGo_to_the_previous = new QAction(MainWindow);
        actionGo_to_the_previous->setObjectName("actionGo_to_the_previous");
        actionGo_to_the_next = new QAction(MainWindow);
        actionGo_to_the_next->setObjectName("actionGo_to_the_next");
        actionBug_Report = new QAction(MainWindow);
        actionBug_Report->setObjectName("actionBug_Report");
        actionDiscussion_Forum = new QAction(MainWindow);
        actionDiscussion_Forum->setObjectName("actionDiscussion_Forum");
        actionDiscussion_Forum->setVisible(false);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionUpgrade_OC = new QAction(MainWindow);
        actionUpgrade_OC->setObjectName("actionUpgrade_OC");
        actionDifferences = new QAction(MainWindow);
        actionDifferences->setObjectName("actionDifferences");
        actionLatest_Release = new QAction(MainWindow);
        actionLatest_Release->setObjectName("actionLatest_Release");
        actionOnline_Download_Updates = new QAction(MainWindow);
        actionOnline_Download_Updates->setObjectName("actionOnline_Download_Updates");
        actionOpen_Directory = new QAction(MainWindow);
        actionOpen_Directory->setObjectName("actionOpen_Directory");
        actionAutoChkUpdate = new QAction(MainWindow);
        actionAutoChkUpdate->setObjectName("actionAutoChkUpdate");
        actionAutoChkUpdate->setCheckable(true);
        actionAutoChkUpdate->setChecked(true);
        actionEdit_Presets = new QAction(MainWindow);
        actionEdit_Presets->setObjectName("actionEdit_Presets");
        actionOCAuxiliaryToolsDoc = new QAction(MainWindow);
        actionOCAuxiliaryToolsDoc->setObjectName("actionOCAuxiliaryToolsDoc");
        actionOCAuxiliaryToolsDoc->setVisible(false);
        actionBackup_EFI = new QAction(MainWindow);
        actionBackup_EFI->setObjectName("actionBackup_EFI");
        actionOpenCore_DEV = new QAction(MainWindow);
        actionOpenCore_DEV->setObjectName("actionOpenCore_DEV");
        actionOpenCore_DEV->setCheckable(true);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName("actionPreferences");
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName("actionDocumentation");
        actionMove_Up = new QAction(MainWindow);
        actionMove_Up->setObjectName("actionMove_Up");
        actionMove_Down = new QAction(MainWindow);
        actionMove_Down->setObjectName("actionMove_Down");
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName("actionAdd");
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName("actionDelete");
        actionDEBUG = new QAction(MainWindow);
        actionDEBUG->setObjectName("actionDEBUG");
        actionDEBUG->setCheckable(true);
        actionNew_Key_Field = new QAction(MainWindow);
        actionNew_Key_Field->setObjectName("actionNew_Key_Field");
        actionInitDatabaseLinux = new QAction(MainWindow);
        actionInitDatabaseLinux->setObjectName("actionInitDatabaseLinux");
        actionOpenCoreChineseDoc = new QAction(MainWindow);
        actionOpenCoreChineseDoc->setObjectName("actionOpenCoreChineseDoc");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_31 = new QGridLayout(centralwidget);
        gridLayout_31->setObjectName("gridLayout_31");
        frameTip = new QFrame(centralwidget);
        frameTip->setObjectName("frameTip");
        frameTip->setFrameShape(QFrame::Shape::NoFrame);
        frameTip->setFrameShadow(QFrame::Shadow::Plain);
        gridLayout_64 = new QGridLayout(frameTip);
        gridLayout_64->setObjectName("gridLayout_64");
        gridLayout_64->setContentsMargins(-1, 0, -1, 0);
        lblFileName = new QLabel(frameTip);
        lblFileName->setObjectName("lblFileName");

        gridLayout_64->addWidget(lblFileName, 0, 0, 1, 1);

        btnNo = new QPushButton(frameTip);
        btnNo->setObjectName("btnNo");
        btnNo->setMaximumSize(QSize(75, 16777215));

        gridLayout_64->addWidget(btnNo, 0, 1, 1, 1);

        btnYes = new QPushButton(frameTip);
        btnYes->setObjectName("btnYes");
        btnYes->setMaximumSize(QSize(75, 16777215));

        gridLayout_64->addWidget(btnYes, 0, 2, 1, 1);


        gridLayout_31->addWidget(frameTip, 1, 1, 1, 1);

        listMain = new QListWidget(centralwidget);
        listMain->setObjectName("listMain");
        listMain->setMaximumSize(QSize(16777215, 16777215));
        listMain->setFrameShape(QFrame::Shape::NoFrame);
        listMain->setMovement(QListView::Movement::Static);

        gridLayout_31->addWidget(listMain, 1, 0, 3, 1);

        frameToolBar = new QFrame(centralwidget);
        frameToolBar->setObjectName("frameToolBar");
        frameToolBar->setMinimumSize(QSize(0, 0));
        frameToolBar->setMaximumSize(QSize(16777215, 50));
        frameToolBar->setFrameShape(QFrame::Shape::NoFrame);
        frameToolBar->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_76 = new QGridLayout(frameToolBar);
        gridLayout_76->setObjectName("gridLayout_76");
        gridLayout_76->setContentsMargins(0, 0, 0, 0);
        lblCount = new QLabel(frameToolBar);
        lblCount->setObjectName("lblCount");
        lblCount->setMaximumSize(QSize(120, 16777215));

        gridLayout_76->addWidget(lblCount, 0, 0, 1, 1);

        mycboxFind = new QComboBox(frameToolBar);
        mycboxFind->setObjectName("mycboxFind");
        mycboxFind->setMinimumSize(QSize(260, 0));
        mycboxFind->setEditable(true);

        gridLayout_76->addWidget(mycboxFind, 0, 1, 1, 1);

        btnHide = new QToolButton(frameToolBar);
        btnHide->setObjectName("btnHide");

        gridLayout_76->addWidget(btnHide, 0, 2, 1, 1);


        gridLayout_31->addWidget(frameToolBar, 0, 0, 1, 2);

        listFind = new QListWidget(centralwidget);
        listFind->setObjectName("listFind");
        listFind->setMinimumSize(QSize(190, 0));
        listFind->setFrameShape(QFrame::Shape::NoFrame);
        listFind->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_31->addWidget(listFind, 0, 2, 5, 1);

        listSub = new QListWidget(centralwidget);
        listSub->setObjectName("listSub");
        listSub->setMaximumSize(QSize(16777215, 38));
        listSub->setFrameShape(QFrame::Shape::NoFrame);

        gridLayout_31->addWidget(listSub, 2, 1, 1, 1);

        gridLayout_StatusBar = new QGridLayout();
        gridLayout_StatusBar->setObjectName("gridLayout_StatusBar");
        txtEditHex = new QLineEdit(centralwidget);
        txtEditHex->setObjectName("txtEditHex");

        gridLayout_StatusBar->addWidget(txtEditHex, 0, 5, 1, 1);

        lblTemp1 = new QLabel(centralwidget);
        lblTemp1->setObjectName("lblTemp1");

        gridLayout_StatusBar->addWidget(lblTemp1, 0, 0, 1, 1);

        txtEditASCII = new QLineEdit(centralwidget);
        txtEditASCII->setObjectName("txtEditASCII");

        gridLayout_StatusBar->addWidget(txtEditASCII, 0, 7, 1, 1);

        lblStatusShow = new QLabel(centralwidget);
        lblStatusShow->setObjectName("lblStatusShow");

        gridLayout_StatusBar->addWidget(lblStatusShow, 0, 2, 1, 1);

        btnUpdateHex = new QToolButton(centralwidget);
        btnUpdateHex->setObjectName("btnUpdateHex");

        gridLayout_StatusBar->addWidget(btnUpdateHex, 0, 4, 1, 1);

        lblTemp2 = new QLabel(centralwidget);
        lblTemp2->setObjectName("lblTemp2");

        gridLayout_StatusBar->addWidget(lblTemp2, 0, 8, 1, 1);

        lblHexASCII = new QLabel(centralwidget);
        lblHexASCII->setObjectName("lblHexASCII");

        gridLayout_StatusBar->addWidget(lblHexASCII, 0, 6, 1, 1);

        horizontalSpacer_37 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_StatusBar->addItem(horizontalSpacer_37, 0, 3, 1, 1);

        lblOCVTip = new QLabel(centralwidget);
        lblOCVTip->setObjectName("lblOCVTip");

        gridLayout_StatusBar->addWidget(lblOCVTip, 0, 1, 1, 1);


        gridLayout_31->addLayout(gridLayout_StatusBar, 4, 0, 1, 2);

        tabTotal = new QTabWidget(centralwidget);
        tabTotal->setObjectName("tabTotal");
        tabTotal->setTabPosition(QTabWidget::TabPosition::North);
        tabTotal->setTabShape(QTabWidget::TabShape::Rounded);
        tabTotal->setIconSize(QSize(32, 32));
        tabTotal->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName("gridLayout");
        tabACPI = new QTabWidget(tab);
        tabACPI->setObjectName("tabACPI");
#if QT_CONFIG(tooltip)
        tabACPI->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        tabACPI->setTabShape(QTabWidget::TabShape::Rounded);
        tabACPI->setDocumentMode(true);
        tabACPI1 = new QWidget();
        tabACPI1->setObjectName("tabACPI1");
        horizontalLayout_106 = new QHBoxLayout(tabACPI1);
        horizontalLayout_106->setObjectName("horizontalLayout_106");
        table_acpi_add = new QTableWidget(tabACPI1);
        if (table_acpi_add->columnCount() < 3)
            table_acpi_add->setColumnCount(3);
        table_acpi_add->setObjectName("table_acpi_add");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(table_acpi_add->sizePolicy().hasHeightForWidth());
        table_acpi_add->setSizePolicy(sizePolicy);
#if QT_CONFIG(tooltip)
        table_acpi_add->setToolTip(QString::fromUtf8("ACPI (Advanced Configuration and Power Interface) is an open standard to discover and configure computer hardware.\n"
"\n"
"The ACPI specification defines standard tables (e.g. DSDT, SSDT, FACS, DMAR) and various methods (e.g. _DSM, _PRW) for implementation. Modern hardware needs few changes to maintain ACPI compatibility and some options for such changes are provided as part of OpenCore.\n"
"\n"
"***\n"
"\n"
"Path\n"
"\n"
"Description: File paths meant to be loaded as ACPI tables. Example values include DSDT.aml, SubDir/SSDT-8.aml,SSDT-USBX.aml, etc.\n"
"\n"
"The ACPI table load order follows the item order in the array. ACPI tables are loaded from the OC/ACPI directory.\n"
"\n"
"Note: All tables apart from tables with a DSDT table identifier (determined by parsing data, not by filename)insert new tables into the ACPI stack. DSDT tables perform a replacement of DSDT tables instead.\n"
"\n"
"\n"
"----\n"
"\n"
"ACPI(Advanced Configuration and Power Interface\357\274\214\351\253\230\347\272\247\351\205\215\347\275"
                        "\256\345\222\214\347\224\265\346\272\220\346\216\245\345\217\243)\346\230\257\344\270\200\344\270\252\346\216\242\347\264\242\345\222\214\351\205\215\347\275\256\350\256\241\347\256\227\346\234\272\347\241\254\344\273\266\347\232\204\345\274\200\346\224\276\346\240\207\345\207\206\343\200\202\n"
"\n"
"ACPI\350\247\204\350\214\203\345\256\232\344\271\211\344\272\206\346\240\207\345\207\206\350\241\250\357\274\210\345\246\202DSDT\343\200\201SSDT\343\200\201FACS\343\200\201DMAR\357\274\211\345\222\214\345\220\204\347\247\215\345\256\236\347\216\260\346\226\271\346\263\225\357\274\210\345\246\202_DSM\343\200\201_PRW\357\274\211\343\200\202\347\216\260\344\273\243\347\241\254\344\273\266\345\217\252\351\234\200\350\246\201\345\276\210\345\260\221\347\232\204\346\224\271\345\217\230\345\260\261\345\217\257\344\273\245\344\277\235\346\214\201ACPI\347\232\204\345\205\274\345\256\271\346\200\247\357\274\214\344\275\234\344\270\272OpenCore\347\232\204\344\270\200\351\203\250\345\210\206\357\274\214\346\217\220\344\276\233"
                        "\344\272\206\350\277\231\347\247\215\346\224\271\345\217\230\347\232\204\344\270\200\344\272\233\351\200\211\346\213\251\343\200\202\n"
"\n"
"***\n"
"\n"
"Path(\350\267\257\345\276\204)\n"
"\n"
"\350\257\264\346\230\216\357\274\232\344\275\234\344\270\272ACPI\350\241\250\345\212\240\350\275\275\347\232\204\346\226\207\344\273\266\350\267\257\345\276\204\343\200\202\347\244\272\344\276\213\345\200\274\345\214\205\346\213\254DSDT.aml\343\200\201SubDir/SDT-8.aml\343\200\201SSDT-USBX.aml\347\255\211\343\200\202\n"
"\n"
"ACPI\350\241\250\347\232\204\345\212\240\350\275\275\351\241\272\345\272\217\351\201\265\345\276\252\346\225\260\347\273\204\344\270\255\347\232\204\351\241\271\347\233\256\351\241\272\345\272\217\343\200\202ACPI\350\241\250\344\273\216OC/ACPI\347\233\256\345\275\225\344\270\255\345\212\240\350\275\275\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\351\231\244\344\272\206\345\205\267\346\234\211 DSDT \350\241\250\346\240\207\350\257\206\347\254\246\357\274\210\347\224\261\350\247\243\346"
                        "\236\220\346\225\260\346\215\256\347\241\256\345\256\232\357\274\214\350\200\214\344\270\215\346\230\257\347\224\261\346\226\207\344\273\266\345\220\215\347\241\256\345\256\232\357\274\211\347\232\204\350\241\250\344\271\213\345\244\226\357\274\214\346\211\200\346\234\211\350\241\250\351\203\275\344\274\232\345\260\206\346\226\260\350\241\250\346\217\222\345\205\245\345\210\260 ACPI \345\240\206\346\240\210\344\270\255\343\200\202DSDT\350\241\250\344\273\243\346\233\277DSDT\350\241\250\350\277\233\350\241\214\346\233\277\346\215\242\343\200\202\n"
"\n"
""));
#endif // QT_CONFIG(tooltip)
        table_acpi_add->setFrameShape(QFrame::Shape::StyledPanel);
        table_acpi_add->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        table_acpi_add->setRowCount(0);
        table_acpi_add->setColumnCount(3);

        horizontalLayout_106->addWidget(table_acpi_add);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        btnACPIAdd_Add = new QToolButton(tabACPI1);
        btnACPIAdd_Add->setObjectName("btnACPIAdd_Add");
        btnACPIAdd_Add->setMinimumSize(QSize(20, 0));
        btnACPIAdd_Add->setMaximumSize(QSize(20, 16777215));
        btnACPIAdd_Add->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnACPIAdd_Add);

        btnACPIAdd_Del = new QToolButton(tabACPI1);
        btnACPIAdd_Del->setObjectName("btnACPIAdd_Del");
        btnACPIAdd_Del->setMaximumSize(QSize(20, 16777215));
        btnACPIAdd_Del->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnACPIAdd_Del);

        btnUp = new QToolButton(tabACPI1);
        btnUp->setObjectName("btnUp");
        btnUp->setMaximumSize(QSize(20, 16777215));
        btnUp->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnUp);

        btnDown = new QToolButton(tabACPI1);
        btnDown->setObjectName("btnDown");
        btnDown->setMaximumSize(QSize(20, 16777215));
        btnDown->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnDown);

        btnOpenACPIDir = new QToolButton(tabACPI1);
        btnOpenACPIDir->setObjectName("btnOpenACPIDir");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnOpenACPIDir->sizePolicy().hasHeightForWidth());
        btnOpenACPIDir->setSizePolicy(sizePolicy1);
        btnOpenACPIDir->setMaximumSize(QSize(20, 16777215));
        btnOpenACPIDir->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnOpenACPIDir);


        horizontalLayout_106->addLayout(verticalLayout_2);

        tabACPI->addTab(tabACPI1, QString());
        tabACPI2 = new QWidget();
        tabACPI2->setObjectName("tabACPI2");
        gridLayout_4 = new QGridLayout(tabACPI2);
        gridLayout_4->setObjectName("gridLayout_4");
        table_acpi_del = new QTableWidget(tabACPI2);
        if (table_acpi_del->columnCount() < 6)
            table_acpi_del->setColumnCount(6);
        table_acpi_del->setObjectName("table_acpi_del");
#if QT_CONFIG(tooltip)
        table_acpi_del->setToolTip(QString::fromUtf8("1. All\n"
"Type: plist boolean\n"
"Failsafe: false (Only delete the first matched table)\n"
"Description: Set to true to delete all ACPI tables matching the condition.\n"
"\n"
"2. Comment\n"
"Type: plist string\n"
"Failsafe: Empty\n"
"Description: Arbitrary ASCII string used to provide human readable reference for the entry. Whether this\n"
"value is used is implementation defined.\n"
"\n"
"3. Enabled\n"
"Type: plist boolean\n"
"Failsafe: false\n"
"Description: Set to true to remove this ACPI table.\n"
"\n"
"4. OemTableId\n"
"Type: plist data, 8 bytes\n"
"Failsafe: All zero (Match any table OEM ID)\n"
"Description: Match table OEM ID equal to this value.\n"
"\n"
"5. TableLength\n"
"Type: plist integer\n"
"Failsafe: 0 (Match any table size)\n"
"Description: Match table size equal to this value.\n"
"\n"
"6. TableSignature\n"
"Type: plist data, 4 bytes\n"
"Failsafe: All zero (Match any table signature)\n"
"Description: Match table signature equal to this value.\n"
"Note: Do not use table signatures when the seque"
                        "nce must be replaced in multiple places. This is particularly\n"
"relevant when performing different types of renames.\n"
"\n"
"----\n"
"\n"
"1.All-\346\211\200\346\234\211\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\345\201\207(\344\273\205\345\210\240\351\231\244\347\254\254\344\270\200\344\270\252\345\214\271\351\205\215\347\232\204\350\241\250)\n"
"\346\217\217\350\277\260\357\274\232\350\256\276\347\275\256\344\270\272\347\234\237\345\260\206\345\210\240\351\231\244\346\211\200\346\234\211\347\254\246\345\220\210\346\235\241\344\273\266\347\232\204ACPI\350\241\250\343\200\202\n"
"\n"
"2.Comment-\346\263\250\350\247\243\n"
"\347\261\273\345\236\213\357\274\232plist\345\255\227\347\254\246\344\270\262\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\347\251\272\n"
"\346\217\217\350\277\260\357\274\232\346\263\250\350\247\243\357\274\214\347\224\250\346\235\245\350\257\264\346\230\216\350\257"
                        "\245\346\235\241\347\233\256\350\265\267\344\273\200\344\271\210\344\275\234\347\224\250\357\274\214\345\217\257\344\270\215\345\241\253\343\200\202\n"
"\n"
"3.Enabled-\344\275\277\350\203\275\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\345\201\207\n"
"\346\217\217\350\277\260\357\274\232\350\256\276\347\275\256\344\270\272\347\234\237\344\273\245\345\210\240\351\231\244\346\255\244ACPI\350\241\250\343\200\202\n"
"\n"
"4.OemTableId-Oem\350\241\250\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\260\346\215\256\357\274\2148\345\255\227\350\212\202\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\345\205\250\351\233\266(\345\214\271\351\205\215\344\273\273\344\275\225\350\241\250\345\216\237\345\247\213\350\256\276\345\244\207\345\210\266\351\200\240\345\225\206\346\240\207\350\257\206)\n"
"\346\217\217\350\277\260\357\274\232\345\214\271\351\205\215\350\241\250\345\216\237\345\247\213\350"
                        "\256\276\345\244\207\345\210\266\351\200\240\345\225\206\346\240\207\350\257\206\347\255\211\344\272\216\346\255\244\345\200\274\343\200\202\n"
"\n"
"5.TableLength-\350\241\250\351\225\277\345\272\246\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\2320(\345\214\271\351\205\215\344\273\273\344\275\225\350\241\250\345\244\247\345\260\217)\n"
"\346\217\217\350\277\260\357\274\232\345\214\271\351\205\215\347\255\211\344\272\216\350\257\245\345\200\274\347\232\204\350\241\250\345\244\247\345\260\217\343\200\202\n"
"\n"
"6.TableSignature-\350\241\250\347\255\276\345\220\215\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\260\346\215\256\357\274\2144\345\255\227\350\212\202\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\345\205\250\351\233\266(\345\214\271\351\205\215\344\273\273\344\275\225\350\241\250\347\255\276\345\220\215)\n"
"\346\217\217\350\277\260\357\274\232\345\214\271\351\205\215\347\255\211\344\272"
                        "\216\350\257\245\345\200\274\347\232\204\350\241\250\347\255\276\345\220\215\343\200\202\n"
"\346\263\250\346\204\217\357\274\232\345\275\223\345\272\217\345\210\227\345\277\205\351\241\273\345\234\250\345\244\232\344\270\252\345\234\260\346\226\271\350\242\253\346\233\277\346\215\242\346\227\266\357\274\214\344\270\215\350\246\201\344\275\277\347\224\250\350\241\250\347\255\276\345\220\215\343\200\202\350\277\231\345\260\244\345\205\266\346\230\257\345\234\250\346\211\247\350\241\214\344\270\215\345\220\214\347\261\273\345\236\213\347\232\204\351\207\215\345\221\275\345\220\215\346\227\266\346\234\211\345\205\263\343\200\202"));
#endif // QT_CONFIG(tooltip)
        table_acpi_del->setRowCount(0);
        table_acpi_del->setColumnCount(6);

        gridLayout_4->addWidget(table_acpi_del, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        btnACPIDel_Add = new QToolButton(tabACPI2);
        btnACPIDel_Add->setObjectName("btnACPIDel_Add");
        btnACPIDel_Add->setMaximumSize(QSize(20, 16777215));
        btnACPIDel_Add->setIconSize(QSize(20, 20));

        verticalLayout_5->addWidget(btnACPIDel_Add);

        btnACPIDel_Del = new QToolButton(tabACPI2);
        btnACPIDel_Del->setObjectName("btnACPIDel_Del");
        btnACPIDel_Del->setMaximumSize(QSize(20, 16777215));
        btnACPIDel_Del->setIconSize(QSize(20, 20));

        verticalLayout_5->addWidget(btnACPIDel_Del);


        gridLayout_4->addLayout(verticalLayout_5, 0, 1, 1, 1);

        tabACPI->addTab(tabACPI2, QString());
        tabACPI3 = new QWidget();
        tabACPI3->setObjectName("tabACPI3");
        gridLayout_5 = new QGridLayout(tabACPI3);
        gridLayout_5->setObjectName("gridLayout_5");
        table_acpi_patch = new QTableWidget(tabACPI3);
        if (table_acpi_patch->columnCount() < 14)
            table_acpi_patch->setColumnCount(14);
        table_acpi_patch->setObjectName("table_acpi_patch");
#if QT_CONFIG(tooltip)
        table_acpi_patch->setToolTip(QString::fromUtf8("1. Base\n"
"Type: plist string\n"
"Failsafe: Empty (Ignored)\n"
"Description: Selects ACPI path base for patch lookup (or immediate replacement) by obtaining the offset to the provided path.\n"
"Only fully-qualified absolute paths are supported (e.g. \\_SB.PCI0.LPCB.HPET). Currently supported object types are: Device, Field, Method.\n"
"Note: Use with care, not all OEM tables can be parsed. Use ACPIe utility to debug. ACPIe compiled with DEBUG=1 make command produces helpful ACPI lookup tracing.\n"
"\n"
"2. BaseSkip\n"
"Type: plist integer\n"
"Failsafe: 0 (Do not skip any occurrences)\n"
"Description: Number of found Base occurrences to skip before finds and replacements are applied.\n"
"\n"
"3. Comment\n"
"Type: plist string\n"
"Failsafe: Empty\n"
"Description: Arbitrary ASCII string used to provide human readable reference for the entry. Whether this value is used is implementation defined.\n"
"\n"
"4. Count\n"
"Type: plist integer\n"
"Failsafe: 0 (Apply patch to all occurrences found)\n"
"Description: Numbe"
                        "r of occurrences to patch.\n"
"\n"
"5. Enabled\n"
"Type: plist boolean\n"
"Failsafe: false\n"
"Description: Set to true to apply this ACPI patch.\n"
"\n"
"6. Find\n"
"Type: plist data\n"
"Failsafe: Empty\n"
"Description: Data to find. Must be equal to Replace in size if set.\n"
"Note: Can be empty, when Base is specified, immediate replacement after Base lookup happens in this case.\n"
"\n"
"7. Limit\n"
"Type: plist integer\n"
"Failsafe: 0 (Search entire ACPI table)\n"
"Description: Maximum number of bytes to search for.\n"
"\n"
"8. Mask\n"
"Type: plist data\n"
"Failsafe: Empty (Ignored)\n"
"Description: Data bitwise mask used during find comparison. Allows fuzzy search by ignoring not masked (set to zero) bits. Must be equal to Replace in size if set.\n"
"\n"
"9. OemTableId\n"
"Type: plist data, 8 bytes\n"
"Failsafe: All zero (Match any table OEM ID)\n"
"Description: Match table OEM ID equal to this value.\n"
"\n"
"10. Replace\n"
"Type: plist data\n"
"Failsafe: Empty\n"
"Description: Replacement data of one o"
                        "r more bytes.\n"
"\n"
"11. ReplaceMask\n"
"Type: plist data\n"
"Failsafe: Empty (Ignored)\n"
"Description: Data bitwise mask used during replacement. Allows fuzzy replacement by updating masked (set to non-zero) bits. Must be equal to Replace in size if set.\n"
"\n"
"12. Skip\n"
"Type: plist integer\n"
"Failsafe: 0 (Do not skip any occurrences)\n"
"Description: Number of found occurrences to skip before replacements are applied.\n"
"\n"
"13. TableLength\n"
"Type: plist integer\n"
"Failsafe: 0 (Match any table size)\n"
"Description: Match table size equal to this value.\n"
"\n"
"14. TableSignature\n"
"Type: plist data, 4 bytes\n"
"Failsafe: All zero (Match any table signature)\n"
"Description: Match table signature equal to this value.\n"
"\n"
"In most cases, ACPI patches are not useful and are harmful:\n"
"\342\200\242 Avoid renaming devices with ACPI patches. This may fail or perform improper renaming of unrelated devices (e.g. EC and EC0), be unnecessary, or even fail to rename devices in certain tables. For"
                        " ACPI consistency it is much safer to rename devices at the I/O Registry level, as done by WhateverGreen.\n"
"\n"
"\342\200\242 Avoid patching _OSI to support a higher feature set level whenever possible. While this enables a number of workarounds on APTIO firmware, it typically results in a need for additional patches. These are not usually needed on modern firmware and smaller patches work well on firmware that does. However, laptop vendors often rely on this method to determine the availability of functions such as modern I2C input support, thermal adjustment and custom feature additions.\n"
"\n"
"\342\200\242 Avoid patching embedded controller event _Qxx just to enable brightness keys. The conventional process to find these keys typically involves significant modifications to DSDT and SSDT files and in addition, the debug kext is not stable on newer systems. Please use the built-in brightness key discovery in BrightnessKeys instead.\n"
"\n"
"\342\200\242 Avoid making ad hoc changes such as renaming _PRW or"
                        " _DSM whenever possible.\n"
"\n"
"Some cases where patching is actually useful include:\n"
"\342\200\242 Refreshing HPET (or another device) method header to avoid compatibility checks by _OSI on legacy hardware.\n"
"\n"
"_STA method with if ((OSFL () == Zero)) { If (HPTE) ... Return (Zero) content may be forced to always return 0xF by replacing A0 10 93 4F 53 46 4C 00 with A4 0A 0F A3 A3 A3 A3 A3. \n"
"\n"
"\342\200\242 To provide a custom method implementation within an SSDT, to inject shutdown fixes on certain computers for instance, the original method can be replaced with a dummy name by patching _PTS with ZPTS and adding a callback to the original method.\n"
"\n"
"The Tianocore AcpiAml.h source file may help with better understanding ACPI opcodes.\n"
"\n"
"Note: Patches of different Find and Replace lengths are unsupported as they may corrupt ACPI tables and make the system unstable due to area relocation. If such changes are needed, the utilisation of \342\200\234proxy\342\200\235 patching or the paddin"
                        "g of NOP to the remaining area could be considered.\n"
"\n"
"----\n"
"\n"
"1. Base\n"
"\347\261\273\345\236\213\357\274\232plist\345\255\227\347\254\246\344\270\262\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\347\251\272(\345\277\275\347\225\245)\n"
"\346\217\217\350\277\260\357\274\232\351\200\232\350\277\207\350\216\267\345\217\226\346\211\200\346\217\220\344\276\233\347\232\204\350\267\257\345\276\204\347\232\204\345\201\217\347\247\273\351\207\217\357\274\214\351\200\211\346\213\251ACPI\350\267\257\345\276\204\345\237\272\346\235\245\350\277\233\350\241\214\350\241\245\344\270\201\346\237\245\346\211\276(\346\210\226\347\253\213\345\215\263\346\233\277\346\215\242)\343\200\202\n"
"\345\217\252\346\224\257\346\214\201\345\256\214\345\205\250\351\231\220\345\256\232\347\232\204\347\273\235\345\257\271\350\267\257\345\276\204(\344\276\213\345\246\202\357\274\232\\_SB.PCI0.LPCB.HPET)\343\200\202\347\233\256\345\211\215\346\224\257\346\214\201\347\232\204\345\257\271\350\261\241\347\261\273"
                        "\345\236\213\346\234\211 \350\256\276\345\244\207\343\200\201\345\255\227\346\256\265\343\200\201\346\226\271\346\263\225\343\200\202\n"
"\346\263\250\346\204\217\357\274\232\350\257\267\350\260\250\346\205\216\344\275\277\347\224\250\357\274\214\345\271\266\351\235\236\346\211\200\346\234\211\347\232\204OEM\350\241\250\351\203\275\350\203\275\350\242\253\350\247\243\346\236\220\343\200\202\344\275\277\347\224\250ACPIe\345\267\245\345\205\267\350\277\233\350\241\214\350\260\203\350\257\225\343\200\202ACPIe\347\274\226\350\257\221\346\227\266\344\275\277\347\224\250DEBUG=1 make\345\221\275\344\273\244\357\274\214\345\217\257\344\273\245\344\272\247\347\224\237\346\234\211\347\224\250\347\232\204ACPI\346\237\245\346\211\276\350\267\237\350\270\252\343\200\202\n"
"\n"
"2. BaseSkip\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\2320 (\344\270\215\350\267\263\350\277\207\344\273\273\344\275\225\344\272\213\344\273\266)\n"
"\350\257\264"
                        "\346\230\216\357\274\232\345\234\250\350\277\233\350\241\214\346\237\245\346\211\276\345\222\214\346\233\277\346\215\242\344\271\213\345\211\215\357\274\214\350\246\201\350\267\263\350\277\207\347\232\204\345\237\272\346\225\260\343\200\202\n"
"\n"
"3. Comment\n"
"\347\261\273\345\236\213\357\274\232plist\345\255\227\347\254\246\344\270\262\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\347\251\272\347\232\204\n"
"\350\257\264\346\230\216\357\274\232\344\273\273\346\204\217\347\232\204ASCII\345\255\227\347\254\246\344\270\262\357\274\214\347\224\250\344\272\216\344\270\272\346\235\241\347\233\256\346\217\220\344\276\233\345\217\257\344\276\233\344\272\272\347\261\273\351\230\205\350\257\273\347\232\204\345\217\202\350\200\203\343\200\202\n"
"\n"
"4. Count\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\2320 (\345\257\271\345\217\221\347\216\260\347\232\204\346\211\200\346\234\211\346\203\205\345\206\265\346\211"
                        "\223\344\270\212\350\241\245\344\270\201)\n"
"\346\217\217\350\277\260\357\274\232\350\241\245\344\270\201\347\232\204\345\207\272\347\216\260\346\254\241\346\225\260\343\200\202\n"
"\n"
"5. Enabled\n"
"\347\261\273\345\236\213\357\274\232plist boolean\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\345\201\207\n"
"\346\217\217\350\277\260\357\274\232\350\256\276\347\275\256\344\270\272true\357\274\214\344\273\245\345\272\224\347\224\250\346\255\244ACPI\350\241\245\344\270\201\343\200\202\n"
"\n"
"6. Find\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\260\346\215\256\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\347\251\272\347\232\204\n"
"\350\257\264\346\230\216\357\274\232\350\246\201\346\237\245\346\211\276\347\232\204\346\225\260\346\215\256\343\200\202\345\246\202\346\236\234\350\256\276\347\275\256\347\232\204\350\257\235\357\274\214\345\244\247\345\260\217\345\277\205\351\241\273\344\270\216Replace\347\233\270\347\255\211\343\200\202\n"
"\346\263\250\346\204\217"
                        "\357\274\232\345\217\257\344\273\245\344\270\272\347\251\272\357\274\214\345\275\223\346\214\207\345\256\232Base\346\227\266\357\274\214\345\234\250\350\277\231\347\247\215\346\203\205\345\206\265\344\270\213\357\274\214Base\346\237\245\346\211\276\345\220\216\344\274\232\345\217\221\347\224\237\347\253\213\345\215\263\346\233\277\346\215\242\343\200\202\n"
"\n"
"7. Limit\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\2320 (\346\220\234\347\264\242\346\225\264\344\270\252ACPI\350\241\250)\n"
"\350\257\264\346\230\216\357\274\232\346\220\234\347\264\242\347\232\204\346\234\200\345\244\247\345\255\227\350\212\202\346\225\260\343\200\202\n"
"\n"
"8. Mask\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\260\346\215\256\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\347\251\272(\345\277\275\347\225\245)\n"
"\350\257\264\346\230\216\357\274\232\345\234\250\346\237\245\346\211\276\346\257\224\350\276\203\346\227"
                        "\266\344\275\277\347\224\250\347\232\204\346\225\260\346\215\256\344\275\215\351\235\242\346\216\251\347\240\201\343\200\202\345\205\201\350\256\270\351\200\232\350\277\207\345\277\275\347\225\245\346\234\252\345\261\217\350\224\275\357\274\210\350\256\276\347\275\256\344\270\272\351\233\266\357\274\211\347\232\204\344\275\215\346\235\245\350\277\233\350\241\214\346\250\241\347\263\212\346\220\234\347\264\242\343\200\202\345\246\202\346\236\234\350\256\276\347\275\256\347\232\204\350\257\235\357\274\214\345\277\205\351\241\273\344\270\216Replace\347\232\204\345\244\247\345\260\217\347\233\270\347\255\211\343\200\202\n"
"\n"
"9. OemTableId\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\260\346\215\256\357\274\2148\345\255\227\350\212\202\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\345\205\250\351\203\250\344\270\272\351\233\266(\345\214\271\351\205\215\344\273\273\344\275\225\350\241\250OEM ID)\n"
"\346\217\217\350\277\260\343\200\202\345\214\271\351\205\215\350\241\250OEM ID\347\255"
                        "\211\344\272\216\350\257\245\345\200\274\343\200\202\n"
"\n"
"10. Replace\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\260\346\215\256\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\347\251\272\347\232\204\n"
"\350\257\264\346\230\216\357\274\232\344\270\200\344\270\252\346\210\226\345\244\232\344\270\252\345\255\227\350\212\202\347\232\204\346\233\277\346\215\242\346\225\260\346\215\256\343\200\202\n"
"\n"
"11. ReplaceMask\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\260\346\215\256\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\347\251\272(\345\277\275\347\225\245)\n"
"\350\257\264\346\230\216\357\274\232\346\233\277\346\215\242\346\227\266\344\275\277\347\224\250\347\232\204\346\225\260\346\215\256\344\275\215\351\235\242\346\216\251\347\240\201\343\200\202\345\205\201\350\256\270\351\200\232\350\277\207\346\233\264\346\226\260\346\216\251\347\240\201\357\274\210\350\256\276\347\275\256\344\270\272\351\235\236\351\233\266\357\274\211\344\275\215\350\277\233"
                        "\350\241\214\346\250\241\347\263\212\346\233\277\346\215\242\343\200\202\345\246\202\346\236\234\350\256\276\347\275\256\357\274\214\345\277\205\351\241\273\344\270\216\346\233\277\346\215\242\345\244\247\345\260\217\347\233\270\347\255\211\343\200\202\n"
"\n"
"12. Skip\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\2320 (\344\270\215\350\267\263\350\277\207\344\273\273\344\275\225\344\272\213\344\273\266)\n"
"\346\217\217\350\277\260\357\274\232\346\233\277\346\215\242\345\211\215\350\246\201\350\267\263\350\277\207\347\232\204\345\207\272\347\216\260\346\254\241\346\225\260\343\200\202\n"
"\n"
"13. TableLength\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\2320 (\345\214\271\351\205\215\344\273\273\344\275\225\350\241\250\346\240\274\345\260\272\345\257\270)\n"
"\350\257\264\346\230\216\343\200\202\345\214\271\351\205\215\344\270\216\346\255\244"
                        "\345\200\274\347\233\270\345\220\214\347\232\204\350\241\250\346\240\274\345\244\247\345\260\217\343\200\202\n"
"\n"
"14. TableSignature\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\260\346\215\256\357\274\2144\345\255\227\350\212\202\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\345\205\250\351\203\250\344\270\272\351\233\266(\344\270\216\344\273\273\344\275\225\350\241\250\346\240\274\347\255\276\345\220\215\345\214\271\351\205\215)\n"
"\350\257\264\346\230\216\357\274\232 \345\214\271\351\205\215\347\255\211\344\272\216\350\257\245\345\200\274\347\232\204\350\241\250\347\255\276\345\220\215\343\200\202\n"
"\n"
"\345\234\250\345\244\247\345\244\232\346\225\260\346\203\205\345\206\265\344\270\213\357\274\214ACPI\350\241\245\344\270\201\346\230\257\346\262\241\346\234\211\347\224\250\347\232\204\357\274\214\346\230\257\346\234\211\345\256\263\347\232\204\343\200\202\n"
"- \351\201\277\345\205\215\347\224\250ACPI\350\241\245\344\270\201\351\207\215\345\221\275\345\220\215\350\256\276"
                        "\345\244\207\343\200\202\350\277\231\345\217\257\350\203\275\344\274\232\345\244\261\350\264\245\346\210\226\345\257\271\344\270\215\347\233\270\345\205\263\347\232\204\350\256\276\345\244\207\357\274\210\345\246\202EC\345\222\214EC0\357\274\211\350\277\233\350\241\214\344\270\215\346\255\243\347\241\256\347\232\204\351\207\215\345\221\275\345\220\215\357\274\214\346\230\257\344\270\215\345\277\205\350\246\201\347\232\204\357\274\214\347\224\232\350\207\263\346\227\240\346\263\225\351\207\215\345\221\275\345\220\215\346\237\220\344\272\233\350\241\250\344\270\255\347\232\204\350\256\276\345\244\207\343\200\202\344\270\272\344\272\206ACPI\347\232\204\344\270\200\350\207\264\346\200\247\357\274\214\345\234\250I/O\346\263\250\345\206\214\350\241\250\347\272\247\345\210\253\351\207\215\345\221\275\345\220\215\350\256\276\345\244\207\350\246\201\345\256\211\345\205\250\345\276\227\345\244\232\357\274\214\345\260\261\345\203\217WhateverGreen\346\211\200\345\201\232\347\232\204\351\202\243\346\240\267\343\200\202\n"
""
                        "\n"
"- \345\260\275\345\217\257\350\203\275\351\201\277\345\205\215\347\273\231_OSI\346\211\223\350\241\245\344\270\201\344\273\245\346\224\257\346\214\201\346\233\264\351\253\230\347\232\204\345\212\237\350\203\275\351\233\206\347\272\247\345\210\253\343\200\202\350\231\275\347\204\266\350\277\231\345\217\257\344\273\245\345\234\250APTIO\345\233\272\344\273\266\344\270\212\345\256\236\347\216\260\344\270\200\344\272\233\345\217\230\351\200\232\346\226\271\346\263\225\357\274\214\344\275\206\351\200\232\345\270\270\344\274\232\345\257\274\350\207\264\351\234\200\350\246\201\351\242\235\345\244\226\347\232\204\350\241\245\344\270\201\343\200\202\345\234\250\347\216\260\344\273\243\345\233\272\344\273\266\344\270\212\351\200\232\345\270\270\344\270\215\351\234\200\350\246\201\350\277\231\344\272\233\350\241\245\344\270\201\357\274\214\350\276\203\345\260\217\347\232\204\350\241\245\344\270\201\345\234\250\346\234\211\347\232\204\345\233\272\344\273\266\344\270\212\344\271\237\350\203\275\345\276\210\345\245\275\345"
                        "\234\260\345\267\245\344\275\234\343\200\202\347\204\266\350\200\214\357\274\214\347\254\224\350\256\260\346\234\254\347\224\265\350\204\221\344\276\233\345\272\224\345\225\206\347\273\217\345\270\270\344\276\235\351\235\240\350\277\231\347\247\215\346\226\271\346\263\225\346\235\245\347\241\256\345\256\232\345\212\237\350\203\275\347\232\204\345\217\257\347\224\250\346\200\247\357\274\214\345\246\202\347\216\260\344\273\243I2C\350\276\223\345\205\245\346\224\257\346\214\201\357\274\214\347\203\255\350\260\203\346\225\264\345\222\214\350\207\252\345\256\232\344\271\211\345\212\237\350\203\275\346\267\273\345\212\240\343\200\202\n"
"\n"
"- \351\201\277\345\205\215\344\273\205\344\273\205\344\270\272\344\272\206\345\220\257\347\224\250\344\272\256\345\272\246\351\224\256\350\200\214\347\273\231\345\265\214\345\205\245\345\274\217\346\216\247\345\210\266\345\231\250\344\272\213\344\273\266_Qxx\346\211\223\350\241\245\344\270\201\343\200\202\345\217\221\347\216\260\350\277\231\344\272\233\351\224\256\347\232\204\344"
                        "\274\240\347\273\237\350\277\207\347\250\213\351\200\232\345\270\270\346\266\211\345\217\212\345\257\271DSDT\345\222\214SSDT\346\226\207\344\273\266\347\232\204\351\207\215\345\244\247\344\277\256\346\224\271\357\274\214\346\255\244\345\244\226\357\274\214\350\260\203\350\257\225kext\345\234\250\346\226\260\347\263\273\347\273\237\344\270\212\345\271\266\344\270\215\347\250\263\345\256\232\343\200\202\350\257\267\344\275\277\347\224\250BrightnessKeys\344\270\255\345\206\205\347\275\256\347\232\204\344\272\256\345\272\246\351\224\256\345\217\221\347\216\260\344\273\243\346\233\277\343\200\202\n"
"\n"
"- \345\260\275\345\217\257\350\203\275\351\201\277\345\205\215\350\277\233\350\241\214\344\270\264\346\227\266\344\277\256\346\224\271\357\274\214\345\246\202\351\207\215\345\221\275\345\220\215_PRW\346\210\226_DSM\343\200\202\n"
"\n"
"\346\234\211\344\272\233\346\203\205\345\206\265\344\270\213\357\274\214\346\211\223\350\241\245\344\270\201\345\256\236\351\231\205\344\270\212\346\230\257\346\234\211\347\224\250\347"
                        "\232\204\357\274\214\345\214\205\346\213\254\343\200\202\n"
"- \345\210\267\346\226\260HPET(\346\210\226\345\205\266\344\273\226\350\256\276\345\244\207)\346\226\271\346\263\225\345\244\264\357\274\214\344\273\245\351\201\277\345\205\215_OSI\345\257\271\344\274\240\347\273\237\347\241\254\344\273\266\350\277\233\350\241\214\345\205\274\345\256\271\346\200\247\346\243\200\346\237\245\343\200\202\n"
"\n"
"_STA\346\226\271\346\263\225\344\270\216if((OSFL()==Zero)){\345\246\202\346\236\234(HPTE)......\343\200\202\350\277\224\345\233\236(Zero)\345\206\205\345\256\271\357\274\214\345\217\257\344\273\245\351\200\232\350\277\207\345\260\206A0 10 93 4F 53 46 4C 00\346\233\277\346\215\242\344\270\272A4 0A 0F A3 A3 A3 A3\345\274\272\345\210\266\346\200\273\346\230\257\350\277\224\345\233\2360xF\343\200\202\n"
"\n"
"- \344\270\272\344\272\206\345\234\250 SSDT \344\270\255\346\217\220\344\276\233\350\207\252\345\256\232\344\271\211\347\232\204\346\226\271\346\263\225\345\256\236\347\216\260\357\274\214\344\276\213\345\246\202"
                        "\345\234\250\346\237\220\344\272\233\350\256\241\347\256\227\346\234\272\344\270\212\346\263\250\345\205\245\345\205\263\346\234\272\344\277\256\345\244\215\357\274\214\345\217\257\344\273\245\351\200\232\350\277\207\345\260\206 _PTS \346\233\277\346\215\242\344\270\272 ZPTS\357\274\214\345\271\266\344\270\272\345\216\237\346\226\271\346\263\225\346\267\273\345\212\240\345\233\236\350\260\203\357\274\214\345\260\206\345\216\237\346\226\271\346\263\225\346\233\277\346\215\242\344\270\272\350\231\232\345\220\215\343\200\202\n"
"\n"
"Tianocore AcpiAml.h\346\272\220\346\226\207\344\273\266\345\217\257\350\203\275\346\234\211\345\212\251\344\272\216\346\233\264\345\245\275\345\234\260\347\220\206\350\247\243ACPI\346\223\215\344\275\234\347\240\201\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\344\270\215\346\224\257\346\214\201\344\270\215\345\220\214\346\237\245\346\211\276\345\222\214\346\233\277\346\215\242\351\225\277\345\272\246\347\232\204\350\241\245\344\270\201\357\274\214\345\233\240\344\270\272"
                        "\345\256\203\344\273\254\345\217\257\350\203\275\344\274\232\347\240\264\345\235\217ACPI\350\241\250\357\274\214\345\271\266\344\275\277\347\263\273\347\273\237\345\233\240\345\214\272\345\237\237\351\207\215\346\226\260\345\256\232\344\275\215\350\200\214\344\270\215\347\250\263\345\256\232\343\200\202\345\246\202\346\236\234\351\234\200\350\246\201\350\277\231\346\240\267\347\232\204\346\224\271\345\217\230\357\274\214\345\217\257\344\273\245\350\200\203\350\231\221\345\210\251\347\224\250 \"\344\273\243\347\220\206 \"\350\241\245\344\270\201\346\210\226\345\260\206NOP\345\241\253\345\205\205\345\210\260\345\211\251\344\275\231\345\214\272\345\237\237\343\200\202"));
#endif // QT_CONFIG(tooltip)
        table_acpi_patch->setRowCount(0);
        table_acpi_patch->setColumnCount(14);

        gridLayout_5->addWidget(table_acpi_patch, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        btnACPIPatch_Add = new QToolButton(tabACPI3);
        btnACPIPatch_Add->setObjectName("btnACPIPatch_Add");
        btnACPIPatch_Add->setMaximumSize(QSize(20, 16777215));
        btnACPIPatch_Add->setIconSize(QSize(20, 20));

        verticalLayout_4->addWidget(btnACPIPatch_Add);

        btnACPIPatch_Del = new QToolButton(tabACPI3);
        btnACPIPatch_Del->setObjectName("btnACPIPatch_Del");
        btnACPIPatch_Del->setMaximumSize(QSize(20, 16777215));
        btnACPIPatch_Del->setIconSize(QSize(20, 20));

        verticalLayout_4->addWidget(btnACPIPatch_Del);

        btnACPIPatch = new QToolButton(tabACPI3);
        btnACPIPatch->setObjectName("btnACPIPatch");
        btnACPIPatch->setMaximumSize(QSize(20, 16777215));

        verticalLayout_4->addWidget(btnACPIPatch);


        gridLayout_5->addLayout(verticalLayout_4, 0, 1, 1, 1);

        tabACPI->addTab(tabACPI3, QString());
        tabACPI4 = new QWidget();
        tabACPI4->setObjectName("tabACPI4");
        gridLayout_28 = new QGridLayout(tabACPI4);
        gridLayout_28->setObjectName("gridLayout_28");
        frame_2 = new QFrame(tabACPI4);
        frame_2->setObjectName("frame_2");
        frame_2->setMaximumSize(QSize(16777215, 45));
        frame_2->setFrameShape(QFrame::Shape::NoFrame);
        frame_2->setFrameShadow(QFrame::Shadow::Plain);
        gridLayout_43 = new QGridLayout(frame_2);
        gridLayout_43->setObjectName("gridLayout_43");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        label_122 = new QLabel(frame_2);
        label_122->setObjectName("label_122");

        horizontalLayout_2->addWidget(label_122);

        comboBoxACPI = new QComboBox(frame_2);
        comboBoxACPI->setObjectName("comboBoxACPI");
        comboBoxACPI->setMinimumSize(QSize(280, 0));
        comboBoxACPI->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        comboBoxACPI->setEditable(false);

        horizontalLayout_2->addWidget(comboBoxACPI);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_43->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_28->addWidget(frame_2, 0, 0, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(381, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_28->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        frame_chk_10 = new QFrame(tabACPI4);
        frame_chk_10->setObjectName("frame_chk_10");
        frame_chk_10->setFrameShape(QFrame::Shape::NoFrame);
        frame_chk_10->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_36 = new QVBoxLayout(frame_chk_10);
        verticalLayout_36->setObjectName("verticalLayout_36");
        chkFadtEnableReset = new QCheckBox(frame_chk_10);
        chkFadtEnableReset->setObjectName("chkFadtEnableReset");
#if QT_CONFIG(tooltip)
        chkFadtEnableReset->setToolTip(QString::fromUtf8("Type: plist boolean\n"
"\n"
"Description: Provide reset register and flag in FADT table to enable reboot and shutdown.\n"
"\n"
"Mainly required on legacy hardware and a few newer laptops. Can also fix power-button shortcuts. Not recommended unless required.\n"
"\n"
"----\n"
"\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\234\250FADT\350\241\250\344\270\255\346\217\220\344\276\233\345\244\215\344\275\215\345\257\204\345\255\230\345\231\250\345\222\214\346\240\207\345\277\227\357\274\214\344\273\245\345\256\236\347\216\260\351\207\215\345\220\257\345\222\214\345\205\263\346\234\272\343\200\202\n"
"\n"
"\344\270\273\350\246\201\346\230\257\345\234\250\344\274\240\347\273\237\347\241\254\344\273\266\345\222\214\344\270\200\344\272\233\350\276\203\346\226\260\347\232\204\347\254\224\350\256\260\346\234\254\344\270\212\351\234\200\350\246\201\343\200\202\344\271\237\345\217\257\344\273\245\344\277\256\345\244\215\347\224\265\346\272"
                        "\220\346\214\211\351\222\256\347\232\204\345\277\253\346\215\267\346\226\271\345\274\217\343\200\202\351\231\244\351\235\236\351\234\200\350\246\201\357\274\214\345\220\246\345\210\231\344\270\215\345\273\272\350\256\256\344\275\277\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_36->addWidget(chkFadtEnableReset);

        chkNormalizeHeaders = new QCheckBox(frame_chk_10);
        chkNormalizeHeaders->setObjectName("chkNormalizeHeaders");

        verticalLayout_36->addWidget(chkNormalizeHeaders);

        chkResetLogoStatus = new QCheckBox(frame_chk_10);
        chkResetLogoStatus->setObjectName("chkResetLogoStatus");
#if QT_CONFIG(tooltip)
        chkResetLogoStatus->setToolTip(QString::fromUtf8("Description: Reset BGRT table Displayed status field to false.\n"
"\n"
"This works around firmware that provide a BGRT table but fail to handle screen updates afterwards.\n"
"\n"
"----\n"
"\n"
"\350\257\264\346\230\216\357\274\232\345\260\206BGRT\350\241\250\346\230\276\347\244\272\347\212\266\346\200\201\345\255\227\346\256\265\351\207\215\347\275\256\344\270\272false\343\200\202\n"
"\n"
"\350\277\231\345\217\257\344\273\245\350\247\243\345\206\263\346\217\220\344\276\233BGRT\350\241\250\347\232\204\345\233\272\344\273\266\357\274\214\344\275\206\344\271\213\345\220\216\346\227\240\346\263\225\345\244\204\347\220\206\345\261\217\345\271\225\346\233\264\346\226\260\347\232\204\351\227\256\351\242\230\343\200\202"));
#endif // QT_CONFIG(tooltip)
        chkResetLogoStatus->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_36->addWidget(chkResetLogoStatus);

        chkResetHwSig = new QCheckBox(frame_chk_10);
        chkResetHwSig->setObjectName("chkResetHwSig");
#if QT_CONFIG(tooltip)
        chkResetHwSig->setToolTip(QString::fromUtf8("Description: Reset FACS table HardwareSignature value to 0.\n"
"\n"
"This works around firmware that fail to maintain hardware signature across the reboots and cause issues with waking from hibernation.\n"
"\n"
"----\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\260\206FACS\350\241\250HardwareSignature\345\200\274\351\207\215\347\275\256\344\270\2720\343\200\202\n"
"\n"
"\350\277\231\345\217\257\344\273\245\350\247\243\345\206\263\345\233\272\344\273\266\345\234\250\351\207\215\345\220\257\350\277\207\347\250\213\344\270\255\346\227\240\346\263\225\344\277\235\346\214\201\347\241\254\344\273\266\347\255\276\345\220\215\350\200\214\345\257\274\350\207\264\344\274\221\347\234\240\345\224\244\351\206\222\347\232\204\351\227\256\351\242\230\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_36->addWidget(chkResetHwSig);

        chkRebaseRegions = new QCheckBox(frame_chk_10);
        chkRebaseRegions->setObjectName("chkRebaseRegions");
#if QT_CONFIG(tooltip)
        chkRebaseRegions->setToolTip(QString::fromUtf8("Description: Attempt to heuristically relocate ACPI memory regions. Not recommended.\n"
"\n"
"ACPI tables are often generated dynamically by the underlying firmware implementation. Among the positionindependent code, ACPI tables may contain the physical addresses of MMIO areas used for device configuration,typically grouped by region (e.g. OperationRegion). Changing firmware settings or hardware configuration,upgrading or patching the firmware inevitably leads to changes in dynamically generated ACPI code, which sometimes results in the shift of the addresses in the aforementioned OperationRegion constructions.\n"
"\n"
"For this reason, the application of modifications to ACPI tables is extremely risky. The best approach is to make as few changes as possible to ACPI tables and to avoid replacing any tables, particularly DSDT tables. When this cannot be avoided, ensure that any custom DSDT tables are based on the most recent DSDT tables or attempt to remove reads and writes for the affected areas.\n"
"\n"
"When"
                        " nothing else helps, this option could be tried to avoid stalls at PCI Configuration Begin phase of macOS booting by attempting to fix the ACPI addresses. It is not a magic bullet however, and only works with the most typical cases. Do not use unless absolutely required as it can have the opposite effect on certain platforms and result in boot failures.\n"
"\n"
"----\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\260\235\350\257\225\345\220\257\345\217\221\345\274\217\345\234\260\351\207\215\346\226\260\345\256\232\344\275\215ACPI\345\206\205\345\255\230\345\214\272\345\237\237\343\200\202\344\270\215\346\216\250\350\215\220\344\275\277\347\224\250\343\200\202\n"
"\n"
"ACPI\350\241\250\351\200\232\345\270\270\347\224\261\345\272\225\345\261\202\345\233\272\344\273\266\345\256\236\347\216\260\345\212\250\346\200\201\347\224\237\346\210\220\343\200\202\345\234\250\344\270\216\344\275\215\347\275\256\346\227\240\345\205\263\347\232\204\344\273\243\347\240\201\344\270\255\357\274\214ACPI\350\241\250\345\217\257"
                        "\350\203\275\345\214\205\345\220\253\347\224\250\344\272\216\350\256\276\345\244\207\351\205\215\347\275\256\347\232\204MMIO\345\214\272\345\237\237\347\232\204\347\211\251\347\220\206\345\234\260\345\235\200\357\274\214\351\200\232\345\270\270\346\230\257\346\214\211\345\214\272\345\237\237\357\274\210\345\246\202OperationRegion\357\274\211\345\210\206\347\273\204\347\232\204\343\200\202\346\224\271\345\217\230\345\233\272\344\273\266\350\256\276\347\275\256\346\210\226\347\241\254\344\273\266\351\205\215\347\275\256\343\200\201\345\215\207\347\272\247\346\210\226\346\211\223\350\241\245\344\270\201\344\270\215\345\217\257\351\201\277\345\205\215\345\234\260\344\274\232\345\257\274\350\207\264\345\212\250\346\200\201\347\224\237\346\210\220\347\232\204ACPI\344\273\243\347\240\201\345\217\221\347\224\237\345\217\230\345\214\226\357\274\214\350\277\231\346\234\211\346\227\266\344\274\232\345\257\274\350\207\264\344\270\212\350\277\260OperationRegion\347\273\223\346\236\204\344\270\255\347\232\204\345\234\260\345"
                        "\235\200\345\217\221\347\224\237\345\217\230\345\214\226\343\200\202\n"
"\n"
"\347\224\261\344\272\216\350\277\231\344\270\252\345\216\237\345\233\240\357\274\214\345\272\224\347\224\250\344\277\256\346\224\271ACPI\350\241\250\346\230\257\351\235\236\345\270\270\345\215\261\351\231\251\347\232\204\343\200\202\346\234\200\345\245\275\347\232\204\346\226\271\346\263\225\346\230\257\345\260\275\345\217\257\350\203\275\345\260\221\345\234\260\345\257\271ACPI\350\241\250\350\277\233\350\241\214\344\277\256\346\224\271\357\274\214\351\201\277\345\205\215\346\233\277\346\215\242\344\273\273\344\275\225\350\241\250\357\274\214\347\211\271\345\210\253\346\230\257DSDT\350\241\250\343\200\202\345\275\223\346\227\240\346\263\225\351\201\277\345\205\215\346\227\266\357\274\214\347\241\256\344\277\235\344\273\273\344\275\225\350\207\252\345\256\232\344\271\211\347\232\204DSDT\350\241\250\351\203\275\346\230\257\345\237\272\344\272\216\346\234\200\346\226\260\347\232\204DSDT\350\241\250\357\274\214\346\210\226\350\200\205\345"
                        "\260\235\350\257\225\345\210\240\351\231\244\345\217\227\345\275\261\345\223\215\345\214\272\345\237\237\347\232\204\350\257\273\345\206\231\343\200\202\n"
"\n"
"\345\275\223\346\262\241\346\234\211\345\205\266\344\273\226\345\270\256\345\212\251\346\227\266\357\274\214\345\217\257\344\273\245\345\260\235\350\257\225\350\277\231\344\270\252\351\200\211\351\241\271\357\274\214\351\200\232\350\277\207\345\260\235\350\257\225\344\277\256\345\244\215ACPI\345\234\260\345\235\200\346\235\245\351\201\277\345\205\215\345\234\250macOS\345\220\257\345\212\250\347\232\204PCI\351\205\215\347\275\256\345\274\200\345\247\213\351\230\266\346\256\265\347\232\204\345\201\234\351\241\277\343\200\202\347\204\266\350\200\214\357\274\214\350\277\231\345\271\266\344\270\215\346\230\257\347\201\265\344\270\271\345\246\231\350\215\257\357\274\214\345\217\252\345\257\271\346\234\200\345\205\270\345\236\213\347\232\204\346\203\205\345\206\265\346\234\211\346\225\210\343\200\202\351\231\244\351\235\236\347\273\235\345\257\271\351\234\200"
                        "\350\246\201\357\274\214\345\220\246\345\210\231\344\270\215\350\246\201\344\275\277\347\224\250\357\274\214\345\233\240\344\270\272\345\256\203\345\234\250\346\237\220\344\272\233\345\271\263\345\217\260\344\270\212\345\217\257\350\203\275\344\274\232\344\272\247\347\224\237\347\233\270\345\217\215\347\232\204\346\225\210\346\236\234\357\274\214\345\257\274\350\207\264\345\220\257\345\212\250\345\244\261\350\264\245\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_36->addWidget(chkRebaseRegions);

        chkSyncTableIds = new QCheckBox(frame_chk_10);
        chkSyncTableIds->setObjectName("chkSyncTableIds");

        verticalLayout_36->addWidget(chkSyncTableIds);


        gridLayout_28->addWidget(frame_chk_10, 1, 1, 2, 1);

        horizontalSpacer_9 = new QSpacerItem(380, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_28->addItem(horizontalSpacer_9, 2, 2, 1, 1);

        tabACPI->addTab(tabACPI4, QString());

        gridLayout->addWidget(tabACPI, 0, 0, 1, 1);

        tabTotal->addTab(tab, QString());
        tabTotal->setTabText(tabTotal->indexOf(tab), QString::fromUtf8("ACPI"));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_53 = new QGridLayout(tab_3);
        gridLayout_53->setObjectName("gridLayout_53");
        tabBooter = new QTabWidget(tab_3);
        tabBooter->setObjectName("tabBooter");
        tabBooter->setTabShape(QTabWidget::TabShape::Rounded);
        tabBooter->setDocumentMode(true);
        tabBooter1 = new QWidget();
        tabBooter1->setObjectName("tabBooter1");
        gridLayout_7 = new QGridLayout(tabBooter1);
        gridLayout_7->setObjectName("gridLayout_7");
        table_booter = new QTableWidget(tabBooter1);
        if (table_booter->columnCount() < 3)
            table_booter->setColumnCount(3);
        table_booter->setObjectName("table_booter");
#if QT_CONFIG(tooltip)
        table_booter->setToolTip(QString::fromUtf8("1. Address\n"
"Type: plist integer\n"
"Failsafe: 0\n"
"Description: Exceptional MMIO address, which memory descriptor should be left virtualised (unchanged) by DevirtualiseMmio. This means that the firmware will be able to directly communicate with this memory region during operating system functioning, because the region this value is in will be assigned a virtual address.\n"
"The addresses written here must be part of the memory map, have EfiMemoryMappedIO type and EFI_MEMORY_RUNTIME attribute (highest bit) set. The debug log can be used to find the list of the candidates.\n"
"\n"
"2. Comment\n"
"Type: plist string\n"
"Failsafe: Empty\n"
"Description: Arbitrary ASCII string used to provide human readable reference for the entry. Whether this value is used is implementation defined.\n"
"\n"
"3. Enabled\n"
"Type: plist boolean\n"
"Failsafe: false\n"
"Description: Exclude MMIO address from the devirtualisation procedure.\n"
"\n"
"----\n"
"\n"
"1.Address-\345\234\260\345\235\200\n"
"\347\261\273\345\236\213\357\274"
                        "\232plist\346\225\264\346\225\260\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\2320\n"
"\350\257\264\346\230\216\357\274\232\347\211\271\346\256\212\347\232\204MMIO\345\234\260\345\235\200\357\274\214\350\257\245\345\206\205\345\255\230\346\217\217\350\277\260\347\254\246\345\272\224\350\242\253DevirtualiseMmio\350\231\232\346\213\237\345\214\226\357\274\210\344\270\215\345\217\230\357\274\211\343\200\202\350\277\231\346\204\217\345\221\263\347\235\200\345\234\250\346\223\215\344\275\234\347\263\273\347\273\237\350\277\220\350\241\214\350\277\207\347\250\213\344\270\255\357\274\214\345\233\272\344\273\266\345\260\206\350\203\275\345\244\237\347\233\264\346\216\245\344\270\216\350\277\231\344\270\252\345\206\205\345\255\230\345\214\272\345\237\237\350\277\233\350\241\214\351\200\232\344\277\241\357\274\214\345\233\240\344\270\272\350\277\231\344\270\252\345\200\274\346\211\200\345\234\250\347\232\204\345\214\272\345\237\237\345\260\206\350\242\253\345\210\206\351\205\215\344\270\200\344\270\252\350"
                        "\231\232\346\213\237\345\234\260\345\235\200\343\200\202\n"
"\350\277\231\351\207\214\345\206\231\345\205\245\347\232\204\345\234\260\345\235\200\345\277\205\351\241\273\346\230\257\345\206\205\345\255\230\346\230\240\345\260\204\347\232\204\344\270\200\351\203\250\345\210\206\357\274\214\345\205\267\346\234\211EfiMemoryMappedIO\347\261\273\345\236\213\345\222\214EFI_MEMORY_RUNTIME\345\261\236\346\200\247\357\274\210\346\234\200\351\253\230\344\275\215\357\274\211\350\256\276\347\275\256\343\200\202\350\260\203\350\257\225\346\227\245\345\277\227\345\217\257\344\273\245\347\224\250\346\235\245\346\237\245\346\211\276\345\200\231\351\200\211\345\210\227\350\241\250\343\200\202\n"
"\n"
"2. Comment-\346\263\250\351\207\212\n"
"\347\261\273\345\236\213\357\274\232plist\345\255\227\347\254\246\344\270\262\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\347\251\272\347\232\204\n"
"\350\257\264\346\230\216\357\274\232\344\273\273\346\204\217\347\232\204ASCII\345\255\227\347\254\246\344\270\262\357\274"
                        "\214\347\224\250\344\272\216\344\270\272\346\235\241\347\233\256\346\217\220\344\276\233\345\217\257\344\276\233\344\272\272\347\261\273\351\230\205\350\257\273\347\232\204\345\217\202\350\200\203\343\200\202\n"
"\n"
"3. Enabled-\345\220\257\347\224\250\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\n"
"\345\244\261\350\264\245\344\277\235\346\212\244\357\274\232\345\201\207\n"
"\350\257\264\346\230\216\357\274\232\345\260\206MMIO\345\234\260\345\235\200\344\273\216\350\231\232\346\213\237\347\250\213\345\272\217\344\270\255\346\216\222\351\231\244\343\200\202"));
#endif // QT_CONFIG(tooltip)
        table_booter->setColumnCount(3);

        gridLayout_7->addWidget(table_booter, 0, 0, 1, 1);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName("verticalLayout_23");
        btnBooter_Add = new QToolButton(tabBooter1);
        btnBooter_Add->setObjectName("btnBooter_Add");
        btnBooter_Add->setMaximumSize(QSize(20, 16777215));
        btnBooter_Add->setIconSize(QSize(20, 20));

        verticalLayout_23->addWidget(btnBooter_Add);

        btnBooter_Del = new QToolButton(tabBooter1);
        btnBooter_Del->setObjectName("btnBooter_Del");
        btnBooter_Del->setMaximumSize(QSize(20, 16777215));
        btnBooter_Del->setIconSize(QSize(20, 20));

        verticalLayout_23->addWidget(btnBooter_Del);


        gridLayout_7->addLayout(verticalLayout_23, 0, 1, 1, 1);

        tabBooter->addTab(tabBooter1, QString());
        tabBooter2 = new QWidget();
        tabBooter2->setObjectName("tabBooter2");
        gridLayout_38 = new QGridLayout(tabBooter2);
        gridLayout_38->setObjectName("gridLayout_38");
        table_Booter_patch = new QTableWidget(tabBooter2);
        if (table_Booter_patch->columnCount() < 13)
            table_Booter_patch->setColumnCount(13);
        table_Booter_patch->setObjectName("table_Booter_patch");
        table_Booter_patch->setRowCount(0);
        table_Booter_patch->setColumnCount(13);

        gridLayout_38->addWidget(table_Booter_patch, 0, 0, 1, 1);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName("verticalLayout_24");
        btnBooterPatchAdd = new QToolButton(tabBooter2);
        btnBooterPatchAdd->setObjectName("btnBooterPatchAdd");
        btnBooterPatchAdd->setMaximumSize(QSize(20, 16777215));
        btnBooterPatchAdd->setIconSize(QSize(20, 20));

        verticalLayout_24->addWidget(btnBooterPatchAdd);

        btnBooterPatchDel = new QToolButton(tabBooter2);
        btnBooterPatchDel->setObjectName("btnBooterPatchDel");
        btnBooterPatchDel->setMaximumSize(QSize(20, 16777215));
        btnBooterPatchDel->setIconSize(QSize(20, 20));

        verticalLayout_24->addWidget(btnBooterPatchDel);


        gridLayout_38->addLayout(verticalLayout_24, 0, 1, 1, 1);

        tabBooter->addTab(tabBooter2, QString());
        tabBooter3 = new QWidget();
        tabBooter3->setObjectName("tabBooter3");
        gridLayout_6 = new QGridLayout(tabBooter3);
        gridLayout_6->setObjectName("gridLayout_6");
        frame_chk_12 = new QFrame(tabBooter3);
        frame_chk_12->setObjectName("frame_chk_12");
        frame_chk_12->setMaximumSize(QSize(16777215, 16777215));
        frame_chk_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_12->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_38 = new QVBoxLayout(frame_chk_12);
        verticalLayout_38->setObjectName("verticalLayout_38");
        chkAllowRelocationBlock = new QCheckBox(frame_chk_12);
        chkAllowRelocationBlock->setObjectName("chkAllowRelocationBlock");
#if QT_CONFIG(tooltip)
        chkAllowRelocationBlock->setToolTip(QString::fromUtf8("Description: Allows booting macOS through a relocation block.\n"
"\n"
"The relocation block is a scratch buffer allocated in the lower 4 GB used for loading the kernel and related structures by EfiBoot on firmware where the lower memory region is otherwise occupied by (assumed) non-runtime data. Right before kernel startup, the relocation block is copied back to lower addresses. Similarly, all the other addresses pointing to the relocation block are also carefully adjusted. The relocation block can be used when:\n"
"\n"
"\342\200\242 No better slide exists (all the memory is used)\n"
"\n"
"\342\200\242 slide=0 is forced (by an argument or safe mode)\n"
"\n"
"\342\200\242 KASLR (slide) is unsupported (this is macOS 10.7 or older)\n"
"\n"
"This quirk requires ProvideCustomSlide to be enabled and typically also requires enabling AvoidRuntimeDefrag to function correctly. Hibernation is not supported when booting with a relocation block, which will only be used if required when the quirk is enabled.\n"
"\n"
"Note: "
                        "While this quirk is required to run older macOS versions on platforms with used lower memory, it is not compatible with some hardware and macOS 11. In such cases, consider using EnableSafeModeSlide instead.\n"
"\n"
"----\n"
"\n"
"\350\257\264\346\230\216\357\274\232\345\205\201\350\256\270\351\200\232\350\277\207\351\207\215\346\226\260\345\256\232\344\275\215\345\235\227\345\220\257\345\212\250macOS\343\200\202\n"
"\n"
"\351\207\215\347\275\256\345\235\227\346\230\257\344\270\200\344\270\252\345\210\206\351\205\215\345\234\250\344\270\2134GB\347\232\204\347\274\223\345\206\262\345\214\272\357\274\214\347\224\250\344\272\216EfiBoot\345\234\250\345\233\272\344\273\266\344\270\212\345\212\240\350\275\275\345\206\205\346\240\270\345\222\214\347\233\270\345\205\263\347\273\223\346\236\204\357\274\214\345\220\246\345\210\231\344\270\213\345\261\202\345\206\205\345\255\230\345\214\272\345\237\237\345\260\261\344\274\232\350\242\253\357\274\210\345\201\207\350\256\276\347\232\204\357\274\211\351\235\236\350\277\220\350"
                        "\241\214\346\227\266\346\225\260\346\215\256\345\215\240\347\224\250\343\200\202\345\260\261\345\234\250\345\206\205\346\240\270\345\220\257\345\212\250\345\211\215\357\274\214\351\207\215\346\226\260\345\256\232\344\275\215\345\235\227\350\242\253\345\244\215\345\210\266\345\210\260\350\276\203\344\275\216\347\232\204\345\234\260\345\235\200\343\200\202\345\220\214\346\240\267\347\232\204\357\274\214\346\211\200\346\234\211\345\205\266\344\273\226\346\214\207\345\220\221\351\207\215\345\256\232\344\275\215\345\235\227\347\232\204\345\234\260\345\235\200\344\271\237\344\274\232\350\242\253\344\273\224\347\273\206\350\260\203\346\225\264\343\200\202\351\207\215\347\275\256\345\235\227\345\217\257\344\273\245\345\234\250\344\273\245\344\270\213\346\203\205\345\206\265\344\270\213\344\275\277\347\224\250\343\200\202\n"
"\n"
"- \346\262\241\346\234\211\346\233\264\345\245\275\347\232\204\345\271\273\347\201\257\347\211\207\345\255\230\345\234\250(\346\211\200\346\234\211\347\232\204\345\206\205\345\255\230\351\203"
                        "\275\350\242\253\344\275\277\347\224\250\344\272\206)\n"
"\n"
"- slide=0\350\242\253\345\274\272\345\210\266\357\274\210\351\200\232\350\277\207\345\217\202\346\225\260\346\210\226\345\256\211\345\205\250\346\250\241\345\274\217\357\274\211\343\200\202\n"
"\n"
"- \344\270\215\346\224\257\346\214\201KASLR(\345\271\273\347\201\257\347\211\207)(\350\277\231\346\230\257macOS 10.7\346\210\226\346\233\264\351\253\230\347\211\210\346\234\254)\n"
"\n"
"\346\255\244\351\200\211\351\241\271\351\234\200\350\246\201\345\220\257\347\224\250ProvideCustomSlide\357\274\214\351\200\232\345\270\270\350\277\230\351\234\200\350\246\201\345\220\257\347\224\250AvoidRuntimeDefrag\346\211\215\350\203\275\346\255\243\345\270\270\345\267\245\344\275\234\343\200\202\345\275\223\344\275\277\347\224\250\351\207\215\346\226\260\345\256\232\344\275\215\345\235\227\345\220\257\345\212\250\346\227\266\357\274\214\344\270\215\346\224\257\346\214\201\344\274\221\347\234\240\357\274\214\345\217\252\346\234\211\345\234\250\345\220\257\347\224\250"
                        "\346\255\244\351\200\211\351\241\271\346\227\266\346\211\215\344\274\232\344\275\277\347\224\250\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\231\275\347\204\266\345\234\250\344\275\277\347\224\250\344\272\206\350\276\203\344\275\216\345\206\205\345\255\230\347\232\204\345\271\263\345\217\260\344\270\212\350\277\220\350\241\214\346\227\247\347\211\210macOS\351\234\200\350\246\201\350\277\231\344\270\252\351\200\211\351\241\271\357\274\214\344\275\206\345\256\203\344\270\216\346\237\220\344\272\233\347\241\254\344\273\266\345\222\214macOS 11\344\270\215\345\205\274\345\256\271\343\200\202\345\234\250\350\277\231\347\247\215\346\203\205\345\206\265\344\270\213\357\274\214\350\257\267\350\200\203\350\231\221\344\275\277\347\224\250EnableSafeModeSlide\344\273\243\346\233\277\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_38->addWidget(chkAllowRelocationBlock);

        chkAvoidRuntimeDefrag = new QCheckBox(frame_chk_12);
        chkAvoidRuntimeDefrag->setObjectName("chkAvoidRuntimeDefrag");
#if QT_CONFIG(tooltip)
        chkAvoidRuntimeDefrag->setToolTip(QString::fromUtf8("Description: Protect from boot.efi runtime memory defragmentation.\n"
"\n"
"This option fixes UEFI runtime services (date, time, NVRAM, power control, etc.) support on firmware that uses SMM backing for certain services such as variable storage. SMM may try to access memory by physical addresses in non-SMM areas but this may sometimes have been moved by boot.efi. This option prevents boot.efi from moving such data.\n"
"\n"
"Note: Most types of firmware, apart from Apple and VMware, need this quirk.\n"
"\n"
"----\n"
"\n"
"\346\217\217\350\277\260: \351\230\262\346\255\242 boot.efi \350\277\220\350\241\214\346\227\266\345\206\205\345\255\230\347\242\216\347\211\207\346\225\264\347\220\206\343\200\202\n"
"\n"
"\345\256\203\345\217\257\344\273\245\344\277\256\345\244\215UEFI\350\277\220\350\241\214\346\227\266\346\234\215\345\212\241\357\274\210\346\227\245\346\234\237\343\200\201\346\227\266\351\227\264\343\200\201NVRAM\343\200\201\347\224\265\346\272\220\346\216\247\345\210\266\347\255\211\357\274\211\345\257\271"
                        "\344\275\277\347\224\250SMM\346\224\257\346\214\201\346\237\220\344\272\233\346\234\215\345\212\241\357\274\210\345\246\202\345\217\257\345\217\230\345\255\230\345\202\250\357\274\211\347\232\204\345\233\272\344\273\266\347\232\204\346\224\257\346\214\201\343\200\202\n"
"\n"
"SMM\345\217\257\350\203\275\344\274\232\345\260\235\350\257\225\351\200\232\350\277\207\351\235\236SMM\345\214\272\345\237\237\347\232\204\347\211\251\347\220\206\345\234\260\345\235\200\350\256\277\351\227\256\345\206\205\345\255\230\357\274\214\344\275\206\350\277\231\346\234\211\346\227\266\345\217\257\350\203\275\345\267\262\347\273\217\350\242\253boot.efi\347\247\273\345\212\250\344\272\206\343\200\202\350\277\231\344\270\252\351\200\211\351\241\271\345\217\257\344\273\245\351\230\262\346\255\242boot.efi\347\247\273\345\212\250\350\277\231\344\272\233\346\225\260\346\215\256\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\351\231\244\344\272\206\350\213\271\346\236\234\345\222\214VMware\344\271\213\345\244\226\357\274\214\345"
                        "\244\247\345\244\232\346\225\260\347\261\273\345\236\213\347\232\204\345\233\272\344\273\266\351\203\275\351\234\200\350\246\201\350\277\231\344\270\252\351\200\211\351\241\271\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_38->addWidget(chkAvoidRuntimeDefrag);

        chkDevirtualiseMmio = new QCheckBox(frame_chk_12);
        chkDevirtualiseMmio->setObjectName("chkDevirtualiseMmio");
#if QT_CONFIG(tooltip)
        chkDevirtualiseMmio->setToolTip(QString::fromUtf8("\n"
"Description: Remove runtime attribute from certain MMIO regions.\n"
"\n"
"This quirk reduces the stolen memory footprint in the memory map by removing the runtime bit for known memory regions. This quirk may result in an increase of KASLR slides available but without additional measures,it is not necessarily compatible with the target board. This quirk typically frees between 64 and 256 megabytes of memory, present in the debug log, and on some platforms, is the only way to boot macOS, which otherwise fails with allocation errors at the bootloader stage.\n"
"\n"
"This option is useful on all types of firmware, except for some very old ones such as Sandy Bridge. On certain firmware, a list of addresses that need virtual addresses for proper NVRAM and hibernation functionality may be required. Use the MmioWhitelist section for this.\n"
"\n"
"\n"
"----\n"
"\n"
"\n"
"\n"
"\350\257\264\346\230\216\357\274\232\345\210\240\351\231\244\346\237\220\344\272\233MMIO\345\214\272\345\237\237\347\232\204\350\277\220\350"
                        "\241\214\346\227\266\345\261\236\346\200\247\343\200\202\n"
"\n"
"\350\257\245\351\200\211\351\241\271\351\200\232\350\277\207\345\210\240\351\231\244\345\267\262\347\237\245\345\206\205\345\255\230\345\214\272\345\237\237\347\232\204\350\277\220\350\241\214\346\227\266\351\227\264\344\275\215\346\235\245\345\207\217\345\260\221\345\206\205\345\255\230\346\230\240\345\260\204\344\270\255\350\242\253\347\233\227\347\232\204\345\206\205\345\255\230\350\266\263\350\277\271\343\200\202\n"
"\n"
"\345\256\203\345\217\257\350\203\275\344\274\232\345\257\274\350\207\264KASLR\345\271\273\347\201\257\347\211\207\347\232\204\345\217\257\347\224\250\346\200\247\345\242\236\345\212\240\357\274\214\344\275\206\345\246\202\346\236\234\346\262\241\346\234\211\351\242\235\345\244\226\347\232\204\346\216\252\346\226\275\357\274\214\345\256\203\344\270\215\344\270\200\345\256\232\344\270\216\347\233\256\346\240\207\346\235\277\345\205\274\345\256\271\343\200\202\n"
"\n"
"\345\256\203\351\200\232\345\270\270\344\274\232\351\207\212"
                        "\346\224\27664\345\210\260256\345\205\206\347\232\204\345\206\205\345\255\230\357\274\214\345\255\230\345\234\250\344\272\216\350\260\203\350\257\225\346\227\245\345\277\227\344\270\255\357\274\214\345\234\250\346\237\220\344\272\233\345\271\263\345\217\260\344\270\212\357\274\214\346\230\257\345\220\257\345\212\250macOS\347\232\204\345\224\257\344\270\200\346\226\271\346\263\225\357\274\214\345\220\246\345\210\231\344\274\232\345\234\250bootloader\351\230\266\346\256\265\345\233\240\345\210\206\351\205\215\351\224\231\350\257\257\350\200\214\345\244\261\350\264\245\343\200\202\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\345\234\250\346\211\200\346\234\211\347\261\273\345\236\213\347\232\204\345\233\272\344\273\266\344\270\212\351\203\275\345\276\210\346\234\211\347\224\250\357\274\214\351\231\244\344\272\206\344\270\200\344\272\233\345\276\210\350\200\201\347\232\204\345\233\272\344\273\266\357\274\214\346\257\224\345\246\202Sandy Bridge\343\200\202\n"
"\n"
"\345\234\250\346\237\220\344\272\233\345"
                        "\233\272\344\273\266\344\270\212\357\274\214\345\217\257\350\203\275\351\234\200\350\246\201\344\270\200\344\270\252\350\231\232\346\213\237\345\234\260\345\235\200\347\232\204\345\234\260\345\235\200\345\210\227\350\241\250\346\235\245\345\256\236\347\216\260\346\255\243\347\241\256\347\232\204NVRAM\345\222\214\344\274\221\347\234\240\345\212\237\350\203\275\343\200\202\350\257\267\344\275\277\347\224\250 MmioWhitelist \351\203\250\345\210\206\346\235\245\350\247\243\345\206\263\350\277\231\344\270\252\351\227\256\351\242\230\343\200\202\n"
"\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_38->addWidget(chkDevirtualiseMmio);

        chkDisableSingleUser = new QCheckBox(frame_chk_12);
        chkDisableSingleUser->setObjectName("chkDisableSingleUser");
#if QT_CONFIG(tooltip)
        chkDisableSingleUser->setToolTip(QString::fromUtf8("Type: plist boolean\n"
"\n"
"Description: Disable single user mode.\n"
"\n"
"This is a security option that restricts the activation of single user mode by ignoring the CMD+S hotkey and the -s boot argument. The behaviour with this quirk enabled is supposed to match T2-based model behaviour. Refer to this archived article to understand how to use single user mode with this quirk enabled.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\346\217\217\350\277\260\357\274\232\347\246\201\347\224\250\345\215\225\347\224\250\346\210\267\346\250\241\345\274\217\343\200\202\n"
"\n"
"\350\277\231\346\230\257\344\270\200\344\270\252\345\256\211\345\205\250\351\200\211\351\241\271\357\274\214\351\200\232\350\277\207\345\277\275\347\225\245CMD+S\347\203\255\351\224\256\345\222\214-s\345\220\257\345\212\250\345\217\202\346\225\260\346\235\245\351\231\220\345\210\266\345\215\225\347\224\250\346\210\267\346\250\241\345\274\217\347\232\204\346\277\200\346\264\273\343\200\202\345"
                        "\220\257\347\224\250\350\277\231\344\270\252\351\200\211\351\241\271\345\220\216\347\232\204\350\241\214\344\270\272\345\272\224\350\257\245\346\230\257\344\270\216\345\237\272\344\272\216T2\347\232\204\346\250\241\345\274\217\350\241\214\344\270\272\347\233\270\345\214\271\351\205\215\347\232\204\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_38->addWidget(chkDisableSingleUser);

        chkDisableVariableWrite = new QCheckBox(frame_chk_12);
        chkDisableVariableWrite->setObjectName("chkDisableVariableWrite");
#if QT_CONFIG(tooltip)
        chkDisableVariableWrite->setToolTip(QString::fromUtf8("This is a security option allowing one to restrict NVRAM access in macOS. \n"
"\n"
"This quirk requires OC_FIRMWARE_RUNTIME protocol implemented in  OpenRuntime.efi.\n"
"\n"
"Note: This quirk can also be used as an ugly workaround to buggy UEFI runtime services implementations that fail to write variables to NVRAM and break the rest of the operating system.\n"
"\n"
"----\n"
"\n"
"\350\277\231\346\230\257\344\270\200\344\270\252\345\256\211\345\205\250\351\200\211\351\241\271\357\274\214\345\205\201\350\256\270\344\272\272\344\273\254\345\234\250macOS\344\270\255\351\231\220\345\210\266NVRAM\347\232\204\350\256\277\351\227\256\343\200\202\n"
"\n"
"\345\256\203\351\234\200\350\246\201\345\234\250OpenRuntime.efi\344\270\255\345\256\236\347\216\260OC_FIRMWARE_RUNTIME\345\215\217\350\256\256\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\256\203\344\271\237\345\217\257\344\273\245\344\275\234\344\270\272\344\270\200\344\270\252\347\256\200\351\231\213\347\232\204\345\217\230\351\200\232\346\226\271\346"
                        "\263\225\357\274\214\346\235\245\350\247\243\345\206\263UEFI\350\277\220\350\241\214\346\227\266\346\234\215\345\212\241\345\256\236\347\216\260\347\232\204bug\357\274\214\345\233\240\344\270\272\350\277\231\344\272\233\346\234\215\345\212\241\346\227\240\346\263\225\345\260\206\345\217\230\351\207\217\345\206\231\345\205\245NVRAM\345\271\266\347\240\264\345\235\217\346\223\215\344\275\234\347\263\273\347\273\237\347\232\204\345\205\266\344\273\226\351\203\250\345\210\206\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_38->addWidget(chkDisableVariableWrite);

        chkDiscardHibernateMap = new QCheckBox(frame_chk_12);
        chkDiscardHibernateMap->setObjectName("chkDiscardHibernateMap");
#if QT_CONFIG(tooltip)
        chkDiscardHibernateMap->setToolTip(QString::fromUtf8("This option forces XNU kernel to ignore newly supplied memory map and assume that it did not change after waking from hibernation. \n"
"\n"
"This behaviour is required to work by Windows, which mandates to preserve runtime memory size and location after S4 wake.\n"
"\n"
"Note: This may be used to workaround buggy memory maps on older hardware, and is now considered rare legacy.\n"
"\n"
"Examples of such hardware are Ivy Bridge laptops with Insyde firmware, like Acer V3-571G. \n"
"\n"
"Do not use this unless you fully understand the consequences.\n"
"\n"
"----\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\345\274\272\345\210\266XNU\345\206\205\346\240\270\345\277\275\347\225\245\346\226\260\346\217\220\344\276\233\347\232\204\345\206\205\345\255\230\346\230\240\345\260\204\357\274\214\345\271\266\345\201\207\350\256\276\345\256\203\345\234\250\344\274\221\347\234\240\345\220\216\346\262\241\346\234\211\346\224\271\345\217\230\343\200\202\n"
"\n"
"\350\277\231\344\270\252\350\241\214\344\270\272\346\230"
                        "\257Windows\346\211\200\350\246\201\346\261\202\347\232\204\357\274\214\345\233\240\344\270\272Windows\350\246\201\346\261\202\345\234\250S4\345\224\244\351\206\222\345\220\216\344\277\235\347\225\231\350\277\220\350\241\214\346\227\266\347\232\204\345\206\205\345\255\230\345\244\247\345\260\217\345\222\214\344\275\215\347\275\256\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\277\231\345\217\257\350\203\275\350\242\253\347\224\250\346\235\245\350\247\243\345\206\263\346\227\247\347\241\254\344\273\266\344\270\212\347\232\204\351\224\231\350\257\257\345\206\205\345\255\230\346\230\240\345\260\204\357\274\214\347\216\260\345\234\250\350\242\253\350\256\244\344\270\272\346\230\257\347\275\225\350\247\201\347\232\204\351\201\227\347\225\231\351\227\256\351\242\230\343\200\202\n"
"\n"
"\350\277\231\347\261\273\347\241\254\344\273\266\347\232\204\344\276\213\345\255\220\346\230\257\344\275\277\347\224\250Ivy Bridge\345\233\272\344\273\266\347\232\204Ivy Bridge\347\254\224\350\256\260\346\234\254\347\224"
                        "\265\350\204\221\357\274\214\345\246\202Acer V3-571G\343\200\202\n"
"\n"
"\351\231\244\351\235\236\346\202\250\345\256\214\345\205\250\344\272\206\350\247\243\345\205\266\345\220\216\346\236\234\357\274\214\345\220\246\345\210\231\350\257\267\345\213\277\344\275\277\347\224\250\346\255\244\345\212\237\350\203\275\343\200\202\n"
"\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_38->addWidget(chkDiscardHibernateMap);

        chkEnableSafeModeSlide = new QCheckBox(frame_chk_12);
        chkEnableSafeModeSlide->setObjectName("chkEnableSafeModeSlide");
#if QT_CONFIG(tooltip)
        chkEnableSafeModeSlide->setToolTip(QString::fromUtf8("This option is relevant to the users that have issues booting to safe mode (e.g. by holding shift or using -x boot argument). \n"
"\n"
"By default safe mode forces 0 slide as if the system was launched with slide=0 boot argument. \n"
"\n"
"This quirk tries to patch boot.efi to lift that limitation and let some other value (from 1 to 255) be used. \n"
"\n"
"This quirk requires ProvideCustomSlide to be enabled.\n"
"\n"
"Note: The necessity of this quirk is determined by safe mode availability. If booting to safe mode fails, this option can be tried to be enabled.\n"
"\n"
"----\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\351\200\202\347\224\250\344\272\216\346\234\211\351\227\256\351\242\230\347\232\204\347\224\250\346\210\267\357\274\210\344\276\213\345\246\202\346\214\211\344\275\217shift\346\210\226\344\275\277\347\224\250-x\345\220\257\345\212\250\345\217\202\346\225\260\357\274\211\343\200\202\n"
"\n"
"\351\273\230\350\256\244\346\203\205\345\206\265\344\270\213\357\274\214\345\256\211\345\205\250"
                        "\346\250\241\345\274\217\344\274\232\345\274\272\345\210\2660\345\271\273\347\201\257\347\211\207\357\274\214\345\260\261\345\203\217\347\263\273\347\273\237\345\234\250\345\220\257\345\212\250\346\227\266\344\275\277\347\224\250slide=0\345\220\257\345\212\250\345\217\202\346\225\260\344\270\200\346\240\267\343\200\202\n"
"\n"
"\350\257\245\351\200\211\351\241\271\350\257\225\345\233\276\347\273\231boot.efi\346\211\223\344\270\212\350\241\245\344\270\201\357\274\214\344\273\245\350\247\243\351\231\244\350\277\231\344\270\252\351\231\220\345\210\266\357\274\214\345\271\266\350\256\251\344\270\200\344\272\233\345\205\266\344\273\226\347\232\204\345\200\274\357\274\210\344\273\2161\345\210\260255\357\274\211\350\242\253\344\275\277\347\224\250\343\200\202\n"
"\n"
"\350\257\245\351\200\211\351\241\271\351\234\200\350\246\201\345\220\257\347\224\250 ProvideCustomSlide\343\200\202\n"
"\n"
"\346\263\250\346\204\217: \350\257\245\351\200\211\351\241\271\347\232\204\345\277\205\350\246\201\346\200\247\346\230\257\347\224"
                        "\261\345\256\211\345\205\250\346\250\241\345\274\217\347\232\204\345\217\257\347\224\250\346\200\247\345\206\263\345\256\232\347\232\204\343\200\202\345\246\202\346\236\234\345\220\257\345\212\250\345\210\260\345\256\211\345\205\250\346\250\241\345\274\217\345\244\261\350\264\245\357\274\214\345\217\257\344\273\245\345\260\235\350\257\225\345\220\257\347\224\250\350\277\231\344\270\252\351\200\211\351\241\271\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_38->addWidget(chkEnableSafeModeSlide);

        chkEnableWriteUnprotector = new QCheckBox(frame_chk_12);
        chkEnableWriteUnprotector->setObjectName("chkEnableWriteUnprotector");
#if QT_CONFIG(tooltip)
        chkEnableWriteUnprotector->setToolTip(QString::fromUtf8("This option bypasses R\313\206X permissions in code pages of UEFI runtime services by removing write protection (WP) bit from CR0 register during their execution. This quirk requires OC_FIRMWARE_RUNTIME protocol implemented in OpenRuntime.efi.\n"
"\n"
"Note: This quirk may potentially weaken firmware security, please use RebuildAppleMemoryMap if your firmware supports memory attributes table (MAT). \n"
"\n"
"----\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\345\234\250UEFI\350\277\220\350\241\214\346\227\266\346\234\215\345\212\241\347\232\204\344\273\243\347\240\201\351\241\265\344\270\255\357\274\214\351\200\232\350\277\207\345\210\240\351\231\244CR0\345\257\204\345\255\230\345\231\250\344\270\255\347\232\204\345\206\231\344\277\235\346\212\244\357\274\210WP\357\274\211\344\275\215\357\274\214\347\273\225\350\277\207\344\272\206R\313\206X\346\235\203\351\231\220\343\200\202\350\257\245\351\200\211\351\241\271\351\234\200\350\246\201\345\234\250OpenRuntime.efi\344\270\255\345\256\236\347\216\260O"
                        "C_FIRMWARE_RUNTIME\345\215\217\350\256\256\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\257\245\351\200\211\351\241\271\345\217\257\350\203\275\344\274\232\345\211\212\345\274\261\345\233\272\344\273\266\347\232\204\345\256\211\345\205\250\346\200\247\357\274\214\345\246\202\346\236\234\344\275\240\347\232\204\345\233\272\344\273\266\346\224\257\346\214\201\345\206\205\345\255\230\345\261\236\346\200\247\350\241\250\357\274\210MAT\357\274\211\357\274\214\350\257\267\344\275\277\347\224\250RebuildAppleMemoryMap\343\200\202\n"
"\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_38->addWidget(chkEnableWriteUnprotector);

        chkForceExitBootServices = new QCheckBox(frame_chk_12);
        chkForceExitBootServices->setObjectName("chkForceExitBootServices");
#if QT_CONFIG(tooltip)
        chkForceExitBootServices->setToolTip(QString::fromUtf8("Try to ensure that ExitBootServices call succeeds even with outdated MemoryMap key argument by obtaining current memory map and retrying ExitBootServices call.\n"
"\n"
"Note: The necessity of this quirk is determined by early boot crashes of the firmware. Do not use this unless you fully understand the consequences.\n"
"\n"
"----\n"
"\n"
"\345\260\235\350\257\225\351\200\232\350\277\207\350\216\267\345\217\226\345\275\223\345\211\215\347\232\204\345\206\205\345\255\230\346\230\240\345\260\204\345\271\266\351\207\215\350\257\225ExitBootServices\350\260\203\347\224\250\346\235\245\347\241\256\344\277\235ExitBootServices\350\260\203\347\224\250\346\210\220\345\212\237\357\274\214\345\215\263\344\275\277\346\230\257\350\277\207\346\227\266\347\232\204MemoryMap\351\224\256\345\217\202\346\225\260\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\257\245\351\200\211\351\241\271\347\232\204\345\277\205\350\246\201\346\200\247\346\230\257\347\224\261\345\233\272\344\273\266\347\232\204\346\227\251\346\234\237"
                        "\345\220\257\345\212\250\345\264\251\346\272\203\345\206\263\345\256\232\347\232\204\343\200\202\351\231\244\351\235\236\344\275\240\345\256\214\345\205\250\346\230\216\347\231\275\345\220\216\346\236\234\357\274\214\345\220\246\345\210\231\344\270\215\350\246\201\344\275\277\347\224\250\350\277\231\344\270\252\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_38->addWidget(chkForceExitBootServices);


        gridLayout_6->addWidget(frame_chk_12, 1, 0, 1, 1);

        frame_chk_13 = new QFrame(tabBooter3);
        frame_chk_13->setObjectName("frame_chk_13");
        frame_chk_13->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_13->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_48 = new QVBoxLayout(frame_chk_13);
        verticalLayout_48->setObjectName("verticalLayout_48");
        chkForceBooterSignature = new QCheckBox(frame_chk_13);
        chkForceBooterSignature->setObjectName("chkForceBooterSignature");
#if QT_CONFIG(tooltip)
        chkForceBooterSignature->setToolTip(QString::fromUtf8("Booter signature, essentially a SHA-1 hash of the loaded image, is used by Mac EFI to verify the authenticity of the bootloader when waking from hibernation. \n"
"\n"
"This option forces macOS to use OpenCore launcher SHA-1 hash as a booter signature to let OpenCore shim hibernation wake on Mac EFI firmware.\n"
"\n"
"Note: OpenCore launcher path is determined from LauncherPath property.\n"
"\n"
"----\n"
"\n"
"Booter\347\255\276\345\220\215\357\274\214\346\234\254\350\264\250\344\270\212\346\230\257\345\212\240\350\275\275\347\232\204\346\230\240\345\203\217\347\232\204SHA-1\345\223\210\345\270\214\345\200\274\357\274\214Mac EFI\345\234\250\344\273\216\344\274\221\347\234\240\344\270\255\345\224\244\351\206\222\346\227\266\344\275\277\347\224\250\345\256\203\346\235\245\351\252\214\350\257\201\345\274\225\345\257\274\345\212\240\350\275\275\345\231\250\347\232\204\347\234\237\345\256\236\346\200\247\343\200\202\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\345\274\272\345\210\266macOS\344\275\277\347"
                        "\224\250OpenCore\345\220\257\345\212\250\345\231\250SHA-1\345\223\210\345\270\214\345\200\274\344\275\234\344\270\272\345\220\257\345\212\250\345\231\250\347\255\276\345\220\215\357\274\214\350\256\251OpenCore shim\344\274\221\347\234\240\345\224\244\351\206\222\345\234\250Mac EFI\345\233\272\344\273\266\344\270\212\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232OpenCore\345\220\257\345\212\250\345\231\250\350\267\257\345\276\204\347\224\261LauncherPath\345\261\236\346\200\247\345\206\263\345\256\232\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_48->addWidget(chkForceBooterSignature);

        chkProtectSecureBoot = new QCheckBox(frame_chk_13);
        chkProtectSecureBoot->setObjectName("chkProtectSecureBoot");
#if QT_CONFIG(tooltip)
        chkProtectSecureBoot->setToolTip(QString::fromUtf8("Reports security violation during attempts to write to db, dbx, PK, and KEK variables from the operating system.\n"
"\n"
"Note: This quirk mainly attempts to avoid issues with NVRAM implementations with problematic defragmentation,such as select Insyde or MacPro5,1.\n"
"\n"
"----\n"
"\n"
"\345\234\250\345\260\235\350\257\225\344\273\216\346\223\215\344\275\234\347\263\273\347\273\237\345\206\231\345\205\245db\343\200\201dbx\343\200\201pk\345\222\214kek\345\217\230\351\207\217\346\227\266\357\274\214\346\212\245\345\221\212\345\256\211\345\205\250\350\277\235\350\247\204\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\257\245\351\200\211\351\241\271\344\270\273\350\246\201\346\230\257\344\270\272\344\272\206\351\201\277\345\205\215NVRAM\345\256\236\347\216\260\344\270\255\345\255\230\345\234\250\347\232\204\347\242\216\347\211\207\346\225\264\347\220\206\351\227\256\351\242\230\357\274\214\346\257\224\345\246\202\351\200\211\346\213\251Insyde\346\210\226MacPro5\357\274\2141\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_48->addWidget(chkProtectSecureBoot);

        chkProtectUefiServices = new QCheckBox(frame_chk_13);
        chkProtectUefiServices->setObjectName("chkProtectUefiServices");
#if QT_CONFIG(tooltip)
        chkProtectUefiServices->setToolTip(QString::fromUtf8("Some modern firmwares including both hardware and virtual machines, like VMware, may update pointers to UEFI services during driver loading and related actions. \n"
"\n"
"Consequentially this directly breaks other quirks that affect memory management, like DevirtualiseMmio, ProtectMemoryRegions, or RebuildAppleMemoryMap, and may also break other quirks depending on the effects of these.\n"
"\n"
"Note: On VMware the need for this quirk may be diagnosed by \342\200\234Your Mac OS guest might run unreliably with more than one virtual core.\342\200\235 message.\n"
"\n"
"----\n"
"\n"
"\344\270\200\344\272\233\347\216\260\344\273\243\347\232\204\345\233\272\344\273\266\357\274\214\345\214\205\346\213\254\347\241\254\344\273\266\345\222\214\350\231\232\346\213\237\346\234\272\357\274\214\345\246\202VMware\357\274\214\345\217\257\350\203\275\344\274\232\345\234\250\351\251\261\345\212\250\347\250\213\345\272\217\345\212\240\350\275\275\345\222\214\347\233\270\345\205\263\346\223\215\344\275\234\346\234\237\351\227\264"
                        "\346\233\264\346\226\260\346\214\207\345\220\221UEFI\346\234\215\345\212\241\347\232\204\346\214\207\351\222\210\343\200\202\n"
"\n"
"\347\233\270\345\272\224\345\234\260\357\274\214\350\277\231\347\233\264\346\216\245\347\240\264\345\235\217\344\272\206\345\205\266\344\273\226\345\275\261\345\223\215\345\206\205\345\255\230\347\256\241\347\220\206\347\232\204\351\200\211\351\241\271\357\274\214\345\246\202DevirtualiseMmio\343\200\201ProtectMemoryRegions\346\210\226RebuildAppleMemoryMap\357\274\214\344\271\237\345\217\257\350\203\275\347\240\264\345\235\217\345\205\266\344\273\226\351\200\211\351\241\271\357\274\214\350\277\231\345\217\226\345\206\263\344\272\216\350\277\231\344\272\233\351\200\211\351\241\271\347\232\204\345\275\261\345\223\215\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\234\250VMware\344\270\212\357\274\214\350\257\245\351\200\211\351\241\271\347\232\204\345\277\205\350\246\201\346\200\247\345\217\257\350\203\275\344\274\232\350\242\253 \"\344\275\240\347\232\204Mac OS gues"
                        "t\345\217\257\350\203\275\344\274\232\345\234\250\345\244\232\344\270\252\350\231\232\346\213\237\346\240\270\345\277\203\347\232\204\346\203\205\345\206\265\344\270\213\344\270\215\345\217\257\351\235\240\345\234\260\350\277\220\350\241\214\343\200\202\"\346\266\210\346\201\257\350\257\212\346\226\255\345\207\272\346\235\245\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_48->addWidget(chkProtectUefiServices);

        chkProvideCustomSlide = new QCheckBox(frame_chk_13);
        chkProvideCustomSlide->setObjectName("chkProvideCustomSlide");
#if QT_CONFIG(tooltip)
        chkProvideCustomSlide->setToolTip(QString::fromUtf8("This option performs memory map analysis of your firmware and checks whether all slides (from 1 to 255) can be used. \n"
"\n"
"As boot.efi generates this value randomly with rdrand or pseudo randomly rdtsc, there is a chance of boot failure when it chooses a conflicting slide. In case potential conflicts exist, this option forces macOS to use a pseudo random value among the available ones. \n"
"\n"
"This also ensures that slide= argument is never passed to the operating system for security reasons.\n"
"\n"
"Note: The necessity of this quirk is determined by OCABC: Only N/256 slide values are usable! message in the debug log. If the message is present, this option is to be enabled.\n"
"\n"
"----\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\345\257\271\344\275\240\347\232\204\345\233\272\344\273\266\350\277\233\350\241\214\345\206\205\345\255\230\346\230\240\345\260\204\345\210\206\346\236\220\357\274\214\345\271\266\346\243\200\346\237\245\346\211\200\346\234\211\347\232\204\345\271\273\347\201\257"
                        "\347\211\207\357\274\210\344\273\2161\345\210\260255\357\274\211\346\230\257\345\220\246\345\217\257\344\273\245\344\275\277\347\224\250\343\200\202\n"
"\n"
"\347\224\261\344\272\216boot.efi\347\224\250rdrand\346\210\226\344\274\252\351\232\217\346\234\272rdtsc\351\232\217\346\234\272\347\224\237\346\210\220\350\277\231\344\270\252\345\200\274\357\274\214\346\211\200\344\273\245\345\275\223\345\256\203\351\200\211\346\213\251\344\270\200\344\270\252\345\206\262\347\252\201\347\232\204\345\271\273\347\201\257\347\211\207\346\227\266\357\274\214\346\234\211\345\217\257\350\203\275\344\274\232\345\257\274\350\207\264\345\220\257\345\212\250\345\244\261\350\264\245\343\200\202\345\234\250\346\275\234\345\234\250\345\206\262\347\252\201\345\255\230\345\234\250\347\232\204\346\203\205\345\206\265\344\270\213\357\274\214\350\277\231\344\270\252\351\200\211\351\241\271\344\274\232\345\274\272\345\210\266 macOS \345\234\250\345\217\257\347\224\250\347\232\204\345\200\274\344\270\255\344\275\277\347\224\250\344\270\200\344"
                        "\270\252\344\274\252\351\232\217\346\234\272\347\232\204\345\200\274\343\200\202\n"
"\n"
"\350\277\231\344\271\237\344\277\235\350\257\201\344\272\206\345\207\272\344\272\216\345\256\211\345\205\250\350\200\203\350\231\221\357\274\214slide=\345\217\202\346\225\260\357\274\214\346\260\270\350\277\234\344\270\215\344\274\232\344\274\240\351\200\222\347\273\231\346\223\215\344\275\234\347\263\273\347\273\237\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\257\245\351\200\211\351\241\271\347\232\204\345\277\205\350\246\201\346\200\247\346\230\257\347\224\261OCABC\345\206\263\345\256\232\347\232\204\343\200\202\345\217\252\346\234\211N/256\344\270\252\345\271\273\347\201\257\347\211\207\345\200\274\346\230\257\345\217\257\347\224\250\347\232\204\357\274\201\345\234\250\350\260\203\350\257\225\346\227\245\345\277\227\344\270\255\357\274\214\345\246\202\346\236\234\345\255\230\345\234\250\350\257\245\346\266\210\346\201\257\357\274\214\345\210\231\350\246\201\345\220\257\347\224\250\350\257\245\351\200\211"
                        "\351\241\271\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_48->addWidget(chkProvideCustomSlide);

        chkProtectMemoryRegions = new QCheckBox(frame_chk_13);
        chkProtectMemoryRegions->setObjectName("chkProtectMemoryRegions");
#if QT_CONFIG(tooltip)
        chkProtectMemoryRegions->setToolTip(QString::fromUtf8("Some firmwares incorrectly map select memory regions:\n"
"\n"
"\342\200\242 CSM region can be marked as boot services code or data, which leaves it as free memory for XNU kernel.\n"
"\n"
"\342\200\242 MMIO regions can be marked as reserved memory and stay unmapped, but may be required to be accessible at runtime for NVRAM support.\n"
"\n"
"This quirk attempts to fix types of these regions, e.g. ACPI NVS for CSM or MMIO for MMIO.\n"
"\n"
"Note: The necessity of this quirk is determined by artifacts, sleep wake issues, and boot failures. In general only very old firmwares need this quirk.\n"
"\n"
"----\n"
"\n"
"\344\270\200\344\272\233\345\233\272\344\273\266\351\224\231\350\257\257\345\234\260\346\230\240\345\260\204\344\272\206\351\200\211\346\213\251\347\232\204\345\206\205\345\255\230\345\214\272\345\237\237\357\274\232\n"
"\n"
"- CSM\345\214\272\345\237\237\345\217\257\344\273\245\350\242\253\346\240\207\350\256\260\344\270\272\345\274\225\345\257\274\346\234\215\345\212\241\344\273\243\347\240\201\346\210\226"
                        "\346\225\260\346\215\256\357\274\214\350\277\231\344\275\277\345\276\227\345\256\203\346\210\220\344\270\272XNU\345\206\205\346\240\270\347\232\204\350\207\252\347\224\261\345\206\205\345\255\230\343\200\202\n"
"\n"
"- MMIO\345\214\272\345\237\237\345\217\257\344\273\245\350\242\253\346\240\207\350\256\260\344\270\272\344\277\235\347\225\231\345\206\205\345\255\230\357\274\214\345\271\266\344\277\235\346\214\201\344\270\215\346\230\240\345\260\204\357\274\214\344\275\206\345\217\257\350\203\275\351\234\200\350\246\201\345\234\250\350\277\220\350\241\214\346\227\266\350\256\277\351\227\256NVRAM\346\224\257\346\214\201\343\200\202\n"
"\n"
"\350\257\245\351\200\211\351\241\271\350\257\225\345\233\276\345\233\272\345\256\232\350\277\231\344\272\233\345\214\272\345\237\237\347\232\204\347\261\273\345\236\213\357\274\214\344\276\213\345\246\202\357\274\232ACPI NVS\344\273\243\350\241\250CSM\346\210\226MMIO\344\273\243\350\241\250MMIO\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\257\245\351\200\211\351"
                        "\241\271\347\232\204\345\277\205\350\246\201\346\200\247\346\230\257\347\224\261\345\267\245\344\273\266\343\200\201\347\235\241\347\234\240\345\224\244\351\206\222\351\227\256\351\242\230\345\222\214\345\220\257\345\212\250\345\244\261\350\264\245\345\206\263\345\256\232\347\232\204\343\200\202\344\270\200\350\210\254\346\235\245\350\257\264\357\274\214\345\217\252\346\234\211\345\276\210\350\200\201\347\232\204\345\233\272\344\273\266\346\211\215\351\234\200\350\246\201\350\277\231\344\270\252\351\200\211\351\241\271\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_48->addWidget(chkProtectMemoryRegions);

        chkSetupVirtualMap = new QCheckBox(frame_chk_13);
        chkSetupVirtualMap->setObjectName("chkSetupVirtualMap");
#if QT_CONFIG(tooltip)
        chkSetupVirtualMap->setToolTip(QString::fromUtf8("Select firmwares access memory by virtual addresses after SetVirtualAddresses call, which results in early boot crashes. This quirk workarounds the problem by performing early boot identity mapping of assigned virtual addresses to physical memory.\n"
"\n"
"Note: The necessity of this quirk is determined by early boot failures. Currently new firmwares with memory protection support (like OVMF) do not support this quirk due to acidanthera/bugtracker#719.\n"
"\n"
"----\n"
"\n"
"\351\200\211\346\213\251\345\233\272\344\273\266\345\234\250\350\260\203\347\224\250SetVirtualAddresses\345\220\216\346\214\211\350\231\232\346\213\237\345\234\260\345\235\200\350\256\277\351\227\256\345\206\205\345\255\230\357\274\214\345\257\274\350\207\264\346\227\251\346\234\237\345\220\257\345\212\250\345\264\251\346\272\203\343\200\202\350\257\245\351\200\211\351\241\271\351\200\232\350\277\207\345\257\271\345\210\206\351\205\215\347\232\204\350\231\232\346\213\237\345\234\260\345\235\200\345\222\214\347\211\251\347\220\206\345\206\205"
                        "\345\255\230\350\277\233\350\241\214\346\227\251\346\234\237\345\220\257\345\212\250\350\272\253\344\273\275\346\230\240\345\260\204\346\235\245\350\247\243\345\206\263\350\277\231\344\270\252\351\227\256\351\242\230\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\257\245\351\200\211\351\241\271\347\232\204\345\277\205\350\246\201\346\200\247\346\230\257\347\224\261\346\227\251\346\234\237\345\220\257\345\212\250\345\244\261\350\264\245\345\206\263\345\256\232\347\232\204\343\200\202\347\233\256\345\211\215\357\274\214\347\224\261\344\272\216 acidanthera/bugtracker#719\357\274\214\346\224\257\346\214\201\345\206\205\345\255\230\344\277\235\346\212\244\347\232\204\346\226\260\345\233\272\344\273\266\357\274\210\345\246\202 OVMF\357\274\211\344\270\215\346\224\257\346\214\201\350\257\245\351\200\211\351\241\271\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_48->addWidget(chkSetupVirtualMap);

        chkRebuildAppleMemoryMap = new QCheckBox(frame_chk_13);
        chkRebuildAppleMemoryMap->setObjectName("chkRebuildAppleMemoryMap");
#if QT_CONFIG(tooltip)
        chkRebuildAppleMemoryMap->setToolTip(QString::fromUtf8("Apple kernel has several limitations in parsing UEFI memory map:\n"
"\n"
"\342\200\242 Memory map size must not exceed 4096 bytes as Apple kernel maps it as a single 4K page. Since some firmwares have very large memory maps (approximately over 100 entries) Apple kernel will crash at boot.\n"
"\n"
"\342\200\242 Memory attributes table is ignored. EfiRuntimeServicesCode memory statically gets RX permissions, and all other memory types get RW permissions. Since some firmware drivers may write to global variables at runtime, Apple kernel will crash at calling UEFI runtime services, unless driver .data section has EfiRuntimeServicesData type.\n"
"\n"
"To workaround these limitations this quirk applies memory attributes table permissions to memory map passed to Apple kernel and optionally attempts to unify contiguous slots of similar types if the resulting memory map exceeds 4 KB.\n"
"\n"
"Note 1 : Since many firmwares come with incorrect memory protection table this quirk often comes in pair with SyncRuntimePermiss"
                        "ions.\n"
"\n"
"Note 2 : The necessity of this quirk is determined by early boot failures. This quirk replaces EnableWriteUnprotector on firmwares supporting memory attributes table (MAT). This quirk is generally unnecessary when using OpenDuetPkg, but may be required to boot macOS 10.6 and earlier for unclear reasons.\n"
"\n"
"----\n"
"\n"
"\350\213\271\346\236\234\345\206\205\346\240\270\345\234\250\350\247\243\346\236\220UEFI\345\206\205\345\255\230\346\230\240\345\260\204\346\227\266\346\234\211\344\270\200\344\272\233\351\231\220\345\210\266\357\274\232\n"
"\n"
"- \345\206\205\345\255\230\346\230\240\345\260\204\345\244\247\345\260\217\344\270\215\350\203\275\350\266\205\350\277\2074096\345\255\227\350\212\202\357\274\214\345\233\240\344\270\272\350\213\271\346\236\234\345\206\205\346\240\270\345\260\206\345\205\266\346\230\240\345\260\204\344\270\272\344\270\200\344\270\2524K\351\241\265\351\235\242\343\200\202\347\224\261\344\272\216\344\270\200\344\272\233\345\233\272\344\273\266\347\232\204\345\206\205"
                        "\345\255\230\346\230\240\345\260\204\351\235\236\345\270\270\345\244\247\357\274\210\345\244\247\347\272\246\350\266\205\350\277\207100\344\270\252\346\235\241\347\233\256\357\274\211\357\274\214\350\213\271\346\236\234\345\206\205\346\240\270\344\274\232\345\234\250\345\220\257\345\212\250\346\227\266\345\264\251\346\272\203\343\200\202\n"
"\n"
"- \345\206\205\345\255\230\345\261\236\346\200\247\350\241\250\350\242\253\345\277\275\347\225\245\343\200\202EfiRuntimeServicesCode\345\206\205\345\255\230\351\235\231\346\200\201\345\234\260\350\216\267\345\276\227RX\346\235\203\351\231\220\357\274\214\345\205\266\344\273\226\346\211\200\346\234\211\345\206\205\345\255\230\347\261\273\345\236\213\350\216\267\345\276\227RW\346\235\203\351\231\220\343\200\202\347\224\261\344\272\216\344\270\200\344\272\233\345\233\272\344\273\266\351\251\261\345\212\250\345\217\257\350\203\275\344\274\232\345\234\250\350\277\220\350\241\214\346\227\266\345\206\231\345\205\245\345\205\250\345\261\200\345\217\230\351\207\217\357\274\214"
                        "\350\213\271\346\236\234\345\206\205\346\240\270\345\234\250\350\260\203\347\224\250UEFI\350\277\220\350\241\214\346\227\266\346\234\215\345\212\241\346\227\266\345\260\206\344\274\232\345\264\251\346\272\203\357\274\214\351\231\244\351\235\236\351\251\261\345\212\250.data\351\203\250\345\210\206\345\205\267\346\234\211EfiRuntimeServicesData\347\261\273\345\236\213\343\200\202\n"
"\n"
"\344\270\272\344\272\206\350\247\243\345\206\263\350\277\231\344\272\233\351\231\220\345\210\266\357\274\214\350\257\245\351\200\211\351\241\271\345\260\206\345\206\205\345\255\230\345\261\236\346\200\247\350\241\250\347\232\204\346\235\203\351\231\220\345\272\224\347\224\250\345\210\260\344\274\240\351\200\222\347\273\231\350\213\271\346\236\234\345\206\205\346\240\270\347\232\204\345\206\205\345\255\230\346\230\240\345\260\204\344\270\255\357\274\214\345\271\266\344\270\224\345\246\202\346\236\234\344\272\247\347\224\237\347\232\204\345\206\205\345\255\230\346\230\240\345\260\204\350\266\205\350\277\2074KB\357\274\214\345\210\231"
                        "\344\274\232\345\260\235\350\257\225\347\273\237\344\270\200\347\261\273\344\274\274\347\261\273\345\236\213\347\232\204\350\277\236\347\273\255\346\217\222\346\247\275\343\200\202\n"
"\n"
"\346\263\2501\357\274\232\347\224\261\344\272\216\350\256\270\345\244\232\345\233\272\344\273\266\345\270\246\346\234\211\344\270\215\346\255\243\347\241\256\347\232\204\345\206\205\345\255\230\344\277\235\346\212\244\350\241\250\357\274\214\350\257\245\351\200\211\351\241\271\347\273\217\345\270\270\344\270\216SyncRuntimePermissions\351\205\215\345\257\271\344\275\277\347\224\250\343\200\202\n"
"\n"
"\346\263\2502\357\274\232\350\257\245\351\200\211\351\241\271\347\232\204\345\277\205\350\246\201\346\200\247\346\230\257\347\224\261\346\227\251\346\234\237\345\220\257\345\212\250\345\244\261\350\264\245\345\206\263\345\256\232\347\232\204\343\200\202\345\234\250\346\224\257\346\214\201\345\206\205\345\255\230\345\261\236\346\200\247\350\241\250\357\274\210MAT\357\274\211\347\232\204\345\233\272\344\273\266\344\270\212\357\274"
                        "\214\350\257\245\351\200\211\351\241\271\345\217\226\344\273\243\344\272\206EnableWriteUnprotector\343\200\202\345\275\223\344\275\277\347\224\250OpenDuetPkg\346\227\266\357\274\214\350\257\245\351\200\211\351\241\271\344\270\200\350\210\254\346\230\257\344\270\215\351\234\200\350\246\201\347\232\204\357\274\214\344\275\206\345\234\250\345\220\257\345\212\250macOS 10.6\345\222\214\346\233\264\346\227\251\347\232\204\347\211\210\346\234\254\346\227\266\357\274\214\347\224\261\344\272\216\344\270\215\346\270\205\346\245\232\347\232\204\345\216\237\345\233\240\357\274\214\345\217\257\350\203\275\351\234\200\350\246\201\350\277\231\344\270\252\351\200\211\351\241\271\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_48->addWidget(chkRebuildAppleMemoryMap);

        chkSignalAppleOS = new QCheckBox(frame_chk_13);
        chkSignalAppleOS->setObjectName("chkSignalAppleOS");
#if QT_CONFIG(tooltip)
        chkSignalAppleOS->setToolTip(QString::fromUtf8("This quirk is useful on Mac firmwares, which behave differently in different OS. \n"
"\n"
"For example, it is supposed to enable Intel GPU in Windows and Linux in some dual-GPU MacBook models.\n"
"\n"
"----\n"
"\n"
"\350\257\245\351\200\211\351\241\271\345\234\250Mac\345\233\272\344\273\266\344\270\212\345\276\210\346\234\211\347\224\250\357\274\214\345\234\250\344\270\215\345\220\214\347\232\204\346\223\215\344\275\234\347\263\273\347\273\237\344\270\255\350\241\250\347\216\260\344\270\215\345\220\214\343\200\202\n"
"\n"
"\344\276\213\345\246\202\357\274\214\345\234\250\346\237\220\344\272\233\345\217\214GPU\347\232\204MacBook\346\234\272\345\236\213\344\270\255\357\274\214\345\256\203\345\272\224\350\257\245\345\217\257\344\273\245\345\234\250Windows\345\222\214Linux\344\270\255\345\220\257\347\224\250Intel GPU\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_48->addWidget(chkSignalAppleOS);

        chkSyncRuntimePermissions = new QCheckBox(frame_chk_13);
        chkSyncRuntimePermissions->setObjectName("chkSyncRuntimePermissions");
#if QT_CONFIG(tooltip)
        chkSyncRuntimePermissions->setToolTip(QString::fromUtf8("Some firmwares either fail to properly handle runtime permissions:\n"
"\n"
"\342\200\242 They incorrectly mark OpenRuntime as not executable in the memory map.\n"
"\n"
"\342\200\242 They incorrectly mark OpenRuntime as not executable in the memory attributes table.\n"
"\n"
"\342\200\242 They lose entries from the memory attributes table after OpenRuntime is loaded.\n"
"\n"
"\342\200\242 They mark items in the memory attributes table as read-write-execute.\n"
"\n"
"This quirk tries to update memory map and memory attributes table to correct this.\n"
"\n"
"Note: The necessity of this quirk is determined by early boot failures either in macOS or in Linux/Windows. In general only firmwares released in 2018 or later are affected.\n"
"\n"
"----\n"
"\n"
"\346\234\211\344\272\233\345\233\272\344\273\266\344\270\215\350\203\275\346\255\243\347\241\256\345\244\204\347\220\206\350\277\220\350\241\214\346\227\266\347\232\204\346\235\203\351\231\220\357\274\232\n"
"\n"
"- \345\256\203\344\273\254\345\234\250\345\206\205\345"
                        "\255\230\346\230\240\345\260\204\344\270\255\351\224\231\350\257\257\345\234\260\345\260\206OpenRuntime\346\240\207\350\256\260\344\270\272\344\270\215\345\217\257\346\211\247\350\241\214\343\200\202\n"
"\n"
"- \345\256\203\344\273\254\345\234\250\345\206\205\345\255\230\345\261\236\346\200\247\350\241\250\344\270\255\351\224\231\350\257\257\345\234\260\345\260\206OpenRuntime\346\240\207\350\256\260\344\270\272\344\270\215\345\217\257\346\211\247\350\241\214\343\200\202\n"
"\n"
"- \345\256\203\344\273\254\345\234\250\345\212\240\350\275\275 OpenRuntime \345\220\216\357\274\214\344\270\242\345\244\261\344\272\206\345\206\205\345\255\230\345\261\236\346\200\247\350\241\250\344\270\255\347\232\204\346\235\241\347\233\256\343\200\202\n"
"\n"
"- \345\256\203\344\273\254\345\260\206\345\206\205\345\255\230\345\261\236\346\200\247\350\241\250\344\270\255\347\232\204\351\241\271\347\233\256\346\240\207\350\256\260\344\270\272\350\257\273-\345\206\231-\346\211\247\350\241\214\343\200\202\n"
"\n"
"\350\277\231\344\270\252"
                        "\351\200\211\351\241\271\350\257\225\345\233\276\346\233\264\346\226\260\345\206\205\345\255\230\346\230\240\345\260\204\345\222\214\345\206\205\345\255\230\345\261\236\346\200\247\350\241\250\346\235\245\347\272\240\346\255\243\350\277\231\344\270\252\351\227\256\351\242\230\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\257\245\351\200\211\351\241\271\347\232\204\345\277\205\350\246\201\346\200\247\346\230\257\347\224\261macOS\346\210\226Linux/Windows\344\270\255\347\232\204\346\227\251\346\234\237\345\220\257\345\212\250\345\244\261\350\264\245\345\206\263\345\256\232\347\232\204\343\200\202\344\270\200\350\210\254\346\235\245\350\257\264\357\274\214\345\217\252\346\234\2112018\345\271\264\346\210\226\344\273\245\345\220\216\345\217\221\345\270\203\347\232\204\345\233\272\344\273\266\346\211\215\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_48->addWidget(chkSyncRuntimePermissions);


        gridLayout_6->addWidget(frame_chk_13, 1, 1, 1, 1);

        frame_edit_9 = new QFrame(tabBooter3);
        frame_edit_9->setObjectName("frame_edit_9");
        frame_edit_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_9->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_39 = new QVBoxLayout(frame_edit_9);
        verticalLayout_39->setObjectName("verticalLayout_39");
        horizontalLayout_56 = new QHBoxLayout();
        horizontalLayout_56->setObjectName("horizontalLayout_56");
        label_41 = new QLabel(frame_edit_9);
        label_41->setObjectName("label_41");
        label_41->setMaximumSize(QSize(16777215, 16777215));
#if QT_CONFIG(tooltip)
        label_41->setToolTip(QString::fromUtf8("This option overrides the maximum slide of 255 by a user specified value between 1 and 254 inclusive when ProvideCustomSlide is enabled. \n"
"\n"
"It is believed that modern firmwares allocate pool memory from top to bottom,effectively resulting in free memory at the time of slide scanning being later used as temporary memory during kernel loading. In case those memory are unavailable, this option can stop evaluating higher slides.\n"
"\n"
"Note: The necessity of this quirk is determined by random boot failure when ProvideCustomSlide is enabled and the randomized slide fall into the unavailable range. When AppleDebug is enabled, usually the debug log may contain messages like AAPL: [EB|\342\200\230LD:LKC] } Err(0x9). To find the optimal value, manually append slide=X to boot-args and log the largest one that won\342\200\231t cause boot failure.\n"
"\n"
"----\n"
"\n"
"\345\275\223ProvideCustomSlide\350\242\253\345\220\257\347\224\250\346\227\266\357\274\214\350\277\231\344\270\252\351\200\211\351\241\271\345\217"
                        "\257\344\273\245\351\200\232\350\277\207\347\224\250\346\210\267\346\214\207\345\256\232\347\232\2041\345\210\260254\344\271\213\351\227\264\347\232\204\345\200\274\346\235\245\350\246\206\347\233\226255\347\232\204\346\234\200\345\244\247\345\271\273\347\201\257\347\211\207\343\200\202\n"
"\n"
"\344\272\272\344\273\254\350\256\244\344\270\272\347\216\260\344\273\243\345\233\272\344\273\266\344\274\232\344\273\216\344\270\212\345\210\260\344\270\213\345\210\206\351\205\215\346\261\240\345\206\205\345\255\230\357\274\214\346\234\211\346\225\210\345\234\260\345\257\274\350\207\264\345\234\250\346\211\253\346\217\217\345\271\273\347\201\257\347\211\207\346\227\266\347\232\204\347\251\272\351\227\262\345\206\205\345\255\230\350\242\253\347\224\250\344\275\234\345\206\205\346\240\270\345\212\240\350\275\275\346\227\266\347\232\204\344\270\264\346\227\266\345\206\205\345\255\230\343\200\202\345\246\202\346\236\234\350\277\231\344\272\233\345\206\205\345\255\230\344\270\215\345\217\257\347\224\250\357\274\214\350\277"
                        "\231\344\270\252\351\200\211\351\241\271\345\217\257\344\273\245\345\201\234\346\255\242\350\257\204\344\274\260\350\276\203\351\253\230\347\232\204\345\271\273\347\201\257\347\211\207\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\275\223ProvideCustomSlide\350\242\253\345\220\257\347\224\250\346\227\266\357\274\214\350\257\245\351\200\211\351\241\271\347\232\204\345\277\205\350\246\201\346\200\247\346\230\257\347\224\261\351\232\217\346\234\272\345\220\257\345\212\250\345\244\261\350\264\245\345\206\263\345\256\232\347\232\204\357\274\214\345\271\266\344\270\224\351\232\217\346\234\272\347\232\204\345\271\273\347\201\257\347\211\207\350\220\275\345\205\245\344\270\215\345\217\257\347\224\250\347\232\204\350\214\203\345\233\264\343\200\202\n"
"\n"
"\345\275\223\345\220\257\347\224\250AppleDebug\346\227\266\357\274\214\351\200\232\345\270\270\350\260\203\350\257\225\346\227\245\345\277\227\345\217\257\350\203\275\344\274\232\345\214\205\345\220\253AAPL\357\274\232[EB|'LD:LKC]}Err(0x9)\350\277\231"
                        "\346\240\267\347\232\204\346\266\210\346\201\257\343\200\202\350\246\201\346\211\276\345\210\260\346\234\200\344\275\263\345\200\274\357\274\214\350\257\267\346\211\213\345\212\250\345\260\206 slide=X \350\277\275\345\212\240\345\210\260 boot-args \344\270\255\357\274\214\345\271\266\350\256\260\345\275\225\344\270\215\344\274\232\345\257\274\350\207\264\345\220\257\345\212\250\345\244\261\350\264\245\347\232\204\346\234\200\345\244\247\345\200\274\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_56->addWidget(label_41);

        editIntProvideMaxSlide = new QLineEdit(frame_edit_9);
        editIntProvideMaxSlide->setObjectName("editIntProvideMaxSlide");
        editIntProvideMaxSlide->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_56->addWidget(editIntProvideMaxSlide);


        verticalLayout_39->addLayout(horizontalLayout_56);

        horizontalLayout_57 = new QHBoxLayout();
        horizontalLayout_57->setObjectName("horizontalLayout_57");
        label_120 = new QLabel(frame_edit_9);
        label_120->setObjectName("label_120");

        horizontalLayout_57->addWidget(label_120);

        editIntResizeAppleGpuBars = new QLineEdit(frame_edit_9);
        editIntResizeAppleGpuBars->setObjectName("editIntResizeAppleGpuBars");
        editIntResizeAppleGpuBars->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_57->addWidget(editIntResizeAppleGpuBars);


        verticalLayout_39->addLayout(horizontalLayout_57);


        gridLayout_6->addWidget(frame_edit_9, 1, 2, 1, 1);

        gridLayout_67 = new QGridLayout();
        gridLayout_67->setObjectName("gridLayout_67");
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_67->addItem(horizontalSpacer_12, 0, 0, 1, 1);

        comboBoxBooter = new QComboBox(tabBooter3);
        comboBoxBooter->setObjectName("comboBoxBooter");
        comboBoxBooter->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        comboBoxBooter->setEditable(false);

        gridLayout_67->addWidget(comboBoxBooter, 0, 2, 1, 1);

        label_123 = new QLabel(tabBooter3);
        label_123->setObjectName("label_123");
        label_123->setMaximumSize(QSize(150, 16777215));

        gridLayout_67->addWidget(label_123, 0, 1, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_67->addItem(horizontalSpacer_13, 0, 3, 1, 1);


        gridLayout_6->addLayout(gridLayout_67, 0, 0, 1, 3);

        tabBooter->addTab(tabBooter3, QString());

        gridLayout_53->addWidget(tabBooter, 0, 0, 1, 1);

        tabTotal->addTab(tab_3, QString());
        tabTotal->setTabText(tabTotal->indexOf(tab_3), QString::fromUtf8("Booter"));
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_8 = new QGridLayout(tab_2);
        gridLayout_8->setObjectName("gridLayout_8");
        tabDP = new QTabWidget(tab_2);
        tabDP->setObjectName("tabDP");
        tabDP->setTabShape(QTabWidget::TabShape::Rounded);
        tabDP->setDocumentMode(true);
        tabDP1 = new QWidget();
        tabDP1->setObjectName("tabDP1");
        gridLayout_9 = new QGridLayout(tabDP1);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_dp_add = new QGridLayout();
        gridLayout_dp_add->setObjectName("gridLayout_dp_add");
        table_dp_add0 = new QTableWidget(tabDP1);
        if (table_dp_add0->columnCount() < 1)
            table_dp_add0->setColumnCount(1);
        table_dp_add0->setObjectName("table_dp_add0");
        table_dp_add0->setColumnCount(1);

        gridLayout_dp_add->addWidget(table_dp_add0, 0, 0, 1, 1);

        table_dp_add = new QTableWidget(tabDP1);
        if (table_dp_add->columnCount() < 3)
            table_dp_add->setColumnCount(3);
        table_dp_add->setObjectName("table_dp_add");
        table_dp_add->setColumnCount(3);

        gridLayout_dp_add->addWidget(table_dp_add, 0, 2, 1, 1);

        vlDPAdd = new QVBoxLayout();
        vlDPAdd->setObjectName("vlDPAdd");
        btnDPAdd_Add = new QToolButton(tabDP1);
        btnDPAdd_Add->setObjectName("btnDPAdd_Add");
        btnDPAdd_Add->setMaximumSize(QSize(20, 16777215));
        btnDPAdd_Add->setIconSize(QSize(20, 20));

        vlDPAdd->addWidget(btnDPAdd_Add);

        btnDPAdd_Del = new QToolButton(tabDP1);
        btnDPAdd_Del->setObjectName("btnDPAdd_Del");
        btnDPAdd_Del->setMaximumSize(QSize(20, 16777215));
        btnDPAdd_Del->setIconSize(QSize(20, 20));

        vlDPAdd->addWidget(btnDPAdd_Del);


        gridLayout_dp_add->addLayout(vlDPAdd, 0, 3, 1, 1);

        vlDPAdd0 = new QVBoxLayout();
        vlDPAdd0->setObjectName("vlDPAdd0");
        btnDPAdd_Add0 = new QToolButton(tabDP1);
        btnDPAdd_Add0->setObjectName("btnDPAdd_Add0");
        btnDPAdd_Add0->setMaximumSize(QSize(20, 16777215));
        btnDPAdd_Add0->setIconSize(QSize(20, 20));

        vlDPAdd0->addWidget(btnDPAdd_Add0);

        btnDPAdd_Del0 = new QToolButton(tabDP1);
        btnDPAdd_Del0->setObjectName("btnDPAdd_Del0");
        btnDPAdd_Del0->setMaximumSize(QSize(20, 16777215));
        btnDPAdd_Del0->setIconSize(QSize(20, 20));

        vlDPAdd0->addWidget(btnDPAdd_Del0);

        btnDPAddPreset = new QToolButton(tabDP1);
        btnDPAddPreset->setObjectName("btnDPAddPreset");
        btnDPAddPreset->setMaximumSize(QSize(20, 16777215));

        vlDPAdd0->addWidget(btnDPAddPreset);


        gridLayout_dp_add->addLayout(vlDPAdd0, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_dp_add, 0, 0, 1, 1);

        tabDP->addTab(tabDP1, QString());
        tabDP2 = new QWidget();
        tabDP2->setObjectName("tabDP2");
        gridLayout_10 = new QGridLayout(tabDP2);
        gridLayout_10->setObjectName("gridLayout_10");
        table_dp_del0 = new QTableWidget(tabDP2);
        if (table_dp_del0->columnCount() < 1)
            table_dp_del0->setColumnCount(1);
        table_dp_del0->setObjectName("table_dp_del0");
        table_dp_del0->setColumnCount(1);

        gridLayout_10->addWidget(table_dp_del0, 0, 0, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        btnDPDel_Add0 = new QToolButton(tabDP2);
        btnDPDel_Add0->setObjectName("btnDPDel_Add0");
        btnDPDel_Add0->setMaximumSize(QSize(20, 16777215));
        btnDPDel_Add0->setIconSize(QSize(20, 20));

        verticalLayout_11->addWidget(btnDPDel_Add0);

        btnDPDel_Del0 = new QToolButton(tabDP2);
        btnDPDel_Del0->setObjectName("btnDPDel_Del0");
        btnDPDel_Del0->setMaximumSize(QSize(20, 16777215));
        btnDPDel_Del0->setIconSize(QSize(20, 20));

        verticalLayout_11->addWidget(btnDPDel_Del0);


        gridLayout_10->addLayout(verticalLayout_11, 0, 1, 1, 1);

        table_dp_del = new QTableWidget(tabDP2);
        if (table_dp_del->columnCount() < 1)
            table_dp_del->setColumnCount(1);
        table_dp_del->setObjectName("table_dp_del");
        table_dp_del->setColumnCount(1);

        gridLayout_10->addWidget(table_dp_del, 0, 2, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        btnDPDel_Add = new QToolButton(tabDP2);
        btnDPDel_Add->setObjectName("btnDPDel_Add");
        btnDPDel_Add->setMaximumSize(QSize(20, 16777215));
        btnDPDel_Add->setIconSize(QSize(20, 20));

        verticalLayout_12->addWidget(btnDPDel_Add);

        btnDPDel_Del = new QToolButton(tabDP2);
        btnDPDel_Del->setObjectName("btnDPDel_Del");
        btnDPDel_Del->setMaximumSize(QSize(20, 16777215));
        btnDPDel_Del->setIconSize(QSize(20, 20));

        verticalLayout_12->addWidget(btnDPDel_Del);


        gridLayout_10->addLayout(verticalLayout_12, 0, 3, 1, 1);

        tabDP->addTab(tabDP2, QString());

        gridLayout_8->addWidget(tabDP, 0, 0, 1, 1);

        tabTotal->addTab(tab_2, QString());
        tabTotal->setTabText(tabTotal->indexOf(tab_2), QString::fromUtf8("DeviceProperties"));
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout_11 = new QGridLayout(tab_4);
        gridLayout_11->setObjectName("gridLayout_11");
        tabKernel = new QTabWidget(tab_4);
        tabKernel->setObjectName("tabKernel");
        tabKernel->setTabShape(QTabWidget::TabShape::Rounded);
        tabKernel->setDocumentMode(true);
        tabKernel1 = new QWidget();
        tabKernel1->setObjectName("tabKernel1");
        gridLayout_12 = new QGridLayout(tabKernel1);
        gridLayout_12->setObjectName("gridLayout_12");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        btnKernelAdd_Add = new QToolButton(tabKernel1);
        btnKernelAdd_Add->setObjectName("btnKernelAdd_Add");
        btnKernelAdd_Add->setMaximumSize(QSize(20, 16777215));
        btnKernelAdd_Add->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnKernelAdd_Add);

        btnKernelAdd_Del = new QToolButton(tabKernel1);
        btnKernelAdd_Del->setObjectName("btnKernelAdd_Del");
        btnKernelAdd_Del->setMaximumSize(QSize(20, 16777215));
        btnKernelAdd_Del->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnKernelAdd_Del);

        btnKernelAdd_Up = new QToolButton(tabKernel1);
        btnKernelAdd_Up->setObjectName("btnKernelAdd_Up");
        btnKernelAdd_Up->setMaximumSize(QSize(20, 16777215));
        btnKernelAdd_Up->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnKernelAdd_Up);

        btnKernelAdd_Down = new QToolButton(tabKernel1);
        btnKernelAdd_Down->setObjectName("btnKernelAdd_Down");
        btnKernelAdd_Down->setMaximumSize(QSize(20, 16777215));
        btnKernelAdd_Down->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnKernelAdd_Down);

        btnOpenKextDir = new QToolButton(tabKernel1);
        btnOpenKextDir->setObjectName("btnOpenKextDir");
        btnOpenKextDir->setMaximumSize(QSize(20, 16777215));
        btnOpenKextDir->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(btnOpenKextDir);

        btnKextPreset = new QToolButton(tabKernel1);
        btnKextPreset->setObjectName("btnKextPreset");
        btnKextPreset->setMaximumSize(QSize(20, 16777215));

        verticalLayout_3->addWidget(btnKextPreset);


        gridLayout_12->addLayout(verticalLayout_3, 0, 1, 1, 1);

        table_kernel_add = new QTableWidget(tabKernel1);
        if (table_kernel_add->columnCount() < 8)
            table_kernel_add->setColumnCount(8);
        table_kernel_add->setObjectName("table_kernel_add");
        table_kernel_add->setStyleSheet(QString::fromUtf8("QTableWidget::item::selected     \n"
"{\n"
"    color:white;                       \n"
"    background:rgb(0, 124, 221);               \n"
"}\n"
""));
        table_kernel_add->setRowCount(0);
        table_kernel_add->setColumnCount(8);

        gridLayout_12->addWidget(table_kernel_add, 0, 0, 1, 1);

        tabKernel->addTab(tabKernel1, QString());
        tabKernel2 = new QWidget();
        tabKernel2->setObjectName("tabKernel2");
        gridLayout_13 = new QGridLayout(tabKernel2);
        gridLayout_13->setObjectName("gridLayout_13");
        table_kernel_block = new QTableWidget(tabKernel2);
        if (table_kernel_block->columnCount() < 6)
            table_kernel_block->setColumnCount(6);
        table_kernel_block->setObjectName("table_kernel_block");
        table_kernel_block->setRowCount(0);
        table_kernel_block->setColumnCount(6);

        gridLayout_13->addWidget(table_kernel_block, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        btnKernelBlock_Add = new QToolButton(tabKernel2);
        btnKernelBlock_Add->setObjectName("btnKernelBlock_Add");
        btnKernelBlock_Add->setMaximumSize(QSize(20, 16777215));
        btnKernelBlock_Add->setIconSize(QSize(20, 20));

        verticalLayout_6->addWidget(btnKernelBlock_Add);

        btnKernelBlock_Del = new QToolButton(tabKernel2);
        btnKernelBlock_Del->setObjectName("btnKernelBlock_Del");
        btnKernelBlock_Del->setMaximumSize(QSize(20, 16777215));
        btnKernelBlock_Del->setIconSize(QSize(20, 20));

        verticalLayout_6->addWidget(btnKernelBlock_Del);


        gridLayout_13->addLayout(verticalLayout_6, 0, 1, 1, 1);

        tabKernel->addTab(tabKernel2, QString());
        tabKernel3 = new QWidget();
        tabKernel3->setObjectName("tabKernel3");
        gridLayout_42 = new QGridLayout(tabKernel3);
        gridLayout_42->setObjectName("gridLayout_42");
        table_kernel_Force = new QTableWidget(tabKernel3);
        if (table_kernel_Force->columnCount() < 9)
            table_kernel_Force->setColumnCount(9);
        table_kernel_Force->setObjectName("table_kernel_Force");
        table_kernel_Force->setRowCount(0);
        table_kernel_Force->setColumnCount(9);

        gridLayout_42->addWidget(table_kernel_Force, 0, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        btnKernelForce_Add = new QToolButton(tabKernel3);
        btnKernelForce_Add->setObjectName("btnKernelForce_Add");
        btnKernelForce_Add->setMaximumSize(QSize(20, 16777215));
        btnKernelForce_Add->setIconSize(QSize(20, 20));

        verticalLayout_7->addWidget(btnKernelForce_Add);

        btnKernelForce_Del = new QToolButton(tabKernel3);
        btnKernelForce_Del->setObjectName("btnKernelForce_Del");
        btnKernelForce_Del->setMaximumSize(QSize(20, 16777215));
        btnKernelForce_Del->setIconSize(QSize(20, 20));

        verticalLayout_7->addWidget(btnKernelForce_Del);


        gridLayout_42->addLayout(verticalLayout_7, 0, 1, 1, 1);

        tabKernel->addTab(tabKernel3, QString());
        tabKernel4 = new QWidget();
        tabKernel4->setObjectName("tabKernel4");
        gridLayout_14 = new QGridLayout(tabKernel4);
        gridLayout_14->setObjectName("gridLayout_14");
        table_kernel_patch = new QTableWidget(tabKernel4);
        if (table_kernel_patch->columnCount() < 14)
            table_kernel_patch->setColumnCount(14);
        table_kernel_patch->setObjectName("table_kernel_patch");
        table_kernel_patch->setRowCount(0);
        table_kernel_patch->setColumnCount(14);

        gridLayout_14->addWidget(table_kernel_patch, 0, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        btnKernelPatchAdd = new QToolButton(tabKernel4);
        btnKernelPatchAdd->setObjectName("btnKernelPatchAdd");
        btnKernelPatchAdd->setMaximumSize(QSize(20, 16777215));
        btnKernelPatchAdd->setIconSize(QSize(20, 20));

        verticalLayout_8->addWidget(btnKernelPatchAdd);

        btnKernelPatchDel = new QToolButton(tabKernel4);
        btnKernelPatchDel->setObjectName("btnKernelPatchDel");
        btnKernelPatchDel->setMaximumSize(QSize(20, 16777215));
        btnKernelPatchDel->setIconSize(QSize(20, 20));

        verticalLayout_8->addWidget(btnKernelPatchDel);

        btnPresetKernelPatch = new QToolButton(tabKernel4);
        btnPresetKernelPatch->setObjectName("btnPresetKernelPatch");
        btnPresetKernelPatch->setMaximumSize(QSize(20, 16777215));

        verticalLayout_8->addWidget(btnPresetKernelPatch);


        gridLayout_14->addLayout(verticalLayout_8, 0, 1, 1, 1);

        tabKernel->addTab(tabKernel4, QString());
        tabKernel5 = new QWidget();
        tabKernel5->setObjectName("tabKernel5");
        gridLayout_36 = new QGridLayout(tabKernel5);
        gridLayout_36->setObjectName("gridLayout_36");
        frame_chk_27 = new QFrame(tabKernel5);
        frame_chk_27->setObjectName("frame_chk_27");
        frame_chk_27->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_27->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_40 = new QVBoxLayout(frame_chk_27);
        verticalLayout_40->setObjectName("verticalLayout_40");
        chkDummyPowerManagement = new QCheckBox(frame_chk_27);
        chkDummyPowerManagement->setObjectName("chkDummyPowerManagement");
#if QT_CONFIG(tooltip)
        chkDummyPowerManagement->setToolTip(QString::fromUtf8("Note 1 : This option is a preferred alternative to NullCpuPowerManagement.kext for CPUs without native power management driver in macOS.\n"
"\n"
"Note 2 : While this option is usually needed to disable AppleIntelCpuPowerManagement on unsupported platforms,it can also be used to disable this kext in other situations (e.g. with Cpuid1Data left blank).\n"
"\n"
"----\n"
"\n"
"\346\263\2501\357\274\232\345\257\271\344\272\216macOS\344\270\255\346\262\241\346\234\211\345\216\237\347\224\237\347\224\265\346\272\220\347\256\241\347\220\206\351\251\261\345\212\250\347\232\204CPU\346\235\245\350\257\264\357\274\214\350\277\231\344\270\252\351\200\211\351\241\271\346\230\257NullCpuPowerManagement.kext\347\232\204\351\246\226\351\200\211\346\233\277\344\273\243\345\223\201\343\200\202\n"
"\n"
"\346\263\2502\357\274\232\345\234\250\344\270\215\346\224\257\346\214\201\347\232\204\345\271\263\345\217\260\344\270\212\357\274\214\350\277\231\344\270\252\351\200\211\351\241\271\351\200\232\345\270\270\346\230\257\347\224\250\346"
                        "\235\245\347\246\201\347\224\250AppleIntelCpuPowerManagement\347\232\204\357\274\214\344\275\206\345\234\250\345\205\266\344\273\226\346\203\205\345\206\265\344\270\213\357\274\214\345\256\203\344\271\237\345\217\257\344\273\245\347\224\250\346\235\245\347\246\201\347\224\250\350\277\231\344\270\252kext(\344\276\213\345\246\202Cpuid1Data\347\225\231\347\251\272)\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_40->addWidget(chkDummyPowerManagement);


        gridLayout_36->addWidget(frame_chk_27, 0, 0, 1, 1);

        frame_edit_22 = new QFrame(tabKernel5);
        frame_edit_22->setObjectName("frame_edit_22");
        frame_edit_22->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_22->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_41 = new QVBoxLayout(frame_edit_22);
        verticalLayout_41->setObjectName("verticalLayout_41");
        horizontalLayout_58 = new QHBoxLayout();
        horizontalLayout_58->setObjectName("horizontalLayout_58");
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_58->addItem(horizontalSpacer_14);

        label_126 = new QLabel(frame_edit_22);
        label_126->setObjectName("label_126");

        horizontalLayout_58->addWidget(label_126);

        mycboxEmulate = new QComboBox(frame_edit_22);
        mycboxEmulate->addItem(QString());
        mycboxEmulate->addItem(QString());
        mycboxEmulate->addItem(QString());
        mycboxEmulate->addItem(QString());
        mycboxEmulate->addItem(QString());
        mycboxEmulate->addItem(QString());
        mycboxEmulate->addItem(QString());
        mycboxEmulate->setObjectName("mycboxEmulate");
        mycboxEmulate->setEditable(false);

        horizontalLayout_58->addWidget(mycboxEmulate);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_58->addItem(horizontalSpacer_15);


        verticalLayout_41->addLayout(horizontalLayout_58);

        horizontalLayout_59 = new QHBoxLayout();
        horizontalLayout_59->setObjectName("horizontalLayout_59");
        label = new QLabel(frame_edit_22);
        label->setObjectName("label");
#if QT_CONFIG(tooltip)
        label->setToolTip(QString::fromUtf8("This property serves for two needs:\n"
"\n"
"\342\200\242 Enabling support of an unsupported CPU model.\n"
"\n"
"\342\200\242 Enabling XCPM support for an unsupported CPU variant.\n"
"\n"
"Normally it is only the value of EAX that needs to be taken care of, since it represents the full CPUID. The remaining bytes are to be left as zeroes. Byte order is Little Endian, so for example, C3 06 03 00 stands for CPUID 0x0306C3 (Haswell).\n"
"\n"
"For XCPM support it is recommended to use the following combinations.\n"
"\n"
"\342\200\242 Haswell-E (0x0306F2) to Haswell (0x0306C3):\n"
"Cpuid1Data: C3 06 03 00 00 00 00 00 00 00 00 00 00 00 00 00\n"
"Cpuid1Mask: FF FF FF FF 00 00 00 00 00 00 00 00 00 00 00 00\n"
"\n"
"\342\200\242 Broadwell-E (0x0406F1) to Broadwell (0x0306D4):\n"
"Cpuid1Data: D4 06 03 00 00 00 00 00 00 00 00 00 00 00 00 00\n"
"Cpuid1Mask: FF FF FF FF 00 00 00 00 00 00 00 00 00 00 00 00\n"
"\n"
"Keep in mind, that the following configurations are unsupported (at least out of the box):\n"
"\342\200\242 Con"
                        "sumer Ivy Bridge (0x0306A9) as Apple disabled XCPM for Ivy Bridge and recommends legacy power management for these CPUs. You will need to manually patch _xcpm_bootstrap to force XCPM on these CPUs instead of using this option.\n"
"\n"
"\342\200\242 Low-end CPUs (e.g. Haswell+ Pentium) as they are not supported properly by macOS. Legacy hacks for older models can be found in the Special NOTES section of acidanthera/bugtracker#365.\n"
"\n"
"----\n"
"\n"
"\350\277\231\344\270\252\345\261\236\346\200\247\346\234\211\344\270\244\344\270\252\344\275\234\347\224\250\343\200\202\n"
"\n"
"- \345\220\257\347\224\250\345\257\271\344\270\215\346\224\257\346\214\201\347\232\204CPU\345\236\213\345\217\267\347\232\204\346\224\257\346\214\201\343\200\202\n"
"\n"
"- \345\220\257\347\224\250XCPM\345\257\271\344\270\215\346\224\257\346\214\201\347\232\204CPU\345\236\213\345\217\267\347\232\204\346\224\257\346\214\201\343\200\202\n"
"\n"
"\351\200\232\345\270\270\345\217\252\351\234\200\350\246\201\347\205\247\351\241\276EAX\347\232"
                        "\204\345\200\274\357\274\214\345\233\240\344\270\272\345\256\203\344\273\243\350\241\250\345\256\214\346\225\264\347\232\204CPUID\343\200\202\345\205\266\344\275\231\347\232\204\345\255\227\350\212\202\350\246\201\347\225\231\344\275\234\351\233\266\343\200\202\345\255\227\350\212\202\351\241\272\345\272\217\344\270\272Little Endian\357\274\214\344\276\213\345\246\202\357\274\214C3 06 03 00\344\273\243\350\241\250CPUID 0x0306C3\357\274\210Haswell\357\274\211\343\200\202\n"
"\n"
"\345\257\271\344\272\216XCPM\347\232\204\346\224\257\346\214\201\357\274\214\345\273\272\350\256\256\344\275\277\347\224\250\344\273\245\344\270\213\347\273\204\345\220\210\343\200\202\n"
"\n"
"- Haswell-E(0x0306F2)\350\275\254Haswell(0x0306C3)\357\274\232\n"
"Cpuid1Data: C3 06 03 00 00 00 00 00 00 00 00 00 00 00 00 00\n"
"Cpuid1Mask: FF FF FF FF 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0000\n"
"\n"
"- Broadwell-E (0x0406F1) \350\207\263 Broadwell (0x0306D4)\357\274\232\n"
"Cpuid1Data: D4 06 03 00 00 00 00 00 00 0"
                        "0 00 00 00 00 00 00\n"
"Cpuid1Mask: FF FF FF FF 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0000\n"
"\n"
"\350\257\267\350\256\260\344\275\217\357\274\214\344\273\245\344\270\213\351\205\215\347\275\256\346\230\257\344\270\215\346\224\257\346\214\201\347\232\204\357\274\210\350\207\263\345\260\221\346\230\257\345\274\200\347\256\261\345\215\263\347\224\250\357\274\211\357\274\232\n"
"- \346\266\210\350\264\271\347\272\247Ivy Bridge (0x0306A9)\357\274\214\345\233\240\344\270\272Apple\347\246\201\347\224\250\344\272\206Ivy Bridge\347\232\204XCPM\357\274\214\345\271\266\345\273\272\350\256\256\350\277\231\344\272\233CPU\344\275\277\347\224\250\344\274\240\347\273\237\347\232\204\347\224\265\346\272\220\347\256\241\347\220\206\343\200\202\346\202\250\351\234\200\350\246\201\346\211\213\345\212\250\344\277\256\350\241\245_xcpm_bootstrap\357\274\214\344\273\245\345\274\272\345\210\266\350\277\231\344\272\233CPU\344\275\277\347\224\250XCPM\357\274\214\350\200\214\344\270\215\346\230\257\344\275\277"
                        "\347\224\250\346\255\244\351\200\211\351\241\271\343\200\202\n"
"\n"
"- \344\275\216\347\253\257CPU(\345\246\202Haswell+ Pentium)\357\274\214\345\233\240\344\270\272\345\256\203\344\273\254\344\270\215\345\217\227macOS\347\232\204\346\255\243\347\241\256\346\224\257\346\214\201\343\200\202\346\227\247\345\236\213\345\217\267\347\232\204\351\201\227\347\225\231\351\273\221\345\256\242\345\217\257\344\273\245\345\234\250 acidanthera/bugtracker#365 \347\232\204 Special NOTES \351\203\250\345\210\206\346\211\276\345\210\260\343\200\202\n"
"\n"
"\n"
""));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_59->addWidget(label);

        editDatCpuid1Data = new QLineEdit(frame_edit_22);
        editDatCpuid1Data->setObjectName("editDatCpuid1Data");

        horizontalLayout_59->addWidget(editDatCpuid1Data);


        verticalLayout_41->addLayout(horizontalLayout_59);

        horizontalLayout_60 = new QHBoxLayout();
        horizontalLayout_60->setObjectName("horizontalLayout_60");
        label_2 = new QLabel(frame_edit_22);
        label_2->setObjectName("label_2");
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QString::fromUtf8("When each Cpuid1Mask bit is set to 0, the original CPU bit is used, otherwise set bits take the value of Cpuid1Data."));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_60->addWidget(label_2);

        editDatCpuid1Mask = new QLineEdit(frame_edit_22);
        editDatCpuid1Mask->setObjectName("editDatCpuid1Mask");

        horizontalLayout_60->addWidget(editDatCpuid1Mask);


        verticalLayout_41->addLayout(horizontalLayout_60);

        horizontalLayout_61 = new QHBoxLayout();
        horizontalLayout_61->setObjectName("horizontalLayout_61");
        label_97 = new QLabel(frame_edit_22);
        label_97->setObjectName("label_97");
#if QT_CONFIG(tooltip)
        label_97->setToolTip(QString::fromUtf8("Note: Refer to Add MaxKernel description for matching logic."));
#endif // QT_CONFIG(tooltip)
        label_97->setText(QString::fromUtf8("MaxKernel"));

        horizontalLayout_61->addWidget(label_97);

        editMaxKernel = new QLineEdit(frame_edit_22);
        editMaxKernel->setObjectName("editMaxKernel");

        horizontalLayout_61->addWidget(editMaxKernel);


        verticalLayout_41->addLayout(horizontalLayout_61);

        horizontalLayout_62 = new QHBoxLayout();
        horizontalLayout_62->setObjectName("horizontalLayout_62");
        label_98 = new QLabel(frame_edit_22);
        label_98->setObjectName("label_98");
#if QT_CONFIG(tooltip)
        label_98->setToolTip(QString::fromUtf8("Note: Refer to Add MaxKernel description for matching logic."));
#endif // QT_CONFIG(tooltip)
        label_98->setText(QString::fromUtf8("MinKernel"));

        horizontalLayout_62->addWidget(label_98);

        editMinKernel = new QLineEdit(frame_edit_22);
        editMinKernel->setObjectName("editMinKernel");

        horizontalLayout_62->addWidget(editMinKernel);


        verticalLayout_41->addLayout(horizontalLayout_62);


        gridLayout_36->addWidget(frame_edit_22, 0, 1, 1, 1);

        tabKernel->addTab(tabKernel5, QString());
        tabKernel6 = new QWidget();
        tabKernel6->setObjectName("tabKernel6");
        gridLayout_44 = new QGridLayout(tabKernel6);
        gridLayout_44->setObjectName("gridLayout_44");
        frame_chk_14 = new QFrame(tabKernel6);
        frame_chk_14->setObjectName("frame_chk_14");
        frame_chk_14->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_14->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_42 = new QVBoxLayout(frame_chk_14);
        verticalLayout_42->setObjectName("verticalLayout_42");
        chkAppleCpuPmCfgLock = new QCheckBox(frame_chk_14);
        chkAppleCpuPmCfgLock->setObjectName("chkAppleCpuPmCfgLock");
#if QT_CONFIG(tooltip)
        chkAppleCpuPmCfgLock->setToolTip(QString::fromUtf8("Certain firmwares lock PKG_CST_CONFIG_CONTROL MSR register. \n"
"\n"
"To check its state one can use bundled VerifyMsrE2 tool. Select firmwares have this register locked on some cores only.\n"
"\n"
"As modern firmwares provide CFG Lock setting, which allows configuring PKG_CST_CONFIG_CONTROL MSR register lock, this option should be avoided whenever possible. For several APTIO firmwares not displaying CFG Lock setting in the GUI it is possible to access the option directly:\n"
"\n"
"(a) Download UEFITool and IFR-Extractor.\n"
"(b) Open your firmware image in UEFITool and find CFG Lock unicode string. If it is not present, your firmware may not have this option and you should stop.\n"
"(c) Extract the Setup.bin PE32 Image Section (the one UEFITool found) through Extract Body menu option.\n"
"(d) Run IFR-Extractor on the extracted file (e.g. ./ifrextract Setup.bin Setup.txt).\n"
"(e) Find CFG Lock, VarStoreInfo (VarOffset/VarName): in Setup.txt and remember the offset right after it (e.g. 0x123).\n"
"(f) Download"
                        " and run Modified GRUB Shell compiled by brainsucker or use a newer version by datasone.\n"
"(g) Enter setup_var 0x123 0x00 command, where 0x123 should be replaced by your actual offset, and reboot.\n"
"\n"
"Warning: Variable offsets are unique not only to each motherboard but even to its firmware version. Never ever try to use an offset without checking.\n"
"\n"
"----\n"
"\n"
"\346\237\220\344\272\233\345\233\272\344\273\266\344\274\232\351\224\201\345\256\232 PKG_CST_CONFIG_CONTROL MSR \345\257\204\345\255\230\345\231\250\343\200\202\n"
"\n"
"\350\246\201\346\243\200\346\237\245\345\256\203\347\232\204\347\212\266\346\200\201\357\274\214\345\217\257\344\273\245\344\275\277\347\224\250\351\231\204\345\270\246\347\232\204VerifyMsrE2\345\267\245\345\205\267\343\200\202\346\237\220\344\272\233\345\233\272\344\273\266\345\217\252\345\234\250\346\237\220\344\272\233\346\240\270\345\277\203\344\270\212\351\224\201\345\256\232\344\272\206\350\277\231\344\270\252\345\257\204\345\255\230\345\231\250\343\200\202\n"
"\n"
""
                        "\347\224\261\344\272\216\347\216\260\344\273\243\345\233\272\344\273\266\346\217\220\344\276\233\344\272\206CFG\351\224\201\345\256\232\350\256\276\347\275\256\357\274\214\345\205\201\350\256\270\351\205\215\347\275\256PKG_CST_CONFIG_CONTROL MSR\345\257\204\345\255\230\345\231\250\347\232\204\351\224\201\345\256\232\357\274\214\346\211\200\344\273\245\345\272\224\350\257\245\345\260\275\351\207\217\351\201\277\345\205\215\350\277\231\344\270\252\351\200\211\351\241\271\343\200\202\345\257\271\344\272\216\344\270\200\344\272\233\346\262\241\346\234\211\345\234\250GUI\344\270\255\346\230\276\347\244\272CFG Lock\350\256\276\347\275\256\347\232\204APTIO\345\233\272\344\273\266\357\274\214\345\217\257\344\273\245\347\233\264\346\216\245\350\256\277\351\227\256\350\257\245\351\200\211\351\241\271\343\200\202\n"
"\n"
"(a) \344\270\213\350\275\275UEFITool\345\222\214IFR-Extractor\343\200\202\n"
"(b) \345\234\250UEFITool\344\270\255\346\211\223\345\274\200\346\202\250\347\232\204\345\233\272\344\273\266\351\225\234\345"
                        "\203\217\357\274\214\345\271\266\346\211\276\345\210\260CFG Lock unicode\345\255\227\347\254\246\344\270\262\343\200\202\345\246\202\346\236\234\345\256\203\344\270\215\345\255\230\345\234\250\357\274\214\344\275\240\347\232\204\345\233\272\344\273\266\345\217\257\350\203\275\346\262\241\346\234\211\350\277\231\344\270\252\351\200\211\351\241\271\357\274\214\344\275\240\345\272\224\350\257\245\345\201\234\346\255\242\343\200\202\n"
"(c)\351\200\232\350\277\207Extract Body\350\217\234\345\215\225\351\200\211\351\241\271\346\217\220\345\217\226Setup.bin PE32\351\225\234\345\203\217\351\203\250\345\210\206\357\274\210UEFITool\346\211\276\345\210\260\347\232\204\351\202\243\344\270\252\357\274\211\343\200\202\n"
"(d) \345\234\250\346\217\220\345\217\226\347\232\204\346\226\207\344\273\266\344\270\212\350\277\220\350\241\214IFR-Extractor(\344\276\213\345\246\202\357\274\232./ifrextract Setup.bin Setup.txt)\343\200\202\n"
"(e) \345\234\250Setup.txt\344\270\255\346\211\276\345\210\260CFG Lock, VarStoreInfo (VarOffset"
                        "/VarName): \345\271\266\350\256\260\344\275\217\345\256\203\345\220\216\351\235\242\347\232\204\345\201\217\347\247\273\351\207\217(\345\246\2020x123)\343\200\202\n"
"(f) \344\270\213\350\275\275\345\271\266\350\277\220\350\241\214\347\224\261 brainsucker \347\274\226\350\257\221\347\232\204 Modified GRUB Shell \346\210\226\344\275\277\347\224\250 datasone \347\232\204\346\226\260\347\211\210\346\234\254\343\200\202\n"
"(g) \350\276\223\345\205\245setup_var 0x123 0x00\345\221\275\344\273\244\357\274\214\345\205\266\344\270\2550x123\345\272\224\350\257\245\350\242\253\344\275\240\347\232\204\345\256\236\351\231\205\345\201\217\347\247\273\351\207\217\346\211\200\345\217\226\344\273\243\357\274\214\347\204\266\345\220\216\351\207\215\346\226\260\345\220\257\345\212\250\343\200\202\n"
"\n"
"\350\255\246\345\221\212\357\274\232\345\217\230\351\207\217\345\201\217\347\247\273\344\270\215\344\273\205\345\257\271\346\257\217\344\270\252\344\270\273\346\235\277\357\274\214\347\224\232\350\207\263\345\257\271\345\205\266"
                        "\345\233\272\344\273\266\347\211\210\346\234\254\351\203\275\346\230\257\345\224\257\344\270\200\347\232\204\343\200\202\345\215\203\344\270\207\344\270\215\350\246\201\345\234\250\346\262\241\346\234\211\346\243\200\346\237\245\347\232\204\346\203\205\345\206\265\344\270\213\345\260\235\350\257\225\344\275\277\347\224\250\345\201\217\347\247\273\351\207\217\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_42->addWidget(chkAppleCpuPmCfgLock);

        chkAppleXcpmCfgLock = new QCheckBox(frame_chk_14);
        chkAppleXcpmCfgLock->setObjectName("chkAppleXcpmCfgLock");
#if QT_CONFIG(tooltip)
        chkAppleXcpmCfgLock->setToolTip(QString::fromUtf8("Note: This option should be avoided whenever possible. See AppleCpuPmCfgLock description for more details.\n"
"\n"
"----\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\272\224\345\260\275\345\217\257\350\203\275\351\201\277\345\205\215\344\275\277\347\224\250\350\257\245\351\200\211\351\241\271\343\200\202\346\233\264\345\244\232\347\273\206\350\212\202\350\257\267\345\217\202\350\247\201AppleCpuPmCfgLock\346\217\217\350\277\260\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_42->addWidget(chkAppleXcpmCfgLock);

        chkAppleXcpmExtraMsrs = new QCheckBox(frame_chk_14);
        chkAppleXcpmExtraMsrs->setObjectName("chkAppleXcpmExtraMsrs");
#if QT_CONFIG(tooltip)
        chkAppleXcpmExtraMsrs->setToolTip(QString::fromUtf8("This is normally used in conjunction with Emulate section on Haswell-E, Broadwell-E, Skylake-SP, and similar CPUs. More details on the XCPM patches are outlined in acidanthera bugtracker#365.\n"
"\n"
"Note: Additional not provided patches will be required for Ivy Bridge or Pentium CPUs. It is recommended to use AppleIntelCpuPowerManagement.kext for the former.\n"
"\n"
"----\n"
"\n"
"\350\277\231\351\200\232\345\270\270\344\270\216Haswell-E\343\200\201Broadwell-E\343\200\201Skylake-SP\345\222\214\347\261\273\344\274\274CPU\347\232\204Emulate\351\203\250\345\210\206\344\270\200\350\265\267\344\275\277\347\224\250\343\200\202\346\233\264\345\244\232\345\205\263\344\272\216XCPM\350\241\245\344\270\201\347\232\204\347\273\206\350\212\202\357\274\214\350\257\267\345\217\202\350\200\203 acidanthera bugtracker#365\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\257\271\344\272\216Ivy Bridge\346\210\226Pentium CPU\357\274\214\345\260\206\351\234\200\350\246\201\351\242\235\345\244\226\347\232\204\346\234\252"
                        "\346\217\220\344\276\233\347\232\204\350\241\245\344\270\201\343\200\202\345\273\272\350\256\256\345\211\215\350\200\205\344\275\277\347\224\250AppleIntelCpuPowerManagement.kext\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_42->addWidget(chkAppleXcpmExtraMsrs);

        chkAppleXcpmForceBoost = new QCheckBox(frame_chk_14);
        chkAppleXcpmForceBoost->setObjectName("chkAppleXcpmForceBoost");
#if QT_CONFIG(tooltip)
        chkAppleXcpmForceBoost->setToolTip(QString::fromUtf8("This patch writes 0xFF00 to MSR_IA32_PERF_CONTROL (0x199), effectively setting maximum multiplier for all the time.\n"
"\n"
"Note: While this may increase the performance, this patch is strongly discouraged on all systems but those explicitly dedicated to scientific or media calculations. In general only certain Xeon models benefit from the patch.\n"
"\n"
"----\n"
"\n"
"\350\277\231\344\270\252\350\241\245\344\270\201\345\260\2060xFF00\345\206\231\345\205\245MSR_IA32_PERF_CONTROL (0x199)\357\274\214\346\234\211\346\225\210\345\234\260\350\256\276\347\275\256\346\211\200\346\234\211\346\227\266\351\227\264\347\232\204\346\234\200\345\244\247\344\271\230\346\225\260\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\231\275\347\204\266\350\277\231\345\217\257\350\203\275\344\274\232\346\217\220\351\253\230\346\200\247\350\203\275\357\274\214\344\275\206\345\274\272\347\203\210\344\270\215\345\273\272\350\256\256\345\234\250\346\211\200\346\234\211\347\263\273\347\273\237\344\270\212\344\275\277\347\224"
                        "\250\350\257\245\350\241\245\344\270\201\357\274\214\344\275\206\346\230\216\347\241\256\344\270\223\347\224\250\344\272\216\347\247\221\345\255\246\346\210\226\345\252\222\344\275\223\350\256\241\347\256\227\347\232\204\347\263\273\347\273\237\351\231\244\345\244\226\343\200\202\344\270\200\350\210\254\346\203\205\345\206\265\344\270\213\357\274\214\345\217\252\346\234\211\346\237\220\344\272\233Xeon\345\236\213\345\217\267\350\203\275\344\273\216\350\257\245\350\241\245\344\270\201\344\270\255\345\217\227\347\233\212\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_42->addWidget(chkAppleXcpmForceBoost);

        chkCustomSMBIOSGuid = new QCheckBox(frame_chk_14);
        chkCustomSMBIOSGuid->setObjectName("chkCustomSMBIOSGuid");
#if QT_CONFIG(tooltip)
        chkCustomSMBIOSGuid->setToolTip(QString::fromUtf8(" Performs GUID patching for UpdateSMBIOSMode Custom mode. Usually relevant for Dell laptops.\n"
"\n"
"----\n"
"\n"
" \344\270\272UpdateSMBIOSMode\350\207\252\345\256\232\344\271\211\346\250\241\345\274\217\346\211\247\350\241\214GUID\350\241\245\344\270\201\343\200\202\351\200\232\345\270\270\344\270\216\346\210\264\345\260\224\347\254\224\350\256\260\346\234\254\347\224\265\350\204\221\347\233\270\345\205\263\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_42->addWidget(chkCustomSMBIOSGuid);

        chkDisableIoMapper = new QCheckBox(frame_chk_14);
        chkDisableIoMapper->setObjectName("chkDisableIoMapper");
#if QT_CONFIG(tooltip)
        chkDisableIoMapper->setToolTip(QString::fromUtf8("Note: This option is a preferred alternative to deleting DMAR ACPI table and disabling VT-d in firmware preferences,which does not break VT-d support in other systems in case they need it.\n"
"\n"
"----\n"
"\n"
"\346\263\250\357\274\232\350\257\245\351\200\211\351\241\271\346\230\257\345\210\240\351\231\244DMAR ACPI\350\241\250\345\222\214\345\234\250\345\233\272\344\273\266\351\246\226\351\200\211\351\241\271\344\270\255\347\246\201\347\224\250VT-d\347\232\204\351\246\226\351\200\211\346\226\271\346\241\210\357\274\214\345\234\250\345\205\266\344\273\226\347\263\273\347\273\237\351\234\200\350\246\201VT-d\346\224\257\346\214\201\347\232\204\346\203\205\345\206\265\344\270\213\357\274\214\350\257\245\351\200\211\351\241\271\344\270\215\344\274\232\347\240\264\345\235\217\345\256\203\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_42->addWidget(chkDisableIoMapper);

        chkDisableLinkeditJettison = new QCheckBox(frame_chk_14);
        chkDisableLinkeditJettison->setObjectName("chkDisableLinkeditJettison");
#if QT_CONFIG(tooltip)
        chkDisableLinkeditJettison->setToolTip(QString::fromUtf8("This option lets Lilu.kext and possibly some others function in macOS Big Sur with best performance without keepsyms=1 boot argument.\n"
"\n"
"----\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\345\217\257\344\273\245\350\256\251Lilu.kext\345\222\214\345\205\266\344\273\226\344\270\200\344\272\233\345\217\257\350\203\275\347\232\204\351\200\211\351\241\271\345\234\250macOS Big Sur\344\270\255\344\273\245\346\234\200\344\275\263\346\200\247\350\203\275\350\277\220\350\241\214\357\274\214\350\200\214\344\270\215\351\234\200\350\246\201keepyms=1\347\232\204\345\220\257\345\212\250\345\217\202\346\225\260\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_42->addWidget(chkDisableLinkeditJettison);

        chkDisableRtcChecksum = new QCheckBox(frame_chk_14);
        chkDisableRtcChecksum->setObjectName("chkDisableRtcChecksum");
#if QT_CONFIG(tooltip)
        chkDisableRtcChecksum->setToolTip(QString::fromUtf8("Note 1 : This option will not protect other areas from being overwritten, see RTCMemoryFixup kernel extension if this is desired.\n"
"\n"
"Note 2 : This option will not protect areas from being overwritten at firmware stage (e.g. macOS bootloader), see AppleRtcRam protocol description if this is desired.\n"
"\n"
"----\n"
"\n"
"\346\263\2501\357\274\232\350\277\231\344\270\252\351\200\211\351\241\271\344\270\215\344\274\232\344\277\235\346\212\244\345\205\266\344\273\226\345\214\272\345\237\237\344\270\215\350\242\253\350\246\206\347\233\226\357\274\214\345\246\202\346\236\234\351\234\200\350\246\201\357\274\214\350\257\267\345\217\202\350\200\203RTCMemoryFixup\345\206\205\346\240\270\346\211\251\345\261\225\343\200\202\n"
"\n"
"\346\263\2502 : \350\277\231\344\270\252\351\200\211\351\241\271\344\270\215\344\274\232\344\277\235\346\212\244\345\233\272\344\273\266\351\230\266\346\256\265\347\232\204\345\214\272\345\237\237\344\270\215\350\242\253\350\246\206\347\233\226(\344\276\213\345\246\202macOS bootloader)\357"
                        "\274\214\345\246\202\346\236\234\351\234\200\350\246\201\347\232\204\350\257\235\357\274\214\350\257\267\347\234\213AppleRtcRam\345\215\217\350\256\256\346\217\217\350\277\260\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_42->addWidget(chkDisableRtcChecksum);

        chkExtendBTFeatureFlags = new QCheckBox(frame_chk_14);
        chkExtendBTFeatureFlags->setObjectName("chkExtendBTFeatureFlags");
#if QT_CONFIG(tooltip)
        chkExtendBTFeatureFlags->setToolTip(QString::fromUtf8("Note: This option is a substitution for BT4LEContinuityFixup.kext, which does not function properly due to late patching progress.\n"
"\n"
"----\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\277\231\344\270\252\351\200\211\351\241\271\346\230\257BT4LEContinuityFixup.kext\347\232\204\346\233\277\344\273\243\345\223\201\357\274\214\347\224\261\344\272\216\350\241\245\344\270\201\350\277\233\345\272\246\350\276\203\346\231\232\357\274\214BT4LEContinuityFixup.kext\346\227\240\346\263\225\346\255\243\345\270\270\350\277\220\350\241\214\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_42->addWidget(chkExtendBTFeatureFlags);


        gridLayout_44->addWidget(frame_chk_14, 1, 0, 1, 1);

        frame_chk_15 = new QFrame(tabKernel6);
        frame_chk_15->setObjectName("frame_chk_15");
        frame_chk_15->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_15->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_43 = new QVBoxLayout(frame_chk_15);
        verticalLayout_43->setObjectName("verticalLayout_43");
        chkExternalDiskIcons = new QCheckBox(frame_chk_15);
        chkExternalDiskIcons->setObjectName("chkExternalDiskIcons");
#if QT_CONFIG(tooltip)
        chkExternalDiskIcons->setToolTip(QString::fromUtf8("Note: This option should be avoided whenever possible. Modern firmwares usually have compatible AHCI controllers.\n"
"\n"
"----\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\272\224\345\260\275\345\217\257\350\203\275\351\201\277\345\205\215\344\275\277\347\224\250\350\257\245\351\200\211\351\241\271\343\200\202\347\216\260\344\273\243\345\233\272\344\273\266\351\200\232\345\270\270\346\234\211\345\205\274\345\256\271\347\232\204AHCI\346\216\247\345\210\266\345\231\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_43->addWidget(chkExternalDiskIcons);

        chkForceSecureBootScheme = new QCheckBox(frame_chk_15);
        chkForceSecureBootScheme->setObjectName("chkForceSecureBootScheme");
#if QT_CONFIG(tooltip)
        chkForceSecureBootScheme->setToolTip(QString::fromUtf8("Note: This option is required on virtual machines when using SecureBootModel different from x86legacy.\n"
"\n"
"----\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\275\223\344\275\277\347\224\250\344\270\215\345\220\214\344\272\216x86legacy\347\232\204SecureBootModel\346\227\266\357\274\214\350\231\232\346\213\237\346\234\272\351\234\200\350\246\201\350\277\231\344\270\252\351\200\211\351\241\271\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_43->addWidget(chkForceSecureBootScheme);

        chkIncreasePciBarSize = new QCheckBox(frame_chk_15);
        chkIncreasePciBarSize->setObjectName("chkIncreasePciBarSize");
#if QT_CONFIG(tooltip)
        chkIncreasePciBarSize->setToolTip(QString::fromUtf8("Type: plist boolean\n"
"Requirement: 10.10\n"
"\n"
"Description: Allows IOPCIFamily to boot with 2 GB PCI BARs.\n"
"\n"
"Normally macOS restricts PCI BARs to 1 GB. Enabling this option (still) does not let macOS actually use PCI devices with larger BARs.\n"
"Note: This option should be avoided whenever possible. A need for this option indicates misconfigured or defective firmware.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\350\246\201\346\261\202\357\274\23210.10\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\205\201\350\256\270IOPCIFamily\347\224\2502GB\347\232\204PCI BAR\345\220\257\345\212\250\343\200\202\n"
"\n"
"\351\200\232\345\270\270\357\274\214macOS\345\260\206PCI BAR\351\231\220\345\210\266\345\234\2501GB\343\200\202\345\220\257\347\224\250\350\277\231\344\270\252\351\200\211\351\241\271\357\274\210\344\273\215\347\204\266\357\274\211\344\270\215\344\274\232\350\256\251macOS\345\256\236\351\231\205\344\275\277\347\224\250\345\205\267\346\234\211"
                        "\346\233\264\345\244\247BAR\347\232\204PCI\350\256\276\345\244\207\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\217\252\350\246\201\346\234\211\345\217\257\350\203\275\357\274\214\345\260\261\345\272\224\350\257\245\351\201\277\345\205\215\344\275\277\347\224\250\350\277\231\344\270\252\351\200\211\351\241\271\343\200\202\345\257\271\350\277\231\344\270\252\351\200\211\351\241\271\347\232\204\351\234\200\346\261\202\346\230\257\345\257\271\344\272\216\351\202\243\344\272\233\351\205\215\347\275\256\351\224\231\350\257\257\346\210\226\346\234\211\347\274\272\351\231\267\347\232\204\345\233\272\344\273\266\343\200\202"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        chkIncreasePciBarSize->setStatusTip(QString::fromUtf8(" Increases 32-bit PCI bar size in IOPCIFamily from 1 to 4 GBs."));
#endif // QT_CONFIG(statustip)

        verticalLayout_43->addWidget(chkIncreasePciBarSize);

        chkLapicKernelPanic = new QCheckBox(frame_chk_15);
        chkLapicKernelPanic->setObjectName("chkLapicKernelPanic");
#if QT_CONFIG(tooltip)
        chkLapicKernelPanic->setToolTip(QString::fromUtf8("Disables kernel panic on LAPIC interrupts.\n"
"\n"
"----\n"
"\n"
"\347\246\201\347\224\250LAPIC\344\270\255\346\226\255\347\232\204\345\206\205\346\240\270\345\264\251\346\272\203\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_43->addWidget(chkLapicKernelPanic);

        chkLegacyCommpage = new QCheckBox(frame_chk_15);
        chkLegacyCommpage->setObjectName("chkLegacyCommpage");
#if QT_CONFIG(tooltip)
        chkLegacyCommpage->setToolTip(QString::fromUtf8("Type: plist boolean\n"
"\n"
"Requirement: 10.4 - 10.6\n"
"\n"
"Description: Replaces the default 64-bit commpage bcopy implementation with one that does not require SSSE3, useful for legacy platforms. This prevents a commpage no match for last panic due to no available 64-bit bcopy functions that do not require SSSE3.\n"
"----\n"
"\347\261\273\345\236\213:plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\350\246\201\346\261\202:10.4 - 10.6\n"
"\n"
"\346\217\217\350\277\260:\347\224\250\344\270\200\344\270\252\344\270\215\351\234\200\350\246\201SSSE3\347\232\204\345\256\236\347\216\260\346\233\277\346\215\242\351\273\230\350\256\244\347\232\20464\344\275\215commpage bcopy\345\256\236\347\216\260\357\274\214\345\257\271\346\227\247\345\271\263\345\217\260\346\234\211\347\224\250\343\200\202\350\277\231\351\230\262\346\255\242\344\272\206\347\224\261\344\272\216\346\262\241\346\234\211\344\270\215\351\234\200\350\246\201SSSE3\347\232\204\345\217\257\347\224\25064\344\275\215bcopy\345\207\275\346\225\260\350\200"
                        "\214\345\257\274\350\207\264\347\232\204commpage\344\270\216\344\270\212\346\254\241\346\255\273\346\234\272\344\270\215\345\214\271\351\205\215\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_43->addWidget(chkLegacyCommpage);

        chkPanicNoKextDump = new QCheckBox(frame_chk_15);
        chkPanicNoKextDump->setObjectName("chkPanicNoKextDump");
#if QT_CONFIG(tooltip)
        chkPanicNoKextDump->setToolTip(QString::fromUtf8("Requirement: 10.13 (not required for older)\n"
"\n"
"Description: Prevent kernel from printing kext dump in the panic log preventing from observing panic details.\n"
"\n"
"Affects 10.13 and above.\n"
"\n"
"----\n"
"\n"
"\350\246\201\346\261\202\357\274\232 10.13 (10.13\344\273\245\344\270\213\344\270\215\351\234\200\350\246\201)\n"
"\n"
"\346\217\217\350\277\260\357\274\232\351\230\262\346\255\242\345\206\205\346\240\270\345\234\250\345\264\251\346\272\203\346\227\245\345\277\227\344\270\255\346\211\223\345\215\260kext dump\357\274\214\351\230\262\346\255\242\350\247\202\345\257\237\345\264\251\346\272\203\347\273\206\350\212\202\343\200\202\n"
"\n"
"\345\275\261\345\223\21510.13\345\217\212\344\273\245\344\270\212\347\211\210\346\234\254\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_43->addWidget(chkPanicNoKextDump);

        chkPowerTimeoutKernelPanic = new QCheckBox(frame_chk_15);
        chkPowerTimeoutKernelPanic->setObjectName("chkPowerTimeoutKernelPanic");
#if QT_CONFIG(tooltip)
        chkPowerTimeoutKernelPanic->setToolTip(QString::fromUtf8("An additional security measure was added to macOS Catalina (10.15) causing kernel panic on power change timeout for Apple drivers. \n"
"\n"
"Sometimes it may cause issues on misconfigured hardware, notably digital audio, which sometimes fails to wake up. \n"
"\n"
"For debug kernels setpowerstate_panic=0 boot argument should be used, which is otherwise equivalent to this quirk.\n"
"\n"
"----\n"
"\n"
"macOS Catalina(10.15)\344\270\255\345\242\236\345\212\240\344\272\206\344\270\200\351\241\271\345\256\211\345\205\250\346\216\252\346\226\275\357\274\214\345\257\274\350\207\264\350\213\271\346\236\234\351\251\261\345\212\250\345\234\250\345\205\205\347\224\265\350\266\205\346\227\266\345\220\216\345\207\272\347\216\260\345\206\205\346\240\270\345\264\251\346\272\203\343\200\202\n"
"\n"
"\346\234\211\346\227\266\345\217\257\350\203\275\344\274\232\345\234\250\351\205\215\347\275\256\351\224\231\350\257\257\347\232\204\347\241\254\344\273\266\344\270\212\351\200\240\346\210\220\351\227\256\351\242\230\357\274\214\345"
                        "\260\244\345\205\266\346\230\257\346\225\260\345\255\227\351\237\263\351\242\221\357\274\214\346\234\211\346\227\266\344\274\232\346\227\240\346\263\225\345\224\244\351\206\222\343\200\202\n"
"\n"
"\345\257\271\344\272\216\350\260\203\350\257\225\345\206\205\346\240\270\345\272\224\350\257\245\344\275\277\347\224\250setpowerstate_panic=0\345\220\257\345\212\250\345\217\202\346\225\260\357\274\214\345\220\246\345\210\231\347\233\270\345\275\223\344\272\216\350\277\231\344\270\252\351\200\211\351\241\271\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_43->addWidget(chkPowerTimeoutKernelPanic);

        chkProvideCurrentCpuInfo = new QCheckBox(frame_chk_15);
        chkProvideCurrentCpuInfo->setObjectName("chkProvideCurrentCpuInfo");

        verticalLayout_43->addWidget(chkProvideCurrentCpuInfo);

        chkThirdPartyDrives = new QCheckBox(frame_chk_15);
        chkThirdPartyDrives->setObjectName("chkThirdPartyDrives");
#if QT_CONFIG(tooltip)
        chkThirdPartyDrives->setToolTip(QString::fromUtf8("Note: This option may be avoided on user preference. NVMe SSDs are compatible without the change. \n"
"\n"
"For AHCI SSDs on modern macOS version there is a dedicated built-in utility called trimforce. Starting from 10.15 this utility creates EnableTRIM variable in APPLE_BOOT_VARIABLE_GUID namespace with 01 00 00 00 value.\n"
"\n"
"----\n"
"\n"
"\346\263\250\346\204\217\357\274\232\346\240\271\346\215\256\347\224\250\346\210\267\347\232\204\345\226\234\345\245\275\357\274\214\350\277\231\344\270\252\351\200\211\351\241\271\345\217\257\344\273\245\351\201\277\345\205\215\343\200\202NVMe\345\233\272\346\200\201\347\241\254\347\233\230\346\227\240\351\234\200\346\233\264\346\224\271\345\215\263\345\217\257\345\205\274\345\256\271\343\200\202\n"
"\n"
"\345\257\271\344\272\216\347\216\260\344\273\243macOS\347\211\210\346\234\254\347\232\204AHCI\345\233\272\346\200\201\347\241\254\347\233\230\357\274\214\346\234\211\344\270\200\344\270\252\344\270\223\351\227\250\347\232\204\345\206\205\347\275\256\345\267\245\345\205"
                        "\267\345\217\253\345\201\232trimforce\343\200\202\344\273\21610.15\345\274\200\345\247\213\357\274\214\350\277\231\344\270\252\345\267\245\345\205\267\344\274\232\345\234\250APPLE_BOOT_VARIABLE_GUID\345\221\275\345\220\215\347\251\272\351\227\264\344\270\255\345\210\233\345\273\272EnableTRIM\345\217\230\351\207\217\357\274\214\345\200\274\344\270\27201 00 00 00\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_43->addWidget(chkThirdPartyDrives);

        chkXhciPortLimit = new QCheckBox(frame_chk_15);
        chkXhciPortLimit->setObjectName("chkXhciPortLimit");
#if QT_CONFIG(tooltip)
        chkXhciPortLimit->setToolTip(QString::fromUtf8("Note: This option should be avoided whenever possible. USB port limit is imposed by the amount of used bits in locationID format and there is no possible way to workaround this without heavy OS modification. \n"
"\n"
"The only valid solution is to limit the amount of used ports to 15 (discarding some). More details can be found on AppleLife.ru.\n"
"\n"
"----\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\272\224\345\260\275\345\217\257\350\203\275\351\201\277\345\205\215\344\275\277\347\224\250\350\257\245\351\200\211\351\241\271\343\200\202USB\347\253\257\345\217\243\351\231\220\345\210\266\346\230\257\347\224\261locationID\346\240\274\345\274\217\344\270\255\344\275\277\347\224\250\347\232\204\344\275\215\346\225\260\345\206\263\345\256\232\347\232\204\357\274\214\345\246\202\346\236\234\344\270\215\345\257\271\346\223\215\344\275\234\347\263\273\347\273\237\350\277\233\350\241\214\345\244\247\351\207\217\344\277\256\346\224\271\357\274\214\345\260\261\346\262\241\346\234\211\345\212\236\346\263\225\350\247"
                        "\243\345\206\263\350\277\231\344\270\252\351\227\256\351\242\230\343\200\202\n"
"\n"
"\345\224\257\344\270\200\346\234\211\346\225\210\347\232\204\350\247\243\345\206\263\346\226\271\346\241\210\346\230\257\345\260\206\344\275\277\347\224\250\347\232\204\347\253\257\345\217\243\346\225\260\351\207\217\351\231\220\345\210\266\344\270\27215\344\270\252\357\274\210\344\270\242\345\274\203\344\270\200\344\272\233\357\274\211\343\200\202\346\233\264\345\244\232\347\273\206\350\212\202\345\217\257\344\273\245\345\234\250AppleLife.ru\344\270\212\346\211\276\345\210\260\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_43->addWidget(chkXhciPortLimit);


        gridLayout_44->addWidget(frame_chk_15, 1, 1, 1, 1);

        frame_edit_10 = new QFrame(tabKernel6);
        frame_edit_10->setObjectName("frame_edit_10");
        frame_edit_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_10->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_44 = new QVBoxLayout(frame_edit_10);
        verticalLayout_44->setObjectName("verticalLayout_44");
        horizontalLayout_63 = new QHBoxLayout();
        horizontalLayout_63->setObjectName("horizontalLayout_63");
        label_13 = new QLabel(frame_edit_10);
        label_13->setObjectName("label_13");
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QString::fromUtf8("Type: plist integer\n"
"\n"
"Requirement: 10.14 (not required for older)\n"
"\n"
"Description: Set trim timeout in microseconds for APFS filesystems on SSDs.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\n"
"\350\246\201\346\261\202\357\274\23210.14\357\274\210\346\227\247\347\211\210\344\270\215\351\234\200\350\246\201\357\274\211\343\200\202\n"
"\n"
"\346\217\217\350\277\260\357\274\232\344\270\272SSD\344\270\212\347\232\204APFS\346\226\207\344\273\266\347\263\273\347\273\237\350\256\276\347\275\256\344\277\256\345\211\252\350\266\205\346\227\266\357\274\214\345\215\225\344\275\215\346\230\257\345\276\256\347\247\222\343\200\202\n"
"\n"
""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_13->setStatusTip(QString::fromUtf8("Set trim timeout in microseconds for APFS filesystems on SSDs."));
#endif // QT_CONFIG(statustip)

        horizontalLayout_63->addWidget(label_13);

        editIntSetApfsTrimTimeout = new QLineEdit(frame_edit_10);
        editIntSetApfsTrimTimeout->setObjectName("editIntSetApfsTrimTimeout");
        editIntSetApfsTrimTimeout->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_63->addWidget(editIntSetApfsTrimTimeout);


        verticalLayout_44->addLayout(horizontalLayout_63);


        gridLayout_44->addWidget(frame_edit_10, 1, 2, 1, 1);

        gridLayout_70 = new QGridLayout();
        gridLayout_70->setObjectName("gridLayout_70");
        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_70->addItem(horizontalSpacer_30, 0, 3, 1, 1);

        comboBoxKernel = new QComboBox(tabKernel6);
        comboBoxKernel->setObjectName("comboBoxKernel");
        comboBoxKernel->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        comboBoxKernel->setEditable(false);

        gridLayout_70->addWidget(comboBoxKernel, 0, 2, 1, 1);

        label_124 = new QLabel(tabKernel6);
        label_124->setObjectName("label_124");
        label_124->setMaximumSize(QSize(150, 16777215));

        gridLayout_70->addWidget(label_124, 0, 1, 1, 1);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_70->addItem(horizontalSpacer_29, 0, 0, 1, 1);


        gridLayout_44->addLayout(gridLayout_70, 0, 0, 1, 3);

        tabKernel->addTab(tabKernel6, QString());
        tabKernel7 = new QWidget();
        tabKernel7->setObjectName("tabKernel7");
        gridLayout_60 = new QGridLayout(tabKernel7);
        gridLayout_60->setObjectName("gridLayout_60");
        frame_chk_16 = new QFrame(tabKernel7);
        frame_chk_16->setObjectName("frame_chk_16");
        frame_chk_16->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_16->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_45 = new QVBoxLayout(frame_chk_16);
        verticalLayout_45->setObjectName("verticalLayout_45");
        chkCustomKernel = new QCheckBox(frame_chk_16);
        chkCustomKernel->setObjectName("chkCustomKernel");

        verticalLayout_45->addWidget(chkCustomKernel);

        chkFuzzyMatch = new QCheckBox(frame_chk_16);
        chkFuzzyMatch->setObjectName("chkFuzzyMatch");
#if QT_CONFIG(tooltip)
        chkFuzzyMatch->setToolTip(QString::fromUtf8("On macOS 10.6 and earlier kernelcache filename has a checksum, which essentially is adler32 from SMBIOS product name and EfiBoot device path. \n"
"\n"
"On certain firmwares EfiBoot device path differs between UEFI and macOS due to ACPI or hardware specifics, rendering kernelcache checksum as always different.\n"
"\n"
"This setting allows matching the latest kernelcache with a suitable architecture when the kernelcache without suffix is unavailable, improving macOS 10.6 boot performance on several platforms.\n"
"\n"
"----\n"
"\n"
"\345\234\250macOS 10.6\345\222\214\346\233\264\346\227\251\347\232\204\347\211\210\346\234\254\344\270\255\357\274\214kernelcache\346\226\207\344\273\266\345\220\215\346\234\211\344\270\200\344\270\252\346\240\241\351\252\214\345\222\214\357\274\214\346\234\254\350\264\250\344\270\212\346\230\257SMBIOS\344\272\247\345\223\201\345\220\215\347\247\260\345\222\214EfiBoot\350\256\276\345\244\207\350\267\257\345\276\204\347\232\204adler32\343\200\202\n"
"\n"
"\345\234\250\346\237\220\344\272"
                        "\233\345\233\272\344\273\266\344\270\212\357\274\214\347\224\261\344\272\216ACPI\346\210\226\347\241\254\344\273\266\347\232\204\347\211\271\346\256\212\346\200\247\357\274\214EfiBoot\350\256\276\345\244\207\350\267\257\345\276\204\345\234\250UEFI\345\222\214macOS\344\271\213\351\227\264\346\234\211\346\211\200\344\270\215\345\220\214\357\274\214\344\275\277\345\276\227\345\206\205\346\240\270\347\274\223\345\255\230\347\232\204\346\240\241\351\252\214\345\222\214\346\200\273\346\230\257\344\270\215\345\220\214\347\232\204\343\200\202\n"
"\n"
"\350\277\231\344\270\252\350\256\276\347\275\256\345\205\201\350\256\270\345\234\250\346\262\241\346\234\211\345\220\216\347\274\200\347\232\204\345\206\205\346\240\270\347\274\223\345\255\230\344\270\215\345\217\257\347\224\250\346\227\266\357\274\214\347\224\250\345\220\210\351\200\202\347\232\204\346\236\266\346\236\204\345\214\271\351\205\215\346\234\200\346\226\260\347\232\204\345\206\205\346\240\270\347\274\223\345\255\230\357\274\214\346\217\220\351\253\230macOS 1"
                        "0.6\345\234\250\345\244\232\344\270\252\345\271\263\345\217\260\344\270\212\347\232\204\345\220\257\345\212\250\346\200\247\350\203\275\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_45->addWidget(chkFuzzyMatch);


        gridLayout_60->addWidget(frame_chk_16, 0, 0, 1, 1);

        frame_edit_11 = new QFrame(tabKernel7);
        frame_edit_11->setObjectName("frame_edit_11");
        frame_edit_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_11->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_46 = new QVBoxLayout(frame_edit_11);
        verticalLayout_46->setObjectName("verticalLayout_46");
        horizontalLayout_64 = new QHBoxLayout();
        horizontalLayout_64->setObjectName("horizontalLayout_64");
        label_43 = new QLabel(frame_edit_11);
        label_43->setObjectName("label_43");
#if QT_CONFIG(tooltip)
        label_43->setToolTip(QString::fromUtf8("On macOS 10.7 and earlier XNU kernel can boot with architectures different from the usual x86_64. \n"
"\n"
"This setting will use the specified architecture to boot macOS when it is supported by the macOS and the configuration:\n"
"\n"
"\342\200\242 Auto \342\200\224 Choose the preferred architecture automatically.\n"
"\n"
"\342\200\242 i386 \342\200\224 Use i386 (32-bit) kernel when available.\n"
"\n"
"\342\200\242 i386-user32 \342\200\224 Use i386 (32-bit) kernel when available and force the use of 32-bit userspace on 64-bit capable processors. \n"
"On macOS 64-bit capable processors are assumed to support SSSE3. \n"
"This is not the case for older 64-bit capable Pentium processors, which cause some applications to crash on macOS 10.6. \n"
"The behaviour corresponds to -legacy kernel boot argument.\n"
"\n"
"\342\200\242 x86_64 \342\200\224 Use x86_64 (64-bit) kernel when available.\n"
"\n"
"----\n"
"\n"
"\345\234\250macOS 10.7\345\217\212\346\233\264\346\227\251\347\232\204\347\211\210\346\234\254\344\270\255"
                        "\357\274\214XNU\345\206\205\346\240\270\345\217\257\344\273\245\344\275\277\347\224\250\344\270\216\351\200\232\345\270\270\347\232\204x86_64\344\270\215\345\220\214\347\232\204\346\236\266\346\236\204\346\235\245\345\220\257\345\212\250\343\200\202\n"
"\n"
"\345\275\223macOS\345\222\214\351\205\215\347\275\256\346\224\257\346\214\201\350\257\245\346\236\266\346\236\204\346\227\266\357\274\214\350\257\245\350\256\276\347\275\256\345\260\206\344\275\277\347\224\250\346\214\207\345\256\232\347\232\204\346\236\266\346\236\204\346\235\245\345\220\257\345\212\250macOS\357\274\232\n"
"\n"
"- Auto - \350\207\252\345\212\250\351\200\211\346\213\251\351\246\226\351\200\211\346\236\266\346\236\204\343\200\202\n"
"\n"
"- i386 - \345\234\250\345\217\257\347\224\250\347\232\204\346\203\205\345\206\265\344\270\213\344\275\277\347\224\250i386\357\274\21032\344\275\215\357\274\211\345\206\205\346\240\270\343\200\202\n"
"\n"
"- i386-user32 - \345\234\250\345\217\257\347\224\250\347\232\204\346\203\205\345\206\265\344\270\213\344"
                        "\275\277\347\224\250i386\357\274\21032\344\275\215\357\274\211\345\206\205\346\240\270\357\274\214\345\271\266\345\234\25064\344\275\215\345\244\204\347\220\206\345\231\250\344\270\212\345\274\272\345\210\266\344\275\277\347\224\25032\344\275\215\347\224\250\346\210\267\347\251\272\351\227\264\343\200\202\n"
"\n"
"\345\234\250 macOS \344\270\212\357\274\21464 \344\275\215\345\244\204\347\220\206\345\231\250\350\242\253\350\256\244\344\270\272\346\224\257\346\214\201 SSSE3\343\200\202\n"
"\n"
"\344\275\206\345\257\271\344\272\216\350\276\203\350\200\201\347\232\20464\344\275\215\345\245\224\350\205\276\345\244\204\347\220\206\345\231\250\346\235\245\350\257\264\357\274\214\346\203\205\345\206\265\345\271\266\351\235\236\345\246\202\346\255\244\357\274\214\350\277\231\345\260\206\345\257\274\350\207\264\344\270\200\344\272\233\345\272\224\347\224\250\347\250\213\345\272\217\345\234\250macOS 10.6\344\270\212\345\264\251\346\272\203\343\200\202\n"
"\n"
"\350\277\231\344\270\252\350\241\214\344\270\272\345\257\271\345"
                        "\272\224\344\272\216 -legacy kernel boot \345\217\202\346\225\260\343\200\202\n"
"\n"
"- x86_64 - \345\234\250\345\217\257\347\224\250\347\232\204\346\203\205\345\206\265\344\270\213\344\275\277\347\224\250x86_64 (64\344\275\215)\345\206\205\346\240\270\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_64->addWidget(label_43);

        cboxKernelArch = new QComboBox(frame_edit_11);
        cboxKernelArch->setObjectName("cboxKernelArch");
        cboxKernelArch->setEditable(true);

        horizontalLayout_64->addWidget(cboxKernelArch);


        verticalLayout_46->addLayout(horizontalLayout_64);

        horizontalLayout_65 = new QHBoxLayout();
        horizontalLayout_65->setObjectName("horizontalLayout_65");
        label_42 = new QLabel(frame_edit_11);
        label_42->setObjectName("label_42");
#if QT_CONFIG(tooltip)
        label_42->setToolTip(QString::fromUtf8("Different variants of macOS support different kernel caching variants designed to improve boot performance. \n"
"\n"
"This setting allows to prevent using faster kernel caching variants if slower variants are available for debugging and stability reasons. I.e. by specifying Mkext one will disable Prelinked for e.g. 10.6 but not 10.7.\n"
"\n"
"----\n"
"\n"
"\344\270\215\345\220\214\347\211\210\346\234\254\347\232\204macOS\346\224\257\346\214\201\344\270\215\345\220\214\347\232\204\345\206\205\346\240\270\347\274\223\345\255\230\345\217\230\344\275\223\357\274\214\346\227\250\345\234\250\346\217\220\351\253\230\345\220\257\345\212\250\346\200\247\350\203\275\343\200\202\n"
"\n"
"\345\246\202\346\236\234\345\207\272\344\272\216\350\260\203\350\257\225\345\222\214\347\250\263\345\256\232\346\200\247\347\232\204\345\216\237\345\233\240\357\274\214\350\277\231\344\270\252\350\256\276\347\275\256\345\217\257\344\273\245\351\230\262\346\255\242\344\275\277\347\224\250\350\276\203\345\277\253\347\232\204\345\206\205\346"
                        "\240\270\347\274\223\345\255\230\345\217\230\344\275\223\343\200\202\344\276\213\345\246\202\357\274\214\351\200\232\350\277\207\346\214\207\345\256\232Mkext\357\274\214\345\260\206\347\246\201\347\224\250Prelinked\357\274\214\344\276\213\345\246\20210.6\357\274\214\350\200\214\344\270\215\346\230\25710.7\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_65->addWidget(label_42);

        cboxKernelCache = new QComboBox(frame_edit_11);
        cboxKernelCache->setObjectName("cboxKernelCache");
        cboxKernelCache->setEditable(true);

        horizontalLayout_65->addWidget(cboxKernelCache);


        verticalLayout_46->addLayout(horizontalLayout_65);


        gridLayout_60->addWidget(frame_edit_11, 0, 1, 1, 1);

        tabKernel->addTab(tabKernel7, QString());

        gridLayout_11->addWidget(tabKernel, 0, 0, 1, 1);

        tabTotal->addTab(tab_4, QString());
        tabTotal->setTabText(tabTotal->indexOf(tab_4), QString::fromUtf8("Kernel"));
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        gridLayout_62 = new QGridLayout(tab_5);
        gridLayout_62->setObjectName("gridLayout_62");
        tabMisc = new QTabWidget(tab_5);
        tabMisc->setObjectName("tabMisc");
        tabMisc->setTabShape(QTabWidget::TabShape::Rounded);
        tabMisc->setDocumentMode(true);
        tabMisc1 = new QWidget();
        tabMisc1->setObjectName("tabMisc1");
        gridLayout_45 = new QGridLayout(tabMisc1);
        gridLayout_45->setObjectName("gridLayout_45");
        frame_chk_23 = new QFrame(tabMisc1);
        frame_chk_23->setObjectName("frame_chk_23");
        frame_chk_23->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_23->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_63 = new QVBoxLayout(frame_chk_23);
        verticalLayout_63->setObjectName("verticalLayout_63");
        chkHideAuxiliary = new QCheckBox(frame_chk_23);
        chkHideAuxiliary->setObjectName("chkHideAuxiliary");
#if QT_CONFIG(tooltip)
        chkHideAuxiliary->setToolTip(QString::fromUtf8("An entry is considered auxiliary when at least one of the following applies:\n"
"\n"
"\342\200\242 Entry is macOS recovery.\n"
"\342\200\242 Entry is macOS Time Machine.\n"
"\342\200\242 Entry is explicitly marked as Auxiliary. \n"
"\342\200\242 Entry is system (e.g. Reset NVRAM).\n"
"\n"
"To see all entries picker menu needs to be reloaded in extended mode by pressing Spacebar key. Hiding auxiliary entries may increase boot performance for multidisk systems.\n"
"\n"
"----\n"
"\n"
"\345\275\223\350\207\263\345\260\221\346\234\211\344\270\200\351\241\271\351\200\202\347\224\250\344\272\216\344\273\245\344\270\213\346\203\205\345\206\265\346\227\266\357\274\214\344\270\200\344\270\252\346\235\241\347\233\256\350\242\253\350\256\244\344\270\272\346\230\257\350\276\205\345\212\251\346\200\247\347\232\204\357\274\232\n"
"\n"
"- \346\235\241\347\233\256\346\230\257macOS\346\201\242\345\244\215\343\200\202\n"
"- \346\235\241\347\233\256\346\230\257 macOS Time Machine\343\200\202\n"
"- \346\235\241\347\233\256\350\242"
                        "\253\346\230\216\347\241\256\346\240\207\350\256\260\344\270\272\350\276\205\345\212\251\343\200\202\n"
"- \346\235\241\347\233\256\346\230\257\347\263\273\347\273\237\357\274\210\345\246\202\351\207\215\347\275\256NVRAM\357\274\211\343\200\202\n"
"\n"
"\350\246\201\346\237\245\347\234\213\346\211\200\346\234\211\346\235\241\347\233\256\357\274\214\351\234\200\350\246\201\345\234\250\346\211\251\345\261\225\346\250\241\345\274\217\344\270\213\346\214\211\347\251\272\346\240\274\351\224\256\351\207\215\346\226\260\345\212\240\350\275\275\351\200\211\346\213\251\345\231\250\350\217\234\345\215\225\343\200\202\351\232\220\350\227\217\350\276\205\345\212\251\351\241\271\345\217\257\350\203\275\344\274\232\346\217\220\351\253\230\345\244\232\347\233\230\347\263\273\347\273\237\347\232\204\345\220\257\345\212\250\346\200\247\350\203\275\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_63->addWidget(chkHideAuxiliary);

        chkPollAppleHotKeys = new QCheckBox(frame_chk_23);
        chkPollAppleHotKeys->setObjectName("chkPollAppleHotKeys");
#if QT_CONFIG(tooltip)
        chkPollAppleHotKeys->setToolTip(QString::fromUtf8("In addition to action hotkeys, which are partially described in PickerMode section and are normally handled by Apple BDS, there exist modifier keys, which are handled by operating system bootloader, namely boot.efi.\n"
"\n"
"These keys allow to change operating system behaviour by providing different boot modes.\n"
"\n"
"On some firmwares it may be problematic to use modifier keys due to driver incompatibilities. To workaround this problem this option allows registering select hotkeys in a more permissive manner from within boot picker.\n"
"\n"
"Such extensions include the support of tapping on keys in addition to holding and pressing Shift along with other keys instead of just Shift alone, which is not detectible on many PS/2 keyboards. This list of known modifier hotkeys includes:\n"
"\n"
"\342\200\242 CMD+C+MINUS \342\200\224 disable board compatibility checking.\n"
"\342\200\242 CMD+K \342\200\224 boot release kernel, similar to kcsuffix=release. \n"
"\342\200\242 CMD+S \342\200\224 single user mode.\n"
"\342"
                        "\200\242 CMD+S+MINUS \342\200\224 disable KASLR slide, requires disabled SIP.\n"
"\342\200\242 CMD+V \342\200\224 verbose mode.\n"
"\342\200\242 Shift \342\200\224 safe mode.\n"
"\n"
"----\n"
"\n"
"\351\231\244\344\272\206\345\234\250 PickerMode \351\203\250\345\210\206\346\217\217\350\277\260\347\232\204\343\200\201\351\200\232\345\270\270\347\224\261 Apple BDS \345\244\204\347\220\206\347\232\204\345\212\250\344\275\234\347\203\255\351\224\256\344\271\213\345\244\226\357\274\214\350\277\230\345\255\230\345\234\250\347\224\261\346\223\215\344\275\234\347\263\273\347\273\237 bootloader \345\244\204\347\220\206\347\232\204\344\277\256\351\245\260\351\224\256\357\274\214\345\215\263 boot.efi\343\200\202\n"
"\n"
"\350\277\231\344\272\233\351\224\256\345\205\201\350\256\270\351\200\232\350\277\207\346\217\220\344\276\233\344\270\215\345\220\214\347\232\204\345\220\257\345\212\250\346\250\241\345\274\217\346\235\245\346\224\271\345\217\230\346\223\215\344\275\234\347\263\273\347\273\237\347\232\204\350\241\214\344\270"
                        "\272\343\200\202\n"
"\n"
"\345\234\250\346\237\220\344\272\233\345\233\272\344\273\266\344\270\212\357\274\214\347\224\261\344\272\216\351\251\261\345\212\250\347\250\213\345\272\217\344\270\215\345\205\274\345\256\271\357\274\214\344\275\277\347\224\250\344\277\256\346\224\271\351\224\256\345\217\257\350\203\275\344\274\232\346\234\211\351\227\256\351\242\230\343\200\202\344\270\272\344\272\206\350\247\243\345\206\263\350\277\231\344\270\252\351\227\256\351\242\230\357\274\214\350\277\231\344\270\252\351\200\211\351\241\271\345\205\201\350\256\270\345\234\250 Boot picker \344\270\255\344\273\245\344\270\200\347\247\215\346\233\264\345\205\201\350\256\270\347\232\204\346\226\271\345\274\217\346\263\250\345\206\214\351\200\211\345\256\232\347\232\204\347\203\255\351\224\256\343\200\202\n"
"\n"
"\350\277\231\346\240\267\347\232\204\346\211\251\345\261\225\345\214\205\346\213\254\346\224\257\346\214\201\351\231\244\344\272\206\346\214\211\344\275\217Shift\351\224\256\344\271\213\345\244\226\357\274\214\350\277\230"
                        "\345\217\257\344\273\245\345\222\214\345\205\266\344\273\226\351\224\256\344\270\200\350\265\267\346\214\211\344\275\217Shift\351\224\256\357\274\214\350\200\214\344\270\215\346\230\257\345\217\252\346\214\211Shift\351\224\256\357\274\214\350\277\231\345\234\250\350\256\270\345\244\232PS/2\351\224\256\347\233\230\344\270\212\346\230\257\344\270\215\345\217\257\346\243\200\346\265\213\347\232\204\343\200\202\350\277\231\344\270\252\345\267\262\347\237\245\347\232\204\344\277\256\351\245\260\347\203\255\351\224\256\345\210\227\350\241\250\345\214\205\346\213\254\357\274\232\n"
"\n"
"- CMD+C+MINUS--\347\246\201\347\224\250\347\224\265\350\267\257\346\235\277\345\205\274\345\256\271\346\200\247\346\243\200\346\237\245\343\200\202\n"
"- CMD+K--\345\220\257\345\212\250\351\207\212\346\224\276\345\206\205\346\240\270\357\274\214\347\261\273\344\274\274\344\272\216kcsuffix=release\343\200\202\n"
"- CMD+S - \345\215\225\347\224\250\346\210\267\346\250\241\345\274\217\343\200\202\n"
"- CMD+S+MINUS - \347\246\201\347\224"
                        "\250KASLR\345\271\273\347\201\257\347\211\207\357\274\214\351\234\200\350\246\201\347\246\201\347\224\250SIP\343\200\202\n"
"- CMD+V - verbose\346\250\241\345\274\217\343\200\202\n"
"- Shift - \345\256\211\345\205\250\346\250\241\345\274\217\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_63->addWidget(chkPollAppleHotKeys);

        chkPickerAudioAssist = new QCheckBox(frame_chk_23);
        chkPickerAudioAssist->setObjectName("chkPickerAudioAssist");
#if QT_CONFIG(tooltip)
        chkPickerAudioAssist->setToolTip(QString::fromUtf8("Description: Enable screen reader by default in the OpenCore picker.\n"
"\n"
"For the macOS bootloader, screen reader preference is set in the preferences.efires archive in the isVOEnabled.int32 file and is controlled by the operating system. \n"
"\n"
"For OpenCore screen reader support, this option is an independent equivalent. Toggling screen reader support in both the OpenCore picker and the macOS bootloader FileVault 2 login window can also be done by using the Command + F5 key combination.\n"
"\n"
"Note: The screen reader requires working audio support. Refer to the UEFI Audio Properties section for more details.\n"
"\n"
"----\n"
"\n"
"\350\257\264\346\230\216\357\274\232\345\234\250OpenCore\351\200\211\346\213\251\345\231\250\344\270\255\351\273\230\350\256\244\345\220\257\347\224\250\345\261\217\345\271\225\351\230\205\350\257\273\345\231\250\343\200\202\n"
"\n"
"\345\257\271\344\272\216 macOS \345\274\225\345\257\274\345\212\240\350\275\275\345\231\250\357\274\214\345\261\217\345\271\225\351\230\205\350"
                        "\257\273\345\231\250\345\201\217\345\245\275\350\256\276\347\275\256\345\234\250 isVOEnabled.int32 \346\226\207\344\273\266\344\270\255\347\232\204 preferences.efires \346\241\243\346\241\210\344\270\255\357\274\214\345\271\266\347\224\261\346\223\215\344\275\234\347\263\273\347\273\237\346\216\247\345\210\266\343\200\202\n"
"\n"
"\345\257\271\344\272\216OpenCore\345\261\217\345\271\225\351\230\205\350\257\273\345\231\250\346\224\257\346\214\201\357\274\214\350\257\245\351\200\211\351\241\271\346\230\257\344\270\200\344\270\252\347\213\254\347\253\213\347\232\204\347\255\211\344\273\267\347\211\251\343\200\202\345\234\250OpenCore\351\200\211\345\217\226\345\231\250\345\222\214macOS bootloader FileVault 2\347\231\273\345\275\225\347\252\227\345\217\243\344\270\255\345\210\207\346\215\242\345\261\217\345\271\225\351\230\205\350\257\273\345\231\250\346\224\257\346\214\201\344\271\237\345\217\257\344\273\245\351\200\232\350\277\207\344\275\277\347\224\250Command + F5\347\273\204\345\220\210\351\224\256\346\235\245"
                        "\345\256\214\346\210\220\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\261\217\345\271\225\351\230\205\350\257\273\345\231\250\351\234\200\350\246\201\346\234\211\346\225\210\347\232\204\351\237\263\351\242\221\346\224\257\346\214\201\343\200\202\350\257\267\345\217\202\351\230\205UEFI\351\237\263\351\242\221\345\261\236\346\200\247\351\203\250\345\210\206\344\272\206\350\247\243\346\233\264\345\244\232\347\273\206\350\212\202\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_63->addWidget(chkPickerAudioAssist);

        chkShowPicker = new QCheckBox(frame_chk_23);
        chkShowPicker->setObjectName("chkShowPicker");
#if QT_CONFIG(tooltip)
        chkShowPicker->setToolTip(QString::fromUtf8("Show simple boot picker to allow boot entry selection.\n"
"\n"
"----\n"
"\n"
"\346\230\276\347\244\272\347\256\200\345\215\225\347\232\204\345\274\225\345\257\274\351\200\211\346\213\251\345\231\250\357\274\214\344\273\245\345\205\201\350\256\270\351\200\211\346\213\251\350\277\233\345\205\245\345\274\225\345\257\274\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_63->addWidget(chkShowPicker);


        gridLayout_45->addWidget(frame_chk_23, 0, 0, 1, 1);

        frame_edit_16 = new QFrame(tabMisc1);
        frame_edit_16->setObjectName("frame_edit_16");
        frame_edit_16->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_16->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_64 = new QVBoxLayout(frame_edit_16);
        verticalLayout_64->setObjectName("verticalLayout_64");
        horizontalLayout_74 = new QHBoxLayout();
        horizontalLayout_74->setObjectName("horizontalLayout_74");
        label_5 = new QLabel(frame_edit_16);
        label_5->setObjectName("label_5");
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QString::fromUtf8("Description: Sets specific attributes for the OpenCore picker.\n"
"\n"
"Different OpenCore pickers may be configured through the attribute mask containing OpenCore-reserved (BIT0~BIT15) and OEM-specific (BIT16~BIT31) values.\n"
"\n"
"----\n"
"\n"
"\350\257\264\346\230\216\357\274\232\350\256\276\347\275\256OpenCore picker\347\232\204\347\211\271\345\256\232\345\261\236\346\200\247\343\200\202\n"
"\n"
"\345\217\257\344\273\245\351\200\232\350\277\207\345\214\205\345\220\253 OpenCore \344\277\235\347\225\231\345\200\274 (BIT0~BIT15) \345\222\214 OEM \347\211\271\345\256\232\345\200\274 (BIT16~BIT31) \347\232\204\345\261\236\346\200\247\346\216\251\347\240\201\346\235\245\351\205\215\347\275\256\344\270\215\345\220\214\347\232\204 OpenCore pickers\343\200\202\n"
"\n"
""));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_74->addWidget(label_5);

        editIntPickerAttributes = new QLineEdit(frame_edit_16);
        editIntPickerAttributes->setObjectName("editIntPickerAttributes");
        editIntPickerAttributes->setMinimumSize(QSize(0, 0));
        editIntPickerAttributes->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_74->addWidget(editIntPickerAttributes);

        lblPickerAttributes = new QLabel(frame_edit_16);
        lblPickerAttributes->setObjectName("lblPickerAttributes");
        lblPickerAttributes->setMaximumSize(QSize(16777215, 18));

        horizontalLayout_74->addWidget(lblPickerAttributes);

        btnPickerAttributes = new QToolButton(frame_edit_16);
        btnPickerAttributes->setObjectName("btnPickerAttributes");

        horizontalLayout_74->addWidget(btnPickerAttributes);


        verticalLayout_64->addLayout(horizontalLayout_74);

        horizontalLayout_75 = new QHBoxLayout();
        horizontalLayout_75->setObjectName("horizontalLayout_75");
        label_4 = new QLabel(frame_edit_16);
        label_4->setObjectName("label_4");
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QString::fromUtf8("Description: Hibernation detection mode. The following modes are supported:\n"
"\n"
"\342\200\242 None \342\200\224 Avoid hibernation for your own good.\n"
"\342\200\242 Auto \342\200\224 Use RTC and NVRAM detection.\n"
"\342\200\242 RTC \342\200\224 Use RTC detection.\n"
"\342\200\242 NVRAM \342\200\224 Use NVRAM detection.\n"
"\n"
"----\n"
"\n"
"\344\274\221\347\234\240\346\243\200\346\265\213\346\250\241\345\274\217\357\274\214\346\224\257\346\214\201\344\273\245\344\270\213\346\250\241\345\274\217\357\274\232\n"
"\n"
"- None - \344\270\272\344\272\206\350\207\252\345\267\261\347\232\204\344\276\277\345\210\251\351\201\277\345\205\215\344\274\221\347\234\240\343\200\202\n"
"- Auto - \344\275\277\347\224\250 RTC \345\222\214 NVRAM \346\243\200\346\265\213\343\200\202\n"
"- RTC - \344\275\277\347\224\250 RTC \346\243\200\346\265\213\343\200\202\n"
"- NVRAM - \344\275\277\347\224\250 NVRAM \346\243\200\346\265\213\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_75->addWidget(label_4);

        cboxHibernateMode = new QComboBox(frame_edit_16);
        cboxHibernateMode->setObjectName("cboxHibernateMode");
        cboxHibernateMode->setEditable(true);

        horizontalLayout_75->addWidget(cboxHibernateMode);

        label_108 = new QLabel(frame_edit_16);
        label_108->setObjectName("label_108");
#if QT_CONFIG(tooltip)
        label_108->setToolTip(QString::fromUtf8("Description: Register the launcher option in the firmware preferences for persistence.\n"
"\n"
"Valid values:\n"
"\342\200\242 Disabled \342\200\224 do nothing.\n"
"\n"
"\342\200\242 Full \342\200\224 create or update the top priority boot option in UEFI variable storage at bootloader startup.\n"
"\342\200\223 For this option to work, RequestBootVarRouting is required to be enabled.\n"
"\n"
"\342\200\242 Short \342\200\224 create a short boot option instead of a complete one.\n"
"\342\200\223 This variant is useful for some older types of firmware, typically from Insyde, that are unable to manage full device paths.\n"
"\n"
"\342\200\242 System \342\200\224 create no boot option but assume specified custom option is blessed.\n"
"\342\200\223 This variant is useful when relying on ForceBooterSignature quirk and OpenCore launcher path management happens through bless utilities without involving OpenCore.\n"
"\n"
"This option allows integration with third-party operating system installation and upgrades (which may"
                        " overwrite the \\EFI\\BOOT\\BOOTx64.efi file). The BOOTx64.efi file is no longer used for bootstrapping OpenCore if a custom option is created. The custom path used for bootstrapping can be specified by using the LauncherPath option.\n"
"\n"
"Note 1 : Some types of firmware may have NVRAM implementation flaws, no boot option support, or other incompatibilities. While unlikely, the use of this option may result in boot failures and should only be used exclusively on boards known to be compatible. Refer to acidanthera/bugtracker#1222 for some known issues affecting Haswell and other boards.\n"
"\n"
"Note 2 : While NVRAM resets executed from OpenCore would not typically erase the boot option created in Bootstrap, executing NVRAM resets prior to loading OpenCore will erase the boot option. Therefore, for significant implementation updates, such as was the case with OpenCore 0.6.4, an NVRAM reset should be executed with Bootstrap disabled, after which it can be re-enabled.\n"
"\n"
"----\n"
"\n"
"\350\257\264\346\230"
                        "\216\357\274\232\345\234\250\345\233\272\344\273\266\345\201\217\345\245\275\350\256\276\347\275\256\344\270\255\346\263\250\345\206\214\345\220\257\345\212\250\345\231\250\351\200\211\351\241\271\357\274\214\344\273\245\345\256\236\347\216\260\346\214\201\344\271\205\345\214\226\343\200\202\n"
"\n"
"\346\234\211\346\225\210\345\200\274\357\274\232\n"
"\n"
"- Disabled - \344\270\215\345\201\232\344\273\273\344\275\225\344\272\213\346\203\205\343\200\202\n"
"\n"
"- Full - \345\234\250\345\220\257\345\212\250\345\231\250\345\220\257\345\212\250\346\227\266\345\234\250 UEFI \345\217\230\351\207\217\345\255\230\345\202\250\344\270\255\345\210\233\345\273\272\346\210\226\346\233\264\346\226\260\346\234\200\351\253\230\344\274\230\345\205\210\347\272\247\347\232\204\345\220\257\345\212\250\351\200\211\351\241\271\343\200\202\344\270\272\344\272\206\344\275\277\350\277\231\344\270\252\351\200\211\351\241\271\345\217\221\346\214\245\344\275\234\347\224\250\357\274\214\351\234\200\350\246\201\345\220\257\347\224\250 Re"
                        "questBootVarRouting\343\200\202\n"
"\n"
"- Short - \345\210\233\345\273\272\344\270\200\344\270\252\347\237\255\347\232\204\345\220\257\345\212\250\351\200\211\351\241\271\357\274\214\350\200\214\344\270\215\346\230\257\344\270\200\344\270\252\345\256\214\346\225\264\347\232\204\345\220\257\345\212\250\351\200\211\351\241\271\343\200\202\350\277\231\344\270\252\345\217\230\351\207\217\345\257\271\344\270\200\344\272\233\346\227\247\345\233\272\344\273\266\345\276\210\346\234\211\347\224\250\357\274\214\345\260\244\345\205\266\346\230\257Insyde\357\274\214\344\275\206\344\271\237\345\217\257\350\203\275\345\257\271\345\205\266\344\273\226\346\227\240\346\263\225\345\244\204\347\220\206\345\256\214\346\225\264\350\256\276\345\244\207\350\267\257\345\276\204\347\232\204\345\233\272\344\273\266\346\234\211\347\224\250\343\200\202\n"
"\n"
"-System-\344\270\215\345\210\233\345\273\272\345\274\225\345\257\274\351\200\211\351\241\271\357\274\214\344\275\206\345\201\207\350\256\276\346\214\207\345\256\232\347\232\204\350"
                        "\207\252\345\256\232\344\271\211\351\200\211\351\241\271\346\230\257\345\217\227\344\277\235\346\212\244\347\232\204\343\200\202\n"
"\n"
"\350\257\245\351\200\211\351\241\271\346\217\220\344\276\233\344\272\206\344\270\216\347\254\254\344\270\211\346\226\271\346\223\215\344\275\234\347\263\273\347\273\237\347\232\204\351\233\206\346\210\220\357\274\214\345\271\266\345\234\250\347\254\254\344\270\211\346\226\271\346\223\215\344\275\234\347\263\273\347\273\237\350\246\206\347\233\226EFIBOOTBOOTx64.efi\346\226\207\344\273\266\346\227\266\350\277\233\350\241\214\345\256\211\350\243\205\345\222\214\345\215\207\347\272\247\343\200\202\351\200\232\350\277\207\345\234\250\350\277\231\344\270\252\346\226\207\344\273\266\344\270\255\345\210\233\345\273\272\344\270\200\344\270\252\350\207\252\345\256\232\344\271\211\351\200\211\351\241\271\357\274\214\350\267\257\345\276\204\345\217\230\345\276\227\344\270\215\345\206\215\347\224\250\344\272\216\345\274\225\345\257\274OpenCore\343\200\202\347\224\250\344\272\216\345\220\257"
                        "\345\212\250\347\232\204\350\267\257\345\276\204\345\234\250LauncherPath\351\200\211\351\241\271\344\270\255\346\214\207\345\256\232\343\200\202\n"
"\n"
" \346\263\2501\357\274\232\346\237\220\344\272\233\347\261\273\345\236\213\347\232\204\345\233\272\344\273\266\345\217\257\350\203\275\346\234\211\351\224\231\350\257\257\347\232\204NVRAM\357\274\214\344\270\215\346\224\257\346\214\201\345\220\257\345\212\250\351\200\211\351\241\271\357\274\214\346\210\226\345\205\266\344\273\226\344\270\215\345\205\274\345\256\271\347\232\204\346\203\205\345\206\265\343\200\202\350\231\275\347\204\266\344\270\215\345\244\252\345\217\257\350\203\275\357\274\214\344\275\206\344\275\277\347\224\250\350\277\231\344\270\252\351\200\211\351\241\271\345\217\257\350\203\275\344\274\232\345\257\274\350\207\264\345\220\257\345\212\250\345\244\261\350\264\245\343\200\202\350\277\231\344\270\252\351\200\211\351\241\271\345\272\224\350\257\245\345\234\250\346\262\241\346\234\211\344\273\273\344\275\225\344\277\235\350\257\201\347\232\204"
                        "\346\203\205\345\206\265\344\270\213\357\274\214\345\217\252\345\234\250\345\267\262\347\237\245\345\205\274\345\256\271\347\232\204\346\235\277\345\255\220\344\270\212\344\275\277\347\224\250\343\200\202\346\237\245\347\234\213 acidanthera/bugtracker#1222\357\274\214\344\272\206\350\247\243\344\270\200\344\272\233\345\267\262\347\237\245\347\232\204Haswell\345\222\214\345\205\266\344\273\226\346\235\277\345\215\241\347\232\204\351\227\256\351\242\230\343\200\202\n"
"\n"
"\346\263\2502\357\274\232\350\257\267\346\263\250\346\204\217\357\274\214\350\231\275\347\204\266\344\273\216OpenCore\346\211\247\350\241\214\347\232\204NVRAM\351\207\215\347\275\256\344\270\215\345\272\224\346\270\205\351\231\244\345\234\250Bootstrap\344\270\255\345\210\233\345\273\272\347\232\204\345\220\257\345\212\250\351\200\211\351\241\271\357\274\214\344\275\206\345\234\250\345\212\240\350\275\275OpenCore\344\271\213\345\211\215\346\211\247\350\241\214NVRAM\351\207\215\347\275\256\345\260\206\345\210\240\351\231\244\345\256\203\343\200"
                        "\202\345\257\271\344\272\216\351\207\215\350\246\201\347\232\204\345\256\236\347\216\260\346\233\264\346\226\260\357\274\210\344\276\213\345\246\202\345\234\250OpenCore 0.6.4\344\270\255\357\274\211\357\274\214\347\241\256\344\277\235\345\234\250\351\207\215\346\226\260\345\220\257\347\224\250\344\271\213\345\211\215\357\274\214\345\234\250\347\246\201\347\224\250Bootstrap\347\232\204\346\203\205\345\206\265\344\270\213\346\211\247\350\241\214NVRAM\351\207\215\347\275\256\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_75->addWidget(label_108);

        cboxLauncherOption = new QComboBox(frame_edit_16);
        cboxLauncherOption->setObjectName("cboxLauncherOption");
        cboxLauncherOption->setEditable(true);

        horizontalLayout_75->addWidget(cboxLauncherOption);


        verticalLayout_64->addLayout(horizontalLayout_75);

        horizontalLayout_76 = new QHBoxLayout();
        horizontalLayout_76->setObjectName("horizontalLayout_76");
        label_15 = new QLabel(frame_edit_16);
        label_15->setObjectName("label_15");
#if QT_CONFIG(tooltip)
        label_15->setToolTip(QString::fromUtf8("Default stays for launched OpenCore.efi, any other path, e.g. EFILauncher.efi, can be used to provide custom loaders, which are supposed to load OpenCore.efi themselves.\n"
"\n"
"----\n"
"\n"
"\351\273\230\350\256\244\345\201\234\347\225\231\345\234\250\345\220\257\345\212\250\347\232\204OpenCore.efi\344\270\212\357\274\214\344\273\273\344\275\225\345\205\266\344\273\226\350\267\257\345\276\204\357\274\214\344\276\213\345\246\202EFILauncher.efi\357\274\214\351\203\275\345\217\257\344\273\245\347\224\250\346\235\245\346\217\220\344\276\233\350\207\252\345\256\232\344\271\211\347\232\204\345\212\240\350\275\275\345\231\250\357\274\214\350\277\231\344\272\233\345\212\240\350\275\275\345\231\250\345\272\224\350\257\245\350\207\252\345\267\261\345\212\240\350\275\275OpenCore.efi\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_76->addWidget(label_15);

        cboxLauncherPath = new QComboBox(frame_edit_16);
        cboxLauncherPath->setObjectName("cboxLauncherPath");
        cboxLauncherPath->setEditable(true);

        horizontalLayout_76->addWidget(cboxLauncherPath);

        label_6 = new QLabel(frame_edit_16);
        label_6->setObjectName("label_6");
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QString::fromUtf8("Picker describes underlying boot management with an optional user interface responsible for handling boot options. The following values are supported:\n"
"\n"
"\342\200\242 Builtin \342\200\224 boot management is handled by OpenCore, a simple text only user interface is used.\n"
"\342\200\242 External \342\200\224 an external boot management protocol is used if available. Otherwise Builtin mode is used.\n"
"\342\200\242 Apple \342\200\224 Apple boot management is used if available. Otherwise Builtin mode is used.\n"
"\n"
"----\n"
"\n"
"Picker\346\217\217\350\277\260\344\272\206\345\272\225\345\261\202\347\232\204\345\274\225\345\257\274\347\256\241\347\220\206\357\274\214\346\234\211\344\270\200\344\270\252\345\217\257\351\200\211\347\232\204\347\224\250\346\210\267\347\225\214\351\235\242\350\264\237\350\264\243\345\244\204\347\220\206\345\274\225\345\257\274\351\200\211\351\241\271\343\200\202\346\224\257\346\214\201\344\273\245\344\270\213\345\200\274\357\274\232\n"
"\n"
"- Builtin - \345\274\225\345\257\274"
                        "\347\256\241\347\220\206\347\224\261 OpenCore \345\244\204\347\220\206\357\274\214\344\275\277\347\224\250\347\256\200\345\215\225\347\232\204\346\226\207\346\234\254\347\224\250\346\210\267\347\225\214\351\235\242\343\200\202\n"
"- External - \345\246\202\346\236\234\345\217\257\347\224\250\357\274\214\345\210\231\344\275\277\347\224\250\345\244\226\351\203\250\345\274\225\345\257\274\347\256\241\347\220\206\345\215\217\350\256\256\343\200\202\345\220\246\345\210\231\345\260\206\344\275\277\347\224\250 Builtin \346\250\241\345\274\217\343\200\202\n"
"- Apple - \345\246\202\346\236\234\345\217\257\347\224\250\357\274\214\345\210\231\344\275\277\347\224\250 Apple \347\232\204\345\220\257\345\212\250\347\256\241\347\220\206\343\200\202\345\220\246\345\210\231\344\275\277\347\224\250Builtin\346\250\241\345\274\217\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_76->addWidget(label_6);

        cboxPickerMode = new QComboBox(frame_edit_16);
        cboxPickerMode->setObjectName("cboxPickerMode");
        cboxPickerMode->setEditable(true);

        horizontalLayout_76->addWidget(cboxPickerMode);


        verticalLayout_64->addLayout(horizontalLayout_76);

        horizontalLayout_77 = new QHBoxLayout();
        horizontalLayout_77->setObjectName("horizontalLayout_77");
        label_10 = new QLabel(frame_edit_16);
        label_10->setObjectName("label_10");
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QString::fromUtf8("Type: plist string\n"
"\n"
"Description: Choose specific icon set to be used for boot management.\n"
"An icon set is a directory path relative to Resources\\Image, where the icons and an optional manifest are located. It is recommended for the artists to use provide their sets in the Vendor\\Set format, e.g.\n"
"Acidanthera\\GoldenGate.\n"
"Sample resources provided as a part of OcBinaryData repository provide the following icon set:\n"
"\342\200\242 Acidanthera\\GoldenGate \342\200\224 macOS 11 styled icon set.\n"
"\342\200\242 Acidanthera\\Syrah \342\200\224 macOS 10.10 styled icon set.\n"
"\342\200\242 Acidanthera\\Chardonnay \342\200\224 macOS 10.4 styled icon set.\n"
"For convenience purposes there also are predefined aliases:\n"
"\342\200\242 Auto \342\200\224 Automatically select one set of icons based on the DefaultBackground colour: Acidanthera\\GoldenGate\n"
"for Syrah Black and Acidanthera\\Chardonnay for Light Gray.\n"
"\342\200\242 Default \342\200\224 Acidanthera\\GoldenGate.\n"
"----\n"
"\347\261"
                        "\273\345\236\213\357\274\232plist\345\255\227\347\254\246\344\270\262\n"
"\n"
"\346\217\217\350\277\260\357\274\232\351\200\211\346\213\251\347\211\271\345\256\232\347\232\204\345\233\276\346\240\207\351\233\206\357\274\214\347\224\250\344\272\216\345\220\257\345\212\250\347\256\241\347\220\206\343\200\202\n"
"\345\233\276\346\240\207\351\233\206\346\230\257\344\270\200\344\270\252\347\233\270\345\257\271\344\272\216Resources/Image\347\232\204\347\233\256\345\275\225\350\267\257\345\276\204\357\274\214\345\205\266\344\270\255\347\232\204\345\233\276\346\240\207\345\222\214\344\270\200\344\270\252\345\217\257\351\200\211\347\232\204\346\270\205\345\215\225\344\275\215\344\272\216\345\205\266\344\270\255\343\200\202\346\210\221\344\273\254\345\273\272\350\256\256\350\211\272\346\234\257\345\256\266\344\275\277\347\224\250Vendor/Set\346\240\274\345\274\217\346\217\220\344\276\233\344\273\226\344\273\254\347\232\204\345\233\276\346\240\207\351\233\206\357\274\214\344\276\213\345\246\202\n"
"Acidanthera\\GoldenGate"
                        "\343\200\202\n"
"\344\275\234\344\270\272OcBinaryData\350\265\204\346\272\220\345\272\223\347\232\204\344\270\200\351\203\250\345\210\206\346\217\220\344\276\233\347\232\204\346\240\267\346\234\254\350\265\204\346\272\220\346\217\220\344\276\233\344\272\206\344\273\245\344\270\213\345\233\276\346\240\207\351\233\206\343\200\202\n"
"- Acidanthera\\GoldenGate - macOS 11\351\243\216\346\240\274\347\232\204\345\233\276\346\240\207\351\233\206\343\200\202\n"
"- Acidanthera\\Syrah - macOS 10.10\351\243\216\346\240\274\347\232\204\345\233\276\346\240\207\351\233\206\343\200\202\n"
"- Acidanthera\\Chardonnay - macOS 10.4\351\243\216\346\240\274\347\232\204\345\233\276\346\240\207\351\233\206\343\200\202\n"
"\344\270\272\344\272\206\346\226\271\344\276\277\350\265\267\350\247\201\357\274\214\350\277\230\346\234\211\344\270\200\344\272\233\351\242\204\345\256\232\344\271\211\347\232\204\345\210\253\345\220\215\343\200\202\n"
"- Auto - \346\240\271\346\215\256DefaultBackground\351\242\234\350\211\262\350\207\252\345\212\250"
                        "\351\200\211\346\213\251\344\270\200\347\273\204\345\233\276\346\240\207\343\200\202Acidanthera/GoldenGate\n"
"\347\224\250\344\272\216Syrah\351\273\221\350\211\262\357\274\214Acidanthera\\Chardonnay\347\224\250\344\272\216\346\265\205\347\201\260\350\211\262\343\200\202\n"
"- Default - Acidanthera\\GoldenGate\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_77->addWidget(label_10);

        cboxPickerVariant = new QComboBox(frame_edit_16);
        cboxPickerVariant->addItem(QString());
        cboxPickerVariant->addItem(QString());
        cboxPickerVariant->addItem(QString());
        cboxPickerVariant->addItem(QString());
        cboxPickerVariant->addItem(QString());
        cboxPickerVariant->setObjectName("cboxPickerVariant");
        cboxPickerVariant->setEditable(true);

        horizontalLayout_77->addWidget(cboxPickerVariant);


        verticalLayout_64->addLayout(horizontalLayout_77);

        horizontalLayout_78 = new QHBoxLayout();
        horizontalLayout_78->setObjectName("horizontalLayout_78");
        label_8 = new QLabel(frame_edit_16);
        label_8->setObjectName("label_8");
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QString::fromUtf8("Introducing a delay may give extra time to hold the right action hotkey sequence to e.g. boot to recovery mode.\n"
"\n"
"On some platforms setting this option to at least 5000-10000 microseconds may be necessary to access action hotkeys at all due to the nature of the keyboard driver.\n"
"\n"
"----\n"
"\n"
"\345\274\225\345\205\245\345\273\266\350\277\237\345\217\257\350\203\275\344\274\232\346\217\220\344\276\233\351\242\235\345\244\226\347\232\204\346\227\266\351\227\264\346\235\245\344\277\235\346\214\201\346\255\243\347\241\256\347\232\204\345\212\250\344\275\234\347\203\255\351\224\256\345\272\217\345\210\227\357\274\214\344\276\213\345\246\202\345\220\257\345\212\250\345\210\260\346\201\242\345\244\215\346\250\241\345\274\217\343\200\202\n"
"\n"
"\345\234\250\346\237\220\344\272\233\345\271\263\345\217\260\344\270\212\357\274\214\347\224\261\344\272\216\351\224\256\347\233\230\351\251\261\345\212\250\347\250\213\345\272\217\347\232\204\347\211\271\346\200\247\357\274\214\345\260\206\350\257\245\351\200\211"
                        "\351\241\271\350\256\276\347\275\256\344\270\272\350\207\263\345\260\2215000-10000\345\276\256\347\247\222\345\217\257\350\203\275\346\230\257\350\256\277\351\227\256\346\223\215\344\275\234\347\203\255\351\224\256\346\211\200\345\277\205\351\234\200\347\232\204\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_78->addWidget(label_8);

        editIntTakeoffDelay = new QLineEdit(frame_edit_16);
        editIntTakeoffDelay->setObjectName("editIntTakeoffDelay");

        horizontalLayout_78->addWidget(editIntTakeoffDelay);

        label_7 = new QLabel(frame_edit_16);
        label_7->setObjectName("label_7");
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QString::fromUtf8(" Timeout in seconds in boot picker before automatic booting of the default boot entry. Use 0 to  disable timer.\n"
"\n"
"----\n"
"\n"
" \345\234\250\345\274\225\345\257\274\351\200\211\346\213\251\345\231\250\344\270\255\357\274\214\351\273\230\350\256\244\345\274\225\345\257\274\346\235\241\347\233\256\350\207\252\345\212\250\345\220\257\345\212\250\345\211\215\347\232\204\350\266\205\346\227\266\346\227\266\351\227\264\357\274\214\344\273\245\347\247\222\344\270\272\345\215\225\344\275\215\343\200\202\344\275\277\347\224\2500\346\235\245\347\246\201\347\224\250\345\256\232\346\227\266\345\231\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_78->addWidget(label_7);

        editIntTimeout = new QLineEdit(frame_edit_16);
        editIntTimeout->setObjectName("editIntTimeout");

        horizontalLayout_78->addWidget(editIntTimeout);


        verticalLayout_64->addLayout(horizontalLayout_78);

        horizontalLayout_79 = new QHBoxLayout();
        horizontalLayout_79->setObjectName("horizontalLayout_79");
        label_3 = new QLabel(frame_edit_16);
        label_3->setObjectName("label_3");

        horizontalLayout_79->addWidget(label_3);

        editIntConsoleAttributes = new QLineEdit(frame_edit_16);
        editIntConsoleAttributes->setObjectName("editIntConsoleAttributes");

        horizontalLayout_79->addWidget(editIntConsoleAttributes);


        verticalLayout_64->addLayout(horizontalLayout_79);

        horizontalLayout_80 = new QHBoxLayout();
        horizontalLayout_80->setObjectName("horizontalLayout_80");
        lblColorEffect = new QLabel(frame_edit_16);
        lblColorEffect->setObjectName("lblColorEffect");
        lblColorEffect->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_80->addWidget(lblColorEffect);


        verticalLayout_64->addLayout(horizontalLayout_80);

        horizontalLayout_81 = new QHBoxLayout();
        horizontalLayout_81->setObjectName("horizontalLayout_81");
        label_118 = new QLabel(frame_edit_16);
        label_118->setObjectName("label_118");

        horizontalLayout_81->addWidget(label_118);

        mycboxTextColor = new QComboBox(frame_edit_16);
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->addItem(QString());
        mycboxTextColor->setObjectName("mycboxTextColor");

        horizontalLayout_81->addWidget(mycboxTextColor);


        verticalLayout_64->addLayout(horizontalLayout_81);

        horizontalLayout_82 = new QHBoxLayout();
        horizontalLayout_82->setObjectName("horizontalLayout_82");
        label_119 = new QLabel(frame_edit_16);
        label_119->setObjectName("label_119");

        horizontalLayout_82->addWidget(label_119);

        mycboxBackColor = new QComboBox(frame_edit_16);
        mycboxBackColor->addItem(QString());
        mycboxBackColor->addItem(QString());
        mycboxBackColor->addItem(QString());
        mycboxBackColor->addItem(QString());
        mycboxBackColor->addItem(QString());
        mycboxBackColor->addItem(QString());
        mycboxBackColor->addItem(QString());
        mycboxBackColor->addItem(QString());
        mycboxBackColor->setObjectName("mycboxBackColor");

        horizontalLayout_82->addWidget(mycboxBackColor);


        verticalLayout_64->addLayout(horizontalLayout_82);


        gridLayout_45->addWidget(frame_edit_16, 0, 1, 1, 1);

        tabMisc->addTab(tabMisc1, QString());
        tabMisc2 = new QWidget();
        tabMisc2->setObjectName("tabMisc2");
        gridLayout_25 = new QGridLayout(tabMisc2);
        gridLayout_25->setObjectName("gridLayout_25");
        frame_chk_22 = new QFrame(tabMisc2);
        frame_chk_22->setObjectName("frame_chk_22");
        frame_chk_22->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_22->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_61 = new QVBoxLayout(frame_chk_22);
        verticalLayout_61->setObjectName("verticalLayout_61");
        chkAppleDebug = new QCheckBox(frame_chk_22);
        chkAppleDebug->setObjectName("chkAppleDebug");
#if QT_CONFIG(tooltip)
        chkAppleDebug->setToolTip(QString::fromUtf8("Description: Enable writing the boot.efi debug log to the OpenCore log.\n"
"\n"
"Note: This option only applies to 10.15.4 and newer.\n"
"----\n"
"\350\257\264\346\230\216\357\274\232\345\220\257\347\224\250\345\260\206 boot.efi \350\260\203\350\257\225\346\227\245\345\277\227\345\206\231\345\205\245 OpenCore \346\227\245\345\277\227\343\200\202\n"
"\n"
"\346\263\250\357\274\232\346\255\244\351\200\211\351\241\271\344\273\205\351\200\202\347\224\250\344\272\21610.15.4\345\217\212\346\233\264\346\226\260\347\211\210\346\234\254\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_61->addWidget(chkAppleDebug);

        chkApplePanic = new QCheckBox(frame_chk_22);
        chkApplePanic->setObjectName("chkApplePanic");
#if QT_CONFIG(tooltip)
        chkApplePanic->setToolTip(QString::fromUtf8("The file is saved as panic-YYYY-MM-DD-HHMMSS.txt. It is strongly recommended to have keepsyms=1 boot argument to see debug symbols in the panic log. In case it was not present kpdescribe.sh utility (bundled with OpenCore) may be used to partially recover the stacktrace.\n"
"\n"
"Development and debug kernels produce more helpful kernel panics. Consider downloading and installing KernelDebugKit from developer.apple.com when debugging a problem. To activate a development kernel you will need to add a kcsuffix=development boot argument. Use uname -a command to ensure that your current loaded kernel is a development (or a debug) kernel.\n"
"\n"
"----\n"
"\n"
"\346\226\207\344\273\266\344\277\235\345\255\230\344\270\272panic-YYYY-MM-DD-HHMMSS.txt\343\200\202\345\274\272\347\203\210\345\273\272\350\256\256\344\275\277\347\224\250 keepsyms=1 \347\232\204\345\220\257\345\212\250\345\217\202\346\225\260\346\235\245\346\237\245\347\234\213\345\264\251\346\272\203\346\227\245\345\277\227\344\270\255\347\232\204\350\260\203"
                        "\350\257\225\347\254\246\345\217\267\343\200\202\345\246\202\346\236\234\345\256\203\344\270\215\345\255\230\345\234\250\357\274\214\345\217\257\344\273\245\344\275\277\347\224\250kpdescribe.sh\345\267\245\345\205\267\357\274\210\344\270\216OpenCore\346\215\206\347\273\221\345\234\250\344\270\200\350\265\267\357\274\211\346\235\245\351\203\250\345\210\206\346\201\242\345\244\215\345\240\206\346\240\210\350\267\237\350\270\252\343\200\202\n"
"\n"
"\345\274\200\345\217\221\345\222\214\350\260\203\350\257\225\345\206\205\346\240\270\344\274\232\344\272\247\347\224\237\346\233\264\346\234\211\347\224\250\347\232\204\345\206\205\346\240\270\345\264\251\346\272\203\344\277\241\346\201\257 \343\200\202\350\260\203\350\257\225\351\227\256\351\242\230\346\227\266\357\274\214\345\217\257\344\273\245\350\200\203\350\231\221\344\273\216 developer.apple.com \344\270\213\350\275\275\345\271\266\345\256\211\350\243\205 KernelDebugKit\343\200\202\350\246\201\346\277\200\346\264\273\345\274\200\345\217\221\345\206\205\346\240\270"
                        "\357\274\214\344\275\240\351\234\200\350\246\201\346\267\273\345\212\240kcsuffix=development\345\274\225\345\257\274\345\217\202\346\225\260\343\200\202\344\275\277\347\224\250uname -a\345\221\275\344\273\244\346\235\245\347\241\256\344\277\235\344\275\240\345\275\223\345\211\215\345\212\240\350\275\275\347\232\204\345\206\205\346\240\270\346\230\257\344\270\200\344\270\252\345\274\200\345\217\221\357\274\210\346\210\226\350\260\203\350\257\225\357\274\211\345\206\205\346\240\270\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_61->addWidget(chkApplePanic);

        chkDisableWatchDog = new QCheckBox(frame_chk_22);
        chkDisableWatchDog->setObjectName("chkDisableWatchDog");
#if QT_CONFIG(tooltip)
        chkDisableWatchDog->setToolTip(QString::fromUtf8("Select firmwares may not succeed in quickly booting the operating system, especially in debug  mode, which results in watch dog timer aborting the process. \n"
"\n"
"This option turns off watch dog timer.\n"
"----\n"
"\346\237\220\344\272\233\345\233\272\344\273\266\345\217\257\350\203\275\346\227\240\346\263\225\346\210\220\345\212\237\345\277\253\351\200\237\345\220\257\345\212\250\346\223\215\344\275\234\347\263\273\347\273\237\357\274\214\347\211\271\345\210\253\346\230\257\345\234\250\350\260\203\350\257\225\346\250\241\345\274\217\344\270\213\357\274\214\345\257\274\350\207\264\347\234\213\351\227\250\347\213\227\345\256\232\346\227\266\345\231\250\344\270\255\346\255\242\350\277\233\347\250\213\343\200\202\n"
"\n"
"\346\255\244\351\200\211\351\241\271\345\217\257\345\205\263\351\227\255\347\234\213\351\227\250\347\213\227\345\256\232\346\227\266\345\231\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_61->addWidget(chkDisableWatchDog);

        chkSerialInit = new QCheckBox(frame_chk_22);
        chkSerialInit->setObjectName("chkSerialInit");
#if QT_CONFIG(tooltip)
        chkSerialInit->setToolTip(QString::fromUtf8("This option will perform serial port initialisation within OpenCore prior to enabling (any) debug logging. \n"
"\n"
"Serial port configuration is defined via PCDs at compile time in gEfiMdeModulePkgTokenSpaceGuid GUID. \n"
"\n"
"Default values as found in MdeModulePkg.dec are as follows:\n"
"\n"
"\342\200\242 PcdSerialBaudRate \342\200\224 Baud rate: 115200. \n"
"\342\200\242 PcdSerialLineControl \342\200\224 Line control: no parity, 8 data bits, 1 stop bit.\n"
"\n"
"See more details in Debugging section.\n"
"\n"
"----\n"
"\n"
"\350\257\245\351\200\211\351\241\271\345\260\206\345\234\250\345\220\257\347\224\250\357\274\210\344\273\273\344\275\225\357\274\211\350\260\203\350\257\225\346\227\245\345\277\227\344\271\213\345\211\215\357\274\214\345\234\250 OpenCore \344\270\255\346\211\247\350\241\214\344\270\262\350\241\214\347\253\257\345\217\243\345\210\235\345\247\213\345\214\226\343\200\202\n"
"\n"
"\344\270\262\350\241\214\347\253\257\345\217\243\351\205\215\347\275\256\345\234\250\347\274\226\350\257\221\346"
                        "\227\266\351\200\232\350\277\207 PCDs \345\234\250 gEfiMdeModulePkgTokenSpaceGuid GUID \344\270\255\345\256\232\344\271\211\343\200\202\n"
"\n"
"\345\234\250MdeModulePkg.dec\344\270\255\346\211\276\345\210\260\347\232\204\351\273\230\350\256\244\345\200\274\345\246\202\344\270\213\357\274\232\n"
"\n"
"- PcdSerialBaudRate - \346\263\242\347\211\271\347\216\207\357\274\232115200. \n"
"- PcdSerialLineControl - \347\272\277\350\267\257\346\216\247\345\210\266\357\274\232\346\227\240\345\245\207\345\201\266\346\240\241\351\252\214\357\274\2148\344\270\252\346\225\260\346\215\256\344\275\215\357\274\2141\344\270\252\345\201\234\346\255\242\344\275\215\343\200\202\n"
"\n"
"\350\257\246\350\247\201\350\260\203\350\257\225\351\203\250\345\210\206\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_61->addWidget(chkSerialInit);

        chkSysReport = new QCheckBox(frame_chk_22);
        chkSysReport->setObjectName("chkSysReport");
#if QT_CONFIG(tooltip)
        chkSysReport->setToolTip(QString::fromUtf8("This option will create a SysReport directory on ESP partition unless it is already present. The directory will contain ACPI and SMBIOS dumps.\n"
"\n"
"Note: For security reasons SysReport option is not available in RELEASE builds. Use a DEBUG build if you need this option.\n"
"\n"
"----\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\345\260\206\345\234\250ESP\345\210\206\345\214\272\344\270\212\345\210\233\345\273\272\344\270\200\344\270\252SysReport\347\233\256\345\275\225\357\274\214\351\231\244\351\235\236\345\256\203\345\267\262\347\273\217\345\255\230\345\234\250\343\200\202\350\257\245\347\233\256\345\275\225\345\260\206\345\214\205\345\220\253ACPI\345\222\214SMBIOS\350\275\254\345\202\250\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\207\272\344\272\216\345\256\211\345\205\250\350\200\203\350\231\221\357\274\214SysReport\351\200\211\351\241\271\345\234\250RELEASE\347\211\210\346\234\254\344\270\255\346\230\257\344\270\215\345\217\257\347\224\250\347\232\204\357\274\214\345\246"
                        "\202\346\236\234\346\202\250\351\234\200\350\246\201\350\277\231\344\270\252\351\200\211\351\241\271\357\274\214\350\257\267\344\275\277\347\224\250DEBUG\347\211\210\346\234\254\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_61->addWidget(chkSysReport);


        gridLayout_25->addWidget(frame_chk_22, 0, 0, 1, 1);

        frame_edit_15 = new QFrame(tabMisc2);
        frame_edit_15->setObjectName("frame_edit_15");
        frame_edit_15->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_15->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_62 = new QVBoxLayout(frame_edit_15);
        verticalLayout_62->setObjectName("verticalLayout_62");
        horizontalLayout_67 = new QHBoxLayout();
        horizontalLayout_67->setObjectName("horizontalLayout_67");
        label_39 = new QLabel(frame_edit_15);
        label_39->setObjectName("label_39");
#if QT_CONFIG(tooltip)
        label_39->setToolTip(QString::fromUtf8("Type: plist integer, 64 bit\n"
"\n"
"Description: EDK II debug level bitmask (sum) showed onscreen. Unless Target enables console (onscreen) printing, onscreen debug output will not be visible.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\357\274\21464\344\275\215\n"
"\n"
"\346\217\217\350\277\260\357\274\232\346\230\276\347\244\272\345\234\250\345\261\217\345\271\225\344\270\212\347\232\204EDK II\350\260\203\350\257\225\347\272\247\345\210\253\347\232\204\346\257\224\347\211\271\346\216\251\347\240\201\344\271\213\345\222\214\343\200\202\351\231\244\351\235\236Target\345\220\257\347\224\250\346\216\247\345\210\266\345\217\260\357\274\210\345\261\217\345\271\225\344\270\212\357\274\211\346\211\223\345\215\260\357\274\214\345\220\246\345\210\231\345\261\217\345\271\225\344\270\212\347\232\204\350\260\203\350\257\225\350\276\223\345\207\272\345\260\206\344\270\215\345\217\257\350\247\201\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_67->addWidget(label_39);

        editIntDisplayLevel = new QLineEdit(frame_edit_15);
        editIntDisplayLevel->setObjectName("editIntDisplayLevel");
        editIntDisplayLevel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_67->addWidget(editIntDisplayLevel);

        lblDisplayLevel = new QLabel(frame_edit_15);
        lblDisplayLevel->setObjectName("lblDisplayLevel");
        lblDisplayLevel->setMaximumSize(QSize(16777215, 18));

        horizontalLayout_67->addWidget(lblDisplayLevel);

        btnDisplayLevel = new QToolButton(frame_edit_15);
        btnDisplayLevel->setObjectName("btnDisplayLevel");

        horizontalLayout_67->addWidget(btnDisplayLevel);


        verticalLayout_62->addLayout(horizontalLayout_67);

        horizontalLayout_70 = new QHBoxLayout();
        horizontalLayout_70->setObjectName("horizontalLayout_70");
        label_9 = new QLabel(frame_edit_15);
        label_9->setObjectName("label_9");
#if QT_CONFIG(tooltip)
        label_9->setToolTip(QString::fromUtf8("Delay in microseconds performed after every printed line visible onscreen (i.e. console).\n"
"\n"
"----\n"
"\n"
"\345\234\250\345\261\217\345\271\225\357\274\210\345\215\263\346\216\247\345\210\266\345\217\260\357\274\211\344\270\212\345\217\257\350\247\201\347\232\204\346\257\217\344\270\200\350\241\214\346\211\223\345\215\260\345\220\216\346\211\247\350\241\214\347\232\204\345\273\266\350\277\237\357\274\214\345\215\225\344\275\215\344\270\272\345\276\256\347\247\222\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_70->addWidget(label_9);

        editIntDisplayDelay = new QLineEdit(frame_edit_15);
        editIntDisplayDelay->setObjectName("editIntDisplayDelay");
        editIntDisplayDelay->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_70->addWidget(editIntDisplayDelay);


        verticalLayout_62->addLayout(horizontalLayout_70);

        horizontalLayout_73 = new QHBoxLayout();
        horizontalLayout_73->setObjectName("horizontalLayout_73");
        label_11 = new QLabel(frame_edit_15);
        label_11->setObjectName("label_11");

        horizontalLayout_73->addWidget(label_11);

        editIntTarget = new QLineEdit(frame_edit_15);
        editIntTarget->setObjectName("editIntTarget");
        editIntTarget->setMaximumSize(QSize(16777215, 16777215));
        editIntTarget->setClearButtonEnabled(false);

        horizontalLayout_73->addWidget(editIntTarget);

        lblTargetHex = new QLabel(frame_edit_15);
        lblTargetHex->setObjectName("lblTargetHex");
        lblTargetHex->setMaximumSize(QSize(16777215, 18));

        horizontalLayout_73->addWidget(lblTargetHex);


        verticalLayout_62->addLayout(horizontalLayout_73);

        mychkT1 = new QCheckBox(frame_edit_15);
        mychkT1->setObjectName("mychkT1");

        verticalLayout_62->addWidget(mychkT1);

        mychkT2 = new QCheckBox(frame_edit_15);
        mychkT2->setObjectName("mychkT2");

        verticalLayout_62->addWidget(mychkT2);

        mychkT6 = new QCheckBox(frame_edit_15);
        mychkT6->setObjectName("mychkT6");

        verticalLayout_62->addWidget(mychkT6);

        mychkT5 = new QCheckBox(frame_edit_15);
        mychkT5->setObjectName("mychkT5");

        verticalLayout_62->addWidget(mychkT5);

        mychkT4 = new QCheckBox(frame_edit_15);
        mychkT4->setObjectName("mychkT4");

        verticalLayout_62->addWidget(mychkT4);

        mychkT3 = new QCheckBox(frame_edit_15);
        mychkT3->setObjectName("mychkT3");

        verticalLayout_62->addWidget(mychkT3);

        mychkT7 = new QCheckBox(frame_edit_15);
        mychkT7->setObjectName("mychkT7");

        verticalLayout_62->addWidget(mychkT7);


        gridLayout_25->addWidget(frame_edit_15, 0, 1, 1, 1);

        tabMisc->addTab(tabMisc2, QString());
        tabMisc3 = new QWidget();
        tabMisc3->setObjectName("tabMisc3");
        gridLayout_22 = new QGridLayout(tabMisc3);
        gridLayout_22->setObjectName("gridLayout_22");
        frame_chk_21 = new QFrame(tabMisc3);
        frame_chk_21->setObjectName("frame_chk_21");
        frame_chk_21->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_21->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_59 = new QVBoxLayout(frame_chk_21);
        verticalLayout_59->setObjectName("verticalLayout_59");
        chkAuthRestart = new QCheckBox(frame_chk_21);
        chkAuthRestart->setObjectName("chkAuthRestart");
#if QT_CONFIG(tooltip)
        chkAuthRestart->setToolTip(QString::fromUtf8("Description: Authenticated restart is a way to reboot FileVault 2 enabled macOS without entering the password. \n"
"\n"
"To perform authenticated restart one can use a dedicated terminal command: sudo fdesetup authrestart. It is also used when installing operating system updates.\n"
"\n"
"VirtualSMC performs authenticated restart by saving disk encryption key split in NVRAM and RTC, which despite being removed as soon as OpenCore starts, may be considered a security risk and thus is optional.\n"
"\n"
"----\n"
"\n"
"\346\217\217\350\277\260\357\274\232\350\256\244\350\257\201\351\207\215\345\220\257\346\230\257\344\270\200\347\247\215\346\227\240\351\234\200\350\276\223\345\205\245\345\257\206\347\240\201\345\215\263\345\217\257\351\207\215\345\220\257\345\220\257\347\224\250FileVault 2\347\232\204macOS\347\232\204\346\226\271\346\263\225\343\200\202\n"
"\n"
"\350\246\201\346\211\247\350\241\214\351\252\214\350\257\201\351\207\215\345\220\257\357\274\214\345\217\257\344\273\245\344\275\277\347\224\250\344\270\223"
                        "\347\224\250\347\232\204\347\273\210\347\253\257\345\221\275\344\273\244\357\274\232sudo fdesetup authrestart\343\200\202\345\234\250\345\256\211\350\243\205\346\223\215\344\275\234\347\263\273\347\273\237\346\233\264\346\226\260\346\227\266\344\271\237\344\274\232\347\224\250\345\210\260\343\200\202\n"
"\n"
"VirtualSMC\351\200\232\350\277\207\345\234\250NVRAM\345\222\214RTC\344\270\255\344\277\235\345\255\230\347\243\201\347\233\230\345\212\240\345\257\206\345\257\206\351\222\245\345\210\206\345\211\262\346\235\245\346\211\247\350\241\214\351\252\214\350\257\201\351\207\215\345\220\257\357\274\214\345\260\275\347\256\241OpenCore\345\220\257\345\212\250\345\220\216\345\260\261\344\274\232\350\242\253\345\210\240\351\231\244\357\274\214\344\275\206\350\277\231\345\217\257\350\203\275\350\242\253\350\256\244\344\270\272\346\230\257\344\270\200\347\247\215\345\256\211\345\205\250\351\243\216\351\231\251\357\274\214\345\233\240\346\255\244\346\230\257\345\217\257\351\200\211\347\232\204\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_59->addWidget(chkAuthRestart);

        chkAllowToggleSip = new QCheckBox(frame_chk_21);
        chkAllowToggleSip->setObjectName("chkAllowToggleSip");
#if QT_CONFIG(tooltip)
        chkAllowToggleSip->setToolTip(QString::fromUtf8("Type: plist boolean\n"
"\n"
"Description: Enable entry for disabling and enabling System Integrity Protection in OpenCore picker.\n"
"\n"
"This will toggle Apple NVRAM variable csr-active-config between 0 for SIP Enabled and the current macOS default for SIP Disabled (currently 0x6F for Big Sur).\n"
"\n"
"Note1 : Using the SIP Disabled value from a newer version of macOS on an older version (e.g. Catalina and below) will report an unknown setting if queried using csrutil status, but will still run correctly and be secure,because new bits are added but old bits are not removed between versions of macOS. (It is possible to configure CsrUtil.efi as a TextMode Tools entry to configure a different value, e.g. use toggle 0x67 in Arguments to toggle the default SIP Disabled value for macOS Catalina.)\n"
"\n"
"Note2 : It is strongly recommended not to make a habit of running macOS with SIP disabled. Use of this boot option may make it easier to quickly disable SIP protection when genuinely needed - it should be re-ena"
                        "bled again afterwards.\n"
"\n"
"----\n"
"\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\346\217\217\350\277\260\357\274\232\347\224\250\344\272\216\345\234\250OpenCore\351\200\211\345\217\226\345\231\250\344\270\255\347\246\201\347\224\250\345\222\214\345\220\257\347\224\250\347\263\273\347\273\237\345\256\214\346\225\264\346\200\247\344\277\235\346\212\244\343\200\202\n"
"\n"
"\350\277\231\345\260\206\344\275\277\350\213\271\346\236\234NVRAM\345\217\230\351\207\217csr-active-config\345\234\250SIP Enabled\347\232\2040\345\222\214SIP Disabled\347\232\204\345\275\223\345\211\215macOS\351\273\230\350\256\244\345\200\274\357\274\210Big Sur\347\233\256\345\211\215\344\270\2720x6F\357\274\211\344\271\213\351\227\264\345\210\207\346\215\242\343\200\202\n"
"\n"
"\346\263\250\346\204\2171\357\274\232\345\234\250\346\227\247\347\211\210\346\234\254\347\232\204macOS\357\274\210\344\276\213\345\246\202Catalina\345\222\214\344\273\245\344\270\213\347\232\204\347\211\210\346\234"
                        "\254\357\274\211\344\270\212\344\275\277\347\224\250\350\276\203\346\226\260\347\211\210\346\234\254\347\232\204SIP Disabled\345\200\274\357\274\214\345\246\202\346\236\234\344\275\277\347\224\250csrutil status\346\237\245\350\257\242\357\274\214\345\260\206\346\212\245\345\221\212\344\270\200\344\270\252\346\234\252\347\237\245\347\232\204\350\256\276\347\275\256\357\274\214\344\275\206\344\273\215\345\260\206\346\255\243\347\241\256\350\277\220\350\241\214\357\274\214\345\271\266\344\270\224\346\230\257\345\256\211\345\205\250\347\232\204\357\274\214\345\233\240\344\270\272\346\226\260\347\232\204\344\275\215\350\242\253\346\267\273\345\212\240\357\274\214\344\275\206\346\227\247\347\232\204\344\275\215\345\234\250macOS\347\211\210\346\234\254\344\271\213\351\227\264\346\262\241\346\234\211\350\242\253\345\210\240\351\231\244\343\200\202(\345\217\257\344\273\245\345\260\206CsrUtil.efi\351\205\215\347\275\256\344\270\272TextMode Tools\346\235\241\347\233\256\357\274\214\344\273\245\351\205\215\347\275\256\344"
                        "\270\215\345\220\214\347\232\204\345\200\274\357\274\214\344\276\213\345\246\202\357\274\214\344\275\277\347\224\250Arguments\344\270\255\347\232\204toggle 0x67\346\235\245\345\210\207\346\215\242macOS Catalina\347\232\204\351\273\230\350\256\244SIP Disabled\345\200\274\343\200\202)\n"
"\n"
"\346\263\250\346\204\2172\357\274\232\345\274\272\347\203\210\345\273\272\350\256\256\344\270\215\350\246\201\345\205\273\346\210\220\345\234\250\347\246\201\347\224\250SIP\347\232\204\346\203\205\345\206\265\344\270\213\350\277\220\350\241\214macOS\347\232\204\344\271\240\346\203\257\343\200\202\344\275\277\347\224\250\350\277\231\344\270\252\345\220\257\345\212\250\351\200\211\351\241\271\345\217\257\344\273\245\345\234\250\347\234\237\346\255\243\351\234\200\350\246\201\347\232\204\346\227\266\345\200\231\346\233\264\345\256\271\346\230\223\345\277\253\351\200\237\345\234\260\347\246\201\347\224\250SIP\344\277\235\346\212\244\357\274\214\344\271\213\345\220\216\345\272\224\350\257\245\345\206\215\351\207\215\346\226\260"
                        "\345\220\257\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_59->addWidget(chkAllowToggleSip);

        chkAllowSetDefault = new QCheckBox(frame_chk_21);
        chkAllowSetDefault->setObjectName("chkAllowSetDefault");
#if QT_CONFIG(tooltip)
        chkAllowSetDefault->setToolTip(QString::fromUtf8("Description: Allow CTRL+Enter and CTRL+Index handling to set the default boot option in boot picker.\n"
"\n"
"----\n"
"\n"
" \346\217\217\350\277\260\357\274\232\345\205\201\350\256\270CTRL+Enter\345\222\214CTRL+Index\346\223\215\344\275\234\357\274\214\345\234\250\345\274\225\345\257\274\351\200\211\346\213\251\345\231\250\344\270\255\350\256\276\347\275\256\351\273\230\350\256\244\345\274\225\345\257\274\351\200\211\351\241\271\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_59->addWidget(chkAllowSetDefault);

        chkAllowNvramReset = new QCheckBox(frame_chk_21);
        chkAllowNvramReset->setObjectName("chkAllowNvramReset");
#if QT_CONFIG(tooltip)
        chkAllowNvramReset->setToolTip(QString::fromUtf8("Description: Allow CMD+OPT+P+R handling and enable showing NVRAM Reset entry in OpenCore picker.\n"
"\n"
"Note 1 : It is known that some Lenovo laptops have a firmware bug, which makes them unbootable after performing NVRAM reset. See acidanthera/bugtracker#995 for more details.\n"
"\n"
"Note 2 : Resetting NVRAM will also erase any boot options not backed up using the bless command. For example,  Linux installations to custom locations not specified in BlessOverride.\n"
"\n"
"----\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\205\201\350\256\270CMD+OPT+P+R\345\244\204\347\220\206\357\274\214\345\271\266\345\220\257\347\224\250\345\234\250 OpenCore \345\274\225\345\257\274\351\200\211\346\213\251\345\231\250\344\270\255\346\230\276\347\244\272NVRAM Reset\346\235\241\347\233\256\343\200\202\n"
"\n"
"\346\263\2501\357\274\232\345\267\262\347\237\245\351\203\250\345\210\206\350\201\224\346\203\263\347\254\224\350\256\260\346\234\254\345\255\230\345\234\250\345\233\272\344\273\266bug\357\274\214\345\234\250\346"
                        "\211\247\350\241\214NVRAM\351\207\215\347\275\256\345\220\216\346\227\240\346\263\225\345\220\257\345\212\250\343\200\202\346\233\264\345\244\232\347\273\206\350\212\202\350\257\267\345\217\202\350\247\201 acidanthera/bugtracker#995\343\200\202\n"
"\n"
"\346\263\2502\357\274\232\351\207\215\347\275\256NVRAM\344\271\237\344\274\232\346\270\205\351\231\244\344\273\273\344\275\225\346\262\241\346\234\211\344\275\277\347\224\250bless\345\221\275\344\273\244\345\244\207\344\273\275\347\232\204\345\220\257\345\212\250\351\200\211\351\241\271\343\200\202\344\276\213\345\246\202\357\274\214Linux\345\256\211\350\243\205\345\210\260\346\234\252\345\234\250BlessOverride\344\270\255\346\214\207\345\256\232\347\232\204\350\207\252\345\256\232\344\271\211\344\275\215\347\275\256\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_59->addWidget(chkAllowNvramReset);

        chkBlacklistAppleUpdate = new QCheckBox(frame_chk_21);
        chkBlacklistAppleUpdate->setObjectName("chkBlacklistAppleUpdate");
#if QT_CONFIG(tooltip)
        chkBlacklistAppleUpdate->setToolTip(QString::fromUtf8("Description: This option exists due to some operating systems, namely macOS Big Sur, being incapable of disabling firmware updates with the NVRAM variable (run-efi-updater).\n"
"\n"
"----\n"
"\n"
"\346\217\217\350\277\260\357\274\232\350\277\231\344\270\252\351\200\211\351\241\271\347\232\204\345\255\230\345\234\250\346\230\257\347\224\261\344\272\216\346\237\220\344\272\233\346\223\215\344\275\234\347\263\273\347\273\237\357\274\214\345\215\263macOS Big Sur\357\274\214\346\227\240\346\263\225\344\275\277\347\224\250NVRAM\345\217\230\351\207\217\357\274\210run-efi-updater\357\274\211\347\246\201\347\224\250\345\233\272\344\273\266\346\233\264\346\226\260\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_59->addWidget(chkBlacklistAppleUpdate);

        chkEnablePassword = new QCheckBox(frame_chk_21);
        chkEnablePassword->setObjectName("chkEnablePassword");
#if QT_CONFIG(tooltip)
        chkEnablePassword->setToolTip(QString::fromUtf8("Type: plist boolean\n"
"\n"
"Description: Enable password protection to facilitate sensitive operations.\n"
"\n"
"Password protection ensures that sensitive operations such as booting a non-default operating system (e.g. macOS recovery or a tool), resetting NVRAM storage, trying to boot into a non-default mode (e.g. verbose mode or safe mode) are not allowed without explicit user authentication by a custom password. Currently, password and salt are hashed with 5000000 iterations of SHA-512.\n"
"\n"
"Note: This functionality is still under development and is not ready for production environments.\n"
"\n"
"----\n"
"\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\220\257\347\224\250\345\257\206\347\240\201\344\277\235\346\212\244\344\273\245\344\277\203\350\277\233\346\225\217\346\204\237\346\223\215\344\275\234\343\200\202\n"
"\n"
"\345\257\206\347\240\201\344\277\235\346\212\244\347\241\256\344\277\235\346\225\217\346\204\237\346"
                        "\223\215\344\275\234\357\274\214\345\246\202\345\220\257\345\212\250\351\235\236\351\273\230\350\256\244\346\223\215\344\275\234\347\263\273\347\273\237\357\274\210\345\246\202macOS\346\201\242\345\244\215\346\210\226\345\267\245\345\205\267\357\274\211\343\200\201\351\207\215\347\275\256NVRAM\345\255\230\345\202\250\343\200\201\345\260\235\350\257\225\345\220\257\345\212\250\345\210\260\351\235\236\351\273\230\350\256\244\346\250\241\345\274\217\357\274\210\345\246\202verbose\346\250\241\345\274\217\346\210\226\345\256\211\345\205\250\346\250\241\345\274\217\357\274\211\357\274\214\345\234\250\346\262\241\346\234\211\346\230\216\347\241\256\347\232\204\347\224\250\346\210\267\350\256\244\350\257\201\347\232\204\346\203\205\345\206\265\344\270\213\357\274\214\344\270\215\345\205\201\350\256\270\344\275\277\347\224\250\350\207\252\345\256\232\344\271\211\345\257\206\347\240\201\343\200\202\347\233\256\345\211\215\357\274\214\345\257\206\347\240\201\345\222\214\347\233\220\346\230\257\347\224\250SHA-512\347\232\204"
                        "5000000\346\254\241\350\277\255\344\273\243\350\277\233\350\241\214\346\225\243\345\210\227\347\232\204\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\257\245\345\212\237\350\203\275\344\273\215\345\234\250\345\274\200\345\217\221\344\270\255\357\274\214\345\260\232\346\234\252\345\207\206\345\244\207\345\245\275\347\224\250\344\272\216\347\224\237\344\272\247\347\216\257\345\242\203\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_59->addWidget(chkEnablePassword);


        gridLayout_22->addWidget(frame_chk_21, 0, 0, 1, 1);

        frame_edit_14 = new QFrame(tabMisc3);
        frame_edit_14->setObjectName("frame_edit_14");
        frame_edit_14->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_14->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_60 = new QVBoxLayout(frame_edit_14);
        verticalLayout_60->setObjectName("verticalLayout_60");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_27 = new QLabel(frame_edit_14);
        label_27->setObjectName("label_27");
#if QT_CONFIG(tooltip)
        label_27->setToolTip(QString::fromUtf8("Valid values:\n"
"\n"
"\342\200\242 Disabled \342\200\224 loading DMG images will fail. Disabled policy will still let macOS Recovery to load in most cases as there usually are boot.efi files compatible with Apple Secure Boot. Manually downloaded DMG images stored in com.apple.recovery.boot directories will not load, however.\n"
"\n"
"\342\200\242 Signed \342\200\224 only Apple-signed DMG images will load. Due to Apple Secure Boot design Signed policy will let any Apple-signed macOS Recovery to load regardless of Apple Secure Boot state, which may not always be desired.\n"
"\n"
"\342\200\242 Any \342\200\224 any DMG images will mount as normal filesystems. Any policy is strongly not recommended and will cause a boot failure when Apple Secure Boot is activated.\n"
"\n"
"----\n"
"\n"
"\346\234\211\346\225\210\345\200\274\357\274\232\n"
"\n"
"- Disabled - \345\212\240\350\275\275DMG\351\225\234\345\203\217\344\274\232\345\244\261\350\264\245\343\200\202\345\234\250\345\244\247\345\244\232\346\225\260\346\203\205\345"
                        "\206\265\344\270\213\357\274\214\347\246\201\347\224\250\347\255\226\347\225\245\344\273\215\344\274\232\350\256\251 macOS Recovery \345\212\240\350\275\275\357\274\214\345\233\240\344\270\272\351\200\232\345\270\270\346\234\211\344\270\216 Apple Secure Boot \345\205\274\345\256\271\347\232\204 boot.efi \346\226\207\344\273\266\343\200\202\347\204\266\350\200\214\357\274\214\345\255\230\345\202\250\345\234\250 com.apple.recovery.boot \347\233\256\345\275\225\344\270\255\347\232\204\346\211\213\345\212\250\344\270\213\350\275\275\347\232\204 DMG \346\230\240\345\203\217\345\260\206\346\227\240\346\263\225\345\212\240\350\275\275\343\200\202\n"
"\n"
"- Signed - \344\273\205\345\212\240\350\275\275\350\213\271\346\236\234\347\255\276\345\220\215\347\232\204DMG\346\230\240\345\203\217\343\200\202\347\224\261\344\272\216\350\213\271\346\236\234\345\256\211\345\205\250\345\274\225\345\257\274\350\256\276\350\256\241\357\274\214\347\255\276\345\220\215\347\255\226\347\225\245\345\260\206\345\205\201\350\256\270\344\273"
                        "\273\344\275\225\350\213\271\346\236\234\347\255\276\345\220\215\347\232\204macOS\346\201\242\345\244\215\345\212\240\350\275\275\357\274\214\350\200\214\344\270\215\347\256\241\350\213\271\346\236\234\345\256\211\345\205\250\345\274\225\345\257\274\347\212\266\346\200\201\345\246\202\344\275\225\357\274\214\350\277\231\345\217\257\350\203\275\345\271\266\344\270\215\346\200\273\346\230\257\347\220\206\346\203\263\347\232\204\343\200\202\n"
"\n"
"- Any - \344\273\273\344\275\225DMG\346\230\240\345\203\217\351\203\275\345\260\206\344\275\234\344\270\272\346\231\256\351\200\232\346\226\207\344\273\266\347\263\273\347\273\237\345\212\240\350\275\275\343\200\202\345\274\272\347\203\210\344\270\215\345\273\272\350\256\256\344\275\277\347\224\250\342\200\234Any\342\200\235\347\255\226\347\225\245\357\274\214\345\271\266\344\270\224\345\234\250\346\277\200\346\264\273Apple Secure Boot\346\227\266\345\260\206\345\257\274\350\207\264\345\220\257\345\212\250\345\244\261\350\264\245\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout->addWidget(label_27);

        cboxDmgLoading = new QComboBox(frame_edit_14);
        cboxDmgLoading->setObjectName("cboxDmgLoading");
        cboxDmgLoading->setEditable(true);

        horizontalLayout->addWidget(cboxDmgLoading);

        label_16 = new QLabel(frame_edit_14);
        label_16->setObjectName("label_16");
#if QT_CONFIG(tooltip)
        label_16->setToolTip(QString::fromUtf8("Valid values:\n"
"\n"
"\342\200\242 Optional \342\200\224 require nothing, no vault is enforced, insecure.\n"
"\n"
"\342\200\242 Basic \342\200\224 require vault.plist file present in OC directory. This provides basic filesystem integrity verification and may protect from unintentional filesystem corruption.\n"
"\n"
"\342\200\242 Secure \342\200\224 require vault.sig signature file for vault.plist in OC directory. This includes Basic integrity checking but also attempts to build a trusted bootchain.\n"
"\n"
"----\n"
"\n"
"\346\234\211\346\225\210\345\200\274\357\274\232\n"
"\n"
"- Optional--\344\270\215\351\234\200\350\246\201\344\273\273\344\275\225\344\270\234\350\245\277\357\274\214\344\270\215\345\274\272\345\210\266\346\211\247\350\241\214vault\357\274\214\344\270\215\345\256\211\345\205\250\343\200\202\n"
"\n"
"- Basic -- \350\246\201\346\261\202\345\234\250OC\347\233\256\345\275\225\344\270\255\345\255\230\345\234\250vault.plist\346\226\207\344\273\266\343\200\202\350\277\231\346\217\220\344\276\233\344"
                        "\272\206\345\237\272\346\234\254\347\232\204\346\226\207\344\273\266\347\263\273\347\273\237\345\256\214\346\225\264\346\200\247\351\252\214\350\257\201\357\274\214\345\217\257\344\273\245\351\230\262\346\255\242\346\227\240\346\204\217\344\270\255\347\232\204\346\226\207\344\273\266\347\263\273\347\273\237\346\215\237\345\235\217\343\200\202\n"
"\n"
"- Secure--\351\234\200\350\246\201OC\347\233\256\345\275\225\344\270\213vault.sig\347\255\276\345\220\215\346\226\207\344\273\266\343\200\202\350\277\231\345\214\205\346\213\254\345\237\272\346\234\254\347\232\204\345\256\214\346\225\264\346\200\247\346\243\200\346\237\245\357\274\214\344\275\206\344\271\237\350\257\225\345\233\276\345\273\272\347\253\213\344\270\200\344\270\252\345\217\257\344\277\241\347\232\204\345\274\225\345\257\274\351\223\276\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout->addWidget(label_16);

        cboxVault = new QComboBox(frame_edit_14);
        cboxVault->setObjectName("cboxVault");
        cboxVault->setEditable(true);

        horizontalLayout->addWidget(cboxVault);


        verticalLayout_60->addLayout(horizontalLayout);

        horizontalLayout_68 = new QHBoxLayout();
        horizontalLayout_68->setObjectName("horizontalLayout_68");
        label_45 = new QLabel(frame_edit_14);
        label_45->setObjectName("label_45");
#if QT_CONFIG(tooltip)
        label_45->setToolTip(QString::fromUtf8("Sets Apple Secure Boot hardware model and policy. \n"
"\n"
"Specifying this value defines which operating systems will be bootable. Operating systems shipped before the specified model was released will not boot. \n"
"\n"
"Valid values:\n"
"\342\200\242 Default \342\200\224 Recent available model, currently set to j137\n"
"\342\200\242 Disabled \342\200\224 No model, Secure Boot will be disabled\n"
"\342\200\242 j137 \342\200\224 iMacPro1,1 (December 2017) minimum macOS 10.13.2 (17C2111)\n"
"\342\200\242 j680 \342\200\224 MacBookPro15,1 (July 2018) minimum macOS 10.13.6 (17G2112)\n"
"\342\200\242 j132 \342\200\224 MacBookPro15,2 (July 2018) minimum macOS 10.13.6 (17G2112)\n"
"\342\200\242 j174 \342\200\224 Macmini8,1 (October 2018) minimum macOS 10.14 (18A2063)\n"
"\342\200\242 j140k \342\200\224 MacBookAir8,1 (October 2018) minimum macOS 10.14.1 (18B2084)\n"
"\342\200\242 j780 \342\200\224 MacBookPro15,3 (May 2019) minimum macOS 10.14.5 (18F132)\n"
"\342\200\242 j213 \342\200\224 MacBookPro15,4 (July 2019) mi"
                        "nimum macOS 10.14.5 (18F2058)\n"
"\342\200\242 j140a \342\200\224 MacBookAir8,2 (July 2019) minimum macOS 10.14.5 (18F2058)\n"
"\342\200\242 j152f \342\200\224 MacBookPro16,1 (November 2019) minimum macOS 10.15.1 (19B2093)\n"
"\342\200\242 j160 \342\200\224 MacPro7,1 (December 2019) minimum macOS 10.15.1 (19B88)\n"
"\342\200\242 j230k \342\200\224 MacBookAir9,1 (March 2020) minimum macOS 10.15.3 (19D2064)\n"
"\342\200\242 j214k \342\200\224 MacBookPro16,2 (May 2020) minimum macOS 10.15.4 (19E2269)\n"
"\342\200\242 j223 \342\200\224 MacBookPro16,3 (May 2020) minimum macOS 10.15.4 (19E2265)\n"
"\342\200\242 j215 \342\200\224 MacBookPro16,4 (June 2020) minimum macOS 10.15.5 (19F96)\n"
"\342\200\242 j185 \342\200\224 iMac20,1 (August 2020) minimum macOS 10.15.6 (19G2005)\n"
"\342\200\242 j185f \342\200\224 iMac20,2 (August 2020) minimum macOS 10.15.6 (19G2005)\n"
"\n"
"----\n"
"\n"
"\350\256\276\347\275\256 Apple Secure Boot \347\241\254\344\273\266\346\250\241\345\236\213\345\222\214\347\255\226\347\225\245\343\200"
                        "\202\n"
"\n"
"\346\214\207\345\256\232\346\255\244\345\200\274\345\217\257\345\256\232\344\271\211\345\223\252\344\272\233\346\223\215\344\275\234\347\263\273\347\273\237\345\217\257\344\273\245\345\220\257\345\212\250\343\200\202\345\234\250\346\214\207\345\256\232\345\236\213\345\217\267\345\217\221\345\270\203\344\271\213\345\211\215\345\207\272\345\216\202\347\232\204\346\223\215\344\275\234\347\263\273\347\273\237\345\260\206\346\227\240\346\263\225\345\220\257\345\212\250\343\200\202\n"
"\n"
"\346\234\211\346\225\210\345\200\274\357\274\232\n"
"- Default - \346\234\200\350\277\221\345\217\257\347\224\250\347\232\204\345\236\213\345\217\267\357\274\214\345\275\223\345\211\215\350\256\276\347\275\256\344\270\272j137\n"
"- Disabled - \346\262\241\346\234\211\345\236\213\345\217\267\357\274\214\345\256\211\345\205\250\345\220\257\345\212\250\345\260\206\350\242\253\347\246\201\347\224\250\n"
"- j137 - iMacPro1,1\357\274\2102017\345\271\26412\346\234\210\357\274\211\346\234\200\344\275\216macOS 10.13.2\357\274"
                        "\21017C2111\357\274\211\n"
"- j680 - MacBookPro15,1\357\274\2102018\345\271\2647\346\234\210\357\274\211\346\234\200\344\275\216macOS 10.13.6\357\274\21017G2112\357\274\211\n"
"- j132 - MacBookPro15,2 (2018\345\271\2647\346\234\210)\346\234\200\344\275\216macOS 10.13.6 (17G2112)\n"
"- j174 - Macmini8,1\357\274\2102018\345\271\26410\346\234\210\357\274\211\346\234\200\344\275\216macOS 10.14\357\274\21018A2063\357\274\211\n"
"- j140k - MacBookAir8,1\357\274\2102018\345\271\26410\346\234\210\357\274\211\346\234\200\344\275\216macOS10.14.1\357\274\21018B2084\357\274\211\n"
"- j780 - MacBookPro15,3 (2019\345\271\2645\346\234\210) \346\234\200\344\275\216macOS 10.14.5 (18F132)\n"
"- j213 - MacBookPro15,4 (2019\345\271\2647\346\234\210)\346\234\200\344\275\216macOS 10.14.5 (18F2058)\n"
"- j140a - MacBookAir8,2 (2019\345\271\2647\346\234\210)\346\234\200\344\275\216macOS 10.14.5 (18F2058)\n"
"- j152f - MacBookPro16,1 (2019\345\271\26411\346\234\210) \346\234\200\344\275\216macOS 10.15.1 (19B2093)\n"
"- j160 - MacPro7,"
                        "1 (2019\345\271\26412\346\234\210)\346\234\200\344\275\216macOS 10.15.1 (19B88)\n"
"- j230k - MacBookAir9,1 (2020\345\271\2643\346\234\210)\346\234\200\344\275\216macOS 10.15.3 (19D2064)\n"
"- j214k - MacBookPro16,2 (2020\345\271\2645\346\234\210) \346\234\200\344\275\216macOS 10.15.4 (19E2269)\n"
"- j223 - MacBookPro16,3 (2020\345\271\2645\346\234\210)\346\234\200\344\275\216macOS 10.15.4 (19E2265)\n"
"- j215 - MacBookPro16.4 (2020\345\271\2646\346\234\210)\346\234\200\344\275\216macOS 10.15.5 (19F96)\n"
"- j185 - iMac20.1(2020\345\271\2648\346\234\210)\346\234\200\344\275\216macOS 10.15.6(19G2005)\n"
"- j185f - iMac20.2(2020\345\271\2648\346\234\210)\346\234\200\344\275\216macOS 10.15.6(19G2005)"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_68->addWidget(label_45);

        cboxSecureBootModel = new QComboBox(frame_edit_14);
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->addItem(QString());
        cboxSecureBootModel->setObjectName("cboxSecureBootModel");
        cboxSecureBootModel->setEditable(true);

        horizontalLayout_68->addWidget(cboxSecureBootModel);

        label_44 = new QLabel(frame_edit_14);
        label_44->setObjectName("label_44");
#if QT_CONFIG(tooltip)
        label_44->setToolTip(QString::fromUtf8("Setting this value to any non-zero 64-bit integer will allow using personalised Apple Secure Boot identifiers. \n"
"\n"
"If you want to use this setting, make sure to generate a random 64-bit number with a cryptographically secure random number generator. With this value set and SecureBootModel valid and not Disabled it is possible to achieve Full Security of Apple Secure Boot.\n"
"\n"
"To start using personalised Apple Secure Boot you will have to reinstall the operating system or personalise it.\n"
"\n"
"Until your operating system is personalised you will only be able to load macOS DMG recovery. If you do not have DMG recovery you could always download it with macrecovery utility and put to com.apple.recovery.boot as explained in Tips and Tricks section. Keep in mind that DMG loading needs to be set to Signed to use any DMG with Apple Secure Boot.\n"
"\n"
"----\n"
"\n"
"\345\260\206\346\255\244\345\200\274\350\256\276\347\275\256\344\270\272\344\273\273\344\275\225\351\235\236\351\233\266\347\232\20464\344\275"
                        "\215\346\225\264\346\225\260\357\274\214\345\260\206\345\205\201\350\256\270\344\275\277\347\224\250\344\270\252\346\200\247\345\214\226\347\232\204Apple Secure Boot\346\240\207\350\257\206\347\254\246\343\200\202\n"
"\n"
"\345\246\202\346\236\234\346\202\250\346\203\263\344\275\277\347\224\250\346\255\244\350\256\276\347\275\256\357\274\214\350\257\267\347\241\256\344\277\235\344\275\277\347\224\250\345\212\240\345\257\206\345\256\211\345\205\250\347\232\204\351\232\217\346\234\272\346\225\260\347\224\237\346\210\220\345\231\250\347\224\237\346\210\220\344\270\200\344\270\25264\344\275\215\347\232\204\351\232\217\346\234\272\346\225\260\343\200\202\345\246\202\346\236\234\350\256\276\347\275\256\344\272\206\350\277\231\344\270\252\345\200\274\357\274\214\345\271\266\344\270\224SecureBootModel\346\234\211\346\225\210\350\200\214\344\270\215\346\230\257\347\246\201\347\224\250\357\274\214\345\260\261\345\217\257\344\273\245\345\256\236\347\216\260Apple Secure Boot\347\232\204\345\256\214\345\205\250\345\256\211"
                        "\345\205\250\343\200\202\n"
"\n"
"\350\246\201\345\274\200\345\247\213\344\275\277\347\224\250\344\270\252\346\200\247\345\214\226\347\232\204Apple Secure Boot\357\274\214\346\202\250\345\277\205\351\241\273\351\207\215\346\226\260\345\256\211\350\243\205\346\223\215\344\275\234\347\263\273\347\273\237\346\210\226\345\257\271\345\205\266\350\277\233\350\241\214\344\270\252\346\200\247\345\214\226\350\256\276\347\275\256\343\200\202\n"
"\n"
"\345\234\250\346\202\250\347\232\204\346\223\215\344\275\234\347\263\273\347\273\237\350\242\253\344\270\252\346\200\247\345\214\226\344\271\213\345\211\215\357\274\214\346\202\250\345\217\252\350\203\275\345\212\240\350\275\275macOS DMG\346\201\242\345\244\215\343\200\202\345\246\202\346\236\234\344\275\240\346\262\241\346\234\211DMG\346\201\242\345\244\215\357\274\214\344\275\240\345\217\257\344\273\245\351\232\217\346\227\266\347\224\250macrecovery\345\267\245\345\205\267\344\270\213\350\275\275\345\256\203\357\274\214\347\204\266\345\220\216\346\224\276\345\210\260com.a"
                        "pple.recovery.boot\357\274\214\345\246\202\346\217\220\347\244\272\345\222\214\346\212\200\345\267\247\351\203\250\345\210\206\346\211\200\350\277\260\343\200\202\350\257\267\350\256\260\344\275\217\357\274\214DMG\345\212\240\350\275\275\351\234\200\350\246\201\350\256\276\347\275\256\344\270\272\347\255\276\345\220\215\357\274\214\344\273\245\344\275\277\347\224\250\344\273\273\344\275\225DMG\344\270\216\350\213\271\346\236\234\345\256\211\345\205\250\345\220\257\345\212\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_68->addWidget(label_44);

        editIntApECID = new QLineEdit(frame_edit_14);
        editIntApECID->setObjectName("editIntApECID");
        editIntApECID->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_68->addWidget(editIntApECID);


        verticalLayout_60->addLayout(horizontalLayout_68);

        horizontalLayout_69 = new QHBoxLayout();
        horizontalLayout_69->setObjectName("horizontalLayout_69");
        label_14 = new QLabel(frame_edit_14);
        label_14->setObjectName("label_14");
#if QT_CONFIG(tooltip)
        label_14->setToolTip(QString::fromUtf8(" EDK II debug level bitmask (sum) causing CPU to halt (stop execution) after obtaining a message of HaltLevel. Possible values match DisplayLevel values.\n"
"\n"
"----\n"
"\n"
" EDK II\350\260\203\350\257\225\347\272\247\345\210\253\344\275\215\346\216\251\347\240\201(sum)\357\274\214\344\275\277CPU\345\234\250\350\216\267\345\276\227HaltLevel\347\232\204\346\266\210\346\201\257\345\220\216\345\201\234\346\255\242\357\274\210\345\201\234\346\255\242\346\211\247\350\241\214\357\274\211\343\200\202\345\217\257\350\203\275\347\232\204\345\200\274\344\270\216DisplayLevel\345\200\274\347\233\270\345\214\271\351\205\215\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_69->addWidget(label_14);

        editIntHaltLevel = new QLineEdit(frame_edit_14);
        editIntHaltLevel->setObjectName("editIntHaltLevel");
        editIntHaltLevel->setMinimumSize(QSize(150, 0));

        horizontalLayout_69->addWidget(editIntHaltLevel);

        lblHaltLevel = new QLabel(frame_edit_14);
        lblHaltLevel->setObjectName("lblHaltLevel");
        lblHaltLevel->setMaximumSize(QSize(16777215, 18));

        horizontalLayout_69->addWidget(lblHaltLevel);


        verticalLayout_60->addLayout(horizontalLayout_69);

        horizontalLayout_71 = new QHBoxLayout();
        horizontalLayout_71->setObjectName("horizontalLayout_71");
        label_110 = new QLabel(frame_edit_14);
        label_110->setObjectName("label_110");
#if QT_CONFIG(tooltip)
        label_110->setToolTip(QString::fromUtf8("Type: plist integer\n"
"\n"
"Description: Sensitive data exposure bitmask (sum) to operating system.\n"
"\342\200\242 0x01 \342\200\224 Expose the printable booter path as an UEFI variable.\n"
"\342\200\242 0x02 \342\200\224 Expose the OpenCore version as an UEFI variable.\n"
"\342\200\242 0x04 \342\200\224 Expose the OpenCore version in the OpenCore picker menu title.\n"
"\342\200\242 0x08 \342\200\224 Expose OEM information as a set of UEFI variables.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\n"
"\346\217\217\350\277\260\357\274\232\346\225\217\346\204\237\346\225\260\346\215\256\346\232\264\351\234\262\347\273\231\346\223\215\344\275\234\347\263\273\347\273\237\347\232\204\344\275\215\346\216\251\347\240\201\357\274\210\346\200\273\345\222\214\357\274\211\343\200\202\n"
"- 0x01 - \345\260\206\345\217\257\346\211\223\345\215\260\347\232\204\345\220\257\345\212\250\345\231\250\350\267\257\345\276\204\344\275\234\344\270\272UEFI\345\217\230\351\207\217\345\205\254\345\274"
                        "\200\343\200\202\n"
"- 0x02 - \345\260\206OpenCore\347\211\210\346\234\254\344\275\234\344\270\272\344\270\200\344\270\252UEFI\345\217\230\351\207\217\345\205\254\345\274\200\343\200\202\n"
"- 0x04 - \345\234\250OpenCore\351\200\211\345\217\226\345\231\250\350\217\234\345\215\225\346\240\207\351\242\230\344\270\255\346\230\276\347\244\272OpenCore\347\211\210\346\234\254\343\200\202\n"
"- 0x08 - \345\260\206OEM\344\277\241\346\201\257\346\230\276\347\244\272\344\270\272\344\270\200\347\273\204UEFI\345\217\230\351\207\217\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_71->addWidget(label_110);

        editIntExposeSensitiveData = new QLineEdit(frame_edit_14);
        editIntExposeSensitiveData->setObjectName("editIntExposeSensitiveData");
        editIntExposeSensitiveData->setMinimumSize(QSize(150, 0));
        editIntExposeSensitiveData->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_71->addWidget(editIntExposeSensitiveData);

        lblExposeSensitiveData = new QLabel(frame_edit_14);
        lblExposeSensitiveData->setObjectName("lblExposeSensitiveData");
        lblExposeSensitiveData->setMaximumSize(QSize(16777215, 18));

        horizontalLayout_71->addWidget(lblExposeSensitiveData);

        btnExposeSensitiveData = new QToolButton(frame_edit_14);
        btnExposeSensitiveData->setObjectName("btnExposeSensitiveData");

        horizontalLayout_71->addWidget(btnExposeSensitiveData);


        verticalLayout_60->addLayout(horizontalLayout_71);

        horizontalLayout_72 = new QHBoxLayout();
        horizontalLayout_72->setObjectName("horizontalLayout_72");
        label_111 = new QLabel(frame_edit_14);
        label_111->setObjectName("label_111");
#if QT_CONFIG(tooltip)
        label_111->setToolTip(QString::fromUtf8("Type: plist integer, 32 bit\n"
"\n"
"Description: Define operating system detection policy.\n"
"\n"
"This value allows preventing scanning (and booting) untrusted sources based on a bitmask (sum) of a set of flags.\n"
"\n"
"As it is not possible to reliably detect every file system or device type, this feature cannot be fully relied upon in open environments, and additional measures are to be applied.\n"
"\n"
"Third party drivers may introduce additional security (and performance) consideratons following the provided scan policy. The active Scan policy is exposed in the scan-policy variable of 4D1FDA02-38C7-4A6A-9CC6-4BCCA8B30102 GUID for UEFI Boot Services only.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\357\274\21432\344\275\215\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\256\232\344\271\211\346\223\215\344\275\234\347\263\273\347\273\237\347\232\204\346\243\200\346\265\213\347\255\226\347\225\245\343\200\202\n"
"\n"
"\350\277\231\344\270\252\345\200\274\345\205\201\350"
                        "\256\270\346\240\271\346\215\256\344\270\200\347\273\204\346\240\207\345\277\227\347\232\204\344\275\215\346\216\251\347\240\201\357\274\210\346\200\273\345\222\214\357\274\211\346\235\245\351\230\262\346\255\242\346\211\253\346\217\217\357\274\210\345\222\214\345\220\257\345\212\250\357\274\211\344\270\215\345\217\227\344\277\241\344\273\273\347\232\204\346\235\245\346\272\220\343\200\202\n"
"\n"
"\347\224\261\344\272\216\344\270\215\345\217\257\350\203\275\345\217\257\351\235\240\345\234\260\346\243\200\346\265\213\346\257\217\344\270\252\346\226\207\344\273\266\347\263\273\347\273\237\346\210\226\350\256\276\345\244\207\347\261\273\345\236\213\357\274\214\345\234\250\345\274\200\346\224\276\347\232\204\347\216\257\345\242\203\344\270\255\344\270\215\350\203\275\345\256\214\345\205\250\344\276\235\350\265\226\350\277\231\344\270\252\345\212\237\350\203\275\357\274\214\350\246\201\351\207\207\347\224\250\351\242\235\345\244\226\347\232\204\346\216\252\346\226\275\343\200\202\n"
"\n"
"\347\254\254\344\270\211\346"
                        "\226\271\351\251\261\345\212\250\345\217\257\350\203\275\344\274\232\345\234\250\346\217\220\344\276\233\347\232\204\346\211\253\346\217\217\347\255\226\347\225\245\344\271\213\345\220\216\345\274\225\345\205\245\351\242\235\345\244\226\347\232\204\345\256\211\345\205\250\357\274\210\345\222\214\346\200\247\350\203\275\357\274\211\350\200\203\350\231\221\343\200\202\346\264\273\345\212\250\347\232\204\346\211\253\346\217\217\347\255\226\347\225\245\345\234\2504D1FDA02-38C7-4A6A-9CC6-4BCCA8B30102 GUID\347\232\204scan-policy\345\217\230\351\207\217\344\270\255\346\232\264\351\234\262\357\274\214\344\273\205\347\224\250\344\272\216UEFI\345\220\257\345\212\250\346\234\215\345\212\241\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_72->addWidget(label_111);

        editIntScanPolicy = new QLineEdit(frame_edit_14);
        editIntScanPolicy->setObjectName("editIntScanPolicy");
        editIntScanPolicy->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_72->addWidget(editIntScanPolicy);

        lblScanPolicy = new QLabel(frame_edit_14);
        lblScanPolicy->setObjectName("lblScanPolicy");
        lblScanPolicy->setMaximumSize(QSize(16777215, 18));

        horizontalLayout_72->addWidget(lblScanPolicy);

        btnScanPolicy = new QToolButton(frame_edit_14);
        btnScanPolicy->setObjectName("btnScanPolicy");

        horizontalLayout_72->addWidget(btnScanPolicy);


        verticalLayout_60->addLayout(horizontalLayout_72);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnGetPassHash = new QToolButton(frame_edit_14);
        btnGetPassHash->setObjectName("btnGetPassHash");

        horizontalLayout_3->addWidget(btnGetPassHash);

        myeditPassInput = new QLineEdit(frame_edit_14);
        myeditPassInput->setObjectName("myeditPassInput");
        myeditPassInput->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(myeditPassInput);

        progressBar = new QProgressBar(frame_edit_14);
        progressBar->setObjectName("progressBar");
        progressBar->setMaximumSize(QSize(280, 16777215));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);

        horizontalLayout_3->addWidget(progressBar);


        verticalLayout_60->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_93 = new QLabel(frame_edit_14);
        label_93->setObjectName("label_93");
#if QT_CONFIG(tooltip)
        label_93->setToolTip(QString::fromUtf8("Password hash used when EnabledPassword is set.\n"
"\n"
"----\n"
"\n"
"\350\256\276\347\275\256EnabledPassword\346\227\266\344\275\277\347\224\250\347\232\204\345\257\206\347\240\201\345\223\210\345\270\214\345\200\274\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_4->addWidget(label_93);

        editDatPasswordHash = new QLineEdit(frame_edit_14);
        editDatPasswordHash->setObjectName("editDatPasswordHash");

        horizontalLayout_4->addWidget(editDatPasswordHash);


        verticalLayout_60->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_94 = new QLabel(frame_edit_14);
        label_94->setObjectName("label_94");
#if QT_CONFIG(tooltip)
        label_94->setToolTip(QString::fromUtf8(" Password salt used when EnabledPassword is set.\n"
"----\n"
" \350\256\276\347\275\256EnabledPassword\346\227\266\344\275\277\347\224\250\347\232\204\345\257\206\347\240\201\347\233\220\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_5->addWidget(label_94);

        editDatPasswordSalt = new QLineEdit(frame_edit_14);
        editDatPasswordSalt->setObjectName("editDatPasswordSalt");

        horizontalLayout_5->addWidget(editDatPasswordSalt);


        verticalLayout_60->addLayout(horizontalLayout_5);


        gridLayout_22->addWidget(frame_edit_14, 0, 1, 1, 1);

        tabMisc->addTab(tabMisc3, QString());
        tabMisc4 = new QWidget();
        tabMisc4->setObjectName("tabMisc4");
        gridLayout_20 = new QGridLayout(tabMisc4);
        gridLayout_20->setObjectName("gridLayout_20");
        tableBlessOverride = new QTableWidget(tabMisc4);
        if (tableBlessOverride->columnCount() < 1)
            tableBlessOverride->setColumnCount(1);
        tableBlessOverride->setObjectName("tableBlessOverride");
        tableBlessOverride->setColumnCount(1);

        gridLayout_20->addWidget(tableBlessOverride, 0, 0, 1, 1);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName("verticalLayout_20");
        btnMiscBO_Add = new QToolButton(tabMisc4);
        btnMiscBO_Add->setObjectName("btnMiscBO_Add");
        btnMiscBO_Add->setMaximumSize(QSize(20, 16777215));
        btnMiscBO_Add->setIconSize(QSize(20, 20));

        verticalLayout_20->addWidget(btnMiscBO_Add);

        btnMiscBO_Del = new QToolButton(tabMisc4);
        btnMiscBO_Del->setObjectName("btnMiscBO_Del");
        btnMiscBO_Del->setMaximumSize(QSize(20, 16777215));
        btnMiscBO_Del->setIconSize(QSize(20, 20));

        verticalLayout_20->addWidget(btnMiscBO_Del);


        gridLayout_20->addLayout(verticalLayout_20, 0, 1, 1, 1);

        tabMisc->addTab(tabMisc4, QString());
        tabMisc5 = new QWidget();
        tabMisc5->setObjectName("tabMisc5");
        gridLayout_21 = new QGridLayout(tabMisc5);
        gridLayout_21->setObjectName("gridLayout_21");
        tableEntries = new QTableWidget(tabMisc5);
        if (tableEntries->columnCount() < 7)
            tableEntries->setColumnCount(7);
        tableEntries->setObjectName("tableEntries");
        tableEntries->setColumnCount(7);

        gridLayout_21->addWidget(tableEntries, 0, 0, 1, 1);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName("verticalLayout_21");
        btnMiscEntries_Add = new QToolButton(tabMisc5);
        btnMiscEntries_Add->setObjectName("btnMiscEntries_Add");
        btnMiscEntries_Add->setMaximumSize(QSize(20, 16777215));
        btnMiscEntries_Add->setIconSize(QSize(20, 20));

        verticalLayout_21->addWidget(btnMiscEntries_Add);

        btnMiscEntries_Del = new QToolButton(tabMisc5);
        btnMiscEntries_Del->setObjectName("btnMiscEntries_Del");
        btnMiscEntries_Del->setMaximumSize(QSize(20, 16777215));
        btnMiscEntries_Del->setIconSize(QSize(20, 20));

        verticalLayout_21->addWidget(btnMiscEntries_Del);


        gridLayout_21->addLayout(verticalLayout_21, 0, 1, 1, 1);

        tabMisc->addTab(tabMisc5, QString());
        tabMisc6 = new QWidget();
        tabMisc6->setObjectName("tabMisc6");
        gridLayout_16 = new QGridLayout(tabMisc6);
        gridLayout_16->setObjectName("gridLayout_16");
        tableTools = new QTableWidget(tabMisc6);
        if (tableTools->columnCount() < 8)
            tableTools->setColumnCount(8);
        tableTools->setObjectName("tableTools");
        tableTools->setColumnCount(8);

        gridLayout_16->addWidget(tableTools, 0, 0, 1, 1);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName("verticalLayout_22");
        btnMiscTools_Add = new QToolButton(tabMisc6);
        btnMiscTools_Add->setObjectName("btnMiscTools_Add");
        btnMiscTools_Add->setMaximumSize(QSize(20, 16777215));
        btnMiscTools_Add->setIconSize(QSize(20, 20));

        verticalLayout_22->addWidget(btnMiscTools_Add);

        btnMiscTools_Del = new QToolButton(tabMisc6);
        btnMiscTools_Del->setObjectName("btnMiscTools_Del");
        btnMiscTools_Del->setMaximumSize(QSize(20, 16777215));
        btnMiscTools_Del->setIconSize(QSize(20, 20));

        verticalLayout_22->addWidget(btnMiscTools_Del);

        btnOpenToolsDir = new QToolButton(tabMisc6);
        btnOpenToolsDir->setObjectName("btnOpenToolsDir");
        btnOpenToolsDir->setMaximumSize(QSize(20, 16777215));
        btnOpenToolsDir->setIconSize(QSize(20, 20));

        verticalLayout_22->addWidget(btnOpenToolsDir);


        gridLayout_16->addLayout(verticalLayout_22, 0, 1, 1, 1);

        tabMisc->addTab(tabMisc6, QString());
        tabMisc7 = new QWidget();
        tabMisc7->setObjectName("tabMisc7");
        gridLayout_50 = new QGridLayout(tabMisc7);
        gridLayout_50->setObjectName("gridLayout_50");
        frame_chk_29 = new QFrame(tabMisc7);
        frame_chk_29->setObjectName("frame_chk_29");
        frame_chk_29->setMinimumSize(QSize(300, 0));
        frame_chk_29->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_29->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_48 = new QGridLayout(frame_chk_29);
        gridLayout_48->setObjectName("gridLayout_48");
        verticalLayout_74 = new QVBoxLayout();
        verticalLayout_74->setObjectName("verticalLayout_74");

        gridLayout_48->addLayout(verticalLayout_74, 0, 0, 1, 1);


        gridLayout_50->addWidget(frame_chk_29, 0, 0, 1, 1);

        frame_edit_23 = new QFrame(tabMisc7);
        frame_edit_23->setObjectName("frame_edit_23");
        frame_edit_23->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_23->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_75 = new QVBoxLayout(frame_edit_23);
        verticalLayout_75->setObjectName("verticalLayout_75");
        gboxCustom = new QGroupBox(frame_edit_23);
        gboxCustom->setObjectName("gboxCustom");
        gridLayout_51 = new QGridLayout(gboxCustom);
        gridLayout_51->setObjectName("gridLayout_51");
        gridLayout_49 = new QGridLayout();
        gridLayout_49->setObjectName("gridLayout_49");
        editIntFifoControl = new QLineEdit(gboxCustom);
        editIntFifoControl->setObjectName("editIntFifoControl");

        gridLayout_49->addWidget(editIntFifoControl, 3, 1, 1, 1);

        label_130 = new QLabel(gboxCustom);
        label_130->setObjectName("label_130");

        gridLayout_49->addWidget(label_130, 3, 0, 1, 1);

        label_131 = new QLabel(gboxCustom);
        label_131->setObjectName("label_131");

        gridLayout_49->addWidget(label_131, 4, 0, 1, 1);

        editIntBaudRate = new QLineEdit(gboxCustom);
        editIntBaudRate->setObjectName("editIntBaudRate");

        gridLayout_49->addWidget(editIntBaudRate, 0, 1, 1, 1);

        editIntRegisterAccessWidth = new QLineEdit(gboxCustom);
        editIntRegisterAccessWidth->setObjectName("editIntRegisterAccessWidth");

        gridLayout_49->addWidget(editIntRegisterAccessWidth, 6, 1, 1, 1);

        editIntRegisterStride = new QLineEdit(gboxCustom);
        editIntRegisterStride->setObjectName("editIntRegisterStride");

        gridLayout_49->addWidget(editIntRegisterStride, 8, 1, 1, 1);

        editIntLineControl = new QLineEdit(gboxCustom);
        editIntLineControl->setObjectName("editIntLineControl");

        gridLayout_49->addWidget(editIntLineControl, 4, 1, 1, 1);

        label_128 = new QLabel(gboxCustom);
        label_128->setObjectName("label_128");

        gridLayout_49->addWidget(label_128, 0, 0, 1, 1);

        label_134 = new QLabel(gboxCustom);
        label_134->setObjectName("label_134");

        gridLayout_49->addWidget(label_134, 7, 0, 1, 1);

        label_127 = new QLabel(gboxCustom);
        label_127->setObjectName("label_127");

        gridLayout_49->addWidget(label_127, 1, 0, 1, 1);

        editIntRegisterBase = new QLineEdit(gboxCustom);
        editIntRegisterBase->setObjectName("editIntRegisterBase");

        gridLayout_49->addWidget(editIntRegisterBase, 7, 1, 1, 1);

        label_129 = new QLabel(gboxCustom);
        label_129->setObjectName("label_129");

        gridLayout_49->addWidget(label_129, 2, 0, 1, 1);

        editDatPciDeviceInfo = new QLineEdit(gboxCustom);
        editDatPciDeviceInfo->setObjectName("editDatPciDeviceInfo");

        gridLayout_49->addWidget(editDatPciDeviceInfo, 5, 1, 1, 1);

        label_133 = new QLabel(gboxCustom);
        label_133->setObjectName("label_133");

        gridLayout_49->addWidget(label_133, 6, 0, 1, 1);

        label_132 = new QLabel(gboxCustom);
        label_132->setObjectName("label_132");

        gridLayout_49->addWidget(label_132, 5, 0, 1, 1);

        label_135 = new QLabel(gboxCustom);
        label_135->setObjectName("label_135");

        gridLayout_49->addWidget(label_135, 8, 0, 1, 1);

        editIntClockRate = new QLineEdit(gboxCustom);
        editIntClockRate->setObjectName("editIntClockRate");

        gridLayout_49->addWidget(editIntClockRate, 1, 1, 1, 1);

        chkUseHardwareFlowControl = new QCheckBox(gboxCustom);
        chkUseHardwareFlowControl->setObjectName("chkUseHardwareFlowControl");

        gridLayout_49->addWidget(chkUseHardwareFlowControl, 10, 0, 1, 1);

        chkDetectCable = new QCheckBox(gboxCustom);
        chkDetectCable->setObjectName("chkDetectCable");

        gridLayout_49->addWidget(chkDetectCable, 9, 0, 1, 1);

        editIntExtendedTxFifoSize = new QLineEdit(gboxCustom);
        editIntExtendedTxFifoSize->setObjectName("editIntExtendedTxFifoSize");

        gridLayout_49->addWidget(editIntExtendedTxFifoSize, 2, 1, 1, 1);

        chkUseMmio = new QCheckBox(gboxCustom);
        chkUseMmio->setObjectName("chkUseMmio");

        gridLayout_49->addWidget(chkUseMmio, 11, 0, 1, 1);


        gridLayout_51->addLayout(gridLayout_49, 0, 0, 1, 1);


        verticalLayout_75->addWidget(gboxCustom);


        gridLayout_50->addWidget(frame_edit_23, 0, 1, 1, 1);

        tabMisc->addTab(tabMisc7, QString());

        gridLayout_62->addWidget(tabMisc, 0, 0, 1, 1);

        tabTotal->addTab(tab_5, QString());
        tabTotal->setTabText(tabTotal->indexOf(tab_5), QString::fromUtf8("Misc"));
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        gridLayout_23 = new QGridLayout(tab_6);
        gridLayout_23->setObjectName("gridLayout_23");
        tabNVRAM = new QTabWidget(tab_6);
        tabNVRAM->setObjectName("tabNVRAM");
        tabNVRAM->setTabShape(QTabWidget::TabShape::Rounded);
        tabNVRAM->setDocumentMode(true);
        tabNVRAM1 = new QWidget();
        tabNVRAM1->setObjectName("tabNVRAM1");
        gridLayout_17 = new QGridLayout(tabNVRAM1);
        gridLayout_17->setObjectName("gridLayout_17");
        gridLayout_nv_add = new QGridLayout();
        gridLayout_nv_add->setObjectName("gridLayout_nv_add");
        table_nv_add0 = new QTableWidget(tabNVRAM1);
        if (table_nv_add0->columnCount() < 1)
            table_nv_add0->setColumnCount(1);
        table_nv_add0->setObjectName("table_nv_add0");
        table_nv_add0->setColumnCount(1);

        gridLayout_nv_add->addWidget(table_nv_add0, 0, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        btnNVRAMAdd_Add0 = new QToolButton(tabNVRAM1);
        btnNVRAMAdd_Add0->setObjectName("btnNVRAMAdd_Add0");
        btnNVRAMAdd_Add0->setMaximumSize(QSize(20, 16777215));
        btnNVRAMAdd_Add0->setIconSize(QSize(20, 20));

        verticalLayout_9->addWidget(btnNVRAMAdd_Add0);

        btnNVRAMAdd_Del0 = new QToolButton(tabNVRAM1);
        btnNVRAMAdd_Del0->setObjectName("btnNVRAMAdd_Del0");
        btnNVRAMAdd_Del0->setMaximumSize(QSize(20, 16777215));
        btnNVRAMAdd_Del0->setIconSize(QSize(20, 20));

        verticalLayout_9->addWidget(btnNVRAMAdd_Del0);

        btnPresetNVAdd = new QToolButton(tabNVRAM1);
        btnPresetNVAdd->setObjectName("btnPresetNVAdd");
        btnPresetNVAdd->setMaximumSize(QSize(20, 16777215));

        verticalLayout_9->addWidget(btnPresetNVAdd);


        gridLayout_nv_add->addLayout(verticalLayout_9, 0, 1, 1, 1);

        table_nv_add = new QTableWidget(tabNVRAM1);
        if (table_nv_add->columnCount() < 3)
            table_nv_add->setColumnCount(3);
        table_nv_add->setObjectName("table_nv_add");
        table_nv_add->setColumnCount(3);

        gridLayout_nv_add->addWidget(table_nv_add, 0, 2, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        btnNVRAMAdd_Add = new QToolButton(tabNVRAM1);
        btnNVRAMAdd_Add->setObjectName("btnNVRAMAdd_Add");
        btnNVRAMAdd_Add->setMaximumSize(QSize(20, 16777215));
        btnNVRAMAdd_Add->setIconSize(QSize(20, 20));

        verticalLayout_10->addWidget(btnNVRAMAdd_Add);

        btnNVRAMAdd_Del = new QToolButton(tabNVRAM1);
        btnNVRAMAdd_Del->setObjectName("btnNVRAMAdd_Del");
        btnNVRAMAdd_Del->setMaximumSize(QSize(20, 16777215));
        btnNVRAMAdd_Del->setIconSize(QSize(20, 20));

        verticalLayout_10->addWidget(btnNVRAMAdd_Del);

        btnAddbootArgs = new QToolButton(tabNVRAM1);
        btnAddbootArgs->setObjectName("btnAddbootArgs");
        btnAddbootArgs->setEnabled(true);
        btnAddbootArgs->setMaximumSize(QSize(20, 16777215));

        verticalLayout_10->addWidget(btnAddbootArgs);


        gridLayout_nv_add->addLayout(verticalLayout_10, 0, 3, 1, 1);


        gridLayout_17->addLayout(gridLayout_nv_add, 0, 0, 1, 1);

        tabNVRAM->addTab(tabNVRAM1, QString());
        tabNVRAM2 = new QWidget();
        tabNVRAM2->setObjectName("tabNVRAM2");
        gridLayout_18 = new QGridLayout(tabNVRAM2);
        gridLayout_18->setObjectName("gridLayout_18");
        table_nv_del0 = new QTableWidget(tabNVRAM2);
        if (table_nv_del0->columnCount() < 1)
            table_nv_del0->setColumnCount(1);
        table_nv_del0->setObjectName("table_nv_del0");
        table_nv_del0->setMinimumSize(QSize(350, 0));
        table_nv_del0->setColumnCount(1);

        gridLayout_18->addWidget(table_nv_del0, 0, 0, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        btnNVRAMDel_Add0 = new QToolButton(tabNVRAM2);
        btnNVRAMDel_Add0->setObjectName("btnNVRAMDel_Add0");
        btnNVRAMDel_Add0->setMaximumSize(QSize(20, 16777215));
        btnNVRAMDel_Add0->setIconSize(QSize(20, 20));

        verticalLayout_13->addWidget(btnNVRAMDel_Add0);

        btnNVRAMDel_Del0 = new QToolButton(tabNVRAM2);
        btnNVRAMDel_Del0->setObjectName("btnNVRAMDel_Del0");
        btnNVRAMDel_Del0->setMaximumSize(QSize(20, 16777215));
        btnNVRAMDel_Del0->setIconSize(QSize(20, 20));

        verticalLayout_13->addWidget(btnNVRAMDel_Del0);

        btnPresetNVDelete = new QToolButton(tabNVRAM2);
        btnPresetNVDelete->setObjectName("btnPresetNVDelete");
        btnPresetNVDelete->setMaximumSize(QSize(20, 16777215));

        verticalLayout_13->addWidget(btnPresetNVDelete);


        gridLayout_18->addLayout(verticalLayout_13, 0, 1, 1, 1);

        table_nv_del = new QTableWidget(tabNVRAM2);
        if (table_nv_del->columnCount() < 1)
            table_nv_del->setColumnCount(1);
        table_nv_del->setObjectName("table_nv_del");
        table_nv_del->setColumnCount(1);

        gridLayout_18->addWidget(table_nv_del, 0, 2, 1, 1);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        btnNVRAMDel_Add = new QToolButton(tabNVRAM2);
        btnNVRAMDel_Add->setObjectName("btnNVRAMDel_Add");
        btnNVRAMDel_Add->setMaximumSize(QSize(20, 16777215));
        btnNVRAMDel_Add->setIconSize(QSize(20, 20));

        verticalLayout_14->addWidget(btnNVRAMDel_Add);

        btnNVRAMDel_Del = new QToolButton(tabNVRAM2);
        btnNVRAMDel_Del->setObjectName("btnNVRAMDel_Del");
        btnNVRAMDel_Del->setMaximumSize(QSize(20, 16777215));
        btnNVRAMDel_Del->setIconSize(QSize(20, 20));

        verticalLayout_14->addWidget(btnNVRAMDel_Del);


        gridLayout_18->addLayout(verticalLayout_14, 0, 3, 1, 1);

        tabNVRAM->addTab(tabNVRAM2, QString());
        tabNVRAM3 = new QWidget();
        tabNVRAM3->setObjectName("tabNVRAM3");
        gridLayout_19 = new QGridLayout(tabNVRAM3);
        gridLayout_19->setObjectName("gridLayout_19");
        table_nv_ls0 = new QTableWidget(tabNVRAM3);
        if (table_nv_ls0->columnCount() < 1)
            table_nv_ls0->setColumnCount(1);
        table_nv_ls0->setObjectName("table_nv_ls0");
        table_nv_ls0->setMinimumSize(QSize(350, 0));
        table_nv_ls0->setColumnCount(1);

        gridLayout_19->addWidget(table_nv_ls0, 0, 0, 1, 1);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        btnNVRAMLS_Add0 = new QToolButton(tabNVRAM3);
        btnNVRAMLS_Add0->setObjectName("btnNVRAMLS_Add0");
        btnNVRAMLS_Add0->setMaximumSize(QSize(20, 16777215));
        btnNVRAMLS_Add0->setIconSize(QSize(20, 20));

        verticalLayout_15->addWidget(btnNVRAMLS_Add0);

        btnNVRAMLS_Del0 = new QToolButton(tabNVRAM3);
        btnNVRAMLS_Del0->setObjectName("btnNVRAMLS_Del0");
        btnNVRAMLS_Del0->setMaximumSize(QSize(20, 16777215));
        btnNVRAMLS_Del0->setIconSize(QSize(20, 20));

        verticalLayout_15->addWidget(btnNVRAMLS_Del0);

        btnPresetNVLegacy = new QToolButton(tabNVRAM3);
        btnPresetNVLegacy->setObjectName("btnPresetNVLegacy");
        btnPresetNVLegacy->setMaximumSize(QSize(20, 16777215));

        verticalLayout_15->addWidget(btnPresetNVLegacy);


        gridLayout_19->addLayout(verticalLayout_15, 0, 1, 1, 1);

        table_nv_ls = new QTableWidget(tabNVRAM3);
        if (table_nv_ls->columnCount() < 1)
            table_nv_ls->setColumnCount(1);
        table_nv_ls->setObjectName("table_nv_ls");
        table_nv_ls->setColumnCount(1);

        gridLayout_19->addWidget(table_nv_ls, 0, 2, 1, 1);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        btnNVRAMLS_Add = new QToolButton(tabNVRAM3);
        btnNVRAMLS_Add->setObjectName("btnNVRAMLS_Add");
        btnNVRAMLS_Add->setMaximumSize(QSize(20, 16777215));
        btnNVRAMLS_Add->setIconSize(QSize(20, 20));

        verticalLayout_16->addWidget(btnNVRAMLS_Add);

        btnNVRAMLS_Del = new QToolButton(tabNVRAM3);
        btnNVRAMLS_Del->setObjectName("btnNVRAMLS_Del");
        btnNVRAMLS_Del->setMaximumSize(QSize(20, 16777215));
        btnNVRAMLS_Del->setIconSize(QSize(20, 20));

        verticalLayout_16->addWidget(btnNVRAMLS_Del);


        gridLayout_19->addLayout(verticalLayout_16, 0, 3, 1, 1);

        tabNVRAM->addTab(tabNVRAM3, QString());

        gridLayout_23->addWidget(tabNVRAM, 0, 0, 1, 1);

        gboxNVRAM = new QGroupBox(tab_6);
        gboxNVRAM->setObjectName("gboxNVRAM");
        gridLayout_15 = new QGridLayout(gboxNVRAM);
        gridLayout_15->setObjectName("gridLayout_15");
        frame_chk_24 = new QFrame(gboxNVRAM);
        frame_chk_24->setObjectName("frame_chk_24");
        frame_chk_24->setFrameShape(QFrame::Shape::NoFrame);
        frame_chk_24->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_69 = new QVBoxLayout(frame_chk_24);
        verticalLayout_69->setObjectName("verticalLayout_69");
        chkLegacyEnable = new QCheckBox(frame_chk_24);
        chkLegacyEnable->setObjectName("chkLegacyEnable");
#if QT_CONFIG(tooltip)
        chkLegacyEnable->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_69->addWidget(chkLegacyEnable);


        gridLayout_15->addWidget(frame_chk_24, 0, 0, 1, 1);

        frame_chk_25 = new QFrame(gboxNVRAM);
        frame_chk_25->setObjectName("frame_chk_25");
        frame_chk_25->setFrameShape(QFrame::Shape::NoFrame);
        frame_chk_25->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_72 = new QVBoxLayout(frame_chk_25);
        verticalLayout_72->setObjectName("verticalLayout_72");
        chkLegacyOverwrite = new QCheckBox(frame_chk_25);
        chkLegacyOverwrite->setObjectName("chkLegacyOverwrite");

        verticalLayout_72->addWidget(chkLegacyOverwrite);


        gridLayout_15->addWidget(frame_chk_25, 0, 1, 1, 1);

        frame_chk_26 = new QFrame(gboxNVRAM);
        frame_chk_26->setObjectName("frame_chk_26");
        frame_chk_26->setFrameShape(QFrame::Shape::NoFrame);
        frame_chk_26->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_73 = new QVBoxLayout(frame_chk_26);
        verticalLayout_73->setObjectName("verticalLayout_73");
        chkWriteFlash = new QCheckBox(frame_chk_26);
        chkWriteFlash->setObjectName("chkWriteFlash");

        verticalLayout_73->addWidget(chkWriteFlash);


        gridLayout_15->addWidget(frame_chk_26, 0, 2, 1, 1);

        frame_edit_21 = new QFrame(gboxNVRAM);
        frame_edit_21->setObjectName("frame_edit_21");
        frame_edit_21->setFrameShape(QFrame::Shape::NoFrame);
        frame_edit_21->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_71 = new QVBoxLayout(frame_edit_21);
        verticalLayout_71->setObjectName("verticalLayout_71");
        verticalLayout_70 = new QVBoxLayout();
        verticalLayout_70->setObjectName("verticalLayout_70");

        verticalLayout_71->addLayout(verticalLayout_70);


        gridLayout_15->addWidget(frame_edit_21, 0, 3, 1, 1);


        gridLayout_23->addWidget(gboxNVRAM, 1, 0, 1, 1);

        tabTotal->addTab(tab_6, QString());
        tabTotal->setTabText(tabTotal->indexOf(tab_6), QString::fromUtf8("NVRAM"));
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        gridLayout_26 = new QGridLayout(tab_7);
        gridLayout_26->setObjectName("gridLayout_26");
        tabPlatformInfo = new QTabWidget(tab_7);
        tabPlatformInfo->setObjectName("tabPlatformInfo");
        tabPlatformInfo->setTabShape(QTabWidget::TabShape::Rounded);
        tabPlatformInfo->setDocumentMode(true);
        tabPlatformInfo1 = new QWidget();
        tabPlatformInfo1->setObjectName("tabPlatformInfo1");
        gridLayout_73 = new QGridLayout(tabPlatformInfo1);
        gridLayout_73->setObjectName("gridLayout_73");
        frame_chk_9 = new QFrame(tabPlatformInfo1);
        frame_chk_9->setObjectName("frame_chk_9");
        frame_chk_9->setMaximumSize(QSize(200, 16777215));
        frame_chk_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_9->setFrameShadow(QFrame::Shadow::Plain);
        frame_chk_9->setMidLineWidth(0);
        verticalLayout_47 = new QVBoxLayout(frame_chk_9);
        verticalLayout_47->setObjectName("verticalLayout_47");
        chkSpoofVendor = new QCheckBox(frame_chk_9);
        chkSpoofVendor->setObjectName("chkSpoofVendor");
#if QT_CONFIG(tooltip)
        chkSpoofVendor->setToolTip(QString::fromUtf8("Sets SMBIOS vendor fields to Acidanthera.\n"
"\n"
"----\n"
"\n"
"\345\260\206SMBIOS\344\276\233\345\272\224\345\225\206\345\255\227\346\256\265\350\256\276\347\275\256\344\270\272Acidanthera\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_47->addWidget(chkSpoofVendor);

        chkMaxBIOSVersion = new QCheckBox(frame_chk_9);
        chkMaxBIOSVersion->setObjectName("chkMaxBIOSVersion");
#if QT_CONFIG(tooltip)
        chkMaxBIOSVersion->setToolTip(QString::fromUtf8(" Sets BIOSVersion to 9999.999.999.999.999, recommended for legacy Macs when using Automatic PlatformInfo to avoid BIOS updates in unofficially supported macOS versions.\n"
"\n"
"----\n"
"\n"
" \345\260\206 BIOSVersion \350\256\276\347\275\256\344\270\272 9999.999.999.999.999\357\274\214\345\273\272\350\256\256\350\200\201\346\227\247\347\241\254\344\273\266\347\232\204\346\234\272\345\231\250\351\200\211\346\213\251 Automatic\345\271\263\345\217\260\344\277\241\346\201\257\346\227\266\344\275\277\347\224\250\357\274\214\344\273\245\351\201\277\345\205\215\345\234\250\351\235\236\345\256\230\346\226\271\346\224\257\346\214\201\347\232\204 macOS \347\211\210\346\234\254\344\270\255\350\277\233\350\241\214 BIOS \346\233\264\346\226\260\343\200\202\n"
"\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_47->addWidget(chkMaxBIOSVersion);

        chkAdviseFeatures = new QCheckBox(frame_chk_9);
        chkAdviseFeatures->setObjectName("chkAdviseFeatures");
#if QT_CONFIG(tooltip)
        chkAdviseFeatures->setToolTip(QString::fromUtf8("Type: plist boolean\n"
"\n"
"Description: Updates FirmwareFeatures with supported bits.\n"
"\n"
"Added bits to FirmwareFeatures: \342\200\242 FW_FEATURE_SUPPORTS_CSM_LEGACY_MODE (0x1) - Without this bit, it is not possible to reboot to Windows installed on a drive with an EFI partition that is not the first partition on the disk.\n"
"\n"
"\342\200\242 FW_FEATURE_SUPPORTS_UEFI_WINDOWS_BOOT (0x20000000) - Without this bit, it is not possible to reboot to Windows installed on a drive with an EFI partition that is the first partition on the disk.\n"
"\n"
"\342\200\242 FW_FEATURE_SUPPORTS_APFS (0x00080000) - Without this bit, it is not possible to install macOS on an APFS disk.\n"
"\n"
"Note: On most newer firmwares these bits are already set, the option may be necessary when \"upgrading\" the firmware with new features.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\346\217\217\350\277\260\357\274\232\347\224\250\346\224\257\346\214\201\347\232\204\344\275\215\346"
                        "\233\264\346\226\260FirmwareFeatures\343\200\202\n"
"\n"
"\346\267\273\345\212\240\345\210\260FirmwareFeatures\347\232\204\344\275\215\357\274\232\n"
"- FW_FEATURE_SUPPORTS_CSM_LEGACY_MODE (0x1) - \346\262\241\346\234\211\350\277\231\344\270\252\344\275\215\357\274\214\344\270\215\345\217\257\350\203\275\351\207\215\346\226\260\345\220\257\345\212\250\345\256\211\350\243\205\345\234\250EFI\345\210\206\345\214\272\344\270\215\346\230\257\347\243\201\347\233\230\344\270\212\347\254\254\344\270\200\344\270\252\345\210\206\345\214\272\347\232\204\351\251\261\345\212\250\345\231\250\344\270\212\347\232\204Windows\343\200\202\n"
"\n"
"- FW_FEATURE_SUPPORTS_UEFI_WINDOWS_BOOT (0x20000000) - \346\262\241\346\234\211\350\277\231\344\270\252\344\275\215\357\274\214\344\270\215\345\217\257\350\203\275\351\207\215\346\226\260\345\220\257\345\212\250\345\256\211\350\243\205\345\234\250EFI\345\210\206\345\214\272\346\230\257\347\243\201\347\233\230\344\270\212\347\254\254\344\270\200\344\270\252\345\210\206\345\214\272\347\232"
                        "\204\351\251\261\345\212\250\345\231\250\344\270\212\347\232\204Windows\343\200\202\n"
"\n"
"- FW_FEATURE_SUPPORTS_APFS (0x00080000) - \346\262\241\346\234\211\350\277\231\344\270\252\344\275\215\357\274\214\344\270\215\345\217\257\350\203\275\345\234\250APFS\347\243\201\347\233\230\344\270\212\345\256\211\350\243\205macOS\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\234\250\345\244\247\345\244\232\346\225\260\350\276\203\346\226\260\347\232\204\345\233\272\344\273\266\344\270\212\357\274\214\350\277\231\344\272\233\344\275\215\345\267\262\347\273\217\350\242\253\350\256\276\347\275\256\344\272\206\357\274\214\345\275\223\347\224\250\346\226\260\345\212\237\350\203\275 \"\345\215\207\347\272\247 \"\345\233\272\344\273\266\346\227\266\357\274\214\350\277\231\344\270\252\351\200\211\351\241\271\345\217\257\350\203\275\346\230\257\345\277\205\350\246\201\347\232\204\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_47->addWidget(chkAdviseFeatures);


        gridLayout_73->addWidget(frame_chk_9, 1, 0, 1, 1);

        frame_edit_6 = new QFrame(tabPlatformInfo1);
        frame_edit_6->setObjectName("frame_edit_6");
        frame_edit_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_6->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_28 = new QVBoxLayout(frame_edit_6);
        verticalLayout_28->setObjectName("verticalLayout_28");
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        label_18 = new QLabel(frame_edit_6);
        label_18->setObjectName("label_18");
#if QT_CONFIG(tooltip)
        label_18->setToolTip(QString::fromUtf8("Refer to SMBIOS SystemProductName."));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_22->addWidget(label_18);

        cboxSystemProductName = new QComboBox(frame_edit_6);
        cboxSystemProductName->setObjectName("cboxSystemProductName");
        cboxSystemProductName->setMinimumSize(QSize(0, 0));
        cboxSystemProductName->setMaximumSize(QSize(16777215, 16777215));
        cboxSystemProductName->setEditable(true);

        horizontalLayout_22->addWidget(cboxSystemProductName);

        btnSystemProductName = new QToolButton(frame_edit_6);
        btnSystemProductName->setObjectName("btnSystemProductName");

        horizontalLayout_22->addWidget(btnSystemProductName);

        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_42);


        verticalLayout_28->addLayout(horizontalLayout_22);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_19 = new QLabel(frame_edit_6);
        label_19->setObjectName("label_19");
#if QT_CONFIG(tooltip)
        label_19->setToolTip(QString::fromUtf8(" Refer to SMBIOS SystemSerialNumber."));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_8->addWidget(label_19);

        editSystemSerialNumber = new QLineEdit(frame_edit_6);
        editSystemSerialNumber->setObjectName("editSystemSerialNumber");

        horizontalLayout_8->addWidget(editSystemSerialNumber);

        btnSystemSerialNumber = new QToolButton(frame_edit_6);
        btnSystemSerialNumber->setObjectName("btnSystemSerialNumber");

        horizontalLayout_8->addWidget(btnSystemSerialNumber);

        label_17 = new QLabel(frame_edit_6);
        label_17->setObjectName("label_17");

        horizontalLayout_8->addWidget(label_17);

        editMLB = new QLineEdit(frame_edit_6);
        editMLB->setObjectName("editMLB");

        horizontalLayout_8->addWidget(editMLB);


        verticalLayout_28->addLayout(horizontalLayout_8);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        label_21 = new QLabel(frame_edit_6);
        label_21->setObjectName("label_21");
#if QT_CONFIG(tooltip)
        label_21->setToolTip(QString::fromUtf8("Refer to SMBIOS SystemUUID."));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_26->addWidget(label_21);

        editSystemUUID = new QLineEdit(frame_edit_6);
        editSystemUUID->setObjectName("editSystemUUID");

        horizontalLayout_26->addWidget(editSystemUUID);

        btnSystemUUID = new QToolButton(frame_edit_6);
        btnSystemUUID->setObjectName("btnSystemUUID");

        horizontalLayout_26->addWidget(btnSystemUUID);

        label_20 = new QLabel(frame_edit_6);
        label_20->setObjectName("label_20");
#if QT_CONFIG(tooltip)
        label_20->setToolTip(QString::fromUtf8("Refer to 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:ROM."));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_26->addWidget(label_20);

        editDatROM = new QLineEdit(frame_edit_6);
        editDatROM->setObjectName("editDatROM");
        editDatROM->setMinimumSize(QSize(0, 0));
        editDatROM->setMaximumSize(QSize(135, 16777215));

        horizontalLayout_26->addWidget(editDatROM);

        btnROM = new QToolButton(frame_edit_6);
        btnROM->setObjectName("btnROM");

        horizontalLayout_26->addWidget(btnROM);


        verticalLayout_28->addLayout(horizontalLayout_26);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setObjectName("horizontalLayout_46");
        label_96 = new QLabel(frame_edit_6);
        label_96->setObjectName("label_96");
#if QT_CONFIG(tooltip)
        label_96->setToolTip(QString::fromUtf8("Valid values:\n"
"\n"
"\342\200\242 Auto \342\200\224 use the original PlatformFeature value.\n"
"\n"
"\342\200\242 Upgradable \342\200\224 explicitly unset PT_FEATURE_HAS_SOLDERED_SYSTEM_MEMORY (0x2) in PlatformFeature. \n"
"\n"
"\342\200\242 Soldered \342\200\224 explicitly set PT_FEATURE_HAS_SOLDERED_SYSTEM_MEMORY (0x2) in PlatformFeature.\n"
"\n"
"Note: On certain Mac models (namely MacBookPro10,x and any MacBookAir), SPMemoryReporter.spreporter will ignore PT_FEATURE_HAS_SOLDERED_SYSTEM_MEMORY and assume that system memory is non-upgradable.\n"
"\n"
"----\n"
"\n"
"\346\234\211\346\225\210\345\200\274\357\274\232\n"
"\n"
"- Auto - \344\275\277\347\224\250\345\216\237\345\247\213\347\232\204PlatformFeature\345\200\274\343\200\202\n"
"\n"
"- Upgradable - \345\234\250PlatformFeature\344\270\255\346\230\276\345\274\217\345\217\226\346\266\210\350\256\276\347\275\256PT_FEATURE_HAS_SOLDERED_SYSTEM_MEMORY (0x2)\343\200\202\n"
"\n"
"- Soldered - \345\234\250PlatformFeature\344\270\255\346\230\216\347\241\256\350\256"
                        "\276\347\275\256PT_FEATURE_HAS_SOLDERED_SYSTEM_MEMORY (0x2)\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\234\250\346\237\220\344\272\233 Mac \346\234\272\345\236\213\344\270\212\357\274\210\345\215\263 MacBookPro10,x \345\222\214\344\273\273\344\275\225 MacBookAir\357\274\211\357\274\214SPMemoryReporter.spreporter \345\260\206\345\277\275\347\225\245 PT_FEATURE_HAS_SOLDERED_SYSTEM_MEMORY\357\274\214\345\271\266\345\201\207\350\256\276\347\263\273\347\273\237\345\206\205\345\255\230\344\270\215\345\217\257\345\215\207\347\272\247\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_46->addWidget(label_96);

        cboxSystemMemoryStatus = new QComboBox(frame_edit_6);
        cboxSystemMemoryStatus->setObjectName("cboxSystemMemoryStatus");
        cboxSystemMemoryStatus->setEditable(true);

        horizontalLayout_46->addWidget(cboxSystemMemoryStatus);

        label_95 = new QLabel(frame_edit_6);
        label_95->setObjectName("label_95");

        horizontalLayout_46->addWidget(label_95);

        editIntProcessorType_Generic = new QLineEdit(frame_edit_6);
        editIntProcessorType_Generic->setObjectName("editIntProcessorType_Generic");

        horizontalLayout_46->addWidget(editIntProcessorType_Generic);


        verticalLayout_28->addLayout(horizontalLayout_46);


        gridLayout_73->addWidget(frame_edit_6, 1, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        btnImport = new QPushButton(tabPlatformInfo1);
        btnImport->setObjectName("btnImport");

        horizontalLayout_7->addWidget(btnImport);

        btnExport = new QPushButton(tabPlatformInfo1);
        btnExport->setObjectName("btnExport");

        horizontalLayout_7->addWidget(btnExport);


        gridLayout_73->addLayout(horizontalLayout_7, 0, 0, 1, 2);

        tabPlatformInfo->addTab(tabPlatformInfo1, QString());
        tabPlatformInfo2 = new QWidget();
        tabPlatformInfo2->setObjectName("tabPlatformInfo2");
        gridLayout_39 = new QGridLayout(tabPlatformInfo2);
        gridLayout_39->setObjectName("gridLayout_39");
        frame_edit_17 = new QFrame(tabPlatformInfo2);
        frame_edit_17->setObjectName("frame_edit_17");
        frame_edit_17->setFrameShape(QFrame::Shape::NoFrame);
        frame_edit_17->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_65 = new QVBoxLayout(frame_edit_17);
        verticalLayout_65->setObjectName("verticalLayout_65");
        horizontalLayout_83 = new QHBoxLayout();
        horizontalLayout_83->setObjectName("horizontalLayout_83");
        label_46 = new QLabel(frame_edit_17);
        label_46->setObjectName("label_46");
#if QT_CONFIG(tooltip)
        label_46->setToolTip(QString::fromUtf8("This value contains CPU ART frequency, also known as crystal clock frequency. Its existence is exclusive to Skylake generation and newer. \n"
"\n"
"The value is specified in Hz, and is normally 24 MHz for client Intel segment, 25MHz for server Intel segment, and 19.2 MHz for Intel Atom CPUs. macOS till 10.15 inclusive assumes 24 MHz by default.\n"
"\n"
"Note: On Intel Skylake X ART frequency may be a little less (approx. 0.25%) than 24 or 25 MHz due to special EMI-reduction circuit as described in Acidanthera Bugtracker.\n"
"\n"
"----\n"
"\n"
"\350\277\231\344\270\252\345\200\274\345\214\205\345\220\253CPU ART\351\242\221\347\216\207\357\274\214\344\271\237\345\260\261\346\230\257\346\231\266\344\275\223\346\227\266\351\222\237\351\242\221\347\216\207\343\200\202\345\256\203\347\232\204\345\255\230\345\234\250\346\230\257Skylake\344\270\200\344\273\243\345\217\212\346\233\264\346\226\260\347\232\204\344\272\247\345\223\201\346\211\200\347\213\254\346\234\211\347\232\204\343\200\202\n"
"\n"
"\350\257\245\345\200"
                        "\274\344\273\245Hz\344\270\272\345\215\225\344\275\215\357\274\214\351\200\232\345\270\270\345\256\242\346\210\267\347\253\257\350\213\261\347\211\271\345\260\224\344\270\27224MHz\357\274\214\346\234\215\345\212\241\345\231\250\350\213\261\347\211\271\345\260\224\344\270\27225MHz\357\274\214\350\213\261\347\211\271\345\260\224Atom CPU\344\270\27219.2MHz\343\200\202macOS\347\233\264\345\210\26010.15\357\274\210\345\220\253\357\274\211\357\274\214\351\273\230\350\256\244\344\270\27224MHz\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\234\250Intel Skylake X\344\270\212\357\274\214\347\224\261\344\272\216\347\211\271\346\256\212\347\232\204EMI-reduction\347\224\265\350\267\257\357\274\214ART\351\242\221\347\216\207\345\217\257\350\203\275\344\274\232\346\257\22424\346\210\22625MHz\345\260\221\344\270\200\347\202\271\357\274\210\345\244\247\347\272\2460.25%\357\274\211\357\274\214\350\277\231\345\234\250Acidanthera Bugtracker\344\270\255\346\234\211\346\217\217\350\277\260\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_83->addWidget(label_46);

        editIntARTFrequency = new QLineEdit(frame_edit_17);
        editIntARTFrequency->setObjectName("editIntARTFrequency");
        editIntARTFrequency->setMinimumSize(QSize(0, 0));

        horizontalLayout_83->addWidget(editIntARTFrequency);


        verticalLayout_65->addLayout(horizontalLayout_83);

        horizontalLayout_84 = new QHBoxLayout();
        horizontalLayout_84->setObjectName("horizontalLayout_84");
        label_48 = new QLabel(frame_edit_17);
        label_48->setObjectName("label_48");
#if QT_CONFIG(tooltip)
        label_48->setToolTip(QString::fromUtf8(" Sets board-rev in gEfiMiscSubClassGuid. Value found on Macs seems to correspond to internal board revision (e.g. 01).\n"
"\n"
"----\n"
"\n"
" \350\256\276\347\275\256 gEfiMiscSubClassGuid \344\270\255\347\232\204 board-rev\343\200\202\345\234\250Mac\344\270\212\346\211\276\345\210\260\347\232\204\345\200\274\344\274\274\344\271\216\345\257\271\345\272\224\344\272\216\345\206\205\351\203\250\346\235\277\347\232\204\344\277\256\350\256\242\347\211\210\357\274\210\344\276\213\345\246\20201\357\274\211\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_84->addWidget(label_48);

        editDatBoardRevision = new QLineEdit(frame_edit_17);
        editDatBoardRevision->setObjectName("editDatBoardRevision");

        horizontalLayout_84->addWidget(editDatBoardRevision);


        verticalLayout_65->addLayout(horizontalLayout_84);

        horizontalLayout_85 = new QHBoxLayout();
        horizontalLayout_85->setObjectName("horizontalLayout_85");
        label_47 = new QLabel(frame_edit_17);
        label_47->setObjectName("label_47");
#if QT_CONFIG(tooltip)
        label_47->setToolTip(QString::fromUtf8(" Sets board-id in gEfiMiscSubClassGuid. Value found on Macs is equal to SMBIOS BoardProduct in ASCII.\n"
"\n"
"----\n"
"\n"
" \350\256\276\347\275\256 gEfiMiscSubClassGuid \344\270\255\347\232\204 board-id\343\200\202\345\234\250Mac\344\270\212\346\211\276\345\210\260\347\232\204\345\200\274\347\255\211\344\272\216SMBIOS BoardProduct\347\232\204ASCII\347\240\201\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_85->addWidget(label_47);

        editBoardProduct = new QLineEdit(frame_edit_17);
        editBoardProduct->setObjectName("editBoardProduct");

        horizontalLayout_85->addWidget(editBoardProduct);


        verticalLayout_65->addLayout(horizontalLayout_85);

        horizontalLayout_86 = new QHBoxLayout();
        horizontalLayout_86->setObjectName("horizontalLayout_86");
        label_49 = new QLabel(frame_edit_17);
        label_49->setObjectName("label_49");
#if QT_CONFIG(tooltip)
        label_49->setToolTip(QString::fromUtf8("Sets DevicePathsSupported in gEfiMiscSubClassGuid. \n"
"\n"
"Must be set to 1 for AppleACPIPlatform.kext to append SATA device paths to Boot#### and efi-boot-device-data variables. Set to 1 on all modern Macs.\n"
"\n"
"----\n"
"\n"
" \350\256\276\347\275\256 gEfiMiscSubClassGuid \344\270\255\347\232\204 DevicePathsSupported\343\200\202\n"
"\n"
"AppleACPIPlatform.kext \345\277\205\351\241\273\350\256\276\347\275\256\344\270\272 1\357\274\214\344\273\245\344\276\277\345\260\206 SATA \350\256\276\345\244\207\350\267\257\345\276\204\351\231\204\345\212\240\345\210\260 Boot#### \345\222\214 efi-boot-device-data \345\217\230\351\207\217\343\200\202\345\234\250\346\211\200\346\234\211\347\216\260\344\273\243Mac\344\270\212\351\203\275\350\256\276\347\275\256\344\270\2721\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_86->addWidget(label_49);

        editIntDevicePathsSupported = new QLineEdit(frame_edit_17);
        editIntDevicePathsSupported->setObjectName("editIntDevicePathsSupported");

        horizontalLayout_86->addWidget(editIntDevicePathsSupported);


        verticalLayout_65->addLayout(horizontalLayout_86);

        horizontalLayout_87 = new QHBoxLayout();
        horizontalLayout_87->setObjectName("horizontalLayout_87");
        label_50 = new QLabel(frame_edit_17);
        label_50->setObjectName("label_50");
#if QT_CONFIG(tooltip)
        label_50->setToolTip(QString::fromUtf8("Sets FSBFrequency in gEfiProcessorSubClassGuid."));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_87->addWidget(label_50);

        editIntFSBFrequency = new QLineEdit(frame_edit_17);
        editIntFSBFrequency->setObjectName("editIntFSBFrequency");

        horizontalLayout_87->addWidget(editIntFSBFrequency);


        verticalLayout_65->addLayout(horizontalLayout_87);

        horizontalLayout_88 = new QHBoxLayout();
        horizontalLayout_88->setObjectName("horizontalLayout_88");
        label_51 = new QLabel(frame_edit_17);
        label_51->setObjectName("label_51");
#if QT_CONFIG(tooltip)
        label_51->setToolTip(QString::fromUtf8(" Sets InitialTSC in gEfiProcessorSubClassGuid. Sets initial TSC value, normally 0."));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_88->addWidget(label_51);

        editIntInitialTSC = new QLineEdit(frame_edit_17);
        editIntInitialTSC->setObjectName("editIntInitialTSC");

        horizontalLayout_88->addWidget(editIntInitialTSC);


        verticalLayout_65->addLayout(horizontalLayout_88);

        horizontalLayout_89 = new QHBoxLayout();
        horizontalLayout_89->setObjectName("horizontalLayout_89");
        label_52 = new QLabel(frame_edit_17);
        label_52->setObjectName("label_52");
#if QT_CONFIG(tooltip)
        label_52->setToolTip(QString::fromUtf8("Sets name in gEfiMiscSubClassGuid. Value found on Macs is platform in ASCII."));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_89->addWidget(label_52);

        editPlatformName = new QLineEdit(frame_edit_17);
        editPlatformName->setObjectName("editPlatformName");

        horizontalLayout_89->addWidget(editPlatformName);


        verticalLayout_65->addLayout(horizontalLayout_89);


        gridLayout_39->addWidget(frame_edit_17, 0, 0, 1, 1);

        frame_edit_18 = new QFrame(tabPlatformInfo2);
        frame_edit_18->setObjectName("frame_edit_18");
        frame_edit_18->setFrameShape(QFrame::Shape::NoFrame);
        frame_edit_18->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_66 = new QVBoxLayout(frame_edit_18);
        verticalLayout_66->setObjectName("verticalLayout_66");
        horizontalLayout_90 = new QHBoxLayout();
        horizontalLayout_90->setObjectName("horizontalLayout_90");
        label_53 = new QLabel(frame_edit_18);
        label_53->setObjectName("label_53");
#if QT_CONFIG(tooltip)
        label_53->setToolTip(QString::fromUtf8(" Sets RBr in gEfiMiscSubClassGuid. Custom property read by VirtualSMC or FakeSMC to generate SMC RBr key.\n"
"\n"
"----\n"
"\n"
" \350\256\276\347\275\256 gEfiMiscSubClassGuid \344\270\255\347\232\204 RBr\343\200\202\350\207\252\345\256\232\344\271\211\345\261\236\346\200\247\357\274\214\347\224\261VirtualSMC\346\210\226FakeSMC\350\257\273\345\217\226\344\273\245\347\224\237\346\210\220SMC RBr\345\257\206\351\222\245\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_90->addWidget(label_53);

        editDatSmcBranch = new QLineEdit(frame_edit_18);
        editDatSmcBranch->setObjectName("editDatSmcBranch");

        horizontalLayout_90->addWidget(editDatSmcBranch);


        verticalLayout_66->addLayout(horizontalLayout_90);

        horizontalLayout_91 = new QHBoxLayout();
        horizontalLayout_91->setObjectName("horizontalLayout_91");
        label_54 = new QLabel(frame_edit_18);
        label_54->setObjectName("label_54");
#if QT_CONFIG(tooltip)
        label_54->setToolTip(QString::fromUtf8(" Sets RPlt in gEfiMiscSubClassGuid. Custom property read by VirtualSMC or FakeSMC to generate SMC RPlt key.\n"
"\n"
"----\n"
"\n"
" \350\256\276\347\275\256 gEfiMiscSubClassGuid \344\270\255\347\232\204 RPlt\343\200\202\350\207\252\345\256\232\344\271\211\345\261\236\346\200\247\357\274\214\347\224\261VirtualSMC\346\210\226FakeSMC\350\257\273\345\217\226\344\273\245\347\224\237\346\210\220SMC RPlt\351\224\256\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_91->addWidget(label_54);

        editDatSmcPlatform = new QLineEdit(frame_edit_18);
        editDatSmcPlatform->setObjectName("editDatSmcPlatform");

        horizontalLayout_91->addWidget(editDatSmcPlatform);


        verticalLayout_66->addLayout(horizontalLayout_91);

        horizontalLayout_92 = new QHBoxLayout();
        horizontalLayout_92->setObjectName("horizontalLayout_92");
        label_55 = new QLabel(frame_edit_18);
        label_55->setObjectName("label_55");
#if QT_CONFIG(tooltip)
        label_55->setToolTip(QString::fromUtf8(" Sets REV in gEfiMiscSubClassGuid. Custom property read by VirtualSMC or FakeSMC to generate SMC REV key.\n"
"\n"
"----\n"
"\n"
" \350\256\276\347\275\256 gEfiMiscSubClassGuid \344\270\255\347\232\204 REV\343\200\202\350\207\252\345\256\232\344\271\211\345\261\236\346\200\247\357\274\214\347\224\261VirtualSMC\346\210\226FakeSMC\350\257\273\345\217\226\344\273\245\347\224\237\346\210\220SMC REV\351\224\256\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_92->addWidget(label_55);

        editDatSmcRevision = new QLineEdit(frame_edit_18);
        editDatSmcRevision->setObjectName("editDatSmcRevision");

        horizontalLayout_92->addWidget(editDatSmcRevision);


        verticalLayout_66->addLayout(horizontalLayout_92);

        horizontalLayout_93 = new QHBoxLayout();
        horizontalLayout_93->setObjectName("horizontalLayout_93");
        label_56 = new QLabel(frame_edit_18);
        label_56->setObjectName("label_56");
#if QT_CONFIG(tooltip)
        label_56->setToolTip(QString::fromUtf8("Known bits read by X86PlatformPlugin.kext: \n"
"\n"
"\342\200\242 0x00000001 \342\200\224 Shutdown cause was a PWROK event (Same as GEN_PMCON_2 bit 0)\n"
"\n"
"\342\200\242 0x00000002 \342\200\224 Shutdown cause was a SYS_PWROK event (Same as GEN_PMCON_2 bit 1)\n"
"\n"
"\342\200\242 0x00000004 \342\200\224 Shutdown cause was a THRMTRIP# event (Same as GEN_PMCON_2 bit 3)\n"
"\n"
"\342\200\242 0x00000008 \342\200\224 Rebooted due to a SYS_RESET# event (Same as GEN_PMCON_2 bit 4)\n"
"\n"
"\342\200\242 0x00000010 \342\200\224 Power Failure (Same as GEN_PMCON_3 bit 1 PWR_FLR) \n"
"\n"
"\342\200\242 0x00000020 \342\200\224 Loss of RTC Well Power (Same as GEN_PMCON_3 bit 2 RTC_PWR_STS) \n"
"\n"
"\342\200\242 0x00000040 \342\200\224 General Reset Status (Same as GEN_PMCON_3 bit 9 GEN_RST_STS) \n"
"\n"
"\342\200\242 0xffffff80 \342\200\224 SUS Well Power Loss (Same as GEN_PMCON_3 bit 14)\n"
"\n"
"\342\200\242 0x00010000 \342\200\224 Wake cause was a ME Wake event (Same as PRSTS bit 0, ME_WAKE_STS) \n"
"\n"
"\342\200\242"
                        " 0x00020000 \342\200\224 Cold Reboot was ME Induced event (Same as PRSTS bit 1 ME_HRST_COLD_STS) \n"
"\n"
"\342\200\242 0x00040000 \342\200\224 Warm Reboot was ME Induced event (Same as PRSTS bit 2 ME_HRST_WARM_STS) \n"
"\n"
"\342\200\242 0x00080000 \342\200\224 Shutdown was ME Induced event (Same as PRSTS bit 3 ME_HOST_PWRDN) \n"
"\n"
"\342\200\242 0x00100000 \342\200\224 Global reset ME Wachdog Timer event (Same as PRSTS bit 6)\n"
"\n"
"\342\200\242 0x00200000 \342\200\224 Global reset PowerManagment Wachdog Timer event (Same as PRSTS bit 15)\n"
"\n"
"----\n"
"\n"
"X86PlatformPlugin.kext\350\257\273\345\217\226\347\232\204\345\267\262\347\237\245\344\275\215\357\274\232\n"
"\n"
"- 0x00000001 - \345\205\263\346\234\272\345\216\237\345\233\240\346\230\257PWROK\344\272\213\344\273\266 (\344\270\216GEN_PMCON_2 bit 0\347\233\270\345\220\214)\n"
"\n"
"- 0x00000002 - \345\205\263\346\234\272\345\216\237\345\233\240\346\230\257 SYS_PWROK \344\272\213\344\273\266 (\344\270\216 GEN_PMCON_2 \344\275\215 1 \347\233\270\345"
                        "\220\214)\n"
"\n"
"- 0x00000004 - \345\205\263\346\234\272\345\216\237\345\233\240\346\230\257 THRMTRIP# \344\272\213\344\273\266 (\344\270\216 GEN_PMCON_2 \344\275\215 3 \347\233\270\345\220\214)\n"
"\n"
"- 0x00000008 - \347\224\261\344\272\216SYS_RESET#\344\272\213\344\273\266\350\200\214\351\207\215\346\226\260\345\220\257\345\212\250 (\344\270\216GEN_PMCON_2 bit 4\347\233\270\345\220\214)\n"
"- 0x00000010 - \347\224\265\346\272\220\346\225\205\351\232\234 (\344\270\216GEN_PMCON_3 bit 1 PWR_FLR\347\233\270\345\220\214) \n"
"\n"
"- 0x00000020 - \345\244\261\345\216\273 RTC \344\272\225\347\224\265\346\272\220 (\344\270\216 GEN_PMCON_3 \344\275\215 2 RTC_PWR_STS \347\233\270\345\220\214) \n"
"\n"
"- 0x00000040 - \344\270\200\350\210\254\345\244\215\344\275\215\347\212\266\346\200\201 (\344\270\216GEN_PMCON_3 bit 9 GEN_RST_STS\347\233\270\345\220\214) \n"
"\n"
"- 0xffffff80 - SUS \345\212\237\347\216\207\346\215\237\345\244\261 (\344\270\216 GEN_PMCON_3 \344\275\215 14 \347\233\270\345\220\214)\n"
"\n"
"- 0x00"
                        "010000 - \345\224\244\351\206\222\345\216\237\345\233\240\346\230\257ME\345\224\244\351\206\222\344\272\213\344\273\266(\344\270\216PRSTS\344\275\2150\357\274\214ME_WAKE_STS\347\233\270\345\220\214) \n"
"\n"
"- 0x00020000 - \345\206\267\351\207\215\345\220\257\346\230\257ME\350\257\261\345\257\274\347\232\204\344\272\213\344\273\266(\344\270\216PRSTS\344\275\2151 ME_HRST_COLD_STS\347\233\270\345\220\214) \n"
"\n"
"- 0x00040000 - \347\203\255\351\207\215\345\220\257\346\230\257 ME \350\257\261\345\257\274\344\272\213\344\273\266 (\344\270\216 PRSTS \344\275\215 2 ME_HRST_WARM_STS \347\233\270\345\220\214) \n"
"\n"
"- 0x00080000 - \345\205\263\346\234\272\346\230\257 ME \350\257\261\345\257\274\344\272\213\344\273\266(\344\270\216 PRSTS \344\275\215 3 ME_HOST_PWRDN \347\233\270\345\220\214)\343\200\202\n"
"\n"
"- 0x00100000 - \345\205\250\345\261\200\345\244\215\344\275\215 ME Wachdog \345\256\232\346\227\266\345\231\250\344\272\213\344\273\266 (\344\270\216 PRSTS \344\275\215 6 \347\233\270\345\220\214)\n"
"\n"
""
                        "- 0x00200000 - \345\205\250\345\261\200\345\244\215\344\275\215 PowerManagment Wachdog Timer \344\272\213\344\273\266 (\344\270\216 PRSTS \344\275\215 15 \347\233\270\345\220\214)\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_93->addWidget(label_56);

        editIntStartupPowerEvents = new QLineEdit(frame_edit_18);
        editIntStartupPowerEvents->setObjectName("editIntStartupPowerEvents");

        horizontalLayout_93->addWidget(editIntStartupPowerEvents);


        verticalLayout_66->addLayout(horizontalLayout_93);

        horizontalLayout_94 = new QHBoxLayout();
        horizontalLayout_94->setObjectName("horizontalLayout_94");
        label_57 = new QLabel(frame_edit_18);
        label_57->setObjectName("label_57");
#if QT_CONFIG(tooltip)
        label_57->setToolTip(QString::fromUtf8(" Sets Model in gEfiMiscSubClassGuid. Value found on Macs is equal to SMBIOS SystemProductName in Unicode.\n"
"\n"
"----\n"
"\n"
" \345\234\250gEfiMiscSubClassGuid\344\270\255\350\256\276\347\275\256\346\250\241\345\236\213\343\200\202Mac\344\270\212\347\232\204\345\200\274\347\255\211\344\272\216Unicode\344\270\255\347\232\204SMBIOS SystemProductName\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_94->addWidget(label_57);

        editSystemProductName = new QLineEdit(frame_edit_18);
        editSystemProductName->setObjectName("editSystemProductName");

        horizontalLayout_94->addWidget(editSystemProductName);


        verticalLayout_66->addLayout(horizontalLayout_94);

        horizontalLayout_95 = new QHBoxLayout();
        horizontalLayout_95->setObjectName("horizontalLayout_95");
        label_58 = new QLabel(frame_edit_18);
        label_58->setObjectName("label_58");
#if QT_CONFIG(tooltip)
        label_58->setToolTip(QString::fromUtf8("Sets SystemSerialNumber in gEfiMiscSubClassGuid. Value found on Macs is equal to SMBIOS SystemSerialNumber in Unicode.\n"
"\n"
"----\n"
"\n"
"\350\256\276\347\275\256gEfiMiscSubClassGuid\344\270\255\347\232\204SystemSerialNumber\343\200\202\345\234\250Mac\344\270\212\346\211\276\345\210\260\347\232\204\345\200\274\347\255\211\344\272\216Unicode\347\232\204SMBIOS SystemSerialNumber\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_95->addWidget(label_58);

        editSystemSerialNumber_data = new QLineEdit(frame_edit_18);
        editSystemSerialNumber_data->setObjectName("editSystemSerialNumber_data");

        horizontalLayout_95->addWidget(editSystemSerialNumber_data);


        verticalLayout_66->addLayout(horizontalLayout_95);

        horizontalLayout_96 = new QHBoxLayout();
        horizontalLayout_96->setObjectName("horizontalLayout_96");
        label_59 = new QLabel(frame_edit_18);
        label_59->setObjectName("label_59");
#if QT_CONFIG(tooltip)
        label_59->setToolTip(QString::fromUtf8("Sets system-id in gEfiMiscSubClassGuid. Value found on Macs is equal to SMBIOS SystemUUID.\n"
"\n"
"----\n"
"\n"
"\350\256\276\347\275\256gEfiMiscSubClassGuid\344\270\255\347\232\204\347\263\273\347\273\237ID\343\200\202\345\234\250Mac\344\270\212\346\211\276\345\210\260\347\232\204\345\200\274\347\255\211\344\272\216SMBIOS SystemUUID\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_96->addWidget(label_59);

        editSystemUUID_DataHub = new QLineEdit(frame_edit_18);
        editSystemUUID_DataHub->setObjectName("editSystemUUID_DataHub");

        horizontalLayout_96->addWidget(editSystemUUID_DataHub);


        verticalLayout_66->addLayout(horizontalLayout_96);


        gridLayout_39->addWidget(frame_edit_18, 0, 1, 1, 1);

        tabPlatformInfo->addTab(tabPlatformInfo2, QString());
        tabPlatformInfo3 = new QWidget();
        tabPlatformInfo3->setObjectName("tabPlatformInfo3");
        gridLayout_3 = new QGridLayout(tabPlatformInfo3);
        gridLayout_3->setObjectName("gridLayout_3");
        frame_edit_7 = new QFrame(tabPlatformInfo3);
        frame_edit_7->setObjectName("frame_edit_7");
        frame_edit_7->setFrameShape(QFrame::Shape::NoFrame);
        frame_edit_7->setFrameShadow(QFrame::Shadow::Plain);
        gridLayout_32 = new QGridLayout(frame_edit_7);
        gridLayout_32->setObjectName("gridLayout_32");
        gridLayout_32->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_105 = new QLabel(frame_edit_7);
        label_105->setObjectName("label_105");
#if QT_CONFIG(tooltip)
        label_105->setToolTip(QString::fromUtf8("Specifies the data width, in bits, of the memory. \n"
"\n"
"A DataWidth of 0 and a TotalWidth of 8 indicates that the device is being used solely to provide 8 error-correction bits.\n"
"\n"
"----\n"
"\n"
"\346\214\207\345\256\232\345\255\230\345\202\250\345\231\250\347\232\204\346\225\260\346\215\256\345\256\275\345\272\246\357\274\214\344\273\245\344\275\215\344\270\272\345\215\225\344\275\215\343\200\202\n"
"\n"
"DataWidth\344\270\2720\357\274\214TotalWidth\344\270\2728\357\274\214\350\241\250\347\244\272\350\257\245\345\231\250\344\273\266\344\273\205\347\224\250\344\272\216\346\217\220\344\276\2338\344\270\252\347\272\240\351\224\231\344\275\215\343\200\202"));
#endif // QT_CONFIG(tooltip)
        label_105->setText(QString::fromUtf8("DataWidth"));

        horizontalLayout_9->addWidget(label_105);

        editIntDataWidth = new QLineEdit(frame_edit_7);
        editIntDataWidth->setObjectName("editIntDataWidth");

        horizontalLayout_9->addWidget(editIntDataWidth);


        gridLayout_32->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_102 = new QLabel(frame_edit_7);
        label_102->setObjectName("label_102");
#if QT_CONFIG(tooltip)
        label_102->setToolTip(QString::fromUtf8(" Specifies the primary hardware error correction or detection method supported by the memory.\n"
"\n"
"\342\200\242 0x01 \342\200\224 Other\n"
"\n"
"\342\200\242 0x02 \342\200\224 Unknown\n"
"\n"
"\342\200\242 0x03 \342\200\224 None\n"
"\n"
"\342\200\242 0x04 \342\200\224 Parity\n"
"\n"
"\342\200\242 0x05 \342\200\224 Single-bit ECC\n"
"\n"
"\342\200\242 0x06 \342\200\224 Multi-bit ECC\n"
"\n"
"\342\200\242 0x07 \342\200\224 CRC\n"
"\n"
"----\n"
"\n"
" \346\214\207\345\256\232\345\255\230\345\202\250\345\231\250\346\224\257\346\214\201\347\232\204\344\270\273\350\246\201\347\241\254\344\273\266\347\272\240\351\224\231\346\210\226\346\243\200\346\265\213\346\226\271\346\263\225\357\274\232\n"
"\n"
"- 0x01 - \345\205\266\344\273\226\n"
"\n"
"- 0x02 - \346\234\252\347\237\245\n"
"\n"
"- 0x03 - \346\227\240\n"
"\n"
"- 0x04 - \345\245\207\345\201\266\346\240\241\351\252\214\n"
"\n"
"- 0x05 - \345\215\225\344\275\215 ECC\n"
"\n"
"- 0x06 - \345\244\232\344\275\215 ECC\n"
"\n"
"- 0x07-CRC"));
#endif // QT_CONFIG(tooltip)
        label_102->setText(QString::fromUtf8("ErrorCorrection"));

        horizontalLayout_12->addWidget(label_102);

        editIntErrorCorrection = new QLineEdit(frame_edit_7);
        editIntErrorCorrection->setObjectName("editIntErrorCorrection");

        horizontalLayout_12->addWidget(editIntErrorCorrection);


        gridLayout_32->addLayout(horizontalLayout_12, 0, 1, 1, 1);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setObjectName("horizontalLayout_40");
        label_100 = new QLabel(frame_edit_7);
        label_100->setObjectName("label_100");
#if QT_CONFIG(tooltip)
        label_100->setToolTip(QString::fromUtf8(" Specifies the form factor of the memory. On Macs this should usually be DIMM or SODIMM.\n"
"\n"
"Commonly used form factors are listed below.\n"
"\n"
"When CustomMemory is false, this value is automatically set based on Mac product name.\n"
"\n"
"\342\200\242 0x01 \342\200\224 Other\n"
"\342\200\242 0x02 \342\200\224 Unknown\n"
"\342\200\242 0x09 \342\200\224 DIMM\n"
"\342\200\242 0x0D \342\200\224 SODIMM\n"
"\342\200\242 0x0F \342\200\224 FB-DIMM\n"
"\n"
"----\n"
"\n"
" \346\214\207\345\256\232\345\206\205\345\255\230\347\232\204\345\244\226\345\275\242\345\260\272\345\257\270\343\200\202\345\234\250 Mac \344\270\212\357\274\214\350\277\231\351\200\232\345\270\270\345\272\224\350\257\245\346\230\257 DIMM \346\210\226 SODIMM\343\200\202\n"
"\n"
"\345\270\270\347\224\250\347\232\204\345\275\242\345\274\217\345\233\240\347\264\240\345\210\227\345\234\250\344\270\213\351\235\242\343\200\202\n"
"\n"
"\345\275\223CustomMemory\344\270\272false\346\227\266\357\274\214\346\255\244\345\200\274\344\274\232\346\240\271\346"
                        "\215\256Mac\344\272\247\345\223\201\345\220\215\347\247\260\350\207\252\345\212\250\350\256\276\347\275\256\343\200\202\n"
"\n"
"- 0x01 - \345\205\266\344\273\226\n"
"- 0x02 - \346\234\252\347\237\245\n"
"- 0x09 - DIMM\n"
"- 0x0D - SODIMM\n"
"- 0x0F - FB-DIMM\n"
""));
#endif // QT_CONFIG(tooltip)
        label_100->setText(QString::fromUtf8("FormFactor"));

        horizontalLayout_40->addWidget(label_100);

        editIntFormFactor = new QLineEdit(frame_edit_7);
        editIntFormFactor->setObjectName("editIntFormFactor");

        horizontalLayout_40->addWidget(editIntFormFactor);


        gridLayout_32->addLayout(horizontalLayout_40, 0, 2, 1, 1);

        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setObjectName("horizontalLayout_52");
        label_101 = new QLabel(frame_edit_7);
        label_101->setObjectName("label_101");
#if QT_CONFIG(tooltip)
        label_101->setToolTip(QString::fromUtf8(" Specifies the total width, in bits, of the memory, including any check or error-correction bits. \n"
"\n"
"If there are no error-correction bits, this value should be equal to DataWidth.\n"
"\n"
"----\n"
"\n"
" \346\214\207\345\256\232\345\206\205\345\255\230\347\232\204\346\200\273\345\256\275\345\272\246\357\274\214\344\273\245\344\275\215\344\270\272\345\215\225\344\275\215\357\274\214\345\214\205\346\213\254\344\273\273\344\275\225\346\243\200\346\237\245\346\210\226\347\272\240\351\224\231\344\275\215\343\200\202\n"
"\n"
"\345\246\202\346\236\234\346\262\241\346\234\211\347\272\240\351\224\231\344\275\215\357\274\214\350\277\231\344\270\252\345\200\274\345\272\224\350\257\245\347\255\211\344\272\216DataWidth\343\200\202"));
#endif // QT_CONFIG(tooltip)
        label_101->setText(QString::fromUtf8("TotalWidth"));

        horizontalLayout_52->addWidget(label_101);

        editIntTotalWidth = new QLineEdit(frame_edit_7);
        editIntTotalWidth->setObjectName("editIntTotalWidth");

        horizontalLayout_52->addWidget(editIntTotalWidth);


        gridLayout_32->addLayout(horizontalLayout_52, 1, 0, 1, 1);

        horizontalLayout_53 = new QHBoxLayout();
        horizontalLayout_53->setObjectName("horizontalLayout_53");
        label_103 = new QLabel(frame_edit_7);
        label_103->setObjectName("label_103");
#if QT_CONFIG(tooltip)
        label_103->setToolTip(QString::fromUtf8("Description: Specifies the memory type. Commonly used types are listed below.\n"
"\n"
"\342\200\242 0x01 \342\200\224 Other\n"
"\342\200\242 0x02 \342\200\224 Unknown\n"
"\342\200\242 0x0F \342\200\224 SDRAM\n"
"\342\200\242 0x12 \342\200\224 DDR\n"
"\342\200\242 0x13 \342\200\224 DDR2\n"
"\342\200\242 0x14 \342\200\224 DDR2 FB-DIMM\n"
"\342\200\242 0x18 \342\200\224 DDR3\n"
"\342\200\242 0x1A \342\200\224 DDR4\n"
"\342\200\242 0x1B \342\200\224 LPDDR\n"
"\342\200\242 0x1C \342\200\224 LPDDR2\n"
"\342\200\242 0x1D \342\200\224 LPDDR3\n"
"\342\200\242 0x1E \342\200\224 LPDDR4\n"
"\n"
"----\n"
"\n"
"\350\257\264\346\230\216\357\274\232\346\214\207\345\256\232\345\206\205\345\255\230\347\261\273\345\236\213\357\274\214\345\270\270\347\224\250\347\232\204\347\261\273\345\236\213\345\246\202\344\270\213\357\274\232\n"
"\n"
"- 0x01 - \345\205\266\344\273\226\n"
"- 0x02 - \346\234\252\347\237\245\n"
"- 0x0F - SDRAM\n"
"- 0x12 -  DDR\n"
"- 0x13 - DDR2\n"
"- 0x14 - DDR2 FB-DIMM\n"
"- 0x18 - DDR3\n"
"- 0x1A - DDR4\n"
"-"
                        " 0x1B - LPDDR\n"
"- 0x1C - LPDDR2\n"
"- 0x1D - LPDDR3\n"
"- 0x1E - LPDDR4\n"
""));
#endif // QT_CONFIG(tooltip)
        label_103->setText(QString::fromUtf8("Type"));

        horizontalLayout_53->addWidget(label_103);

        editIntType = new QLineEdit(frame_edit_7);
        editIntType->setObjectName("editIntType");

        horizontalLayout_53->addWidget(editIntType);


        gridLayout_32->addLayout(horizontalLayout_53, 1, 1, 1, 1);

        horizontalLayout_54 = new QHBoxLayout();
        horizontalLayout_54->setObjectName("horizontalLayout_54");
        label_104 = new QLabel(frame_edit_7);
        label_104->setObjectName("label_104");
#if QT_CONFIG(tooltip)
        label_104->setToolTip(QString::fromUtf8(" Specifies additional memory type information.\n"
"\n"
"\342\200\242 Bit 0 \342\200\224 Reserved, set to 0\n"
"\342\200\242 Bit 1 \342\200\224 Other\n"
"\342\200\242 Bit 2 \342\200\224 Unknown\n"
"\342\200\242 Bit 7 \342\200\224 Synchronous\n"
"\342\200\242 Bit 13 \342\200\224 Registered (buffered)\n"
"\342\200\242 Bit 14 \342\200\224 Unbuffered (unregistered)\n"
"\n"
"----\n"
"\n"
" \346\214\207\345\256\232\351\231\204\345\212\240\347\232\204\345\255\230\345\202\250\345\231\250\347\261\273\345\236\213\344\277\241\346\201\257\343\200\202\n"
"\n"
"- \344\275\2150 - \344\277\235\347\225\231\357\274\214\350\256\276\347\275\256\344\270\2720\n"
"- \344\275\2151 - \345\205\266\344\273\226\n"
"- \344\275\2152--\346\234\252\347\237\245\n"
"- \344\275\2157 - \345\220\214\346\255\245\n"
"- \344\275\21513 -\346\263\250\345\206\214\357\274\210\347\274\223\345\206\262\357\274\211\n"
"- \344\275\21514 - \346\234\252\347\274\223\345\206\262\357\274\210\346\234\252\346\263\250\345\206\214\357\274\211\n"
""));
#endif // QT_CONFIG(tooltip)
        label_104->setText(QString::fromUtf8("TypeDetail"));

        horizontalLayout_54->addWidget(label_104);

        editIntTypeDetail = new QLineEdit(frame_edit_7);
        editIntTypeDetail->setObjectName("editIntTypeDetail");

        horizontalLayout_54->addWidget(editIntTypeDetail);


        gridLayout_32->addLayout(horizontalLayout_54, 1, 2, 1, 1);

        horizontalLayout_55 = new QHBoxLayout();
        horizontalLayout_55->setObjectName("horizontalLayout_55");
        label_99 = new QLabel(frame_edit_7);
        label_99->setObjectName("label_99");
#if QT_CONFIG(tooltip)
        label_99->setToolTip(QString::fromUtf8("Specifies the maximum amount of memory, in bytes, supported by the system.\n"
"\n"
"----\n"
"\n"
"\346\214\207\345\256\232\347\263\273\347\273\237\346\224\257\346\214\201\347\232\204\346\234\200\345\244\247\345\206\205\345\255\230\351\207\217\357\274\214\344\273\245\345\255\227\350\212\202\344\270\272\345\215\225\344\275\215\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)
        label_99->setText(QString::fromUtf8("MaxCapacity"));

        horizontalLayout_55->addWidget(label_99);

        editIntMaxCapacity = new QLineEdit(frame_edit_7);
        editIntMaxCapacity->setObjectName("editIntMaxCapacity");

        horizontalLayout_55->addWidget(editIntMaxCapacity);


        gridLayout_32->addLayout(horizontalLayout_55, 2, 0, 1, 1);


        gridLayout_3->addWidget(frame_edit_7, 0, 0, 1, 1);

        horizontalLayout_107 = new QHBoxLayout();
        horizontalLayout_107->setObjectName("horizontalLayout_107");
        tableDevices = new QTableWidget(tabPlatformInfo3);
        if (tableDevices->columnCount() < 8)
            tableDevices->setColumnCount(8);
        tableDevices->setObjectName("tableDevices");
        tableDevices->setColumnCount(8);

        horizontalLayout_107->addWidget(tableDevices);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        btnDevices_add = new QToolButton(tabPlatformInfo3);
        btnDevices_add->setObjectName("btnDevices_add");
        btnDevices_add->setMaximumSize(QSize(20, 16777215));
        btnDevices_add->setIconSize(QSize(20, 20));

        verticalLayout_17->addWidget(btnDevices_add);

        btnDevices_del = new QToolButton(tabPlatformInfo3);
        btnDevices_del->setObjectName("btnDevices_del");
        btnDevices_del->setMaximumSize(QSize(20, 16777215));
        btnDevices_del->setIconSize(QSize(20, 20));

        verticalLayout_17->addWidget(btnDevices_del);


        horizontalLayout_107->addLayout(verticalLayout_17);


        gridLayout_3->addLayout(horizontalLayout_107, 1, 0, 1, 1);

        frame_chk_28 = new QFrame(tabPlatformInfo3);
        frame_chk_28->setObjectName("frame_chk_28");
        frame_chk_28->setFrameShape(QFrame::Shape::NoFrame);
        frame_chk_28->setFrameShadow(QFrame::Shadow::Plain);
        horizontalLayout_105 = new QHBoxLayout(frame_chk_28);
        horizontalLayout_105->setObjectName("horizontalLayout_105");
        horizontalLayout_105->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_104 = new QHBoxLayout();
        horizontalLayout_104->setObjectName("horizontalLayout_104");

        horizontalLayout_105->addLayout(horizontalLayout_104);


        gridLayout_3->addWidget(frame_chk_28, 2, 0, 1, 1);

        tabPlatformInfo->addTab(tabPlatformInfo3, QString());
        tabPlatformInfo4 = new QWidget();
        tabPlatformInfo4->setObjectName("tabPlatformInfo4");
        gridLayout_40 = new QGridLayout(tabPlatformInfo4);
        gridLayout_40->setObjectName("gridLayout_40");
        frame_edit_19 = new QFrame(tabPlatformInfo4);
        frame_edit_19->setObjectName("frame_edit_19");
        frame_edit_19->setFrameShape(QFrame::Shape::NoFrame);
        frame_edit_19->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_67 = new QVBoxLayout(frame_edit_19);
        verticalLayout_67->setObjectName("verticalLayout_67");
        horizontalLayout_97 = new QHBoxLayout();
        horizontalLayout_97->setObjectName("horizontalLayout_97");
        label_60 = new QLabel(frame_edit_19);
        label_60->setObjectName("label_60");
#if QT_CONFIG(tooltip)
        label_60->setToolTip(QString::fromUtf8("Specifies the value of NVRAM variable 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:HW_BID.\n"
"\n"
"----\n"
"\n"
"\346\214\207\345\256\232NVRAM\345\217\230\351\207\2174D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:HW_BID\347\232\204\345\200\274\343\200\202"));
#endif // QT_CONFIG(tooltip)
        label_60->setText(QString::fromUtf8("BID"));

        horizontalLayout_97->addWidget(label_60);

        editBID = new QLineEdit(frame_edit_19);
        editBID->setObjectName("editBID");
        editBID->setMinimumSize(QSize(500, 0));

        horizontalLayout_97->addWidget(editBID);


        verticalLayout_67->addLayout(horizontalLayout_97);

        horizontalLayout_98 = new QHBoxLayout();
        horizontalLayout_98->setObjectName("horizontalLayout_98");
        label_61 = new QLabel(frame_edit_19);
        label_61->setObjectName("label_61");
#if QT_CONFIG(tooltip)
        label_61->setToolTip(QString::fromUtf8("Specifies the values of NVRAM variables:\n"
"\n"
"\342\200\242 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:FirmwareFeatures\n"
"\342\200\242 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:ExtendedFirmwareFeatures\n"
"----\n"
"\346\214\207\345\256\232NVRAM\345\217\230\351\207\217\347\232\204\345\200\274\357\274\232\n"
"\n"
"\342\200\242 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:FirmwareFeatures\n"
"\342\200\242 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:ExtendedFirmwareFeatures"));
#endif // QT_CONFIG(tooltip)
        label_61->setText(QString::fromUtf8("FirmwareFeatures"));

        horizontalLayout_98->addWidget(label_61);

        editDatFirmwareFeatures = new QLineEdit(frame_edit_19);
        editDatFirmwareFeatures->setObjectName("editDatFirmwareFeatures");

        horizontalLayout_98->addWidget(editDatFirmwareFeatures);


        verticalLayout_67->addLayout(horizontalLayout_98);

        horizontalLayout_99 = new QHBoxLayout();
        horizontalLayout_99->setObjectName("horizontalLayout_99");
        label_62 = new QLabel(frame_edit_19);
        label_62->setObjectName("label_62");
#if QT_CONFIG(tooltip)
        label_62->setToolTip(QString::fromUtf8(" Specifies the values of NVRAM variables:\n"
"\n"
"\342\200\242 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:FirmwareFeaturesMask\n"
"\342\200\242 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:ExtendedFirmwareFeaturesMask\n"
"----\n"
" \346\214\207\345\256\232NVRAM\345\217\230\351\207\217\347\232\204\345\200\274\357\274\232\n"
"\n"
"\342\200\242 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:FirmwareFeaturesMask\n"
"\342\200\242 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:ExtendedFirmwareFeaturesMask"));
#endif // QT_CONFIG(tooltip)
        label_62->setText(QString::fromUtf8("FirmwareFeaturesMask"));

        horizontalLayout_99->addWidget(label_62);

        editDatFirmwareFeaturesMask = new QLineEdit(frame_edit_19);
        editDatFirmwareFeaturesMask->setObjectName("editDatFirmwareFeaturesMask");

        horizontalLayout_99->addWidget(editDatFirmwareFeaturesMask);


        verticalLayout_67->addLayout(horizontalLayout_99);

        horizontalLayout_100 = new QHBoxLayout();
        horizontalLayout_100->setObjectName("horizontalLayout_100");
        label_63 = new QLabel(frame_edit_19);
        label_63->setObjectName("label_63");
#if QT_CONFIG(tooltip)
        label_63->setToolTip(QString::fromUtf8(" Specifies the values of NVRAM variables 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:HW_MLB and 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:MLB.\n"
"----\n"
" \346\214\207\345\256\232NVRAM\345\217\230\351\207\2174D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:HW_MLB\345\222\2144D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:MLB\347\232\204\345\200\274\343\200\202"));
#endif // QT_CONFIG(tooltip)
        label_63->setText(QString::fromUtf8("MLB"));

        horizontalLayout_100->addWidget(label_63);

        editMLB_PNVRAM = new QLineEdit(frame_edit_19);
        editMLB_PNVRAM->setObjectName("editMLB_PNVRAM");

        horizontalLayout_100->addWidget(editMLB_PNVRAM);


        verticalLayout_67->addLayout(horizontalLayout_100);

        horizontalLayout_101 = new QHBoxLayout();
        horizontalLayout_101->setObjectName("horizontalLayout_101");
        label_64 = new QLabel(frame_edit_19);
        label_64->setObjectName("label_64");
#if QT_CONFIG(tooltip)
        label_64->setToolTip(QString::fromUtf8("Specifies the values of NVRAM variables 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:HW_ROM and 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:ROM.\n"
"----\n"
"\346\214\207\345\256\232NVRAM\345\217\230\351\207\2174D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:HW_ROM\345\222\2144D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:ROM\347\232\204\345\200\274\343\200\202"));
#endif // QT_CONFIG(tooltip)
        label_64->setText(QString::fromUtf8("ROM"));

        horizontalLayout_101->addWidget(label_64);

        editDatROM_PNVRAM = new QLineEdit(frame_edit_19);
        editDatROM_PNVRAM->setObjectName("editDatROM_PNVRAM");

        horizontalLayout_101->addWidget(editDatROM_PNVRAM);


        verticalLayout_67->addLayout(horizontalLayout_101);

        horizontalLayout_102 = new QHBoxLayout();
        horizontalLayout_102->setObjectName("horizontalLayout_102");
        label_109 = new QLabel(frame_edit_19);
        label_109->setObjectName("label_109");
#if QT_CONFIG(tooltip)
        label_109->setToolTip(QString::fromUtf8("Specifies the values of NVRAM variables 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:HW_SSN and  4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:SSN.\n"
"----\n"
"\346\214\207\345\256\232NVRAM\345\217\230\351\207\2174D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:HW_SSN\345\222\2144D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:SSN\347\232\204\345\200\274\343\200\202"));
#endif // QT_CONFIG(tooltip)
        label_109->setText(QString::fromUtf8("SystemSerialNumber"));

        horizontalLayout_102->addWidget(label_109);

        editSystemSerialNumber_PNVRAM = new QLineEdit(frame_edit_19);
        editSystemSerialNumber_PNVRAM->setObjectName("editSystemSerialNumber_PNVRAM");

        horizontalLayout_102->addWidget(editSystemSerialNumber_PNVRAM);


        verticalLayout_67->addLayout(horizontalLayout_102);

        horizontalLayout_103 = new QHBoxLayout();
        horizontalLayout_103->setObjectName("horizontalLayout_103");
        label_106 = new QLabel(frame_edit_19);
        label_106->setObjectName("label_106");
#if QT_CONFIG(tooltip)
        label_106->setToolTip(QString::fromUtf8("Specifies the value of NVRAM variable 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:system-id for boot services only. Value found on Macs is equal to SMBIOS SystemUUID.\n"
"----\n"
"\346\214\207\345\256\232 NVRAM \345\217\230\351\207\217 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:system-id \347\232\204\345\200\274\357\274\214\344\273\205\347\224\250\344\272\216\345\220\257\345\212\250\346\234\215\345\212\241\343\200\202\345\234\250Mac\344\270\212\346\211\276\345\210\260\347\232\204\345\200\274\347\255\211\344\272\216SMBIOS SystemUUID\343\200\202"));
#endif // QT_CONFIG(tooltip)
        label_106->setText(QString::fromUtf8("SystemUUID"));

        horizontalLayout_103->addWidget(label_106);

        editSystemUUID_PlatformNVRAM = new QLineEdit(frame_edit_19);
        editSystemUUID_PlatformNVRAM->setObjectName("editSystemUUID_PlatformNVRAM");

        horizontalLayout_103->addWidget(editSystemUUID_PlatformNVRAM);


        verticalLayout_67->addLayout(horizontalLayout_103);


        gridLayout_40->addWidget(frame_edit_19, 0, 0, 1, 1);

        tabPlatformInfo->addTab(tabPlatformInfo4, QString());
        tabPlatformInfo5 = new QWidget();
        tabPlatformInfo5->setObjectName("tabPlatformInfo5");
        gridLayout_41 = new QGridLayout(tabPlatformInfo5);
        gridLayout_41->setObjectName("gridLayout_41");
        frame_edit_20 = new QFrame(tabPlatformInfo5);
        frame_edit_20->setObjectName("frame_edit_20");
        frame_edit_20->setFrameShape(QFrame::Shape::NoFrame);
        frame_edit_20->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_68 = new QVBoxLayout(frame_edit_20);
        verticalLayout_68->setObjectName("verticalLayout_68");
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_71 = new QLabel(frame_edit_20);
        label_71->setObjectName("label_71");
#if QT_CONFIG(tooltip)
        label_71->setToolTip(QString::fromUtf8("Asset tag number. Varies, may be empty or Type2 - Board Asset Tag.\n"
"----\n"
"\350\265\204\344\272\247\346\240\207\347\255\276\345\217\267\343\200\202\345\217\257\350\203\275\344\270\272\347\251\272\346\210\2262\347\261\273\346\235\277\350\265\204\344\272\247\346\240\207\347\255\276\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_15->addWidget(label_71);

        editBoardAssetTag = new QLineEdit(frame_edit_20);
        editBoardAssetTag->setObjectName("editBoardAssetTag");

        horizontalLayout_15->addWidget(editBoardAssetTag);

        label_73 = new QLabel(frame_edit_20);
        label_73->setObjectName("label_73");
#if QT_CONFIG(tooltip)
        label_73->setToolTip(QString::fromUtf8("SMBIOS: Baseboard (or Module) Information (Type 2) \342\200\224 Location in Chassis\n"
"\n"
"Description: Varies, may be empty or Part Component.\n"
"----\n"
"SMBIOS\357\274\232\345\272\225\346\235\277\357\274\210\346\210\226\346\250\241\345\235\227\357\274\211\344\277\241\346\201\257\357\274\210\347\261\273\345\236\2132\357\274\211--\345\234\250\346\234\272\347\256\261\344\270\255\347\232\204\344\275\215\347\275\256\343\200\202\n"
"\n"
"\350\257\264\346\230\216\357\274\232\345\217\230\351\207\217\357\274\214\345\217\257\350\203\275\346\230\257\347\251\272\347\232\204\357\274\214\344\271\237\345\217\257\350\203\275\346\230\257\351\203\250\345\210\206\347\273\204\344\273\266\343\200\202\n"
"\n"
""));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_15->addWidget(label_73);

        editBoardLocationInChassis = new QLineEdit(frame_edit_20);
        editBoardLocationInChassis->setObjectName("editBoardLocationInChassis");

        horizontalLayout_15->addWidget(editBoardLocationInChassis);

        label_75 = new QLabel(frame_edit_20);
        label_75->setObjectName("label_75");
#if QT_CONFIG(tooltip)
        label_75->setToolTip(QString::fromUtf8(" Board manufacturer. All rules of SystemManufacturer do apply.\n"
"\n"
"----\n"
"\n"
" \346\235\277\345\210\266\351\200\240\345\225\206\343\200\202SystemManufacturer\347\232\204\346\211\200\346\234\211\350\247\204\345\210\231\351\203\275\351\200\202\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_15->addWidget(label_75);

        editBoardManufacturer = new QLineEdit(frame_edit_20);
        editBoardManufacturer->setObjectName("editBoardManufacturer");

        horizontalLayout_15->addWidget(editBoardManufacturer);

        label_77 = new QLabel(frame_edit_20);
        label_77->setObjectName("label_77");
#if QT_CONFIG(tooltip)
        label_77->setToolTip(QString::fromUtf8("Mac Board ID (board-id). May look like Mac-7BA5B2D9E42DDD94 or Mac-F221BEC8 in older models.\n"
"----\n"
"Mac\346\235\277ID\357\274\210board-id\357\274\211\343\200\202\345\217\257\350\203\275\347\234\213\350\265\267\346\235\245\345\203\217Mac-7BA5B2D9E42DDD94\346\210\226\346\227\247\345\236\213\345\217\267\347\232\204Mac-F221BEC8\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_15->addWidget(label_77);

        editBoardProduct_2 = new QLineEdit(frame_edit_20);
        editBoardProduct_2->setObjectName("editBoardProduct_2");

        horizontalLayout_15->addWidget(editBoardProduct_2);


        verticalLayout_68->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_81 = new QLabel(frame_edit_20);
        label_81->setObjectName("label_81");
#if QT_CONFIG(tooltip)
        label_81->setToolTip(QString::fromUtf8(" Either 0xA (Motherboard (includes processor, memory, and I/O) or 0xB (Processor/Memory Module), refer to Table 15 \342\200\223 Baseboard: Board Type for more details.\n"
"----\n"
" 0xA(\344\270\273\346\235\277(\345\214\205\346\213\254\345\244\204\347\220\206\345\231\250\343\200\201\345\206\205\345\255\230\345\222\214I/O)\346\210\2260xB(\345\244\204\347\220\206\345\231\250/\345\206\205\345\255\230\346\250\241\345\235\227)\357\274\214\350\257\267\345\217\202\351\230\205\350\241\25015 - \345\237\272\346\235\277\343\200\202\346\233\264\345\244\232\350\257\246\346\203\205\350\257\267\345\217\202\350\200\203\350\241\25015 - \345\237\272\346\235\277\357\274\232\346\235\277\345\236\213\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_16->addWidget(label_81);

        editIntBoardType = new QLineEdit(frame_edit_20);
        editIntBoardType->setObjectName("editIntBoardType");

        horizontalLayout_16->addWidget(editIntBoardType);

        label_83 = new QLabel(frame_edit_20);
        label_83->setObjectName("label_83");
#if QT_CONFIG(tooltip)
        label_83->setToolTip(QString::fromUtf8("Board version number. Varies, may match SystemProductName or SystemProductVersion.\n"
"----\n"
"\346\235\277\347\232\204\347\211\210\346\234\254\345\217\267\343\200\202\345\217\257\350\203\275\344\270\216SystemProductName\346\210\226SystemProductVersion\345\214\271\351\205\215\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_16->addWidget(label_83);

        editBoardVersion = new QLineEdit(frame_edit_20);
        editBoardVersion->setObjectName("editBoardVersion");

        horizontalLayout_16->addWidget(editBoardVersion);

        label_65 = new QLabel(frame_edit_20);
        label_65->setObjectName("label_65");
#if QT_CONFIG(tooltip)
        label_65->setToolTip(QString::fromUtf8(" Firmware release date. Similar to BIOSVersion. May look like 12/08/2017.\n"
"----\n"
" \345\233\272\344\273\266\345\217\221\345\270\203\346\227\245\346\234\237\343\200\202\347\261\273\344\274\274\344\272\216BIOSVersion\343\200\202\345\217\257\350\203\275\347\234\213\350\265\267\346\235\245\345\203\21712/08/2017\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_16->addWidget(label_65);

        editBIOSReleaseDate = new QLineEdit(frame_edit_20);
        editBIOSReleaseDate->setObjectName("editBIOSReleaseDate");

        horizontalLayout_16->addWidget(editBIOSReleaseDate);

        label_67 = new QLabel(frame_edit_20);
        label_67->setObjectName("label_67");
#if QT_CONFIG(tooltip)
        label_67->setToolTip(QString::fromUtf8(" BIOS Vendor. All rules of SystemManufacturer do apply.\n"
"----\n"
" BIOS\344\276\233\345\272\224\345\225\206\343\200\202\346\211\200\346\234\211SystemManufacturer\347\232\204\350\247\204\345\210\231\351\203\275\351\200\202\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_16->addWidget(label_67);

        editBIOSVendor = new QLineEdit(frame_edit_20);
        editBIOSVendor->setObjectName("editBIOSVendor");

        horizontalLayout_16->addWidget(editBIOSVendor);


        verticalLayout_68->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_85 = new QLabel(frame_edit_20);
        label_85->setObjectName("label_85");
#if QT_CONFIG(tooltip)
        label_85->setToolTip(QString::fromUtf8("Chassis type name. Varies, could be empty or MacBook-Aluminum.\n"
"----\n"
"\346\234\272\347\256\261\347\261\273\345\236\213\345\220\215\347\247\260\343\200\202\345\217\257\350\203\275\346\230\257\347\251\272\347\232\204\357\274\214\344\271\237\345\217\257\350\203\275\346\230\257 MacBook-Aluminum\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_17->addWidget(label_85);

        editChassisAssetTag = new QLineEdit(frame_edit_20);
        editChassisAssetTag->setObjectName("editChassisAssetTag");

        horizontalLayout_17->addWidget(editChassisAssetTag);

        label_87 = new QLabel(frame_edit_20);
        label_87->setObjectName("label_87");
#if QT_CONFIG(tooltip)
        label_87->setToolTip(QString::fromUtf8("SMBIOS: System Enclosure or Chassis (Type 3) \342\200\224 Manufacturer\n"
"Description: Board manufacturer. All rules of SystemManufacturer do apply.\n"
"----\n"
"SMBIOS\357\274\232\347\263\273\347\273\237\345\244\226\345\243\263\346\210\226\346\234\272\347\256\261(\347\261\273\345\236\2133)-\345\210\266\351\200\240\345\225\206\n"
"\350\257\264\346\230\216\357\274\232\346\235\277\345\210\266\351\200\240\345\225\206\343\200\202\346\211\200\346\234\211SystemManufacturer\347\232\204\350\247\204\345\210\231\351\203\275\351\200\202\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_17->addWidget(label_87);

        editChassisManufacturer = new QLineEdit(frame_edit_20);
        editChassisManufacturer->setObjectName("editChassisManufacturer");

        horizontalLayout_17->addWidget(editChassisManufacturer);

        label_89 = new QLabel(frame_edit_20);
        label_89->setObjectName("label_89");
#if QT_CONFIG(tooltip)
        label_89->setToolTip(QString::fromUtf8("SMBIOS: System Enclosure or Chassis (Type 3) \342\200\224 Version\n"
"\n"
"Description: Should match SystemSerialNumber.\n"
"----\n"
"SMBIOS\357\274\232\347\263\273\347\273\237\345\244\226\345\243\263\346\210\226\346\234\272\347\256\261(\347\261\273\345\236\2133)----\347\211\210\346\234\254\343\200\202\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\272\224\344\270\216SystemSerialNumber\345\214\271\351\205\215\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_17->addWidget(label_89);

        editChassisSerialNumber = new QLineEdit(frame_edit_20);
        editChassisSerialNumber->setObjectName("editChassisSerialNumber");

        horizontalLayout_17->addWidget(editChassisSerialNumber);

        label_91 = new QLabel(frame_edit_20);
        label_91->setObjectName("label_91");
#if QT_CONFIG(tooltip)
        label_91->setToolTip(QString::fromUtf8(" Chassis type, refer to Table 17 \342\200\224 System Enclosure or Chassis Types for more details.\n"
"----\n"
" \346\234\272\347\256\261\347\261\273\345\236\213\357\274\214\350\257\246\350\247\201\350\241\25017-\347\263\273\347\273\237\346\234\272\347\256\261\346\210\226\346\234\272\347\256\261\347\261\273\345\236\213\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_17->addWidget(label_91);

        editIntChassisType = new QLineEdit(frame_edit_20);
        editIntChassisType->setObjectName("editIntChassisType");

        horizontalLayout_17->addWidget(editIntChassisType);


        verticalLayout_68->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_84 = new QLabel(frame_edit_20);
        label_84->setObjectName("label_84");
#if QT_CONFIG(tooltip)
        label_84->setToolTip(QString::fromUtf8("Mac Board ID (board-id). May look like Mac-7BA5B2D9E42DDD94 or Mac-F221BEC8 in older models. Sometimes it can be just empty.\n"
"----\n"
"Mac\346\235\277ID\357\274\210board-id\357\274\211\343\200\202\345\217\257\350\203\275\347\234\213\350\265\267\346\235\245\345\203\217 Mac-7BA5B2D9E42DDD94 \346\210\226\346\227\247\345\236\213\345\217\267\347\232\204 Mac-F221BEC8\343\200\202\346\234\211\346\227\266\345\256\203\345\217\257\350\203\275\346\230\257\347\251\272\347\232\204\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_18->addWidget(label_84);

        editSystemSKUNumber = new QLineEdit(frame_edit_20);
        editSystemSKUNumber->setObjectName("editSystemSKUNumber");

        horizontalLayout_18->addWidget(editSystemSKUNumber);

        label_78 = new QLabel(frame_edit_20);
        label_78->setObjectName("label_78");
#if QT_CONFIG(tooltip)
        label_78->setToolTip(QString::fromUtf8("Family name. May look like iMac Pro.\n"
"----\n"
"\345\256\266\346\227\217\345\220\215\343\200\202\345\217\257\350\203\275\347\234\213\350\265\267\346\235\245\345\203\217iMac Pro\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_18->addWidget(label_78);

        editSystemFamily = new QLineEdit(frame_edit_20);
        editSystemFamily->setObjectName("editSystemFamily");

        horizontalLayout_18->addWidget(editSystemFamily);

        label_82 = new QLabel(frame_edit_20);
        label_82->setObjectName("label_82");
#if QT_CONFIG(tooltip)
        label_82->setToolTip(QString::fromUtf8(" Preferred Mac model used to mark the device as supported by the operating system. \n"
"This value must be specified by any configuration for later automatic generation of the related values in this and other SMBIOS tables and related configuration parameters. If SystemProductName is not compatible with the target operating system, -no_compat_check boot argument may be used as an override.\n"
"\n"
"Note: If SystemProductName is unknown, and related fields are unspecified, default values should be assumed as being set to MacPro6,1 data. The list of known products can be found in AppleModels.\n"
"----\n"
" \351\246\226\351\200\211Mac\345\236\213\345\217\267\357\274\214\347\224\250\344\272\216\346\240\207\350\256\260\350\256\276\345\244\207\345\217\227\346\223\215\344\275\234\347\263\273\347\273\237\346\224\257\346\214\201\343\200\202\n"
"\344\273\273\344\275\225\351\205\215\347\275\256\351\203\275\345\277\205\351\241\273\346\214\207\345\256\232\346\255\244\345\200\274\357\274\214\344\273\245\344\276\277\344\273\245"
                        "\345\220\216\350\207\252\345\212\250\347\224\237\346\210\220\346\255\244\350\241\250\345\222\214\345\205\266\344\273\226 SMBIOS \350\241\250\345\217\212\347\233\270\345\205\263\351\205\215\347\275\256\345\217\202\346\225\260\344\270\255\347\232\204\347\233\270\345\205\263\345\200\274\343\200\202\345\246\202\346\236\234SystemProductName\344\270\216\347\233\256\346\240\207\346\223\215\344\275\234\347\263\273\347\273\237\344\270\215\345\205\274\345\256\271\357\274\214\345\217\257\344\273\245\344\275\277\347\224\250-no_compat_check\345\274\225\345\257\274\345\217\202\346\225\260\344\275\234\344\270\272\350\246\206\347\233\226\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\246\202\346\236\234SystemProductName\346\234\252\347\237\245\357\274\214\344\270\224\347\233\270\345\205\263\345\255\227\346\256\265\346\234\252\346\214\207\345\256\232\357\274\214\345\210\231\345\272\224\345\201\207\345\256\232\351\273\230\350\256\244\345\200\274\350\256\276\347\275\256\344\270\272MacPro6,1\346\225\260\346\215\256"
                        "\343\200\202\345\267\262\347\237\245\344\272\247\345\223\201\347\232\204\345\210\227\350\241\250\345\217\257\344\273\245\345\234\250AppleModels\344\270\255\346\211\276\345\210\260\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_18->addWidget(label_82);

        editSystemProductName_2 = new QLineEdit(frame_edit_20);
        editSystemProductName_2->setObjectName("editSystemProductName_2");

        horizontalLayout_18->addWidget(editSystemProductName_2);

        label_80 = new QLabel(frame_edit_20);
        label_80->setObjectName("label_80");
#if QT_CONFIG(tooltip)
        label_80->setToolTip(QString::fromUtf8(" OEM manufacturer of the particular board. Shall not be specified unless strictly required. \n"
"\n"
"Should not contain Apple Inc., as this confuses numerous services present in the operating system, such as firmware updates, eficheck, as well as kernel extensions developed in Acidanthera, such as Lilu and its plugins. \n"
"\n"
"In addition it will also make some operating systems like Linux unbootable.\n"
"\n"
"----\n"
"\n"
" \347\211\271\345\256\232\347\224\265\350\267\257\346\235\277\347\232\204OEM\345\210\266\351\200\240\345\225\206\343\200\202\351\231\244\351\235\236\346\234\211\344\270\245\346\240\274\350\246\201\346\261\202\357\274\214\345\220\246\345\210\231\344\270\215\345\272\224\346\214\207\345\256\232\343\200\202\n"
"\n"
"\344\270\215\345\272\224\345\214\205\345\220\253Apple Inc.\357\274\214\345\233\240\344\270\272\350\277\231\345\260\206\346\267\267\346\267\206\346\223\215\344\275\234\347\263\273\347\273\237\344\270\255\345\255\230\345\234\250\347\232\204\344\274\227\345\244\232\346\234\215\345\212"
                        "\241\357\274\214\345\246\202\345\233\272\344\273\266\346\233\264\346\226\260\343\200\201eficheck\357\274\214\344\273\245\345\217\212Acidanthera\345\274\200\345\217\221\347\232\204\345\206\205\346\240\270\346\211\251\345\261\225\357\274\214\345\246\202Lilu\345\217\212\345\205\266\346\217\222\344\273\266\343\200\202\n"
"\n"
"\346\255\244\345\244\226\345\256\203\350\277\230\344\274\232\344\275\277\344\270\200\344\272\233\346\223\215\344\275\234\347\263\273\347\273\237\345\246\202Linux\346\227\240\346\263\225\345\220\257\345\212\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_18->addWidget(label_80);

        editSystemManufacturer = new QLineEdit(frame_edit_20);
        editSystemManufacturer->setObjectName("editSystemManufacturer");

        horizontalLayout_18->addWidget(editSystemManufacturer);


        verticalLayout_68->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_88 = new QLabel(frame_edit_20);
        label_88->setObjectName("label_88");
#if QT_CONFIG(tooltip)
        label_88->setToolTip(QString::fromUtf8(" A UUID is an identifier that is designed to be unique across both time and space. It requires no central registration process.\n"
"----\n"
"UUID\346\230\257\344\270\200\347\247\215\346\240\207\350\257\206\347\254\246\357\274\214\350\256\276\350\256\241\344\270\272\345\234\250\346\227\266\351\227\264\345\222\214\347\251\272\351\227\264\344\270\212\351\203\275\346\230\257\345\224\257\344\270\200\347\232\204\343\200\202\345\256\203\344\270\215\351\234\200\350\246\201\344\270\255\345\277\203\346\263\250\345\206\214\350\277\207\347\250\213\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_19->addWidget(label_88);

        editSystemUUID_SMBIOS = new QLineEdit(frame_edit_20);
        editSystemUUID_SMBIOS->setObjectName("editSystemUUID_SMBIOS");

        horizontalLayout_19->addWidget(editSystemUUID_SMBIOS);

        label_68 = new QLabel(frame_edit_20);
        label_68->setObjectName("label_68");
#if QT_CONFIG(tooltip)
        label_68->setToolTip(QString::fromUtf8(" 64-bit firmware features bitmask. Refer to AppleFeatures.h for more details. Lower 32 bits match FirmwareFeatures. Upper 64 bits match ExtendedFirmwareFeatures.\n"
"----\n"
" 64\344\275\215\345\233\272\344\273\266\345\205\267\346\234\211\344\275\215\346\216\251\347\240\201\345\212\237\350\203\275\343\200\202\346\233\264\345\244\232\347\273\206\350\212\202\350\257\267\345\217\202\350\200\203AppleFeatures.h\343\200\202\344\275\21632\344\275\215\345\214\271\351\205\215FirmwareFeatures\343\200\202\351\253\23064\344\275\215\345\214\271\351\205\215ExtendedFirmwareFeatures\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_19->addWidget(label_68);

        editDatFirmwareFeatures_SMBIOS = new QLineEdit(frame_edit_20);
        editDatFirmwareFeatures_SMBIOS->setObjectName("editDatFirmwareFeatures_SMBIOS");

        horizontalLayout_19->addWidget(editDatFirmwareFeatures_SMBIOS);

        label_90 = new QLabel(frame_edit_20);
        label_90->setObjectName("label_90");
#if QT_CONFIG(tooltip)
        label_90->setToolTip(QString::fromUtf8(" Product iteration version number. May look like 1.1.\n"
"----\n"
" \344\272\247\345\223\201\350\277\255\344\273\243\347\211\210\346\234\254\345\217\267\343\200\202\345\217\257\350\203\275\347\234\213\350\265\267\346\235\245\345\203\2171.1\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_19->addWidget(label_90);

        editSystemVersion = new QLineEdit(frame_edit_20);
        editSystemVersion->setObjectName("editSystemVersion");

        horizontalLayout_19->addWidget(editSystemVersion);

        label_92 = new QLabel(frame_edit_20);
        label_92->setObjectName("label_92");
#if QT_CONFIG(tooltip)
        label_92->setToolTip(QString::fromUtf8(" Supported bits of extended firmware features bitmask. Refer to AppleFeatures.h for more details.\n"
"\n"
"Lower 32 bits match FirmwareFeaturesMask. Upper 64 bits match ExtendedFirmwareFeaturesMask.\n"
"----\n"
" \346\224\257\346\214\201\347\232\204\346\211\251\345\261\225\345\233\272\344\273\266\345\212\237\350\203\275\344\275\215\346\216\251\347\240\201\343\200\202\346\233\264\345\244\232\347\273\206\350\212\202\350\257\267\345\217\202\350\200\203AppleFeatures.h\343\200\202\n"
"\n"
"\344\275\21632\344\275\215\345\214\271\351\205\215FirmwareFeaturesMask\343\200\202\351\253\23064\344\275\215\345\214\271\351\205\215ExtendedFirmwareFeaturesMask\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_19->addWidget(label_92);

        editDatFirmwareFeaturesMask_SMBIOS = new QLineEdit(frame_edit_20);
        editDatFirmwareFeaturesMask_SMBIOS->setObjectName("editDatFirmwareFeaturesMask_SMBIOS");

        horizontalLayout_19->addWidget(editDatFirmwareFeaturesMask_SMBIOS);


        verticalLayout_68->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_74 = new QLabel(frame_edit_20);
        label_74->setObjectName("label_74");
#if QT_CONFIG(tooltip)
        label_74->setToolTip(QString::fromUtf8(" Combined of Processor Major and Minor types.\n"
"----\n"
" \345\244\204\347\220\206\345\231\250\344\270\273\347\261\273\345\236\213\345\222\214\346\254\241\347\261\273\345\236\213\347\232\204\347\273\204\345\220\210\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_20->addWidget(label_74);

        editIntProcessorType = new QLineEdit(frame_edit_20);
        editIntProcessorType->setObjectName("editIntProcessorType");

        horizontalLayout_20->addWidget(editIntProcessorType);

        label_76 = new QLabel(frame_edit_20);
        label_76->setObjectName("label_76");
#if QT_CONFIG(tooltip)
        label_76->setToolTip(QString::fromUtf8("ASCII string containing SMC version in upper case. Missing on T2 based Macs. Ignored when zero.\n"
"----\n"
"\345\214\205\345\220\253\345\244\247\345\206\231\347\232\204SMC\347\211\210\346\234\254\347\232\204ASCII\345\255\227\347\254\246\344\270\262\343\200\202\345\234\250\345\237\272\344\272\216T2\347\232\204Mac\344\270\212\347\274\272\345\244\261\343\200\202\344\270\272\351\233\266\346\227\266\345\277\275\347\225\245\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_20->addWidget(label_76);

        editDatSmcVersion = new QLineEdit(frame_edit_20);
        editDatSmcVersion->setObjectName("editDatSmcVersion");

        horizontalLayout_20->addWidget(editDatSmcVersion);

        label_72 = new QLabel(frame_edit_20);
        label_72->setObjectName("label_72");
#if QT_CONFIG(tooltip)
        label_72->setToolTip(QString::fromUtf8(" Platform features bitmask. Refer to AppleFeatures.h for more details. Use 0xFFFFFFFF value to not provide this table.\n"
"----\n"
" \345\271\263\345\217\260\345\212\237\350\203\275\344\275\215\346\216\251\347\240\201\343\200\202\346\233\264\345\244\232\347\273\206\350\212\202\350\257\267\345\217\202\350\200\203AppleFeatures.h\343\200\202\344\275\277\347\224\2500xFFFFFFFF\345\200\274\344\270\215\346\217\220\344\276\233\346\255\244\350\241\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_20->addWidget(label_72);

        editIntPlatformFeature = new QLineEdit(frame_edit_20);
        editIntPlatformFeature->setObjectName("editIntPlatformFeature");

        horizontalLayout_20->addWidget(editIntPlatformFeature);

        label_86 = new QLabel(frame_edit_20);
        label_86->setObjectName("label_86");
#if QT_CONFIG(tooltip)
        label_86->setToolTip(QString::fromUtf8(" Product serial number in defined format. Known formats are described in macserial.\n"
"----\n"
" \344\273\245\346\237\220\347\247\215\345\256\232\344\271\211\347\232\204\346\240\274\345\274\217\350\241\250\347\244\272\344\272\247\345\223\201\345\272\217\345\210\227\345\217\267\343\200\202\345\267\262\347\237\245\347\232\204\346\240\274\345\274\217\345\234\250macserial\344\270\255\346\217\217\350\277\260\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_20->addWidget(label_86);

        editSystemSerialNumber_2 = new QLineEdit(frame_edit_20);
        editSystemSerialNumber_2->setObjectName("editSystemSerialNumber_2");

        horizontalLayout_20->addWidget(editSystemSerialNumber_2);


        verticalLayout_68->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_66 = new QLabel(frame_edit_20);
        label_66->setObjectName("label_66");
#if QT_CONFIG(tooltip)
        label_66->setToolTip(QString::fromUtf8(" Should match BoardProduct.\n"
"----\n"
" \345\272\224\344\270\216BoardProduct\345\214\271\351\205\215\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_21->addWidget(label_66);

        editChassisVersion = new QLineEdit(frame_edit_20);
        editChassisVersion->setObjectName("editChassisVersion");

        horizontalLayout_21->addWidget(editChassisVersion);

        label_69 = new QLabel(frame_edit_20);
        label_69->setObjectName("label_69");
#if QT_CONFIG(tooltip)
        label_69->setToolTip(QString::fromUtf8(" Firmware version. \n"
"\n"
"This value gets updated and takes part in update delivery configuration and macOS version compatibility. This value could look like MM71.88Z.0234.B00.1809171422 in older firmwares,and is described in BiosId.h. In newer firmwares it should look like 236.0.0.0.0 or 220.230.16.0.0 (iBridge: 16.16.2542.0.0,0). iBridge version is read from BridgeOSVersion variable, and is only present on macs with T2.\n"
"\n"
"----\n"
"\n"
" \345\233\272\344\273\266\347\211\210\346\234\254\343\200\202\n"
"\n"
"\350\277\231\344\270\252\345\200\274\344\274\232\350\242\253\346\233\264\346\226\260\357\274\214\345\271\266\345\217\202\344\270\216\346\233\264\346\226\260\344\272\244\344\273\230\351\205\215\347\275\256\345\222\214macOS\347\211\210\346\234\254\347\232\204\345\205\274\345\256\271\346\200\247\343\200\202\345\234\250\346\227\247\347\232\204\345\233\272\344\273\266\344\270\255\357\274\214\350\277\231\344\270\252\345\200\274\347\234\213\350\265\267\346\235\245\345\203\217MM71.88Z.0234.B00.1809171422\357"
                        "\274\214\345\271\266\345\234\250BiosId.h\344\270\255\346\217\217\350\277\260\343\200\202\345\234\250\346\226\260\347\232\204\345\233\272\344\273\266\344\270\255\357\274\214\345\256\203\345\272\224\350\257\245\347\234\213\350\265\267\346\235\245\345\203\217236.0.0.0\346\210\226220.230.16.0.0 (iBridge: 16.16.2542.0.0,0)\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_21->addWidget(label_69);

        editBIOSVersion = new QLineEdit(frame_edit_20);
        editBIOSVersion->setObjectName("editBIOSVersion");

        horizontalLayout_21->addWidget(editBIOSVersion);

        label_79 = new QLabel(frame_edit_20);
        label_79->setObjectName("label_79");
#if QT_CONFIG(tooltip)
        label_79->setToolTip(QString::fromUtf8("Board serial number in defined format. Known formats are described in macserial.\n"
"----\n"
"\346\235\277\344\270\212\347\232\204\345\272\217\345\210\227\345\217\267\344\273\245\345\256\232\344\271\211\347\232\204\346\240\274\345\274\217\350\241\250\347\244\272\343\200\202\345\267\262\347\237\245\347\232\204\346\240\274\345\274\217\345\234\250macserial\344\270\255\346\217\217\350\277\260\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_21->addWidget(label_79);

        editBoardSerialNumber = new QLineEdit(frame_edit_20);
        editBoardSerialNumber->setObjectName("editBoardSerialNumber");

        horizontalLayout_21->addWidget(editBoardSerialNumber);


        verticalLayout_68->addLayout(horizontalLayout_21);


        gridLayout_41->addWidget(frame_edit_20, 0, 0, 1, 1);

        tabPlatformInfo->addTab(tabPlatformInfo5, QString());
        tabPlatformInfo6 = new QWidget();
        tabPlatformInfo6->setObjectName("tabPlatformInfo6");
        gridLayout_37 = new QGridLayout(tabPlatformInfo6);
        gridLayout_37->setObjectName("gridLayout_37");
        gridLayout_37->setContentsMargins(5, 0, 5, 0);
        textMacInfo = new QTextEdit(tabPlatformInfo6);
        textMacInfo->setObjectName("textMacInfo");
        textMacInfo->setFrameShape(QFrame::Shape::NoFrame);
        textMacInfo->setReadOnly(true);

        gridLayout_37->addWidget(textMacInfo, 0, 0, 1, 1);

        tabPlatformInfo->addTab(tabPlatformInfo6, QString());

        gridLayout_26->addWidget(tabPlatformInfo, 0, 0, 1, 1);

        gbox01 = new QGroupBox(tab_7);
        gbox01->setObjectName("gbox01");
        gridLayout_24 = new QGridLayout(gbox01);
        gridLayout_24->setObjectName("gridLayout_24");
        frame_chk_17 = new QFrame(gbox01);
        frame_chk_17->setObjectName("frame_chk_17");
        frame_chk_17->setFrameShape(QFrame::Shape::NoFrame);
        frame_chk_17->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_52 = new QVBoxLayout(frame_chk_17);
        verticalLayout_52->setObjectName("verticalLayout_52");
        chkAutomatic = new QCheckBox(frame_chk_17);
        chkAutomatic->setObjectName("chkAutomatic");
#if QT_CONFIG(tooltip)
        chkAutomatic->setToolTip(QString::fromUtf8("Generate PlatformInfo based on the Generic section instead of using values from the DataHub,NVRAM and SMBIOS sections.\n"
"\n"
"----\n"
"\n"
"\345\237\272\344\272\216Generic\351\203\250\345\210\206\347\224\237\346\210\220PlatformInfo\357\274\214\350\200\214\344\270\215\346\230\257\344\275\277\347\224\250DataHub\343\200\201NVRAM\345\222\214SMBIOS\351\203\250\345\210\206\347\232\204\345\200\274\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_52->addWidget(chkAutomatic);

        mychkSaveDataHub = new QCheckBox(frame_chk_17);
        mychkSaveDataHub->setObjectName("mychkSaveDataHub");

        verticalLayout_52->addWidget(mychkSaveDataHub);


        gridLayout_24->addWidget(frame_chk_17, 0, 0, 1, 1);

        frame_chk_18 = new QFrame(gbox01);
        frame_chk_18->setObjectName("frame_chk_18");
        frame_chk_18->setFrameShape(QFrame::Shape::NoFrame);
        frame_chk_18->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_53 = new QVBoxLayout(frame_chk_18);
        verticalLayout_53->setObjectName("verticalLayout_53");
        chkCustomMemory = new QCheckBox(frame_chk_18);
        chkCustomMemory->setObjectName("chkCustomMemory");
#if QT_CONFIG(tooltip)
        chkCustomMemory->setToolTip(QString::fromUtf8("Use custom memory configuration defined in the Memory section. \n"
"\n"
"This completely replaces any existing memory configuration in SMBIOS, and is only active when UpdateSMBIOS is set to true.\n"
"\n"
"----\n"
"\n"
"\344\275\277\347\224\250\345\234\250 \"\345\206\205\345\255\230 \"\351\203\250\345\210\206\345\256\232\344\271\211\347\232\204\350\207\252\345\256\232\344\271\211\345\206\205\345\255\230\351\205\215\347\275\256\343\200\202\n"
"\n"
"\350\277\231\345\260\206\345\256\214\345\205\250\345\217\226\344\273\243SMBIOS\344\270\255\344\273\273\344\275\225\347\216\260\346\234\211\347\232\204\345\206\205\345\255\230\351\205\215\347\275\256\357\274\214\345\271\266\344\270\224\345\217\252\346\234\211\345\275\223UpdateSMBIOS\350\242\253\350\256\276\347\275\256\344\270\272true\346\227\266\346\211\215\344\274\232\346\277\200\346\264\273\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_53->addWidget(chkCustomMemory);

        chkUpdateDataHub = new QCheckBox(frame_chk_18);
        chkUpdateDataHub->setObjectName("chkUpdateDataHub");
#if QT_CONFIG(tooltip)
        chkUpdateDataHub->setToolTip(QString::fromUtf8("Description: Update Data Hub fields. \n"
"\n"
"These fields are read from the Generic or DataHub sections depending on the setting of the Automatic property.\n"
"\n"
"Note: The implementation of the Data Hub protocol in EFI firmware on virtually all systems, including Apple hardware, means that existing Data Hub entries cannot be overridden. \n"
"\n"
"New entries are added to the end of the Data Hub instead, with macOS ignoring old entries. This can be worked around by replacing the Data Hub protocol using the ProtocolOverrides section. Refer to the DataHub protocol override description for details.\n"
"----\n"
"\350\257\264\346\230\216\357\274\232\346\233\264\346\226\260\346\225\260\346\215\256\346\236\242\347\272\275(Data Hub)\345\255\227\346\256\265\343\200\202\n"
"\n"
"\346\240\271\346\215\256\350\207\252\345\212\250\345\261\236\346\200\247\347\232\204\350\256\276\347\275\256\357\274\214\350\277\231\344\272\233\345\255\227\346\256\265\344\273\216 Generic \346\210\226 DataHub \351\203\250\345\210\206\350\257"
                        "\273\345\217\226\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\207\240\344\271\216\346\211\200\346\234\211\347\263\273\347\273\237\357\274\210\345\214\205\346\213\254 Apple \347\241\254\344\273\266\357\274\211\345\234\250 EFI \345\233\272\344\273\266\344\270\255\345\256\236\346\226\275 Data Hub \345\215\217\350\256\256\357\274\214\346\204\217\345\221\263\347\235\200\347\216\260\346\234\211\347\232\204 Data Hub \346\235\241\347\233\256\344\270\215\350\203\275\350\242\253\350\246\206\347\233\226\343\200\202\n"
"\n"
"\346\226\260\346\235\241\347\233\256\344\274\232\350\242\253\346\267\273\345\212\240\345\210\260Data Hub\347\232\204\346\234\253\345\260\276\357\274\214\350\200\214macOS\344\274\232\345\277\275\347\225\245\346\227\247\346\235\241\347\233\256\343\200\202\345\217\257\344\273\245\351\200\232\350\277\207\344\275\277\347\224\250 ProtocolOverrides \351\203\250\345\210\206\346\233\277\346\215\242 Data Hub \345\215\217\350\256\256\346\235\245\350\247\243\345\206\263\350\277\231\344\270\252\351"
                        "\227\256\351\242\230\343\200\202\350\257\246\346\203\205\350\257\267\345\217\202\350\200\203 DataHub \345\215\217\350\256\256\350\246\206\347\233\226\350\257\264\346\230\216\343\200\202\n"
"\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_53->addWidget(chkUpdateDataHub);

        chkUseRawUuidEncoding = new QCheckBox(frame_chk_18);
        chkUseRawUuidEncoding->setObjectName("chkUseRawUuidEncoding");
#if QT_CONFIG(tooltip)
        chkUseRawUuidEncoding->setToolTip(QString::fromUtf8("Each UUID AABBCCDD-EEFF-GGHH-IIJJ-KKLLMMNNOOPP is essentially a hexadecimal 16-byte number. \n"
"\n"
"It can be encoded in two ways:\n"
"\n"
"\342\200\242 Big Endian \342\200\224 by writing all the bytes as they are without making any order changes ({AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP}). This method is also known as RFC 4122 encoding or Raw encoding.\n"
"\n"
"\342\200\242 Little Endian \342\200\224 by interpreting the bytes as numbers and using Little Endian byte representation ({DD CC BB AA FF EE HH GG II JJ KK LL MM NN OO PP}).\n"
"\n"
"SMBIOS specification did not explicitly specify the encoding format for the UUID up to SMBIOS 2.6, where it stated that Little Endian encoding shall be used. This led to the confusion in both firmware implementations and system software as different vendors used different encodings prior to that.\n"
"\n"
"\342\200\242 Apple uses Big Endian format everywhere but it ignores SMBIOS UUID within macOS.\n"
"\n"
"\342\200\242 dmidecode uses Big Endian format for SMBIOS "
                        "2.5.x or lower and Little Endian for 2.6 and newer.\n"
"\n"
"Acidanthera dmidecode prints all the three.\n"
"\n"
"\342\200\242 Windows uses Little Endian format everywhere, but it only affects the visual representation of the values.\n"
"\n"
"OpenCore always sets a recent SMBIOS version (currently 3.2) when generating the modified DMI tables. If UseRawUuidEncoding is enabled, then Big Endian format is used to store the SystemUUID data. Otherwise Little Endian is used.\n"
"\n"
"Note: Since UUIDs used in DataHub and NVRAM are not standardised and are added by Apple, this preference does not affect them. Unlike SMBIOS they are always stored in the Big Endian format.\n"
"\n"
"----\n"
"\n"
"\346\257\217\344\270\252UUID AABBCCDD-EEFF-GGHH-IIJJ-KKLLMMNNOOPP\345\237\272\346\234\254\344\270\212\346\230\257\344\270\200\344\270\25216\345\255\227\350\212\202\347\232\204\345\215\201\345\205\255\350\277\233\345\210\266\346\225\260\345\255\227\343\200\202\n"
"\n"
"\345\256\203\345\217\257\344\273\245\347\224\250\344\270\244\347"
                        "\247\215\346\226\271\345\274\217\350\277\233\350\241\214\347\274\226\347\240\201\357\274\232\n"
"\n"
"- Big Endian - \345\260\206\346\211\200\346\234\211\345\255\227\350\212\202\346\214\211\345\216\237\346\240\267\345\206\231\345\205\245\357\274\214\344\270\215\345\201\232\344\273\273\344\275\225\351\241\272\345\272\217\346\224\271\345\217\230\357\274\210{AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP}\357\274\211\343\200\202\350\277\231\347\247\215\346\226\271\346\263\225\344\271\237\350\242\253\347\247\260\344\270\272RFC 4122\347\274\226\347\240\201\346\210\226\345\216\237\345\247\213\347\274\226\347\240\201\343\200\202\n"
"\n"
"- Little Endian - \345\260\206\345\255\227\350\212\202\350\247\243\351\207\212\344\270\272\346\225\260\345\255\227\357\274\214\345\271\266\344\275\277\347\224\250Little Endian\345\255\227\350\212\202\350\241\250\347\244\272\346\263\225\357\274\210{DD CC BB AA FF EE HH GG II JJ KK LL MM NN OO PP}\357\274\211\343\200\202\n"
"\n"
"SMBIOS\350\247\204\350\214\203\345\271\266\346\262\241\346"
                        "\234\211\346\230\216\347\241\256\350\247\204\345\256\232UUID\347\232\204\347\274\226\347\240\201\346\240\274\345\274\217\357\274\214\347\233\264\345\210\260SMBIOS 2.6\357\274\214\345\256\203\350\247\204\345\256\232\345\272\224\344\275\277\347\224\250Little Endian\347\274\226\347\240\201\343\200\202\350\277\231\345\260\261\345\257\274\350\207\264\344\272\206\345\233\272\344\273\266\345\256\236\347\216\260\345\222\214\347\263\273\347\273\237\350\275\257\344\273\266\347\232\204\346\267\267\344\271\261\357\274\214\345\233\240\344\270\272\345\234\250\346\255\244\344\271\213\345\211\215\344\270\215\345\220\214\347\232\204\345\216\202\345\225\206\344\275\277\347\224\250\344\272\206\344\270\215\345\220\214\347\232\204\347\274\226\347\240\201\343\200\202\n"
"\n"
"- \350\213\271\346\236\234\344\270\200\350\210\254\351\203\275\344\275\277\347\224\250Big Endian\346\240\274\345\274\217\357\274\214\344\275\206\345\234\250macOS\345\206\205\345\256\203\345\277\275\347\225\245\344\272\206SMBIOS UUID\343\200\202\n"
"\n"
"- dmid"
                        "ecode\345\257\271SMBIOS 2.5.x\346\210\226\346\233\264\344\275\216\347\211\210\346\234\254\344\275\277\347\224\250Big Endian\346\240\274\345\274\217\357\274\214\345\257\2712.6\345\217\212\346\233\264\346\226\260\347\211\210\346\234\254\344\275\277\347\224\250Little Endian\346\240\274\345\274\217\343\200\202\n"
"\n"
"Acidanthera dmidecode\345\217\257\344\273\245\346\211\223\345\215\260\350\277\231\344\270\211\347\247\215\346\240\274\345\274\217\343\200\202\n"
"\n"
"- Windows\344\270\200\350\210\254\351\203\275\344\275\277\347\224\250Little Endian\346\240\274\345\274\217\357\274\214\344\275\206\345\256\203\345\217\252\345\275\261\345\223\215\346\225\260\345\200\274\347\232\204\350\247\206\350\247\211\350\241\250\347\216\260\343\200\202\n"
"\n"
"OpenCore\345\234\250\347\224\237\346\210\220\344\277\256\346\224\271\345\220\216\347\232\204DMI\350\241\250\346\227\266\357\274\214\346\200\273\346\230\257\350\256\276\347\275\256\344\270\200\344\270\252\346\234\200\346\226\260\347\232\204SMBIOS\347\211\210\346\234\254\357"
                        "\274\210\347\233\256\345\211\215\346\230\2573.2\357\274\211\343\200\202\345\246\202\346\236\234\345\220\257\347\224\250UseRawUuidEncoding\357\274\214\345\210\231\344\275\277\347\224\250Big Endian\346\240\274\345\274\217\346\235\245\345\255\230\345\202\250SystemUUID\346\225\260\346\215\256\343\200\202\345\220\246\345\210\231\344\275\277\347\224\250Little Endian\346\240\274\345\274\217\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\347\224\261\344\272\216DataHub\345\222\214NVRAM\344\270\255\344\275\277\347\224\250\347\232\204UUID\344\270\215\346\230\257\346\240\207\345\207\206\345\214\226\347\232\204\357\274\214\346\230\257\347\224\261Apple\346\267\273\345\212\240\347\232\204\357\274\214\346\211\200\344\273\245\350\277\231\344\270\252\345\201\217\345\245\275\344\270\215\344\274\232\345\275\261\345\223\215\345\256\203\344\273\254\343\200\202\344\270\216SMBIOS\344\270\215\345\220\214\357\274\214\345\256\203\344\273\254\346\200\273\346\230\257\344\273\245Big Endian\346\240\274\345\274\217\345\255\230\345"
                        "\202\250\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_53->addWidget(chkUseRawUuidEncoding);


        gridLayout_24->addWidget(frame_chk_18, 0, 1, 1, 1);

        frame_chk_19 = new QFrame(gbox01);
        frame_chk_19->setObjectName("frame_chk_19");
        frame_chk_19->setFrameShape(QFrame::Shape::NoFrame);
        frame_chk_19->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_55 = new QVBoxLayout(frame_chk_19);
        verticalLayout_55->setObjectName("verticalLayout_55");
        chkUpdateSMBIOS = new QCheckBox(frame_chk_19);
        chkUpdateSMBIOS->setObjectName("chkUpdateSMBIOS");
#if QT_CONFIG(tooltip)
        chkUpdateSMBIOS->setToolTip(QString::fromUtf8("Update SMBIOS fields. These fields are read from Generic or SMBIOS sections depending on Automatic value.\n"
"\n"
"----\n"
"\n"
"\346\233\264\346\226\260SMBIOS\345\255\227\346\256\265\343\200\202\350\277\231\344\272\233\345\255\227\346\256\265\346\240\271\346\215\256Automatic\345\200\274\344\273\216\351\200\232\347\224\250\346\210\226SMBIOS\351\203\250\345\210\206\350\257\273\345\217\226\343\200\202\n"
"\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_55->addWidget(chkUpdateSMBIOS);

        chkUpdateNVRAM = new QCheckBox(frame_chk_19);
        chkUpdateNVRAM->setObjectName("chkUpdateNVRAM");
#if QT_CONFIG(tooltip)
        chkUpdateNVRAM->setToolTip(QString::fromUtf8("These fields are read from Generic or PlatformNVRAM sections depending on Automatic value. \n"
"\n"
"All the other fields are to be specified with NVRAM section.\n"
"\n"
"If UpdateNVRAM is set to false the aforementioned variables can be updated with NVRAM section. \n"
"\n"
"If UpdateNVRAM is set to true the behaviour is undefined when any of the fields are present in NVRAM section.\n"
"\n"
"----\n"
"\n"
"\350\277\231\344\272\233\345\255\227\346\256\265\346\240\271\346\215\256 Automatic\357\274\210\350\207\252\345\212\250\357\274\211\345\200\274\344\273\216Generic\357\274\210\351\200\232\347\224\250\357\274\211\346\210\226PlatformNVRAM\357\274\210\345\271\263\345\217\260NVRAM\357\274\211\351\203\250\345\210\206\350\257\273\345\217\226\343\200\202\n"
"\n"
"\346\211\200\346\234\211\345\205\266\344\273\226\347\232\204\345\255\227\346\256\265\351\203\275\350\246\201\351\200\232\350\277\207NVRAM\351\203\250\345\210\206\346\235\245\346\214\207\345\256\232\343\200\202\n"
"\n"
"\345\246\202\346\236\234UpdateNVRAM\350\242"
                        "\253\350\256\276\347\275\256\344\270\272false\357\274\214\345\210\231\344\270\212\350\277\260\345\217\230\351\207\217\345\217\257\344\273\245\351\200\232\350\277\207NVRAM\351\203\250\345\210\206\350\277\233\350\241\214\346\233\264\346\226\260\343\200\202\n"
"\n"
"\345\246\202\346\236\234UpdateNVRAM\350\242\253\350\256\276\347\275\256\344\270\272true\357\274\214\345\210\231\345\275\223NVRAM\351\203\250\345\210\206\344\270\255\345\255\230\345\234\250\344\273\273\344\275\225\345\255\227\346\256\265\346\227\266\357\274\214\350\241\214\344\270\272\346\230\257\346\234\252\345\256\232\344\271\211\347\232\204\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_55->addWidget(chkUpdateNVRAM);


        gridLayout_24->addWidget(frame_chk_19, 0, 2, 1, 1);

        frame_edit_12 = new QFrame(gbox01);
        frame_edit_12->setObjectName("frame_edit_12");
        frame_edit_12->setFrameShape(QFrame::Shape::NoFrame);
        frame_edit_12->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_54 = new QVBoxLayout(frame_edit_12);
        verticalLayout_54->setObjectName("verticalLayout_54");
        horizontalLayout_66 = new QHBoxLayout();
        horizontalLayout_66->setObjectName("horizontalLayout_66");
        label_22 = new QLabel(frame_edit_12);
        label_22->setObjectName("label_22");
#if QT_CONFIG(tooltip)
        label_22->setToolTip(QString::fromUtf8("\342\200\242 TryOverwrite \342\200\224 Overwrite if new size is <= than the page-aligned  original and there are no issues with legacy region unlock. Create otherwise. Has issues with some firmwares.\n"
"\n"
"\342\200\242 Create \342\200\224 Replace the tables with newly allocated EfiReservedMemoryType at AllocateMaxAddress without any fallbacks.\n"
"\n"
"\342\200\242 Overwrite \342\200\224 Overwrite existing gEfiSmbiosTableGuid and gEfiSmbiosTable3Guid data if it fits new size.Abort with unspecified state otherwise.\n"
"\n"
"\342\200\242 Custom \342\200\224 Write SMBIOS tables (gEfiSmbios(3)TableGuid) to gOcCustomSmbios(3)TableGuid to workaround firmwares overwriting SMBIOS contents at ExitBootServices. Otherwise equivalent to Create. \n"
"\n"
"Requires patching AppleSmbios.kext and AppleACPIPlatform.kext to read from another GUID: \"EB9D2D31\" -\"EB9D2D35\" (in ASCII), done automatically by CustomSMBIOSGuid quirk.\n"
"\n"
"Note: A side effect of using Custom approach is making SMBIOS updates exclusive to mac"
                        "OS, avoiding a collission with existing Windows activation and custom OEM software but potentially breaking Apple-specific tools.\n"
"\n"
"----\n"
"\n"
"- TryOverwrite - \345\246\202\346\236\234\346\226\260\347\232\204\345\260\272\345\257\270\346\257\224\351\241\265\351\235\242\345\257\271\351\275\220\347\232\204\345\216\237\345\247\213\345\260\272\345\257\270\345\260\217\357\274\214\345\271\266\344\270\224\346\262\241\346\234\211\351\201\227\347\225\231\345\214\272\345\237\237\350\247\243\351\224\201\347\232\204\351\227\256\351\242\230\357\274\214\345\210\231\350\246\206\347\233\226\357\274\214\345\220\246\345\210\231\345\210\233\345\273\272\357\274\214\344\275\206\345\234\250\346\237\220\344\272\233\345\233\272\344\273\266\344\270\212\345\217\257\350\203\275\344\274\232\346\234\211\351\227\256\351\242\230\343\200\202\n"
"\n"
"- Create - \345\234\250AllocateMaxAddress\345\244\204\347\224\250\346\226\260\345\210\206\351\205\215\347\232\204EfiReservedMemoryType\346\233\277\346\215\242\350\241\250\357\274\214\344"
                        "\270\215\345\201\232\344\273\273\344\275\225\345\233\236\351\200\200\343\200\202\n"
"\n"
"- Overwrite - \350\246\206\347\233\226\347\216\260\346\234\211\347\232\204gEfiSmbiosTableGuid\345\222\214gEfiSmbiosTable3Guid\346\225\260\346\215\256\357\274\214\345\246\202\346\236\234\345\256\203\351\200\202\345\220\210\346\226\260\347\232\204\345\244\247\345\260\217\343\200\202\n"
"\n"
"- Custom - \345\260\206SMBIOS\350\241\250gEfiSmbios(3)TableGuid\345\206\231\345\205\245gOcCustomSmbios(3)TableGuid\357\274\214\344\273\245\350\247\243\345\206\263\345\233\272\344\273\266\345\234\250ExitBootServices\350\246\206\347\233\226SMBIOS\345\206\205\345\256\271\347\232\204\351\227\256\351\242\230\357\274\214\345\220\246\345\210\231\347\255\211\345\220\214\344\272\216Create\343\200\202\n"
"\n"
"\351\234\200\350\246\201\345\257\271 AppleSmbios.kext \345\222\214 AppleACPIPlatform.kext \346\211\223\350\241\245\344\270\201\357\274\214\344\275\277\345\205\266\350\203\275\344\273\216\345\217\246\344\270\200\344\270\252 GUID\357\274\232\""
                        "EB9D2D31\" - \"EB9D2D35\" (ASCII) \344\270\255\350\257\273\345\217\226\357\274\214\347\224\261 CustomSMBIOSGuid \351\200\211\351\241\271\350\207\252\345\212\250\345\256\214\346\210\220\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\344\275\277\347\224\250Custom\346\226\271\346\263\225\347\232\204\344\270\200\344\270\252\345\211\257\344\275\234\347\224\250\346\230\257\344\275\277SMBIOS\346\233\264\346\226\260\346\210\220\344\270\272macOS\347\213\254\346\234\211\347\232\204\357\274\214\351\201\277\345\205\215\344\272\206\344\270\216\347\216\260\346\234\211Windows\346\277\200\346\264\273\345\222\214\350\207\252\345\256\232\344\271\211OEM\350\275\257\344\273\266\347\232\204\345\206\262\347\252\201\357\274\214\344\275\206\346\234\211\345\217\257\350\203\275\347\240\264\345\235\217\350\213\271\346\236\234\347\232\204\344\270\223\347\224\250\345\267\245\345\205\267\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_66->addWidget(label_22);

        cboxUpdateSMBIOSMode = new QComboBox(frame_edit_12);
        cboxUpdateSMBIOSMode->setObjectName("cboxUpdateSMBIOSMode");
        cboxUpdateSMBIOSMode->setEditable(true);

        horizontalLayout_66->addWidget(cboxUpdateSMBIOSMode);


        verticalLayout_54->addLayout(horizontalLayout_66);


        gridLayout_24->addWidget(frame_edit_12, 0, 3, 1, 1);


        gridLayout_26->addWidget(gbox01, 1, 0, 1, 1);

        tabTotal->addTab(tab_7, QString());
        tabTotal->setTabText(tabTotal->indexOf(tab_7), QString::fromUtf8("PlatformInfo"));
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        gridLayout_47 = new QGridLayout(tab_8);
        gridLayout_47->setObjectName("gridLayout_47");
        tabUEFI = new QTabWidget(tab_8);
        tabUEFI->setObjectName("tabUEFI");
        tabUEFI->setTabShape(QTabWidget::TabShape::Rounded);
        tabUEFI->setDocumentMode(true);
        tabUEFI1 = new QWidget();
        tabUEFI1->setObjectName("tabUEFI1");
        gridLayout_59 = new QGridLayout(tabUEFI1);
        gridLayout_59->setObjectName("gridLayout_59");
        frame_chk_2 = new QFrame(tabUEFI1);
        frame_chk_2->setObjectName("frame_chk_2");
        frame_chk_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_2->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_31 = new QVBoxLayout(frame_chk_2);
        verticalLayout_31->setObjectName("verticalLayout_31");
        chkEnableJumpstart = new QCheckBox(frame_chk_2);
        chkEnableJumpstart->setObjectName("chkEnableJumpstart");
#if QT_CONFIG(tooltip)
        chkEnableJumpstart->setToolTip(QString::fromUtf8("Description: Load embedded APFS drivers from APFS containers.\n"
"\n"
"An APFS EFI driver is bundled in all bootable APFS containers. This option performs the loading of signed APFS drivers (consistent with the ScanPolicy). Refer to the \342\200\234EFI Jumpstart\342\200\235 section of the Apple File System Reference for more details.\n"
"\n"
"----\n"
"\n"
"\346\217\217\350\277\260\357\274\232\344\273\216APFS\345\256\271\345\231\250\344\270\255\345\212\240\350\275\275\345\265\214\345\205\245\345\274\217APFS\351\251\261\345\212\250\347\250\213\345\272\217\343\200\202\n"
"\n"
"\346\211\200\346\234\211\345\217\257\345\220\257\345\212\250\347\232\204 APFS \345\256\271\345\231\250\344\270\255\351\203\275\346\215\206\347\273\221\344\272\206\344\270\200\344\270\252 APFS EFI \351\251\261\345\212\250\347\250\213\345\272\217\343\200\202\346\255\244\351\200\211\351\241\271\345\260\206\346\211\247\350\241\214\345\212\240\350\275\275\345\267\262\347\255\276\345\220\215\347\232\204 APFS \351\251\261\345\212\250\347\250\213\345"
                        "\272\217\357\274\210\344\270\216 ScanPolicy \344\270\200\350\207\264\357\274\211\343\200\202\346\234\211\345\205\263\350\257\246\347\273\206\344\277\241\346\201\257\357\274\214\350\257\267\345\217\202\350\200\203 Apple File System Reference \347\232\204 \"EFI Jumpstart\" \351\203\250\345\210\206\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)
        chkEnableJumpstart->setText(QString::fromUtf8("EnableJumpstart"));

        verticalLayout_31->addWidget(chkEnableJumpstart);

        chkGlobalConnect = new QCheckBox(frame_chk_2);
        chkGlobalConnect->setObjectName("chkGlobalConnect");
#if QT_CONFIG(tooltip)
        chkGlobalConnect->setToolTip(QString::fromUtf8("Instead of partition handle connection normally used for APFS driver loading every handle is connected recursively.\n"
"\n"
"This may take more time than usual but can be the only way to access APFS partitions on some firmwares like those found on older HP laptops.\n"
"\n"
"----\n"
"\n"
"\345\234\250 APFS \345\212\240\350\275\275\346\234\237\351\227\264\346\211\247\350\241\214\345\256\214\346\225\264\347\232\204\350\256\276\345\244\207\350\277\236\346\216\245\343\200\202\n"
"\n"
"\344\273\243\346\233\277\351\200\232\345\270\270\346\203\205\345\206\265\344\270\213\347\224\250\344\272\216 APFS \351\251\261\345\212\250\347\250\213\345\272\217\345\212\240\350\275\275\347\232\204\345\210\206\345\214\272\345\217\245\346\237\204\350\277\236\346\216\245\357\274\214\346\257\217\344\270\200\344\270\252\345\217\245\346\237\204\351\203\275\346\230\257\351\200\222\345\275\222\350\277\236\346\216\245\347\232\204\343\200\202\350\277\231\345\217\257\350\203\275\344\274\232\346\257\224\345\271\263\346\227\266\350\212\261\350\264"
                        "\271\346\233\264\345\244\232\347\232\204\346\227\266\351\227\264\357\274\214\344\275\206\346\230\257\346\230\257\346\237\220\344\272\233\345\233\272\344\273\266\350\256\277\351\227\256 APFS \345\210\206\345\214\272\347\232\204\345\224\257\344\270\200\346\226\271\346\263\225\357\274\214\346\257\224\345\246\202\345\234\250\346\227\247\347\232\204\346\203\240\346\231\256\347\254\224\350\256\260\346\234\254\347\224\265\350\204\221\344\270\212\345\217\221\347\216\260\347\232\204\351\202\243\346\240\267\343\200\202"));
#endif // QT_CONFIG(tooltip)
        chkGlobalConnect->setText(QString::fromUtf8("GlobalConnect"));

        verticalLayout_31->addWidget(chkGlobalConnect);

        chkHideVerbose = new QCheckBox(frame_chk_2);
        chkHideVerbose->setObjectName("chkHideVerbose");
#if QT_CONFIG(tooltip)
        chkHideVerbose->setToolTip(QString::fromUtf8("APFS verbose output can be useful for debugging.\n"
"\n"
"----\n"
"\n"
"APFS verbose\350\276\223\345\207\272\345\257\271\350\260\203\350\257\225\345\276\210\346\234\211\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)
        chkHideVerbose->setText(QString::fromUtf8("HideVerbose"));

        verticalLayout_31->addWidget(chkHideVerbose);

        chkJumpstartHotPlug = new QCheckBox(frame_chk_2);
        chkJumpstartHotPlug->setObjectName("chkJumpstartHotPlug");
#if QT_CONFIG(tooltip)
        chkJumpstartHotPlug->setToolTip(QString::fromUtf8("Performs APFS driver loading not only at OpenCore startup but also during boot picker. This permits APFS USB hot plug. Disable if not required.\n"
"\n"
"----\n"
"\n"
"\344\270\215\344\273\205\345\234\250OpenCore\345\220\257\345\212\250\346\227\266\346\211\247\350\241\214APFS\351\251\261\345\212\250\345\212\240\350\275\275\357\274\214\350\200\214\344\270\224\345\234\250boot picker\346\234\237\351\227\264\344\271\237\346\211\247\350\241\214\343\200\202\350\277\231\345\205\201\350\256\270APFS USB\347\203\255\346\217\222\346\213\224\343\200\202\345\246\202\346\236\234\344\270\215\351\234\200\350\246\201\357\274\214\350\257\267\347\246\201\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)
        chkJumpstartHotPlug->setText(QString::fromUtf8("JumpstartHotPlug"));

        verticalLayout_31->addWidget(chkJumpstartHotPlug);


        gridLayout_59->addWidget(frame_chk_2, 0, 0, 1, 1);

        frame_edit_2 = new QFrame(tabUEFI1);
        frame_edit_2->setObjectName("frame_edit_2");
        frame_edit_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_2->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_50 = new QVBoxLayout(frame_edit_2);
        verticalLayout_50->setObjectName("verticalLayout_50");
        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName("horizontalLayout_42");
        label_31 = new QLabel(frame_edit_2);
        label_31->setObjectName("label_31");
#if QT_CONFIG(tooltip)
        label_31->setToolTip(QString::fromUtf8("APFS driver date connects APFS driver with the calendar release date. Older versions of APFS drivers may contain unpatched vulnerabilities, which can be used to inflict harm on your computer. This option permits restricting APFS drivers to only recent releases.\n"
"\n"
"\342\200\242 0 \342\200\224 require the default supported release date of APFS in OpenCore. The default release date will increase with time and thus this setting is recommended. Currently set to 2018/06/21.\n"
"\n"
"\342\200\242 -1 \342\200\224 permit any release date to load (strongly discouraged).\n"
"\n"
"\342\200\242 Other \342\200\224 use custom minimal APFS release date, e.g. 20200401 for 2020/04/01. APFS release dates can be found in OpenCore boot log and OcApfsLib.\n"
"\n"
"----\n"
"\n"
"APFS\351\251\261\345\212\250\346\227\245\346\234\237\345\260\206APFS\351\251\261\345\212\250\344\270\216\345\217\221\345\270\203\346\227\245\346\234\237\350\277\236\346\216\245\350\265\267\346\235\245\343\200\202\346\227\247\347\211\210\346\234\254\347"
                        "\232\204APFS\351\251\261\345\212\250\347\250\213\345\272\217\345\217\257\350\203\275\345\214\205\345\220\253\346\234\252\344\277\256\350\241\245\347\232\204\346\274\217\346\264\236\357\274\214\350\277\231\344\272\233\346\274\217\346\264\236\345\217\257\350\203\275\344\274\232\345\257\271\346\202\250\347\232\204\350\256\241\347\256\227\346\234\272\351\200\240\346\210\220\344\274\244\345\256\263\343\200\202\346\255\244\351\200\211\351\241\271\345\205\201\350\256\270\345\260\206APFS\351\251\261\345\212\250\347\250\213\345\272\217\351\231\220\345\210\266\344\270\272\345\217\252\346\224\257\346\214\201\346\234\200\350\277\221\347\232\204\347\211\210\346\234\254\343\200\202\n"
"\n"
"- 0 - \350\246\201\346\261\202\344\275\277\347\224\250 OpenCore \344\270\255 APFS \347\232\204\351\273\230\350\256\244\346\224\257\346\214\201\345\217\221\345\270\203\346\227\245\346\234\237\343\200\202\351\273\230\350\256\244\347\232\204\345\217\221\345\270\203\346\227\245\346\234\237\344\274\232\351\232\217\347\235\200\346\227\266\351\227"
                        "\264\347\232\204\346\216\250\347\247\273\350\200\214\345\242\236\345\212\240\357\274\214\345\233\240\346\255\244\345\273\272\350\256\256\344\275\277\347\224\250\346\255\244\350\256\276\347\275\256\343\200\202\347\233\256\345\211\215\350\256\276\347\275\256\344\270\2722018/06/21\343\200\202\n"
"\n"
"-1 - \345\205\201\350\256\270\345\212\240\350\275\275\344\273\273\344\275\225\345\217\221\345\270\203\346\227\245\346\234\237\357\274\210\345\274\272\347\203\210\344\270\215\351\274\223\345\212\261\357\274\211\343\200\202\n"
"\n"
"- Other - \344\275\277\347\224\250\350\207\252\345\256\232\344\271\211\347\232\204\346\234\200\345\260\217APFS\345\217\221\345\270\203\346\227\245\346\234\237\357\274\214\344\276\213\345\246\20220200401\344\270\2722020/04/01\343\200\202APFS\345\217\221\345\270\203\346\227\245\346\234\237\345\217\257\344\273\245\345\234\250OpenCore\345\274\225\345\257\274\346\227\245\345\277\227\345\222\214OcApfsLib\344\270\255\346\211\276\345\210\260\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)
        label_31->setText(QString::fromUtf8("MinDate"));

        horizontalLayout_42->addWidget(label_31);

        editIntMinDate = new QLineEdit(frame_edit_2);
        editIntMinDate->setObjectName("editIntMinDate");
        editIntMinDate->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_42->addWidget(editIntMinDate);

        toolButton = new QToolButton(frame_edit_2);
        toolButton->setObjectName("toolButton");

        horizontalLayout_42->addWidget(toolButton);


        verticalLayout_50->addLayout(horizontalLayout_42);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setObjectName("horizontalLayout_43");
        label_30 = new QLabel(frame_edit_2);
        label_30->setObjectName("label_30");
#if QT_CONFIG(tooltip)
        label_30->setToolTip(QString::fromUtf8("APFS driver version connects APFS driver with the macOS release. APFS drivers from older macOS releases will become unsupported and thus may contain unpatched vulnerabilities, which can be used to inflict harm on your computer. This option permits restricting APFS drivers to only modern macOS versions.\n"
"\n"
"\342\200\242 0 \342\200\224 require the default supported version of APFS in OpenCore. The default version will increase with time and thus this setting is recommended. Currently set to the latest point release from High Sierra from App Store (748077008000000).\n"
"\n"
"\342\200\242 -1 \342\200\224 permit any version to load (strongly discouraged).\n"
"\n"
"\342\200\242 Other \342\200\224 use custom minimal APFS version, e.g. 1412101001000000 from macOS Catalina 10.15.4. APFS versions can be found in OpenCore boot log and OcApfsLib.\n"
"\n"
"----\n"
"\n"
"APFS\351\251\261\345\212\250\347\211\210\346\234\254\350\277\236\346\216\245APFS\351\251\261\345\212\250\344\270\216macOS\347\211\210\346\234\254\343\200"
                        "\202\346\227\247\347\211\210macOS\347\232\204APFS\351\251\261\345\212\250\347\250\213\345\272\217\345\260\206\345\217\230\345\276\227\344\270\215\345\217\227\346\224\257\346\214\201\357\274\214\345\233\240\346\255\244\345\217\257\350\203\275\345\214\205\345\220\253\346\234\252\344\277\256\350\241\245\347\232\204\346\274\217\346\264\236\357\274\214\344\273\216\350\200\214\345\257\271\346\202\250\347\232\204\350\256\241\347\256\227\346\234\272\351\200\240\346\210\220\344\274\244\345\256\263\343\200\202\346\255\244\351\200\211\351\241\271\345\205\201\350\256\270\345\260\206 APFS \351\251\261\345\212\250\347\250\213\345\272\217\351\231\220\345\210\266\344\270\272\345\217\252\346\224\257\346\214\201\347\216\260\344\273\243 macOS \347\211\210\346\234\254\343\200\202\n"
"\n"
"- 0 - \350\246\201\346\261\202\344\275\277\347\224\250 OpenCore \344\270\255\351\273\230\350\256\244\346\224\257\346\214\201\347\232\204 APFS \347\211\210\346\234\254\343\200\202\351\273\230\350\256\244\347\211\210\346\234\254\344\274\232\351\232"
                        "\217\347\235\200\346\227\266\351\227\264\347\232\204\346\216\250\347\247\273\350\200\214\345\242\236\345\212\240\357\274\214\345\233\240\346\255\244\345\273\272\350\256\256\344\275\277\347\224\250\346\255\244\350\256\276\347\275\256\343\200\202\347\233\256\345\211\215\350\256\276\347\275\256\344\270\272\346\235\245\350\207\252App Store\347\232\204High Sierra\347\232\204\346\234\200\346\226\260\347\202\271\345\217\221\345\270\203\347\211\210\346\234\254\357\274\210748077008000000\357\274\211\343\200\202\n"
"\n"
"-1 - \345\205\201\350\256\270\345\212\240\350\275\275\344\273\273\344\275\225\347\211\210\346\234\254\357\274\210\345\274\272\347\203\210\344\270\215\351\274\223\345\212\261\357\274\211\343\200\202\n"
"\n"
"- Other - \344\275\277\347\224\250\350\207\252\345\256\232\344\271\211\347\232\204\346\234\200\345\260\217APFS\347\211\210\346\234\254\357\274\214\344\276\213\345\246\202\346\235\245\350\207\252macOS Catalina 10.15.4\347\232\2041412101001000000\343\200\202APFS\347\211\210\346\234\254\345\217\257\344\273"
                        "\245\345\234\250OpenCore\345\274\225\345\257\274\346\227\245\345\277\227\345\222\214OcApfsLib\344\270\255\346\211\276\345\210\260\343\200\202"));
#endif // QT_CONFIG(tooltip)
        label_30->setText(QString::fromUtf8("MinVersion"));

        horizontalLayout_43->addWidget(label_30);

        editIntMinVersion = new QLineEdit(frame_edit_2);
        editIntMinVersion->setObjectName("editIntMinVersion");

        horizontalLayout_43->addWidget(editIntMinVersion);


        verticalLayout_50->addLayout(horizontalLayout_43);


        gridLayout_59->addWidget(frame_edit_2, 0, 1, 1, 1);

        gridLayout_57 = new QGridLayout();
        gridLayout_57->setObjectName("gridLayout_57");
        calendarWidget = new QCalendarWidget(tabUEFI1);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setSelectedDate(QDate(2018, 6, 21));

        gridLayout_57->addWidget(calendarWidget, 0, 0, 1, 1);


        gridLayout_59->addLayout(gridLayout_57, 0, 2, 1, 1);

        tabUEFI->addTab(tabUEFI1, QString());
        tabUEFI2 = new QWidget();
        tabUEFI2->setObjectName("tabUEFI2");
        gridLayout_63 = new QGridLayout(tabUEFI2);
        gridLayout_63->setObjectName("gridLayout_63");
        frame_chk_3 = new QFrame(tabUEFI2);
        frame_chk_3->setObjectName("frame_chk_3");
        frame_chk_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_3->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_33 = new QVBoxLayout(frame_chk_3);
        verticalLayout_33->setObjectName("verticalLayout_33");
        chkGraphicsInputMirroring = new QCheckBox(frame_chk_3);
        chkGraphicsInputMirroring->setObjectName("chkGraphicsInputMirroring");

        verticalLayout_33->addWidget(chkGraphicsInputMirroring);

        chkCustomDelays = new QCheckBox(frame_chk_3);
        chkCustomDelays->setObjectName("chkCustomDelays");
#if QT_CONFIG(tooltip)
        chkCustomDelays->setToolTip(QString::fromUtf8("Type: plist boolean\n"
"\n"
"Description: Enable custom key repeat delays when using the OpenCore implementation of the Apple Event protocol. Has no effect when using the OEM Apple implementation (see AppleEvent setting).\n"
"\n"
"\342\200\242 true \342\200\224 The values of KeyInitialDelay and KeySubsequentDelay are used.\n"
"\342\200\242 false \342\200\224 Apple default values of 500ms (50) and 50ms (5) are used.\n"
"\n"
"----\n"
"\n"
"\347\261\273\345\236\213\357\274\232plist boolean\n"
"\n"
"\350\257\264\346\230\216\357\274\232\345\275\223\344\275\277\347\224\250 Apple Event \345\215\217\350\256\256\347\232\204 OpenCore \345\256\236\347\216\260\346\227\266\357\274\214\345\220\257\347\224\250\350\207\252\345\256\232\344\271\211\351\224\256\351\207\215\345\244\215\345\273\266\350\277\237\343\200\202\344\275\277\347\224\250 OEM Apple \345\256\236\347\216\260\346\227\266\346\262\241\346\234\211\345\275\261\345\223\215\357\274\210\350\257\267\345\217\202\350\247\201 AppleEvent \350\256\276\347\275\256\357\274\211"
                        "\343\200\202\n"
"\n"
"- true - \344\275\277\347\224\250 KeyInitialDelay \345\222\214 KeySubsequentDelay \347\232\204\345\200\274\343\200\202\n"
"- false - \344\275\277\347\224\250 500ms (50) \345\222\214 50ms (5) \347\232\204 Apple \351\273\230\350\256\244\345\200\274\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_33->addWidget(chkCustomDelays);


        gridLayout_63->addWidget(frame_chk_3, 0, 0, 1, 1);

        frame_edit_3 = new QFrame(tabUEFI2);
        frame_edit_3->setObjectName("frame_edit_3");
        frame_edit_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_3->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_51 = new QVBoxLayout(frame_edit_3);
        verticalLayout_51->setObjectName("verticalLayout_51");
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        label_114 = new QLabel(frame_edit_3);
        label_114->setObjectName("label_114");
#if QT_CONFIG(tooltip)
        label_114->setToolTip(QString::fromUtf8("Type: plist string\n"
"\n"
"Description: Determine whether OC builtin or OEM Apple Event protocol is used.\n"
"\n"
"This option determines whether Apple\342\200\231s OEM Apple Event protocol is used (where available), or whether OpenCore\342\200\231s reversed engineered and updated re-implementation is used. In general OpenCore\342\200\231s re-implementation should be preferred, since it contains updates such as noticeably improved fine mouse cursor movement and configurable key repeat delays.\n"
"\n"
"\342\200\242 Auto \342\200\224 Performs automatic choice of implementation. Because of optimisations used to achieve fast boot times, this actually means that the OpenCore re-implementation will be found and used except in the case that OpenCore was been explicitly selected and started (not just auto-booted) from Apple\342\200\231s boot picker (where present).\n"
"\n"
"\342\200\242 Builtin \342\200\224 Use OpenCore\342\200\231s updated re-implementation of the Apple Event protocol. Recommended.\n"
"\n"
"\342\200"
                        "\242 OEM \342\200\224 Assume Apple\342\200\231s protocol will be available at driver connection. This results in Apple\342\200\231s implementation being reliably used on Apple systems. It results in no keyboard or mouse support otherwise.\n"
"\n"
"----\n"
"\n"
"\347\261\273\345\236\213\357\274\232plist\345\255\227\347\254\246\344\270\262\n"
"\n"
"\350\257\264\346\230\216\357\274\232\347\241\256\345\256\232\346\230\257\344\275\277\347\224\250 OC \345\206\205\347\275\256\350\277\230\346\230\257 OEM Apple Event \345\215\217\350\256\256\343\200\202\n"
"\n"
"\346\255\244\351\200\211\351\241\271\345\206\263\345\256\232\346\230\257\344\275\277\347\224\250 Apple \347\232\204 OEM Apple Event \345\215\217\350\256\256\357\274\210\345\246\202\346\236\234\346\234\211\347\232\204\350\257\235\357\274\211\357\274\214\350\277\230\346\230\257\344\275\277\347\224\250 OpenCore \347\232\204\345\217\215\345\220\221\345\267\245\347\250\213\345\222\214\346\233\264\346\226\260\347\232\204\351\207\215\346\226\260\345\256\236\347\216\260"
                        "\343\200\202\344\270\200\350\210\254\346\235\245\350\257\264\357\274\214OpenCore\347\232\204\351\207\215\346\226\260\345\256\236\347\216\260\345\272\224\350\257\245\346\230\257\351\246\226\351\200\211\357\274\214\345\233\240\344\270\272\345\256\203\345\214\205\345\220\253\344\272\206\346\233\264\346\226\260\357\274\214\344\276\213\345\246\202\346\230\216\346\230\276\346\224\271\350\277\233\347\232\204\351\274\240\346\240\207\345\205\211\346\240\207\347\247\273\345\212\250\345\222\214\345\217\257\351\205\215\347\275\256\347\232\204\351\224\256\351\207\215\345\244\215\345\273\266\350\277\237\343\200\202\n"
"\n"
"- Auto - \346\211\247\350\241\214\350\207\252\345\212\250\351\200\211\346\213\251\345\256\236\347\216\260\343\200\202\347\224\261\344\272\216\347\224\250\344\272\216\345\256\236\347\216\260\345\277\253\351\200\237\345\220\257\345\212\250\346\227\266\351\227\264\347\232\204\344\274\230\345\214\226\357\274\214\350\277\231\345\256\236\351\231\205\344\270\212\346\204\217\345\221\263\347\235\200\345\260\206\346"
                        "\211\276\345\210\260\345\271\266\344\275\277\347\224\250 OpenCore \347\232\204\351\207\215\346\226\260\345\256\236\347\216\260\357\274\214\351\231\244\351\235\236\344\273\216 Apple \347\232\204\345\220\257\345\212\250\351\200\211\346\213\251\345\231\250\357\274\210\345\246\202\346\236\234\345\255\230\345\234\250\357\274\211\344\270\255\346\230\216\347\241\256\351\200\211\346\213\251\345\271\266\345\220\257\345\212\250 OpenCore\357\274\210\350\200\214\344\270\215\344\273\205\344\273\205\346\230\257\350\207\252\345\212\250\345\220\257\345\212\250\357\274\211\343\200\202\n"
"\n"
"- Builtin - \344\275\277\347\224\250 OpenCore \346\233\264\346\226\260\347\232\204 Apple Event \345\215\217\350\256\256\347\232\204\351\207\215\346\226\260\345\256\236\347\216\260\343\200\202\346\216\250\350\215\220\344\275\277\347\224\250\343\200\202\n"
"\n"
"- OEM - \345\201\207\350\256\276\350\213\271\346\236\234\347\232\204\345\215\217\350\256\256\345\234\250\351\251\261\345\212\250\347\250\213\345\272\217\350\277\236\346\216\245\346"
                        "\227\266\345\217\257\347\224\250\343\200\202\350\277\231\345\260\206\345\257\274\350\207\264Apple\347\232\204\345\256\236\347\216\260\345\234\250Apple\347\263\273\347\273\237\344\270\212\350\242\253\345\217\257\351\235\240\345\234\260\344\275\277\347\224\250\343\200\202\345\220\246\345\210\231\344\274\232\345\257\274\350\207\264\344\270\215\346\224\257\346\214\201\351\224\256\347\233\230\346\210\226\351\274\240\346\240\207\343\200\202"));
#endif // QT_CONFIG(tooltip)
        label_114->setText(QString::fromUtf8("AppleEvent"));

        horizontalLayout_27->addWidget(label_114);

        cboxAppleEvent = new QComboBox(frame_edit_3);
        cboxAppleEvent->addItem(QString::fromUtf8("Auto"));
        cboxAppleEvent->addItem(QString::fromUtf8("Builtin"));
        cboxAppleEvent->addItem(QString::fromUtf8("OEM"));
        cboxAppleEvent->setObjectName("cboxAppleEvent");
        cboxAppleEvent->setEditable(true);
        cboxAppleEvent->setCurrentText(QString::fromUtf8("Auto"));

        horizontalLayout_27->addWidget(cboxAppleEvent);


        verticalLayout_51->addLayout(horizontalLayout_27);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName("horizontalLayout_41");
        label_116 = new QLabel(frame_edit_3);
        label_116->setObjectName("label_116");
#if QT_CONFIG(tooltip)
        label_116->setToolTip(QString::fromUtf8("Type: plist integer\n"
"\n"
"Description: Configure initial keyboard repeat delay in OpenCore implementation of Apple Event protocol, in units of 10ms.\n"
"\n"
"When not using KeySupport, this option will configure the initial delay before key repeat as expected. The Apple OEM default value is 50 (500ms).\n"
"When using KeySupport, you may find that you get one additional slow key repeat before normal speed key repeat starts. If so, your initial key repeat delay is being driven by your BIOS firmware and cannot be overriden by OC. To avoid this minor undesired effect, set KeyInitialDelay to 0. If doing this, to avoid multiple reponses to single key presses, you should set KeySubsequentDelay to at least the value of your KeyForgetThreshold setting.\n"
"\n"
"----\n"
"\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\n"
"\350\257\264\346\230\216\357\274\232\345\234\250OpenCore\345\256\236\347\216\260Apple Event\345\215\217\350\256\256\344\270\255\351\205\215\347\275\256\345\210\235\345\247"
                        "\213\351\224\256\347\233\230\351\207\215\345\244\215\345\273\266\350\277\237\357\274\214\345\215\225\344\275\215\344\270\27210ms\343\200\202\n"
"\n"
"\345\275\223\344\270\215\344\275\277\347\224\250 KeySupport \346\227\266\357\274\214\350\257\245\351\200\211\351\241\271\345\260\206\346\214\211\351\242\204\346\234\237\351\205\215\347\275\256\346\214\211\351\224\256\351\207\215\345\244\215\345\211\215\347\232\204\345\210\235\345\247\213\345\273\266\350\277\237\343\200\202Apple OEM\351\273\230\350\256\244\345\200\274\344\270\27250\357\274\210500ms\357\274\211\343\200\202\n"
"\344\275\277\347\224\250KeySupport\346\227\266\357\274\214\346\202\250\345\217\257\350\203\275\344\274\232\345\217\221\347\216\260\345\234\250\346\255\243\345\270\270\351\200\237\345\272\246\347\232\204\346\214\211\351\224\256\351\207\215\345\244\215\345\274\200\345\247\213\344\271\213\345\211\215\357\274\214\346\202\250\344\274\232\345\276\227\345\210\260\344\270\200\344\270\252\351\242\235\345\244\226\347\232\204\346\205\242\351\200\237\346"
                        "\214\211\351\224\256\351\207\215\345\244\215\343\200\202\345\246\202\346\236\234\346\230\257\350\277\231\346\240\267\357\274\214\346\202\250\347\232\204\345\210\235\345\247\213\346\214\211\351\224\256\351\207\215\345\244\215\345\273\266\350\277\237\346\230\257\347\224\261BIOS\345\233\272\344\273\266\351\251\261\345\212\250\347\232\204\357\274\214\344\270\215\350\203\275\347\224\261OC\350\246\206\347\233\226\343\200\202\345\246\202\346\236\234\350\277\231\346\240\267\345\201\232\357\274\214\344\270\272\344\272\206\351\201\277\345\205\215\345\215\225\344\270\200\346\214\211\351\224\256\347\232\204\345\244\232\346\254\241\345\223\215\345\272\224\357\274\214\346\202\250\345\272\224\350\257\245\345\260\206KeySubsequentDelay\350\207\263\345\260\221\350\256\276\347\275\256\344\270\272KeyForgetThreshold\350\256\276\347\275\256\347\232\204\345\200\274\343\200\202"));
#endif // QT_CONFIG(tooltip)
        label_116->setText(QString::fromUtf8("KeyInitialDelay"));

        horizontalLayout_41->addWidget(label_116);

        editIntKeyInitialDelay = new QLineEdit(frame_edit_3);
        editIntKeyInitialDelay->setObjectName("editIntKeyInitialDelay");

        horizontalLayout_41->addWidget(editIntKeyInitialDelay);


        verticalLayout_51->addLayout(horizontalLayout_41);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        label_113 = new QLabel(frame_edit_3);
        label_113->setObjectName("label_113");
#if QT_CONFIG(tooltip)
        label_113->setToolTip(QString::fromUtf8("Type: plist integer\n"
"\n"
"Description: Configure subsequent keyboard repeat delay in OpenCore implementation of Apple Event protocol, in units of 10ms.\n"
"\n"
"Configures the gap between key repeats. The Apple OEM default value is 5 (50ms). 0 is an invalid value for this option.\n"
"When using KeySupport, you may find that you get one additional slow key repeat before normal speed key repeat starts. If so, set KeyInitialDelay to 0 and set this option to at least the value of your KeyForgetThreshold setting. (In the unlikely event that you still get frequent, or occasional, double key responses after doing this,proceed to set this value to one or two greater than KeyForgetThreshold - use the lowest value which works.)\n"
"\n"
"----\n"
"\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\n"
"\350\257\264\346\230\216\357\274\232\345\234\250OpenCore\345\256\236\347\216\260Apple Event\345\215\217\350\256\256\344\270\255\351\205\215\347\275\256\345\220\216\347\273\255\351\224\256\347\233\230"
                        "\351\207\215\345\244\215\345\273\266\350\277\237\357\274\214\345\215\225\344\275\215\344\270\27210ms\343\200\202\n"
"\n"
"\351\205\215\347\275\256\346\214\211\351\224\256\351\207\215\345\244\215\344\271\213\351\227\264\347\232\204\351\227\264\351\232\231\343\200\202Apple OEM\347\232\204\351\273\230\350\256\244\345\200\274\346\230\2575\357\274\21050ms\357\274\211\343\200\2020\346\230\257\350\257\245\351\200\211\351\241\271\347\232\204\346\227\240\346\225\210\345\200\274\343\200\202\n"
"\344\275\277\347\224\250KeySupport\346\227\266\357\274\214\346\202\250\345\217\257\350\203\275\344\274\232\345\217\221\347\216\260\345\234\250\346\255\243\345\270\270\351\200\237\345\272\246\347\232\204\346\214\211\351\224\256\351\207\215\345\244\215\345\274\200\345\247\213\344\271\213\345\211\215\357\274\214\346\202\250\344\274\232\345\276\227\345\210\260\344\270\200\344\270\252\351\242\235\345\244\226\347\232\204\346\205\242\351\200\237\346\214\211\351\224\256\351\207\215\345\244\215\343\200\202\345\246\202\346\236\234\346\230\257"
                        "\350\277\231\346\240\267\357\274\214\350\257\267\345\260\206KeyInitialDelay\350\256\276\347\275\256\344\270\2720\357\274\214\345\271\266\345\260\206\346\255\244\351\200\211\351\241\271\350\256\276\347\275\256\344\270\272\350\207\263\345\260\221\344\270\216\346\202\250\347\232\204KeyForgetThreshold\350\256\276\347\275\256\345\200\274\347\233\270\345\220\214\343\200\202(\345\246\202\346\236\234\345\234\250\350\277\231\346\240\267\345\201\232\344\271\213\345\220\216\357\274\214\344\275\240\344\273\215\347\204\266\345\276\227\345\210\260\351\242\221\347\271\201\347\232\204\346\210\226\345\201\266\345\260\224\347\232\204\345\217\214\351\224\256\345\223\215\345\272\224\357\274\214\345\210\231\347\273\247\347\273\255\345\260\206\346\255\244\345\200\274\350\256\276\347\275\256\344\270\272\346\257\224KeyForgetThreshold\345\244\247\344\270\200\345\210\260\344\270\244\344\270\252\347\232\204\345\200\274--\344\275\277\347\224\250\346\234\211\346\225\210\347\232\204\346\234\200\344\275\216\345\200\274\343\200\202)"));
#endif // QT_CONFIG(tooltip)
        label_113->setText(QString::fromUtf8("KeySubsequentDelay"));

        horizontalLayout_28->addWidget(label_113);

        editIntKeySubsequentDelay = new QLineEdit(frame_edit_3);
        editIntKeySubsequentDelay->setObjectName("editIntKeySubsequentDelay");

        horizontalLayout_28->addWidget(editIntKeySubsequentDelay);


        verticalLayout_51->addLayout(horizontalLayout_28);

        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setObjectName("horizontalLayout_49");
        lblPointerPollMask = new QLabel(frame_edit_3);
        lblPointerPollMask->setObjectName("lblPointerPollMask");

        horizontalLayout_49->addWidget(lblPointerPollMask);

        editIntPointerPollMask = new QLineEdit(frame_edit_3);
        editIntPointerPollMask->setObjectName("editIntPointerPollMask");

        horizontalLayout_49->addWidget(editIntPointerPollMask);


        verticalLayout_51->addLayout(horizontalLayout_49);

        horizontalLayout_50 = new QHBoxLayout();
        horizontalLayout_50->setObjectName("horizontalLayout_50");
        lblPointerPollMax = new QLabel(frame_edit_3);
        lblPointerPollMax->setObjectName("lblPointerPollMax");

        horizontalLayout_50->addWidget(lblPointerPollMax);

        editIntPointerPollMax = new QLineEdit(frame_edit_3);
        editIntPointerPollMax->setObjectName("editIntPointerPollMax");

        horizontalLayout_50->addWidget(editIntPointerPollMax);


        verticalLayout_51->addLayout(horizontalLayout_50);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        lblPointerPollMin = new QLabel(frame_edit_3);
        lblPointerPollMin->setObjectName("lblPointerPollMin");

        horizontalLayout_29->addWidget(lblPointerPollMin);

        editIntPointerPollMin = new QLineEdit(frame_edit_3);
        editIntPointerPollMin->setObjectName("editIntPointerPollMin");

        horizontalLayout_29->addWidget(editIntPointerPollMin);


        verticalLayout_51->addLayout(horizontalLayout_29);

        horizontalLayout_51 = new QHBoxLayout();
        horizontalLayout_51->setObjectName("horizontalLayout_51");
        label_112 = new QLabel(frame_edit_3);
        label_112->setObjectName("label_112");
#if QT_CONFIG(tooltip)
        label_112->setToolTip(QString::fromUtf8("Type: plist integer\n"
"\n"
"Description: Configure pointer speed divisor in OpenCore implementation of Apple Event protocol.\n"
"\n"
"Configures the divisor for pointer movements. The Apple OEM default value is 1. 0 is an invalid value for this option.\n"
"\n"
"----\n"
"\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\n"
"\350\257\264\346\230\216\357\274\232\345\234\250OpenCore\345\256\236\347\216\260\347\232\204Apple Event\345\215\217\350\256\256\344\270\255\351\205\215\347\275\256\346\214\207\351\222\210\351\200\237\345\272\246\345\210\206\344\275\215\345\231\250\343\200\202\n"
"\n"
"\351\205\215\347\275\256\346\214\207\351\222\210\347\247\273\345\212\250\347\232\204\345\210\206\345\272\246\343\200\202Apple OEM\347\232\204\351\273\230\350\256\244\345\200\274\346\230\2571\357\274\2140\346\230\257\350\277\231\344\270\252\351\200\211\351\241\271\347\232\204\346\227\240\346\225\210\345\200\274\343\200\202"));
#endif // QT_CONFIG(tooltip)
        label_112->setText(QString::fromUtf8("PointerSpeedDiv"));

        horizontalLayout_51->addWidget(label_112);

        editIntPointerSpeedDiv = new QLineEdit(frame_edit_3);
        editIntPointerSpeedDiv->setObjectName("editIntPointerSpeedDiv");

        horizontalLayout_51->addWidget(editIntPointerSpeedDiv);


        verticalLayout_51->addLayout(horizontalLayout_51);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName("horizontalLayout_30");
        label_117 = new QLabel(frame_edit_3);
        label_117->setObjectName("label_117");
#if QT_CONFIG(tooltip)
        label_117->setToolTip(QString::fromUtf8("Type: plist integer\n"
"\n"
"Description: Configure pointer speed multiplier in OpenCore implementation of Apple Event protocol.\n"
"\n"
"Configures the multiplier for pointer movements. The Apple OEM default value is 1.\n"
"\n"
"----\n"
"\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\n"
"\350\257\264\346\230\216\357\274\232\345\234\250OpenCore\345\256\236\347\216\260\347\232\204Apple Event\345\215\217\350\256\256\344\270\255\351\205\215\347\275\256\346\214\207\351\222\210\351\200\237\345\272\246\344\271\230\346\225\260\343\200\202\n"
"\n"
"\351\205\215\347\275\256\346\214\207\351\222\210\347\247\273\345\212\250\347\232\204\344\271\230\346\225\260\343\200\202Apple OEM\347\232\204\351\273\230\350\256\244\345\200\274\346\230\2571\343\200\202"));
#endif // QT_CONFIG(tooltip)
        label_117->setText(QString::fromUtf8("PointerSpeedMul"));

        horizontalLayout_30->addWidget(label_117);

        editIntPointerSpeedMul = new QLineEdit(frame_edit_3);
        editIntPointerSpeedMul->setObjectName("editIntPointerSpeedMul");

        horizontalLayout_30->addWidget(editIntPointerSpeedMul);


        verticalLayout_51->addLayout(horizontalLayout_30);


        gridLayout_63->addWidget(frame_edit_3, 0, 1, 1, 1);

        tabUEFI->addTab(tabUEFI2, QString());
        tabUEFI3 = new QWidget();
        tabUEFI3->setObjectName("tabUEFI3");
        gridLayout_72 = new QGridLayout(tabUEFI3);
        gridLayout_72->setObjectName("gridLayout_72");
        frame_chk = new QFrame(tabUEFI3);
        frame_chk->setObjectName("frame_chk");
        frame_chk->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_34 = new QVBoxLayout(frame_chk);
        verticalLayout_34->setObjectName("verticalLayout_34");
        chkAudioSupport = new QCheckBox(frame_chk);
        chkAudioSupport->setObjectName("chkAudioSupport");
#if QT_CONFIG(tooltip)
        chkAudioSupport->setToolTip(QString::fromUtf8("Enabling this setting routes audio playback from builtin protocols to a dedicated audio port (AudioOut) of the specified codec (AudioCodec) located on the audio controller (AudioDevice).\n"
"\n"
"----\n"
"\n"
"\345\220\257\347\224\250\346\255\244\350\256\276\347\275\256\345\217\257\345\260\206\345\206\205\347\275\256\345\215\217\350\256\256\347\232\204\351\237\263\351\242\221\346\222\255\346\224\276\350\267\257\347\224\261\345\210\260\344\275\215\344\272\216\351\237\263\351\242\221\346\216\247\345\210\266\345\231\250\357\274\210AudioDevice\357\274\211\344\270\212\347\232\204\346\214\207\345\256\232\347\274\226\350\247\243\347\240\201\345\231\250\357\274\210AudioCodec\357\274\211\347\232\204\344\270\223\347\224\250\351\237\263\351\242\221\347\253\257\345\217\243\357\274\210AudioOut\357\274\211\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_34->addWidget(chkAudioSupport);

        chkDisconnectHda = new QCheckBox(frame_chk);
        chkDisconnectHda->setObjectName("chkDisconnectHda");

        verticalLayout_34->addWidget(chkDisconnectHda);

        chkResetTrafficClass = new QCheckBox(frame_chk);
        chkResetTrafficClass->setObjectName("chkResetTrafficClass");
#if QT_CONFIG(tooltip)
        chkResetTrafficClass->setToolTip(QString::fromUtf8("AppleHDA kext will function correctly only if TCSEL register is configured to use TC0 traffic class. Refer to Intel I/O Controller Hub 9 (ICH9) Family Datasheet (or any other ICH datasheet) for more details about this register.\n"
"\n"
"Note: This option is independent from AudioSupport. If AppleALC is used it is preferred to use AppleALC alctsel property instead.\n"
"\n"
"----\n"
"\n"
"AppleHDA kext\345\217\252\346\234\211\345\234\250TCSEL\345\257\204\345\255\230\345\231\250\350\242\253\351\205\215\347\275\256\344\270\272\344\275\277\347\224\250TC0\346\265\201\347\232\204\346\203\205\345\206\265\344\270\213\346\211\215\350\203\275\346\255\243\345\270\270\345\267\245\344\275\234\343\200\202\350\257\267\345\217\202\351\230\205Intel I/O\346\216\247\345\210\266\345\231\250\351\233\206\347\272\277\345\231\2509\357\274\210ICH9\357\274\211\347\263\273\345\210\227\346\225\260\346\215\256\350\241\250\357\274\210\346\210\226\344\273\273\344\275\225\345\205\266\344\273\226ICH\346\225\260\346\215\256\350\241\250\357\274\211"
                        "\357\274\214\344\272\206\350\247\243\350\257\245\345\257\204\345\255\230\345\231\250\347\232\204\346\233\264\345\244\232\347\273\206\350\212\202\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\257\245\351\200\211\351\241\271\344\270\216AudioSupport\346\227\240\345\205\263\343\200\202\345\246\202\346\236\234\344\275\277\347\224\250AppleALC\357\274\214\346\234\200\345\245\275\344\275\277\347\224\250AppleALC alctsel\345\261\236\346\200\247\344\273\243\346\233\277\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_34->addWidget(chkResetTrafficClass);


        gridLayout_72->addWidget(frame_chk, 0, 0, 1, 1);

        frame_edit = new QFrame(tabUEFI3);
        frame_edit->setObjectName("frame_edit");
        frame_edit->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_37 = new QVBoxLayout(frame_edit);
        verticalLayout_37->setObjectName("verticalLayout_37");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_32 = new QLabel(frame_edit);
        label_32->setObjectName("label_32");
#if QT_CONFIG(tooltip)
        label_32->setToolTip(QString::fromUtf8("Normally this contains first audio codec address on the builtin analog audio controller (HDEF). \n"
"\n"
"Audio codec addresses, e.g. 2, can be found in the debug log (marked in bold-italic):\n"
"\n"
"OCAU: 1/3 PciRoot(0x0)/Pci(0x1,0x0)/Pci(0x0,0x1)/VenMsg(<redacted>,00000000) (4 outputs)\n"
"OCAU: 2/3 PciRoot(0x0)/Pci(0x3,0x0)/VenMsg(<redacted>,00000000) (1 outputs)\n"
"OCAU: 3/3 PciRoot(0x0)/Pci(0x1B,0x0)/VenMsg(<redacted>,02000000) (7 outputs)\n"
"\n"
"As an alternative this value can be obtained from IOHDACodecDevice class in I/O Registry containing it in IOHDACodecAddress field.\n"
"\n"
"----\n"
"\n"
"\351\200\232\345\270\270\350\277\231\345\214\205\345\220\253\345\206\205\347\275\256\346\250\241\346\213\237\351\237\263\351\242\221\346\216\247\345\210\266\345\231\250\357\274\210HDEF\357\274\211\344\270\212\347\232\204\347\254\254\344\270\200\344\270\252\351\237\263\351\242\221\347\274\226\350\247\243\347\240\201\345\231\250\345\234\260\345\235\200\343\200\202\n"
"\n"
"\351\237\263\351\242\221\347\274\226\350"
                        "\247\243\347\240\201\345\231\250\345\234\260\345\235\200\357\274\214\344\276\213\345\246\2022\357\274\214\345\217\257\344\273\245\345\234\250\350\260\203\350\257\225\346\227\245\345\277\227\344\270\255\346\211\276\345\210\260\357\274\210\347\224\250\347\262\227\344\275\223\345\255\227\346\240\207\350\256\260\357\274\211\357\274\232\n"
"\n"
"OCAU\357\274\2321/3 PciRoot(0x0)/Pci(0x1,0x0)/Pci(0x0,0x1)/VenMsg(<redacted>,00000000)(4\344\270\252\350\276\223\345\207\272)\n"
"OCAU\357\274\2322/3 PciRoot(0x0)/Pci(0x3,0x0)/VenMsg(<redacted>,00000000)(1\344\270\252\350\276\223\345\207\272)\n"
"OCAU\357\274\2323/3 PciRoot(0x0)/Pci(0x1B,0x0)/VenMsg(<redacted>,020000)(7\344\270\252\350\276\223\345\207\272)\n"
"\n"
"\344\275\234\344\270\272\344\270\200\344\270\252\346\233\277\344\273\243\346\226\271\346\241\210\357\274\214\350\277\231\344\270\252\345\200\274\345\217\257\344\273\245\344\273\216I/O\346\263\250\345\206\214\350\241\250\344\270\255\347\232\204IOHDACodecDevice\347\261\273\350\216\267\345\276\227\357\274\214\345\234"
                        "\250IOHDACodecAddress\345\255\227\346\256\265\344\270\255\345\214\205\345\220\253\345\256\203\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_10->addWidget(label_32);

        editIntAudioCodec = new QLineEdit(frame_edit);
        editIntAudioCodec->setObjectName("editIntAudioCodec");

        horizontalLayout_10->addWidget(editIntAudioCodec);


        verticalLayout_37->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_33 = new QLabel(frame_edit);
        label_33->setObjectName("label_33");
#if QT_CONFIG(tooltip)
        label_33->setToolTip(QString::fromUtf8("Normally this contains builtin analog audio controller (HDEF) device path, e.g. PciRoot(0x0)/Pci(0x1b,0x0).\n"
"\n"
"The list of recognised audio controllers can be found in the debug log (marked in bold-italic):\n"
"\n"
"OCAU: 1/3 PciRoot(0x0)/Pci(0x1,0x0)/Pci(0x0,0x1)/VenMsg(<redacted>,00000000) (4 outputs)\n"
"OCAU: 2/3 PciRoot(0x0)/Pci(0x3,0x0)/VenMsg(<redacted>,00000000) (1 outputs)\n"
"OCAU: 3/3 PciRoot(0x0)/Pci(0x1B,0x0)/VenMsg(<redacted>,02000000) (7 outputs)\n"
"\n"
"As an alternative gfxutil -f HDEF command can be used in macOS. Specifying empty device path will result in the first available audio controller to be used.\n"
"\n"
"----\n"
"\n"
"\351\200\232\345\270\270\350\277\231\345\214\205\345\220\253\345\206\205\347\275\256\346\250\241\346\213\237\351\237\263\351\242\221\346\216\247\345\210\266\345\231\250(HDEF)\350\256\276\345\244\207\350\267\257\345\276\204\357\274\214\344\276\213\345\246\202PciRoot(0x0)/Pci(0x1b,0x0)\343\200\202\n"
"\n"
"\350\257\206\345\210\253\347\232\204\351\237\263\351\242\221"
                        "\346\216\247\345\210\266\345\231\250\345\210\227\350\241\250\345\217\257\344\273\245\345\234\250\350\260\203\350\257\225\346\227\245\345\277\227\344\270\255\346\211\276\345\210\260\357\274\210\347\224\250\347\262\227\344\275\223\345\255\227\346\240\207\347\244\272\357\274\211\357\274\232\n"
"\n"
"OCAU: 1/3 PciRoot(0x0)/Pci(0x1,0x0)/Pci(0x0,0x1)/VenMsg(<redacted>,00000000)(4\344\270\252\350\276\223\345\207\272)\n"
"OCAU\357\274\2322/3 PciRoot(0x0)/Pci(0x3,0x0)/VenMsg(<redacted>,00000000)(1\344\270\252\350\276\223\345\207\272)\n"
"OCAU\357\274\2323/3 PciRoot(0x0)/Pci(0x1B,0x0)/VenMsg(<redacted>,020000)(7\344\270\252\350\276\223\345\207\272)\n"
"\n"
"\345\234\250macOS\344\270\255\345\217\257\344\273\245\344\275\277\347\224\250gfxutil -f HDEF\345\221\275\344\273\244\344\275\234\344\270\272\346\233\277\344\273\243\343\200\202\346\214\207\345\256\232\347\251\272\347\232\204\350\256\276\345\244\207\350\267\257\345\276\204\345\260\206\345\257\274\350\207\264\347\254\254\344\270\200\344\270\252\345\217\257\347\224\250\347"
                        "\232\204\351\237\263\351\242\221\346\216\247\345\210\266\345\231\250\350\242\253\344\275\277\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_11->addWidget(label_33);

        editAudioDevice = new QLineEdit(frame_edit);
        editAudioDevice->setObjectName("editAudioDevice");

        horizontalLayout_11->addWidget(editAudioDevice);


        verticalLayout_37->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        lblAudioOutMask = new QLabel(frame_edit);
        lblAudioOutMask->setObjectName("lblAudioOutMask");

        horizontalLayout_13->addWidget(lblAudioOutMask);

        editIntAudioOutMask = new QLineEdit(frame_edit);
        editIntAudioOutMask->setObjectName("editIntAudioOutMask");

        horizontalLayout_13->addWidget(editIntAudioOutMask);


        verticalLayout_37->addLayout(horizontalLayout_13);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_35 = new QLabel(frame_edit);
        label_35->setObjectName("label_35");
#if QT_CONFIG(tooltip)
        label_35->setToolTip(QString::fromUtf8("Description: Minimal heard volume level from 0 to 100.\n"
"\n"
"The screen reader will use this volume level when the calculated volume level is lower than MinimumVolume and the boot chime will not play if the calculated volume level is lower than MinimumVolume.\n"
"\n"
"----\n"
"\n"
"\350\257\264\346\230\216\357\274\232 \346\234\200\345\260\217\345\220\254\345\210\260\347\232\204\351\237\263\351\207\217\345\200\274\357\274\214\344\273\2160\345\210\260100\343\200\202\n"
"\n"
"\345\275\223\350\256\241\347\256\227\345\207\272\347\232\204\351\237\263\351\207\217\344\275\216\344\272\216MinimumVolume\346\227\266\357\274\214\345\261\217\345\271\225\351\230\205\350\257\273\345\231\250\345\260\206\344\275\277\347\224\250\350\277\231\344\270\252\351\237\263\351\207\217\357\274\214\345\246\202\346\236\234\350\256\241\347\256\227\345\207\272\347\232\204\351\237\263\351\207\217\344\275\216\344\272\216MinimumVolume\357\274\214\345\210\231\344\270\215\344\274\232\346\222\255\346\224\276\345\274\200\346\234\272\345\243\260\343"
                        "\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_6->addWidget(label_35);

        editIntMaximumGain = new QLineEdit(frame_edit);
        editIntMaximumGain->setObjectName("editIntMaximumGain");

        horizontalLayout_6->addWidget(editIntMaximumGain);

        lblSystemAudioVolume = new QLabel(frame_edit);
        lblSystemAudioVolume->setObjectName("lblSystemAudioVolume");
        lblSystemAudioVolume->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_6->addWidget(lblSystemAudioVolume);


        verticalLayout_37->addLayout(horizontalLayout_6);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_36 = new QLabel(frame_edit);
        label_36->setObjectName("label_36");
#if QT_CONFIG(tooltip)
        label_36->setToolTip(QString::fromUtf8("Volume level range read from SystemAudioVolume varies depending on the codec. To transform read value in [0, 127] range into raw volume range [0, 100] the read value is scaled to VolumeAmplifier percents:\n"
"\n"
"RawV olume = MIN(SystemAudioV olume \342\210\227 V olumeAmplifier 100 , 100)\n"
"\n"
"Note: the transformation used in macOS is not linear, but it is very close and this nuance is thus ignored.\n"
"\n"
"----\n"
"\n"
"\344\273\216SystemAudioVolume\350\257\273\345\217\226\347\232\204\351\237\263\351\207\217\350\214\203\345\233\264\346\240\271\346\215\256\347\274\226\350\247\243\347\240\201\345\231\250\347\232\204\344\270\215\345\220\214\350\200\214\344\270\215\345\220\214\343\200\202\344\270\272\344\272\206\345\260\206[0\357\274\214127]\350\214\203\345\233\264\345\206\205\347\232\204\350\257\273\345\217\226\345\200\274\350\275\254\346\215\242\344\270\272\345\216\237\345\247\213\351\237\263\351\207\217\350\214\203\345\233\264[0\357\274\214100]\357\274\214\350\257\273\345\217\226\345\200\274\345\260\206\350"
                        "\242\253\347\274\251\346\224\276\344\270\272\351\237\263\351\207\217\346\224\276\345\244\247\345\231\250\347\232\204\347\231\276\345\210\206\346\225\260\343\200\202\n"
"\n"
"RawV olume = MIN(SystemAudioV olume \342\210\227 V olumeAmplifier 100 , 100)\n"
"\n"
"\346\263\250\346\204\217\357\274\232macOS\344\270\255\344\275\277\347\224\250\347\232\204\345\217\230\346\215\242\344\270\215\346\230\257\347\272\277\346\200\247\347\232\204\357\274\214\344\275\206\351\235\236\345\270\270\346\216\245\350\277\221\357\274\214\345\233\240\346\255\244\345\277\275\347\225\245\344\272\206\350\277\231\347\247\215\347\273\206\345\276\256\345\267\256\345\210\253\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_14->addWidget(label_36);

        editIntMinimumAssistGain = new QLineEdit(frame_edit);
        editIntMinimumAssistGain->setObjectName("editIntMinimumAssistGain");

        horizontalLayout_14->addWidget(editIntMinimumAssistGain);


        verticalLayout_37->addLayout(horizontalLayout_14);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        label_34 = new QLabel(frame_edit);
        label_34->setObjectName("label_34");

        horizontalLayout_23->addWidget(label_34);

        editIntMinimumAudibleGain = new QLineEdit(frame_edit);
        editIntMinimumAudibleGain->setObjectName("editIntMinimumAudibleGain");

        horizontalLayout_23->addWidget(editIntMinimumAudibleGain);


        verticalLayout_37->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        label_70 = new QLabel(frame_edit);
        label_70->setObjectName("label_70");
#if QT_CONFIG(tooltip)
        label_70->setToolTip(QString::fromUtf8("Enabling this setting plays boot chime through builtin audio support. Volume level is determined by MinimumVolume and VolumeAmplifier settings and SystemAudioVolume NVRAM variable. Possible values include:\n"
"\n"
"\342\200\242 Auto \342\200\224 Enables chime when StartupMute NVRAM variable is not present or set to 00. \n"
"\342\200\242 Enabled \342\200\224 Enables chime unconditionally.\n"
"\342\200\242 Disabled \342\200\224 Disables chime unconditionally.\n"
"\n"
"Note: Enabled can be used in separate from StartupMute NVRAM variable to avoid conflicts when the firmware is able to play boot chime.\n"
"\n"
"----\n"
"\n"
"\345\220\257\347\224\250\346\255\244\350\256\276\347\275\256\345\217\257\351\200\232\350\277\207\345\206\205\347\275\256\347\232\204\351\237\263\351\242\221\346\224\257\346\214\201\346\222\255\346\224\276\345\274\200\346\234\272\345\243\260\343\200\202\351\237\263\351\207\217\345\244\247\345\260\217\347\224\261MinimumVolume\345\222\214VolumeAmplifier\350\256\276\347\275\256\344\273\245\345\217"
                        "\212SystemAudioVolume NVRAM\345\217\230\351\207\217\345\206\263\345\256\232\343\200\202\345\217\257\350\203\275\347\232\204\345\200\274\345\214\205\346\213\254\357\274\232\n"
"\n"
"- Auto - \345\275\223\345\220\257\345\212\250\351\235\231\351\237\263 NVRAM \345\217\230\351\207\217\344\270\215\345\255\230\345\234\250\346\210\226\350\256\276\347\275\256\344\270\272 00 \346\227\266\345\220\257\347\224\250\346\212\245\346\227\266\343\200\202\n"
"- Enabled - \346\227\240\346\235\241\344\273\266\345\234\260\345\220\257\347\224\250\346\212\245\346\227\266\343\200\202\n"
"- Disabled - \346\227\240\346\235\241\344\273\266\345\234\260\347\246\201\347\224\250\346\212\245\346\227\266\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232Enabled\345\217\257\344\273\245\344\270\216StartupMute NVRAM\345\217\230\351\207\217\345\210\206\345\274\200\344\275\277\347\224\250\357\274\214\344\273\245\351\201\277\345\205\215\345\233\272\344\273\266\350\203\275\345\244\237\346\222\255\346\224\276\345\274\200\346\234\272\345\243\260"
                        "\346\227\266\347\232\204\345\206\262\347\252\201\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_24->addWidget(label_70);

        cboxPlayChime = new QComboBox(frame_edit);
        cboxPlayChime->setObjectName("cboxPlayChime");
        cboxPlayChime->setEditable(true);

        horizontalLayout_24->addWidget(cboxPlayChime);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_11);


        verticalLayout_37->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        label_107 = new QLabel(frame_edit);
        label_107->setObjectName("label_107");
#if QT_CONFIG(tooltip)
        label_107->setToolTip(QString::fromUtf8("Some codecs require a vendor-specific delay after the reconfiguration (e.g. volume setting). This option makes it  configurable. In general the necessary delay may be as long as 0.5 seconds.\n"
"\n"
"----\n"
"\n"
"\346\237\220\344\272\233\347\274\226\350\247\243\347\240\201\345\231\250\345\234\250\351\207\215\346\226\260\351\205\215\347\275\256\345\220\216\351\234\200\350\246\201\347\211\271\345\256\232\344\272\216\344\276\233\345\272\224\345\225\206\347\232\204\345\273\266\350\277\237\357\274\210\344\276\213\345\246\202\351\237\263\351\207\217\350\256\276\347\275\256\357\274\211\343\200\202\346\255\244\351\200\211\351\241\271\345\217\257\345\257\271\345\205\266\350\277\233\350\241\214\351\205\215\347\275\256\343\200\202\344\270\200\350\210\254\346\235\245\350\257\264\357\274\214\345\277\205\350\246\201\347\232\204\345\273\266\350\277\237\346\227\266\351\227\264\345\217\257\350\203\275\351\225\277\350\276\276 0.5 \347\247\222\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_25->addWidget(label_107);

        editIntSetupDelay = new QLineEdit(frame_edit);
        editIntSetupDelay->setObjectName("editIntSetupDelay");

        horizontalLayout_25->addWidget(editIntSetupDelay);


        verticalLayout_37->addLayout(horizontalLayout_25);


        gridLayout_72->addWidget(frame_edit, 0, 1, 1, 1);

        tabUEFI->addTab(tabUEFI3, QString());
        tabUEFI4 = new QWidget();
        tabUEFI4->setObjectName("tabUEFI4");
        gridLayout_29 = new QGridLayout(tabUEFI4);
        gridLayout_29->setObjectName("gridLayout_29");
        table_uefi_drivers = new QTableWidget(tabUEFI4);
        if (table_uefi_drivers->columnCount() < 2)
            table_uefi_drivers->setColumnCount(2);
        table_uefi_drivers->setObjectName("table_uefi_drivers");
        table_uefi_drivers->setColumnCount(2);

        gridLayout_29->addWidget(table_uefi_drivers, 0, 0, 1, 1);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName("verticalLayout_18");
        btnUEFIDrivers_Add = new QToolButton(tabUEFI4);
        btnUEFIDrivers_Add->setObjectName("btnUEFIDrivers_Add");
        btnUEFIDrivers_Add->setMaximumSize(QSize(20, 16777215));
        btnUEFIDrivers_Add->setIconSize(QSize(20, 20));

        verticalLayout_18->addWidget(btnUEFIDrivers_Add);

        btnUEFIDrivers_Del = new QToolButton(tabUEFI4);
        btnUEFIDrivers_Del->setObjectName("btnUEFIDrivers_Del");
        btnUEFIDrivers_Del->setMaximumSize(QSize(20, 16777215));
        btnUEFIDrivers_Del->setIconSize(QSize(20, 20));

        verticalLayout_18->addWidget(btnUEFIDrivers_Del);

        btnUp_UEFI_Drivers = new QToolButton(tabUEFI4);
        btnUp_UEFI_Drivers->setObjectName("btnUp_UEFI_Drivers");
        btnUp_UEFI_Drivers->setMaximumSize(QSize(20, 16777215));
        btnUp_UEFI_Drivers->setIconSize(QSize(20, 20));

        verticalLayout_18->addWidget(btnUp_UEFI_Drivers);

        btnDown_UEFI_Drivers = new QToolButton(tabUEFI4);
        btnDown_UEFI_Drivers->setObjectName("btnDown_UEFI_Drivers");
        btnDown_UEFI_Drivers->setMaximumSize(QSize(20, 16777215));
        btnDown_UEFI_Drivers->setIconSize(QSize(20, 20));

        verticalLayout_18->addWidget(btnDown_UEFI_Drivers);

        btnOpenDriversDir = new QToolButton(tabUEFI4);
        btnOpenDriversDir->setObjectName("btnOpenDriversDir");
        btnOpenDriversDir->setMaximumSize(QSize(20, 16777215));
        btnOpenDriversDir->setIconSize(QSize(20, 20));

        verticalLayout_18->addWidget(btnOpenDriversDir);


        gridLayout_29->addLayout(verticalLayout_18, 0, 1, 1, 1);

        tabUEFI->addTab(tabUEFI4, QString());
        tabUEFI5 = new QWidget();
        tabUEFI5->setObjectName("tabUEFI5");
        gridLayout_33 = new QGridLayout(tabUEFI5);
        gridLayout_33->setObjectName("gridLayout_33");
        frame_chk_4 = new QFrame(tabUEFI5);
        frame_chk_4->setObjectName("frame_chk_4");
        frame_chk_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_4->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_32 = new QVBoxLayout(frame_chk_4);
        verticalLayout_32->setObjectName("verticalLayout_32");
        chkKeySupport = new QCheckBox(frame_chk_4);
        chkKeySupport->setObjectName("chkKeySupport");
#if QT_CONFIG(tooltip)
        chkKeySupport->setToolTip(QString::fromUtf8("This option activates the internal keyboard interceptor driver, based on AppleGenericInput aka (AptioInputFix),to fill AppleKeyMapAggregator database for input functioning. In case a separate driver is used, such as OpenUsbKbDxe, this option should never be enabled.\n"
"\n"
"----\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\345\217\257\344\273\245\346\277\200\346\264\273\345\237\272\344\272\216AppleGenericInput\345\217\210\345\220\215(AptioInputFix)\347\232\204\345\206\205\351\203\250\351\224\256\347\233\230\346\213\246\346\210\252\345\231\250\351\251\261\345\212\250\357\274\214\344\273\245\345\241\253\345\205\205AppleKeyMapAggregator\346\225\260\346\215\256\345\272\223\347\232\204\350\276\223\345\205\245\345\212\237\350\203\275\343\200\202\345\246\202\346\236\234\344\275\277\347\224\250\344\272\206\345\215\225\347\213\254\347\232\204\351\251\261\345\212\250\347\250\213\345\272\217\357\274\214\346\257\224\345\246\202OpenUsbKbDxe\357\274\214\350\277\231\344\270\252\351\200\211\351\241\271\347\273\235"
                        "\345\257\271\344\270\215\350\203\275\345\220\257\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_32->addWidget(chkKeySupport);

        chkKeySwap = new QCheckBox(frame_chk_4);
        chkKeySwap->setObjectName("chkKeySwap");
#if QT_CONFIG(tooltip)
        chkKeySwap->setToolTip(QString::fromUtf8("This option may be useful for keyboard layouts with Option key situated to the right of Command key.\n"
"\n"
"----\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\345\217\257\350\203\275\345\257\271\345\221\275\344\273\244\351\224\256\345\217\263\350\276\271\347\232\204\351\200\211\351\241\271\351\224\256\347\232\204\351\224\256\347\233\230\345\270\203\345\261\200\346\234\211\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_32->addWidget(chkKeySwap);

        chkKeyFiltering = new QCheckBox(frame_chk_4);
        chkKeyFiltering->setObjectName("chkKeyFiltering");
#if QT_CONFIG(tooltip)
        chkKeyFiltering->setToolTip(QString::fromUtf8("Apparently some boards like GA Z77P-D3 may return uninitialised data in EFI_INPUT_KEY with all input protocols.\n"
"\n"
"This option discards keys that are neither ASCII, nor are defined in the UEFI specification (see tables 107 and 108 in version 2.8).\n"
"\n"
"----\n"
"\n"
"\346\230\276\347\204\266\357\274\214\346\234\211\344\272\233\346\235\277\345\255\220\357\274\214\345\246\202GA Z77P-D3\357\274\214\345\217\257\350\203\275\344\274\232\345\234\250EFI_INPUT_KEY\344\270\255\350\277\224\345\233\236\346\211\200\346\234\211\350\276\223\345\205\245\345\215\217\350\256\256\347\232\204\346\234\252\345\210\235\345\247\213\345\214\226\346\225\260\346\215\256\343\200\202\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\344\274\232\344\270\242\345\274\203\351\202\243\344\272\233\346\227\242\344\270\215\346\230\257ASCII\347\240\201\357\274\214\344\271\237\344\270\215\346\230\257\345\234\250UEFI\350\247\204\350\214\203\344\270\255\345\256\232\344\271\211\347\232\204\351\224\256(\350\247\2012.8\347\211\210\346\234"
                        "\254\347\232\204\350\241\250107\345\222\214108)\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_32->addWidget(chkKeyFiltering);

        chkPointerSupport = new QCheckBox(frame_chk_4);
        chkPointerSupport->setObjectName("chkPointerSupport");
#if QT_CONFIG(tooltip)
        chkPointerSupport->setToolTip(QString::fromUtf8("This option implements standard UEFI pointer protocol (EFI_SIMPLE_POINTER_PROTOCOL) through select OEM protocols. The option may be useful on Z87 ASUS boards, where EFI_SIMPLE_POINTER_PROTOCOL is broken.\n"
"\n"
"----\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\351\200\232\350\277\207\351\200\211\345\256\232\347\232\204OEM\345\215\217\350\256\256\345\256\236\347\216\260\344\272\206\346\240\207\345\207\206\347\232\204UEFI\346\214\207\351\222\210\345\215\217\350\256\256(EFI_SIMPLE_POINTER_PROTOCOL)\343\200\202\350\257\245\351\200\211\351\241\271\345\217\257\350\203\275\345\257\271Z87\345\215\216\347\241\225\346\235\277\345\215\241\346\234\211\347\224\250\357\274\214\345\233\240\344\270\272\345\234\250\350\277\231\344\272\233\346\235\277\345\215\241\344\270\212EFI_SIMPLE_POINTER_PROTOCOL\350\242\253\347\240\264\345\235\217\344\272\206\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_32->addWidget(chkPointerSupport);


        gridLayout_33->addWidget(frame_chk_4, 0, 0, 1, 1);

        frame_edit_4 = new QFrame(tabUEFI5);
        frame_edit_4->setObjectName("frame_edit_4");
        frame_edit_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_4->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_49 = new QVBoxLayout(frame_edit_4);
        verticalLayout_49->setObjectName("verticalLayout_49");
        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName("horizontalLayout_32");
        label_23 = new QLabel(frame_edit_4);
        label_23->setObjectName("label_23");
#if QT_CONFIG(tooltip)
        label_23->setToolTip(QString::fromUtf8("\342\200\242 Auto \342\200\224 Performs automatic choice as available with the following preference: AMI, V2, V1. \n"
"\n"
"\342\200\242 V1 \342\200\224 Uses UEFI standard legacy input protocol EFI_SIMPLE_TEXT_INPUT_PROTOCOL. \n"
"\n"
"\342\200\242 V2 \342\200\224 Uses UEFI standard modern input protocol EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL. \342\200\242 AMI \342\200\224 Uses APTIO input protocol AMI_EFIKEYCODE_PROTOCOL.\n"
"\n"
"Note: Currently V1, V2, and AMI unlike Auto only do filtering of the particular specified protocol. This may change in the future versions.\n"
"\n"
"----\n"
"\n"
"- Auto - \346\240\271\346\215\256\344\273\245\344\270\213\345\201\217\345\245\275\346\211\247\350\241\214\350\207\252\345\212\250\351\200\211\346\213\251\343\200\202AMI, V2, V1. \n"
"\n"
"- V1 - \344\275\277\347\224\250 UEFI \346\240\207\345\207\206\347\232\204\344\274\240\347\273\237\350\276\223\345\205\245\345\215\217\350\256\256 EFI_SIMPLE_TEXT_INPUT_PROTOCOL\343\200\202\n"
"\n"
"- V2 - \344\275\277\347\224\250 UEFI \346\240"
                        "\207\345\207\206\347\232\204\347\216\260\344\273\243\350\276\223\345\205\245\345\215\217\350\256\256 EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL\343\200\202- AMI - \344\275\277\347\224\250 APTIO \350\276\223\345\205\245\345\215\217\350\256\256 AMI_EFIKEYCODE_PROTOCOL\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\347\233\256\345\211\215 V1\343\200\201V2 \345\222\214 AMI \344\270\216 Auto \344\270\215\345\220\214\357\274\214\345\217\252\345\257\271\347\211\271\345\256\232\347\232\204\345\215\217\350\256\256\350\277\233\350\241\214\350\277\207\346\273\244\343\200\202\350\277\231\345\234\250\346\234\252\346\235\245\347\232\204\347\211\210\346\234\254\344\270\255\345\217\257\350\203\275\344\274\232\346\224\271\345\217\230\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_32->addWidget(label_23);

        cboxKeySupportMode = new QComboBox(frame_edit_4);
        cboxKeySupportMode->setObjectName("cboxKeySupportMode");
        cboxKeySupportMode->setEditable(true);

        horizontalLayout_32->addWidget(cboxKeySupportMode);


        verticalLayout_49->addLayout(horizontalLayout_32);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setObjectName("horizontalLayout_48");
        label_37 = new QLabel(frame_edit_4);
        label_37->setObjectName("label_37");
#if QT_CONFIG(tooltip)
        label_37->setToolTip(QString::fromUtf8("AppleKeyMapAggregator protocol is supposed to contain a fixed length buffer of currently pressed keys. \n"
"\n"
"However,the majority of the drivers only report key presses as interrupts and pressing and holding the key on the keyboard results in subsequent submissions of this key with some defined time interval. As a result we use a timeout to remove once pressed keys from the buffer once the timeout expires and no new submission of this key happened.\n"
"\n"
"This option allows to set this timeout based on your platform. The recommended value that works on the majority of the platforms is 5 milliseconds. For reference, holding one key on VMware will repeat it roughly every 2 milliseconds and the same value for APTIO V is 3-4 milliseconds. Thus it is possible to set a slightly lower value on faster platforms and slightly higher value on slower platforms for more responsive input.\n"
"\n"
"Note: Some platforms may require different values, higher or lower. For example, when detecting key misses in OpenCanopy t"
                        "ry increasing this value (e.g. to 10), and when detecting key stall, try decreasing this value. Since every platform is different it may be reasonable to check every value from 1 to 25.\n"
"\n"
"----\n"
"\n"
"AppleKeyMapAggregator\345\215\217\350\256\256\345\272\224\350\257\245\345\214\205\345\220\253\344\270\200\344\270\252\345\233\272\345\256\232\351\225\277\345\272\246\347\232\204\345\275\223\345\211\215\346\214\211\351\224\256\347\274\223\345\206\262\345\214\272\343\200\202\n"
"\n"
"\347\204\266\350\200\214\357\274\214\345\244\247\345\244\232\346\225\260\347\232\204\351\251\261\345\212\250\347\250\213\345\272\217\345\217\252\345\260\206\346\214\211\351\224\256\347\232\204\346\214\211\345\216\213\346\212\245\345\221\212\344\270\272\344\270\255\346\226\255\357\274\214\345\271\266\344\270\224\345\234\250\351\224\256\347\233\230\344\270\212\346\214\211\344\275\217\350\257\245\351\224\256\344\274\232\345\257\274\350\207\264\350\257\245\351\224\256\345\234\250\346\237\220\344\272\233\345\256\232\344\271\211\347\232"
                        "\204\346\227\266\351\227\264\351\227\264\351\232\224\345\206\205\347\232\204\345\220\216\347\273\255\346\217\220\344\272\244\343\200\202\345\233\240\346\255\244\357\274\214\346\210\221\344\273\254\344\275\277\347\224\250\350\266\205\346\227\266\346\235\245\344\273\216\347\274\223\345\206\262\345\214\272\344\270\255\345\210\240\351\231\244\346\233\276\347\273\217\346\214\211\344\270\213\347\232\204\351\224\256\357\274\214\344\270\200\346\227\246\350\266\205\346\227\266\347\273\223\346\235\237\357\274\214\346\262\241\346\234\211\346\226\260\347\232\204\351\224\256\346\217\220\344\272\244\345\217\221\347\224\237\343\200\202\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\345\205\201\350\256\270\346\240\271\346\215\256\344\275\240\347\232\204\345\271\263\345\217\260\346\235\245\350\256\276\347\275\256\350\277\231\344\270\252\350\266\205\346\227\266\343\200\202\345\234\250\345\244\247\345\244\232\346\225\260\345\271\263\345\217\260\344\270\212\345\267\245\344\275\234\347\232\204\346\216\250\350\215\220\345"
                        "\200\274\346\230\2575\346\257\253\347\247\222\343\200\202\344\275\234\344\270\272\345\217\202\350\200\203\357\274\214\345\234\250VMware\344\270\212\346\214\211\344\275\217\344\270\200\344\270\252\351\224\256\357\274\214\345\244\247\346\246\202\346\257\2172\346\257\253\347\247\222\345\260\261\344\274\232\351\207\215\345\244\215\344\270\200\346\254\241\357\274\214APTIO V\347\232\204\347\233\270\345\220\214\345\200\274\346\230\2573-4\346\257\253\347\247\222\343\200\202\345\233\240\346\255\244\345\217\257\344\273\245\345\234\250\351\200\237\345\272\246\350\276\203\345\277\253\347\232\204\345\271\263\345\217\260\344\270\212\350\256\276\347\275\256\347\250\215\344\275\216\347\232\204\345\200\274\357\274\214\345\234\250\351\200\237\345\272\246\350\276\203\346\205\242\347\232\204\345\271\263\345\217\260\344\270\212\350\256\276\347\275\256\347\250\215\351\253\230\347\232\204\345\200\274\357\274\214\344\273\245\346\217\220\351\253\230\350\276\223\345\205\245\347\232\204\345\223\215\345\272\224\351\200\237\345\272\246\343"
                        "\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\346\234\211\344\272\233\345\271\263\345\217\260\345\217\257\350\203\275\351\234\200\350\246\201\344\270\215\345\220\214\347\232\204\345\200\274\357\274\214\351\253\230\344\270\200\347\202\271\346\210\226\344\275\216\344\270\200\347\202\271\343\200\202\344\276\213\345\246\202\357\274\214\345\275\223\346\243\200\346\265\213OpenCanopy\344\270\255\347\232\204\351\224\256\345\244\261\350\257\257\346\227\266\357\274\214\345\260\235\350\257\225\345\242\236\345\212\240\350\277\231\344\270\252\345\200\274(\345\246\20210)\357\274\214\350\200\214\345\275\223\346\243\200\346\265\213\351\224\256\345\201\234\351\241\277\346\227\266\357\274\214\345\260\235\350\257\225\345\207\217\345\260\221\350\277\231\344\270\252\345\200\274\343\200\202\347\224\261\344\272\216\346\257\217\344\270\252\345\271\263\345\217\260\351\203\275\346\230\257\344\270\215\345\220\214\347\232\204\357\274\214\346\211\200\344\273\245\346\243\200\346\237\2451\345\210\26025\347\232\204\346\257\217\344\270"
                        "\252\345\200\274\345\217\257\350\203\275\346\230\257\345\220\210\347\220\206\347\232\204\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_48->addWidget(label_37);

        editIntKeyForgetThreshold = new QLineEdit(frame_edit_4);
        editIntKeyForgetThreshold->setObjectName("editIntKeyForgetThreshold");

        horizontalLayout_48->addWidget(editIntKeyForgetThreshold);


        verticalLayout_49->addLayout(horizontalLayout_48);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName("horizontalLayout_31");
        label_40 = new QLabel(frame_edit_4);
        label_40->setObjectName("label_40");
#if QT_CONFIG(tooltip)
        label_40->setToolTip(QString::fromUtf8("This option allows to update firmware architecture timer period with the specified value in 100 nanosecond units.\n"
"\n"
"Setting a lower value generally improves performance and responsiveness of the interface and input handling.\n"
"\n"
"The recommended value is 50000 (5 milliseconds) or slightly higher. Select ASUS Z87 boards use 60000 for the interface. Apple boards use 100000. You may leave it as 0 in case there are issues.\n"
"\n"
"----\n"
"\n"
"\350\257\245\351\200\211\351\241\271\345\205\201\350\256\270\344\273\245100\347\272\263\347\247\222\344\270\272\345\215\225\344\275\215\357\274\214\347\224\250\346\214\207\345\256\232\347\232\204\345\200\274\346\233\264\346\226\260\345\233\272\344\273\266\346\236\266\346\236\204\347\232\204\345\256\232\346\227\266\345\231\250\345\221\250\346\234\237\343\200\202\n"
"\n"
"\350\256\276\347\275\256\344\270\200\344\270\252\350\276\203\344\275\216\347\232\204\345\200\274\351\200\232\345\270\270\345\217\257\344\273\245\346\217\220\351\253\230\346\216\245\345\217\243\345"
                        "\222\214\350\276\223\345\205\245\345\244\204\347\220\206\347\232\204\346\200\247\350\203\275\345\222\214\345\223\215\345\272\224\351\200\237\345\272\246\343\200\202\n"
"\n"
"\346\216\250\350\215\220\345\200\274\344\270\27250000\357\274\2105\346\257\253\347\247\222\357\274\211\346\210\226\347\250\215\351\253\230\343\200\202\351\200\211\346\213\251\345\215\216\347\241\225Z87\346\235\277\344\275\277\347\224\25060000\344\275\234\344\270\272\346\216\245\345\217\243\343\200\202\350\213\271\346\236\234\346\235\277\344\275\277\347\224\250100000\343\200\202\346\202\250\345\217\257\344\273\245\345\260\206\345\205\266\350\256\276\344\270\2720\357\274\214\344\273\245\351\230\262\345\207\272\347\216\260\351\227\256\351\242\230\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_31->addWidget(label_40);

        editIntTimerResolution = new QLineEdit(frame_edit_4);
        editIntTimerResolution->setObjectName("editIntTimerResolution");

        horizontalLayout_31->addWidget(editIntTimerResolution);


        verticalLayout_49->addLayout(horizontalLayout_31);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName("horizontalLayout_34");
        label_38 = new QLabel(frame_edit_4);
        label_38->setObjectName("label_38");
#if QT_CONFIG(tooltip)
        label_38->setToolTip(QString::fromUtf8("Currently the only supported variant is ASUS, using specialised protocol available on select Z87 and Z97 ASUS boards. More details can be found in LongSoft/UefiTool#116.\n"
"\n"
"----\n"
"\n"
"\347\233\256\345\211\215\345\224\257\344\270\200\346\224\257\346\214\201\347\232\204\347\211\210\346\234\254\346\230\257\345\215\216\347\241\225\357\274\214\344\275\277\347\224\250\345\215\216\347\241\225Z87\345\222\214Z97\346\235\277\345\215\241\344\270\212\347\232\204\344\270\223\347\224\250\345\215\217\350\256\256\343\200\202\346\233\264\345\244\232\347\273\206\350\212\202\345\217\257\344\273\245\345\234\250LongSoft/UefiTool#116\344\270\255\346\211\276\345\210\260\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_34->addWidget(label_38);

        editPointerSupportMode = new QLineEdit(frame_edit_4);
        editPointerSupportMode->setObjectName("editPointerSupportMode");

        horizontalLayout_34->addWidget(editPointerSupportMode);


        verticalLayout_49->addLayout(horizontalLayout_34);


        gridLayout_33->addWidget(frame_edit_4, 0, 1, 1, 1);

        tabUEFI->addTab(tabUEFI5, QString());
        tabUEFI6 = new QWidget();
        tabUEFI6->setObjectName("tabUEFI6");
        gridLayout_34 = new QGridLayout(tabUEFI6);
        gridLayout_34->setObjectName("gridLayout_34");
        frame_chk_11 = new QFrame(tabUEFI6);
        frame_chk_11->setObjectName("frame_chk_11");
        frame_chk_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_11->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_29 = new QVBoxLayout(frame_chk_11);
        verticalLayout_29->setObjectName("verticalLayout_29");
        chkClearScreenOnModeSwitch = new QCheckBox(frame_chk_11);
        chkClearScreenOnModeSwitch->setObjectName("chkClearScreenOnModeSwitch");
#if QT_CONFIG(tooltip)
        chkClearScreenOnModeSwitch->setToolTip(QString::fromUtf8("Some firmwares clear only part of screen when switching from graphics to text mode, leaving a fragment of previously drawn image visible. This option fills the entire graphics screen with black colour before switching to text mode.\n"
"\n"
"Note: This option only applies to System renderer.\n"
"\n"
"----\n"
"\n"
"\346\234\211\344\272\233\345\233\272\344\273\266\345\234\250\344\273\216\345\233\276\345\275\242\346\250\241\345\274\217\345\210\207\346\215\242\345\210\260\346\226\207\346\234\254\346\250\241\345\274\217\346\227\266\357\274\214\345\217\252\346\270\205\351\231\244\344\272\206\345\261\217\345\271\225\347\232\204\344\270\200\351\203\250\345\210\206\357\274\214\347\225\231\344\270\213\344\272\206\344\271\213\345\211\215\347\273\230\345\210\266\347\232\204\345\233\276\345\203\217\347\232\204\344\270\200\351\203\250\345\210\206\343\200\202\350\277\231\344\270\252\351\200\211\351\241\271\345\217\257\344\273\245\345\234\250\345\210\207\346\215\242\345\210\260\346\226\207\346\234\254\346\250\241\345\274\217\345"
                        "\211\215\347\224\250\351\273\221\350\211\262\345\241\253\345\205\205\346\225\264\344\270\252\345\233\276\345\275\242\345\261\217\345\271\225\343\200\202\n"
"\n"
"\346\263\250\357\274\232\350\257\245\351\200\211\351\241\271\344\273\205\351\200\202\347\224\250\344\272\216\347\263\273\347\273\237\346\270\262\346\237\223\345\231\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_29->addWidget(chkClearScreenOnModeSwitch);

        chkDirectGopRendering = new QCheckBox(frame_chk_11);
        chkDirectGopRendering->setObjectName("chkDirectGopRendering");
#if QT_CONFIG(tooltip)
        chkDirectGopRendering->setToolTip(QString::fromUtf8("On some firmwares this may provide better performance or even fix rendering issues, like on MacPro5,1. However,it is recommended not to use this option unless there is an obvious benefit as it may even result in slower scrolling.\n"
"----\n"
"\345\234\250\346\237\220\344\272\233\345\233\272\344\273\266\344\270\212\357\274\214\350\277\231\345\217\257\350\203\275\344\274\232\346\217\220\344\276\233\346\233\264\345\245\275\347\232\204\346\200\247\350\203\275\357\274\214\347\224\232\350\207\263\344\277\256\345\244\215\346\270\262\346\237\223\351\227\256\351\242\230\357\274\214\346\257\224\345\246\202\345\234\250MacPro5,1\344\270\212\343\200\202\347\204\266\350\200\214\357\274\214\345\273\272\350\256\256\344\270\215\350\246\201\344\275\277\347\224\250\350\277\231\344\270\252\351\200\211\351\241\271\357\274\214\351\231\244\351\235\236\346\234\211\346\230\216\346\230\276\347\232\204\345\245\275\345\244\204\357\274\214\345\233\240\344\270\272\345\256\203\347\224\232\350\207\263\345\217\257\350\203\275\345\257\274\350\207"
                        "\264\346\273\232\345\212\250\351\200\237\345\272\246\345\217\230\346\205\242\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_29->addWidget(chkDirectGopRendering);

        chkForceResolution = new QCheckBox(frame_chk_11);
        chkForceResolution->setObjectName("chkForceResolution");
#if QT_CONFIG(tooltip)
        chkForceResolution->setToolTip(QString::fromUtf8("Description: Forces Resolution to be set in cases where the desired resolution is not available by default, such as on legacy Intel GMA and first generation Intel HD Graphics (Ironlake/Arrandale). Setting Resolution to Max will try to pull the largest available resolution from the connected display\342\200\231s EDID.\n"
"\n"
"Note: This option depends on the OC_FORCE_RESOLUTION_PROTOCOL protocol being present. This protocol is currently only supported by OpenDuetPkg. The OpenDuetPkg implementation currently only supports Intel iGPUs.\n"
"----\n"
"\350\257\264\346\230\216\357\274\232\345\234\250\351\273\230\350\256\244\346\203\205\345\206\265\344\270\213\346\227\240\346\263\225\350\216\267\345\276\227\346\211\200\351\234\200\345\210\206\350\276\250\347\216\207\347\232\204\346\203\205\345\206\265\344\270\213\357\274\214\345\274\272\345\210\266\350\256\276\347\275\256\345\210\206\350\276\250\347\216\207\357\274\214\344\276\213\345\246\202\345\234\250\344\274\240\347\273\237\347\232\204\350\213\261\347\211\271\345"
                        "\260\224GMA\345\222\214\347\254\254\344\270\200\344\273\243\350\213\261\347\211\271\345\260\224\351\253\230\346\270\205\345\233\276\345\275\242(Ironlake/Arrandale)\344\270\212\343\200\202\345\260\206 \"\345\210\206\350\276\250\347\216\207 \"\350\256\276\347\275\256\344\270\272 \"\346\234\200\345\244\247 \"\345\260\206\345\260\235\350\257\225\344\273\216\346\211\200\350\277\236\346\216\245\347\232\204\346\230\276\347\244\272\345\231\250\347\232\204EDID\344\270\255\346\217\220\345\217\226\346\234\200\345\244\247\347\232\204\345\217\257\347\224\250\345\210\206\350\276\250\347\216\207\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\277\231\344\270\252\351\200\211\351\241\271\345\217\226\345\206\263\344\272\216OC_FORCE_RESOLUTION_PROTOCOL\345\215\217\350\256\256\346\230\257\345\220\246\345\255\230\345\234\250\343\200\202\350\277\231\344\270\252\345\215\217\350\256\256\347\233\256\345\211\215\345\217\252\350\242\253OpenDuetPkg\346\224\257\346\214\201\343\200\202OpenDuetPkg\347\232\204\345\256\236\347\216"
                        "\260\347\233\256\345\211\215\345\217\252\346\224\257\346\214\201Intel iGPU\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_29->addWidget(chkForceResolution);

        chkIgnoreTextInGraphics = new QCheckBox(frame_chk_11);
        chkIgnoreTextInGraphics->setObjectName("chkIgnoreTextInGraphics");
#if QT_CONFIG(tooltip)
        chkIgnoreTextInGraphics->setToolTip(QString::fromUtf8(" Select firmwares output text onscreen in both graphics and text mode. This is normally unexpected,because random text may appear over graphical images and cause UI corruption. Setting this option to true will discard all text output when console control is in mode different from Text.\n"
"\n"
"Note: This option only applies to System renderer.\n"
"\n"
"----\n"
"\n"
" \351\200\211\346\213\251\345\233\272\344\273\266\345\234\250\345\233\276\345\275\242\345\222\214\346\226\207\346\234\254\346\250\241\345\274\217\344\270\213\345\234\250\345\261\217\345\271\225\344\270\212\350\276\223\345\207\272\346\226\207\346\234\254\343\200\202\350\277\231\351\200\232\345\270\270\346\230\257\345\207\272\344\271\216\346\204\217\346\226\231\347\232\204\357\274\214\345\233\240\344\270\272\351\232\217\346\234\272\347\232\204\346\226\207\346\234\254\345\217\257\350\203\275\344\274\232\345\207\272\347\216\260\345\234\250\345\233\276\345\275\242\345\233\276\345\203\217\344\270\212\357\274\214\345\271\266\345\257\274\350\207\264\347\224"
                        "\250\346\210\267\347\225\214\351\235\242\346\215\237\345\235\217\343\200\202\345\260\206\346\255\244\351\200\211\351\241\271\350\256\276\347\275\256\344\270\272 \"true\"\357\274\214\345\275\223\346\216\247\345\210\266\345\217\260\346\216\247\345\210\266\346\250\241\345\274\217\344\270\216\346\226\207\346\234\254\346\250\241\345\274\217\344\270\215\345\220\214\346\227\266\357\274\214\345\260\206\344\270\242\345\274\203\346\211\200\346\234\211\346\226\207\346\234\254\350\276\223\345\207\272\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\277\231\344\270\252\351\200\211\351\241\271\345\217\252\351\200\202\347\224\250\344\272\216\347\263\273\347\273\237\346\270\262\346\237\223\345\231\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_29->addWidget(chkIgnoreTextInGraphics);

        chkProvideConsoleGop = new QCheckBox(frame_chk_11);
        chkProvideConsoleGop->setObjectName("chkProvideConsoleGop");
#if QT_CONFIG(tooltip)
        chkProvideConsoleGop->setToolTip(QString::fromUtf8("macOS bootloader requires GOP or UGA (for 10.4 EfiBoot) to be present on console handle, yet the exact location of the graphics protocol is not covered by the UEFI specification. This option will ensure GOP and UGA, if present, are available on the console handle.\n"
"\n"
"Note: This option will also replace broken GOP protocol on console handle, which may be the case on MacPro5,1 with newer GPUs.\n"
"----\n"
"macOS bootloader \350\246\201\346\261\202\346\216\247\345\210\266\345\217\260\346\211\213\346\237\204\344\270\212\345\277\205\351\241\273\346\234\211 GOP \346\210\226 UGA\357\274\210\351\200\202\347\224\250\344\272\216 10.4 EfiBoot\357\274\211\357\274\214\344\275\206 UEFI \350\247\204\350\214\203\345\271\266\346\234\252\346\266\265\347\233\226\345\233\276\345\275\242\345\215\217\350\256\256\347\232\204\347\241\256\345\210\207\344\275\215\347\275\256\343\200\202\350\277\231\344\270\252\351\200\211\351\241\271\345\260\206\347\241\256\344\277\235GOP\345\222\214UGA\357\274\210\345\246\202\346\236\234\345\255"
                        "\230\345\234\250\357\274\211\345\234\250\346\216\247\345\210\266\345\217\260\346\211\213\346\237\204\344\270\212\345\217\257\347\224\250\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\277\231\344\270\252\351\200\211\351\241\271\350\277\230\345\260\206\346\233\277\346\215\242\346\216\247\345\210\266\345\217\260\346\211\213\346\237\204\344\270\212\345\267\262\346\215\237\345\235\217\347\232\204GOP\345\215\217\350\256\256\357\274\214\345\234\250\344\275\277\347\224\250\350\276\203\346\226\260GPU\347\232\204MacPro5,1\344\270\212\345\217\257\350\203\275\344\274\232\345\207\272\347\216\260\350\277\231\347\247\215\346\203\205\345\206\265\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_29->addWidget(chkProvideConsoleGop);

        chkReplaceTabWithSpace = new QCheckBox(frame_chk_11);
        chkReplaceTabWithSpace->setObjectName("chkReplaceTabWithSpace");
#if QT_CONFIG(tooltip)
        chkReplaceTabWithSpace->setToolTip(QString::fromUtf8("Some firmwares do not print tab characters or even everything that follows them, causing difficulties or inability to use the UEFI Shell builtin text editor to edit property lists and other documents. \n"
"\n"
"This option makes the console output spaces instead of tabs.\n"
"\n"
"Note: This option only applies to System renderer.\n"
"----\n"
"\346\234\211\344\272\233\345\233\272\344\273\266\344\270\215\346\211\223\345\215\260\345\210\266\350\241\250\347\254\246\357\274\214\347\224\232\350\207\263\344\270\215\346\211\223\345\215\260\345\210\266\350\241\250\347\254\246\345\220\216\351\235\242\347\232\204\346\211\200\346\234\211\345\206\205\345\256\271\357\274\214\345\257\274\350\207\264\351\232\276\344\273\245\346\210\226\346\227\240\346\263\225\344\275\277\347\224\250UEFI Shell\345\206\205\347\275\256\347\232\204\346\226\207\346\234\254\347\274\226\350\276\221\345\231\250\346\235\245\347\274\226\350\276\221\345\261\236\346\200\247\345\210\227\350\241\250\345\222\214\345\205\266\344\273\226\346\226\207\346\241\243"
                        "\343\200\202\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\344\275\277\346\216\247\345\210\266\345\217\260\350\276\223\345\207\272\347\232\204\346\230\257\347\251\272\346\240\274\350\200\214\344\270\215\346\230\257\345\210\266\350\241\250\347\254\246\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\257\245\351\200\211\351\241\271\345\217\252\351\200\202\347\224\250\344\272\216\347\263\273\347\273\237\346\270\262\346\237\223\345\231\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_29->addWidget(chkReplaceTabWithSpace);

        chkReconnectGraphicsOnConnect = new QCheckBox(frame_chk_11);
        chkReconnectGraphicsOnConnect->setObjectName("chkReconnectGraphicsOnConnect");

        verticalLayout_29->addWidget(chkReconnectGraphicsOnConnect);

        chkReconnectOnResChange = new QCheckBox(frame_chk_11);
        chkReconnectOnResChange->setObjectName("chkReconnectOnResChange");
#if QT_CONFIG(tooltip)
        chkReconnectOnResChange->setToolTip(QString::fromUtf8("On some firmwares when screen resolution is changed via GOP, it is required to reconnect the controllers, which produce the console protocols (simple text out). Otherwise they will not produce text based on the new resolution.\n"
"\n"
"Note: On several boards this logic may result in black screen when launching OpenCore from Shell and thus it is optional. In versions prior to 0.5.2 this option was mandatory and not configurable. Please do not use this unless required.\n"
"----\n"
"\345\234\250\346\237\220\344\272\233\345\233\272\344\273\266\344\270\212\357\274\214\345\275\223\351\200\232\350\277\207GOP\346\224\271\345\217\230\345\261\217\345\271\225\345\210\206\350\276\250\347\216\207\346\227\266\357\274\214\351\234\200\350\246\201\351\207\215\346\226\260\350\277\236\346\216\245\344\272\247\347\224\237\346\216\247\345\210\266\345\217\260\345\215\217\350\256\256\357\274\210\347\256\200\345\215\225\346\226\207\346\234\254\350\276\223\345\207\272\357\274\211\347\232\204\346\216\247\345\210\266\345\231\250\343\200"
                        "\202\345\220\246\345\210\231\345\256\203\344\273\254\345\260\206\344\270\215\344\274\232\346\240\271\346\215\256\346\226\260\347\232\204\345\210\206\350\276\250\347\216\207\344\272\247\347\224\237\346\226\207\346\234\254\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\234\250\344\270\200\344\272\233\346\235\277\345\215\241\344\270\212\357\274\214\345\275\223\344\273\216Shell\345\220\257\345\212\250OpenCore\346\227\266\357\274\214\350\277\231\344\270\252\351\200\273\350\276\221\345\217\257\350\203\275\344\274\232\345\257\274\350\207\264\351\273\221\345\261\217\357\274\214\345\233\240\346\255\244\345\256\203\346\230\257\345\217\257\351\200\211\347\232\204\343\200\202\345\234\250 0.5.2 \344\271\213\345\211\215\347\232\204\347\211\210\346\234\254\344\270\255\357\274\214\350\257\245\351\200\211\351\241\271\346\230\257\345\274\272\345\210\266\346\200\247\347\232\204\357\274\214\344\270\215\345\217\257\351\205\215\347\275\256\343\200\202\351\231\244\351\235\236\351\234\200\350\246\201\357\274\214\345\220"
                        "\246\345\210\231\350\257\267\344\270\215\350\246\201\344\275\277\347\224\250\350\257\245\351\200\211\351\241\271\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_29->addWidget(chkReconnectOnResChange);

        chkSanitiseClearScreen = new QCheckBox(frame_chk_11);
        chkSanitiseClearScreen->setObjectName("chkSanitiseClearScreen");
#if QT_CONFIG(tooltip)
        chkSanitiseClearScreen->setToolTip(QString::fromUtf8(" Some firmwares reset screen resolution to a failsafe value (like 1024x768) on the attempts to clear screen contents when large display (e.g. 2K or 4K) is used. This option attempts to apply a workaround.\n"
"\n"
"Note: This option only applies to System renderer. On all known affected systems ConsoleMode had to be set to empty string for this to work.\n"
"----\n"
" \345\275\223\344\275\277\347\224\250\345\244\247\345\261\217\345\271\225\357\274\210\345\246\2022K\346\210\2264K\357\274\211\346\227\266\357\274\214\344\270\200\344\272\233\345\233\272\344\273\266\345\234\250\345\260\235\350\257\225\346\270\205\351\231\244\345\261\217\345\271\225\345\206\205\345\256\271\346\227\266\357\274\214\344\274\232\345\260\206\345\261\217\345\271\225\345\210\206\350\276\250\347\216\207\351\207\215\347\275\256\344\270\272\346\225\205\351\232\234\345\256\211\345\205\250\345\200\274\357\274\210\345\246\2021024x768\357\274\211\343\200\202\350\277\231\344\270\252\351\200\211\351\241\271\350\257\225\345\233\276\345\272\224\347\224"
                        "\250\344\270\200\344\270\252\345\217\230\351\200\232\346\226\271\346\263\225\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\277\231\344\270\252\351\200\211\351\241\271\345\217\252\351\200\202\347\224\250\344\272\216\347\263\273\347\273\237\346\270\262\346\237\223\345\231\250\343\200\202\345\234\250\346\211\200\346\234\211\345\267\262\347\237\245\345\217\227\345\275\261\345\223\215\347\232\204\347\263\273\347\273\237\344\270\255\357\274\214ConsoleMode\345\277\205\351\241\273\350\256\276\347\275\256\344\270\272\347\251\272\345\255\227\347\254\246\344\270\262\346\211\215\350\241\214\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_29->addWidget(chkSanitiseClearScreen);

        chkUgaPassThrough = new QCheckBox(frame_chk_11);
        chkUgaPassThrough->setObjectName("chkUgaPassThrough");
#if QT_CONFIG(tooltip)
        chkUgaPassThrough->setToolTip(QString::fromUtf8("Some firmwares do not implement legacy UGA protocol, but it may be required for screen output by older EFI applications like EfiBoot from 10.4.\n"
"----\n"
"\346\234\211\344\272\233\345\233\272\344\273\266\346\262\241\346\234\211\345\256\236\347\216\260\344\274\240\347\273\237\346\227\247\345\274\217\347\232\204UGA\345\215\217\350\256\256\357\274\214\344\275\206\346\227\247\347\232\204EFI\345\272\224\347\224\250\347\250\213\345\272\217\357\274\210\345\246\20210.4\347\232\204EfiBoot\357\274\211\345\217\257\350\203\275\351\234\200\350\246\201\345\256\203\346\235\245\350\277\233\350\241\214\345\261\217\345\271\225\350\276\223\345\207\272\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_29->addWidget(chkUgaPassThrough);


        gridLayout_34->addWidget(frame_chk_11, 0, 0, 1, 1);

        frame_edit_8 = new QFrame(tabUEFI6);
        frame_edit_8->setObjectName("frame_edit_8");
        frame_edit_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_8->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_30 = new QVBoxLayout(frame_edit_8);
        verticalLayout_30->setObjectName("verticalLayout_30");
        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setObjectName("horizontalLayout_44");
        label_24 = new QLabel(frame_edit_8);
        label_24->setObjectName("label_24");
#if QT_CONFIG(tooltip)
        label_24->setToolTip(QString::fromUtf8("Set to empty string not to change console mode. Set to Max to try to use largest available console mode. Currently Builtin text renderer supports only one console mode, so this option is ignored.\n"
"\n"
"Note: This field is best to be left empty on most firmwares.\n"
"----\n"
"\350\256\276\347\275\256\344\270\272\347\251\272\345\255\227\347\254\246\344\270\262\357\274\214\344\270\215\346\224\271\345\217\230\346\216\247\345\210\266\345\217\260\346\250\241\345\274\217\343\200\202\350\256\276\347\275\256\344\270\272\346\234\200\345\244\247\357\274\214\345\260\235\350\257\225\344\275\277\347\224\250\346\234\200\345\244\247\347\232\204\345\217\257\347\224\250\347\232\204\346\216\247\345\210\266\345\217\260\346\250\241\345\274\217\357\274\214\347\233\256\345\211\215Builtin\346\226\207\346\234\254\346\270\262\346\237\223\345\231\250\345\217\252\346\224\257\346\214\201\344\270\200\347\247\215\346\216\247\345\210\266\345\217\260\346\250\241\345\274\217\357\274\214\346\211\200\344\273\245\350\277\231\344\270\252\351\200"
                        "\211\351\241\271\344\274\232\350\242\253\345\277\275\347\225\245\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\234\250\345\244\247\345\244\232\346\225\260\345\233\272\344\273\266\344\270\212\357\274\214\350\277\231\344\270\252\345\255\227\346\256\265\346\234\200\345\245\275\347\225\231\347\251\272\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_44->addWidget(label_24);

        cboxConsoleMode = new QComboBox(frame_edit_8);
        cboxConsoleMode->setObjectName("cboxConsoleMode");
        cboxConsoleMode->setMinimumSize(QSize(200, 0));
        cboxConsoleMode->setMaximumSize(QSize(400, 16777215));
        cboxConsoleMode->setEditable(true);

        horizontalLayout_44->addWidget(cboxConsoleMode);


        verticalLayout_30->addLayout(horizontalLayout_44);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName("horizontalLayout_36");
        label_25 = new QLabel(frame_edit_8);
        label_25->setObjectName("label_25");
#if QT_CONFIG(tooltip)
        label_25->setToolTip(QString::fromUtf8("\342\200\242 Set to WxH@Bpp (e.g. 1920x1080@32) or WxH (e.g. 1920x1080) formatted string to request custom resolution from GOP if available.\n"
"\n"
"\342\200\242 Set to empty string not to change screen resolution.\n"
"\n"
"\342\200\242 Set to Max to try to use largest available screen resolution.\n"
"\n"
"On HiDPI screens APPLE_VENDOR_VARIABLE_GUID UIScale NVRAM variable may need to be set to 02 to enable HiDPI scaling in Builtin text renderer, FileVault 2 UEFI password interface, and boot screen logo. Refer to Recommended Variables section for more details.\n"
"\n"
"Note: This will fail when console handle has no GOP protocol. When the firmware does not provide it, it can be added with ProvideConsoleGop set to true.\n"
"----\n"
"- \350\256\276\347\275\256\344\270\272WxH@Bpp(\345\246\2021920x1080@32)\346\210\226WxH(\345\246\2021920x1080)\346\240\274\345\274\217\347\232\204\345\255\227\347\254\246\344\270\262\357\274\214\344\273\245\350\257\267\346\261\202GOP\346\217\220\344\276\233\350\207\252\345\256\232\344"
                        "\271\211\345\210\206\350\276\250\347\216\207\343\200\202\n"
"\n"
"- \350\256\276\347\275\256\344\270\272\347\251\272\345\255\227\347\254\246\344\270\262\344\270\215\346\224\271\345\217\230\345\261\217\345\271\225\345\210\206\350\276\250\347\216\207\343\200\202\n"
"\n"
"- \350\256\276\347\275\256\344\270\272\346\234\200\345\244\247\357\274\214\345\260\235\350\257\225\344\275\277\347\224\250\346\234\200\345\244\247\347\232\204\345\217\257\347\224\250\345\261\217\345\271\225\345\210\206\350\276\250\347\216\207\343\200\202\n"
"\n"
"\345\234\250HiDPI\345\261\217\345\271\225\344\270\212\357\274\214APPLE_VENDOR_VARIABLE_GUID UIScale NVRAM\345\217\230\351\207\217\345\217\257\350\203\275\351\234\200\350\246\201\350\256\276\347\275\256\344\270\27202\357\274\214\344\273\245\344\276\277\345\234\250Builtin\346\226\207\346\234\254\346\270\262\346\237\223\345\231\250\343\200\201FileVault 2 UEFI\345\257\206\347\240\201\347\225\214\351\235\242\345\222\214\345\274\200\346\234\272\345\261\217\345\271\225\345\276\275\346\240\207\344"
                        "\270\255\345\220\257\347\224\250HiDPI\347\274\251\346\224\276\343\200\202\346\233\264\345\244\232\347\273\206\350\212\202\350\257\267\345\217\202\350\200\203\346\216\250\350\215\220\345\217\230\351\207\217\351\203\250\345\210\206\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\275\223\346\216\247\345\210\266\345\217\260\346\211\213\346\237\204\346\262\241\346\234\211GOP\345\215\217\350\256\256\346\227\266\357\274\214\350\277\231\345\260\206\345\244\261\350\264\245\343\200\202\345\275\223\345\233\272\344\273\266\344\270\215\346\217\220\344\276\233\346\227\266\357\274\214\345\217\257\344\273\245\351\200\232\350\277\207\345\260\206ProvideConsoleGop\350\256\276\347\275\256\344\270\272true\346\235\245\346\267\273\345\212\240\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_36->addWidget(label_25);

        cboxResolution = new QComboBox(frame_edit_8);
        cboxResolution->setObjectName("cboxResolution");
        cboxResolution->setMinimumSize(QSize(200, 0));
        cboxResolution->setMaximumSize(QSize(400, 16777215));
        cboxResolution->setEditable(true);

        horizontalLayout_36->addWidget(cboxResolution);


        verticalLayout_30->addLayout(horizontalLayout_36);

        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setObjectName("horizontalLayout_45");
        label_26 = new QLabel(frame_edit_8);
        label_26->setObjectName("label_26");
#if QT_CONFIG(tooltip)
        label_26->setToolTip(QString::fromUtf8("Currently two renderers are supported: Builtin and System. System renderer uses firmware services for text rendering. \n"
"\n"
"Builtin bypassing firmware services and performs text rendering on its own. Different renderers support a different set of options. It is recommended to use Builtin renderer, as it supports HiDPI mode and uses full screen resolution.\n"
"\n"
"UEFI firmwares generally support ConsoleControl with two rendering modes: Graphics and Text. Some firmwares do not support ConsoleControl and rendering modes. \n"
"\n"
"OpenCore and macOS expect text to only be shown in Graphics mode and graphics to be drawn in any mode. Since this is not required by UEFI specification,exact behaviour varies.\n"
"\n"
"Valid values are combinations of text renderer and rendering mode:\n"
"\n"
"\342\200\242 BuiltinGraphics \342\200\224 Switch to Graphics mode and use Builtin renderer with custom ConsoleControl. \n"
"\n"
"\342\200\242 BuiltinText \342\200\224 Switch to Text mode and use Builtin renderer with custom "
                        "ConsoleControl. \n"
"\n"
"\342\200\242 SystemGraphics \342\200\224 Switch to Graphics mode and use System renderer with custom ConsoleControl. \n"
"\n"
"\342\200\242 SystemText \342\200\224 Switch to Text mode and use System renderer with custom ConsoleControl. \n"
"\n"
"\342\200\242 SystemGeneric \342\200\224 Use System renderer with system ConsoleControl assuming it behaves correctly.\n"
"\n"
"The use of BuiltinGraphics is generally straightforward. For most platforms it is necessary to enable ProvideConsoleGop, set Resolution to Max. BuiltinText variant is an alternative BuiltinGraphics for some very old and buggy laptop firmwares, which can only draw in Text mode.\n"
"\n"
"The use of System protocols is more complicated. In general the preferred setting is SystemGraphics or SystemText. Enabling ProvideConsoleGop, setting Resolution to Max, enabling ReplaceTabWithSpace is useful on almost all platforms. SanitiseClearScreen, IgnoreTextInGraphics, and ClearScreenOnModeSwitch are more specific, and their use d"
                        "epends on the firmware.\n"
"\n"
"Note: Some Macs, namely MacPro5,1, may have broken console output with newer GPUs, and thus only BuiltinGraphics may work for them.\n"
"----\n"
"\347\233\256\345\211\215\346\224\257\346\214\201\344\270\244\347\247\215\346\270\262\346\237\223\345\231\250\343\200\202Builtin\345\222\214System\343\200\202\347\263\273\347\273\237\346\270\262\346\237\223\345\231\250\344\275\277\347\224\250\345\233\272\344\273\266\346\234\215\345\212\241\350\277\233\350\241\214\346\226\207\346\234\254\346\270\262\346\237\223\343\200\202\n"
"\n"
"Builtin \347\273\225\350\277\207\345\233\272\344\273\266\346\234\215\345\212\241\357\274\214\350\207\252\350\241\214\350\277\233\350\241\214\346\226\207\346\234\254\346\270\262\346\237\223\343\200\202\344\270\215\345\220\214\347\232\204\346\270\262\346\237\223\345\231\250\346\224\257\346\214\201\344\270\200\347\273\204\344\270\215\345\220\214\347\232\204\351\200\211\351\241\271\343\200\202\345\273\272\350\256\256\344\275\277\347\224\250Builtin\346\270\262\346\237"
                        "\223\345\231\250\357\274\214\345\233\240\344\270\272\345\256\203\346\224\257\346\214\201HiDPI\346\250\241\345\274\217\345\271\266\344\275\277\347\224\250\345\205\250\345\261\217\345\210\206\350\276\250\347\216\207\343\200\202\n"
"\n"
"UEFI\345\233\272\344\273\266\344\270\200\350\210\254\346\224\257\346\214\201ConsoleControl\347\232\204\344\270\244\347\247\215\346\270\262\346\237\223\346\250\241\345\274\217\343\200\202\345\233\276\345\275\242\345\222\214\346\226\207\346\234\254\343\200\202\346\234\211\344\272\233\345\233\272\344\273\266\344\270\215\346\224\257\346\214\201ConsoleControl\345\222\214\346\270\262\346\237\223\346\250\241\345\274\217\343\200\202\n"
"\n"
"OpenCore\345\222\214macOS\345\270\214\346\234\233\346\226\207\346\234\254\345\217\252\350\203\275\345\234\250Graphics\346\250\241\345\274\217\344\270\213\346\230\276\347\244\272\357\274\214\350\200\214\345\233\276\345\275\242\345\217\257\344\273\245\345\234\250\344\273\273\344\275\225\346\250\241\345\274\217\344\270\213\347\273\230\345\210\266\343\200"
                        "\202\347\224\261\344\272\216UEFI\350\247\204\350\214\203\344\270\215\350\246\201\346\261\202\350\277\231\346\240\267\345\201\232\357\274\214\346\211\200\344\273\245\345\205\267\344\275\223\347\232\204\350\241\214\344\270\272\344\274\232\346\234\211\346\211\200\344\270\215\345\220\214\343\200\202\n"
"\n"
"\346\234\211\346\225\210\345\200\274\346\230\257\346\226\207\346\234\254\346\270\262\346\237\223\345\231\250\345\222\214\346\270\262\346\237\223\346\250\241\345\274\217\347\232\204\347\273\204\345\220\210\343\200\202\n"
"\n"
"- BuiltinGraphics - \345\210\207\346\215\242\345\210\260Graphics\346\250\241\345\274\217\357\274\214\345\271\266\344\275\277\347\224\250\350\207\252\345\256\232\344\271\211ConsoleControl\347\232\204Builtin\346\270\262\346\237\223\345\231\250\343\200\202\n"
"\n"
"- BuiltinText - \345\210\207\346\215\242\345\210\260\346\226\207\346\234\254\346\250\241\345\274\217\357\274\214\345\271\266\344\275\277\347\224\250\345\206\205\347\275\256\347\232\204\346\270\262\346\237\223\345\231\250\345\222\214"
                        "\350\207\252\345\256\232\344\271\211\347\232\204ConsoleControl\343\200\202\n"
"\n"
"- SystemGraphics - \345\210\207\346\215\242\345\210\260Graphics\346\250\241\345\274\217\357\274\214\345\271\266\351\200\232\350\277\207\350\207\252\345\256\232\344\271\211ConsoleControl\344\275\277\347\224\250\347\263\273\347\273\237\346\270\262\346\237\223\345\231\250\343\200\202\n"
"\n"
"- SystemText - \345\210\207\346\215\242\345\210\260Text\346\250\241\345\274\217\357\274\214\345\271\266\344\275\277\347\224\250\347\263\273\347\273\237\346\270\262\346\237\223\345\231\250\344\270\216\350\207\252\345\256\232\344\271\211ConsoleControl\343\200\202\n"
"\n"
"- SystemGeneric - \344\275\277\347\224\250\347\263\273\347\273\237\346\270\262\346\237\223\345\231\250\344\270\216\347\263\273\347\273\237ConsoleControl\344\270\200\350\265\267\344\275\277\347\224\250\357\274\214\345\211\215\346\217\220\346\230\257\345\256\203\350\241\250\347\216\260\346\255\243\347\241\256\343\200\202\n"
"\n"
"BuiltinGraphics\347\232\204\344\275\277\347\224\250"
                        "\344\270\200\350\210\254\351\203\275\345\276\210\347\256\200\345\215\225\343\200\202\345\257\271\344\272\216\345\244\247\345\244\232\346\225\260\345\271\263\345\217\260\346\235\245\350\257\264\357\274\214\346\234\211\345\277\205\350\246\201\345\220\257\347\224\250ProvideConsoleGop\357\274\214\345\260\206Resolution\350\256\276\347\275\256\344\270\272Max\343\200\202BuiltinText\345\217\230\344\275\223\346\230\257\344\270\200\344\272\233\351\235\236\345\270\270\350\200\201\346\227\247\345\222\214\351\224\231\350\257\257\347\232\204\347\254\224\350\256\260\346\234\254\345\233\272\344\273\266\347\232\204\346\233\277\344\273\243BuiltinGraphics\357\274\214\345\256\203\345\217\252\350\203\275\345\234\250Text\346\250\241\345\274\217\344\270\213\347\273\230\345\210\266\343\200\202\n"
"\n"
"\347\263\273\347\273\237\345\215\217\350\256\256\347\232\204\344\275\277\347\224\250\346\257\224\350\276\203\345\244\215\346\235\202\343\200\202\344\270\200\350\210\254\346\235\245\350\257\264\357\274\214\351\246\226\351\200\211\350\256"
                        "\276\347\275\256\346\230\257SystemGraphics\346\210\226SystemText\343\200\202\345\220\257\347\224\250ProvideConsoleGop\357\274\214\345\260\206\345\210\206\350\276\250\347\216\207\350\256\276\347\275\256\344\270\272\346\234\200\345\244\247\357\274\214\345\220\257\347\224\250ReplaceTabWithSpace\345\207\240\344\271\216\345\234\250\346\211\200\346\234\211\345\271\263\345\217\260\344\270\212\351\203\275\345\276\210\346\234\211\347\224\250\343\200\202SanitiseClearScreen\343\200\201IgnoreTextInGraphics\345\222\214ClearScreenOnModeSwitch\346\257\224\350\276\203\347\211\271\346\256\212\357\274\214\345\205\266\347\224\250\351\200\224\345\217\226\345\206\263\344\272\216\345\233\272\344\273\266\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\344\270\200\344\272\233Mac\357\274\214\345\215\263MacPro5,1\357\274\214\345\234\250\344\275\277\347\224\250\350\276\203\346\226\260\347\232\204GPU\346\227\266\345\217\257\350\203\275\344\274\232\347\240\264\345\235\217\346\216\247\345\210\266\345\217\260\347\232\204\350\276\223"
                        "\345\207\272\357\274\214\345\233\240\346\255\244\345\217\252\346\234\211BuiltinGraphics\345\217\257\350\203\275\345\257\271\345\256\203\344\273\254\346\234\211\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_26->setStatusTip(QString::fromUtf8(" Chooses renderer for text going through standard console output."));
#endif // QT_CONFIG(statustip)

        horizontalLayout_45->addWidget(label_26);

        cboxTextRenderer = new QComboBox(frame_edit_8);
        cboxTextRenderer->setObjectName("cboxTextRenderer");
        cboxTextRenderer->setMinimumSize(QSize(200, 0));
        cboxTextRenderer->setMaximumSize(QSize(400, 16777215));
        cboxTextRenderer->setEditable(true);

        horizontalLayout_45->addWidget(cboxTextRenderer);


        verticalLayout_30->addLayout(horizontalLayout_45);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName("horizontalLayout_37");
        label_12 = new QLabel(frame_edit_8);
        label_12->setObjectName("label_12");
#if QT_CONFIG(tooltip)
        label_12->setToolTip(QString::fromUtf8("Type: plist string\n"
"\n"
"Description: Provide GOP protocol instances on top of UGA protocol instances.\n"
"\n"
"This option provides the GOP protocol via a UGA-based proxy for firmware that do not implement the protocol.\n"
"The supported values for the option are as follows:\n"
"\342\200\242 Enabled \342\200\224 provide GOP for all UGA protocols.\n"
"\342\200\242 Apple \342\200\224 provide GOP for AppleFramebufferInfo-enabled protocols.\n"
"\342\200\242 Disabled \342\200\224 do not provide GOP.\n"
"Note: This option requires ProvideConsoleGop to be enabled.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\345\255\227\347\254\246\344\270\262\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\234\250UGA\345\215\217\350\256\256\345\256\236\344\276\213\347\232\204\345\237\272\347\241\200\344\270\212\346\217\220\344\276\233GOP\345\215\217\350\256\256\345\256\236\344\276\213\343\200\202\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\351\200\232\350\277\207\344\270\200\344\270\252\345\237\272\344\272"
                        "\216UGA\347\232\204\344\273\243\347\220\206\344\270\272\346\262\241\346\234\211\345\256\236\347\216\260GOP\345\215\217\350\256\256\347\232\204\345\233\272\344\273\266\346\217\220\344\276\233GOP\345\215\217\350\256\256\343\200\202\n"
"\350\257\245\351\200\211\351\241\271\347\232\204\346\224\257\346\214\201\345\200\274\345\246\202\344\270\213\357\274\232\n"
"- Enabled - \344\270\272\346\211\200\346\234\211UGA\345\215\217\350\256\256\346\217\220\344\276\233GOP\343\200\202\n"
"- Apple - \344\270\272AppleFramebufferInfo\345\220\257\347\224\250\347\232\204\345\215\217\350\256\256\346\217\220\344\276\233GOP\343\200\202\n"
"- Disabled - \344\270\215\346\217\220\344\276\233GOP\343\200\202\n"
"\346\263\250\346\204\217\357\274\232\350\277\231\344\270\252\351\200\211\351\241\271\351\234\200\350\246\201ProvideConsoleGop\350\242\253\345\220\257\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_12->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)

        horizontalLayout_37->addWidget(label_12);

        cboxGopPassThrough = new QComboBox(frame_edit_8);
        cboxGopPassThrough->addItem(QString::fromUtf8("Disabled"));
        cboxGopPassThrough->addItem(QString::fromUtf8("Enabled"));
        cboxGopPassThrough->addItem(QString::fromUtf8("Apple"));
        cboxGopPassThrough->setObjectName("cboxGopPassThrough");
        cboxGopPassThrough->setMinimumSize(QSize(200, 0));
        cboxGopPassThrough->setMaximumSize(QSize(400, 16777215));
        cboxGopPassThrough->setEditable(true);

        horizontalLayout_37->addWidget(cboxGopPassThrough);


        verticalLayout_30->addLayout(horizontalLayout_37);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName("horizontalLayout_38");
        label_121 = new QLabel(frame_edit_8);
        label_121->setObjectName("label_121");
#if QT_CONFIG(tooltip)
        label_121->setToolTip(QString::fromUtf8("Type: plist integer, 8 bit \n"
"Description: User interface scaling factor. \n"
"Corresponds to 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:UIScale variable. \n"
"\342\200\242 1 \342\200\224 1x scaling, corresponds to normal displays. \n"
"\342\200\242 2 \342\200\224 2x scaling, corresponds to HiDPI displays. \n"
"\342\200\242 -1 \342\200\224 leaves the current variable unchanged. \n"
"\342\200\242 0 \342\200\224 automatically chooses scaling based on the current resolution. \n"
"Note 1 : Automatic scale factor detection works on the basis of total pixel area and may fail on small HiDPI displays, in which case the value may be manually managed using the NVRAM section. \n"
"Note 2 : When switching from manually specifified NVRAM variable to this preference an NVRAM reset may be needed.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\357\274\2148\344\275\215 \n"
"\346\217\217\350\277\260\357\274\232\347\224\250\346\210\267\347\225\214\351\235\242\347\232\204\347\274\251\346\224\276\347\263"
                        "\273\346\225\260\343\200\202\n"
"\345\257\271\345\272\224\344\272\2164D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14\357\274\232UIScale\345\217\230\351\207\217\343\200\202\n"
"1 -- 1\345\200\215\347\274\251\346\224\276\357\274\214\345\257\271\345\272\224\344\272\216\346\255\243\345\270\270\346\230\276\347\244\272\343\200\202\n"
"2 -- 2x\347\274\251\346\224\276\357\274\214\345\257\271\345\272\224\344\272\216HiDPI\346\230\276\347\244\272\345\231\250\343\200\202\n"
"-1 -- \344\277\235\346\214\201\345\275\223\345\211\215\345\217\230\351\207\217\344\270\215\345\217\230\343\200\202\n"
"0 -- \346\240\271\346\215\256\345\275\223\345\211\215\345\210\206\350\276\250\347\216\207\350\207\252\345\212\250\351\200\211\346\213\251\347\274\251\346\224\276\346\257\224\344\276\213\343\200\202\n"
"\346\263\2501\357\274\232\350\207\252\345\212\250\346\257\224\344\276\213\347\263\273\346\225\260\346\243\200\346\265\213\346\230\257\345\234\250\346\200\273\345\203\217\347\264\240\351\235\242\347\247\257\347\232\204\345\237\272\347\241\200\344\270"
                        "\212\350\277\233\350\241\214\347\232\204\357\274\214\345\234\250\345\260\217\347\232\204HiDPI\346\230\276\347\244\272\345\231\250\344\270\212\345\217\257\350\203\275\344\274\232\345\244\261\350\264\245\357\274\214\345\234\250\350\277\231\347\247\215\346\203\205\345\206\265\344\270\213\357\274\214\345\217\257\344\273\245\344\275\277\347\224\250NVRAM\351\203\250\345\210\206\346\211\213\345\212\250\347\256\241\347\220\206\350\257\245\345\200\274\343\200\202\n"
"\346\263\2502\357\274\232\345\275\223\344\273\216\346\211\213\345\212\250\346\214\207\345\256\232\347\232\204NVRAM\345\217\230\351\207\217\345\210\207\346\215\242\345\210\260\350\257\245\351\246\226\351\200\211\351\241\271\346\227\266\357\274\214\345\217\257\350\203\275\351\234\200\350\246\201\345\257\271NVRAM\350\277\233\350\241\214\351\207\215\347\275\256\343\200\202"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_121->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)

        horizontalLayout_38->addWidget(label_121);

        editIntUIScale = new QLineEdit(frame_edit_8);
        editIntUIScale->setObjectName("editIntUIScale");
        editIntUIScale->setMaximumSize(QSize(400, 16777215));

        horizontalLayout_38->addWidget(editIntUIScale);


        verticalLayout_30->addLayout(horizontalLayout_38);


        gridLayout_34->addWidget(frame_edit_8, 0, 1, 1, 1);

        tabUEFI->addTab(tabUEFI6, QString());
        tabUEFI7 = new QWidget();
        tabUEFI7->setObjectName("tabUEFI7");
        gridLayout_81 = new QGridLayout(tabUEFI7);
        gridLayout_81->setObjectName("gridLayout_81");
        frame_chk_5 = new QFrame(tabUEFI7);
        frame_chk_5->setObjectName("frame_chk_5");
        frame_chk_5->setFrameShape(QFrame::Shape::NoFrame);
        frame_chk_5->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_26 = new QVBoxLayout(frame_chk_5);
        verticalLayout_26->setSpacing(0);
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        chkAppleAudio = new QCheckBox(frame_chk_5);
        chkAppleAudio->setObjectName("chkAppleAudio");
#if QT_CONFIG(tooltip)
        chkAppleAudio->setToolTip(QString::fromUtf8("Apple audio protocols allow macOS bootloader and OpenCore to play sounds and signals for screen reading or audible error reporting. Supported protocols are beep generation and VoiceOver. \n"
"\n"
"VoiceOver protocol is specific to Gibraltar machines (T2) and is not supported before macOS High Sierra (10.13). Instead older macOS versions use AppleHDA protocol, which is currently not implemented.\n"
"\n"
"Only one set of audio protocols can be available at a time, so in order to get audio playback in OpenCore user interface on Mac system implementing some of these protocols this setting should be enabled.\n"
"\n"
"Note: Backend audio driver needs to be configured in UEFI Audio section for these protocols to be able to stream audio.\n"
"----\n"
"\350\213\271\346\236\234\351\237\263\351\242\221\345\215\217\350\256\256\345\205\201\350\256\270macOS\345\274\225\345\257\274\345\212\240\350\275\275\345\231\250\345\222\214OpenCore\346\222\255\346\224\276\345\243\260\351\237\263\345\222\214\344\277\241\345\217\267\357\274"
                        "\214\347\224\250\344\272\216\345\261\217\345\271\225\351\230\205\350\257\273\346\210\226\345\217\257\351\227\273\347\232\204\351\224\231\350\257\257\346\212\245\345\221\212\343\200\202\346\224\257\346\214\201\347\232\204\345\215\217\350\256\256\346\234\211\345\223\224\345\223\224\345\243\260\347\224\237\346\210\220\345\222\214VoiceOver\343\200\202\n"
"\n"
"VoiceOver\345\215\217\350\256\256\346\230\257\347\233\264\345\270\203\347\275\227\351\231\200\346\234\272\357\274\210T2\357\274\211\347\211\271\346\234\211\347\232\204\357\274\214\345\234\250macOS High Sierra\357\274\21010.13\357\274\211\344\271\213\345\211\215\344\270\215\346\224\257\346\214\201\343\200\202\350\200\214\346\227\247\347\211\210macOS\345\210\231\344\275\277\347\224\250AppleHDA\345\215\217\350\256\256\357\274\214\347\233\256\345\211\215\350\277\230\346\262\241\346\234\211\345\256\236\347\216\260\343\200\202\n"
"\n"
"\344\270\200\346\254\241\345\217\252\350\203\275\346\234\211\344\270\200\347\273\204\351\237\263\351\242\221\345\215\217\350\256\256"
                        "\357\274\214\346\211\200\344\273\245\344\270\272\344\272\206\345\234\250\345\256\236\347\216\260\345\205\266\344\270\255\344\270\200\344\272\233\345\215\217\350\256\256\347\232\204Mac\347\263\273\347\273\237\344\270\212\347\232\204OpenCore\347\224\250\346\210\267\347\225\214\351\235\242\344\270\255\350\216\267\345\276\227\351\237\263\351\242\221\346\222\255\346\224\276\357\274\214\345\272\224\345\220\257\347\224\250\346\255\244\350\256\276\347\275\256\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\351\234\200\350\246\201\345\234\250UEFI\351\237\263\351\242\221\351\203\250\345\210\206\351\205\215\347\275\256\345\220\216\347\253\257\351\237\263\351\242\221\351\251\261\345\212\250\347\250\213\345\272\217\357\274\214\344\273\245\344\276\277\350\277\231\344\272\233\345\215\217\350\256\256\350\203\275\345\244\237\350\277\233\350\241\214\351\237\263\351\242\221\346\265\201\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_26->addWidget(chkAppleAudio);

        chkAppleBootPolicy = new QCheckBox(frame_chk_5);
        chkAppleBootPolicy->setObjectName("chkAppleBootPolicy");
#if QT_CONFIG(tooltip)
        chkAppleBootPolicy->setToolTip(QString::fromUtf8("Note: Some Macs, namely MacPro5,1, do have APFS compatibility, but their Apple Boot Policy protocol contains recovery detection issues, thus using this option is advised on them as well.\n"
"----\n"
"\346\263\250\357\274\232\346\234\211\344\272\233Mac\357\274\214\345\215\263MacPro5,1\357\274\214\350\231\275\347\204\266\345\205\274\345\256\271APFS\357\274\214\344\275\206\345\205\266Apple Boot Policy\345\215\217\350\256\256\345\214\205\345\220\253\346\201\242\345\244\215\346\243\200\346\265\213\351\227\256\351\242\230\357\274\214\345\233\240\346\255\244\345\273\272\350\256\256\345\234\250\345\256\203\344\273\254\350\272\253\344\270\212\344\271\237\344\275\277\347\224\250\350\277\231\344\270\252\351\200\211\351\241\271\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_26->addWidget(chkAppleBootPolicy);

        chkAppleDebugLog = new QCheckBox(frame_chk_5);
        chkAppleDebugLog->setObjectName("chkAppleDebugLog");
#if QT_CONFIG(tooltip)
        chkAppleDebugLog->setToolTip(QString::fromUtf8("Reinstalls Apple Debug Log protocol with a builtin version.\n"
"----\n"
"\351\207\215\346\226\260\345\256\211\350\243\205\345\206\205\347\275\256\347\211\210\346\234\254\347\232\204 Apple Debug Log \345\215\217\350\256\256\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_26->addWidget(chkAppleDebugLog);

        chkAppleFramebufferInfo = new QCheckBox(frame_chk_5);
        chkAppleFramebufferInfo->setObjectName("chkAppleFramebufferInfo");
#if QT_CONFIG(tooltip)
        chkAppleFramebufferInfo->setToolTip(QString::fromUtf8(" Reinstalls Apple Framebuffer Info protocol with a builtin version. This may be used to override framebuffer information on VMs or legacy Macs to improve compatibility with legacy EfiBoot like the one in macOS 10.4.\n"
"----\n"
" \351\207\215\346\226\260\345\256\211\350\243\205\345\206\205\347\275\256\347\211\210\346\234\254\347\232\204 Apple Framebuffer Info \345\215\217\350\256\256\343\200\202\350\277\231\345\217\257\344\273\245\347\224\250\346\235\245\350\246\206\347\233\226\350\231\232\346\213\237\346\234\272\346\210\226\346\227\247\347\211\210 Mac \344\270\212\347\232\204\345\270\247\347\274\223\345\206\262\344\277\241\346\201\257\357\274\214\344\273\245\346\217\220\351\253\230\344\270\216\346\227\247\347\211\210 EfiBoot\357\274\210\345\246\202 macOS 10.4 \344\270\255\347\232\204 EfiBoot\357\274\211\347\232\204\345\205\274\345\256\271\346\200\247\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_26->addWidget(chkAppleFramebufferInfo);

        chkAppleImageConversion = new QCheckBox(frame_chk_5);
        chkAppleImageConversion->setObjectName("chkAppleImageConversion");
#if QT_CONFIG(tooltip)
        chkAppleImageConversion->setToolTip(QString::fromUtf8("Reinstalls Apple Image Conversion protocol with a builtin version.\n"
"\n"
"----\n"
"\n"
"\351\207\215\346\226\260\345\256\211\350\243\205\345\206\205\347\275\256\347\211\210\346\234\254\347\232\204\350\213\271\346\236\234\345\233\276\345\203\217\350\275\254\346\215\242\345\215\217\350\256\256\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_26->addWidget(chkAppleImageConversion);

        chkAppleImg4Verification = new QCheckBox(frame_chk_5);
        chkAppleImg4Verification->setObjectName("chkAppleImg4Verification");
#if QT_CONFIG(tooltip)
        chkAppleImg4Verification->setToolTip(QString::fromUtf8(" Reinstalls Apple IMG4 Verification protocol with a builtin version. This protocol is used to verify im4m manifest files used by Apple Secure Boot.\n"
"----\n"
" \351\207\215\346\226\260\345\256\211\350\243\205\345\206\205\347\275\256\347\211\210\346\234\254\347\232\204 Apple IMG4 \351\252\214\350\257\201\345\215\217\350\256\256\343\200\202\350\257\245\345\215\217\350\256\256\347\224\250\344\272\216\351\252\214\350\257\201 Apple Secure Boot \344\275\277\347\224\250\347\232\204 im4m \346\270\205\345\215\225\346\226\207\344\273\266\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_26->addWidget(chkAppleImg4Verification);


        gridLayout_81->addWidget(frame_chk_5, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_81->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_81->addItem(horizontalSpacer_6, 0, 4, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_81->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        frame_chk_8 = new QFrame(tabUEFI7);
        frame_chk_8->setObjectName("frame_chk_8");
        frame_chk_8->setFrameShape(QFrame::Shape::NoFrame);
        frame_chk_8->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_35 = new QVBoxLayout(frame_chk_8);
        verticalLayout_35->setSpacing(0);
        verticalLayout_35->setObjectName("verticalLayout_35");
        verticalLayout_35->setContentsMargins(0, 0, 0, 0);
        chkDataHub = new QCheckBox(frame_chk_8);
        chkDataHub->setObjectName("chkDataHub");
#if QT_CONFIG(tooltip)
        chkDataHub->setToolTip(QString::fromUtf8(" Reinstalls Data Hub protocol with a builtin version. This will delete all previous properties if the protocol was already installed.\n"
"\n"
"----\n"
"\n"
" \344\275\277\347\224\250\345\206\205\347\275\256\347\211\210\346\234\254\351\207\215\346\226\260\345\256\211\350\243\205Data Hub\345\215\217\350\256\256\343\200\202\345\246\202\346\236\234\345\215\217\350\256\256\345\267\262\347\273\217\345\256\211\350\243\205\357\274\214\350\277\231\345\260\206\345\210\240\351\231\244\346\211\200\346\234\211\344\273\245\345\211\215\347\232\204\345\261\236\346\200\247\343\200\202"));
#endif // QT_CONFIG(tooltip)
        chkDataHub->setText(QString::fromUtf8("DataHub"));

        verticalLayout_35->addWidget(chkDataHub);

        chkFirmwareVolume = new QCheckBox(frame_chk_8);
        chkFirmwareVolume->setObjectName("chkFirmwareVolume");
#if QT_CONFIG(tooltip)
        chkFirmwareVolume->setToolTip(QString::fromUtf8("Note: Several virtual machines including VMware may have corrupted cursor image in HiDPI mode and thus may also require this setting to be enabled.\n"
"----\n"
"\346\263\250\346\204\217\357\274\232\345\214\205\346\213\254VMware\345\234\250\345\206\205\347\232\204\344\270\200\344\272\233\350\231\232\346\213\237\346\234\272\345\234\250HiDPI\346\250\241\345\274\217\344\270\213\345\217\257\350\203\275\344\274\232\346\215\237\345\235\217\345\205\211\346\240\207\345\233\276\345\203\217\357\274\214\345\233\240\346\255\244\344\271\237\351\234\200\350\246\201\345\220\257\347\224\250\346\255\244\350\256\276\347\275\256\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_35->addWidget(chkFirmwareVolume);

        chkDeviceProperties = new QCheckBox(frame_chk_8);
        chkDeviceProperties->setObjectName("chkDeviceProperties");
#if QT_CONFIG(tooltip)
        chkDeviceProperties->setToolTip(QString::fromUtf8(" Reinstalls Device Property protocol with a builtin version. This will delete all previous properties if it was already installed. This may be used to ensure full compatibility on VMs or legacy Macs.\n"
"----\n"
" \344\275\277\347\224\250\345\206\205\347\275\256\347\211\210\346\234\254\351\207\215\346\226\260\345\256\211\350\243\205\350\256\276\345\244\207\345\261\236\346\200\247\345\215\217\350\256\256\343\200\202\345\246\202\346\236\234\345\267\262\347\273\217\345\256\211\350\243\205\357\274\214\350\277\231\345\260\206\345\210\240\351\231\244\346\211\200\346\234\211\344\273\245\345\211\215\347\232\204\345\261\236\346\200\247\343\200\202\350\277\231\345\217\257\347\224\250\344\272\216\347\241\256\344\277\235\345\234\250\350\231\232\346\213\237\346\234\272\346\210\226\346\227\247\347\211\210 Mac \344\270\212\345\256\214\345\205\250\345\205\274\345\256\271\343\200\202"));
#endif // QT_CONFIG(tooltip)
        chkDeviceProperties->setText(QString::fromUtf8("DeviceProperties"));

        verticalLayout_35->addWidget(chkDeviceProperties);

        chkHashServices = new QCheckBox(frame_chk_8);
        chkHashServices->setObjectName("chkHashServices");
#if QT_CONFIG(tooltip)
        chkHashServices->setToolTip(QString::fromUtf8("Forcibly reinstalls Hash Services protocols with builtin versions. Should be set to true to ensure File Vault 2 compatibility on platforms providing broken SHA-1 hashing. Can be diagnosed by invalid cursor size with UIScale set to 02, in general platforms prior to APTIO V (Haswell and older) are affected.\n"
"----\n"
"\345\274\272\345\210\266\351\207\215\346\226\260\345\256\211\350\243\205\345\206\205\347\275\256\347\211\210\346\234\254\347\232\204\345\223\210\345\270\214\346\234\215\345\212\241\345\215\217\350\256\256\343\200\202\345\272\224\350\257\245\350\256\276\347\275\256\344\270\272 \"true\"\357\274\214\344\273\245\347\241\256\344\277\235File Vault 2\345\234\250\346\217\220\344\276\233\347\240\264\346\215\237\347\232\204SHA-1\345\223\210\345\270\214\347\232\204\345\271\263\345\217\260\344\270\212\347\232\204\345\205\274\345\256\271\346\200\247\343\200\202\345\234\250UIScale\350\256\276\347\275\256\344\270\27202\347\232\204\346\203\205\345\206\265\344\270\213\357\274\214\345\217\257\344\273\245\351\200\232"
                        "\350\277\207\346\227\240\346\225\210\347\232\204\345\205\211\346\240\207\345\244\247\345\260\217\350\277\233\350\241\214\350\257\212\346\226\255\357\274\214\344\270\200\350\210\254APTIO V\344\271\213\345\211\215\347\232\204\345\271\263\345\217\260\357\274\210Haswell\345\217\212\344\273\245\344\270\212\357\274\211\351\203\275\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_35->addWidget(chkHashServices);

        chkOSInfo = new QCheckBox(frame_chk_8);
        chkOSInfo->setObjectName("chkOSInfo");
#if QT_CONFIG(tooltip)
        chkOSInfo->setToolTip(QString::fromUtf8("Forcibly reinstalls OS Info protocol with builtin versions. This protocol is generally used to receive notifications from macOS bootloader, by the firmware or by other applications.\n"
"----\n"
"\345\274\272\345\210\266\351\207\215\346\226\260\345\256\211\350\243\205\345\206\205\347\275\256\347\211\210\346\234\254\347\232\204OS Info\345\215\217\350\256\256\343\200\202\350\257\245\345\215\217\350\256\256\351\200\232\345\270\270\347\224\250\344\272\216\346\216\245\346\224\266\346\235\245\350\207\252macOS\345\274\225\345\257\274\347\250\213\345\272\217\343\200\201\345\233\272\344\273\266\346\210\226\345\205\266\344\273\226\345\272\224\347\224\250\347\250\213\345\272\217\347\232\204\351\200\232\347\237\245\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_35->addWidget(chkOSInfo);

        chkUnicodeCollation = new QCheckBox(frame_chk_8);
        chkUnicodeCollation->setObjectName("chkUnicodeCollation");
#if QT_CONFIG(tooltip)
        chkUnicodeCollation->setToolTip(QString::fromUtf8(" Forcibly reinstalls unicode collation services with builtin version. Should be set to true to ensure UEFI Shell compatibility on platforms providing broken unicode collation. In general legacy Insyde and APTIO platforms on Ivy Bridge and earlier are affected.\n"
"\n"
"----\n"
"\n"
" \345\274\272\345\210\266\351\207\215\346\226\260\345\256\211\350\243\205\345\206\205\347\275\256\347\211\210\346\234\254\347\232\204unicode\346\225\264\347\220\206\346\234\215\345\212\241\343\200\202\345\272\224\350\256\276\344\270\272true\357\274\214\344\273\245\347\241\256\344\277\235UEFI Shell\345\234\250\346\217\220\344\276\233\347\240\264\346\215\237\347\232\204unicode collation\345\271\263\345\217\260\344\270\212\347\232\204\347\233\270\345\256\271\346\200\247\343\200\202\344\270\200\350\210\254\350\200\214\350\250\200\357\274\214Ivy Bridge\346\210\226\346\233\264\346\227\251\347\211\210\346\234\254\347\232\204Insyde\345\222\214APTIO\345\271\263\345\217\260\344\274\232\345\217\227\345\210\260\345\275\261\345\223\215\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_35->addWidget(chkUnicodeCollation);


        gridLayout_81->addWidget(frame_chk_8, 0, 5, 1, 1);

        frame_chk_7 = new QFrame(tabUEFI7);
        frame_chk_7->setObjectName("frame_chk_7");
        frame_chk_7->setFrameShape(QFrame::Shape::NoFrame);
        frame_chk_7->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_27 = new QVBoxLayout(frame_chk_7);
        verticalLayout_27->setSpacing(0);
        verticalLayout_27->setObjectName("verticalLayout_27");
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        chkAppleKeyMap = new QCheckBox(frame_chk_7);
        chkAppleKeyMap->setObjectName("chkAppleKeyMap");
#if QT_CONFIG(tooltip)
        chkAppleKeyMap->setToolTip(QString::fromUtf8(" Reinstalls Apple Key Map protocols with builtin versions.\n"
"----\n"
" \351\207\215\346\226\260\345\256\211\350\243\205\345\206\205\347\275\256\347\211\210\346\234\254\347\232\204 Apple Key Map \345\215\217\350\256\256\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_27->addWidget(chkAppleKeyMap);

        chkAppleRtcRam = new QCheckBox(frame_chk_7);
        chkAppleRtcRam->setObjectName("chkAppleRtcRam");
#if QT_CONFIG(tooltip)
        chkAppleRtcRam->setToolTip(QString::fromUtf8("Reinstalls Apple RTC RAM protocol with builtin version.\n"
"\n"
"----\n"
"\n"
"\351\207\215\346\226\260\345\256\211\350\243\205\345\206\205\347\275\256\347\211\210\346\234\254\347\232\204\350\213\271\346\236\234RTC RAM\345\215\217\350\256\256\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_27->addWidget(chkAppleRtcRam);

        chkAppleSecureBoot = new QCheckBox(frame_chk_7);
        chkAppleSecureBoot->setObjectName("chkAppleSecureBoot");
#if QT_CONFIG(tooltip)
        chkAppleSecureBoot->setToolTip(QString::fromUtf8(" Reinstalls Apple Secure Boot protocol with a builtin version.\n"
"----\n"
" \351\207\215\346\226\260\345\256\211\350\243\205\345\206\205\347\275\256\347\211\210\346\234\254\347\232\204Apple Secure Boot\345\215\217\350\256\256\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_27->addWidget(chkAppleSecureBoot);

        chkAppleSmcIo = new QCheckBox(frame_chk_7);
        chkAppleSmcIo->setObjectName("chkAppleSmcIo");
#if QT_CONFIG(tooltip)
        chkAppleSmcIo->setToolTip(QString::fromUtf8("This protocol replaces legacy VirtualSmc UEFI driver, and is compatible with any SMC kernel extension.\n"
"\n"
"However, in case FakeSMC kernel extension is used, manual NVRAM key variable addition may be needed.\n"
"----\n"
"\350\277\231\344\270\252\345\215\217\350\256\256\345\217\226\344\273\243\344\272\206\344\274\240\347\273\237\347\232\204VirtualSmc UEFI\351\251\261\345\212\250\357\274\214\345\271\266\344\270\224\344\270\216\344\273\273\344\275\225SMC\345\206\205\346\240\270\346\211\251\345\261\225\345\205\274\345\256\271\357\274\214\344\275\206\346\230\257\345\246\202\346\236\234\344\275\277\347\224\250FakeSMC\345\206\205\346\240\270\346\211\251\345\261\225\357\274\214\345\217\257\350\203\275\351\234\200\350\246\201\346\211\213\345\212\250\346\267\273\345\212\240NVRAM\345\217\230\351\207\217\343\200\202\n"
""));
#endif // QT_CONFIG(tooltip)

        verticalLayout_27->addWidget(chkAppleSmcIo);

        chkAppleUserInterfaceTheme = new QCheckBox(frame_chk_7);
        chkAppleUserInterfaceTheme->setObjectName("chkAppleUserInterfaceTheme");
#if QT_CONFIG(tooltip)
        chkAppleUserInterfaceTheme->setToolTip(QString::fromUtf8("Reinstalls Apple User Interface Theme protocol with a builtin version.\n"
"----\n"
"\351\207\215\346\226\260\345\256\211\350\243\205\345\206\205\347\275\256\347\211\210\346\234\254\347\232\204\350\213\271\346\236\234\347\224\250\346\210\267\347\225\214\351\235\242\344\270\273\351\242\230\345\215\217\350\256\256\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_27->addWidget(chkAppleUserInterfaceTheme);

        chkAppleEg2Info = new QCheckBox(frame_chk_7);
        chkAppleEg2Info->setObjectName("chkAppleEg2Info");
#if QT_CONFIG(tooltip)
        chkAppleEg2Info->setToolTip(QString::fromUtf8("Type: plist boolean\n"
"\n"
"Description: Replaces the Apple EFI Graphics 2 protocol with a builtin version.\n"
"\n"
"Note: This protocol allows newer EfiBoot versions (at least 10.15) to expose screen rotation to macOS. Refer to ForceDisplayRotationInEFI variable description on how to set screen rotation angle.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\346\217\217\350\277\260\357\274\232\347\224\250\344\270\200\344\270\252\345\206\205\347\275\256\347\232\204\347\211\210\346\234\254\345\217\226\344\273\243\350\213\271\346\236\234EFI\345\233\276\345\275\2422\345\215\217\350\256\256\343\200\202\n"
"\n"
"\346\263\250\346\204\217: \350\277\231\344\270\252\345\215\217\350\256\256\345\205\201\350\256\270\350\276\203\346\226\260\347\232\204EfiBoot\347\211\210\346\234\254\357\274\210\350\207\263\345\260\22110.15\357\274\211\345\220\221macOS\346\232\264\351\234\262\345\261\217\345\271\225\346\227\213\350\275\254\343\200\202\350\257\267\345\217\202\350\200\203Fo"
                        "rceDisplayRotationInEFI\345\217\230\351\207\217\346\217\217\350\277\260\345\246\202\344\275\225\350\256\276\347\275\256\345\261\217\345\271\225\346\227\213\350\275\254\350\247\222\345\272\246\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_27->addWidget(chkAppleEg2Info);


        gridLayout_81->addWidget(frame_chk_7, 0, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_81->addItem(horizontalSpacer_8, 0, 6, 1, 1);

        tabUEFI->addTab(tabUEFI7, QString());
        tabUEFI8 = new QWidget();
        tabUEFI8->setObjectName("tabUEFI8");
        gridLayout_27 = new QGridLayout(tabUEFI8);
        gridLayout_27->setObjectName("gridLayout_27");
        frame = new QFrame(tabUEFI8);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(16777215, 45));
        frame->setFrameShape(QFrame::Shape::NoFrame);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setObjectName("horizontalLayout_47");
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_47->addItem(horizontalSpacer_16);

        label_125 = new QLabel(frame);
        label_125->setObjectName("label_125");
        label_125->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_47->addWidget(label_125);

        comboBoxUEFI = new QComboBox(frame);
        comboBoxUEFI->setObjectName("comboBoxUEFI");
        comboBoxUEFI->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        comboBoxUEFI->setEditable(false);

        horizontalLayout_47->addWidget(comboBoxUEFI);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_47->addItem(horizontalSpacer_17);


        gridLayout_2->addLayout(horizontalLayout_47, 0, 0, 1, 1);


        gridLayout_27->addWidget(frame, 0, 0, 1, 2);

        frame_chk_6 = new QFrame(tabUEFI8);
        frame_chk_6->setObjectName("frame_chk_6");
        frame_chk_6->setMinimumSize(QSize(0, 0));
        frame_chk_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_chk_6->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout = new QVBoxLayout(frame_chk_6);
        verticalLayout->setObjectName("verticalLayout");
        chkEnableVectorAcceleration = new QCheckBox(frame_chk_6);
        chkEnableVectorAcceleration->setObjectName("chkEnableVectorAcceleration");
#if QT_CONFIG(tooltip)
        chkEnableVectorAcceleration->setToolTip(QString::fromUtf8("Type: plist boolean\n"
"\n"
"Description: Enable AVX vector acceleration of SHA-512 and SHA-384 hashing algorithms.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\350\257\264\346\230\216\357\274\232\345\220\257\347\224\250SHA-512\345\222\214SHA-384\345\223\210\345\270\214\347\256\227\346\263\225\347\232\204AVX\347\237\242\351\207\217\345\212\240\351\200\237\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout->addWidget(chkEnableVectorAcceleration);

        chkDisableSecurityPolicy = new QCheckBox(frame_chk_6);
        chkDisableSecurityPolicy->setObjectName("chkDisableSecurityPolicy");
#if QT_CONFIG(tooltip)
        chkDisableSecurityPolicy->setToolTip(QString::fromUtf8("Note: This setting disables various security features of the firmware, defeating the purpose of any kind of Secure Boot. Do NOT enable if you use UEFI Secure Boot.\n"
"----\n"
"\346\263\250\346\204\217\357\274\232\346\255\244\350\256\276\347\275\256\344\274\232\347\246\201\347\224\250\345\233\272\344\273\266\347\232\204\345\220\204\347\247\215\345\256\211\345\205\250\345\212\237\350\203\275\357\274\214\344\273\216\350\200\214\345\244\261\345\216\273\344\273\273\344\275\225\344\270\200\347\247\215\345\256\211\345\205\250\345\220\257\345\212\250\347\232\204\347\233\256\347\232\204\343\200\202\345\246\202\346\236\234\346\202\250\344\275\277\347\224\250UEFI\345\256\211\345\205\250\345\220\257\345\212\250\357\274\214\350\257\267\345\213\277\345\220\257\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout->addWidget(chkDisableSecurityPolicy);

        chkActivateHpetSupport = new QCheckBox(frame_chk_6);
        chkActivateHpetSupport->setObjectName("chkActivateHpetSupport");
#if QT_CONFIG(tooltip)
        chkActivateHpetSupport->setToolTip(QString::fromUtf8("Older boards like ICH6 may not always have HPET setting in the firmware preferences, this option tries to force enable it.\n"
"----\n"
"\346\227\247\347\232\204\346\235\277\345\255\220\357\274\214\345\246\202ICH6\357\274\214\345\217\257\350\203\275\345\271\266\344\270\215\346\200\273\346\230\257\346\234\211HPET\350\256\276\347\275\256\345\234\250\345\233\272\344\273\266\351\246\226\351\200\211\351\241\271\344\270\255\357\274\214\350\277\231\344\270\252\351\200\211\351\241\271\350\257\225\345\233\276\345\274\272\345\210\266\345\220\257\347\224\250\345\256\203\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout->addWidget(chkActivateHpetSupport);

        chkEnableVmx = new QCheckBox(frame_chk_6);
        chkEnableVmx->setObjectName("chkEnableVmx");

        verticalLayout->addWidget(chkEnableVmx);

        chkForceOcWriteFlash = new QCheckBox(frame_chk_6);
        chkForceOcWriteFlash->setObjectName("chkForceOcWriteFlash");

        verticalLayout->addWidget(chkForceOcWriteFlash);

        chkForgeUefiSupport = new QCheckBox(frame_chk_6);
        chkForgeUefiSupport->setObjectName("chkForgeUefiSupport");
#if QT_CONFIG(tooltip)
        chkForgeUefiSupport->setToolTip(QString::fromUtf8("Type: plist boolean\n"
"\n"
"Description: Implement partial UEFI 2.x support on EFI 1.x firmware.\n"
"\n"
"This setting allows running some software written for UEFI 2.x firmware like NVIDIA GOP Option ROMs on hardware with older EFI 1.x firmware like MacPro5,1.\n"
"\n"
"----\n"
"\n"
"\347\261\273\345\236\213\357\274\232plist boolean\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\234\250EFI 1.x\345\233\272\344\273\266\344\270\212\345\256\236\347\216\260\351\203\250\345\210\206UEFI 2.x\346\224\257\346\214\201\343\200\202\n"
"\n"
"\346\255\244\351\241\271\350\256\276\347\275\256\345\205\201\350\256\270\345\234\250MacPro5,1\347\255\211\346\227\247\347\232\204EFI 1.x\345\233\272\344\273\266\344\270\212\350\277\220\350\241\214\344\270\200\344\272\233\344\270\272UEFI 2.x\345\233\272\344\273\266\347\274\226\345\206\231\347\232\204\350\275\257\344\273\266\357\274\214\345\246\202NVIDIA GOP Option ROM\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout->addWidget(chkForgeUefiSupport);

        chkIgnoreInvalidFlexRatio = new QCheckBox(frame_chk_6);
        chkIgnoreInvalidFlexRatio->setObjectName("chkIgnoreInvalidFlexRatio");
#if QT_CONFIG(tooltip)
        chkIgnoreInvalidFlexRatio->setToolTip(QString::fromUtf8("Note: While the option is not expected to harm unaffected firmware, its use is recommended only when specifically required.\n"
"----\n"
"\346\263\250\346\204\217\357\274\232\350\231\275\347\204\266\351\242\204\350\256\241\350\257\245\351\200\211\351\241\271\344\270\215\344\274\232\346\215\237\345\256\263\346\234\252\345\217\227\345\275\261\345\223\215\347\232\204\345\233\272\344\273\266\357\274\214\344\275\206\345\217\252\345\273\272\350\256\256\345\234\250\347\211\271\345\210\253\351\234\200\350\246\201\346\227\266\344\275\277\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout->addWidget(chkIgnoreInvalidFlexRatio);

        chkReloadOptionRoms = new QCheckBox(frame_chk_6);
        chkReloadOptionRoms->setObjectName("chkReloadOptionRoms");
#if QT_CONFIG(tooltip)
        chkReloadOptionRoms->setToolTip(QString::fromUtf8("Type: plist boolean\n"
"\n"
"Description: Query PCI devices and reload their Option ROMs if available.\n"
"\n"
"For example, this option allows reloading NVIDIA GOP Option ROM on older Macs after the firmware version is upgraded via ForgeUefiSupport.\n"
"\n"
"----\n"
"\n"
"\347\261\273\345\236\213\357\274\232plist boolean\n"
"\n"
"\346\217\217\350\277\260\357\274\232\346\237\245\350\257\242PCI\350\256\276\345\244\207\345\271\266\351\207\215\346\226\260\345\212\240\350\275\275\345\205\266\345\217\257\347\224\250\347\232\204Option ROM\343\200\202\n"
"\n"
"\344\276\213\345\246\202\357\274\214\345\234\250\351\200\232\350\277\207ForgeUefiSupport\345\215\207\347\272\247\345\233\272\344\273\266\347\211\210\346\234\254\345\220\216\357\274\214\350\257\245\351\200\211\351\241\271\345\205\201\350\256\270\345\234\250\346\227\247\347\232\204Mac\344\270\212\351\207\215\346\226\260\345\212\240\350\275\275NVIDIA GOP Option ROM\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout->addWidget(chkReloadOptionRoms);

        chkReleaseUsbOwnership = new QCheckBox(frame_chk_6);
        chkReleaseUsbOwnership->setObjectName("chkReleaseUsbOwnership");
#if QT_CONFIG(tooltip)
        chkReleaseUsbOwnership->setToolTip(QString::fromUtf8("Attempt to detach USB controller ownership from the firmware driver. While most firmwares manage to properly do that, or at least have an option for, select firmwares do not. As a result, operating system may freeze upon boot. Not recommended unless required.\n"
"----\n"
"\345\260\235\350\257\225\345\260\206USB\346\216\247\345\210\266\345\231\250\347\232\204\346\211\200\346\234\211\346\235\203\344\273\216\345\233\272\344\273\266\351\251\261\345\212\250\347\250\213\345\272\217\344\270\255\345\210\206\347\246\273\345\207\272\346\235\245\343\200\202\350\231\275\347\204\266\345\244\247\345\244\232\346\225\260\345\233\272\344\273\266\351\203\275\350\203\275\346\255\243\347\241\256\345\234\260\345\201\232\345\210\260\350\277\231\344\270\200\347\202\271\357\274\214\346\210\226\350\200\205\350\207\263\345\260\221\346\234\211\344\270\200\344\270\252\351\200\211\351\241\271\357\274\214\344\275\206\346\234\211\344\272\233\345\233\272\344\273\266\345\215\264\345\201\232\344\270\215\345\210\260\343\200\202\345\233\240\346\255"
                        "\244\357\274\214\346\223\215\344\275\234\347\263\273\347\273\237\345\217\257\350\203\275\345\234\250\345\220\257\345\212\250\346\227\266\345\206\273\347\273\223\343\200\202\351\231\244\351\235\236\351\234\200\350\246\201\357\274\214\345\220\246\345\210\231\344\270\215\345\273\272\350\256\256\344\275\277\347\224\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout->addWidget(chkReleaseUsbOwnership);

        chkRequestBootVarRouting = new QCheckBox(frame_chk_6);
        chkRequestBootVarRouting->setObjectName("chkRequestBootVarRouting");
#if QT_CONFIG(tooltip)
        chkRequestBootVarRouting->setToolTip(QString::fromUtf8("This quirk requires OC_FIRMWARE_RUNTIME protocol implemented in OpenRuntime.efi. The quirk lets default boot entry preservation at times when firmwares delete incompatible boot entries. Simply said, you are required to enable this quirk to be able to reliably use Startup Disk preference pane in a firmware that is not compatible with macOS boot entries by design.\n"
"----\n"
"\350\257\245\351\200\211\351\241\271\351\234\200\350\246\201OC_FIRMWARE_RUNTIME\345\215\217\350\256\256\345\234\250OpenRuntime.efi\344\270\255\345\256\236\347\216\260\343\200\202\345\275\223\345\233\272\344\273\266\345\210\240\351\231\244\344\270\215\345\205\274\345\256\271\347\232\204\345\220\257\345\212\250\351\241\271\346\227\266\357\274\214\350\257\245\351\200\211\351\241\271\345\217\257\344\273\245\350\256\251\351\273\230\350\256\244\347\232\204\345\220\257\345\212\250\351\241\271\344\277\235\345\255\230\343\200\202\347\256\200\345\215\225\347\232\204\350\257\264\357\274\214\344\275\240\351\234\200\350\246\201\345\220\257\347\224\250\350"
                        "\277\231\344\270\252\351\200\211\351\241\271\357\274\214\346\211\215\350\203\275\345\234\250\350\256\276\350\256\241\344\270\212\344\270\216macOS\345\220\257\345\212\250\351\241\271\344\270\215\345\205\274\345\256\271\347\232\204\345\233\272\344\273\266\344\270\255\345\217\257\351\235\240\347\232\204\344\275\277\347\224\250\345\220\257\345\212\250\347\233\230\345\201\217\345\245\275\351\235\242\346\235\277\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout->addWidget(chkRequestBootVarRouting);

        chkUnblockFsConnect = new QCheckBox(frame_chk_6);
        chkUnblockFsConnect->setObjectName("chkUnblockFsConnect");
#if QT_CONFIG(tooltip)
        chkUnblockFsConnect->setToolTip(QString::fromUtf8("Note: The quirk is mostly relevant for select HP laptops with no drives listed.\n"
"----\n"
"\346\263\250\346\204\217:\350\257\245\351\200\211\351\241\271\344\270\273\350\246\201\344\270\216\346\234\252\345\210\227\345\207\272\351\251\261\345\212\250\345\231\250\347\232\204\351\203\250\345\210\206\346\203\240\346\231\256\347\254\224\350\256\260\346\234\254\347\224\265\350\204\221\346\234\211\345\205\263\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout->addWidget(chkUnblockFsConnect);


        gridLayout_27->addWidget(frame_chk_6, 1, 0, 1, 1);

        frame_edit_5 = new QFrame(tabUEFI8);
        frame_edit_5->setObjectName("frame_edit_5");
        frame_edit_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_edit_5->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_25 = new QVBoxLayout(frame_edit_5);
        verticalLayout_25->setObjectName("verticalLayout_25");
        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName("horizontalLayout_33");
        label_28 = new QLabel(frame_edit_5);
        label_28->setObjectName("label_28");
#if QT_CONFIG(tooltip)
        label_28->setToolTip(QString::fromUtf8("This is a very ugly quirk to circumvent \"Still waiting for root device\" message on select APTIO IV firmwares,namely ASUS Z87-Pro, when using FileVault 2 in particular. \n"
"\n"
"It seems that for some reason they execute code in parallel to EXIT_BOOT_SERVICES, which results in SATA controller being inaccessible from macOS. \n"
"\n"
"A better approach should be found in some future. Expect 3-5 seconds to be enough in case the quirk is needed.\n"
"----\n"
"\350\277\231\346\230\257\344\270\200\344\270\252\351\235\236\345\270\270\347\256\200\351\231\213\347\232\204\351\200\211\351\241\271\357\274\214\344\273\245\351\201\277\345\205\215\345\234\250\351\200\211\346\213\251APTIO 4\345\233\272\344\273\266\357\274\214\345\215\263\345\215\216\347\241\225Z87-Pro\344\270\212\345\207\272\347\216\260\342\200\234\344\273\215\345\234\250\347\255\211\345\276\205\346\240\271\350\256\276\345\244\207\342\200\235\347\232\204\346\266\210\346\201\257\357\274\214\347\211\271\345\210\253\346\230\257\345\234\250\344\275\277\347\224\250"
                        "FileVault 2\346\227\266\343\200\202\n"
"\n"
"\344\274\274\344\271\216\345\207\272\344\272\216\346\237\220\347\247\215\345\216\237\345\233\240\357\274\214\345\256\203\344\273\254\345\271\266\350\241\214\346\211\247\350\241\214\351\200\200\345\207\272_\345\220\257\345\212\250_\346\234\215\345\212\241\347\232\204\344\273\243\347\240\201\357\274\214\350\277\231\345\257\274\350\207\264SATA\346\216\247\345\210\266\345\231\250\346\227\240\346\263\225\344\273\216macOS\350\256\277\351\227\256\343\200\202\n"
"\n"
"\345\260\206\346\235\245\345\272\224\350\257\245\344\274\232\346\211\276\345\210\260\346\233\264\345\245\275\347\232\204\346\226\271\346\263\225\357\274\214\347\233\256\345\211\215\351\207\207\347\224\250\345\256\203\344\273\245\351\230\262\344\270\215\346\227\266\344\271\213\351\234\200\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_33->addWidget(label_28);

        editIntExitBootServicesDelay = new QLineEdit(frame_edit_5);
        editIntExitBootServicesDelay->setObjectName("editIntExitBootServicesDelay");
        editIntExitBootServicesDelay->setMinimumSize(QSize(200, 0));
        editIntExitBootServicesDelay->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_33->addWidget(editIntExitBootServicesDelay);


        verticalLayout_25->addLayout(horizontalLayout_33);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName("horizontalLayout_35");
        label_115 = new QLabel(frame_edit_5);
        label_115->setObjectName("label_115");

        horizontalLayout_35->addWidget(label_115);

        editIntResizeGpuBars = new QLineEdit(frame_edit_5);
        editIntResizeGpuBars->setObjectName("editIntResizeGpuBars");
        editIntResizeGpuBars->setMinimumSize(QSize(200, 0));
        editIntResizeGpuBars->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_35->addWidget(editIntResizeGpuBars);


        verticalLayout_25->addLayout(horizontalLayout_35);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName("horizontalLayout_39");
        label_29 = new QLabel(frame_edit_5);
        label_29->setObjectName("label_29");
#if QT_CONFIG(tooltip)
        label_29->setToolTip(QString::fromUtf8("The primary purpose of this quirk is to enable early bootstrap TSC synchronisation on some server and laptop models when running a debug XNU kernel. For the debug kernel the TSC needs to be kept in sync across the cores before any kext could kick in rendering all other solutions problematic. The timeout is specified in microseconds and depends on the amount of cores present on the platform, the recommended starting value is 500000.\n"
"\n"
"This is an experimental quirk, which should only be used for the aforementioned problem. In all other cases the quirk may render the operating system unstable and is not recommended. The recommended solution in the other cases is to install a kernel driver like VoodooTSCSync, TSCAdjustReset, or CpuTscSync (a more specialised variant of VoodooTSCSync for newer laptops).\n"
"\n"
"Note: The reason this quirk cannot replace the kernel driver is because it cannot operate in ACPI S3 mode (sleep wake) and because the UEFI firmwares provide very limited multicore support preventing"
                        " the precise update of the MSR registers.\n"
"----\n"
"\350\257\245\351\200\211\351\241\271\347\232\204\344\270\273\350\246\201\347\233\256\347\232\204\346\230\257\345\234\250\350\277\220\350\241\214\350\260\203\350\257\225XNU\345\206\205\346\240\270\346\227\266\357\274\214\345\234\250\344\270\200\344\272\233\346\234\215\345\212\241\345\231\250\345\222\214\347\254\224\350\256\260\346\234\254\345\236\213\345\217\267\344\270\212\345\256\236\347\216\260\346\227\251\346\234\237\347\232\204\345\274\225\345\257\274TSC\345\220\214\346\255\245\343\200\202\345\257\271\344\272\216\350\260\203\350\257\225\345\206\205\346\240\270\357\274\214\345\234\250\344\273\273\344\275\225kext\345\220\257\345\212\250\344\271\213\345\211\215\357\274\214TSC\351\234\200\350\246\201\345\234\250\345\220\204\344\270\252\345\206\205\346\240\270\344\271\213\351\227\264\344\277\235\346\214\201\345\220\214\346\255\245\357\274\214\344\273\216\350\200\214\344\275\277\346\211\200\346\234\211\345\205\266\344\273\226\350\247\243\345\206\263\346\226\271"
                        "\346\241\210\345\207\272\347\216\260\351\227\256\351\242\230\343\200\202\350\266\205\346\227\266\346\227\266\351\227\264\344\273\245\345\276\256\347\247\222\344\270\272\345\215\225\344\275\215\357\274\214\345\217\226\345\206\263\344\272\216\345\271\263\345\217\260\344\270\212\347\232\204\346\240\270\345\277\203\346\225\260\351\207\217\357\274\214\346\216\250\350\215\220\347\232\204\350\265\267\345\247\213\345\200\274\346\230\257500000\343\200\202\n"
"\n"
"\350\277\231\346\230\257\344\270\200\344\270\252\345\256\236\351\252\214\346\200\247\347\232\204\351\200\211\351\241\271\357\274\214\345\217\252\350\203\275\347\224\250\344\272\216\344\270\212\350\277\260\351\227\256\351\242\230\343\200\202\345\234\250\346\211\200\346\234\211\345\205\266\344\273\226\346\203\205\345\206\265\344\270\213\357\274\214\350\257\245\351\200\211\351\241\271\345\217\257\350\203\275\344\274\232\344\275\277\346\223\215\344\275\234\347\263\273\347\273\237\344\270\215\347\250\263\345\256\232\357\274\214\344\270\215\345\273\272\350\256\256\344"
                        "\275\277\347\224\250\343\200\202\345\234\250\345\205\266\344\273\226\346\203\205\345\206\265\344\270\213\357\274\214\346\216\250\350\215\220\347\232\204\350\247\243\345\206\263\346\226\271\346\241\210\346\230\257\345\256\211\350\243\205\344\270\200\344\270\252\345\206\205\346\240\270\351\251\261\345\212\250\357\274\214\346\257\224\345\246\202VoodooTSCSync\343\200\201TSCAdjustReset\346\210\226CpuTscSync\357\274\210VoodooTSCSync\347\232\204\344\270\200\344\270\252\346\233\264\344\270\223\344\270\232\347\232\204\345\217\230\347\247\215\357\274\214\351\200\202\347\224\250\344\272\216\350\276\203\346\226\260\347\232\204\347\254\224\350\256\260\346\234\254\347\224\265\350\204\221\357\274\211\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\257\245\351\200\211\351\241\271\344\270\215\350\203\275\345\217\226\344\273\243\345\206\205\346\240\270\351\251\261\345\212\250\347\232\204\345\216\237\345\233\240\346\230\257\345\256\203\344\270\215\350\203\275\345\234\250ACPI S3\346\250\241\345\274\217\344\270\213\350"
                        "\277\220\350\241\214\357\274\210\347\235\241\347\234\240\345\224\244\351\206\222\357\274\211\357\274\214\350\200\214\344\270\224UEFI\345\233\272\344\273\266\346\217\220\344\276\233\347\232\204\345\244\232\346\240\270\346\224\257\346\214\201\351\235\236\345\270\270\346\234\211\351\231\220\357\274\214\346\227\240\346\263\225\347\262\276\347\241\256\346\233\264\346\226\260MSR\345\257\204\345\255\230\345\231\250\343\200\202"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_39->addWidget(label_29);

        editIntTscSyncTimeout = new QLineEdit(frame_edit_5);
        editIntTscSyncTimeout->setObjectName("editIntTscSyncTimeout");
        editIntTscSyncTimeout->setMinimumSize(QSize(200, 0));
        editIntTscSyncTimeout->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_39->addWidget(editIntTscSyncTimeout);


        verticalLayout_25->addLayout(horizontalLayout_39);


        gridLayout_27->addWidget(frame_edit_5, 1, 1, 1, 1);

        tabUEFI->addTab(tabUEFI8, QString());
        tabUEFI9 = new QWidget();
        tabUEFI9->setObjectName("tabUEFI9");
        gridLayout_30 = new QGridLayout(tabUEFI9);
        gridLayout_30->setObjectName("gridLayout_30");
        table_uefi_ReservedMemory = new QTableWidget(tabUEFI9);
        if (table_uefi_ReservedMemory->columnCount() < 5)
            table_uefi_ReservedMemory->setColumnCount(5);
        table_uefi_ReservedMemory->setObjectName("table_uefi_ReservedMemory");
        table_uefi_ReservedMemory->setColumnCount(5);

        gridLayout_30->addWidget(table_uefi_ReservedMemory, 0, 0, 1, 1);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName("verticalLayout_19");
        btnUEFIRM_Add = new QToolButton(tabUEFI9);
        btnUEFIRM_Add->setObjectName("btnUEFIRM_Add");
        btnUEFIRM_Add->setMaximumSize(QSize(20, 16777215));
        btnUEFIRM_Add->setIconSize(QSize(20, 20));

        verticalLayout_19->addWidget(btnUEFIRM_Add);

        btnUEFIRM_Del = new QToolButton(tabUEFI9);
        btnUEFIRM_Del->setObjectName("btnUEFIRM_Del");
        btnUEFIRM_Del->setMaximumSize(QSize(20, 16777215));
        btnUEFIRM_Del->setIconSize(QSize(20, 20));

        verticalLayout_19->addWidget(btnUEFIRM_Del);


        gridLayout_30->addLayout(verticalLayout_19, 0, 1, 1, 1);

        tabUEFI->addTab(tabUEFI9, QString());
        tabUEFI10 = new QWidget();
        tabUEFI10->setObjectName("tabUEFI10");
        horizontalLayout_108 = new QHBoxLayout(tabUEFI10);
        horizontalLayout_108->setObjectName("horizontalLayout_108");
        table_uefi_Unload = new QTableWidget(tabUEFI10);
        if (table_uefi_Unload->columnCount() < 1)
            table_uefi_Unload->setColumnCount(1);
        table_uefi_Unload->setObjectName("table_uefi_Unload");
        table_uefi_Unload->setColumnCount(1);

        horizontalLayout_108->addWidget(table_uefi_Unload);

        verticalLayout_76 = new QVBoxLayout();
        verticalLayout_76->setObjectName("verticalLayout_76");
        btnUEFIUnload_Add = new QToolButton(tabUEFI10);
        btnUEFIUnload_Add->setObjectName("btnUEFIUnload_Add");
        btnUEFIUnload_Add->setMaximumSize(QSize(20, 16777215));
        btnUEFIUnload_Add->setIconSize(QSize(20, 20));

        verticalLayout_76->addWidget(btnUEFIUnload_Add);

        btnUEFIUnload_Del = new QToolButton(tabUEFI10);
        btnUEFIUnload_Del->setObjectName("btnUEFIUnload_Del");
        btnUEFIUnload_Del->setMaximumSize(QSize(20, 16777215));
        btnUEFIUnload_Del->setIconSize(QSize(20, 20));

        verticalLayout_76->addWidget(btnUEFIUnload_Del);


        horizontalLayout_108->addLayout(verticalLayout_76);

        tabUEFI->addTab(tabUEFI10, QString());

        gridLayout_47->addWidget(tabUEFI, 0, 0, 1, 1);

        gboxUEFI = new QGroupBox(tab_8);
        gboxUEFI->setObjectName("gboxUEFI");
        gridLayout_35 = new QGridLayout(gboxUEFI);
        gridLayout_35->setObjectName("gridLayout_35");
        frame_chk_20 = new QFrame(gboxUEFI);
        frame_chk_20->setObjectName("frame_chk_20");
        frame_chk_20->setFrameShape(QFrame::Shape::NoFrame);
        frame_chk_20->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_56 = new QVBoxLayout(frame_chk_20);
        verticalLayout_56->setObjectName("verticalLayout_56");
        chkConnectDrivers = new QCheckBox(frame_chk_20);
        chkConnectDrivers->setObjectName("chkConnectDrivers");
#if QT_CONFIG(tooltip)
        chkConnectDrivers->setToolTip(QString::fromUtf8("This option is useful for loading drivers following UEFI driver model as they may not start by themselves.\n"
"\n"
"Examples of such drivers are filesystem or audio drivers. While effective, this option may not be necessary for drivers performing automatic connection, and may slightly  slowdown the boot.\n"
"\n"
"Note: Some firmwares, made by Apple in particular, only connect the boot drive to speedup the boot process.\n"
"\n"
"Enable this option to be able to see all the boot options when having multiple drives.\n"
"\n"
"----\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\345\257\271\344\272\216\345\212\240\350\275\275\351\201\265\345\276\252UEFI\351\251\261\345\212\250\346\250\241\345\274\217\347\232\204\351\251\261\345\212\250\345\276\210\346\234\211\347\224\250\357\274\214\345\233\240\344\270\272\345\256\203\344\273\254\345\217\257\350\203\275\346\227\240\346\263\225\350\207\252\350\241\214\345\220\257\345\212\250\343\200\202\n"
"\n"
"\350\277\231\347\261\273\351\251\261\345\212\250\347\250\213\345"
                        "\272\217\347\232\204\344\276\213\345\255\220\346\230\257\346\226\207\344\273\266\347\263\273\347\273\237\346\210\226\351\237\263\351\242\221\351\251\261\345\212\250\347\250\213\345\272\217\343\200\202\350\231\275\347\204\266\350\277\231\344\270\252\351\200\211\351\241\271\345\276\210\346\234\211\346\225\210\357\274\214\344\275\206\345\257\271\344\272\216\346\211\247\350\241\214\350\207\252\345\212\250\350\277\236\346\216\245\347\232\204\351\251\261\345\212\250\347\250\213\345\272\217\346\235\245\350\257\264\357\274\214\350\277\231\344\270\252\351\200\211\351\241\271\345\217\257\350\203\275\344\270\215\346\230\257\345\277\205\351\234\200\347\232\204\357\274\214\350\200\214\344\270\224\345\217\257\350\203\275\344\274\232\347\250\215\345\276\256\345\207\217\346\205\242\345\220\257\345\212\250\351\200\237\345\272\246\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\344\270\200\344\272\233\345\233\272\344\273\266\357\274\214\347\211\271\345\210\253\346\230\257\350\213\271\346\236\234\345\205\254\345\217\270"
                        "\345\210\266\351\200\240\347\232\204\345\233\272\344\273\266\357\274\214\345\217\252\350\277\236\346\216\245\345\220\257\345\212\250\351\251\261\345\212\250\345\231\250\344\273\245\345\212\240\345\277\253\345\220\257\345\212\250\350\277\207\347\250\213\343\200\202\n"
"\n"
"\345\220\257\347\224\250\346\255\244\351\200\211\351\241\271\357\274\214\344\273\245\344\276\277\345\234\250\346\234\211\345\244\232\344\270\252\351\251\261\345\212\250\345\231\250\346\227\266\350\203\275\345\244\237\347\234\213\345\210\260\346\211\200\346\234\211\347\232\204\345\220\257\345\212\250\351\200\211\351\241\271\343\200\202"));
#endif // QT_CONFIG(tooltip)

        verticalLayout_56->addWidget(chkConnectDrivers);


        gridLayout_35->addWidget(frame_chk_20, 0, 0, 1, 1);

        frame_edit_13 = new QFrame(gboxUEFI);
        frame_edit_13->setObjectName("frame_edit_13");
        frame_edit_13->setFrameShape(QFrame::Shape::NoFrame);
        frame_edit_13->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_58 = new QVBoxLayout(frame_edit_13);
        verticalLayout_58->setObjectName("verticalLayout_58");
        verticalLayout_57 = new QVBoxLayout();
        verticalLayout_57->setObjectName("verticalLayout_57");

        verticalLayout_58->addLayout(verticalLayout_57);


        gridLayout_35->addWidget(frame_edit_13, 0, 1, 1, 1);


        gridLayout_47->addWidget(gboxUEFI, 1, 0, 1, 1);

        tabTotal->addTab(tab_8, QString());
        tabTotal->setTabText(tabTotal->indexOf(tab_8), QString::fromUtf8("UEFI"));
        tab_42 = new QWidget();
        tab_42->setObjectName("tab_42");
        gridLayout_69 = new QGridLayout(tab_42);
        gridLayout_69->setObjectName("gridLayout_69");
        listHardwareInfo = new QListWidget(tab_42);
        listHardwareInfo->setObjectName("listHardwareInfo");

        gridLayout_69->addWidget(listHardwareInfo, 0, 0, 1, 1);

        btnGenerateFromHardware = new QToolButton(tab_42);
        btnGenerateFromHardware->setObjectName("btnGenerateFromHardware");

        gridLayout_69->addWidget(btnGenerateFromHardware, 1, 0, 1, 1);

        tabTotal->addTab(tab_42, QString());
        tabTotal->setTabText(tabTotal->indexOf(tab_42), QString::fromUtf8("Hardware Information"));

        gridLayout_31->addWidget(tabTotal, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1121, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setMinimumSize(QSize(0, 0));
        toolBar->setStyleSheet(QString::fromUtf8("/*QToolBar\n"
"{\n"
"    background-color: rgb(245, 240, 248);\n"
"	border: none;\n"
"	padding: 1px;\n"
"}\n"
"QToolBar::separator {\n"
"    width: 0px;\n"
"    background-color: #222222;\n"
"}*/\n"
"\n"
"/*QToolBar {border:none;background-color: rgb(212, 212, 212);}*/\n"
"\n"
"QToolBar {border:none;}"));
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::ToolBarArea::NoToolBarArea);
        toolBar->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonIconOnly);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNewWindow);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpen_Directory);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionNew_Key_Field);
        menuFile->addSeparator();
        menuFile->addAction(actionPreferences);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuTools->addAction(actionDEBUG);
        menuTools->addAction(actionOpenCore_DEV);
        menuTools->addSeparator();
        menuTools->addAction(actionUpgrade_OC);
        menuTools->addAction(actionOcvalidate);
        menuTools->addSeparator();
        menuTools->addAction(actionDatabase);
        menuTools->addAction(actionGenerateEFI);
        menuTools->addSeparator();
        menuTools->addAction(actionInitDatabaseLinux);
        menuTools->addAction(actionOpen_database_directory);
        menuTools->addAction(actionEdit_Presets);
        menuTools->addSeparator();
        menuTools->addAction(actionMountEsp);
        menuTools->addAction(actionBackup_EFI);
        menuTools->addSeparator();
        menuTools->addAction(btnExportMaster);
        menuTools->addAction(btnImportMaster);
        menuTools->addSeparator();
        menuTools->addAction(actionFind);
        menuTools->addAction(actionGo_to_the_previous);
        menuTools->addAction(actionGo_to_the_next);
        menuTools->addSeparator();
        menuTools->addAction(actionMove_Up);
        menuTools->addAction(actionMove_Down);
        menuTools->addAction(actionAdd);
        menuTools->addAction(actionDelete);
        menuTools->addSeparator();
        menuTools->addAction(actionPlist_editor);
        menuTools->addAction(actionDSDT_SSDT_editor);
        menuHelp->addAction(actionOCAuxiliaryToolsDoc);
        menuHelp->addAction(actionDocumentation);
        menuHelp->addSeparator();
        menuHelp->addAction(btnHelp);
        menuHelp->addAction(actionDifferences);
        menuHelp->addAction(actionOpenCoreChineseDoc);
        menuHelp->addSeparator();
        menuHelp->addAction(actionOpenCore);
        menuHelp->addAction(actionOpenCore_Factory);
        menuHelp->addAction(actionOpenCore_Forum);
        menuHelp->addAction(actionOpenCanopyIcons);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAutoChkUpdate);
        menuHelp->addAction(btnCheckUpdate);
        menuHelp->addAction(actionLatest_Release);
        menuHelp->addAction(actionOnline_Download_Updates);
        menuHelp->addSeparator();
        menuHelp->addAction(actionBug_Report);
        menuHelp->addAction(actionDiscussion_Forum);
        menuHelp->addAction(actionAbout_2);

        retranslateUi(MainWindow);

        tabTotal->setCurrentIndex(7);
        tabACPI->setCurrentIndex(0);
        tabBooter->setCurrentIndex(2);
        tabDP->setCurrentIndex(1);
        tabKernel->setCurrentIndex(6);
        tabMisc->setCurrentIndex(6);
        tabNVRAM->setCurrentIndex(2);
        tabPlatformInfo->setCurrentIndex(2);
        tabUEFI->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QString());
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As...", nullptr));
        actionAbout_2->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionOpenCore_Forum->setText(QCoreApplication::translate("MainWindow", "OpenCore Forum", nullptr));
        actionOpenCore_Factory->setText(QCoreApplication::translate("MainWindow", "OpenCore Factory", nullptr));
#if QT_CONFIG(shortcut)
        actionOpenCore_Factory->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpenCore->setText(QCoreApplication::translate("MainWindow", "OpenCore", nullptr));
#if QT_CONFIG(shortcut)
        actionOpenCore->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPlist_editor->setText(QCoreApplication::translate("MainWindow", "Xplist", nullptr));
        actionDSDT_SSDT_editor->setText(QCoreApplication::translate("MainWindow", "Xiasl", nullptr));
        actionOpenCanopyIcons->setText(QCoreApplication::translate("MainWindow", "OpenCanopyIcons", nullptr));
        actionMountEsp->setText(QCoreApplication::translate("MainWindow", "Mount ESP", nullptr));
        actionOcvalidate->setText(QCoreApplication::translate("MainWindow", "OC Validate", nullptr));
        btnExportMaster->setText(QCoreApplication::translate("MainWindow", "Export Master", nullptr));
        btnImportMaster->setText(QCoreApplication::translate("MainWindow", "Import Master", nullptr));
        btnHelp->setText(QCoreApplication::translate("MainWindow", "OpenCore Documentation", nullptr));
        btnCheckUpdate->setText(QCoreApplication::translate("MainWindow", "Update Check", nullptr));
        actionDatabase->setText(QCoreApplication::translate("MainWindow", "Configuration Template", nullptr));
        actionGenerateEFI->setText(QCoreApplication::translate("MainWindow", "Generate EFI on the Desktop", nullptr));
#if QT_CONFIG(shortcut)
        actionGenerateEFI->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen_database_directory->setText(QCoreApplication::translate("MainWindow", "Open Database Directory", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_database_directory->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNewWindow->setText(QCoreApplication::translate("MainWindow", "New Window", nullptr));
#if QT_CONFIG(shortcut)
        actionNewWindow->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        actionGo_to_the_previous->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        actionGo_to_the_next->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        actionBug_Report->setText(QCoreApplication::translate("MainWindow", "Bug Report", nullptr));
        actionDiscussion_Forum->setText(QCoreApplication::translate("MainWindow", "Discussion Forum", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUpgrade_OC->setText(QCoreApplication::translate("MainWindow", "Upgrade OpenCore and Kexts", nullptr));
#if QT_CONFIG(shortcut)
        actionUpgrade_OC->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDifferences->setText(QCoreApplication::translate("MainWindow", "OpenCore Differences", nullptr));
        actionLatest_Release->setText(QCoreApplication::translate("MainWindow", "Latest Release", nullptr));
        actionOnline_Download_Updates->setText(QCoreApplication::translate("MainWindow", "Download Upgrade Packages", nullptr));
        actionOpen_Directory->setText(QCoreApplication::translate("MainWindow", "Browse Catalog", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_Directory->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAutoChkUpdate->setText(QCoreApplication::translate("MainWindow", "Automatically Check for Updates", nullptr));
        actionEdit_Presets->setText(QCoreApplication::translate("MainWindow", "Edit Preset", nullptr));
        actionOCAuxiliaryToolsDoc->setText(QCoreApplication::translate("MainWindow", "OCAuxiliaryTools  Documentation", nullptr));
        actionBackup_EFI->setText(QCoreApplication::translate("MainWindow", "Backup EFI to Desktop \"Backup EFI\"", nullptr));
#if QT_CONFIG(shortcut)
        actionBackup_EFI->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpenCore_DEV->setText(QCoreApplication::translate("MainWindow", "OpenCore DEV", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "Settings...", nullptr));
#if QT_CONFIG(shortcut)
        actionPreferences->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+,", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDocumentation->setText(QCoreApplication::translate("MainWindow", "OCAuxiliaryTools Documentation", nullptr));
        actionMove_Up->setText(QCoreApplication::translate("MainWindow", "Move Up", nullptr));
        actionMove_Down->setText(QCoreApplication::translate("MainWindow", "Move Down", nullptr));
        actionAdd->setText(QCoreApplication::translate("MainWindow", "Add Item", nullptr));
#if QT_CONFIG(shortcut)
        actionAdd->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete Item", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDEBUG->setText(QCoreApplication::translate("MainWindow", "OpenCore DEBUG", nullptr));
        actionNew_Key_Field->setText(QCoreApplication::translate("MainWindow", "New Key Field", nullptr));
#if QT_CONFIG(shortcut)
        actionNew_Key_Field->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInitDatabaseLinux->setText(QCoreApplication::translate("MainWindow", "Initialize Database for Linux", nullptr));
        actionOpenCoreChineseDoc->setText(QCoreApplication::translate("MainWindow", "OpenCore Online Chinese Documentation", nullptr));
        lblFileName->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btnNo->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        btnYes->setText(QCoreApplication::translate("MainWindow", "Yes", nullptr));
        lblCount->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnHide->setText(QCoreApplication::translate("MainWindow", "Hide", nullptr));
        lblTemp1->setText(QString());
        lblStatusShow->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        btnUpdateHex->setToolTip(QCoreApplication::translate("MainWindow", "Update", nullptr));
#endif // QT_CONFIG(tooltip)
        btnUpdateHex->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        lblTemp2->setText(QString());
        lblHexASCII->setText(QCoreApplication::translate("MainWindow", "Hex <==> ASCII", nullptr));
#if QT_CONFIG(tooltip)
        tabTotal->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        table_acpi_add->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        btnACPIAdd_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnACPIAdd_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnACPIAdd_Del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        btnUp->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        btnDown->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        btnOpenACPIDir->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tabACPI->setTabText(tabACPI->indexOf(tabACPI1), QCoreApplication::translate("MainWindow", "Add", nullptr));
        btnACPIDel_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnACPIDel_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnACPIDel_Del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        tabACPI->setTabText(tabACPI->indexOf(tabACPI2), QCoreApplication::translate("MainWindow", "Delete", nullptr));
        btnACPIPatch_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnACPIPatch_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnACPIPatch_Del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        btnACPIPatch->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        tabACPI->setTabText(tabACPI->indexOf(tabACPI3), QCoreApplication::translate("MainWindow", "Patch", nullptr));
        label_122->setText(QCoreApplication::translate("MainWindow", "Preselection", nullptr));
#if QT_CONFIG(statustip)
        chkFadtEnableReset->setStatusTip(QCoreApplication::translate("MainWindow", "Provide reset register and flag in FADT table to enable reboot and shutdown.", nullptr));
#endif // QT_CONFIG(statustip)
        chkFadtEnableReset->setText(QCoreApplication::translate("MainWindow", "FadtEnableReset", nullptr));
#if QT_CONFIG(statustip)
        chkNormalizeHeaders->setStatusTip(QCoreApplication::translate("MainWindow", " Cleanup ACPI header fields to workaround macOS ACPI implementation bug causing boot crashes.", nullptr));
#endif // QT_CONFIG(statustip)
        chkNormalizeHeaders->setText(QCoreApplication::translate("MainWindow", "NormalizeHeaders", nullptr));
#if QT_CONFIG(statustip)
        chkResetLogoStatus->setStatusTip(QCoreApplication::translate("MainWindow", "Reset BGRT table Displayed status field to false.", nullptr));
#endif // QT_CONFIG(statustip)
        chkResetLogoStatus->setText(QCoreApplication::translate("MainWindow", "ResetLogoStatus", nullptr));
#if QT_CONFIG(statustip)
        chkResetHwSig->setStatusTip(QCoreApplication::translate("MainWindow", "Reset FACS table HardwareSignature value to 0.", nullptr));
#endif // QT_CONFIG(statustip)
        chkResetHwSig->setText(QCoreApplication::translate("MainWindow", "ResetHwSig", nullptr));
#if QT_CONFIG(statustip)
        chkRebaseRegions->setStatusTip(QCoreApplication::translate("MainWindow", "Attempt to heuristically relocate ACPI memory regions. Not recommended.", nullptr));
#endif // QT_CONFIG(statustip)
        chkRebaseRegions->setText(QCoreApplication::translate("MainWindow", "RebaseRegions", nullptr));
#if QT_CONFIG(tooltip)
        chkSyncTableIds->setToolTip(QCoreApplication::translate("MainWindow", "Type: plist boolean\n"
"\n"
"Description: Sync table identifiers with the SLIC table.\n"
"\n"
"This works around patched tables becoming incompatible with the SLIC table causing licensing issues in older \303\245Windows operating systems.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\260\206\350\241\250\347\232\204\346\240\207\350\257\206\347\254\246\344\270\216SLIC\350\241\250\345\220\214\346\255\245\343\200\202\n"
"\n"
"\350\277\231\345\217\257\344\273\245\350\247\243\345\206\263\346\211\223\344\272\206\350\241\245\344\270\201\347\232\204\350\241\250\344\270\216SLIC\350\241\250\344\270\215\345\205\274\345\256\271\357\274\214\345\234\250\350\200\201\347\232\204Windows\346\223\215\344\275\234\347\263\273\347\273\237\344\270\255\351\200\240\346\210\220\350\256\270\345\217\257\351\227\256\351\242\230\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        chkSyncTableIds->setText(QCoreApplication::translate("MainWindow", "SyncTableIds", nullptr));
        tabACPI->setTabText(tabACPI->indexOf(tabACPI4), QCoreApplication::translate("MainWindow", "Quirks", nullptr));
#if QT_CONFIG(tooltip)
        tabBooter->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        btnBooter_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnBooter_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnBooter_Del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        tabBooter->setTabText(tabBooter->indexOf(tabBooter1), QCoreApplication::translate("MainWindow", "MmioWhitelist", nullptr));
        btnBooterPatchAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnBooterPatchDel->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnBooterPatchDel->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        tabBooter->setTabText(tabBooter->indexOf(tabBooter2), QCoreApplication::translate("MainWindow", "Patch", nullptr));
#if QT_CONFIG(statustip)
        chkAllowRelocationBlock->setStatusTip(QCoreApplication::translate("MainWindow", "Allows booting macOS through a relocation block.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAllowRelocationBlock->setText(QCoreApplication::translate("MainWindow", "AllowRelocationBlock", nullptr));
#if QT_CONFIG(statustip)
        chkAvoidRuntimeDefrag->setStatusTip(QCoreApplication::translate("MainWindow", "Protect from boot.efi runtime memory defragmentation.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAvoidRuntimeDefrag->setText(QCoreApplication::translate("MainWindow", "AvoidRuntimeDefrag", nullptr));
#if QT_CONFIG(statustip)
        chkDevirtualiseMmio->setStatusTip(QCoreApplication::translate("MainWindow", "Remove runtime attribute from select MMIO regions.", nullptr));
#endif // QT_CONFIG(statustip)
        chkDevirtualiseMmio->setText(QCoreApplication::translate("MainWindow", "DevirtualiseMmio", nullptr));
#if QT_CONFIG(statustip)
        chkDisableSingleUser->setStatusTip(QCoreApplication::translate("MainWindow", "Disable single user mode.", nullptr));
#endif // QT_CONFIG(statustip)
        chkDisableSingleUser->setText(QCoreApplication::translate("MainWindow", "DisableSingleUser", nullptr));
#if QT_CONFIG(statustip)
        chkDisableVariableWrite->setStatusTip(QCoreApplication::translate("MainWindow", "Protect from macOS NVRAM write access.", nullptr));
#endif // QT_CONFIG(statustip)
        chkDisableVariableWrite->setText(QCoreApplication::translate("MainWindow", "DisableVariableWrite", nullptr));
#if QT_CONFIG(statustip)
        chkDiscardHibernateMap->setStatusTip(QCoreApplication::translate("MainWindow", "Reuse original hibernate memory map.", nullptr));
#endif // QT_CONFIG(statustip)
        chkDiscardHibernateMap->setText(QCoreApplication::translate("MainWindow", "DiscardHibernateMap", nullptr));
#if QT_CONFIG(statustip)
        chkEnableSafeModeSlide->setStatusTip(QCoreApplication::translate("MainWindow", " Patch bootloader to have KASLR enabled in safe mode.", nullptr));
#endif // QT_CONFIG(statustip)
        chkEnableSafeModeSlide->setText(QCoreApplication::translate("MainWindow", "EnableSafeModeSlide", nullptr));
#if QT_CONFIG(statustip)
        chkEnableWriteUnprotector->setStatusTip(QCoreApplication::translate("MainWindow", " Permit write access to UEFI runtime services code.", nullptr));
#endif // QT_CONFIG(statustip)
        chkEnableWriteUnprotector->setText(QCoreApplication::translate("MainWindow", "EnableWriteUnprotector", nullptr));
#if QT_CONFIG(statustip)
        chkForceExitBootServices->setStatusTip(QCoreApplication::translate("MainWindow", "Retry ExitBootServices with new memory map on failure.", nullptr));
#endif // QT_CONFIG(statustip)
        chkForceExitBootServices->setText(QCoreApplication::translate("MainWindow", "ForceExitBootServices", nullptr));
#if QT_CONFIG(statustip)
        chkForceBooterSignature->setStatusTip(QCoreApplication::translate("MainWindow", "Set macOS boot-signature to OpenCore launcher.", nullptr));
#endif // QT_CONFIG(statustip)
        chkForceBooterSignature->setText(QCoreApplication::translate("MainWindow", "ForceBooterSignature", nullptr));
#if QT_CONFIG(statustip)
        chkProtectSecureBoot->setStatusTip(QCoreApplication::translate("MainWindow", "Protect UEFI Secure Boot variables from being written.", nullptr));
#endif // QT_CONFIG(statustip)
        chkProtectSecureBoot->setText(QCoreApplication::translate("MainWindow", "ProtectSecureBoot", nullptr));
#if QT_CONFIG(statustip)
        chkProtectUefiServices->setStatusTip(QCoreApplication::translate("MainWindow", "Protect UEFI services from being overridden by the firmware.", nullptr));
#endif // QT_CONFIG(statustip)
        chkProtectUefiServices->setText(QCoreApplication::translate("MainWindow", "ProtectUefiServices", nullptr));
#if QT_CONFIG(statustip)
        chkProvideCustomSlide->setStatusTip(QCoreApplication::translate("MainWindow", "Provide custom KASLR slide on low memory.", nullptr));
#endif // QT_CONFIG(statustip)
        chkProvideCustomSlide->setText(QCoreApplication::translate("MainWindow", "ProvideCustomSlide", nullptr));
#if QT_CONFIG(statustip)
        chkProtectMemoryRegions->setStatusTip(QCoreApplication::translate("MainWindow", "Protect memory regions from incorrect access.", nullptr));
#endif // QT_CONFIG(statustip)
        chkProtectMemoryRegions->setText(QCoreApplication::translate("MainWindow", "ProtectMemoryRegions", nullptr));
#if QT_CONFIG(statustip)
        chkSetupVirtualMap->setStatusTip(QCoreApplication::translate("MainWindow", " Setup virtual memory at SetVirtualAddresses.", nullptr));
#endif // QT_CONFIG(statustip)
        chkSetupVirtualMap->setText(QCoreApplication::translate("MainWindow", "SetupVirtualMap", nullptr));
#if QT_CONFIG(statustip)
        chkRebuildAppleMemoryMap->setStatusTip(QCoreApplication::translate("MainWindow", "Generate Memory Map compatible with macOS.", nullptr));
#endif // QT_CONFIG(statustip)
        chkRebuildAppleMemoryMap->setText(QCoreApplication::translate("MainWindow", "RebuildAppleMemoryMap", nullptr));
#if QT_CONFIG(statustip)
        chkSignalAppleOS->setStatusTip(QCoreApplication::translate("MainWindow", " Report macOS being loaded through OS Info for any OS.", nullptr));
#endif // QT_CONFIG(statustip)
        chkSignalAppleOS->setText(QCoreApplication::translate("MainWindow", "SignalAppleOS", nullptr));
#if QT_CONFIG(statustip)
        chkSyncRuntimePermissions->setStatusTip(QCoreApplication::translate("MainWindow", "Update memory permissions for runtime environment.", nullptr));
#endif // QT_CONFIG(statustip)
        chkSyncRuntimePermissions->setText(QCoreApplication::translate("MainWindow", "SyncRuntimePermissions", nullptr));
#if QT_CONFIG(statustip)
        label_41->setStatusTip(QCoreApplication::translate("MainWindow", "Provide maximum KASLR slide when higher ones are unavailable.", nullptr));
#endif // QT_CONFIG(statustip)
        label_41->setText(QCoreApplication::translate("MainWindow", "ProvideMaxSlide", nullptr));
        editIntProvideMaxSlide->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        label_120->setToolTip(QCoreApplication::translate("MainWindow", "Type: plist integer\n"
"\n"
"Description: Reduce GPU PCI BAR sizes for compatibility with macOS.\n"
"\n"
"This quirk reduces GPU PCI BAR sizes for Apple macOS up to the specified value or lower if it is unsupported.\n"
"\n"
"The specified value follows PCI Resizable BAR spec. Use 0 for 1 MB, 1 for 2 MB, 2 for 4 MB, and so on up to 19 for 512 GB. Apple macOS supports 1 GB maximum, which is 10. Use -1 to disable this quirk.\n"
"\n"
"Note: See ResizeGpuBars quirk for general GPU PCI BAR size configuration and more details about the technology.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\207\217\345\260\221GPU PCI BAR\347\232\204\345\244\247\345\260\217\357\274\214\344\273\245\344\276\277\344\270\216macOS\345\205\274\345\256\271\343\200\202\n"
"\n"
"\345\246\202\346\236\234\344\270\215\346\224\257\346\214\201\357\274\214\346\255\244\351\200\211\351\241\271\345\260\206 Apple macOS \347\232\204 GPU PCI BAR \345\244\247\345\260\217\345"
                        "\207\217\345\260\221\345\210\260\346\214\207\345\256\232\345\200\274\346\210\226\346\233\264\344\275\216\343\200\202\n"
"\n"
"\346\214\207\345\256\232\347\232\204\345\200\274\351\201\265\345\276\252PCI\345\217\257\350\260\203\346\225\264\347\232\204BAR\350\247\204\346\240\274\343\200\202\344\275\277\347\224\2500\344\273\243\350\241\2501MB\357\274\2141\344\273\243\350\241\2502MB\357\274\2142\344\273\243\350\241\2504MB\357\274\214\344\273\245\346\255\244\347\261\273\346\216\250\357\274\214\347\233\264\345\210\26019\344\273\243\350\241\250512GB\343\200\202\350\213\271\346\236\234macOS\346\234\200\345\244\247\346\224\257\346\214\2011GB\357\274\214\344\271\237\345\260\261\346\230\25710\343\200\202\344\275\277\347\224\250-1\346\235\245\347\246\201\347\224\250\350\277\231\344\270\252\351\200\211\351\241\271\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\257\267\345\217\202\351\230\205ResizeGpuBars\357\274\214\344\272\206\350\247\243\344\270\200\350\210\254\347\232\204GPU PCI BAR\345\244\247\345\260\217"
                        "\351\205\215\347\275\256\345\222\214\345\205\263\344\272\216\350\257\245\346\212\200\346\234\257\347\232\204\346\233\264\345\244\232\347\273\206\350\212\202\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        label_120->setText(QCoreApplication::translate("MainWindow", "ResizeAppleGpuBars", nullptr));
        editIntResizeAppleGpuBars->setText(QCoreApplication::translate("MainWindow", "-1", nullptr));
        label_123->setText(QCoreApplication::translate("MainWindow", "Preselection", nullptr));
        tabBooter->setTabText(tabBooter->indexOf(tabBooter3), QCoreApplication::translate("MainWindow", "Quirks", nullptr));
#if QT_CONFIG(tooltip)
        btnDPAdd_Add->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        btnDPAdd_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnDPAdd_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnDPAdd_Del->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        btnDPAdd_Add0->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnDPAdd_Del0->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnDPAdd_Del0->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        btnDPAddPreset->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        tabDP->setTabText(tabDP->indexOf(tabDP1), QCoreApplication::translate("MainWindow", "Add", nullptr));
        btnDPDel_Add0->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnDPDel_Del0->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnDPDel_Del0->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        btnDPDel_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnDPDel_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnDPDel_Del->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        tabDP->setTabText(tabDP->indexOf(tabDP2), QCoreApplication::translate("MainWindow", "Delete", nullptr));
        btnKernelAdd_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnKernelAdd_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnKernelAdd_Del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        btnKernelAdd_Up->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        btnKernelAdd_Down->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        btnOpenKextDir->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        btnKextPreset->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        tabKernel->setTabText(tabKernel->indexOf(tabKernel1), QCoreApplication::translate("MainWindow", "Add", nullptr));
        btnKernelBlock_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnKernelBlock_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnKernelBlock_Del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        tabKernel->setTabText(tabKernel->indexOf(tabKernel2), QCoreApplication::translate("MainWindow", "Block", nullptr));
        btnKernelForce_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnKernelForce_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnKernelForce_Del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        tabKernel->setTabText(tabKernel->indexOf(tabKernel3), QCoreApplication::translate("MainWindow", "Force", nullptr));
        btnKernelPatchAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnKernelPatchDel->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnKernelPatchDel->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        btnPresetKernelPatch->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        tabKernel->setTabText(tabKernel->indexOf(tabKernel4), QCoreApplication::translate("MainWindow", "Patch", nullptr));
#if QT_CONFIG(statustip)
        chkDummyPowerManagement->setStatusTip(QCoreApplication::translate("MainWindow", "Disables AppleIntelCpuPowerManagement.", nullptr));
#endif // QT_CONFIG(statustip)
        chkDummyPowerManagement->setText(QCoreApplication::translate("MainWindow", "DummyPowerManagement", nullptr));
        label_126->setText(QCoreApplication::translate("MainWindow", "Preselection", nullptr));
        mycboxEmulate->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        mycboxEmulate->setItemText(1, QCoreApplication::translate("MainWindow", "Emulate Haswell (0x0306C3)", nullptr));
        mycboxEmulate->setItemText(2, QCoreApplication::translate("MainWindow", "Emulate Broadwell (0x0306D4)", nullptr));
        mycboxEmulate->setItemText(3, QCoreApplication::translate("MainWindow", "Emulate Coffee Lake", nullptr));
        mycboxEmulate->setItemText(4, QCoreApplication::translate("MainWindow", "Emulate Comet Lake U42 (0x0806EC)", nullptr));
        mycboxEmulate->setItemText(5, QCoreApplication::translate("MainWindow", "Emulate Comet Lake (0x0A0655)", nullptr));
        mycboxEmulate->setItemText(6, QCoreApplication::translate("MainWindow", "Emulate Cascade Lake", nullptr));

#if QT_CONFIG(statustip)
        label->setStatusTip(QCoreApplication::translate("MainWindow", " Sequence of EAX, EBX, ECX, EDX values to replace CPUID (1) call in XNU kernel.", nullptr));
#endif // QT_CONFIG(statustip)
        label->setText(QCoreApplication::translate("MainWindow", "Cpuid1Data", nullptr));
#if QT_CONFIG(statustip)
        label_2->setStatusTip(QCoreApplication::translate("MainWindow", " Bit mask of active bits in Cpuid1Data.", nullptr));
#endif // QT_CONFIG(statustip)
        label_2->setText(QCoreApplication::translate("MainWindow", "Cpuid1Mask", nullptr));
#if QT_CONFIG(statustip)
        label_97->setStatusTip(QCoreApplication::translate("MainWindow", " Emulates CPUID and applies DummyPowerManagement on specified macOS version or older.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_98->setStatusTip(QCoreApplication::translate("MainWindow", "Emulates CPUID and applies DummyPowerManagement on specified macOS version or newer.", nullptr));
#endif // QT_CONFIG(statustip)
        tabKernel->setTabText(tabKernel->indexOf(tabKernel5), QCoreApplication::translate("MainWindow", "Emulate", nullptr));
#if QT_CONFIG(statustip)
        chkAppleCpuPmCfgLock->setStatusTip(QCoreApplication::translate("MainWindow", "Disables PKG_CST_CONFIG_CONTROL (0xE2) MSR modification in AppleIntelCPUPowerManagement.kext, commonly causing early kernel panic, when it is locked from writing.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleCpuPmCfgLock->setText(QCoreApplication::translate("MainWindow", "AppleCpuPmCfgLock", nullptr));
#if QT_CONFIG(statustip)
        chkAppleXcpmCfgLock->setStatusTip(QCoreApplication::translate("MainWindow", "Disables PKG_CST_CONFIG_CONTROL (0xE2) MSR modification in XNU kernel, commonly causing\n"
" early kernel panic, when it is locked from writing (XCPM power management).", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleXcpmCfgLock->setText(QCoreApplication::translate("MainWindow", "AppleXcpmCfgLock", nullptr));
#if QT_CONFIG(statustip)
        chkAppleXcpmExtraMsrs->setStatusTip(QCoreApplication::translate("MainWindow", "Disables multiple MSR access critical for select CPUs, which have no native XCPM support.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleXcpmExtraMsrs->setText(QCoreApplication::translate("MainWindow", "AppleXcpmExtraMsrs", nullptr));
#if QT_CONFIG(statustip)
        chkAppleXcpmForceBoost->setStatusTip(QCoreApplication::translate("MainWindow", " Forces maximum performance in XCPM mode.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleXcpmForceBoost->setText(QCoreApplication::translate("MainWindow", "AppleXcpmForceBoost", nullptr));
#if QT_CONFIG(statustip)
        chkCustomSMBIOSGuid->setStatusTip(QCoreApplication::translate("MainWindow", "Performs GUID patching for UpdateSMBIOSMode Custom mode. Usually relevant for Dell laptops.", nullptr));
#endif // QT_CONFIG(statustip)
        chkCustomSMBIOSGuid->setText(QCoreApplication::translate("MainWindow", "CustomSMBIOSGuid", nullptr));
#if QT_CONFIG(statustip)
        chkDisableIoMapper->setStatusTip(QCoreApplication::translate("MainWindow", "Disables IOMapper support in XNU (VT-d), which may conflict with the firmware implementation.", nullptr));
#endif // QT_CONFIG(statustip)
        chkDisableIoMapper->setText(QCoreApplication::translate("MainWindow", "DisableIoMapper", nullptr));
#if QT_CONFIG(statustip)
        chkDisableLinkeditJettison->setStatusTip(QCoreApplication::translate("MainWindow", "Disables __LINKEDIT jettison code.", nullptr));
#endif // QT_CONFIG(statustip)
        chkDisableLinkeditJettison->setText(QCoreApplication::translate("MainWindow", "DisableLinkeditJettison", nullptr));
#if QT_CONFIG(statustip)
        chkDisableRtcChecksum->setStatusTip(QCoreApplication::translate("MainWindow", "Disables primary checksum (0x58-0x59) writing in AppleRTC.", nullptr));
#endif // QT_CONFIG(statustip)
        chkDisableRtcChecksum->setText(QCoreApplication::translate("MainWindow", "DisableRtcChecksum", nullptr));
#if QT_CONFIG(statustip)
        chkExtendBTFeatureFlags->setStatusTip(QCoreApplication::translate("MainWindow", "Set FeatureFlags to 0x0F for full functionality of Bluetooth, including Continuity.", nullptr));
#endif // QT_CONFIG(statustip)
        chkExtendBTFeatureFlags->setText(QCoreApplication::translate("MainWindow", "ExtendBTFeatureFlags", nullptr));
#if QT_CONFIG(statustip)
        chkExternalDiskIcons->setStatusTip(QCoreApplication::translate("MainWindow", " Apply icon type patches to AppleAHCIPort.kext to force internal disk icons for all AHCI disks.", nullptr));
#endif // QT_CONFIG(statustip)
        chkExternalDiskIcons->setText(QCoreApplication::translate("MainWindow", "ExternalDiskIcons", nullptr));
#if QT_CONFIG(statustip)
        chkForceSecureBootScheme->setStatusTip(QCoreApplication::translate("MainWindow", "Force x86 scheme for IMG4 verification.", nullptr));
#endif // QT_CONFIG(statustip)
        chkForceSecureBootScheme->setText(QCoreApplication::translate("MainWindow", "ForceSecureBootScheme", nullptr));
        chkIncreasePciBarSize->setText(QCoreApplication::translate("MainWindow", "IncreasePciBarSize", nullptr));
#if QT_CONFIG(statustip)
        chkLapicKernelPanic->setStatusTip(QCoreApplication::translate("MainWindow", "Disables kernel panic on LAPIC interrupts.", nullptr));
#endif // QT_CONFIG(statustip)
        chkLapicKernelPanic->setText(QCoreApplication::translate("MainWindow", "LapicKernelPanic", nullptr));
#if QT_CONFIG(statustip)
        chkLegacyCommpage->setStatusTip(QCoreApplication::translate("MainWindow", "Requirement: 10.4 - 10.6", nullptr));
#endif // QT_CONFIG(statustip)
        chkLegacyCommpage->setText(QCoreApplication::translate("MainWindow", "LegacyCommpage", nullptr));
#if QT_CONFIG(statustip)
        chkPanicNoKextDump->setStatusTip(QCoreApplication::translate("MainWindow", "Prevent kernel from printing kext dump in the panic log preventing from observing panic details.\n"
" Affects 10.13 and above.", nullptr));
#endif // QT_CONFIG(statustip)
        chkPanicNoKextDump->setText(QCoreApplication::translate("MainWindow", "PanicNoKextDump", nullptr));
#if QT_CONFIG(statustip)
        chkPowerTimeoutKernelPanic->setStatusTip(QCoreApplication::translate("MainWindow", " Disables kernel panic on setPowerState timeout.", nullptr));
#endif // QT_CONFIG(statustip)
        chkPowerTimeoutKernelPanic->setText(QCoreApplication::translate("MainWindow", "PowerTimeoutKernelPanic", nullptr));
#if QT_CONFIG(tooltip)
        chkProvideCurrentCpuInfo->setToolTip(QCoreApplication::translate("MainWindow", "Type: plist boolean\n"
"\n"
"Requirement: 10.8\n"
"Description: Provides current CPU info to the kernel.\n"
"This quirk currently provides the correct TSC and FSB values to the kernel, as well as disables CPU topology validation.\n"
"Note: These patches currently target Microsoft Hyper-V and may need to be extended for other purposes.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\350\246\201\346\261\202\357\274\23210.8\n"
"\346\217\217\350\277\260\357\274\232\345\220\221\345\206\205\346\240\270\346\217\220\344\276\233\345\275\223\345\211\215\347\232\204CPU\344\277\241\346\201\257\343\200\202\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\347\233\256\345\211\215\346\217\220\344\276\233\346\255\243\347\241\256\347\232\204TSC\345\222\214FSB\345\200\274\347\273\231\345\206\205\346\240\270\357\274\214\344\273\245\345\217\212\347\246\201\347\224\250CPU\346\213\223\346\211\221\351\252\214\350\257\201\343\200\202\n"
"\346\263\250\346\204\217\357\274\232\350\277"
                        "\231\344\272\233\350\241\245\344\270\201\347\233\256\345\211\215\351\222\210\345\257\271\345\276\256\350\275\257Hyper-V\357\274\214\345\217\257\350\203\275\351\234\200\350\246\201\346\211\251\345\261\225\345\210\260\345\205\266\344\273\226\347\224\250\351\200\224\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        chkProvideCurrentCpuInfo->setText(QCoreApplication::translate("MainWindow", "ProvideCurrentCpuInfo", nullptr));
#if QT_CONFIG(statustip)
        chkThirdPartyDrives->setStatusTip(QCoreApplication::translate("MainWindow", " Apply vendor patches to IOAHCIBlockStorage.kext to enable native features for third-party drives,\n"
" such as TRIM on SSDs or hibernation support on 10.15 and newer.", nullptr));
#endif // QT_CONFIG(statustip)
        chkThirdPartyDrives->setText(QCoreApplication::translate("MainWindow", "ThirdPartyDrives", nullptr));
#if QT_CONFIG(statustip)
        chkXhciPortLimit->setStatusTip(QCoreApplication::translate("MainWindow", "Patch various kexts (AppleUSBXHCI.kext, AppleUSBXHCIPCI.kext, IOUSBHostFamily.kext) to\n"
" remove USB port count limit of 15 ports.", nullptr));
#endif // QT_CONFIG(statustip)
        chkXhciPortLimit->setText(QCoreApplication::translate("MainWindow", "XhciPortLimit", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "SetApfsTrimTimeout", nullptr));
#if QT_CONFIG(tooltip)
        editIntSetApfsTrimTimeout->setToolTip(QCoreApplication::translate("MainWindow", "Depending on the SSD controller trim procedure may take considerable amount of time, causing noticeable boot\n"
"slowdown as this is when the APFS driver executes the trim operation. If the SSD supports over-provisioning or\n"
"there exists a dedicated unused partition that can be used to reserve blocks, trim operation may not be necessary.\n"
"On the other side if the SSD is slow, the default timeout (equals to 9.999999 seconds) may not be enough. See\n"
"more details in this article.\n"
"Set this value to 4294967295 for the maximum timeout to guarantee trim success or to 999 to essentially disable\n"
"trim.", nullptr));
#endif // QT_CONFIG(tooltip)
        editIntSetApfsTrimTimeout->setText(QCoreApplication::translate("MainWindow", "-1", nullptr));
        label_124->setText(QCoreApplication::translate("MainWindow", "Preselection", nullptr));
        tabKernel->setTabText(tabKernel->indexOf(tabKernel6), QCoreApplication::translate("MainWindow", "Quirks", nullptr));
#if QT_CONFIG(tooltip)
        chkCustomKernel->setToolTip(QCoreApplication::translate("MainWindow", "Type: plist boolean\n"
"\n"
"Description: Use customised kernel cache from the Kernels directory located at the root of the ESP partition.\n"
"\n"
"Unsupported platforms including Atom and AMD require modified versions of XNU kernel in order to boot. This option provides the possibility to using a customised kernel cache which contains such modifications from ESP partition.\n"
"\n"
"----\n"
"\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\346\217\217\350\277\260\357\274\232\344\275\277\347\224\250\344\275\215\344\272\216ESP\345\210\206\345\214\272\346\240\271\351\203\250\347\232\204Kernels\347\233\256\345\275\225\344\270\213\347\232\204\345\256\232\345\210\266\345\206\205\346\240\270\347\274\223\345\255\230\343\200\202\n"
"\n"
"\344\270\215\346\224\257\346\214\201\347\232\204\345\271\263\345\217\260\345\214\205\346\213\254Atom\345\222\214AMD\351\234\200\350\246\201\344\277\256\346\224\271\350\277\207\347\232\204XNU\345\206\205\346\240\270\346\211\215\350\203\275\345"
                        "\220\257\345\212\250\343\200\202\350\277\231\344\270\252\351\200\211\351\241\271\346\217\220\344\276\233\344\272\206\344\275\277\347\224\250\345\256\232\345\210\266\347\232\204\345\206\205\346\240\270\347\274\223\345\255\230\347\232\204\345\217\257\350\203\275\346\200\247\357\274\214\345\205\266\344\270\255\345\214\205\345\220\253\344\272\206ESP\345\210\206\345\214\272\347\232\204\344\277\256\346\224\271\345\206\205\345\256\271\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        chkCustomKernel->setText(QCoreApplication::translate("MainWindow", "CustomKernel", nullptr));
#if QT_CONFIG(statustip)
        chkFuzzyMatch->setStatusTip(QCoreApplication::translate("MainWindow", "Use kernelcache with different checksums when available.", nullptr));
#endif // QT_CONFIG(statustip)
        chkFuzzyMatch->setText(QCoreApplication::translate("MainWindow", "FuzzyMatch", nullptr));
#if QT_CONFIG(statustip)
        label_43->setStatusTip(QCoreApplication::translate("MainWindow", " Prefer specified kernel architecture (Auto, i386, i386-user32, x86_64) when available.", nullptr));
#endif // QT_CONFIG(statustip)
        label_43->setText(QCoreApplication::translate("MainWindow", "KernelArch", nullptr));
#if QT_CONFIG(statustip)
        label_42->setStatusTip(QCoreApplication::translate("MainWindow", " Prefer specified kernel cache type (Auto, Cacheless, Mkext, Prelinked) when available.", nullptr));
#endif // QT_CONFIG(statustip)
        label_42->setText(QCoreApplication::translate("MainWindow", "KernelCache", nullptr));
        tabKernel->setTabText(tabKernel->indexOf(tabKernel7), QCoreApplication::translate("MainWindow", "Scheme", nullptr));
#if QT_CONFIG(statustip)
        chkHideAuxiliary->setStatusTip(QCoreApplication::translate("MainWindow", "Hides auxiliary entries from picker menu by default.", nullptr));
#endif // QT_CONFIG(statustip)
        chkHideAuxiliary->setText(QCoreApplication::translate("MainWindow", "HideAuxiliary", nullptr));
#if QT_CONFIG(statustip)
        chkPollAppleHotKeys->setStatusTip(QCoreApplication::translate("MainWindow", " Enable modifier hotkey handling in boot picker.", nullptr));
#endif // QT_CONFIG(statustip)
        chkPollAppleHotKeys->setText(QCoreApplication::translate("MainWindow", "PollAppleHotKeys", nullptr));
#if QT_CONFIG(statustip)
        chkPickerAudioAssist->setStatusTip(QCoreApplication::translate("MainWindow", "Enable screen reader by default in boot picker.", nullptr));
#endif // QT_CONFIG(statustip)
        chkPickerAudioAssist->setText(QCoreApplication::translate("MainWindow", "PickerAudioAssist", nullptr));
#if QT_CONFIG(statustip)
        chkShowPicker->setStatusTip(QCoreApplication::translate("MainWindow", " Show simple boot picker to allow boot entry selection.", nullptr));
#endif // QT_CONFIG(statustip)
        chkShowPicker->setText(QCoreApplication::translate("MainWindow", "ShowPicker", nullptr));
#if QT_CONFIG(statustip)
        label_5->setStatusTip(QCoreApplication::translate("MainWindow", "Sets specific attributes for picker.", nullptr));
#endif // QT_CONFIG(statustip)
        label_5->setText(QCoreApplication::translate("MainWindow", "PickerAttributes", nullptr));
        lblPickerAttributes->setText(QCoreApplication::translate("MainWindow", "0x00", nullptr));
        btnPickerAttributes->setText(QCoreApplication::translate("MainWindow", "Select", nullptr));
#if QT_CONFIG(statustip)
        label_4->setStatusTip(QCoreApplication::translate("MainWindow", "Hibernation detection mode. ", nullptr));
#endif // QT_CONFIG(statustip)
        label_4->setText(QCoreApplication::translate("MainWindow", "HibernateMode", nullptr));
#if QT_CONFIG(statustip)
        label_108->setStatusTip(QCoreApplication::translate("MainWindow", " Register the launcher option in the firmware preferences for persistence.", nullptr));
#endif // QT_CONFIG(statustip)
        label_108->setText(QCoreApplication::translate("MainWindow", "LauncherOption", nullptr));
#if QT_CONFIG(statustip)
        label_15->setStatusTip(QCoreApplication::translate("MainWindow", "Launch path for LauncherOption.", nullptr));
#endif // QT_CONFIG(statustip)
        label_15->setText(QCoreApplication::translate("MainWindow", "LauncherPath", nullptr));
#if QT_CONFIG(statustip)
        label_6->setStatusTip(QCoreApplication::translate("MainWindow", " Choose boot picker used for boot management.", nullptr));
#endif // QT_CONFIG(statustip)
        label_6->setText(QCoreApplication::translate("MainWindow", "PickerMode", nullptr));
#if QT_CONFIG(statustip)
        label_10->setStatusTip(QCoreApplication::translate("MainWindow", " Choose specific icon set used for boot management.", nullptr));
#endif // QT_CONFIG(statustip)
        label_10->setText(QCoreApplication::translate("MainWindow", "PickerVariant", nullptr));
        cboxPickerVariant->setItemText(0, QCoreApplication::translate("MainWindow", "Auto", nullptr));
        cboxPickerVariant->setItemText(1, QCoreApplication::translate("MainWindow", "Default", nullptr));
        cboxPickerVariant->setItemText(2, QCoreApplication::translate("MainWindow", "Acidanthera\\GoldenGate", nullptr));
        cboxPickerVariant->setItemText(3, QCoreApplication::translate("MainWindow", "Acidanthera\\Syrah", nullptr));
        cboxPickerVariant->setItemText(4, QCoreApplication::translate("MainWindow", "Acidanthera\\Chardonnay", nullptr));

#if QT_CONFIG(statustip)
        label_8->setStatusTip(QCoreApplication::translate("MainWindow", "Delay in microseconds performed before handling picker startup and action hotkeys.", nullptr));
#endif // QT_CONFIG(statustip)
        label_8->setText(QCoreApplication::translate("MainWindow", "TakeoffDelay", nullptr));
#if QT_CONFIG(statustip)
        label_7->setStatusTip(QCoreApplication::translate("MainWindow", " Timeout in seconds in boot picker before automatic booting of the default boot entry. Use 0 to\n"
" disable timer.", nullptr));
#endif // QT_CONFIG(statustip)
        label_7->setText(QCoreApplication::translate("MainWindow", "Timeout", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("MainWindow", "Text renderer supports colour arguments as a sum of foreground and background colours according to UEFI specification. The value of black background and black foreground (0) is reserved. List of colour names:\n"
"\n"
"\342\200\242 0x00 \342\200\224 EFI_BLACK\n"
"\342\200\242 0x01 \342\200\224 EFI_BLUE\n"
"\342\200\242 0x02 \342\200\224 EFI_GREEN\n"
"\342\200\242 0x03 \342\200\224 EFI_CYAN\n"
"\342\200\242 0x04 \342\200\224 EFI_RED\n"
"\342\200\242 0x05 \342\200\224 EFI_MAGENTA\n"
"\342\200\242 0x06 \342\200\224 EFI_BROWN\n"
"\342\200\242 0x07 \342\200\224 EFI_LIGHTGRAY\n"
"\342\200\242 0x08 \342\200\224 EFI_DARKGRAY\n"
"\342\200\242 0x09 \342\200\224 EFI_LIGHTBLUE\n"
"\342\200\242 0x0A \342\200\224 EFI_LIGHTGREEN\n"
"\342\200\242 0x0B \342\200\224 EFI_LIGHTCYAN\n"
"\342\200\242 0x0C \342\200\224 EFI_LIGHTRED\n"
"\342\200\242 0x0D \342\200\224 EFI_LIGHTMAGENTA\n"
"\342\200\242 0x0E \342\200\224 EFI_YELLOW\n"
"\342\200\242 0x0F \342\200\224 EFI_WHITE\n"
"\342\200\242 0x00 \342\200\224 EFI_BACKGROUND_BLACK\n"
"\342"
                        "\200\242 0x10 \342\200\224 EFI_BACKGROUND_BLUE\n"
"\342\200\242 0x20 \342\200\224 EFI_BACKGROUND_GREEN\n"
"\342\200\242 0x30 \342\200\224 EFI_BACKGROUND_CYAN\n"
"\342\200\242 0x40 \342\200\224 EFI_BACKGROUND_RED\n"
"\342\200\242 0x50 \342\200\224 EFI_BACKGROUND_MAGENTA\n"
"\342\200\242 0x60 \342\200\224 EFI_BACKGROUND_BROWN\n"
"\342\200\242 0x70 \342\200\224 EFI_BACKGROUND_LIGHTGRAY\n"
"\n"
"Note: This option may not work well with System text renderer. Setting a background different from black could help testing proper GOP functioning.\n"
"\n"
"----\n"
"\n"
"\346\240\271\346\215\256UEFI\357\274\214\346\226\207\346\234\254\346\270\262\346\237\223\345\231\250\346\224\257\346\214\201\351\242\234\350\211\262\345\217\202\346\225\260\344\270\272\345\211\215\346\231\257\350\211\262\345\222\214\350\203\214\346\231\257\350\211\262\344\271\213\345\222\214\347\232\204\350\247\204\350\214\203\357\274\214\344\277\235\347\225\231\351\273\221\350\211\262\350\203\214\346\231\257\345\222\214\351\273\221\350\211\262\345\211\215"
                        "\346\231\257\357\274\2100\357\274\211\347\232\204\345\200\274\343\200\202\351\242\234\350\211\262\345\220\215\347\247\260\345\210\227\350\241\250\345\246\202\344\270\213:\n"
"\n"
"- 0x00 - EFI_BLACK\n"
"- 0x01 - EFI_BLUE\n"
"- 0x02 - EFI_GREEN\n"
"- 0x03 - EFI_CYAN\n"
"- 0x04 - EFI_RED\n"
"- 0x05 - EFI_MAGENTA\n"
"- 0x06 - EFI_BROWN\n"
"- 0x07 - EFI_LIGHTGRAY \n"
"- 0x08 - EFI_DARKGRAY\n"
"- 0x09 - EFI_LIGHTBLUE \n"
"- 0x0A - EFI_LIGHTGREEN \n"
"- 0x0B - EFI_LIGHTCYAN\n"
"- 0x0C - EFI_LIGHTRED \n"
"- 0x0D - EFI_LIGHTMAGENTA\n"
"- 0x0E - EFI_YELLOW\n"
"- 0x0F - EFI_WHITE\n"
"- 0x00 - EFI_BACKGROUND_BLACK\n"
"- 0x10 - EFI_BACKGROUND_BLUE.\n"
"- 0x20 - EFI_BACKGROUND_GREEN\n"
"- 0x30 - EFI_BACKGROUND_CYAN\n"
"- 0x40 - EFI_BACKGROUND_RED\n"
"- 0x50 - EFI_BACKGROUND_MAGENTA\n"
"- 0x60 - EFI_BACKGROUND_BROWN\n"
"- 0x70 - EFI_BACKGROUND_LIGHTGRAY\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\277\231\344\270\252\351\200\211\351\241\271\345\234\250\347\263\273\347\273\237\346\226\207\346\234\254\346\270\262\346\237"
                        "\223\345\231\250\344\270\212\345\217\257\350\203\275\344\274\232\346\234\211\344\270\215\345\245\275\347\232\204\346\225\210\346\236\234\343\200\202\350\256\276\347\275\256\344\270\215\345\220\214\344\272\216\351\273\221\350\211\262\347\232\204\350\203\214\346\231\257\345\217\257\344\273\245\345\270\256\345\212\251\346\265\213\350\257\225GOP\347\232\204\346\255\243\345\270\270\350\277\220\350\241\214\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_3->setStatusTip(QCoreApplication::translate("MainWindow", "Sets specific attributes for console.", nullptr));
#endif // QT_CONFIG(statustip)
        label_3->setText(QCoreApplication::translate("MainWindow", "ConsoleAttributes", nullptr));
        editIntConsoleAttributes->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblColorEffect->setText(QCoreApplication::translate("MainWindow", "Color effect: Hello OpenCore!", nullptr));
        label_118->setText(QCoreApplication::translate("MainWindow", "Text color", nullptr));
        mycboxTextColor->setItemText(0, QCoreApplication::translate("MainWindow", "EFI_BLACK", nullptr));
        mycboxTextColor->setItemText(1, QCoreApplication::translate("MainWindow", "EFI_BLUE", nullptr));
        mycboxTextColor->setItemText(2, QCoreApplication::translate("MainWindow", "EFI_GREEN", nullptr));
        mycboxTextColor->setItemText(3, QCoreApplication::translate("MainWindow", "EFI_CYAN", nullptr));
        mycboxTextColor->setItemText(4, QCoreApplication::translate("MainWindow", "EFI_RED", nullptr));
        mycboxTextColor->setItemText(5, QCoreApplication::translate("MainWindow", "EFI_MAGENTA", nullptr));
        mycboxTextColor->setItemText(6, QCoreApplication::translate("MainWindow", "EFI_BROWN", nullptr));
        mycboxTextColor->setItemText(7, QCoreApplication::translate("MainWindow", "EFI_LIGHTGRAY", nullptr));
        mycboxTextColor->setItemText(8, QCoreApplication::translate("MainWindow", "EFI_DARKGRAY", nullptr));
        mycboxTextColor->setItemText(9, QCoreApplication::translate("MainWindow", "EFI_LIGHTBLUE", nullptr));
        mycboxTextColor->setItemText(10, QCoreApplication::translate("MainWindow", "EFI_LIGHTGREEN", nullptr));
        mycboxTextColor->setItemText(11, QCoreApplication::translate("MainWindow", "EFI_LIGHTCYAN", nullptr));
        mycboxTextColor->setItemText(12, QCoreApplication::translate("MainWindow", "EFI_LIGHTRED", nullptr));
        mycboxTextColor->setItemText(13, QCoreApplication::translate("MainWindow", "EFI_LIGHTMAGENTA", nullptr));
        mycboxTextColor->setItemText(14, QCoreApplication::translate("MainWindow", "EFI_YELLOW", nullptr));
        mycboxTextColor->setItemText(15, QCoreApplication::translate("MainWindow", "EFI_WHITE", nullptr));

        label_119->setText(QCoreApplication::translate("MainWindow", "Background color", nullptr));
        mycboxBackColor->setItemText(0, QCoreApplication::translate("MainWindow", "EFI_BACKGROUND_BLACK", nullptr));
        mycboxBackColor->setItemText(1, QCoreApplication::translate("MainWindow", "EFI_BACKGROUND_BLUE", nullptr));
        mycboxBackColor->setItemText(2, QCoreApplication::translate("MainWindow", "EFI_BACKGROUND_GREEN", nullptr));
        mycboxBackColor->setItemText(3, QCoreApplication::translate("MainWindow", "EFI_BACKGROUND_CYAN", nullptr));
        mycboxBackColor->setItemText(4, QCoreApplication::translate("MainWindow", "EFI_BACKGROUND_RED", nullptr));
        mycboxBackColor->setItemText(5, QCoreApplication::translate("MainWindow", "EFI_BACKGROUND_MAGENTA", nullptr));
        mycboxBackColor->setItemText(6, QCoreApplication::translate("MainWindow", "EFI_BACKGROUND_BROWN", nullptr));
        mycboxBackColor->setItemText(7, QCoreApplication::translate("MainWindow", "EFI_BACKGROUND_LIGHTGRAY", nullptr));

        tabMisc->setTabText(tabMisc->indexOf(tabMisc1), QCoreApplication::translate("MainWindow", "Boot", nullptr));
#if QT_CONFIG(statustip)
        chkAppleDebug->setStatusTip(QCoreApplication::translate("MainWindow", "Enable boot.efi debug log saving to OpenCore log.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleDebug->setText(QCoreApplication::translate("MainWindow", "AppleDebug", nullptr));
#if QT_CONFIG(statustip)
        chkApplePanic->setStatusTip(QCoreApplication::translate("MainWindow", " Save macOS kernel panic to OpenCore root partition.", nullptr));
#endif // QT_CONFIG(statustip)
        chkApplePanic->setText(QCoreApplication::translate("MainWindow", "ApplePanic", nullptr));
#if QT_CONFIG(statustip)
        chkDisableWatchDog->setStatusTip(QCoreApplication::translate("MainWindow", " Select firmwares may not succeed in quickly booting the operating system, especially in debug\n"
" mode, which results in watch dog timer aborting the process. This option turns off watch dog timer.", nullptr));
#endif // QT_CONFIG(statustip)
        chkDisableWatchDog->setText(QCoreApplication::translate("MainWindow", "DisableWatchDog", nullptr));
#if QT_CONFIG(statustip)
        chkSerialInit->setStatusTip(QCoreApplication::translate("MainWindow", "Perform serial port initialisation.", nullptr));
#endif // QT_CONFIG(statustip)
        chkSerialInit->setText(QCoreApplication::translate("MainWindow", "SerialInit", nullptr));
#if QT_CONFIG(statustip)
        chkSysReport->setStatusTip(QCoreApplication::translate("MainWindow", "Produce system report on ESP folder.", nullptr));
#endif // QT_CONFIG(statustip)
        chkSysReport->setText(QCoreApplication::translate("MainWindow", "SysReport", nullptr));
#if QT_CONFIG(statustip)
        label_39->setStatusTip(QCoreApplication::translate("MainWindow", " EDK II debug level bitmask (sum) showed onscreen. Unless Target enables console (onscreen)\n"
" printing, onscreen debug output will not be visible.", nullptr));
#endif // QT_CONFIG(statustip)
        label_39->setText(QCoreApplication::translate("MainWindow", "DisplayLevel", nullptr));
        lblDisplayLevel->setText(QCoreApplication::translate("MainWindow", "0x00000000", nullptr));
        btnDisplayLevel->setText(QCoreApplication::translate("MainWindow", "Select", nullptr));
#if QT_CONFIG(statustip)
        label_9->setStatusTip(QCoreApplication::translate("MainWindow", "Delay in microseconds performed after every printed line visible onscreen (i.e. console).", nullptr));
#endif // QT_CONFIG(statustip)
        label_9->setText(QCoreApplication::translate("MainWindow", "DisplayDelay", nullptr));
#if QT_CONFIG(tooltip)
        label_11->setToolTip(QCoreApplication::translate("MainWindow", "The following logging targets are supported:\n"
"\n"
"\342\200\242 0x01 (bit 0) \342\200\224 Enable logging, otherwise all log is discarded.\n"
"\342\200\242 0x02 (bit 1) \342\200\224 Enable basic console (onscreen) logging.\n"
"\342\200\242 0x04 (bit 2) \342\200\224 Enable logging to Data Hub.\n"
"\342\200\242 0x08 (bit 3) \342\200\224 Enable serial port logging.\n"
"\342\200\242 0x10 (bit 4) \342\200\224 Enable UEFI variable logging.\n"
"\342\200\242 0x20 (bit 5) \342\200\224 Enable non-volatile UEFI variable logging.\n"
"\342\200\242 0x40 (bit 6) \342\200\224 Enable logging to file.\n"
"\n"
"Console logging prints less than all the other variants. Depending on the build type (RELEASE, DEBUG, or NOOPT) different amount of logging may be read (from least to most).\n"
"----\n"
"\346\224\257\346\214\201\344\273\245\344\270\213\346\227\245\345\277\227\350\256\260\345\275\225\347\233\256\346\240\207\357\274\232\n"
"\n"
"- 0x01 (bit 0) - \345\220\257\347\224\250\346\227\245\345\277\227\350\256\260\345\275\225\357\274"
                        "\214\345\220\246\345\210\231\346\211\200\346\234\211\346\227\245\345\277\227\345\260\206\350\242\253\344\270\242\345\274\203\343\200\202\n"
"- 0x02 (bit 1) - \345\220\257\347\224\250\345\237\272\346\234\254\346\216\247\345\210\266\345\217\260(\345\261\217\345\271\225)\346\227\245\345\277\227\350\256\260\345\275\225\343\200\202\n"
"- 0x04(\344\275\2152)  - \345\220\257\347\224\250\345\210\260\346\225\260\346\215\256\344\270\255\345\277\203\347\232\204\346\227\245\345\277\227\350\256\260\345\275\225\343\200\202\n"
"- 0x08(\344\275\2153)  - \345\220\257\347\224\250\344\270\262\350\241\214\347\253\257\345\217\243\350\256\260\345\275\225\343\200\202\n"
"- 0x10 (\344\275\215 4) - \345\220\257\347\224\250 UEFI \345\217\230\351\207\217\350\256\260\345\275\225\343\200\202\n"
"- 0x20 (\344\275\215\345\205\203 5) - \345\220\257\347\224\250\351\235\236\346\230\223\345\244\261\346\200\247 UEFI \345\217\230\351\207\217\350\256\260\345\275\225\343\200\202\n"
"- 0x40 (\344\275\215 6) - \345\220\257\347\224\250\346\227\245\345"
                        "\277\227\350\256\260\345\275\225\350\207\263\346\226\207\344\273\266\343\200\202\n"
"\n"
"\346\216\247\345\210\266\345\217\260\346\227\245\345\277\227\350\256\260\345\275\225\347\232\204\346\211\223\345\215\260\351\207\217\346\257\224\346\211\200\346\234\211\345\205\266\344\273\226\345\217\230\351\207\217\345\260\221\343\200\202\346\240\271\346\215\256\346\236\204\345\273\272\347\261\273\345\236\213(RELEASE, DEBUG, \346\210\226 NOOPT)\357\274\214\345\217\257\350\203\275\344\274\232\350\257\273\345\217\226\344\270\215\345\220\214\346\225\260\351\207\217\347\232\204\346\227\245\345\277\227\350\256\260\345\275\225(\344\273\216\346\234\200\345\260\221\345\210\260\346\234\200\345\244\232)\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_11->setStatusTip(QCoreApplication::translate("MainWindow", "A bitmask (sum) of enabled logging targets. By default all the logging output is hidden, so this\n"
" option is required to be set when debugging is necessary.", nullptr));
#endif // QT_CONFIG(statustip)
        label_11->setText(QCoreApplication::translate("MainWindow", "Target", nullptr));
        lblTargetHex->setText(QCoreApplication::translate("MainWindow", "0x00", nullptr));
        mychkT1->setText(QCoreApplication::translate("MainWindow", "Enable logging, otherwise all log is discarded", nullptr));
        mychkT2->setText(QCoreApplication::translate("MainWindow", "Enable basic console (onscreen) logging", nullptr));
        mychkT6->setText(QCoreApplication::translate("MainWindow", "Enable non-volatile UEFI variable logging", nullptr));
        mychkT5->setText(QCoreApplication::translate("MainWindow", "Enable UEFI variable logging", nullptr));
        mychkT4->setText(QCoreApplication::translate("MainWindow", "Enable serial port logging", nullptr));
        mychkT3->setText(QCoreApplication::translate("MainWindow", "Enable logging to Data Hub", nullptr));
        mychkT7->setText(QCoreApplication::translate("MainWindow", "Enable logging to file", nullptr));
        tabMisc->setTabText(tabMisc->indexOf(tabMisc2), QCoreApplication::translate("MainWindow", "Debug", nullptr));
#if QT_CONFIG(statustip)
        chkAuthRestart->setStatusTip(QCoreApplication::translate("MainWindow", "Enable VirtualSMC-compatible authenticated restart.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAuthRestart->setText(QCoreApplication::translate("MainWindow", "AuthRestart", nullptr));
        chkAllowToggleSip->setText(QCoreApplication::translate("MainWindow", "AllowToggleSip", nullptr));
#if QT_CONFIG(statustip)
        chkAllowSetDefault->setStatusTip(QCoreApplication::translate("MainWindow", " Allow CTRL+Enter and CTRL+Index handling to set the default boot option in boot picker.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAllowSetDefault->setText(QCoreApplication::translate("MainWindow", "AllowSetDefault", nullptr));
#if QT_CONFIG(statustip)
        chkAllowNvramReset->setStatusTip(QCoreApplication::translate("MainWindow", " Allow CMD+OPT+P+R handling and enable showing NVRAM Reset entry in boot picker.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAllowNvramReset->setText(QCoreApplication::translate("MainWindow", "AllowNvramReset", nullptr));
#if QT_CONFIG(statustip)
        chkBlacklistAppleUpdate->setStatusTip(QCoreApplication::translate("MainWindow", "Ignore boot options trying to update Apple peripheral firmware (e.g. MultiUpdater.efi).", nullptr));
#endif // QT_CONFIG(statustip)
        chkBlacklistAppleUpdate->setText(QCoreApplication::translate("MainWindow", "BlacklistAppleUpdate", nullptr));
#if QT_CONFIG(statustip)
        chkEnablePassword->setStatusTip(QCoreApplication::translate("MainWindow", " Enable password protection to allow sensitive operations.", nullptr));
#endif // QT_CONFIG(statustip)
        chkEnablePassword->setText(QCoreApplication::translate("MainWindow", "EnablePassword", nullptr));
#if QT_CONFIG(statustip)
        label_27->setStatusTip(QCoreApplication::translate("MainWindow", "Define Disk Image (DMG) loading policy used for macOS Recovery.", nullptr));
#endif // QT_CONFIG(statustip)
        label_27->setText(QCoreApplication::translate("MainWindow", "DmgLoading", nullptr));
#if QT_CONFIG(statustip)
        label_16->setStatusTip(QCoreApplication::translate("MainWindow", " Enables vaulting mechanism in OpenCore.", nullptr));
#endif // QT_CONFIG(statustip)
        label_16->setText(QCoreApplication::translate("MainWindow", "Vault", nullptr));
#if QT_CONFIG(statustip)
        label_45->setStatusTip(QCoreApplication::translate("MainWindow", " Apple Secure Boot hardware model.", nullptr));
#endif // QT_CONFIG(statustip)
        label_45->setText(QCoreApplication::translate("MainWindow", "SecureBootModel", nullptr));
        cboxSecureBootModel->setItemText(0, QCoreApplication::translate("MainWindow", "Disabled", nullptr));
        cboxSecureBootModel->setItemText(1, QCoreApplication::translate("MainWindow", "Default", nullptr));
        cboxSecureBootModel->setItemText(2, QCoreApplication::translate("MainWindow", "j137-10.13.2 (17C2111)", nullptr));
        cboxSecureBootModel->setItemText(3, QCoreApplication::translate("MainWindow", "j680-10.13.6 (17G2112)", nullptr));
        cboxSecureBootModel->setItemText(4, QCoreApplication::translate("MainWindow", "j132-10.13.6 (17G2112)", nullptr));
        cboxSecureBootModel->setItemText(5, QCoreApplication::translate("MainWindow", "j174-10.14 (18A2063)", nullptr));
        cboxSecureBootModel->setItemText(6, QCoreApplication::translate("MainWindow", "j140k-10.14.1 (18B2084)", nullptr));
        cboxSecureBootModel->setItemText(7, QCoreApplication::translate("MainWindow", "j780-10.14.5 (18F132)", nullptr));
        cboxSecureBootModel->setItemText(8, QCoreApplication::translate("MainWindow", "j213-10.14.5 (18F2058)", nullptr));
        cboxSecureBootModel->setItemText(9, QCoreApplication::translate("MainWindow", "j140a-10.14.5 (18F2058)", nullptr));
        cboxSecureBootModel->setItemText(10, QCoreApplication::translate("MainWindow", "j152f-10.15.1 (19B2093)", nullptr));
        cboxSecureBootModel->setItemText(11, QCoreApplication::translate("MainWindow", "j160- 10.15.1 (19B88)", nullptr));
        cboxSecureBootModel->setItemText(12, QCoreApplication::translate("MainWindow", "j230k-10.15.3 (19D2064)", nullptr));
        cboxSecureBootModel->setItemText(13, QCoreApplication::translate("MainWindow", "j214k-10.15.4 (19E2269)", nullptr));
        cboxSecureBootModel->setItemText(14, QCoreApplication::translate("MainWindow", "j223-10.15.4 (19E2265)", nullptr));
        cboxSecureBootModel->setItemText(15, QCoreApplication::translate("MainWindow", "j215-10.15.5 (19F96)", nullptr));
        cboxSecureBootModel->setItemText(16, QCoreApplication::translate("MainWindow", "j185-10.15.6 (19G2005)", nullptr));
        cboxSecureBootModel->setItemText(17, QCoreApplication::translate("MainWindow", "j185f- 10.15.6 (19G2005)", nullptr));
        cboxSecureBootModel->setItemText(18, QCoreApplication::translate("MainWindow", "x86legacy-11.0.1 (20B29)", nullptr));

#if QT_CONFIG(statustip)
        label_44->setStatusTip(QCoreApplication::translate("MainWindow", "Apple Enclave Identifier.", nullptr));
#endif // QT_CONFIG(statustip)
        label_44->setText(QCoreApplication::translate("MainWindow", "ApECID", nullptr));
#if QT_CONFIG(statustip)
        label_14->setStatusTip(QCoreApplication::translate("MainWindow", " EDK II debug level bitmask (sum) causing CPU to halt (stop execution) after obtaining a message\n"
" of HaltLevel. Possible values match DisplayLevel values.", nullptr));
#endif // QT_CONFIG(statustip)
        label_14->setText(QCoreApplication::translate("MainWindow", "HaltLevel", nullptr));
        lblHaltLevel->setText(QCoreApplication::translate("MainWindow", "0x00000000", nullptr));
#if QT_CONFIG(statustip)
        label_110->setStatusTip(QCoreApplication::translate("MainWindow", " Sensitive data exposure bitmask (sum) to operating system.", nullptr));
#endif // QT_CONFIG(statustip)
        label_110->setText(QCoreApplication::translate("MainWindow", "ExposeSensitiveData", nullptr));
        lblExposeSensitiveData->setText(QCoreApplication::translate("MainWindow", "0x00", nullptr));
        btnExposeSensitiveData->setText(QCoreApplication::translate("MainWindow", "Select", nullptr));
#if QT_CONFIG(statustip)
        label_111->setStatusTip(QCoreApplication::translate("MainWindow", " Define operating system detection policy.", nullptr));
#endif // QT_CONFIG(statustip)
        label_111->setText(QCoreApplication::translate("MainWindow", "ScanPolicy", nullptr));
        lblScanPolicy->setText(QCoreApplication::translate("MainWindow", "0x00000000", nullptr));
        btnScanPolicy->setText(QCoreApplication::translate("MainWindow", "Select", nullptr));
        btnGetPassHash->setText(QCoreApplication::translate("MainWindow", "Generate password hash and password salt", nullptr));
        myeditPassInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Please enter a password value", nullptr));
#if QT_CONFIG(statustip)
        label_93->setStatusTip(QCoreApplication::translate("MainWindow", "Password hash used when EnabledPassword is set.", nullptr));
#endif // QT_CONFIG(statustip)
        label_93->setText(QCoreApplication::translate("MainWindow", "PasswordHash", nullptr));
#if QT_CONFIG(statustip)
        label_94->setStatusTip(QCoreApplication::translate("MainWindow", " Password salt used when EnabledPassword is set.", nullptr));
#endif // QT_CONFIG(statustip)
        label_94->setText(QCoreApplication::translate("MainWindow", "PasswordSalt", nullptr));
        tabMisc->setTabText(tabMisc->indexOf(tabMisc3), QCoreApplication::translate("MainWindow", "Security", nullptr));
        btnMiscBO_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnMiscBO_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnMiscBO_Del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        tabMisc->setTabText(tabMisc->indexOf(tabMisc4), QCoreApplication::translate("MainWindow", "BlessOverride", nullptr));
        btnMiscEntries_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnMiscEntries_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnMiscEntries_Del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        tabMisc->setTabText(tabMisc->indexOf(tabMisc5), QCoreApplication::translate("MainWindow", "Entries", nullptr));
        btnMiscTools_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnMiscTools_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnMiscTools_Del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        btnOpenToolsDir->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tabMisc->setTabText(tabMisc->indexOf(tabMisc6), QCoreApplication::translate("MainWindow", "Tools", nullptr));
        gboxCustom->setTitle(QCoreApplication::translate("MainWindow", "Custom", nullptr));
        editIntFifoControl->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        label_130->setText(QCoreApplication::translate("MainWindow", "FifoControl", nullptr));
        label_131->setText(QCoreApplication::translate("MainWindow", "LineControl", nullptr));
        editIntBaudRate->setText(QCoreApplication::translate("MainWindow", "115200", nullptr));
        editIntRegisterAccessWidth->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        editIntRegisterStride->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        editIntLineControl->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_128->setText(QCoreApplication::translate("MainWindow", "BaudRate", nullptr));
        label_134->setText(QCoreApplication::translate("MainWindow", "RegisterBase", nullptr));
        label_127->setText(QCoreApplication::translate("MainWindow", "ClockRate", nullptr));
        editIntRegisterBase->setText(QCoreApplication::translate("MainWindow", "1016", nullptr));
        label_129->setText(QCoreApplication::translate("MainWindow", "ExtendedTxFifoSize", nullptr));
        editDatPciDeviceInfo->setText(QCoreApplication::translate("MainWindow", "FF", nullptr));
        label_133->setText(QCoreApplication::translate("MainWindow", "RegisterAccessWidth", nullptr));
        label_132->setText(QCoreApplication::translate("MainWindow", "PciDeviceInfo", nullptr));
        label_135->setText(QCoreApplication::translate("MainWindow", "RegisterStride", nullptr));
        editIntClockRate->setText(QCoreApplication::translate("MainWindow", "1843200", nullptr));
        chkUseHardwareFlowControl->setText(QCoreApplication::translate("MainWindow", "UseHardwareFlowControl", nullptr));
        chkDetectCable->setText(QCoreApplication::translate("MainWindow", "DetectCable", nullptr));
        editIntExtendedTxFifoSize->setText(QCoreApplication::translate("MainWindow", "64", nullptr));
        chkUseMmio->setText(QCoreApplication::translate("MainWindow", "UseMmio", nullptr));
        tabMisc->setTabText(tabMisc->indexOf(tabMisc7), QCoreApplication::translate("MainWindow", "Serial", nullptr));
        btnNVRAMAdd_Add0->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnNVRAMAdd_Del0->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnNVRAMAdd_Del0->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        btnPresetNVAdd->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btnNVRAMAdd_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnNVRAMAdd_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnNVRAMAdd_Del->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        btnAddbootArgs->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        tabNVRAM->setTabText(tabNVRAM->indexOf(tabNVRAM1), QCoreApplication::translate("MainWindow", "Add", nullptr));
        btnNVRAMDel_Add0->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnNVRAMDel_Del0->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnNVRAMDel_Del0->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        btnPresetNVDelete->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btnNVRAMDel_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnNVRAMDel_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnNVRAMDel_Del->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        tabNVRAM->setTabText(tabNVRAM->indexOf(tabNVRAM2), QCoreApplication::translate("MainWindow", "Delete", nullptr));
        btnNVRAMLS_Add0->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnNVRAMLS_Del0->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnNVRAMLS_Del0->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        btnPresetNVLegacy->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btnNVRAMLS_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnNVRAMLS_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnNVRAMLS_Del->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        tabNVRAM->setTabText(tabNVRAM->indexOf(tabNVRAM3), QCoreApplication::translate("MainWindow", "LegacySchema", nullptr));
        gboxNVRAM->setTitle(QString());
#if QT_CONFIG(statustip)
        chkLegacyEnable->setStatusTip(QCoreApplication::translate("MainWindow", "Enables loading of NVRAM variable file named nvram.plist from EFI volume root.", nullptr));
#endif // QT_CONFIG(statustip)
        chkLegacyEnable->setText(QCoreApplication::translate("MainWindow", "LegacyEnable", nullptr));
#if QT_CONFIG(tooltip)
        chkLegacyOverwrite->setToolTip(QCoreApplication::translate("MainWindow", "Note: Only variables accessible from the operating system will be overwritten.\n"
"\n"
"----\n"
"\n"
"\346\263\250\346\204\217\357\274\232\345\217\252\346\234\211\344\273\216\346\223\215\344\275\234\347\263\273\347\273\237\350\256\277\351\227\256\347\232\204\345\217\230\351\207\217\346\211\215\344\274\232\350\242\253\350\246\206\347\233\226\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        chkLegacyOverwrite->setStatusTip(QCoreApplication::translate("MainWindow", " Permits overwriting firmware variables from nvram.plist.", nullptr));
#endif // QT_CONFIG(statustip)
        chkLegacyOverwrite->setText(QCoreApplication::translate("MainWindow", "LegacyOverwrite", nullptr));
#if QT_CONFIG(tooltip)
        chkWriteFlash->setToolTip(QCoreApplication::translate("MainWindow", "Note: This value is recommended to be enabled on most firmwares, but is left configurable for firmwares that may have issues with NVRAM variable storage garbage collection or alike.\n"
"\n"
"To read NVRAM variable value from macOS one could use nvram by concatenating variable GUID and name separated by : symbol. For example, nvram 7C436110-AB2A-4BBB-A880-FE41995C9F82:boot-args.\n"
"\n"
"A continuously updated variable list can be found in a corresponding document: NVRAM Variables.\n"
"\n"
"----\n"
"\n"
"\346\263\250\346\204\217:\345\273\272\350\256\256\345\234\250\345\244\247\345\244\232\346\225\260\345\233\272\344\273\266\344\270\212\345\220\257\347\224\250\350\257\245\345\200\274\357\274\214\344\275\206\345\257\271\344\272\216\345\217\257\350\203\275\345\255\230\345\234\250NVRAM\345\217\230\351\207\217\345\255\230\345\202\250\345\236\203\345\234\276\346\224\266\351\233\206\347\255\211\351\227\256\351\242\230\347\232\204\345\233\272\344\273\266\357\274\214\350\257\245\345\200\274\346\230\257\345\217\257\351\205"
                        "\215\347\275\256\347\232\204\343\200\202\n"
"\n"
"\350\246\201\344\273\216macOS\344\270\255\350\257\273\345\217\226nvram\345\217\230\351\207\217\345\200\274\357\274\214\345\217\257\344\273\245\351\200\232\350\277\207\350\277\236\346\216\245\345\217\230\351\207\217GUID\345\222\214\347\224\261:\347\254\246\345\217\267\345\210\206\351\232\224\347\232\204\345\220\215\347\247\260\346\235\245\344\275\277\347\224\250NVRAM\343\200\202\344\276\213\345\246\202\357\274\214NVRAM 7c 436110-AB2A-4BBB-A880-Fe 41995 c 9f 82:boot-args\343\200\202\n"
"\n"
"\344\270\215\346\226\255\346\233\264\346\226\260\347\232\204\345\217\230\351\207\217\345\210\227\350\241\250\345\217\257\344\273\245\345\234\250\347\233\270\345\272\224\347\232\204\346\226\207\346\241\243\344\270\255\346\211\276\345\210\260:NVRAM\345\217\230\351\207\217\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        chkWriteFlash->setStatusTip(QCoreApplication::translate("MainWindow", " Enables writing to flash memory for all added variables.", nullptr));
#endif // QT_CONFIG(statustip)
        chkWriteFlash->setText(QCoreApplication::translate("MainWindow", "WriteFlash", nullptr));
#if QT_CONFIG(statustip)
        chkSpoofVendor->setStatusTip(QCoreApplication::translate("MainWindow", "Sets SMBIOS vendor fields to Acidanthera.", nullptr));
#endif // QT_CONFIG(statustip)
        chkSpoofVendor->setText(QCoreApplication::translate("MainWindow", "SpoofVendor", nullptr));
#if QT_CONFIG(statustip)
        chkMaxBIOSVersion->setStatusTip(QCoreApplication::translate("MainWindow", " Sets BIOSVersion to 9999.999.999.999.999, recommended for legacy Macs when using Automatic\n"
" PlatformInfo to avoid BIOS updates in unofficially supported macOS versions.", nullptr));
#endif // QT_CONFIG(statustip)
        chkMaxBIOSVersion->setText(QCoreApplication::translate("MainWindow", "MaxBIOSVersion", nullptr));
#if QT_CONFIG(statustip)
        chkAdviseFeatures->setStatusTip(QCoreApplication::translate("MainWindow", "Forces Windows support in FirmwareFeatures.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAdviseFeatures->setText(QCoreApplication::translate("MainWindow", "AdviseFeatures", nullptr));
#if QT_CONFIG(statustip)
        label_18->setStatusTip(QCoreApplication::translate("MainWindow", "Refer to SMBIOS SystemProductName.", nullptr));
#endif // QT_CONFIG(statustip)
        label_18->setText(QCoreApplication::translate("MainWindow", "SystemProductName", nullptr));
        btnSystemProductName->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
#if QT_CONFIG(statustip)
        label_19->setStatusTip(QCoreApplication::translate("MainWindow", " Refer to SMBIOS SystemSerialNumber.", nullptr));
#endif // QT_CONFIG(statustip)
        label_19->setText(QCoreApplication::translate("MainWindow", "SystemSerialNumber", nullptr));
        btnSystemSerialNumber->setText(QCoreApplication::translate("MainWindow", "Check", nullptr));
#if QT_CONFIG(tooltip)
        label_17->setToolTip(QCoreApplication::translate("MainWindow", "Refer to SMBIOS BoardSerialNumber.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_17->setStatusTip(QCoreApplication::translate("MainWindow", "Refer to SMBIOS BoardSerialNumber.", nullptr));
#endif // QT_CONFIG(statustip)
        label_17->setText(QCoreApplication::translate("MainWindow", "MLB", nullptr));
#if QT_CONFIG(statustip)
        label_21->setStatusTip(QCoreApplication::translate("MainWindow", "Refer to SMBIOS SystemUUID.", nullptr));
#endif // QT_CONFIG(statustip)
        label_21->setText(QCoreApplication::translate("MainWindow", "SystemUUID", nullptr));
        btnSystemUUID->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
#if QT_CONFIG(statustip)
        label_20->setStatusTip(QCoreApplication::translate("MainWindow", "Refer to 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:ROM.", nullptr));
#endif // QT_CONFIG(statustip)
        label_20->setText(QCoreApplication::translate("MainWindow", "ROM", nullptr));
        btnROM->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
#if QT_CONFIG(statustip)
        label_96->setStatusTip(QCoreApplication::translate("MainWindow", " Indicates whether system memory is upgradable in PlatformFeature. This controls the visibility\n"
" of the Memory tab in About This Mac.", nullptr));
#endif // QT_CONFIG(statustip)
        label_96->setText(QCoreApplication::translate("MainWindow", "SystemMemoryStatus", nullptr));
#if QT_CONFIG(tooltip)
        label_95->setToolTip(QCoreApplication::translate("MainWindow", " Combined of Processor Major and Minor types.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_95->setStatusTip(QCoreApplication::translate("MainWindow", " Combined of Processor Major and Minor types.", nullptr));
#endif // QT_CONFIG(statustip)
        label_95->setText(QCoreApplication::translate("MainWindow", "ProcessorType", nullptr));
        editIntProcessorType_Generic->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnImport->setText(QCoreApplication::translate("MainWindow", "Import SMBIOS from Clover configuration file", nullptr));
        btnExport->setText(QCoreApplication::translate("MainWindow", "Export SMBIOS to a Clover configuration file", nullptr));
        tabPlatformInfo->setTabText(tabPlatformInfo->indexOf(tabPlatformInfo1), QCoreApplication::translate("MainWindow", "Generic", nullptr));
#if QT_CONFIG(statustip)
        label_46->setStatusTip(QCoreApplication::translate("MainWindow", "Sets ARTFrequency in gEfiProcessorSubClassGuid.", nullptr));
#endif // QT_CONFIG(statustip)
        label_46->setText(QCoreApplication::translate("MainWindow", "ARTFrequency", nullptr));
#if QT_CONFIG(statustip)
        label_48->setStatusTip(QCoreApplication::translate("MainWindow", " Sets board-rev in gEfiMiscSubClassGuid. Value found on Macs seems to correspond to internal\n"
" board revision (e.g. 01).", nullptr));
#endif // QT_CONFIG(statustip)
        label_48->setText(QCoreApplication::translate("MainWindow", "BoardRevision", nullptr));
#if QT_CONFIG(statustip)
        label_47->setStatusTip(QCoreApplication::translate("MainWindow", " Sets board-id in gEfiMiscSubClassGuid. Value found on Macs is equal to SMBIOS BoardProduct\n"
" in ASCII.", nullptr));
#endif // QT_CONFIG(statustip)
        label_47->setText(QCoreApplication::translate("MainWindow", "BoardProduct", nullptr));
#if QT_CONFIG(statustip)
        label_49->setStatusTip(QCoreApplication::translate("MainWindow", "Type: plist integer, 32-bit", nullptr));
#endif // QT_CONFIG(statustip)
        label_49->setText(QCoreApplication::translate("MainWindow", "DevicePathsSupported", nullptr));
#if QT_CONFIG(statustip)
        label_50->setStatusTip(QCoreApplication::translate("MainWindow", "Sets FSBFrequency in gEfiProcessorSubClassGuid.", nullptr));
#endif // QT_CONFIG(statustip)
        label_50->setText(QCoreApplication::translate("MainWindow", "FSBFrequency", nullptr));
#if QT_CONFIG(statustip)
        label_51->setStatusTip(QCoreApplication::translate("MainWindow", " Sets InitialTSC in gEfiProcessorSubClassGuid. Sets initial TSC value, normally 0.", nullptr));
#endif // QT_CONFIG(statustip)
        label_51->setText(QCoreApplication::translate("MainWindow", "InitialTSC", nullptr));
#if QT_CONFIG(statustip)
        label_52->setStatusTip(QCoreApplication::translate("MainWindow", "Sets name in gEfiMiscSubClassGuid. Value found on Macs is platform in ASCII.", nullptr));
#endif // QT_CONFIG(statustip)
        label_52->setText(QCoreApplication::translate("MainWindow", "PlatformName", nullptr));
#if QT_CONFIG(statustip)
        label_53->setStatusTip(QCoreApplication::translate("MainWindow", " Sets RBr in gEfiMiscSubClassGuid. Custom property read by VirtualSMC or FakeSMC to generate\n"
" SMC RBr key.", nullptr));
#endif // QT_CONFIG(statustip)
        label_53->setText(QCoreApplication::translate("MainWindow", "SmcBranch", nullptr));
#if QT_CONFIG(statustip)
        label_54->setStatusTip(QCoreApplication::translate("MainWindow", "Type: plist data, 8 bytes", nullptr));
#endif // QT_CONFIG(statustip)
        label_54->setText(QCoreApplication::translate("MainWindow", "SmcPlatform", nullptr));
#if QT_CONFIG(statustip)
        label_55->setStatusTip(QCoreApplication::translate("MainWindow", " Sets REV in gEfiMiscSubClassGuid. Custom property read by VirtualSMC or FakeSMC to generate\n"
" SMC REV key.", nullptr));
#endif // QT_CONFIG(statustip)
        label_55->setText(QCoreApplication::translate("MainWindow", "SmcRevision", nullptr));
#if QT_CONFIG(statustip)
        label_56->setStatusTip(QCoreApplication::translate("MainWindow", " Sets StartupPowerEvents in gEfiMiscSubClassGuid. Value found on Macs is power management\n"
" state bitmask, normally 0.", nullptr));
#endif // QT_CONFIG(statustip)
        label_56->setText(QCoreApplication::translate("MainWindow", "StartupPowerEvents", nullptr));
#if QT_CONFIG(statustip)
        label_57->setStatusTip(QCoreApplication::translate("MainWindow", " Sets Model in gEfiMiscSubClassGuid. Value found on Macs is equal to SMBIOS SystemProductName\n"
" in Unicode.", nullptr));
#endif // QT_CONFIG(statustip)
        label_57->setText(QCoreApplication::translate("MainWindow", "SystemProductName", nullptr));
#if QT_CONFIG(statustip)
        label_58->setStatusTip(QCoreApplication::translate("MainWindow", "Sets SystemSerialNumber in gEfiMiscSubClassGuid. Value found on Macs is equal to SMBIOS\n"
" SystemSerialNumber in Unicode.", nullptr));
#endif // QT_CONFIG(statustip)
        label_58->setText(QCoreApplication::translate("MainWindow", "SystemSerialNumber", nullptr));
#if QT_CONFIG(statustip)
        label_59->setStatusTip(QCoreApplication::translate("MainWindow", "Sets system-id in gEfiMiscSubClassGuid. Value found on Macs is equal to SMBIOS SystemUUID.", nullptr));
#endif // QT_CONFIG(statustip)
        label_59->setText(QCoreApplication::translate("MainWindow", "SystemUUID", nullptr));
        tabPlatformInfo->setTabText(tabPlatformInfo->indexOf(tabPlatformInfo2), QCoreApplication::translate("MainWindow", "DataHub", nullptr));
#if QT_CONFIG(statustip)
        label_105->setStatusTip(QCoreApplication::translate("MainWindow", "Specifies the data width, in bits, of the memory. A DataWidth of 0 and a TotalWidth of 8\n"
" indicates that the device is being used solely to provide 8 error-correction bits.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_102->setStatusTip(QCoreApplication::translate("MainWindow", "Physical Memory Array (Type 16) \342\200\224 Memory Error Correction", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_100->setStatusTip(QCoreApplication::translate("MainWindow", "Memory Device (Type 17) \342\200\224 Form Factor", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_101->setStatusTip(QCoreApplication::translate("MainWindow", "Specifies the total width, in bits, of the memory, including any check or error-correction bits. If\n"
" there are no error-correction bits, this value should be equal to DataWidth.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_103->setStatusTip(QCoreApplication::translate("MainWindow", "Specifies the memory type. Commonly used types are listed below.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_104->setStatusTip(QCoreApplication::translate("MainWindow", " Specifies additional memory type information.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_99->setStatusTip(QCoreApplication::translate("MainWindow", " Physical Memory Array (Type 16) \342\200\224 Maximum Capacity", nullptr));
#endif // QT_CONFIG(statustip)
        btnDevices_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnDevices_del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnDevices_del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        tabPlatformInfo->setTabText(tabPlatformInfo->indexOf(tabPlatformInfo3), QCoreApplication::translate("MainWindow", "Memory", nullptr));
#if QT_CONFIG(statustip)
        label_60->setStatusTip(QCoreApplication::translate("MainWindow", "Specifies the value of NVRAM variable 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:HW_BID.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_61->setStatusTip(QCoreApplication::translate("MainWindow", " This variable comes in pair with FirmwareFeaturesMask.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_62->setStatusTip(QCoreApplication::translate("MainWindow", " This variable comes in pair with FirmwareFeatures.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_63->setStatusTip(QCoreApplication::translate("MainWindow", " Specifies the values of NVRAM variables 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:HW_MLB and\n"
" 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:MLB.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_64->setStatusTip(QCoreApplication::translate("MainWindow", "Specifies the values of NVRAM variables 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:HW_ROM and\n"
" 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:ROM.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_109->setStatusTip(QCoreApplication::translate("MainWindow", "Specifies the values of NVRAM variables 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:HW_SSN and\n"
" 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:SSN.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        editSystemSerialNumber_PNVRAM->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSystemSerialNumber_PNVRAM->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_106->setStatusTip(QCoreApplication::translate("MainWindow", "Specifies the value of NVRAM variable 4D1EDE05-38C7-4A6A-9CC6-4BCCA8B38C14:system-id\n"
" for boot services only. The value found on Macs is equal to SMBIOS SystemUUID.", nullptr));
#endif // QT_CONFIG(statustip)
        tabPlatformInfo->setTabText(tabPlatformInfo->indexOf(tabPlatformInfo4), QCoreApplication::translate("MainWindow", "PlatformNVRAM", nullptr));
#if QT_CONFIG(statustip)
        label_71->setStatusTip(QCoreApplication::translate("MainWindow", "Asset tag number. Varies, may be empty or Type2 - Board Asset Tag.", nullptr));
#endif // QT_CONFIG(statustip)
        label_71->setText(QCoreApplication::translate("MainWindow", "BoardAssetTag", nullptr));
#if QT_CONFIG(statustip)
        label_73->setStatusTip(QCoreApplication::translate("MainWindow", "Varies, may be empty or Part Component.", nullptr));
#endif // QT_CONFIG(statustip)
        label_73->setText(QCoreApplication::translate("MainWindow", "BoardLocationInChassis", nullptr));
#if QT_CONFIG(statustip)
        label_75->setStatusTip(QCoreApplication::translate("MainWindow", " Board manufacturer. All rules of SystemManufacturer do apply.", nullptr));
#endif // QT_CONFIG(statustip)
        label_75->setText(QCoreApplication::translate("MainWindow", "BoardManufacturer", nullptr));
#if QT_CONFIG(statustip)
        label_77->setStatusTip(QCoreApplication::translate("MainWindow", "Mac Board ID (board-id). May look like Mac-7BA5B2D9E42DDD94 or Mac-F221BEC8 in older\n"
" models.", nullptr));
#endif // QT_CONFIG(statustip)
        label_77->setText(QCoreApplication::translate("MainWindow", "BoardProduct", nullptr));
#if QT_CONFIG(statustip)
        label_81->setStatusTip(QCoreApplication::translate("MainWindow", " Either 0xA (Motherboard (includes processor, memory, and I/O) or 0xB (Processor/Memory\n"
" Module), refer to Table 15 \342\200\223 Baseboard: Board Type for more details.", nullptr));
#endif // QT_CONFIG(statustip)
        label_81->setText(QCoreApplication::translate("MainWindow", "BoardType", nullptr));
#if QT_CONFIG(statustip)
        label_83->setStatusTip(QCoreApplication::translate("MainWindow", "Board version number. Varies, may match SystemProductName or SystemProductVersion.", nullptr));
#endif // QT_CONFIG(statustip)
        label_83->setText(QCoreApplication::translate("MainWindow", "BoardVersion", nullptr));
#if QT_CONFIG(statustip)
        label_65->setStatusTip(QCoreApplication::translate("MainWindow", " Firmware release date. Similar to BIOSVersion. May look like 12/08/2017.", nullptr));
#endif // QT_CONFIG(statustip)
        label_65->setText(QCoreApplication::translate("MainWindow", "BIOSReleaseDate", nullptr));
#if QT_CONFIG(statustip)
        label_67->setStatusTip(QCoreApplication::translate("MainWindow", " BIOS Vendor. All rules of SystemManufacturer do apply.", nullptr));
#endif // QT_CONFIG(statustip)
        label_67->setText(QCoreApplication::translate("MainWindow", "BIOSVendor", nullptr));
#if QT_CONFIG(statustip)
        label_85->setStatusTip(QCoreApplication::translate("MainWindow", "Chassis type name. Varies, could be empty or MacBook-Aluminum.", nullptr));
#endif // QT_CONFIG(statustip)
        label_85->setText(QCoreApplication::translate("MainWindow", "ChassisAssetTag", nullptr));
#if QT_CONFIG(statustip)
        label_87->setStatusTip(QCoreApplication::translate("MainWindow", "Board manufacturer. All rules of SystemManufacturer do apply.", nullptr));
#endif // QT_CONFIG(statustip)
        label_87->setText(QCoreApplication::translate("MainWindow", "ChassisManufacturer", nullptr));
#if QT_CONFIG(statustip)
        label_89->setStatusTip(QCoreApplication::translate("MainWindow", " Should match SystemSerialNumber.", nullptr));
#endif // QT_CONFIG(statustip)
        label_89->setText(QCoreApplication::translate("MainWindow", "ChassisSerialNumber", nullptr));
#if QT_CONFIG(statustip)
        label_91->setStatusTip(QCoreApplication::translate("MainWindow", " Chassis type, refer to Table 17 \342\200\224 System Enclosure or Chassis Types for more details.", nullptr));
#endif // QT_CONFIG(statustip)
        label_91->setText(QCoreApplication::translate("MainWindow", "ChassisType", nullptr));
#if QT_CONFIG(statustip)
        label_84->setStatusTip(QCoreApplication::translate("MainWindow", "Mac Board ID (board-id). May look like Mac-7BA5B2D9E42DDD94 or Mac-F221BEC8 in older models. Sometimes it can be just empty.", nullptr));
#endif // QT_CONFIG(statustip)
        label_84->setText(QCoreApplication::translate("MainWindow", "SystemSKUNumber", nullptr));
#if QT_CONFIG(statustip)
        label_78->setStatusTip(QCoreApplication::translate("MainWindow", "Family name. May look like iMac Pro.", nullptr));
#endif // QT_CONFIG(statustip)
        label_78->setText(QCoreApplication::translate("MainWindow", "SystemFamily", nullptr));
#if QT_CONFIG(statustip)
        label_82->setStatusTip(QCoreApplication::translate("MainWindow", "SMBIOS: System Information (Type 1), Product Name", nullptr));
#endif // QT_CONFIG(statustip)
        label_82->setText(QCoreApplication::translate("MainWindow", "SystemProductName", nullptr));
#if QT_CONFIG(statustip)
        label_80->setStatusTip(QCoreApplication::translate("MainWindow", "SMBIOS: System Information (Type 1) \342\200\224 Manufacturer", nullptr));
#endif // QT_CONFIG(statustip)
        label_80->setText(QCoreApplication::translate("MainWindow", "SystemManufacturer", nullptr));
#if QT_CONFIG(statustip)
        label_88->setStatusTip(QCoreApplication::translate("MainWindow", " A UUID is an identifier that is designed to be unique across both time and space. It requires no\n"
" central registration process.", nullptr));
#endif // QT_CONFIG(statustip)
        label_88->setText(QCoreApplication::translate("MainWindow", "SystemUUID", nullptr));
#if QT_CONFIG(statustip)
        label_68->setStatusTip(QCoreApplication::translate("MainWindow", " 64-bit firmware features bitmask. Refer to AppleFeatures.h for more details. Lower 32 bits match\n"
" FirmwareFeatures. Upper 64 bits match ExtendedFirmwareFeatures.", nullptr));
#endif // QT_CONFIG(statustip)
        label_68->setText(QCoreApplication::translate("MainWindow", "FirmwareFeatures", nullptr));
#if QT_CONFIG(statustip)
        label_90->setStatusTip(QCoreApplication::translate("MainWindow", " Product iteration version number. May look like 1.1.", nullptr));
#endif // QT_CONFIG(statustip)
        label_90->setText(QCoreApplication::translate("MainWindow", "SystemVersion", nullptr));
#if QT_CONFIG(statustip)
        label_92->setStatusTip(QCoreApplication::translate("MainWindow", " Supported bits of extended firmware features bitmask. Refer to AppleFeatures.h for more details.\n"
" Lower 32 bits match FirmwareFeaturesMask. Upper 64 bits match ExtendedFirmwareFeaturesMask.", nullptr));
#endif // QT_CONFIG(statustip)
        label_92->setText(QCoreApplication::translate("MainWindow", "FirmwareFeaturesMask", nullptr));
#if QT_CONFIG(statustip)
        label_74->setStatusTip(QCoreApplication::translate("MainWindow", " Combined of Processor Major and Minor types.", nullptr));
#endif // QT_CONFIG(statustip)
        label_74->setText(QCoreApplication::translate("MainWindow", "ProcessorType", nullptr));
#if QT_CONFIG(statustip)
        label_76->setStatusTip(QCoreApplication::translate("MainWindow", "ASCII string containing SMC version in upper case. Missing on T2 based Macs. Ignored when\n"
" zero.", nullptr));
#endif // QT_CONFIG(statustip)
        label_76->setText(QCoreApplication::translate("MainWindow", "SmcVersion", nullptr));
#if QT_CONFIG(statustip)
        label_72->setStatusTip(QCoreApplication::translate("MainWindow", " Platform features bitmask. Refer to AppleFeatures.h for more details. Use 0xFFFFFFFF value to\n"
" not provide this table.", nullptr));
#endif // QT_CONFIG(statustip)
        label_72->setText(QCoreApplication::translate("MainWindow", "PlatformFeature", nullptr));
#if QT_CONFIG(statustip)
        label_86->setStatusTip(QCoreApplication::translate("MainWindow", " Product serial number in defined format. Known formats are described in macserial.", nullptr));
#endif // QT_CONFIG(statustip)
        label_86->setText(QCoreApplication::translate("MainWindow", "SystemSerialNumber", nullptr));
#if QT_CONFIG(statustip)
        label_66->setStatusTip(QCoreApplication::translate("MainWindow", " Should match BoardProduct.", nullptr));
#endif // QT_CONFIG(statustip)
        label_66->setText(QCoreApplication::translate("MainWindow", "ChassisVersion", nullptr));
#if QT_CONFIG(statustip)
        label_69->setStatusTip(QCoreApplication::translate("MainWindow", "BIOS Information (Type 0) \342\200\224 BIOS Version", nullptr));
#endif // QT_CONFIG(statustip)
        label_69->setText(QCoreApplication::translate("MainWindow", "BIOSVersion", nullptr));
#if QT_CONFIG(statustip)
        label_79->setStatusTip(QCoreApplication::translate("MainWindow", "Board serial number in defined format. Known formats are described in macserial.", nullptr));
#endif // QT_CONFIG(statustip)
        label_79->setText(QCoreApplication::translate("MainWindow", "BoardSerialNumber", nullptr));
        tabPlatformInfo->setTabText(tabPlatformInfo->indexOf(tabPlatformInfo5), QCoreApplication::translate("MainWindow", "SMBIOS", nullptr));
        tabPlatformInfo->setTabText(tabPlatformInfo->indexOf(tabPlatformInfo6), QCoreApplication::translate("MainWindow", "Seriallnfo", nullptr));
        gbox01->setTitle(QString());
#if QT_CONFIG(statustip)
        chkAutomatic->setStatusTip(QCoreApplication::translate("MainWindow", "Generate PlatformInfo based on the Generic section instead of using values from the DataHub,\n"
" NVRAM, and SMBIOS sections.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        chkAutomatic->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        chkAutomatic->setText(QCoreApplication::translate("MainWindow", "Automatic", nullptr));
#if QT_CONFIG(tooltip)
        mychkSaveDataHub->setToolTip(QCoreApplication::translate("MainWindow", "Description: When \"Automatic\" is selected, does it retain data such as \"DataHub\" , \"PlatformNVRAM\", and \342\200\234SMBIOS\342\200\235.\n"
"----\n"
"\346\217\217\350\277\260\357\274\232\351\200\211\346\213\251\342\200\234Automatic\342\200\234\346\227\266\357\274\214\346\230\257\345\220\246\344\277\235\347\225\231\342\200\234DataHub\342\200\235\343\200\201\342\200\234PlatformNVRAM\342\200\235\343\200\201\342\200\234SMBIOS\342\200\235\344\271\213\347\261\273\347\232\204\346\225\260\346\215\256\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        mychkSaveDataHub->setText(QCoreApplication::translate("MainWindow", "Keep data such as \"Datahub\"", nullptr));
#if QT_CONFIG(statustip)
        chkCustomMemory->setStatusTip(QCoreApplication::translate("MainWindow", "Use custom memory configuration defined in the Memory section. This completely replaces any\n"
" existing memory configuration in SMBIOS, and is only active when UpdateSMBIOS is set to true.", nullptr));
#endif // QT_CONFIG(statustip)
        chkCustomMemory->setText(QCoreApplication::translate("MainWindow", "CustomMemory", nullptr));
#if QT_CONFIG(statustip)
        chkUpdateDataHub->setStatusTip(QCoreApplication::translate("MainWindow", "Update Data Hub fields. These fields are read from the Generic or DataHub sections depending\n"
" on the setting of the Automatic property.", nullptr));
#endif // QT_CONFIG(statustip)
        chkUpdateDataHub->setText(QCoreApplication::translate("MainWindow", "UpdateDataHub", nullptr));
#if QT_CONFIG(statustip)
        chkUseRawUuidEncoding->setStatusTip(QCoreApplication::translate("MainWindow", "Use raw encoding for SMBIOS UUIDs.", nullptr));
#endif // QT_CONFIG(statustip)
        chkUseRawUuidEncoding->setText(QCoreApplication::translate("MainWindow", "UseRawUuidEncoding", nullptr));
#if QT_CONFIG(statustip)
        chkUpdateSMBIOS->setStatusTip(QCoreApplication::translate("MainWindow", "Update SMBIOS fields. These fields are read from Generic or SMBIOS sections depending on\n"
" Automatic value.", nullptr));
#endif // QT_CONFIG(statustip)
        chkUpdateSMBIOS->setText(QCoreApplication::translate("MainWindow", "UpdateSMBIOS", nullptr));
#if QT_CONFIG(statustip)
        chkUpdateNVRAM->setStatusTip(QCoreApplication::translate("MainWindow", " Update NVRAM fields related to platform information.", nullptr));
#endif // QT_CONFIG(statustip)
        chkUpdateNVRAM->setText(QCoreApplication::translate("MainWindow", "UpdateNVRAM", nullptr));
#if QT_CONFIG(statustip)
        label_22->setStatusTip(QCoreApplication::translate("MainWindow", " Update SMBIOS fields approach.", nullptr));
#endif // QT_CONFIG(statustip)
        label_22->setText(QCoreApplication::translate("MainWindow", "UpdateSMBIOSMode", nullptr));
#if QT_CONFIG(statustip)
        chkEnableJumpstart->setStatusTip(QCoreApplication::translate("MainWindow", " Load embedded APFS drivers from APFS containers.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        chkGlobalConnect->setStatusTip(QCoreApplication::translate("MainWindow", " Perform full device connection during APFS loading.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        chkHideVerbose->setStatusTip(QCoreApplication::translate("MainWindow", "Hide verbose output from APFS driver.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        chkJumpstartHotPlug->setStatusTip(QCoreApplication::translate("MainWindow", " Load APFS drivers for newly connected devices.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        label_31->setStatusTip(QCoreApplication::translate("MainWindow", "Minimal allowed APFS driver date.", nullptr));
#endif // QT_CONFIG(statustip)
        editIntMinDate->setText(QCoreApplication::translate("MainWindow", "-1", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "Select date", nullptr));
#if QT_CONFIG(statustip)
        label_30->setStatusTip(QCoreApplication::translate("MainWindow", "Minimal allowed APFS driver version.", nullptr));
#endif // QT_CONFIG(statustip)
        editIntMinVersion->setText(QCoreApplication::translate("MainWindow", "-1", nullptr));
        tabUEFI->setTabText(tabUEFI->indexOf(tabUEFI1), QCoreApplication::translate("MainWindow", "APFS", nullptr));
#if QT_CONFIG(tooltip)
        chkGraphicsInputMirroring->setToolTip(QCoreApplication::translate("MainWindow", "Type: plist boolean\n"
"\n"
"Description: Apple\342\200\231s own implementation of AppleEvent prevents keyboard input during graphics applications from appearing on the basic console input stream.\n"
"\n"
"With the default setting of false, OC\342\200\231s builtin implementation of AppleEvent replicates this behaviour.\n"
"On non-Apple hardware this can stop keyboard input working in graphics-based applications such as Windows BitLocker which use non-Apple key input methods.\n"
"The recommended setting on all hardware is true.\n"
"\n"
"Note: AppleEvent\342\200\231s default behaviour is intended to prevent unwanted queued keystrokes from appearing after exiting graphics-based UEFI applications; this issue is already handled separately within OpenCore.\n"
"\n"
"\342\200\242 true \342\200\224 Allow keyboard input to reach graphics mode apps which are not using Apple input protocols.\n"
"\342\200\242 false \342\200\224 Prevent key input mirroring to non-Apple protocols when in graphics mode.\n"
"----\n"
"\347\261\273"
                        "\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\346\217\217\350\277\260\357\274\232\350\213\271\346\236\234\345\205\254\345\217\270\350\207\252\345\267\261\345\256\236\347\216\260\347\232\204AppleEvent\351\230\262\346\255\242\345\233\276\345\275\242\345\272\224\347\224\250\347\250\213\345\272\217\344\270\255\347\232\204\351\224\256\347\233\230\350\276\223\345\205\245\345\207\272\347\216\260\345\234\250\345\237\272\346\234\254\346\216\247\345\210\266\345\217\260\350\276\223\345\205\245\346\265\201\344\270\255\343\200\202\n"
"\n"
"\351\273\230\350\256\244\350\256\276\347\275\256\344\270\272false\357\274\214OC\345\257\271AppleEvent\347\232\204\345\206\205\347\275\256\345\256\236\347\216\260\345\244\215\345\210\266\344\272\206\350\277\231\347\247\215\350\241\214\344\270\272\343\200\202\n"
"\345\234\250\351\235\236\350\213\271\346\236\234\347\241\254\344\273\266\344\270\212\357\274\214\350\277\231\345\217\257\350\203\275\344\274\232\351\230\273\346\255\242\351\224\256\347\233\230\350\276"
                        "\223\345\205\245\345\234\250\345\237\272\344\272\216\345\233\276\345\275\242\347\232\204\345\272\224\347\224\250\347\250\213\345\272\217\344\270\255\345\267\245\344\275\234\357\274\214\345\246\202\344\275\277\347\224\250\351\235\236\350\213\271\346\236\234\346\214\211\351\224\256\350\276\223\345\205\245\346\226\271\346\263\225\347\232\204Windows BitLocker\343\200\202\n"
"\345\234\250\346\211\200\346\234\211\347\241\254\344\273\266\344\270\212\347\232\204\346\216\250\350\215\220\350\256\276\347\275\256\346\230\257true\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232AppleEvent\347\232\204\351\273\230\350\256\244\350\241\214\344\270\272\346\227\250\345\234\250\351\230\262\346\255\242\351\200\200\345\207\272\345\237\272\344\272\216\345\233\276\345\275\242\347\232\204UEFI\345\272\224\347\224\250\347\250\213\345\272\217\345\220\216\345\207\272\347\216\260\344\270\215\351\234\200\350\246\201\347\232\204\346\216\222\351\230\237\346\214\211\351\224\256\357\274\233\350\277\231\344\270\252\351\227\256\351\242\230"
                        "\345\267\262\347\273\217\345\234\250OpenCore\344\270\255\345\215\225\347\213\254\345\244\204\347\220\206\343\200\202\n"
"\n"
"- true - \345\205\201\350\256\270\351\224\256\347\233\230\350\276\223\345\205\245\345\210\260\350\276\276\344\270\215\344\275\277\347\224\250\350\213\271\346\236\234\350\276\223\345\205\245\345\215\217\350\256\256\347\232\204\345\233\276\345\275\242\346\250\241\345\274\217\345\272\224\347\224\250\347\250\213\345\272\217\343\200\202\n"
"- false - \351\230\262\346\255\242\345\234\250\345\233\276\345\275\242\346\250\241\345\274\217\344\270\213\345\260\206\346\214\211\351\224\256\350\276\223\345\205\245\351\225\234\345\203\217\345\210\260\351\235\236\350\213\271\346\236\234\345\215\217\350\256\256\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        chkGraphicsInputMirroring->setText(QCoreApplication::translate("MainWindow", "GraphicsInputMirroring", nullptr));
#if QT_CONFIG(statustip)
        chkCustomDelays->setStatusTip(QCoreApplication::translate("MainWindow", "Enable custom key repeat delays when using the OpenCore implementation of the Apple Event\n"
" protocol. Has no effect when using the OEM Apple implementation (see AppleEvent setting).", nullptr));
#endif // QT_CONFIG(statustip)
        chkCustomDelays->setText(QCoreApplication::translate("MainWindow", "CustomDelays", nullptr));
#if QT_CONFIG(statustip)
        label_114->setStatusTip(QCoreApplication::translate("MainWindow", "Determine whether OC builtin or OEM Apple Event protocol is used.", nullptr));
#endif // QT_CONFIG(statustip)

#if QT_CONFIG(statustip)
        label_116->setStatusTip(QCoreApplication::translate("MainWindow", "Configures the initial delay before keyboard key repeats in OpenCore implementation of Apple\n"
" Event protocol, in units of 10ms.", nullptr));
#endif // QT_CONFIG(statustip)
        editIntKeyInitialDelay->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(statustip)
        label_113->setStatusTip(QCoreApplication::translate("MainWindow", "Configures the gap between keyboard key repeats in OpenCore implementation of Apple Event\n"
" protocol, in units of 10ms.", nullptr));
#endif // QT_CONFIG(statustip)
        editIntKeySubsequentDelay->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        lblPointerPollMask->setText(QCoreApplication::translate("MainWindow", "PointerPollMask", nullptr));
        editIntPointerPollMask->setText(QCoreApplication::translate("MainWindow", "-1", nullptr));
        lblPointerPollMax->setText(QCoreApplication::translate("MainWindow", "PointerPollMax", nullptr));
        editIntPointerPollMax->setText(QCoreApplication::translate("MainWindow", "80", nullptr));
        lblPointerPollMin->setText(QCoreApplication::translate("MainWindow", "PointerPollMin", nullptr));
        editIntPointerPollMin->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
#if QT_CONFIG(statustip)
        label_112->setStatusTip(QCoreApplication::translate("MainWindow", "Configure pointer speed divisor in OpenCore implementation of Apple Event protocol. Has no\n"
" effect when using the OEM Apple implementation (see AppleEvent setting).", nullptr));
#endif // QT_CONFIG(statustip)
        editIntPointerSpeedDiv->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(statustip)
        label_117->setStatusTip(QCoreApplication::translate("MainWindow", " Configure pointer speed multiplier in OpenCore implementation of Apple Event protocol. Has no\n"
" effect when using the OEM Apple implementation (see AppleEvent setting).", nullptr));
#endif // QT_CONFIG(statustip)
        editIntPointerSpeedMul->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        tabUEFI->setTabText(tabUEFI->indexOf(tabUEFI2), QCoreApplication::translate("MainWindow", "AppleInput", nullptr));
#if QT_CONFIG(statustip)
        chkAudioSupport->setStatusTip(QCoreApplication::translate("MainWindow", "Activate audio support by connecting to a backend driver.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAudioSupport->setText(QCoreApplication::translate("MainWindow", "AudioSupport", nullptr));
        chkDisconnectHda->setText(QCoreApplication::translate("MainWindow", "DisconnectHda", nullptr));
#if QT_CONFIG(statustip)
        chkResetTrafficClass->setStatusTip(QCoreApplication::translate("MainWindow", " Set HDA Traffic Class Select Register to TC0.", nullptr));
#endif // QT_CONFIG(statustip)
        chkResetTrafficClass->setText(QCoreApplication::translate("MainWindow", "ResetTrafficClass", nullptr));
#if QT_CONFIG(statustip)
        label_32->setStatusTip(QCoreApplication::translate("MainWindow", "Codec address on the specified audio controller for audio support.", nullptr));
#endif // QT_CONFIG(statustip)
        label_32->setText(QCoreApplication::translate("MainWindow", "AudioCodec", nullptr));
#if QT_CONFIG(statustip)
        label_33->setStatusTip(QCoreApplication::translate("MainWindow", "Device path of the specified audio controller for audio support.", nullptr));
#endif // QT_CONFIG(statustip)
        label_33->setText(QCoreApplication::translate("MainWindow", "AudioDevice", nullptr));
        lblAudioOutMask->setText(QCoreApplication::translate("MainWindow", "AudioOutMask", nullptr));
        editIntAudioOutMask->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(statustip)
        label_35->setStatusTip(QCoreApplication::translate("MainWindow", "Minimal heard volume level from 0 to 100.", nullptr));
#endif // QT_CONFIG(statustip)
        label_35->setText(QCoreApplication::translate("MainWindow", "MaximumGain", nullptr));
        editIntMaximumGain->setText(QCoreApplication::translate("MainWindow", "-15", nullptr));
        lblSystemAudioVolume->setText(QCoreApplication::translate("MainWindow", "SystemAudioVolume: 0x00 ( 00 ) ", nullptr));
#if QT_CONFIG(statustip)
        label_36->setStatusTip(QCoreApplication::translate("MainWindow", "Multiplication coefficient for system volume to raw volume linear translation from 0 to 1000.", nullptr));
#endif // QT_CONFIG(statustip)
        label_36->setText(QCoreApplication::translate("MainWindow", "MinimumAssistGain", nullptr));
        editIntMinimumAssistGain->setText(QCoreApplication::translate("MainWindow", "-30", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "MinimumAudibleGain", nullptr));
        editIntMinimumAudibleGain->setText(QCoreApplication::translate("MainWindow", "-55", nullptr));
#if QT_CONFIG(statustip)
        label_70->setStatusTip(QCoreApplication::translate("MainWindow", "Play chime sound at startup.", nullptr));
#endif // QT_CONFIG(statustip)
        label_70->setText(QCoreApplication::translate("MainWindow", "PlayChime", nullptr));
#if QT_CONFIG(statustip)
        label_107->setStatusTip(QCoreApplication::translate("MainWindow", " Audio codec reconfiguration delay in microseconds.", nullptr));
#endif // QT_CONFIG(statustip)
        label_107->setText(QCoreApplication::translate("MainWindow", "SetupDelay", nullptr));
        tabUEFI->setTabText(tabUEFI->indexOf(tabUEFI3), QCoreApplication::translate("MainWindow", "Audio", nullptr));
        btnUEFIDrivers_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnUEFIDrivers_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnUEFIDrivers_Del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        btnUp_UEFI_Drivers->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        btnDown_UEFI_Drivers->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        btnOpenDriversDir->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tabUEFI->setTabText(tabUEFI->indexOf(tabUEFI4), QCoreApplication::translate("MainWindow", "Drivers", nullptr));
#if QT_CONFIG(statustip)
        chkKeySupport->setStatusTip(QCoreApplication::translate("MainWindow", " Enable internal keyboard input translation to AppleKeyMapAggregator protocol.", nullptr));
#endif // QT_CONFIG(statustip)
        chkKeySupport->setText(QCoreApplication::translate("MainWindow", "KeySupport", nullptr));
#if QT_CONFIG(statustip)
        chkKeySwap->setStatusTip(QCoreApplication::translate("MainWindow", "Swap Command and Option keys during submission.", nullptr));
#endif // QT_CONFIG(statustip)
        chkKeySwap->setText(QCoreApplication::translate("MainWindow", "KeySwap", nullptr));
#if QT_CONFIG(statustip)
        chkKeyFiltering->setStatusTip(QCoreApplication::translate("MainWindow", " Enable keyboard input sanity checking.", nullptr));
#endif // QT_CONFIG(statustip)
        chkKeyFiltering->setText(QCoreApplication::translate("MainWindow", "KeyFiltering", nullptr));
#if QT_CONFIG(statustip)
        chkPointerSupport->setStatusTip(QCoreApplication::translate("MainWindow", " Enable internal pointer driver.", nullptr));
#endif // QT_CONFIG(statustip)
        chkPointerSupport->setText(QCoreApplication::translate("MainWindow", "PointerSupport", nullptr));
#if QT_CONFIG(statustip)
        label_23->setStatusTip(QCoreApplication::translate("MainWindow", " Set internal keyboard input translation to AppleKeyMapAggregator protocol mode.", nullptr));
#endif // QT_CONFIG(statustip)
        label_23->setText(QCoreApplication::translate("MainWindow", "KeySupportMode", nullptr));
#if QT_CONFIG(statustip)
        label_37->setStatusTip(QCoreApplication::translate("MainWindow", "Remove key unless it was submitted during this timeout in milliseconds.", nullptr));
#endif // QT_CONFIG(statustip)
        label_37->setText(QCoreApplication::translate("MainWindow", "KeyForgetThreshold", nullptr));
#if QT_CONFIG(statustip)
        label_40->setStatusTip(QCoreApplication::translate("MainWindow", "Set architecture timer resolution.", nullptr));
#endif // QT_CONFIG(statustip)
        label_40->setText(QCoreApplication::translate("MainWindow", "TimerResolution", nullptr));
#if QT_CONFIG(statustip)
        label_38->setStatusTip(QCoreApplication::translate("MainWindow", " Set OEM protocol used for internal pointer driver.", nullptr));
#endif // QT_CONFIG(statustip)
        label_38->setText(QCoreApplication::translate("MainWindow", "PointerSupportMode", nullptr));
        tabUEFI->setTabText(tabUEFI->indexOf(tabUEFI5), QCoreApplication::translate("MainWindow", "Input", nullptr));
#if QT_CONFIG(statustip)
        chkClearScreenOnModeSwitch->setStatusTip(QCoreApplication::translate("MainWindow", "Some firmwares clear only part of screen when switching from graphics to text mode, leaving a\n"
" fragment of previously drawn image visible. This option fills the entire graphics screen with black colour before\n"
" switching to text mode.\n"
" Note: This option only applies to System renderer.", nullptr));
#endif // QT_CONFIG(statustip)
        chkClearScreenOnModeSwitch->setText(QCoreApplication::translate("MainWindow", "ClearScreenOnModeSwitch", nullptr));
#if QT_CONFIG(statustip)
        chkDirectGopRendering->setStatusTip(QCoreApplication::translate("MainWindow", " Use builtin graphics output protocol renderer for console.", nullptr));
#endif // QT_CONFIG(statustip)
        chkDirectGopRendering->setText(QCoreApplication::translate("MainWindow", "DirectGopRendering", nullptr));
        chkForceResolution->setText(QCoreApplication::translate("MainWindow", "ForceResolution", nullptr));
        chkIgnoreTextInGraphics->setText(QCoreApplication::translate("MainWindow", "IgnoreTextInGraphics", nullptr));
#if QT_CONFIG(statustip)
        chkProvideConsoleGop->setStatusTip(QCoreApplication::translate("MainWindow", "Ensure GOP (Graphics Output Protocol) on console handle.", nullptr));
#endif // QT_CONFIG(statustip)
        chkProvideConsoleGop->setText(QCoreApplication::translate("MainWindow", "ProvideConsoleGop", nullptr));
        chkReplaceTabWithSpace->setText(QCoreApplication::translate("MainWindow", "ReplaceTabWithSpace", nullptr));
#if QT_CONFIG(tooltip)
        chkReconnectGraphicsOnConnect->setToolTip(QCoreApplication::translate("MainWindow", "Type: plist boolean\n"
"\n"
"Description: Reconnect all graphics drivers during driver connection.\n"
"\n"
"On certain firmware, it may be desireable to use an alternative graphics driver, for example BiosVideo.efi,providing better screen resolution options on legacy machines, or a driver supporting ForceResolution. This option attempts to disconnect all currently connected graphics drivers before connecting newly loaded drivers.\n"
"\n"
"Note: This option requires ConnectDrivers to be enabled.\n"
"\n"
"----\n"
"\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\234\250\351\251\261\345\212\250\350\277\236\346\216\245\350\277\207\347\250\213\344\270\255\351\207\215\346\226\260\350\277\236\346\216\245\346\211\200\346\234\211\345\233\276\345\275\242\351\251\261\345\212\250\343\200\202\n"
"\n"
"\345\234\250\346\237\220\344\272\233\345\233\272\344\273\266\344\270\212\357\274\214\345\217\257\350\203\275\345\270\214\346\234\233\344\275\277"
                        "\347\224\250\345\217\246\344\270\200\347\247\215\345\233\276\345\275\242\351\251\261\345\212\250\357\274\214\344\276\213\345\246\202BiosVideo.efi\357\274\214\344\273\245\345\234\250\344\274\240\347\273\237\346\234\272\345\231\250\344\270\212\346\217\220\344\276\233\346\233\264\345\245\275\347\232\204\345\261\217\345\271\225\345\210\206\350\276\250\347\216\207\351\200\211\351\241\271\357\274\214\346\210\226\350\200\205\346\224\257\346\214\201ForceResolution\347\232\204\351\251\261\345\212\250\343\200\202\350\277\231\344\270\252\351\200\211\351\241\271\350\257\225\345\233\276\345\234\250\350\277\236\346\216\245\346\226\260\345\212\240\350\275\275\347\232\204\351\251\261\345\212\250\347\250\213\345\272\217\344\271\213\345\211\215\346\226\255\345\274\200\346\211\200\346\234\211\345\275\223\345\211\215\350\277\236\346\216\245\347\232\204\345\233\276\345\275\242\351\251\261\345\212\250\347\250\213\345\272\217\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\277\231\344\270\252\351\200\211\351\241\271\351"
                        "\234\200\350\246\201\345\220\257\347\224\250ConnectDrivers\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        chkReconnectGraphicsOnConnect->setText(QCoreApplication::translate("MainWindow", "ReconnectGraphicsOnConnect", nullptr));
#if QT_CONFIG(statustip)
        chkReconnectOnResChange->setStatusTip(QCoreApplication::translate("MainWindow", "Reconnect console controllers after changing screen resolution.", nullptr));
#endif // QT_CONFIG(statustip)
        chkReconnectOnResChange->setText(QCoreApplication::translate("MainWindow", "ReconnectOnResChange", nullptr));
        chkSanitiseClearScreen->setText(QCoreApplication::translate("MainWindow", "SanitiseClearScreen", nullptr));
#if QT_CONFIG(statustip)
        chkUgaPassThrough->setStatusTip(QCoreApplication::translate("MainWindow", " Provide UGA protocol instances on top of GOP protocol.", nullptr));
#endif // QT_CONFIG(statustip)
        chkUgaPassThrough->setText(QCoreApplication::translate("MainWindow", "UgaPassThrough", nullptr));
#if QT_CONFIG(statustip)
        label_24->setStatusTip(QCoreApplication::translate("MainWindow", "Sets console output mode as specified with the WxH (e.g. 80x24) formatted string.", nullptr));
#endif // QT_CONFIG(statustip)
        label_24->setText(QCoreApplication::translate("MainWindow", "ConsoleMode(e.g. 80x24)", nullptr));
#if QT_CONFIG(statustip)
        label_25->setStatusTip(QCoreApplication::translate("MainWindow", " Sets console output screen resolution.", nullptr));
#endif // QT_CONFIG(statustip)
        label_25->setText(QCoreApplication::translate("MainWindow", "Resolution", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "TextRenderer", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "GopPassThrough", nullptr));

        label_121->setText(QCoreApplication::translate("MainWindow", "UIScale", nullptr));
        tabUEFI->setTabText(tabUEFI->indexOf(tabUEFI6), QCoreApplication::translate("MainWindow", "Output", nullptr));
#if QT_CONFIG(statustip)
        chkAppleAudio->setStatusTip(QCoreApplication::translate("MainWindow", "Reinstalls Apple audio protocols with builtin versions.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleAudio->setText(QCoreApplication::translate("MainWindow", "AppleAudio", nullptr));
#if QT_CONFIG(statustip)
        chkAppleBootPolicy->setStatusTip(QCoreApplication::translate("MainWindow", " Reinstalls Apple Boot Policy protocol with a builtin version. This may be used to ensure APFS\n"
" compatibility on VMs or legacy Macs.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleBootPolicy->setText(QCoreApplication::translate("MainWindow", "AppleBootPolicy", nullptr));
#if QT_CONFIG(statustip)
        chkAppleDebugLog->setStatusTip(QCoreApplication::translate("MainWindow", "Reinstalls Apple Debug Log protocol with a builtin version.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleDebugLog->setText(QCoreApplication::translate("MainWindow", "AppleDebugLog", nullptr));
#if QT_CONFIG(statustip)
        chkAppleFramebufferInfo->setStatusTip(QCoreApplication::translate("MainWindow", " Reinstalls Apple Framebuffer Info protocol with a builtin version. This may be used to override\n"
" framebuffer information on VMs or legacy Macs to improve compatibility with legacy EfiBoot like the one in\n"
" macOS 10.4.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleFramebufferInfo->setText(QCoreApplication::translate("MainWindow", "AppleFramebufferInfo", nullptr));
#if QT_CONFIG(statustip)
        chkAppleImageConversion->setStatusTip(QCoreApplication::translate("MainWindow", "Reinstalls Apple Image Conversion protocol with a builtin version.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleImageConversion->setText(QCoreApplication::translate("MainWindow", "AppleImageConversion", nullptr));
#if QT_CONFIG(statustip)
        chkAppleImg4Verification->setStatusTip(QCoreApplication::translate("MainWindow", " Reinstalls Apple IMG4 Verification protocol with a builtin version. This protocol is used to verify\n"
" im4m manifest files used by Apple Secure Boot.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleImg4Verification->setText(QCoreApplication::translate("MainWindow", "AppleImg4Verification", nullptr));
#if QT_CONFIG(statustip)
        chkDataHub->setStatusTip(QCoreApplication::translate("MainWindow", " Reinstalls Data Hub protocol with a builtin version. This will delete all previous properties if the\n"
" protocol was already installed.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        chkFirmwareVolume->setStatusTip(QCoreApplication::translate("MainWindow", " Forcibly wraps Firmware Volume protocols or installs new to support custom cursor images for\n"
" File Vault 2. Should be set to true to ensure File Vault 2 compatibility on everything but VMs and legacy Macs.", nullptr));
#endif // QT_CONFIG(statustip)
        chkFirmwareVolume->setText(QCoreApplication::translate("MainWindow", "FirmwareVolume", nullptr));
#if QT_CONFIG(statustip)
        chkDeviceProperties->setStatusTip(QCoreApplication::translate("MainWindow", " Reinstalls Device Property protocol with a builtin version. This will delete all previous properties\n"
" if it was already installed. This may be used to ensure full compatibility on VMs or legacy Macs.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(statustip)
        chkHashServices->setStatusTip(QCoreApplication::translate("MainWindow", "Forcibly reinstalls Hash Services protocols with builtin versions. Should be set to true to ensure\n"
" File Vault 2 compatibility on platforms providing broken SHA-1 hashing. Can be diagnosed by invalid cursor size\n"
" with UIScale set to 02, in general platforms prior to APTIO V (Haswell and older) are affected.", nullptr));
#endif // QT_CONFIG(statustip)
        chkHashServices->setText(QCoreApplication::translate("MainWindow", "HashServices", nullptr));
#if QT_CONFIG(statustip)
        chkOSInfo->setStatusTip(QCoreApplication::translate("MainWindow", "Forcibly reinstalls OS Info protocol with builtin versions. This protocol is generally used to receive\n"
" notifications from macOS bootloader, by the firmware or by other applications.", nullptr));
#endif // QT_CONFIG(statustip)
        chkOSInfo->setText(QCoreApplication::translate("MainWindow", "OSInfo", nullptr));
#if QT_CONFIG(statustip)
        chkUnicodeCollation->setStatusTip(QCoreApplication::translate("MainWindow", " Forcibly reinstalls unicode collation services with builtin version. Should be set to true to ensure UEFI Shell compatibility on platforms providing broken unicode collation. In general legacy Insyde and APTIO platforms on Ivy Bridge and earlier are affected.", nullptr));
#endif // QT_CONFIG(statustip)
        chkUnicodeCollation->setText(QCoreApplication::translate("MainWindow", "UnicodeCollation", nullptr));
#if QT_CONFIG(statustip)
        chkAppleKeyMap->setStatusTip(QCoreApplication::translate("MainWindow", " Reinstalls Apple Key Map protocols with builtin versions.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleKeyMap->setText(QCoreApplication::translate("MainWindow", "AppleKeyMap", nullptr));
#if QT_CONFIG(statustip)
        chkAppleRtcRam->setStatusTip(QCoreApplication::translate("MainWindow", "Reinstalls Apple RTC RAM protocol with builtin version.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleRtcRam->setText(QCoreApplication::translate("MainWindow", "AppleRtcRam", nullptr));
#if QT_CONFIG(statustip)
        chkAppleSecureBoot->setStatusTip(QCoreApplication::translate("MainWindow", " Reinstalls Apple Secure Boot protocol with a builtin version.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleSecureBoot->setText(QCoreApplication::translate("MainWindow", "AppleSecureBoot", nullptr));
#if QT_CONFIG(statustip)
        chkAppleSmcIo->setStatusTip(QCoreApplication::translate("MainWindow", "Reinstalls Apple SMC I/O protocol with a builtin version.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleSmcIo->setText(QCoreApplication::translate("MainWindow", "AppleSmcIo", nullptr));
#if QT_CONFIG(statustip)
        chkAppleUserInterfaceTheme->setStatusTip(QCoreApplication::translate("MainWindow", "Reinstalls Apple User Interface Theme protocol with a builtin version.", nullptr));
#endif // QT_CONFIG(statustip)
        chkAppleUserInterfaceTheme->setText(QCoreApplication::translate("MainWindow", "AppleUserInterfaceTheme", nullptr));
        chkAppleEg2Info->setText(QCoreApplication::translate("MainWindow", "AppleEg2Info", nullptr));
        tabUEFI->setTabText(tabUEFI->indexOf(tabUEFI7), QCoreApplication::translate("MainWindow", "ProtocolOverrides", nullptr));
        label_125->setText(QCoreApplication::translate("MainWindow", "Preselection", nullptr));
        chkEnableVectorAcceleration->setText(QCoreApplication::translate("MainWindow", "EnableVectorAcceleration", nullptr));
#if QT_CONFIG(statustip)
        chkDisableSecurityPolicy->setStatusTip(QCoreApplication::translate("MainWindow", "Disable platform security policy.", nullptr));
#endif // QT_CONFIG(statustip)
        chkDisableSecurityPolicy->setText(QCoreApplication::translate("MainWindow", "DisableSecurityPolicy", nullptr));
#if QT_CONFIG(statustip)
        chkActivateHpetSupport->setStatusTip(QCoreApplication::translate("MainWindow", "Activates HPET support.", nullptr));
#endif // QT_CONFIG(statustip)
        chkActivateHpetSupport->setText(QCoreApplication::translate("MainWindow", "ActivateHpetSupport", nullptr));
        chkEnableVmx->setText(QCoreApplication::translate("MainWindow", "EnableVmx", nullptr));
#if QT_CONFIG(tooltip)
        chkForceOcWriteFlash->setToolTip(QCoreApplication::translate("MainWindow", "Type: plist boolean\n"
"\n"
"Description: Enables writing to flash memory for all OpenCore system variables.\n"
"\n"
"Note: This value should be disabled on most types of firmware but is left configurable to account for firmware that may have issues with volatile variable storage overflows or similar. Boot issues across multiple OSes can be observed on e.g. Lenovo Thinkpad T430 and T530 without this quirk. Apple variables related to Secure Boot and hibernation are exempt from this for security reasons. Furthermore, some OpenCore variables are exempt for different reasons, such as the boot log due to an available user option, and the TSC frequency due to timing issues. When toggling this option, a NVRAM reset may be required to ensure full functionality.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\345\270\203\345\260\224\345\200\274\n"
"\n"
"\346\217\217\350\277\260\357\274\232\345\220\257\347\224\250\346\211\200\346\234\211OpenCore\347\263\273\347\273\237\345\217\230\351\207\217\345\257\271\351\227\252"
                        "\345\255\230\347\232\204\345\206\231\345\205\245\343\200\202\n"
"\n"
"\346\263\250\346\204\217\357\274\232\350\277\231\344\270\252\345\200\274\345\234\250\345\244\247\345\244\232\346\225\260\347\261\273\345\236\213\347\232\204\345\233\272\344\273\266\344\270\212\345\272\224\350\257\245\346\230\257\347\246\201\347\224\250\347\232\204\357\274\214\344\275\206\344\270\272\344\272\206\350\200\203\350\231\221\345\210\260\345\217\257\350\203\275\346\234\211\346\230\223\345\244\261\346\200\247\345\217\230\351\207\217\345\255\230\345\202\250\346\272\242\345\207\272\346\210\226\347\261\273\344\274\274\351\227\256\351\242\230\347\232\204\345\233\272\344\273\266\357\274\214\350\277\231\344\270\252\345\200\274\346\230\257\345\217\257\351\205\215\347\275\256\347\232\204\343\200\202\345\234\250\344\276\213\345\246\202\350\201\224\346\203\263Thinkpad T430\345\222\214T530\344\270\212\345\217\257\344\273\245\350\247\202\345\257\237\345\210\260\350\267\250\345\244\232\344\270\252\346\223\215\344\275\234\347\263\273\347\273\237\347"
                        "\232\204\345\220\257\345\212\250\351\227\256\351\242\230\357\274\214\346\262\241\346\234\211\350\277\231\344\270\252\351\200\211\351\241\271\343\200\202\345\207\272\344\272\216\345\256\211\345\205\250\345\216\237\345\233\240\357\274\214\344\270\216\345\256\211\345\205\250\345\220\257\345\212\250\345\222\214\344\274\221\347\234\240\346\234\211\345\205\263\347\232\204\350\213\271\346\236\234\345\217\230\351\207\217\344\270\215\345\234\250\346\255\244\345\210\227\343\200\202\346\255\244\345\244\226\357\274\214\344\270\200\344\272\233OpenCore\345\217\230\351\207\217\347\224\261\344\272\216\344\270\215\345\220\214\347\232\204\345\216\237\345\233\240\350\242\253\350\261\201\345\205\215\357\274\214\344\276\213\345\246\202\347\224\261\344\272\216\344\270\200\344\270\252\345\217\257\347\224\250\347\232\204\347\224\250\346\210\267\351\200\211\351\241\271\357\274\214\345\220\257\345\212\250\346\227\245\345\277\227\357\274\214\344\273\245\345\217\212\347\224\261\344\272\216\346\227\266\351\227\264\351\227\256\351\242\230\357"
                        "\274\214TSC\351\242\221\347\216\207\343\200\202\345\234\250\345\210\207\346\215\242\350\257\245\351\200\211\351\241\271\346\227\266\357\274\214\345\217\257\350\203\275\351\234\200\350\246\201\345\257\271NVRAM\350\277\233\350\241\214\351\207\215\347\275\256\357\274\214\344\273\245\347\241\256\344\277\235\345\256\214\346\225\264\347\232\204\345\212\237\350\203\275\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        chkForceOcWriteFlash->setText(QCoreApplication::translate("MainWindow", "ForceOcWriteFlash", nullptr));
        chkForgeUefiSupport->setText(QCoreApplication::translate("MainWindow", "ForgeUefiSupport", nullptr));
#if QT_CONFIG(statustip)
        chkIgnoreInvalidFlexRatio->setStatusTip(QCoreApplication::translate("MainWindow", "Select firmwares, namely APTIO IV, may contain invalid values in MSR_FLEX_RATIO (0x194) MSR\n"
" register. These values may cause macOS boot failure on Intel platforms.", nullptr));
#endif // QT_CONFIG(statustip)
        chkIgnoreInvalidFlexRatio->setText(QCoreApplication::translate("MainWindow", "IgnoreInvalidFlexRatio", nullptr));
        chkReloadOptionRoms->setText(QCoreApplication::translate("MainWindow", "ReloadOptionRoms", nullptr));
#if QT_CONFIG(statustip)
        chkReleaseUsbOwnership->setStatusTip(QCoreApplication::translate("MainWindow", "Attempt to detach USB controller ownership from the firmware driver. While most firmwares\n"
" manage to properly do that, or at least have an option for, select firmwares do not. As a result, operating system\n"
" may freeze upon boot. Not recommended unless required.", nullptr));
#endif // QT_CONFIG(statustip)
        chkReleaseUsbOwnership->setText(QCoreApplication::translate("MainWindow", "ReleaseUsbOwnership", nullptr));
#if QT_CONFIG(statustip)
        chkRequestBootVarRouting->setStatusTip(QCoreApplication::translate("MainWindow", " Request redirect of all Boot prefixed variables from EFI_GLOBAL_VARIABLE_GUID to\n"
" OC_VENDOR_VARIABLE_GUID.", nullptr));
#endif // QT_CONFIG(statustip)
        chkRequestBootVarRouting->setText(QCoreApplication::translate("MainWindow", "RequestBootVarRouting", nullptr));
#if QT_CONFIG(statustip)
        chkUnblockFsConnect->setStatusTip(QCoreApplication::translate("MainWindow", "Some firmwares block partition handles by opening them in By Driver mode, which results in File\n"
" System protocols being unable to install.", nullptr));
#endif // QT_CONFIG(statustip)
        chkUnblockFsConnect->setText(QCoreApplication::translate("MainWindow", "UnblockFsConnect", nullptr));
#if QT_CONFIG(statustip)
        label_28->setStatusTip(QCoreApplication::translate("MainWindow", "Adds delay in microseconds after EXIT_BOOT_SERVICES event.", nullptr));
#endif // QT_CONFIG(statustip)
        label_28->setText(QCoreApplication::translate("MainWindow", "ExitBootServicesDelay", nullptr));
#if QT_CONFIG(tooltip)
        label_115->setToolTip(QCoreApplication::translate("MainWindow", "Type: plist integer\n"
"Description: Configure GPU PCI BAR sizes.\n"
"\n"
"This quirk sets GPU PCI BAR sizes as specified or chooses the largest available below the ResizeGpuBars value.\n"
"The specified value follows PCI Resizable BAR spec. Use 0 for 1 MB, 1 for 2 MB, 2 for 4 MB, and so on up to 19 for 512 GB.\n"
"Resizable BAR technology allows to ease PCI device programming by mapping a configurable memory region,BAR, into CPU address space (e.g. VRAM to RAM) as opposed to a fixed memory region. This technology is necessary, because one cannot map the largest memory region by default, for the reasons of backwards compatibility with older hardware not supporting 64-bit BARs. Consequentially devices of the last decade use BARs up to 256 MB by default (4 remaining bits are used by other data) but generally allow resizing them to both smaller and larger powers of two (e.g. from 1 MB up to VRAM size).\n"
"Operating systems targeting x86 platforms generally do not control PCI address space, letting UEFI firmware "
                        "decide on the BAR addresses and sizes. This illicit practice resulted in Resizable BAR technology being unused up until 2020 despite being standardised in 2008 and becoming widely available in the hardware soon after.\n"
"Modern UEFI firmware allow the use of Resizable BAR technology but generally restrict the configurable options to failsafe default (OFF) and maximum available (ON). This quirk allows to fine-tune this value for testing and development purposes.\n"
"Note 1 : This quirk shall not be used to workaround macOS limitation to address BARs over 1 GB. ResizeAppleGpuBars should be used instead.\n"
"Note 2 : While this quirk can increase GPU PCI BAR sizes, this will not work on most firmware as is, because the quirk does not relocate BARs in memory, and they will likely overlap. Contributions to improve this feature are welcome.\n"
"----\n"
"\347\261\273\345\236\213\357\274\232plist\346\225\264\346\225\260\n"
"\346\217\217\350\277\260\357\274\232\351\205\215\347\275\256GPU PCI BAR\347\232\204\345\244\247"
                        "\345\260\217\343\200\202\n"
"\n"
"\350\277\231\344\270\252\351\200\211\351\241\271\350\256\276\347\275\256GPU PCI BAR\345\260\272\345\257\270\344\270\272\346\214\207\345\256\232\347\232\204\357\274\214\346\210\226\350\200\205\351\200\211\346\213\251\344\275\216\344\272\216ResizeGpuBars\345\200\274\347\232\204\346\234\200\345\244\247\345\217\257\347\224\250\345\200\274\343\200\202\n"
"\346\214\207\345\256\232\347\232\204\345\200\274\351\201\265\345\276\252PCI\345\217\257\350\260\203\346\225\264\347\232\204BAR\350\247\204\346\240\274\343\200\202\344\275\277\347\224\2500\344\273\243\350\241\2501MB\357\274\2141\344\273\243\350\241\2502MB\357\274\2142\344\273\243\350\241\2504MB\357\274\214\344\273\245\346\255\244\347\261\273\346\216\250\357\274\214\347\233\264\345\210\26019\344\273\243\350\241\250512GB\343\200\202\n"
"\345\217\257\350\260\203\346\225\264\347\232\204BAR\346\212\200\346\234\257\345\205\201\350\256\270\351\200\232\350\277\207\345\260\206\345\217\257\351\205\215\347\275\256\347\232\204\345\206\205\345\255"
                        "\230\345\214\272\345\237\237\343\200\201BAR\357\274\214\346\230\240\345\260\204\345\210\260CPU\345\234\260\345\235\200\347\251\272\351\227\264\357\274\210\344\276\213\345\246\202\357\274\214VRAM\345\210\260RAM\357\274\211\357\274\214\350\200\214\344\270\215\346\230\257\345\233\272\345\256\232\347\232\204\345\206\205\345\255\230\345\214\272\345\237\237\357\274\214\346\235\245\347\256\200\345\214\226PCI\350\256\276\345\244\207\347\274\226\347\250\213\343\200\202\350\277\231\351\241\271\346\212\200\346\234\257\346\230\257\345\277\205\350\246\201\347\232\204\357\274\214\345\233\240\344\270\272\344\272\272\344\273\254\344\270\215\350\203\275\345\234\250\351\273\230\350\256\244\346\203\205\345\206\265\344\270\213\346\230\240\345\260\204\346\234\200\345\244\247\347\232\204\345\206\205\345\255\230\345\214\272\345\237\237\357\274\214\345\216\237\345\233\240\346\230\257\350\246\201\345\220\221\345\220\216\345\205\274\345\256\271\344\270\215\346\224\257\346\214\20164\344\275\215BAR\347\232\204\346\227\247\347\241\254\344"
                        "\273\266\343\200\202\345\233\240\346\255\244\357\274\214\350\277\207\345\216\273\345\215\201\345\271\264\347\232\204\350\256\276\345\244\207\351\273\230\350\256\244\344\275\277\347\224\250256MB\347\232\204BAR\357\274\210\345\211\251\344\270\213\347\232\2044\344\275\215\350\242\253\345\205\266\344\273\226\346\225\260\346\215\256\344\275\277\347\224\250\357\274\211\357\274\214\344\275\206\351\200\232\345\270\270\345\205\201\350\256\270\345\260\206\345\256\203\344\273\254\347\232\204\345\244\247\345\260\217\350\260\203\346\225\264\344\270\272\346\233\264\345\260\217\345\222\214\346\233\264\345\244\247\347\232\2042\346\254\241\346\226\271\357\274\210\344\276\213\345\246\202\357\274\214\344\273\2161MB\345\210\260VRAM\345\244\247\345\260\217\357\274\211\343\200\202\n"
"\n"
"\351\222\210\345\257\271x86\345\271\263\345\217\260\347\232\204\346\223\215\344\275\234\347\263\273\347\273\237\351\200\232\345\270\270\344\270\215\346\216\247\345\210\266PCI\345\234\260\345\235\200\347\251\272\351\227\264\357\274\214\350\256\251"
                        "UEFI\345\233\272\344\273\266\345\206\263\345\256\232BAR\345\234\260\345\235\200\345\222\214\345\244\247\345\260\217\343\200\202\350\277\231\347\247\215\351\235\236\346\263\225\347\232\204\345\201\232\346\263\225\345\257\274\350\207\264\345\217\257\351\207\215\347\275\256\347\232\204BAR\346\212\200\346\234\257\347\233\264\345\210\2602020\345\271\264\351\203\275\346\262\241\346\234\211\350\242\253\344\275\277\347\224\250\357\274\214\345\260\275\347\256\241\345\256\203\345\234\2502008\345\271\264\350\242\253\346\240\207\345\207\206\345\214\226\357\274\214\345\271\266\345\276\210\345\277\253\345\234\250\347\241\254\344\273\266\344\270\255\345\271\277\346\263\233\344\275\277\347\224\250\343\200\202\n"
"\n"
"\347\216\260\344\273\243UEFI\345\233\272\344\273\266\345\205\201\350\256\270\344\275\277\347\224\250\345\217\257\350\260\203\346\225\264\347\232\204BAR\346\212\200\346\234\257\357\274\214\344\275\206\351\200\232\345\270\270\345\260\206\345\217\257\351\205\215\347\275\256\347\232\204\351\200\211\351\241\271\351\231"
                        "\220\345\210\266\344\270\272\346\225\205\351\232\234\345\256\211\345\205\250\351\273\230\350\256\244\345\200\274\357\274\210OFF\357\274\211\345\222\214\346\234\200\345\244\247\345\217\257\347\224\250\345\200\274\357\274\210ON\357\274\211\343\200\202\350\277\231\344\270\252\351\200\211\351\241\271\345\205\201\350\256\270\344\270\272\346\265\213\350\257\225\345\222\214\345\274\200\345\217\221\347\233\256\347\232\204\345\257\271\350\277\231\344\270\252\345\200\274\350\277\233\350\241\214\345\276\256\350\260\203\343\200\202\n"
"\n"
"\346\263\2501\357\274\232\350\277\231\344\270\252\351\200\211\351\241\271\344\270\215\350\203\275\347\224\250\344\272\216\350\247\243\345\206\263macOS\345\257\271\350\266\205\350\277\2071GB\347\232\204BAR\347\232\204\351\231\220\345\210\266\343\200\202\345\272\224\350\257\245\344\275\277\347\224\250ResizeAppleGpuBars\346\235\245\344\273\243\346\233\277\343\200\202\n"
"\346\263\2502\357\274\232\350\231\275\347\204\266\350\277\231\344\270\252\351\200\211\351\241\271\345\217\257\344\273\245"
                        "\345\242\236\345\212\240GPU PCI BAR\347\232\204\345\244\247\345\260\217\357\274\214\344\275\206\350\277\231\345\234\250\345\244\247\345\244\232\346\225\260\345\233\272\344\273\266\344\270\212\346\230\257\350\241\214\344\270\215\351\200\232\347\232\204\357\274\214\345\233\240\344\270\272\350\257\245\351\200\211\351\241\271\345\271\266\346\262\241\346\234\211\351\207\215\346\226\260\345\256\232\344\275\215\345\206\205\345\255\230\344\270\255\347\232\204BAR\357\274\214\350\200\214\344\270\224\345\256\203\344\273\254\345\276\210\345\217\257\350\203\275\344\274\232\345\217\221\347\224\237\351\207\215\345\217\240\343\200\202\346\254\242\350\277\216\345\244\247\345\256\266\344\270\272\346\224\271\345\226\204\350\277\231\344\270\200\345\212\237\350\203\275\345\201\232\345\207\272\350\264\241\347\214\256\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        label_115->setText(QCoreApplication::translate("MainWindow", "ResizeGpuBars", nullptr));
        editIntResizeGpuBars->setText(QCoreApplication::translate("MainWindow", "-1", nullptr));
#if QT_CONFIG(statustip)
        label_29->setStatusTip(QCoreApplication::translate("MainWindow", "Attempts to perform TSC synchronisation with a specified timeout.", nullptr));
#endif // QT_CONFIG(statustip)
        label_29->setText(QCoreApplication::translate("MainWindow", "TscSyncTimeout", nullptr));
        tabUEFI->setTabText(tabUEFI->indexOf(tabUEFI8), QCoreApplication::translate("MainWindow", "Quirks", nullptr));
        btnUEFIRM_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnUEFIRM_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnUEFIRM_Del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        tabUEFI->setTabText(tabUEFI->indexOf(tabUEFI9), QCoreApplication::translate("MainWindow", "ReservedMemory", nullptr));
        btnUEFIUnload_Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnUEFIUnload_Del->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btnUEFIUnload_Del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        tabUEFI->setTabText(tabUEFI->indexOf(tabUEFI10), QCoreApplication::translate("MainWindow", "Unload", nullptr));
        gboxUEFI->setTitle(QString());
#if QT_CONFIG(statustip)
        chkConnectDrivers->setStatusTip(QCoreApplication::translate("MainWindow", " Perform UEFI controller connection after driver loading.", nullptr));
#endif // QT_CONFIG(statustip)
        chkConnectDrivers->setText(QCoreApplication::translate("MainWindow", "ConnectDrivers", nullptr));
        btnGenerateFromHardware->setText(QCoreApplication::translate("MainWindow", "Generate EFI folder on the desktop from hardware information (experimental in nature)", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
