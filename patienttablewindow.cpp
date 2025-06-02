#include "patienttablewindow.h"
#include "ui_patienttablewindow.h"
#include "datatable.h"
#include "picture.h"
#include "database.h"

PatientTableWindow::PatientTableWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PatientTableWindow)
{
    ui->setupUi(this);
    Picture(ui->LLens,"pictures/blackLens.png");

    QStringList headers =  {"Номер","Имя","Фамилия","Отчество"};
    DataTable(ui->TVPatients,"id,patientname,patientsurname,patientpatronymic",Database().getDbName() +".patients",headers);
}

PatientTableWindow::~PatientTableWindow()
{
    delete ui;
}

void PatientTableWindow::on_TVPatients_doubleClicked(const QModelIndex &index)
{
    patientId = QVariant(index.model()->data(index.model()->index(index.row(),0,QModelIndex()))).toInt();
    patientFullName = QVariant(index.model()->data(index.model()->index(index.row(),1,QModelIndex()))).toString() + " "
                    + QVariant(index.model()->data(index.model()->index(index.row(),2,QModelIndex()))).toString() + " "
                    + QVariant(index.model()->data(index.model()->index(index.row(),3,QModelIndex()))).toString();
    this->close();
}

int PatientTableWindow::getPatientId(){
    return patientId;
}

QString PatientTableWindow::getPatientFullName(){
    return patientFullName;
}

void PatientTableWindow::on_PBFindPatient_clicked()
{
    QString surname = ui->LESecondName->text();
    surname = surname.trimmed().split(" ")[0];

    if(surname == ""){
        QStringList headers =  {"Номер","Имя","Фамилия","Отчество"};
        DataTable(ui->TVPatients,"id,patientname,patientsurname,patientpatronymic",Database().getDbName() +".patients",headers);
        return;
    }

    QStringList headers = {"Номер","Имя","Фамилия","Отчество"};
    DataTable(ui->TVPatients,"id,patientname,patientsurname,patientpatronymic"
              ,Database().getDbName()+".patients where patientsurname = '"+surname+"'",headers);
}

