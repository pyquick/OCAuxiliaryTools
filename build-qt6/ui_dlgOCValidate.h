/********************************************************************************
** Form generated from reading UI file 'dlgOCValidate.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGOCVALIDATE_H
#define UI_DLGOCVALIDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_dlgOCValidate
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QListWidget *listOCValidate;
    QPushButton *btnGo;
    QCheckBox *chkSignature;
    QPushButton *btnCreateVault;
    QPushButton *btnClose;

    void setupUi(QDialog *dlgOCValidate)
    {
        if (dlgOCValidate->objectName().isEmpty())
            dlgOCValidate->setObjectName("dlgOCValidate");
        dlgOCValidate->resize(605, 312);
        gridLayout = new QGridLayout(dlgOCValidate);
        gridLayout->setObjectName("gridLayout");
        textEdit = new QTextEdit(dlgOCValidate);
        textEdit->setObjectName("textEdit");
        textEdit->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(textEdit, 0, 0, 1, 4);

        listOCValidate = new QListWidget(dlgOCValidate);
        listOCValidate->setObjectName("listOCValidate");
        listOCValidate->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(listOCValidate, 1, 0, 1, 4);

        btnGo = new QPushButton(dlgOCValidate);
        btnGo->setObjectName("btnGo");

        gridLayout->addWidget(btnGo, 2, 0, 1, 1);

        chkSignature = new QCheckBox(dlgOCValidate);
        chkSignature->setObjectName("chkSignature");

        gridLayout->addWidget(chkSignature, 2, 1, 1, 1);

        btnCreateVault = new QPushButton(dlgOCValidate);
        btnCreateVault->setObjectName("btnCreateVault");

        gridLayout->addWidget(btnCreateVault, 2, 2, 1, 1);

        btnClose = new QPushButton(dlgOCValidate);
        btnClose->setObjectName("btnClose");

        gridLayout->addWidget(btnClose, 2, 3, 1, 1);


        retranslateUi(dlgOCValidate);

        QMetaObject::connectSlotsByName(dlgOCValidate);
    } // setupUi

    void retranslateUi(QDialog *dlgOCValidate)
    {
        dlgOCValidate->setWindowTitle(QCoreApplication::translate("dlgOCValidate", "OC Validate", nullptr));
        btnGo->setText(QCoreApplication::translate("dlgOCValidate", "Go", nullptr));
        chkSignature->setText(QCoreApplication::translate("dlgOCValidate", "Signature", nullptr));
        btnCreateVault->setText(QCoreApplication::translate("dlgOCValidate", "Create Vault", nullptr));
        btnClose->setText(QCoreApplication::translate("dlgOCValidate", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlgOCValidate: public Ui_dlgOCValidate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGOCVALIDATE_H
