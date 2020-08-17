/********************************************************************************
** Form generated from reading UI file 'adminhome.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINHOME_H
#define UI_ADMINHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminHome
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminHome)
    {
        if (AdminHome->objectName().isEmpty())
            AdminHome->setObjectName(QStringLiteral("AdminHome"));
        AdminHome->resize(800, 600);
        centralwidget = new QWidget(AdminHome);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 50, 201, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 100, 201, 23));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 150, 201, 23));
        AdminHome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminHome);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        AdminHome->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminHome);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AdminHome->setStatusBar(statusbar);

        retranslateUi(AdminHome);

        QMetaObject::connectSlotsByName(AdminHome);
    } // setupUi

    void retranslateUi(QMainWindow *AdminHome)
    {
        AdminHome->setWindowTitle(QApplication::translate("AdminHome", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AdminHome", "Create a service", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AdminHome", "Update a service", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AdminHome", "Delete a service", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminHome: public Ui_AdminHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINHOME_H
