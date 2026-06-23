/********************************************************************************
** Form generated from reading UI file 'dlgMountESP.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMOUNTESP_H
#define UI_DLGMOUNTESP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dlgMountESP
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QPushButton *btnMount;
    QPushButton *btnMountOpenConfig;

    void setupUi(QDialog *dlgMountESP)
    {
        if (dlgMountESP->objectName().isEmpty())
            dlgMountESP->setObjectName("dlgMountESP");
        dlgMountESP->resize(632, 274);
        gridLayout = new QGridLayout(dlgMountESP);
        gridLayout->setObjectName("gridLayout");
        listWidget = new QListWidget(dlgMountESP);
        listWidget->setObjectName("listWidget");
        listWidget->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        btnMount = new QPushButton(dlgMountESP);
        btnMount->setObjectName("btnMount");

        gridLayout->addWidget(btnMount, 1, 0, 1, 1);

        btnMountOpenConfig = new QPushButton(dlgMountESP);
        btnMountOpenConfig->setObjectName("btnMountOpenConfig");

        gridLayout->addWidget(btnMountOpenConfig, 2, 0, 1, 1);


        retranslateUi(dlgMountESP);

        QMetaObject::connectSlotsByName(dlgMountESP);
    } // setupUi

    void retranslateUi(QDialog *dlgMountESP)
    {
        dlgMountESP->setWindowTitle(QCoreApplication::translate("dlgMountESP", "Mount ESP partition", nullptr));
        btnMount->setText(QCoreApplication::translate("dlgMountESP", "Mount", nullptr));
        btnMountOpenConfig->setText(QCoreApplication::translate("dlgMountESP", "Mount and open Config.plist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlgMountESP: public Ui_dlgMountESP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGMOUNTESP_H
