#include "addappointmentwindow.h"
#include "ui_addappointmentwindow.h"
#include "database.h"

#include <QSqlQuery>
#include <QSqlDatabase>


AddAppointmentWindow::AddAppointmentWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddAppointmentWindow)
{
    ui->setupUi(this);

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select userfullname from "+ Database().getDbName() +".users");
    query.exec();
    query.next();

    int ind = 0;
    while (query.next()) {
        QString name = query.value(0).toString();
        if (!query.value(0).isNull()) {
            ui->CBUsers->addItem(name);
        }
    }

}

AddAppointmentWindow::~AddAppointmentWindow()
{
    delete ui;
}

void AddAppointmentWindow::on_PBCancel_clicked()
{
    this->close();
}

