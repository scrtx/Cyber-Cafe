#include "adminwindow.h"
#include "ui_adminwindow.h"
#include <QMessageBox>

AdminWindow::AdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::on_pushButton_login_clicked()
{
    QString username=ui->lineEdit_username->text();
    QString password=ui->lineEdit_password->text();
    if(username=="test" && password=="test" )
    {
      hide();
      adminHome=new AdminHome(this);
      adminHome->show();
    }
    else
    {
      QMessageBox::warning(this,"Login Failed","Incorrect username or password");

    }


}
