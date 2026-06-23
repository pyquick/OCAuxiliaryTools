/********************************************************************************
** Form generated from reading UI file 'dlgnewkeyfield.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGNEWKEYFIELD_H
#define UI_DLGNEWKEYFIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dlgNewKeyField
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblKeyName;
    QLineEdit *editKeyName;
    QLabel *label;
    QComboBox *cboxKeyType;
    QPushButton *btnAdd;

    void setupUi(QDialog *dlgNewKeyField)
    {
        if (dlgNewKeyField->objectName().isEmpty())
            dlgNewKeyField->setObjectName("dlgNewKeyField");
        dlgNewKeyField->resize(489, 114);
        gridLayout = new QGridLayout(dlgNewKeyField);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lblKeyName = new QLabel(dlgNewKeyField);
        lblKeyName->setObjectName("lblKeyName");

        horizontalLayout->addWidget(lblKeyName);

        editKeyName = new QLineEdit(dlgNewKeyField);
        editKeyName->setObjectName("editKeyName");

        horizontalLayout->addWidget(editKeyName);

        label = new QLabel(dlgNewKeyField);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        cboxKeyType = new QComboBox(dlgNewKeyField);
        cboxKeyType->addItem(QString());
        cboxKeyType->addItem(QString());
        cboxKeyType->addItem(QString());
        cboxKeyType->addItem(QString());
        cboxKeyType->setObjectName("cboxKeyType");

        horizontalLayout->addWidget(cboxKeyType);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        btnAdd = new QPushButton(dlgNewKeyField);
        btnAdd->setObjectName("btnAdd");

        gridLayout->addWidget(btnAdd, 1, 0, 1, 1);


        retranslateUi(dlgNewKeyField);

        QMetaObject::connectSlotsByName(dlgNewKeyField);
    } // setupUi

    void retranslateUi(QDialog *dlgNewKeyField)
    {
        dlgNewKeyField->setWindowTitle(QCoreApplication::translate("dlgNewKeyField", "New Key Field", nullptr));
        lblKeyName->setText(QCoreApplication::translate("dlgNewKeyField", "Key Name", nullptr));
        label->setText(QCoreApplication::translate("dlgNewKeyField", "Key Type", nullptr));
        cboxKeyType->setItemText(0, QCoreApplication::translate("dlgNewKeyField", "string", nullptr));
        cboxKeyType->setItemText(1, QCoreApplication::translate("dlgNewKeyField", "integer", nullptr));
        cboxKeyType->setItemText(2, QCoreApplication::translate("dlgNewKeyField", "data", nullptr));
        cboxKeyType->setItemText(3, QCoreApplication::translate("dlgNewKeyField", "bool", nullptr));

        btnAdd->setText(QCoreApplication::translate("dlgNewKeyField", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlgNewKeyField: public Ui_dlgNewKeyField {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGNEWKEYFIELD_H
