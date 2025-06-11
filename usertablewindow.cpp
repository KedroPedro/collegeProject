#include "usertablewindow.h"
#include "ui_usertablewindow.h"

UserTableWindow::UserTableWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserTableWindow)
{
    ui->setupUi(this);
}

UserTableWindow::~UserTableWindow()
{
    delete ui;
}
