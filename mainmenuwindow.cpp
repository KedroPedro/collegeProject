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


mainmenuwindow::mainmenuwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mainmenuwindow)
{

    ui->setupUi(this);

    Picture(ui->LCheckMark,"pictures/blackCheckMark.png");
    Picture(ui->LClock,"pictures/blackClock.png");
    Picture(ui->LLens,"picture/blackLens.png");

    QString userLogin = parent->findChild<QLineEdit*>("LEUserLogin")->text();
    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select userfullname,userpermission"
                  " from "+Database().getDbName()+".users where username = :username");
    query.bindValue(":username",userLogin);
    query.exec();
    query.next();

    QString permission = query.value(1).toString();
    QString picturePath = "";

    if(permission == "Пользователь"){
        picturePath = "pictures/user.png";
    }else{
        picturePath = "pictures/administrator.png";
    }

    ui->LProfileUsername->setText(userLogin);
    ui->LProfileName->setText(query.value(0).toString());
    ui->LProfilePermission->setText(query.value(1).toString());
    Picture(ui->LProfilePicture,picturePath,200);
    QRegularExpression exp("[а-яА-Я]+");
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(exp,this);

    ui->LESecondName->setValidator(validator);
}

mainmenuwindow::~mainmenuwindow()
{
    delete ui;

}

void mainmenuwindow::on_PBMainMenu_clicked()
{
    ui->SWMenus->setCurrentWidget(ui->PMainMenu);
    ui->LMenuName->setText("Главное меню");
}


void mainmenuwindow::on_PBPacientList_clicked()
{
    ui->SWMenus->setCurrentWidget(ui->PPacientList);
    Picture(ui->LLens,"pictures/blackLens.png");

    QStringList headers =  {"Номер","Имя","Фамилия","Отчество"};
    DataTable(ui->TVPatients,"id,patientname,patientsurname,patientpatronymic",Database().getDbName() +".patients",headers);
    ui->TVPatients->show();
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
    ui->TVPatients->show();
}




void mainmenuwindow::on_PBServices_clicked()
{
    QStringList headers = {"Номер","Название процедуры"};
    DataTable(ui->TVServices,"id,servicename",Database().getDbName()+".services",headers);
    ui->SWMenus->setCurrentWidget(ui->PServices);
    ui->LMenuName->setText("Список услуг");
    Picture(ui->LLensSearch,"pictures/blackLens.png");
}


void mainmenuwindow::on_PBAppointment_clicked()
{
    ui->SWMenus->setCurrentWidget(ui->PAppointment);
    ui->LMenuName->setText("Записи на прием");
    on_CWAppointments_clicked(QDate::currentDate());
    ui->TVAppointments->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}


void mainmenuwindow::on_LESecondName_returnPressed()
{
    on_PBFindPatient_clicked();
}




void mainmenuwindow::on_PBPatietTableAdd_clicked()
{
    AddPatientWindow addPW;
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
    editpatientwindow editPW(patientId);
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
    AddServiceWindow window;
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
    EditServiceWindow window(getId(ui->TVServices));
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
    QStringList headers = {"id","Дата и время","ФИО врача"};
    DataTable(
        ui->TVAppointments,
        db + ".visits.id, "
            "date_format(" + db + ".visits.visitdate, '%d.%m.%Y %H:%i') as formdate, " +
            db + ".users.userfullname",
        db + ".visits "
            "JOIN " + db + ".users ON " + db + ".users.id = " + db + ".visits.visituserid "
            "WHERE " + db + ".visits.visitdate >= '" + date.toString(Qt::ISODate) + " 00:00:00' "
            "AND " + db + ".visits.visitdate < '" + date.addDays(1).toString(Qt::ISODate) + " 00:00:00'",

        headers
        );
    ui->TVAppointments->hideColumn(0);

}


void mainmenuwindow::on_TVAppointments_doubleClicked(const QModelIndex &index)
{
    int appointId = getId(ui->TVAppointments);

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    QString db = Database().getDbName();

    query.prepare(    "select "
                      "date_format(" + db + ".visits.visitdate, '%d.%m.%Y %H:%i') as formdate, " +
                      db + ".patients.patientname, " +
                      db + ".patients.patientsurname, " +
                      db + ".patients.patientpatronymic, " +
                      db + ".users.userfullname, " +
                      db + ".services.servicename, " +
                      db + ".services.serviceduration " +
                      "from " + db + ".visits " +
                      "join " + db + ".patients on " + db + ".patients.id = " + db + ".visits.visitpatientid " +
                      "join " + db + ".users on " + db + ".users.id = " + db + ".visits.visituserid " +
                      "join " + db + ".services on " + db + ".services.id = " +
                      "(select visitservicesserviceid from " + db + ".visitservices " +
                      "where visitservicesvisitid = " + db + ".visits.id limit 1) " +
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
    AddAppointmentWindow window;
    window.setModal(true);
    window.exec();
    window.deleteLater();
}

