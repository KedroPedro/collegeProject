#include "mainmenuwindow.h"
#include "ui_mainmenuwindow.h"
#include "picture.h"
#include "datatable.h"
#include "database.h"
#include "addpatientwindow.h"
#include "editpatientwindow.h"
#include "addservicewindow.h"
#include "editservicewindow.h"
#include "addappointmentwindow.h"
#include "editappointmentwindow.h"
#include "usertablewindow.h"
#include "passwordhasher.h"

#include <QSqlError>
#include <QTableView>
#include <QStandardItemModel>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QMessageBox>
#include <QSqlRecord>
#include <QTableView>
#include <QTimer>
#include <QDateTime>


mainmenuwindow::mainmenuwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mainmenuwindow)
    , clockTimer(new QTimer(this))
{

    ui->setupUi(this);

    Picture(ui->LCheckMark,"pictures/blackCheckMark.png");
    Picture(ui->LClock,"pictures/blackClock.png");
    Picture(ui->LLens,"picture/blackLens.png");

    currentUser = parent->findChild<QLineEdit*>("LEUserLogin")->text();
    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select userfullname,userpermission"
                  " from "+Database().getDbName()+".users where username = :username");
    query.bindValue(":username",currentUser);
    query.exec();
    query.next();

    QString permission = query.value(1).toString();
    QString picturePath = "";

    if(permission == "Пользователь"){
        picturePath = "pictures/user.png";
        ui->AdminPanel1->setEnabled(false);
        ui->AdminPanel1->setVisible(false);
        ui->AdminPanel2->setEnabled(false);
        ui->AdminPanel2->setVisible(false);
        ui->AdminPanel3->setEnabled(false);
        ui->AdminPanel3->setVisible(false);
    }else{
        picturePath = "pictures/administrator.png";
    }

    ui->LProfileUsername->setText(currentUser);
    ui->LProfileName->setText(query.value(0).toString());
    ui->LProfilePermission->setText(query.value(1).toString());
    Picture(ui->LProfilePicture,picturePath,200);
    QRegularExpression exp("[а-яА-Я]+");
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(exp,this);

    ui->LESecondName->setValidator(validator);
    Picture(ui->LMainMenuLogo,"pictures/blacklogo.png");
    ui->LMainMenuInfoFullName->setText(ui->LProfileName->text());
    ui->LMainMenuInfoAccount->setText(ui->LProfileUsername->text());
    ui->LMainMenuInfoPermission->setText(ui->LProfilePermission->text());

    connect(clockTimer,&QTimer::timeout,this,&mainmenuwindow::updateClock);
    clockTimer->start(1000);
    updateClock();
    ui->LMainMenuDayGreeting->setText(getTimeOfDayGreeting());
}

mainmenuwindow::~mainmenuwindow()
{
    clockTimer->stop();
    delete ui;

}

void mainmenuwindow::on_PBMainMenu_clicked()
{
    if(!clockTimer->isActive()){
        clockTimer->start(1000);
        updateClock();
        ui->LMainMenuDayGreeting->setText(getTimeOfDayGreeting());
    }

    ui->SWMenus->setCurrentWidget(ui->PMainMenu);
    ui->LMenuName->setText("Главное меню");

}


void mainmenuwindow::on_PBPacientList_clicked()
{
    clockTimer->stop();
    ui->SWMenus->setCurrentWidget(ui->PPacientList);
    Picture(ui->LLens,"pictures/blackLens.png");

    QStringList headers =  {"Номер","Имя","Фамилия","Отчество"};
    DataTable(ui->TVPatients,"id,patientname,patientsurname,patientpatronymic",Database().getDbName() +".patients",headers);

    ui->LMenuName->setText("Список пациентов");
}

void mainmenuwindow::on_TVPatients_doubleClicked(const QModelIndex &index)
{
    int patientId = getId(ui->TVPatients);
    if(patientId == -1){
        QMessageBox::warning(this,"Ошибка","Ни один пациент не был выделен");
        return;
    }
    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select * from "+Database().getDbName()+".patients where id = :id");
    query.bindValue(":id",patientId);
    query.exec();
    query.next();

    QSqlRecord record = query.record();
    ui->LFullName->setText(     record.value(2).toString() + " " +
                           record.value(1).toString() + " " +
                           record.value(3).toString());
    ui->LBirthYear->setText(    record.value(4).toString());
    ui->LAddress->setText(      record.value(5).toString());
    ui->LPhoneNumber->setText(  record.value(6).toString());

    QStringList headers = {"Номер","Дата визита"};
    DataTable(ui->TVPatientVisitDate,"id,DATE_FORMAT(" + Database().getDbName() + ".visits.visitdate, '%d.%m.%Y %H:%i') AS formdate",Database().getDbName()
            + ".visits where visitpatientid = "+QVariant(patientId).toString(),headers);
    ui->TVPatientVisitDate->show();

}

void mainmenuwindow::on_PBFindPatient_clicked()
{
    QString surname = ui->LESecondName->text();
    surname = surname.trimmed().split(" ")[0];

    if(surname == ""){
        on_PBPacientList_clicked();
        return;
    }

    QStringList headers = {"Номер","Имя","Фамилия","Отчество"};
    DataTable(ui->TVPatients,"id,patientname,patientsurname,patientpatronymic"
              ,Database().getDbName()+".patients where patientsurname = '"+surname+"'",headers);

}




void mainmenuwindow::on_PBServices_clicked()
{
    clockTimer->stop();
    QStringList headers = {"Номер","Название процедуры"};
    DataTable(ui->TVServices,"id,servicename",Database().getDbName()+".services",headers);
    ui->SWMenus->setCurrentWidget(ui->PServices);
    ui->LMenuName->setText("Список услуг");
    Picture(ui->LLensSearch,"pictures/blackLens.png");
}


void mainmenuwindow::on_PBAppointment_clicked()
{
    clockTimer->stop();
    ui->SWMenus->setCurrentWidget(ui->PAppointment);
    ui->LMenuName->setText("Записи на прием");
    on_CWAppointments_clicked(QDate::currentDate());

}


void mainmenuwindow::on_LESecondName_returnPressed()
{
    on_PBFindPatient_clicked();
}




void mainmenuwindow::on_PBPatietTableAdd_clicked()
{
    AddPatientWindow addPW(this);
    addPW.setModal(true);
    addPW.exec();
    on_PBPacientList_clicked();
}


void mainmenuwindow::on_PBPatientTableDelete_clicked()
{
    int result = QMessageBox::question(this,"Подтверждение","Вы уверены что хотите удалить данного пациента?",
                                       QMessageBox::No|QMessageBox::Yes,QMessageBox::No);
    if(result == QMessageBox::No){
        return;
    }

    int patientId = getId(ui->TVPatients);
    if(patientId == -1){
        QMessageBox::warning(this,"Ошибка","Ни один пациент не был выделен");
        return;
    }
    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("delete from "+Database().getDbName()+".patients where id = :id");
    query.bindValue(":id",patientId);
    query.exec();
    query.prepare("delete from "+Database().getDbName()+".appointments where appointmentpatientid = :id");
    query.bindValue(":id",patientId);
    query.exec();
    query.prepare("delete from "+Database().getDbName()+".visits where visitpatientid = :id");
    query.bindValue(":id",patientId);
    query.exec();
    query.prepare("delete from "+Database().getDbName()+".patients where id = :id");
    query.bindValue(":id",patientId);
    query.exec();
    on_PBPacientList_clicked();
    DataTable(ui->TVPatientVisitDate,"","",QStringList());

    ui->LFullName->setText("");
    ui->LBirthYear->setText("");
    ui->LAddress->setText("");
    ui->LPhoneNumber->setText("");

}


void mainmenuwindow::on_PBPatientTableEdit_clicked()
{
    int patientId = getId(ui->TVPatients);
    if(patientId == -1){
        QMessageBox::warning(this,"Ошибка","Ни один пациент не был выделен");
        return;
    }
    editpatientwindow editPW(patientId,this);
    editPW.setModal(true);
    editPW.exec();
    on_PBPacientList_clicked();
}

int mainmenuwindow::getId(QTableView *table){
    QModelIndex currentItem = table->currentIndex();
    if(!currentItem.isValid()){
        return -1;
    }
    int id = QVariant(currentItem.model()->data(currentItem.model()->index(currentItem.row(),0,QModelIndex()))).toInt();

    return id;
}




void mainmenuwindow::on_PBServiceTableAdd_clicked()
{
    AddServiceWindow window(this);
    window.setModal(true);
    window.exec();
    window.deleteLater();
    on_PBServices_clicked();
}


void mainmenuwindow::on_PBServiceTableDelete_clicked()
{
    int result = QMessageBox::question(this,"Подтверждение","Вы уверены что хотите удалить данную процедуру?",
                                       QMessageBox::No|QMessageBox::Yes,QMessageBox::No);
    if(result == QMessageBox::No){
        return;
    }

    int serviceId = getId(ui->TVServices);
    if(serviceId == -1){
        QMessageBox::warning(this,"Ошибка","Ни одна процедура не была выбрана.");
        return;
    }

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("delete from "+Database().getDbName()+".services where id = :id");
    query.bindValue(":id",serviceId);
    query.exec();

    query.prepare("delete from "+Database().getDbName()+".visitservices where id = :id");
    query.bindValue(":id",serviceId);
    query.exec();

    ui->LServiceDescription->setText("");
    ui->LServiceDuration->setText("");
    ui->LServiceName->setText("");
    ui->LServicePrice->setText("");
    on_PBServices_clicked();

    DataTable(ui->TVVisitServices,"","",{});
    ui->TVVisitServices->show();
}


void mainmenuwindow::on_PBServiceTableEdit_clicked()
{
    int patientId = getId(ui->TVPatients);
    if(patientId == -1){
        QMessageBox::warning(this,"Ошибка","Ни одна процедура не была выделена");
        return;
    }
    EditServiceWindow window(patientId,this);
    window.setModal(true);
    window.exec();
    window.deleteLater();
    on_PBServices_clicked();
}


void mainmenuwindow::on_TVServices_doubleClicked(const QModelIndex &index)
{
    int serviceId = getId(ui->TVServices);
    if(serviceId == -1){
        QMessageBox::warning(this,"Ошибка","Ни одна процедура не была выделена");
        return;
    }
    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select servicedescription,serviceduration,servicename,serviceprice from "
                  ""+Database().getDbName()+".services where id = :id");
    query.bindValue(":id",serviceId);
    query.exec();
    query.next();

    QSqlRecord record = query.record();
    ui->LServiceDescription->setText(record.value(0).toString());
    ui->LServiceDuration->setText(record.value(1).toString());
    ui->LServiceName->setText(record.value(2).toString());
    ui->LServicePrice->setText(record.value(3).toString());

    QString db = Database().getDbName();
    QStringList headers = {"Дата","Процедура"};

    DataTable(ui->TVVisitServices,"date_format(" + db + ".visits.visitdate, '%d.%m.%Y %H:%i') AS formdate"
            ", "+db+".services.servicename" ,
              db+".visitservices "
            "join "+db+".visits on "+db+".visitservices.visitservicesvisitid = "+db+".visits.id "
            "join "+db+".services on "+db+".visitservices.visitservicesserviceid = "+db+".services.id "
            "where "+db+".visitservices.visitservicesserviceid = "+QVariant(serviceId).toString(),headers);
    ui->TVVisitServices->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


}


void mainmenuwindow::on_PBServiceFind_clicked()
{
    QString serviceName = ui->LEServiceName->text().trimmed();


    if(serviceName == ""){
        on_PBServices_clicked();
        return;
    }

    QStringList headers = {"Номер","Название процедуры"};

    DataTable(ui->TVServices,"id,servicename",Database().getDbName()+".services where servicename = '"+serviceName+"'",headers);

}



void mainmenuwindow::on_CWAppointments_clicked(const QDate &date)
{
    QString db = Database().getDbName();
    QStringList headers = {"id","Дата и время","Статус","ФИО врача"};
    DataTable(
        ui->TVAppointments,
            db + ".visits.id, "
                 "date_format(" + db + ".visits.visitdate, '%d.%m.%Y %H:%i') as formdate, " +
            db + ".visits.visitstatus, " +
            db + ".users.userfullname",
        db + ".visits "
            "join " + db + ".users on " + db + ".users.id = " + db + ".visits.visituserid "
            "where " + db + ".visits.visitdate >= '" + date.toString(Qt::ISODate) + " 00:00:00' "
            "and " + db + ".visits.visitdate < '" + date.addDays(1).toString(Qt::ISODate) + " 00:00:00'",
        headers);
    ui->TVAppointments->hideColumn(0);
    ui->TVAppointments->setColumnWidth(1,150);
    ui->TVAppointments->setColumnWidth(2,110);
}


void mainmenuwindow::on_TVAppointments_doubleClicked(const QModelIndex &index)
{
    int appointId = getId(ui->TVAppointments);

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    QString db = Database().getDbName();

    query.prepare(
        "select "
        "date_format(" + db + ".visits.visitdate, '%d.%m.%Y %H:%i') as formdate, "
        + db +  ".patients.patientname, "
        + db +  ".patients.patientsurname, "
        + db +  ".patients.patientpatronymic, "
        + db +  ".users.userfullname, "
                "(select " + db + ".services.servicename from " + db + ".services "
                "join " + db + ".visitservices on " + db + ".services.id = " + db + ".visitservices.visitservicesserviceid "
                "where " + db + ".visitservices.visitservicesvisitid = " + db + ".visits.id limit 1) as servicename, "
        + db +  ".visits.visitreason "
                "from " + db + ".visits "
                "join " + db + ".patients on " + db + ".patients.id = " + db + ".visits.visitpatientid "
                "join " + db + ".users on " + db + ".users.id = " + db + ".visits.visituserid "
                "where " + db + ".visits.id = :id");
    query.bindValue(":id", appointId);
    query.exec();
    query.next();

    ui->LAppointmentsDate->setText(query.value(0).toString());
    ui->LAppointmentsPatient->setText(query.value(1).toString()+" "+ query.value(2).toString()+ " " + query.value(3).toString());
    ui->LAppointmentsMedic->setText(query.value(4).toString());
    ui->LAppointmentsService->setText(query.value(5).toString());
    ui->LAppointmentsDuration->setText(query.value(6).toString());

}


void mainmenuwindow::on_PBAppointmentAdd_clicked()
{
    AddAppointmentWindow window(this);
    window.setModal(true);
    window.exec();
    window.deleteLater();
    on_PBAppointment_clicked();
}


void mainmenuwindow::on_PBAppointmentEdit_clicked()
{
    int id = getId(ui->TVAppointments);
    if(id == -1){
        QMessageBox::warning(this,"Ошибка","Ни одна запись не была выделена");
        return;
    }

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select visitstatus from "+Database().getDbName()+".visits where id = :id");
    query.bindValue(":id",id);
    query.exec();
    query.next();


    if(query.value(0).toString() == "Завершено"){
        QMessageBox::warning(this,"Ошибка","Эта процедура уже была завершена, её изменение невозможно");
        return;
    }

    EditAppointmentWindow window(id,this);
    window.setModal(true);
    window.exec();
    window.deleteLater();
    on_CWAppointments_clicked(ui->CWAppointments->selectedDate());
}


void mainmenuwindow::on_PBAppointmentDelete_clicked()
{
    int id = getId(ui->TVAppointments);
    if(id == -1){
        QMessageBox::warning(this,"Ошибка","Ни одна запись не была выделена");
        return;
    }

    int result = QMessageBox::question(this,"Подтверждение","Вы уверены что хотите удалить данную процедуру?",
                                       QMessageBox::No|QMessageBox::Yes,QMessageBox::No);
    if(result == QMessageBox::No){
        return;
    }


    QString db = Database().getDbName();

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select visitstatus from "+db+".visits where id = :id");
    query.bindValue(":id",id);
    query.exec();
    query.next();

    if(query.value(0).toString() == "Завершено"){
        QMessageBox::warning(this,"Ошибка","Нельзя удалить запись, которая уже была завершена");
        return;
    }



    query.prepare("delete from " + db + ".visitservices where visitservicesvisitid = :id");
    query.bindValue(":id",id);
    query.exec();

    query.prepare("delete from " + db + ".visits where id = :id");
    query.bindValue(":id",id);
    query.exec();
    on_CWAppointments_clicked(ui->CWAppointments->selectedDate());

    ui->LAppointmentsDate->setText("");
    ui->LAppointmentsDuration->setText("");
    ui->LAppointmentsMedic->setText("");
    ui->LAppointmentsPatient->setText("");
    ui->LAppointmentsService->setText("");

}

void mainmenuwindow::updateClock(){
    QDateTime currentTime = QDateTime::currentDateTime();
    QString timeText = currentTime.toString("hh:mm:ss");
    QString dateText = currentTime.toString("dd.MM.yyyy");

    ui->LMainMenuDate->setText(dateText);
    ui->LMainMenuTime->setText(timeText);
}


QString mainmenuwindow::getTimeOfDayGreeting(){
    ui->LMainMenuSunrisePic->clear();
    ui->LMainMenuDayPic->clear();
    ui->LMainMenuSunsetPic->clear();
    ui->LMainMenuNightPic->clear();

    QTime currentTime = QTime::currentTime();
    if (currentTime >= QTime(5, 0) && currentTime < QTime(12, 0)) {
        Picture(ui->LMainMenuSunrisePic,"pictures/sunriseicon.png");
        return "Доброе утро";
    }
    else if (currentTime >= QTime(12, 0) && currentTime < QTime(18, 0)) {
        Picture(ui->LMainMenuDayPic,"pictures/dayicon.png");
        return "Добрый день";
    }
    else if (currentTime >= QTime(18, 0) && currentTime < QTime(23, 0)) {
        Picture(ui->LMainMenuSunsetPic,"pictures/sunseticon.png");
        return "Добрый вечер";
    }
    else {
        Picture(ui->LMainMenuNightPic,"pictures/nighticon.png");
        return "Доброй ночи";
    }
}

void mainmenuwindow::on_PBMainMenuUsers_clicked()
{
    UserTableWindow window(currentUser,this);
    window.setModal(true);
    window.exec();
    window.deleteLater();
}

