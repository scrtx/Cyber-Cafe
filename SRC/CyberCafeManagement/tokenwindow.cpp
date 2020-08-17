#include "tokenwindow.h"
#include "ui_tokenwindow.h"

TokenWindow::TokenWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TokenWindow)
{
    ui->setupUi(this);
}

TokenWindow::~TokenWindow()
{
    delete ui;
}
