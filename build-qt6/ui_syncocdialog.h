/********************************************************************************
** Form generated from reading UI file 'syncocdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYNCOCDIALOG_H
#define UI_SYNCOCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SyncOCDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblKexts;
    QLabel *labelShowDLInfo;
    QTableWidget *tableKexts;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *btnClearAll;
    QToolButton *btnSelectAll;
    QToolButton *btnSet;
    QCheckBox *chkKextsDev;
    QLabel *lblKextDevFrom;
    QSpacerItem *horizontalSpacer;
    QLabel *lblInfo;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnCheckUpdate;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnUpdate;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnStop;
    QFrame *line;
    QGridLayout *gridLayout_6;
    QLabel *lblOCFrom;
    QLabel *lblOpenCore;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *listOpenCore;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblResourcesFrom;
    QCheckBox *chkIncludeResource;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblDevSource;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *editOCDevSource;
    QToolButton *btnImport;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblOCVersions;
    QComboBox *comboOCVersions;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnGetLastOC;
    QPushButton *btnGetOC;
    QPushButton *btnStartSync;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblShowInfo;

    void setupUi(QDialog *SyncOCDialog)
    {
        if (SyncOCDialog->objectName().isEmpty())
            SyncOCDialog->setObjectName("SyncOCDialog");
        SyncOCDialog->resize(887, 498);
        gridLayout = new QGridLayout(SyncOCDialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lblKexts = new QLabel(SyncOCDialog);
        lblKexts->setObjectName("lblKexts");

        horizontalLayout->addWidget(lblKexts);

        labelShowDLInfo = new QLabel(SyncOCDialog);
        labelShowDLInfo->setObjectName("labelShowDLInfo");
        labelShowDLInfo->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(labelShowDLInfo);


        verticalLayout->addLayout(horizontalLayout);

        tableKexts = new QTableWidget(SyncOCDialog);
        if (tableKexts->columnCount() < 4)
            tableKexts->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableKexts->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableKexts->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableKexts->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableKexts->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableKexts->setObjectName("tableKexts");
        tableKexts->setMaximumSize(QSize(16777215, 16777215));
        tableKexts->setFrameShape(QFrame::Shape::NoFrame);
        tableKexts->setFrameShadow(QFrame::Shadow::Plain);

        verticalLayout->addWidget(tableKexts);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnClearAll = new QToolButton(SyncOCDialog);
        btnClearAll->setObjectName("btnClearAll");

        horizontalLayout_3->addWidget(btnClearAll);

        btnSelectAll = new QToolButton(SyncOCDialog);
        btnSelectAll->setObjectName("btnSelectAll");

        horizontalLayout_3->addWidget(btnSelectAll);

        btnSet = new QToolButton(SyncOCDialog);
        btnSet->setObjectName("btnSet");

        horizontalLayout_3->addWidget(btnSet);

        chkKextsDev = new QCheckBox(SyncOCDialog);
        chkKextsDev->setObjectName("chkKextsDev");

        horizontalLayout_3->addWidget(chkKextsDev);

        lblKextDevFrom = new QLabel(SyncOCDialog);
        lblKextDevFrom->setObjectName("lblKextDevFrom");
        lblKextDevFrom->setOpenExternalLinks(true);

        horizontalLayout_3->addWidget(lblKextDevFrom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        lblInfo = new QLabel(SyncOCDialog);
        lblInfo->setObjectName("lblInfo");

        verticalLayout->addWidget(lblInfo);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btnCheckUpdate = new QPushButton(SyncOCDialog);
        btnCheckUpdate->setObjectName("btnCheckUpdate");

        horizontalLayout_4->addWidget(btnCheckUpdate);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        btnUpdate = new QPushButton(SyncOCDialog);
        btnUpdate->setObjectName("btnUpdate");

        horizontalLayout_4->addWidget(btnUpdate);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        btnStop = new QPushButton(SyncOCDialog);
        btnStop->setObjectName("btnStop");

        horizontalLayout_4->addWidget(btnStop);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 6, 1);

        line = new QFrame(SyncOCDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 0, 1, 6, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        lblOCFrom = new QLabel(SyncOCDialog);
        lblOCFrom->setObjectName("lblOCFrom");
        lblOCFrom->setOpenExternalLinks(true);

        gridLayout_6->addWidget(lblOCFrom, 0, 2, 1, 1);

        lblOpenCore = new QLabel(SyncOCDialog);
        lblOpenCore->setObjectName("lblOpenCore");

        gridLayout_6->addWidget(lblOpenCore, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_6, 0, 2, 1, 1);

        listOpenCore = new QListWidget(SyncOCDialog);
        listOpenCore->setObjectName("listOpenCore");
        listOpenCore->setMinimumSize(QSize(0, 0));
        listOpenCore->setMaximumSize(QSize(16777215, 16777215));
        listOpenCore->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        listOpenCore->setFrameShape(QFrame::Shape::NoFrame);
        listOpenCore->setFrameShadow(QFrame::Shadow::Plain);
        listOpenCore->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);

        gridLayout->addWidget(listOpenCore, 1, 2, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        lblResourcesFrom = new QLabel(SyncOCDialog);
        lblResourcesFrom->setObjectName("lblResourcesFrom");
        lblResourcesFrom->setOpenExternalLinks(true);

        gridLayout_7->addWidget(lblResourcesFrom, 0, 2, 1, 1);

        chkIncludeResource = new QCheckBox(SyncOCDialog);
        chkIncludeResource->setObjectName("chkIncludeResource");
        chkIncludeResource->setChecked(true);

        gridLayout_7->addWidget(chkIncludeResource, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_7, 2, 2, 1, 1);

        frame = new QFrame(SyncOCDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::NoFrame);
        frame->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lblDevSource = new QLabel(frame);
        lblDevSource->setObjectName("lblDevSource");

        verticalLayout_3->addWidget(lblDevSource);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        editOCDevSource = new QComboBox(frame);
        editOCDevSource->addItem(QString());
        editOCDevSource->addItem(QString());
        editOCDevSource->addItem(QString());
        editOCDevSource->setObjectName("editOCDevSource");
        editOCDevSource->setEditable(true);

        horizontalLayout_6->addWidget(editOCDevSource);

        btnImport = new QToolButton(frame);
        btnImport->setObjectName("btnImport");

        horizontalLayout_6->addWidget(btnImport);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lblOCVersions = new QLabel(frame);
        lblOCVersions->setObjectName("lblOCVersions");

        horizontalLayout_5->addWidget(lblOCVersions);

        comboOCVersions = new QComboBox(frame);
        comboOCVersions->setObjectName("comboOCVersions");

        horizontalLayout_5->addWidget(comboOCVersions);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout->addWidget(frame, 3, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        btnGetLastOC = new QPushButton(SyncOCDialog);
        btnGetLastOC->setObjectName("btnGetLastOC");

        horizontalLayout_7->addWidget(btnGetLastOC);

        btnGetOC = new QPushButton(SyncOCDialog);
        btnGetOC->setObjectName("btnGetOC");

        horizontalLayout_7->addWidget(btnGetOC);


        gridLayout->addLayout(horizontalLayout_7, 4, 2, 1, 1);

        btnStartSync = new QPushButton(SyncOCDialog);
        btnStartSync->setObjectName("btnStartSync");

        gridLayout->addWidget(btnStartSync, 5, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblShowInfo = new QLabel(SyncOCDialog);
        lblShowInfo->setObjectName("lblShowInfo");

        horizontalLayout_2->addWidget(lblShowInfo);


        gridLayout->addLayout(horizontalLayout_2, 6, 0, 1, 3);


        retranslateUi(SyncOCDialog);

        QMetaObject::connectSlotsByName(SyncOCDialog);
    } // setupUi

    void retranslateUi(QDialog *SyncOCDialog)
    {
        SyncOCDialog->setWindowTitle(QCoreApplication::translate("SyncOCDialog", "Sync OC", nullptr));
        lblKexts->setText(QCoreApplication::translate("SyncOCDialog", "Kexts", nullptr));
        labelShowDLInfo->setText(QCoreApplication::translate("SyncOCDialog", "DLInfo", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableKexts->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SyncOCDialog", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableKexts->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SyncOCDialog", "Current", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableKexts->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SyncOCDialog", "Available", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableKexts->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SyncOCDialog", "Kext Files", nullptr));
        btnClearAll->setText(QCoreApplication::translate("SyncOCDialog", "Clear", nullptr));
        btnSelectAll->setText(QCoreApplication::translate("SyncOCDialog", "Select All", nullptr));
        btnSet->setText(QCoreApplication::translate("SyncOCDialog", "Settings", nullptr));
        chkKextsDev->setText(QCoreApplication::translate("SyncOCDialog", "DEV", nullptr));
        lblKextDevFrom->setText(QCoreApplication::translate("SyncOCDialog", "From", nullptr));
        lblInfo->setText(QString());
        btnCheckUpdate->setText(QCoreApplication::translate("SyncOCDialog", "Check for Kexts updates", nullptr));
        btnUpdate->setText(QCoreApplication::translate("SyncOCDialog", "Update Kexts", nullptr));
        btnStop->setText(QCoreApplication::translate("SyncOCDialog", "Stop", nullptr));
        lblOCFrom->setText(QCoreApplication::translate("SyncOCDialog", "OpenCore is from", nullptr));
        lblOpenCore->setText(QCoreApplication::translate("SyncOCDialog", "OpenCore", nullptr));
        lblResourcesFrom->setText(QCoreApplication::translate("SyncOCDialog", "Resources from", nullptr));
        chkIncludeResource->setText(QCoreApplication::translate("SyncOCDialog", "Include Resource Directory", nullptr));
        lblDevSource->setText(QCoreApplication::translate("SyncOCDialog", "OpenCore development version update source", nullptr));
        editOCDevSource->setItemText(0, QCoreApplication::translate("SyncOCDialog", "https://github.com/dortania/build-repo", nullptr));
        editOCDevSource->setItemText(1, QCoreApplication::translate("SyncOCDialog", "https://github.com/wjz304/OpenCore_NO_ACPI_Build", nullptr));
        editOCDevSource->setItemText(2, QString());

#if QT_CONFIG(tooltip)
        btnImport->setToolTip(QCoreApplication::translate("SyncOCDialog", "Import a local OpenCore Development Edition Zip file.", nullptr));
#endif // QT_CONFIG(tooltip)
        btnImport->setText(QCoreApplication::translate("SyncOCDialog", "Import", nullptr));
        lblOCVersions->setText(QCoreApplication::translate("SyncOCDialog", "Choose OpenCore Version", nullptr));
        btnGetLastOC->setText(QCoreApplication::translate("SyncOCDialog", "Get the latest version of OpenCore", nullptr));
        btnGetOC->setText(QCoreApplication::translate("SyncOCDialog", "Get OpenCore", nullptr));
        btnStartSync->setText(QCoreApplication::translate("SyncOCDialog", "Start Sync", nullptr));
        lblShowInfo->setText(QCoreApplication::translate("SyncOCDialog", "ShowInfo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SyncOCDialog: public Ui_SyncOCDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYNCOCDIALOG_H
