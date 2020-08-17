#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include "adminhome.h"

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::AdminWindow *ui;
    AdminHome *adminHome;
};

#endif // ADMINWINDOW_H
