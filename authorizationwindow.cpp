#include "authorizationwindow.h"
#include "ui_authorizationwindow.h"
#include "mainmenuwindow.h"
#include "database.h"
#include "regfullinfo.h"
#include "passwordhasher.h"
#include "settings.h"
#include <QDebug>
#include <QSqlQuery>
#include <QVariant>
#include <QMessageBox>
#include <QLabel>
#include <QtWidgets>
#include <QValidator>
#include <QRegularExpression>
#include <QRegularExpressionValidator>




AuthorizationWindow::AuthorizationWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AuthorizationWindow)
{
    ui->setupUi(this);

    QRegularExpression exp("[a-zA-Z0-9]+");
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(exp,this);

    ui->LEUserReg->setValidator(validator);
    ui->LEPasswordReg->setValidator(validator);
    ui->LEPasswordRegAgain->setValidator(validator);

    ui->LEPasswordLogin->setValidator(validator);
    ui->LEUserLogin->setValidator(validator);
}

AuthorizationWindow::~AuthorizationWindow()
{
    delete ui;
}

bool AuthorizationWindow::check_connection(){

    if(QSqlDatabase::database(Database().getTitle()).isOpen() == false){
        QMessageBox::critical(this,"Ошибка","Ошибка подключения базы данных");
        return false;
    }
    return true;

}



void AuthorizationWindow::on_PBEnterLogin_clicked()
{

    if(!AuthorizationWindow::check_connection()){
        qApp->exit(1);
    }
    QString login = ui->LEUserLogin->text().trimmed();
    QString password = ui->LEPasswordLogin->text().trimmed();

    if(!PasswordHasher::authorizeUser(login,password)){
        QMessageBox::warning(this,"Ошибка","Неверный логин или пароль. Пожалуйста, проверьте данные и попробуйте снова");
        ui->LEPasswordLogin->setText("");
        return;
    }

    this->close();
    mainmenuwindow mmwindow(this);
    mmwindow.setModal(true);
    mmwindow.setWindowState(Qt::WindowMaximized);
    mmwindow.exec();


    qApp->quit();

}


void AuthorizationWindow::on_PBRegisterReg_clicked()
{
    bool opened = AuthorizationWindow::check_connection();

    if(!opened){
        qApp->exit(1);
    }else if(ui->LEPasswordReg->text().isEmpty() || ui->LEUserReg->text().isEmpty() || ui->LEPasswordRegAgain->text().isEmpty()){
        QMessageBox::warning(this,"Ошибка","Поля не должны быть пустыми");
        return;
    }else if(ui->LEPasswordReg->text() != ui->LEPasswordRegAgain->text()){
        ui->LEPasswordReg->setText("");
        ui->LEPasswordRegAgain->setText("");
        QMessageBox::warning(this,"Ошибка", "Пароли не совпадают");
        return;
    }else if(ui->LEPasswordReg->text().length() < 8 ||ui->LEPasswordReg->text().length() > 40){
        ui->LEPasswordReg->setText("");
        ui->LEPasswordRegAgain->setText("");
        QMessageBox::warning(this,"Ошибка","Длина пароля должна быть не менее 8 символов");
        return;
    }

    if(ui->LEUserReg->text().length() < 4 ||ui->LEUserReg->text().length() > 40){
        ui->LEUserReg->setText("");
        QMessageBox::warning(this,"Ошибка","Длина логина должна быть не менее 4 символов");
        return;
    }

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select * from "+Database().getDbName()+".users where username = :login");
    query.bindValue(":login",ui->LEUserReg->text());
    query.exec();

    if(query.next()){
        QMessageBox::warning(this,"Ошибка","Аккаунт с таким именем уже зарегистрирован");
        return;
    }

    RegFullInfo window(this);
    window.setModal(true);
    window.exec();

    if(window.GetRegistrationStatus() == false){
        return;
    }
    window.deleteLater();
    QMessageBox::information(this,"Успех","Ваш аккаунт успешно зарегистрирован");

    return;
}


void AuthorizationWindow::on_action_triggered()
{
    Settings window;
    window.setModal(true);
    window.exec();
    window.deleteLater();
}

