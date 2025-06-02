#include "addappointmentwindow.h"
#include "ui_addappointmentwindow.h"
#include "database.h"
#include "addpatientwindow.h"
#include "patienttablewindow.h"

#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>


AddAppointmentWindow::AddAppointmentWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddAppointmentWindow)
    , patientId(-1)
{
    ui->setupUi(this);

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select userfullname from "+ Database().getDbName() +".users");
    query.exec();
    query.next();

    int ind = 0;
    while (query.next()) {
        if (!query.value(0).isNull()) {
            ui->CBUsers->addItem(query.value(0).toString());
        }
    }
    ui->CBUsers->setCurrentIndex(-2);
    query.prepare("select servicename from "+Database().getDbName()+".services");
    query.exec();
    query.next();

    while (query.next()) {
        if (!query.value(0).isNull()) {
            ui->CBServices->addItem(query.value(0).toString());
        }
    }
    ui->CBServices->setCurrentIndex(-2);

    ui->DateTime->setDateTime(QDateTime().currentDateTime());

}

AddAppointmentWindow::~AddAppointmentWindow()
{
    delete ui;
}

void AddAppointmentWindow::on_PBCancel_clicked()
{
    this->close();
}


void AddAppointmentWindow::on_PBAdd_clicked()
{
    QString user = ui->CBUsers->currentText();
    QString service = ui->CBServices->currentText();
    QString date = ui->DateTime->dateTime().toString("yyyy-MM-dd HH:mm:ss");
    QString reason = ui->LEReason->text();
    QString status = ui->CBStatus->currentText();

    bool errorFlag = false;
    if(user == "") errorFlag = true;
    else if(service == "") errorFlag = true;
    else if(date == "") errorFlag = true;
    else if(reason == "") errorFlag = true;
    else if(status == "") errorFlag = true;

    if(errorFlag == true){
        QMessageBox::warning(this,"Ошибка","Все поля должны быть заполнены");
        return;
    }


}


void AddAppointmentWindow::on_PBAddNewPatient_clicked()
{
    AddPatientWindow window(this);
    window.setModal(true);
    window.exec();

    QString fullName = window.getPatientFullName();
    if(fullName == ""){
        return;
    }
    ui->LPatientFullName->setText(fullName);

    patientId = window.getPatientId();

    window.deleteLater();
}


void AddAppointmentWindow::on_PBSelectPatient_clicked()
{
    PatientTableWindow window(this);
    window.setModal(true);
    window.exec();

    QString fullName = window.getPatientFullName();
    if(fullName == ""){
        return;
    }

    ui->LPatientFullName->setText(fullName);
    patientId = window.getPatientId();
    window.deleteLater();
}

