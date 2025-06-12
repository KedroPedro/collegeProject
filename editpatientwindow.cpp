    #include "editpatientwindow.h"
#include "ui_editpatientwindow.h"
#include "mainmenuwindow.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <database.h>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QString>
#include <QDate>


editpatientwindow::editpatientwindow(int patientId,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::editpatientwindow), patId(patientId)
{
    ui->setupUi(this);



    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select * from "+Database().getDbName()+".patients where id = :id");
    query.bindValue(":id",patientId);
    query.exec();
    query.next();

    ui->LEFirstname->setText(query.value(1).toString());
    ui->LESurname->setText(query.value(2).toString());
    ui->LEPatronymic->setText(query.value(3).toString());
    ui->LEDateOfBirth->setText(query.value(4).toString());
    ui->LEAddress->setText(query.value(5).toString());
    ui->LEPhoneNumber->setText(query.value(6).toString());

    QRegularExpression exp("[а-яА-Я]+");
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(exp,this);

    ui->LEFirstname->setValidator(validator);
    ui->LESurname->setValidator(validator);
    ui->LEPatronymic->setValidator(validator);
}

editpatientwindow::~editpatientwindow()
{
    delete ui;
}

void editpatientwindow::on_pushButton_clicked()
{
    QString name        =   ui->LEFirstname->text(),
            surname     =   ui->LESurname->text(),
            patronymic  =   ui->LEPatronymic->text(),
            address     =   ui->LEAddress->text(),
            dateofbirth =   ui->LEDateOfBirth->text(),
            phonenumber =   ui->LEPhoneNumber->text();


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
    query.prepare("update "+Database().getDbName()+".patients "+
                "set patientname = :name, patientsurname = :surname, patientpatronymic = :patronymic, "+
                "patientdateofbirth = :dateofbirth, patientaddress = :address, patientphone = :phone "+
                "where id = :id");
    query.bindValue(":name",name);
    query.bindValue(":surname",surname);
    query.bindValue(":patronymic",patronymic);
    query.bindValue(":dateofbirth",dateofbirth);
    query.bindValue(":address",address);
    query.bindValue(":phone",phonenumber);
    query.bindValue(":id",patId);
    bool success = query.exec();
    if(!success){
        QMessageBox::information(this,"asdf","asdfd");
    }
    query.isValid();

    this->close();
    this->deleteLater();
}


void editpatientwindow::on_pushButton_2_clicked()
{
    this->close();
    this->deleteLater();

}

