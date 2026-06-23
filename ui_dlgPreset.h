/********************************************************************************
** Form generated from reading UI file 'dlgPreset.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPRESET_H
#define UI_DLGPRESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dlgPreset
{
public:
    QGridLayout *gridLayout;
    QPushButton *btnAdd;
    QListWidget *listPreset;

    void setupUi(QDialog *dlgPreset)
    {
        if (dlgPreset->objectName().isEmpty())
            dlgPreset->setObjectName("dlgPreset");
        dlgPreset->resize(462, 368);
        gridLayout = new QGridLayout(dlgPreset);
        gridLayout->setObjectName("gridLayout");
        btnAdd = new QPushButton(dlgPreset);
        btnAdd->setObjectName("btnAdd");

        gridLayout->addWidget(btnAdd, 1, 0, 1, 1);

        listPreset = new QListWidget(dlgPreset);
        new QListWidgetItem(listPreset);
        listPreset->setObjectName("listPreset");
        listPreset->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(listPreset, 0, 0, 1, 1);


        retranslateUi(dlgPreset);

        QMetaObject::connectSlotsByName(dlgPreset);
    } // setupUi

    void retranslateUi(QDialog *dlgPreset)
    {
        dlgPreset->setWindowTitle(QCoreApplication::translate("dlgPreset", "Preset", nullptr));
        btnAdd->setText(QCoreApplication::translate("dlgPreset", "Add", nullptr));

        const bool __sortingEnabled = listPreset->isSortingEnabled();
        listPreset->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listPreset->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("dlgPreset", "PciRoot(0x0)/Pci(0x1b,0x0)  \357\275\234  HDA", nullptr));
        listPreset->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class dlgPreset: public Ui_dlgPreset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGPRESET_H
