#include "droppasswordwindow.h"
#include "ui_droppasswordwindow.h"
#include "passwordhasher.h"
#include "database.h"

#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>

DropPasswordWindow::DropPasswordWindow(QString login,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DropPasswordWindow)
    , currentLogin(login)
{
    ui->setupUi(this);
    QRegularExpression exp("[a-zA-Z0-9]+");
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(exp,this);
    ui->LEPassword->setValidator(validator);
    ui->LEPasswordAgain->setValidator(validator);
}

DropPasswordWindow::~DropPasswordWindow()
{
    delete ui;
}

void DropPasswordWindow::on_PBCancel_clicked()
{
    this->close();
}


void DropPasswordWindow::on_PBConfirm_clicked()
{
    if(ui->LEPassword->text().isEmpty() || ui->LEPasswordAgain->text().isEmpty()){
        QMessageBox::warning(this,"Ошибка","Поля не должны быть пустыми");
        return;
    }else if(ui->LEPassword->text() != ui->LEPasswordAgain->text()){
        ui->LEPassword->setText("");
        ui->LEPasswordAgain->setText("");
        QMessageBox::warning(this,"Ошибка", "Пароли не совпадают");
        return;
    }else if(ui->LEPassword->text().length() < 8 ||ui->LEPassword->text().length() > 40){
        ui->LEPassword->setText("");
        ui->LEPasswordAgain->setText("");
        QMessageBox::warning(this,"Ошибка","Длина пароля должна быть не менее 8 символов");
        return;
    }

    QString salt = PasswordHasher::generateSalt();
    QString hashedPassword = PasswordHasher::hashPassword(ui->LEPassword->text(),salt);

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("update "+ Database().getDbName() + ".users "
                    "set userpassword = :password, usersalt = :salt "
                    "where username = :name");
    query.bindValue(":name",currentLogin);
    query.bindValue(":password",hashedPassword);
    query.bindValue(":salt",salt);
    query.exec();
    this->close();
}

