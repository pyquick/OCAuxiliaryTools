/********************************************************************************
** Form generated from reading UI file 'dlgmisc.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMISC_H
#define UI_DLGMISC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dlgMisc
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QPushButton *btnAdd;

    void setupUi(QDialog *dlgMisc)
    {
        if (dlgMisc->objectName().isEmpty())
            dlgMisc->setObjectName("dlgMisc");
        dlgMisc->resize(349, 300);
        gridLayout = new QGridLayout(dlgMisc);
        gridLayout->setObjectName("gridLayout");
        listWidget = new QListWidget(dlgMisc);
        listWidget->setObjectName("listWidget");
        listWidget->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        btnAdd = new QPushButton(dlgMisc);
        btnAdd->setObjectName("btnAdd");

        gridLayout->addWidget(btnAdd, 1, 0, 1, 1);


        retranslateUi(dlgMisc);

        QMetaObject::connectSlotsByName(dlgMisc);
    } // setupUi

    void retranslateUi(QDialog *dlgMisc)
    {
        dlgMisc->setWindowTitle(QCoreApplication::translate("dlgMisc", "Dialog", nullptr));
        btnAdd->setText(QCoreApplication::translate("dlgMisc", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlgMisc: public Ui_dlgMisc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGMISC_H
