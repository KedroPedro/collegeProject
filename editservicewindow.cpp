#include "editservicewindow.h"
#include "ui_editservicewindow.h"
#include "database.h"

#include <QSqlQuery>
#include <QSqlDatabase>

EditServiceWindow::EditServiceWindow(int serviceId,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditServiceWindow),servId(serviceId)
{
    ui->setupUi(this);

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select serviceduration,servicename,serviceprice,servicedescription from "+Database().getDbName()+".services where id = :id");
    query.bindValue(":id",serviceId);
    query.exec();
    query.next();

    ui->LEDuration->setText(query.value(0).toString());
    ui->LEName->setText(query.value(1).toString());
    ui->LEPrice->setText(QString::number(query.value(2).toDouble(), 'f', 2));
    ui->TEDescription->setText((query.value(3).toString()));
}

EditServiceWindow::~EditServiceWindow()
{
    delete ui;
}

void EditServiceWindow::on_PBCancel_clicked()
{
    this->close();
}


void EditServiceWindow::on_PBChange_clicked()
{
    return;
}

