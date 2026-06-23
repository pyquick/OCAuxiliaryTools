/********************************************************************************
** Form generated from reading UI file 'dlgdatabase.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGDATABASE_H
#define UI_DLGDATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_dlgDatabase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *editFind;
    QLabel *lblCount;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableDatabase;
    QTableWidget *tableDatabaseFind;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnGenerateEFI;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *btnIntel;
    QToolButton *btnIntelOnline;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *btnAMD;
    QToolButton *btnAMDOnline;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *btnOpenDir;

    void setupUi(QDialog *dlgDatabase)
    {
        if (dlgDatabase->objectName().isEmpty())
            dlgDatabase->setObjectName("dlgDatabase");
        dlgDatabase->resize(810, 497);
        gridLayout = new QGridLayout(dlgDatabase);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        editFind = new QLineEdit(dlgDatabase);
        editFind->setObjectName("editFind");
        editFind->setMaximumSize(QSize(16777215, 16777215));
        editFind->setClearButtonEnabled(false);

        horizontalLayout_3->addWidget(editFind);

        lblCount = new QLabel(dlgDatabase);
        lblCount->setObjectName("lblCount");
        lblCount->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(lblCount);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tableDatabase = new QTableWidget(dlgDatabase);
        if (tableDatabase->columnCount() < 1)
            tableDatabase->setColumnCount(1);
        tableDatabase->setObjectName("tableDatabase");
        tableDatabase->setMaximumSize(QSize(16777215, 16777215));
        tableDatabase->setFrameShape(QFrame::NoFrame);
        tableDatabase->setFrameShadow(QFrame::Plain);
        tableDatabase->setColumnCount(1);

        horizontalLayout->addWidget(tableDatabase);

        tableDatabaseFind = new QTableWidget(dlgDatabase);
        if (tableDatabaseFind->columnCount() < 1)
            tableDatabaseFind->setColumnCount(1);
        tableDatabaseFind->setObjectName("tableDatabaseFind");
        tableDatabaseFind->setFrameShape(QFrame::NoFrame);
        tableDatabaseFind->setFrameShadow(QFrame::Plain);
        tableDatabaseFind->setColumnCount(1);

        horizontalLayout->addWidget(tableDatabaseFind);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnGenerateEFI = new QToolButton(dlgDatabase);
        btnGenerateEFI->setObjectName("btnGenerateEFI");

        horizontalLayout_2->addWidget(btnGenerateEFI);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        btnIntel = new QToolButton(dlgDatabase);
        btnIntel->setObjectName("btnIntel");

        horizontalLayout_2->addWidget(btnIntel);

        btnIntelOnline = new QToolButton(dlgDatabase);
        btnIntelOnline->setObjectName("btnIntelOnline");

        horizontalLayout_2->addWidget(btnIntelOnline);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnAMD = new QToolButton(dlgDatabase);
        btnAMD->setObjectName("btnAMD");

        horizontalLayout_2->addWidget(btnAMD);

        btnAMDOnline = new QToolButton(dlgDatabase);
        btnAMDOnline->setObjectName("btnAMDOnline");

        horizontalLayout_2->addWidget(btnAMDOnline);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnOpenDir = new QToolButton(dlgDatabase);
        btnOpenDir->setObjectName("btnOpenDir");

        horizontalLayout_2->addWidget(btnOpenDir);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(dlgDatabase);

        QMetaObject::connectSlotsByName(dlgDatabase);
    } // setupUi

    void retranslateUi(QDialog *dlgDatabase)
    {
        dlgDatabase->setWindowTitle(QCoreApplication::translate("dlgDatabase", "Configuration file database", nullptr));
        editFind->setPlaceholderText(QCoreApplication::translate("dlgDatabase", "Find", nullptr));
        lblCount->setText(QCoreApplication::translate("dlgDatabase", "0", nullptr));
        btnGenerateEFI->setText(QCoreApplication::translate("dlgDatabase", "Generate EFI", nullptr));
        btnIntel->setText(QCoreApplication::translate("dlgDatabase", "Intel CPU Configuration Guide", nullptr));
        btnIntelOnline->setText(QCoreApplication::translate("dlgDatabase", "Online", nullptr));
        btnAMD->setText(QCoreApplication::translate("dlgDatabase", "AMD CPU Configuration Guide", nullptr));
        btnAMDOnline->setText(QCoreApplication::translate("dlgDatabase", "Online", nullptr));
        btnOpenDir->setText(QCoreApplication::translate("dlgDatabase", "Open BaseConfigs Directory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlgDatabase: public Ui_dlgDatabase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGDATABASE_H
