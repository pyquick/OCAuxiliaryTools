/********************************************************************************
** Form generated from reading UI file 'autoupdatedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOUPDATEDIALOG_H
#define UI_AUTOUPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_AutoUpdateDialog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QToolButton *btnShowLog;
    QProgressBar *progressBar;
    QPushButton *btnStartUpdate;

    void setupUi(QDialog *AutoUpdateDialog)
    {
        if (AutoUpdateDialog->objectName().isEmpty())
            AutoUpdateDialog->setObjectName("AutoUpdateDialog");
        AutoUpdateDialog->resize(651, 248);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AutoUpdateDialog->sizePolicy().hasHeightForWidth());
        AutoUpdateDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(AutoUpdateDialog);
        gridLayout->setObjectName("gridLayout");
        textEdit = new QTextEdit(AutoUpdateDialog);
        textEdit->setObjectName("textEdit");
        textEdit->setMaximumSize(QSize(16777215, 16777215));
        textEdit->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(textEdit, 0, 0, 1, 2);

        btnShowLog = new QToolButton(AutoUpdateDialog);
        btnShowLog->setObjectName("btnShowLog");

        gridLayout->addWidget(btnShowLog, 1, 1, 1, 1);

        progressBar = new QProgressBar(AutoUpdateDialog);
        progressBar->setObjectName("progressBar");
        progressBar->setMinimum(0);
        progressBar->setMaximum(100);
        progressBar->setValue(0);
        progressBar->setTextVisible(true);

        gridLayout->addWidget(progressBar, 1, 0, 1, 1);

        btnStartUpdate = new QPushButton(AutoUpdateDialog);
        btnStartUpdate->setObjectName("btnStartUpdate");

        gridLayout->addWidget(btnStartUpdate, 2, 0, 1, 2);


        retranslateUi(AutoUpdateDialog);

        QMetaObject::connectSlotsByName(AutoUpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *AutoUpdateDialog)
    {
        AutoUpdateDialog->setWindowTitle(QCoreApplication::translate("AutoUpdateDialog", "Dialog", nullptr));
        btnShowLog->setText(QCoreApplication::translate("AutoUpdateDialog", "Show Log", nullptr));
        btnStartUpdate->setText(QCoreApplication::translate("AutoUpdateDialog", "Close and start upgrade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutoUpdateDialog: public Ui_AutoUpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOUPDATEDIALOG_H
