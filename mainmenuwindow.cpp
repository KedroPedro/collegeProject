#include "mainmenuwindow.h"
#include "ui_mainmenuwindow.h"
#include "picture.h"
#include "datatable.h"
#include "database.h"
#include "addpatientwindow.h"
#include "editpatientwindow.h"
#include "addservicewindow.h"
#include "editservicewindow.h"

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
    Picture(&*ui->LProfilePicture,"pictures/derevya.jpg",200);
    Picture(&*ui->LCheckMark,"pictures/blackCheckMark.png");
    Picture(&*ui->LClock,"pictures/blackClock.png");
    Picture(&*ui->LLens,"picture/blackLens.png");

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
}


void mainmenuwindow::on_PBPacientList_clicked()
{
    ui->SWMenus->setCurrentWidget(ui->PPacientList);
    Picture(ui->LLens,"pictures/blackLens.png");

    QStringList headers =  {"Номер","Имя","Фамилия","Отчество"};
    DataTable(ui->TVPatients,"id,patientname,patientsurname,patientpatronymic",Database().getDbName() +".patients",headers);
    ui->TVPatients->show();
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
    DataTable(ui->TVPatientVisitDate,"id,visitdate",Database().getDbName()
                                                          + ".visits where visitpatientid = "+QVariant(patientId).toString(),headers);
    ui->TVPatientVisitDate->show();

}

void mainmenuwindow::on_PBFindPatient_clicked()
{
    QString surname = ui->LESecondName->text();
    surname = surname.trimmed().split(" ")[0];

    if(surname == ""){
        QMessageBox::warning(this,"Ошибка","Поле не должно быть путым");
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
}


void mainmenuwindow::on_PBAppointment_clicked()
{
    ui->SWMenus->setCurrentWidget(ui->PAppointment);

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


}


void mainmenuwindow::on_PBServiceTableEdit_clicked()
{
    EditServiceWindow window(getId(ui->TVServices));
    window.setModal(true);
    window.exec();
    window.deleteLater();
    on_PBServices_clicked();
}

