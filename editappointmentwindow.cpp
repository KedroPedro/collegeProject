#include "editappointmentwindow.h"
#include "ui_editappointmentwindow.h"
#include "database.h"
#include "patienttablewindow.h"
#include "addpatientwindow.h"

#include <QSqlQuery>
#include <QSqlDatabase>
#include <QString>
#include <QMessageBox>

EditAppointmentWindow::EditAppointmentWindow(int appointId,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditAppointmentWindow)
{
    ui->setupUi(this);

    currentAppointId = appointId;
    QString db = Database().getDbName();

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select userfullname from "+ db +".users");
    query.exec();



    while (query.next()) {
        if (!query.value(0).isNull()) {
            ui->CBUsers->addItem(query.value(0).toString());
        }
    }

    query.prepare("select servicename from "+ db +".services");
    query.exec();


    while (query.next()) {
        if (!query.value(0).isNull()) {
            ui->CBServices->addItem(query.value(0).toString());
        }
    }

    query.prepare("select patientid from "+db+".visits where id = :id");
    query.bindValue(":id",appointId);
    query.exec();
    query.next();
    currentPatientId = query.value(0).toInt();

    query.prepare(
        "select "
        "date_format(" + db + ".visits.visitdate, '%d.%m.%Y %H:%i') as formdate, "
        + db +  ".patients.patientname, "
        + db +  ".patients.patientsurname, "
        + db +  ".patients.patientpatronymic, "
        + db +  ".users.userfullname, "
        + db +  ".visits.visitreason, "
        + db +  ".visits.visitstatus, "
                "(select " + db + ".services.servicename from " + db + ".services "
                "join " + db + ".visitservices on " + db + ".services.id = " + db + ".visitservices.visitservicesserviceid "
                "where " + db + ".visitservices.visitservicesvisitid = " + db + ".visits.id limit 1) as servicename, "
                "(select " + db + ".services.serviceduration from " + db + ".services "
                "join " + db + ".visitservices on " + db + ".services.id = " + db + ".visitservices.visitservicesserviceid "
                "where " + db + ".visitservices.visitservicesvisitid = " + db + ".visits.id limit 1) as serviceduration "
                "from " + db + ".visits "
                "join " + db + ".patients on " + db + ".patients.id = " + db + ".visits.visitpatientid "
                "join " + db + ".users on " + db + ".users.id = " + db + ".visits.visituserid "
                "where " + db + ".visits.id = :id");

    query.bindValue(":id",appointId);
    query.exec();
    query.next();


    ui->DateTime->setDateTime(QDateTime::fromString(query.value(0).toString(), "dd.MM.yyyy HH:mm"));
    ui->LPatientFullName->setText(query.value(1).toString() + " "
                                  + query.value(2).toString() + " "
                                  + query.value(3).toString());
    ui->CBUsers->setCurrentText(query.value(4).toString());
    ui->CBServices->setCurrentText(query.value(7).toString());
    ui->LEReason->setText(query.value(5).toString());
    ui->CBStatus->setCurrentText(query.value(6).toString());
}

EditAppointmentWindow::~EditAppointmentWindow()
{
    delete ui;
}

void EditAppointmentWindow::on_PBSelectPatient_clicked()
{
    PatientTableWindow window(this);
    window.setModal(true);
    window.exec();

    QString fullName = window.getPatientFullName();
    if(fullName == ""){
        return;
    }

    ui->LPatientFullName->setText(fullName);

    currentPatientId = window.getPatientId();

    window.deleteLater();
}


void EditAppointmentWindow::on_PBAddNewPatient_clicked()
{
    AddPatientWindow window(this);
    window.setModal(true);
    window.exec();

    QString fullName = window.getPatientFullName();
    if(fullName == ""){
        return;
    }

    ui->LPatientFullName->setText(fullName);

    currentPatientId = window.getPatientId();
    window.deleteLater();
}


void EditAppointmentWindow::on_PBEdit_clicked()
{
    QString user = ui->CBUsers->currentText();
    QString service = ui->CBServices->currentText();
    QString date = ui->DateTime->dateTime().toString("yyyy-MM-dd HH:mm:ss");
    QString reason = ui->LEReason->text();
    QString status = ui->CBStatus->currentText();

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    QString db = Database().getDbName();
    query.prepare("select date_format(" + db + ".visits.visitdate, '%d.%m.%Y %H:%i') as formdate from "+db+".visits where id = :id");
    query.bindValue(":id",currentAppointId);
    query.exec();
    query.next();


    if(user.isEmpty() || service.isEmpty() || date.isEmpty() || reason.isEmpty() || status.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Все поля должны быть заполнены");
        return;
    }

    bool checkTime = QDateTime::fromString(date, "yyyy-MM-dd HH:mm") != QDateTime::fromString(query.value(0).toString(), "yyyy-MM-dd HH:mm");

    if(QDateTime::fromString(date, "yyyy-MM-dd HH:mm:ss") < QDateTime::currentDateTime()
        && checkTime) {
        QMessageBox::warning(this, "Ошибка", "Введенная дата и время не должны быть раньше текущей");
        return;
    }





    query.prepare("select serviceduration from " + db + ".services where servicename = :servicename");
    query.bindValue(":servicename", service);
    query.exec();
    query.next();

    int duration = query.value(0).toInt();
    QDateTime endTime = QDateTime::fromString(date, "yyyy-MM-dd HH:mm:ss").addSecs(duration * 60);


    query.prepare(
        "select visitdate from " + db + ".visits where id = :id");
    query.bindValue(":id", currentAppointId);
    if(query.exec() && query.next()) {
        QString oldDate = query.value(0).toString();

        if(date != oldDate) {
            query.prepare(
                "select count(*) from " + db + ".visits v "
                            "join " + db + ".visitservices vs on v.id = vs.visitservicesvisitid "
                            "join " + db + ".services s on vs.visitservicesserviceid = s.id "
                            "where v.visituserid = (select id from " + db + ".users where userfullname = :username) "
                            "and v.id != :id "
                            "and ( "
                            "   (v.visitdate < :starttime and date_add(v.visitdate, interval s.serviceduration minute) > :starttime) or "
                            "   (v.visitdate between :starttime and :endtime) or "
                            "   (date_add(v.visitdate, interval s.serviceduration MINUTE) between :starttime and :endtime) "
                            ")");
            query.bindValue(":username", user);
            query.bindValue(":id", currentAppointId);
            query.bindValue(":starttime", date);
            query.bindValue(":endtime", endTime.toString("yyyy-MM-dd HH:mm"));
            query.exec();
            query.next();
            if(query.value(0).toInt() > 0 && checkTime) {
                QMessageBox::warning(this, "Ошибка", "Врач уже занят в указанный период, измените время");
                return;
            }
        }
    }

    query.prepare(
        "update " + db + ".visits SET "
            "visituserid = (select id from " + db + ".users where userfullname = :un), "
            "visitdate = :vd, "
            "visitreason = :vr, "
            "visitstatus = :vs "
            "where id = :id");
    query.bindValue(":un", user);
    query.bindValue(":vd", date);
    query.bindValue(":vr", reason);
    query.bindValue(":vs", status);
    query.bindValue(":id", currentAppointId);

    query.exec();


    query.prepare(
        "update " + db + ".visitservices set "
            "visitservicesserviceid = (select id from " + db + ".services where servicename = :sn) "
            "where visitservicesvisitid = :vi");
    query.bindValue(":sn", service);
    query.bindValue(":vi", currentAppointId);
    query.exec();
    QMessageBox::information(this, "Успех", "Запись успешно обновлена");

    if(status == "Завершено"){
        query.prepare(
            "insert into " + db + ".payments "
                                  "(paymentvisitid, paymentamount, paymentdate) "
                                  "values "
                                  "(:vi, "
                                  "(select serviceprice from " + db + ".services "
                   "where id = (select visitservicesserviceid from " + db + ".visitservices "
                   "where visitservicesvisitid = :vi)), "
                   ":pd)");
        query.bindValue(":vi",currentAppointId);
        query.bindValue(":pd",QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss"));

        if(!query.exec()){
            QMessageBox::warning(this,"","hueta ebanaya");
        }
    }

    this->close();
}


void EditAppointmentWindow::on_PBCancel_clicked()
{
    this->close();
}

