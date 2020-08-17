/********************************************************************************
** Form generated from reading UI file 'guestwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUESTWINDOW_H
#define UI_GUESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuestWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GuestWindow)
    {
        if (GuestWindow->objectName().isEmpty())
            GuestWindow->setObjectName(QString::fromUtf8("GuestWindow"));
        GuestWindow->resize(800, 600);
        menubar = new QMenuBar(GuestWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        GuestWindow->setMenuBar(menubar);
        centralwidget = new QWidget(GuestWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        GuestWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(GuestWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GuestWindow->setStatusBar(statusbar);

        retranslateUi(GuestWindow);

        QMetaObject::connectSlotsByName(GuestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GuestWindow)
    {
        GuestWindow->setWindowTitle(QCoreApplication::translate("GuestWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuestWindow: public Ui_GuestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUESTWINDOW_H
