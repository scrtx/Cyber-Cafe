/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(800, 600);
        centralwidget = new QWidget(AdminWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(220, 39, 271, 251));
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(70, 80, 113, 20));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(70, 140, 113, 20));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 50, 47, 13));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 110, 47, 13));
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(90, 190, 75, 23));
        AdminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        AdminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AdminWindow->setStatusBar(statusbar);

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AdminWindow", "Admin-Login", Q_NULLPTR));
        label->setText(QApplication::translate("AdminWindow", "Usernamel", Q_NULLPTR));
        label_2->setText(QApplication::translate("AdminWindow", "Password", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("AdminWindow", "Login", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
