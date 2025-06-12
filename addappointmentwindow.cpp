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


    int ind = 0;
    while (query.next()) {
        if (!query.value(0).isNull()) {
            ui->CBUsers->addItem(query.value(0).toString());
        }
    }
    ui->CBUsers->setCurrentIndex(-2);
    query.prepare("select servicename from "+Database().getDbName()+".services");
    query.exec();

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
    }else if(QDateTime::fromString(date, "yyyy-MM-dd HH:mm:ss") < QDateTime::currentDateTime()){
        QMessageBox::warning(this,"Ошибка","Введенная дата и время не должны быть раньше текущей");
        return;
    }

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));

    QString dbName = Database().getDbName();

    query.prepare("select serviceduration from " + dbName + ".services where servicename = :servicename");
    query.bindValue(":servicename", service);
    query.exec();
    query.next();

    int duration = query.value(0).toInt();
    QDateTime endTime = ui->DateTime->dateTime().addSecs(duration * 60);

    query.prepare(
        "select count(*) from " + dbName + ".visits "
        "join " + dbName + ".visitservices on " + dbName + ".visits.id = " + dbName + ".visitservices.visitservicesvisitid "
        "join " + dbName + ".services on " + dbName + ".visitservices.visitservicesserviceid = " + dbName + ".services.id "
        "where " + dbName + ".visits.visituserid = (select id from " + dbName + ".users where userfullname = :username) "
        "and ((" + dbName + ".visits.visitdate < :starttime and date_add("
        + dbName + ".visits.visitdate, interval " + dbName + ".services.serviceduration minute) > :starttime) or "
        "(" + dbName + ".visits.visitdate between :starttime and :endtime) or "
        "(date_add(" + dbName + ".visits.visitdate, interval "
        + dbName + ".services.serviceduration minute) between :starttime and :endtime))");

    query.bindValue(":username", user);
    query.bindValue(":starttime", date);
    query.bindValue(":endtime", endTime.toString("yyyy-MM-dd HH:mm:ss"));

    query.next();

    if(query.value(0).toInt() > 0) {
        QMessageBox::warning(this,"Ошибка","Врач уже занят в указанный период, измените время");
        return;
    }

    query.prepare("insert into "+Database().getDbName()+".visits "
                "(visitpatientid,visituserid,visitdate,visitreason,visitstatus) "
                "values (:vpid, (select id from "+Database().getDbName()+".users where userfullname = :un), :vd, :vr, :vs) ");
    query.bindValue(":vpid",patientId);
    query.bindValue(":un",user);
    query.bindValue(":vd",date);
    query.bindValue(":vr",reason);
    query.bindValue(":vs",status);
    query.exec();

    int visitId = query.lastInsertId().toInt();

    query.prepare("insert into "+Database().getDbName()+".visitservices "
                    "(visitservicesvisitid, visitservicesserviceid) "
                    "values (:vi,(select id from "+Database().getDbName()+".services where servicename = :sn))");
    query.bindValue(":vi",visitId);
    query.bindValue(":sn",service);
    query.exec();



    QMessageBox::information(this,"Успех","Запись была добавлена в таблицу");
    this->close();

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

