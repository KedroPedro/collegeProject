#include "addpatientwindow.h"
#include "ui_addpatientwindow.h"
#include <QMessageBox>
#include "database.h"

#include <QSqlQuery>
#include <QSqlDatabase>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QDate>

AddPatientWindow::AddPatientWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddPatientWindow)
    , patientFullName("")
{
    ui->setupUi(this);
    QRegularExpression exp("[а-яА-Я]+");

    QRegularExpressionValidator *validator = new QRegularExpressionValidator(exp,this);
    ui->LEFirstname->setValidator(validator);
    ui->LESurname->setValidator(validator);
    ui->LEPatronymic->setValidator(validator);

}

AddPatientWindow::~AddPatientWindow()
{
    delete ui;
}

void AddPatientWindow::on_pushButton_2_clicked()
{
    this->close();
    this->deleteLater();
}


void AddPatientWindow::on_pushButton_clicked()
{
    QString name        =   ui->LEFirstname->text(),
            surname     =   ui->LESurname->text(),
            patronymic  =   ui->LEPatronymic->text(),
            address     =   ui->LEAddress->text(),
            dateofbirth =   ui->LEDateOfBirth->text(),
            phonenumber =   ui->LEPhoneNumber->text();

    patientFullName = surname + " " + name + " " + patronymic;

    QRegularExpression dateRegex(R"(^(\d{4})-(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01])$)");
    QRegularExpressionMatch match = dateRegex.match(dateofbirth);
    bool isDateValid = match.hasMatch();

    bool isYearValid = false;
    if (isDateValid) {
        int year = match.captured(1).toInt();
        int currentYear = QDate::currentDate().year();
        isYearValid = (year >= 1900 && year <= currentYear && QDate::fromString(dateofbirth,"yyyy-MM-dd").isValid());
    }

    bool errFlag = false;
    if(name.isEmpty())                     errFlag = true;
    else if(surname.isEmpty())             errFlag = true;
    else if(patronymic.isEmpty())          errFlag = true;
    else if(address.isEmpty())             errFlag = true;
    else if(!isDateValid || !isYearValid)  errFlag = true;
    else if(phonenumber.length() != 19)    errFlag = true;

    if(errFlag){
        QString errorMessage = "Все поля должны быть заполнены корректно.\n";
        if (!isDateValid) {
            errorMessage += "Дата рождения должна быть в формате ГГГГ-ММ-ДД (например, 1990-05-15).\n";
        } else if (!isYearValid) {
            errorMessage += "Год рождения должен быть от 1900 до " + QString::number(QDate::currentDate().year()) + ".";
        }
        QMessageBox::warning(this, "Ошибка", errorMessage);
        return;
    }



    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));

    query.prepare("insert into "+Database().getDbName()+".patients "+
                    "(patientname,patientsurname,patientpatronymic,patientdateofbirth,patientaddress,patientphone) "+
                    "values (:name, :surname, :patronymic, :dateofbirth, :address, :phone)");

    query.bindValue(":name",        name);
    query.bindValue(":surname",     surname);
    query.bindValue(":patronymic",   patronymic);
    query.bindValue(":dateofbirth", dateofbirth);
    query.bindValue(":address",      address);
    query.bindValue(":phone",        phonenumber);

    query.exec();

    this->close();
    this->deleteLater();
}

QString AddPatientWindow::getPatientFullName(){
    return patientFullName;
}

int AddPatientWindow::getPatientId(){
    return patientId;
}
