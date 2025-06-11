#include "regfullinfo.h"
#include "ui_regfullinfo.h"
#include "database.h"
#include "passwordhasher.h"
#include "regadminconfirm.h"

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>

RegFullInfo::RegFullInfo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegFullInfo)
    , registrationStatus(false)
{
    ui->setupUi(this);
    QRegularExpression exp("[а-яА-Я]+");
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(exp,this);

    ui->LEName->setValidator(validator);
    ui->LEPatronymic->setValidator(validator);
    ui->LESurname->setValidator(validator);
}



RegFullInfo::~RegFullInfo()
{
    delete ui;
}


void RegFullInfo::AddUser(){
    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("insert into "+Database().getDbName()+".users"
                "(username,userpassword,userpermission,userfullname,usersalt)"
                "values (:username,:userpassword,:userpermission,:userfullname,:usersalt)");

    QString salt = PasswordHasher::generateSalt();
    QString hashedPassword = PasswordHasher::hashPassword(parent()->findChild<QLineEdit*>("LEPasswordReg")->text(),salt);

    query.bindValue(":username",parent()->findChild<QLineEdit*>("LEUserReg")->text());
    query.bindValue(":userpassword",hashedPassword);
    query.bindValue(":userpermission",ui->CBPermissions->currentText());
    query.bindValue(":userfullname",ui->LESurname->text() + " " + ui->LEName->text() + " " + ui->LEPatronymic->text());
    query.bindValue(":usersalt",salt);
    query.exec();
}


void RegFullInfo::NormalUserRegistration(){
    AddUser();
}

bool RegFullInfo::AdminRegistration(){
    RegAdminConfirm window;

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select * from "+Database().getDbName()+".users where userpermission = :up");
    query.bindValue(":up","Администратор");
    query.exec();

    if(!query.next()){
        AddUser();
        return true;
    }


    window.setModal(true);
    window.exec();

    if(!window.getStatus()){
        QMessageBox::warning(this,"Ошибка","Не удалось подтвердить регистрацию");
        return false;
    }
    AddUser();
    window.deleteLater();
    return true;
}

void RegFullInfo::on_PBRegFullInfoReg_clicked()
{
    if(ui->LEName->text().trimmed() == "" || ui->LEPatronymic->text().trimmed() == "" || ui->LESurname->text().trimmed() == ""){
        QMessageBox::warning(this,"Ошибка","Все поля должны быть заполнены");
        return;
    }

    switch(ui->CBPermissions->currentIndex()){
    case 0:
        NormalUserRegistration();
        break;
    case 1:
        if(!AdminRegistration()){
            return;
        }
        break;
    default:
        QMessageBox::warning(this,"Ошибка","Выберите уровень доступа");
        return;
    }
    registrationStatus = true;
    this->close();

    return;
}


void RegFullInfo::on_PBCancel_clicked()
{
    this->close();

    return;
}

bool RegFullInfo::GetRegistrationStatus(){
    return registrationStatus;
}

