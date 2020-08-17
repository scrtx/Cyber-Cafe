#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_asGuest_clicked()
{
    hide();
    guestWindow=new GuestWindow(this);

    guestWindow->show();
}

void MainWindow::on_pushButton_asAdmin_clicked()
{
    hide();
    adminWindow= new AdminWindow(this);
    adminWindow->show();
}