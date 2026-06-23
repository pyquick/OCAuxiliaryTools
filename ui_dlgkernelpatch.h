/********************************************************************************
** Form generated from reading UI file 'dlgkernelpatch.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGKERNELPATCH_H
#define UI_DLGKERNELPATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dlgKernelPatch
{
public:
    QGridLayout *gridLayout;
    QPushButton *btnAdd;
    QListWidget *listWidget;
    QPushButton *btnOpenDir;

    void setupUi(QDialog *dlgKernelPatch)
    {
        if (dlgKernelPatch->objectName().isEmpty())
            dlgKernelPatch->setObjectName("dlgKernelPatch");
        dlgKernelPatch->resize(400, 300);
        gridLayout = new QGridLayout(dlgKernelPatch);
        gridLayout->setObjectName("gridLayout");
        btnAdd = new QPushButton(dlgKernelPatch);
        btnAdd->setObjectName("btnAdd");

        gridLayout->addWidget(btnAdd, 1, 0, 1, 1);

        listWidget = new QListWidget(dlgKernelPatch);
        listWidget->setObjectName("listWidget");
        listWidget->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        btnOpenDir = new QPushButton(dlgKernelPatch);
        btnOpenDir->setObjectName("btnOpenDir");

        gridLayout->addWidget(btnOpenDir, 2, 0, 1, 1);


        retranslateUi(dlgKernelPatch);

        QMetaObject::connectSlotsByName(dlgKernelPatch);
    } // setupUi

    void retranslateUi(QDialog *dlgKernelPatch)
    {
        dlgKernelPatch->setWindowTitle(QCoreApplication::translate("dlgKernelPatch", "Kernel Patches", nullptr));
        btnAdd->setText(QCoreApplication::translate("dlgKernelPatch", "Add", nullptr));
        btnOpenDir->setText(QCoreApplication::translate("dlgKernelPatch", "Open the patch file directory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlgKernelPatch: public Ui_dlgKernelPatch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGKERNELPATCH_H
