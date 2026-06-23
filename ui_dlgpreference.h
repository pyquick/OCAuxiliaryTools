/********************************************************************************
** Form generated from reading UI file 'dlgpreference.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPREFERENCE_H
#define UI_DLGPREFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlgPreference
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_9;
    QGroupBox *gbox3;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbtnAPI;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbtnToken;
    QLabel *lblToken;
    QLineEdit *editToken;
    QToolButton *btnTokenHelp;
    QRadioButton *rbtnWeb;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkProxy;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *txtHostName;
    QLabel *label_2;
    QLineEdit *txtPort;
    QGroupBox *gbox1;
    QGridLayout *gridLayout_2;
    QComboBox *comboBoxNet;
    QToolButton *btnTest;
    QGroupBox *gbox2;
    QGridLayout *gridLayout_6;
    QComboBox *comboBoxWeb;
    QToolButton *btnPing;
    QGroupBox *gbox4;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_7;
    QCheckBox *chkRecentOpen;
    QCheckBox *chkOpenDir;
    QCheckBox *chkMountESP;
    QCheckBox *chkBackupEFI;
    QCheckBox *chkDatabase;
    QCheckBox *chkHideToolbar;
    QGroupBox *gbox5;
    QGridLayout *gridLayout_4;
    QCheckBox *chkBoxLastFile;
    QCheckBox *chkShowVolName;
    QCheckBox *chkHoverTips;
    QCheckBox *chkTabIndent;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnDownloadKexts;
    QTextEdit *textEdit;
    QToolButton *btnOpenUrl;
    QTableWidget *tableKextUrl;
    QLineEdit *myeditFind;
    QToolButton *btnDel;
    QToolButton *btnAdd;
    QToolButton *btnStop;
    QLabel *lblPath;

    void setupUi(QDialog *dlgPreference)
    {
        if (dlgPreference->objectName().isEmpty())
            dlgPreference->setObjectName("dlgPreference");
        dlgPreference->resize(767, 575);
        gridLayout = new QGridLayout(dlgPreference);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(dlgPreference);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setDocumentMode(true);
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_10 = new QGridLayout(tab_3);
        gridLayout_10->setObjectName("gridLayout_10");
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName("groupBox");
        gridLayout_9 = new QGridLayout(groupBox);
        gridLayout_9->setObjectName("gridLayout_9");
        gbox3 = new QGroupBox(groupBox);
        gbox3->setObjectName("gbox3");
        verticalLayout = new QVBoxLayout(gbox3);
        verticalLayout->setObjectName("verticalLayout");
        rbtnAPI = new QRadioButton(gbox3);
        rbtnAPI->setObjectName("rbtnAPI");
        rbtnAPI->setChecked(true);

        verticalLayout->addWidget(rbtnAPI);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        rbtnToken = new QRadioButton(gbox3);
        rbtnToken->setObjectName("rbtnToken");

        horizontalLayout_2->addWidget(rbtnToken);

        lblToken = new QLabel(gbox3);
        lblToken->setObjectName("lblToken");

        horizontalLayout_2->addWidget(lblToken);

        editToken = new QLineEdit(gbox3);
        editToken->setObjectName("editToken");

        horizontalLayout_2->addWidget(editToken);

        btnTokenHelp = new QToolButton(gbox3);
        btnTokenHelp->setObjectName("btnTokenHelp");

        horizontalLayout_2->addWidget(btnTokenHelp);


        verticalLayout->addLayout(horizontalLayout_2);

        rbtnWeb = new QRadioButton(gbox3);
        rbtnWeb->setObjectName("rbtnWeb");

        verticalLayout->addWidget(rbtnWeb);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        chkProxy = new QCheckBox(gbox3);
        chkProxy->setObjectName("chkProxy");

        horizontalLayout->addWidget(chkProxy);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(gbox3);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        txtHostName = new QLineEdit(gbox3);
        txtHostName->setObjectName("txtHostName");
        txtHostName->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(txtHostName);

        label_2 = new QLabel(gbox3);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        txtPort = new QLineEdit(gbox3);
        txtPort->setObjectName("txtPort");
        txtPort->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(txtPort);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_9->addWidget(gbox3, 2, 0, 1, 2);

        gbox1 = new QGroupBox(groupBox);
        gbox1->setObjectName("gbox1");
        gridLayout_2 = new QGridLayout(gbox1);
        gridLayout_2->setObjectName("gridLayout_2");
        comboBoxNet = new QComboBox(gbox1);
        comboBoxNet->addItem(QString());
        comboBoxNet->addItem(QString());
        comboBoxNet->addItem(QString());
        comboBoxNet->addItem(QString());
        comboBoxNet->addItem(QString());
        comboBoxNet->addItem(QString());
        comboBoxNet->addItem(QString());
        comboBoxNet->addItem(QString());
        comboBoxNet->addItem(QString());
        comboBoxNet->setObjectName("comboBoxNet");
        comboBoxNet->setEditable(true);

        gridLayout_2->addWidget(comboBoxNet, 0, 0, 1, 1);

        btnTest = new QToolButton(gbox1);
        btnTest->setObjectName("btnTest");

        gridLayout_2->addWidget(btnTest, 0, 1, 1, 1);


        gridLayout_9->addWidget(gbox1, 0, 0, 1, 2);

        gbox2 = new QGroupBox(groupBox);
        gbox2->setObjectName("gbox2");
        gridLayout_6 = new QGridLayout(gbox2);
        gridLayout_6->setObjectName("gridLayout_6");
        comboBoxWeb = new QComboBox(gbox2);
        comboBoxWeb->addItem(QString());
        comboBoxWeb->addItem(QString());
        comboBoxWeb->setObjectName("comboBoxWeb");
        comboBoxWeb->setEditable(true);

        gridLayout_6->addWidget(comboBoxWeb, 0, 0, 1, 1);

        btnPing = new QToolButton(gbox2);
        btnPing->setObjectName("btnPing");

        gridLayout_6->addWidget(btnPing, 0, 1, 1, 1);


        gridLayout_9->addWidget(gbox2, 1, 0, 1, 2);


        gridLayout_10->addWidget(groupBox, 0, 0, 1, 2);

        gbox4 = new QGroupBox(tab_3);
        gbox4->setObjectName("gbox4");
        gridLayout_8 = new QGridLayout(gbox4);
        gridLayout_8->setObjectName("gridLayout_8");
        groupBox_4 = new QGroupBox(gbox4);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_7 = new QGridLayout(groupBox_4);
        gridLayout_7->setObjectName("gridLayout_7");
        chkRecentOpen = new QCheckBox(groupBox_4);
        chkRecentOpen->setObjectName("chkRecentOpen");
        chkRecentOpen->setChecked(true);

        gridLayout_7->addWidget(chkRecentOpen, 0, 0, 1, 1);

        chkOpenDir = new QCheckBox(groupBox_4);
        chkOpenDir->setObjectName("chkOpenDir");
        chkOpenDir->setChecked(true);

        gridLayout_7->addWidget(chkOpenDir, 0, 1, 1, 1);

        chkMountESP = new QCheckBox(groupBox_4);
        chkMountESP->setObjectName("chkMountESP");
        chkMountESP->setChecked(true);

        gridLayout_7->addWidget(chkMountESP, 0, 3, 1, 1);

        chkBackupEFI = new QCheckBox(groupBox_4);
        chkBackupEFI->setObjectName("chkBackupEFI");
        chkBackupEFI->setChecked(true);

        gridLayout_7->addWidget(chkBackupEFI, 1, 0, 1, 1);

        chkDatabase = new QCheckBox(groupBox_4);
        chkDatabase->setObjectName("chkDatabase");
        chkDatabase->setChecked(true);

        gridLayout_7->addWidget(chkDatabase, 1, 1, 1, 1);


        gridLayout_8->addWidget(groupBox_4, 1, 0, 1, 1);

        chkHideToolbar = new QCheckBox(gbox4);
        chkHideToolbar->setObjectName("chkHideToolbar");

        gridLayout_8->addWidget(chkHideToolbar, 2, 0, 1, 1);


        gridLayout_10->addWidget(gbox4, 1, 0, 1, 1);

        gbox5 = new QGroupBox(tab_3);
        gbox5->setObjectName("gbox5");
        gridLayout_4 = new QGridLayout(gbox5);
        gridLayout_4->setObjectName("gridLayout_4");
        chkBoxLastFile = new QCheckBox(gbox5);
        chkBoxLastFile->setObjectName("chkBoxLastFile");

        gridLayout_4->addWidget(chkBoxLastFile, 0, 0, 1, 1);

        chkShowVolName = new QCheckBox(gbox5);
        chkShowVolName->setObjectName("chkShowVolName");

        gridLayout_4->addWidget(chkShowVolName, 1, 0, 1, 1);

        chkHoverTips = new QCheckBox(gbox5);
        chkHoverTips->setObjectName("chkHoverTips");
        chkHoverTips->setChecked(false);

        gridLayout_4->addWidget(chkHoverTips, 2, 0, 1, 1);

        chkTabIndent = new QCheckBox(gbox5);
        chkTabIndent->setObjectName("chkTabIndent");

        gridLayout_4->addWidget(chkTabIndent, 3, 0, 1, 1);


        gridLayout_10->addWidget(gbox5, 1, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalSpacer = new QSpacerItem(458, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 3, 6, 1, 1);

        btnDownloadKexts = new QToolButton(tab_2);
        btnDownloadKexts->setObjectName("btnDownloadKexts");

        gridLayout_3->addWidget(btnDownloadKexts, 3, 3, 1, 1);

        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName("textEdit");
        textEdit->setFrameShape(QFrame::Shape::NoFrame);

        gridLayout_3->addWidget(textEdit, 0, 0, 1, 7);

        btnOpenUrl = new QToolButton(tab_2);
        btnOpenUrl->setObjectName("btnOpenUrl");

        gridLayout_3->addWidget(btnOpenUrl, 3, 2, 1, 1);

        tableKextUrl = new QTableWidget(tab_2);
        if (tableKextUrl->columnCount() < 2)
            tableKextUrl->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableKextUrl->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableKextUrl->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableKextUrl->setObjectName("tableKextUrl");
        tableKextUrl->setFrameShape(QFrame::Shape::NoFrame);
        tableKextUrl->setFrameShadow(QFrame::Shadow::Plain);

        gridLayout_3->addWidget(tableKextUrl, 2, 0, 1, 7);

        myeditFind = new QLineEdit(tab_2);
        myeditFind->setObjectName("myeditFind");
        myeditFind->setClearButtonEnabled(true);

        gridLayout_3->addWidget(myeditFind, 1, 0, 1, 7);

        btnDel = new QToolButton(tab_2);
        btnDel->setObjectName("btnDel");

        gridLayout_3->addWidget(btnDel, 3, 1, 1, 1);

        btnAdd = new QToolButton(tab_2);
        btnAdd->setObjectName("btnAdd");

        gridLayout_3->addWidget(btnAdd, 3, 0, 1, 1);

        btnStop = new QToolButton(tab_2);
        btnStop->setObjectName("btnStop");

        gridLayout_3->addWidget(btnStop, 3, 4, 1, 1);

        lblPath = new QLabel(tab_2);
        lblPath->setObjectName("lblPath");

        gridLayout_3->addWidget(lblPath, 3, 5, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(dlgPreference);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dlgPreference);
    } // setupUi

    void retranslateUi(QDialog *dlgPreference)
    {
        dlgPreference->setWindowTitle(QCoreApplication::translate("dlgPreference", "Preference", nullptr));
        groupBox->setTitle(QCoreApplication::translate("dlgPreference", "Network", nullptr));
        gbox3->setTitle(QCoreApplication::translate("dlgPreference", "The way to get the download link for Kext upgrade", nullptr));
        rbtnAPI->setText(QCoreApplication::translate("dlgPreference", "Accessing the GitHub API (A limit of 60 visits per hour).", nullptr));
        rbtnToken->setText(QCoreApplication::translate("dlgPreference", "Access the GitHub API using a Token (A limit of 5000 visits per hour).", nullptr));
        lblToken->setText(QCoreApplication::translate("dlgPreference", "Your personal access tokens : ", nullptr));
        btnTokenHelp->setText(QCoreApplication::translate("dlgPreference", "?", nullptr));
        rbtnWeb->setText(QCoreApplication::translate("dlgPreference", "Crawl web source code (No limit on the number of visits)", nullptr));
        chkProxy->setText(QCoreApplication::translate("dlgPreference", "HTTP && HTTPS Proxy", nullptr));
        label->setText(QCoreApplication::translate("dlgPreference", "Host Name", nullptr));
        txtHostName->setText(QCoreApplication::translate("dlgPreference", "127.0.0.1", nullptr));
        label_2->setText(QCoreApplication::translate("dlgPreference", "Port", nullptr));
        txtPort->setText(QCoreApplication::translate("dlgPreference", "38457", nullptr));
        gbox1->setTitle(QCoreApplication::translate("dlgPreference", "Select the mirror server for upgrade download", nullptr));
        comboBoxNet->setItemText(0, QCoreApplication::translate("dlgPreference", "https://github.com/", nullptr));
        comboBoxNet->setItemText(1, QCoreApplication::translate("dlgPreference", "https://gh.llkk.cc/https://github.com/", nullptr));
        comboBoxNet->setItemText(2, QCoreApplication::translate("dlgPreference", "https://gh.flyinbug.top/gh/https://github.com/", nullptr));
        comboBoxNet->setItemText(3, QCoreApplication::translate("dlgPreference", "https://download.fastgit.org/", nullptr));
        comboBoxNet->setItemText(4, QCoreApplication::translate("dlgPreference", "https://ghproxy.com/https://github.com/", nullptr));
        comboBoxNet->setItemText(5, QCoreApplication::translate("dlgPreference", "https://gh.api.99988866.xyz/https://github.com/", nullptr));
        comboBoxNet->setItemText(6, QCoreApplication::translate("dlgPreference", "https://archive.fastgit.org/", nullptr));
        comboBoxNet->setItemText(7, QCoreApplication::translate("dlgPreference", "https://github.moeyy.xyz/https://github.com/", nullptr));
        comboBoxNet->setItemText(8, QCoreApplication::translate("dlgPreference", "https://mirror.ghproxy.com/https://github.com/", nullptr));

        btnTest->setText(QCoreApplication::translate("dlgPreference", "Testing", nullptr));
        gbox2->setTitle(QCoreApplication::translate("dlgPreference", "Select the mirror server for web access", nullptr));
        comboBoxWeb->setItemText(0, QCoreApplication::translate("dlgPreference", "https://github.com/", nullptr));
        comboBoxWeb->setItemText(1, QCoreApplication::translate("dlgPreference", "https://hub.fastgit.org/", nullptr));

        btnPing->setText(QCoreApplication::translate("dlgPreference", "Testing", nullptr));
        gbox4->setTitle(QCoreApplication::translate("dlgPreference", "UI Appearance (effective after the next app opening)", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("dlgPreference", "Toolbar button", nullptr));
        chkRecentOpen->setText(QCoreApplication::translate("dlgPreference", "Recently Open", nullptr));
        chkOpenDir->setText(QCoreApplication::translate("dlgPreference", "Browse Catalog", nullptr));
        chkMountESP->setText(QCoreApplication::translate("dlgPreference", "Mount ESP", nullptr));
        chkBackupEFI->setText(QCoreApplication::translate("dlgPreference", "Backup EFI", nullptr));
        chkDatabase->setText(QCoreApplication::translate("dlgPreference", "Database", nullptr));
        chkHideToolbar->setText(QCoreApplication::translate("dlgPreference", "Hide Toolbar", nullptr));
        gbox5->setTitle(QCoreApplication::translate("dlgPreference", "Additional Options", nullptr));
        chkBoxLastFile->setText(QCoreApplication::translate("dlgPreference", "Automatically open the last opened file", nullptr));
        chkShowVolName->setText(QCoreApplication::translate("dlgPreference", "Show all volume names when mounting ESP", nullptr));
        chkHoverTips->setText(QCoreApplication::translate("dlgPreference", "Hover Tips", nullptr));
        chkTabIndent->setText(QCoreApplication::translate("dlgPreference", "Use TAB Indent", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("dlgPreference", "Misc", nullptr));
        btnDownloadKexts->setText(QCoreApplication::translate("dlgPreference", "Download Kexts to the user database", nullptr));
        textEdit->setHtml(QCoreApplication::translate("dlgPreference", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", nullptr));
        btnOpenUrl->setText(QCoreApplication::translate("dlgPreference", "Open URL in browser", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableKextUrl->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("dlgPreference", "Kext Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableKextUrl->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("dlgPreference", "Source URL", nullptr));
        myeditFind->setPlaceholderText(QCoreApplication::translate("dlgPreference", "Find", nullptr));
        btnDel->setText(QCoreApplication::translate("dlgPreference", "-", nullptr));
        btnAdd->setText(QCoreApplication::translate("dlgPreference", "+", nullptr));
        btnStop->setText(QCoreApplication::translate("dlgPreference", "Stop", nullptr));
        lblPath->setText(QCoreApplication::translate("dlgPreference", "~\\.config\\OCAuxiliaryTools\\KextUrl.txt", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("dlgPreference", "Kext Upgrade URL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlgPreference: public Ui_dlgPreference {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGPREFERENCE_H
