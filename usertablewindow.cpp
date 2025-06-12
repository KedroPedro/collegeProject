#include "usertablewindow.h"
#include "ui_usertablewindow.h"
#include "database.h"
#include "datatable.h"
#include "droppasswordwindow.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

UserTableWindow::UserTableWindow(QString currentUser,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserTableWindow)
    , user(currentUser)
{
    ui->setupUi(this);
    UserTableWindow::on_PBFindUser_clicked();


    QRegularExpression exp("[a-zA-Z0-9]+");
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(exp,this);

    ui->LEUserLogin->setValidator(validator);
}

UserTableWindow::~UserTableWindow()
{
    delete ui;
}

void UserTableWindow::on_TVUsers_doubleClicked(const QModelIndex &index)
{
    if(!index.isValid()){
        return;
    }

    QModelIndex idIndex = index.sibling(index.row(), 0);
    QString login = idIndex.data().toString();

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select id,username,userfullname,userpermission from "+Database().getDbName()+".users where username = :login");
    query.bindValue(":login",login);
    query.exec();
    query.next();

    ui->LLogin->setText(query.value(1).toString());
    ui->LId->setText(query.value(0).toString());
    ui->LPermission->setText(query.value(3).toString());
    ui->LFullName->setText(query.value(2).toString());
}


void UserTableWindow::on_PBFindUser_clicked()
{
    QString login = ui->LEUserLogin->text();
    QStringList headers = {"","Логин","ФИО"};
    if(login == ""){
        DataTable(ui->TVUsers,"id ,username, userfullname",Database().getDbName()+".users",headers);
    }else{
        DataTable(ui->TVUsers,"username, userfullname",Database().getDbName()+".users where username = '"+login+"'",headers);
    }

    ui->TVUsers->hideColumn(0);
    ui->TVUsers->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}


void UserTableWindow::on_PBDropPassword_clicked()
{
    int result = QMessageBox::question(this,"Подтверждение","Вы уверены что хотите сбросить пароль?",
                                       QMessageBox::No|QMessageBox::Yes,QMessageBox::No);
    if(result == QMessageBox::No){
        return;
    }
    QModelIndex currentItem = ui->TVUsers->currentIndex();
    if(!currentItem.isValid()){
        QMessageBox::warning(this,"Ошибка","Ни один пользователь не был выделен");
        return;
    }
    QString login = QVariant(currentItem.model()->data(currentItem.model()->index(currentItem.row(),0,QModelIndex()))).toString();

    DropPasswordWindow window(login,this);
    window.setModal(true);
    window.exec();
    window.deleteLater();
}


void UserTableWindow::on_PBUserTableDelete_clicked()
{

    int result = QMessageBox::question(this,"Подтверждение","Вы уверены что хотите удалить этот аккаунт?",
                                       QMessageBox::No|QMessageBox::Yes,QMessageBox::No);
    if(result == QMessageBox::No){
        return;
    }

    QModelIndex currentItem = ui->TVUsers->currentIndex();
    if(!currentItem.isValid()){
        QMessageBox::warning(this,"Ошибка","Ни один пользователь не был выделен");
        return;
    }

    int id = QVariant(currentItem.model()->data(currentItem.model()->index(currentItem.row(),0,QModelIndex()))).toInt();
    QString login = QVariant(currentItem.model()->data(currentItem.model()->index(currentItem.row(),1,QModelIndex()))).toString();

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select count(*) from "+Database().getDbName()+".visits where visituserid = :id and visitstatus != :st1 and visitstatus != :st2");
    query.bindValue(":id",id);
    query.bindValue(":st1","Завершено");
    query.bindValue(":st2","Отменено");
    query.exec();
    query.next();
    if(query.value(0).toInt() > 0){
        QMessageBox::warning(this,"Ошибка","У данного пользователя есть незавершенные дела");
        return;
    }
    query.prepare("set foreign_key_checks = :n1");
    query.bindValue(":n1",0);
    query.exec();
    query.prepare("delete from "+Database().getDbName()+".users where id = :id");
    query.bindValue(":id",id);
    query.exec();
    query.prepare("set foreign_key_checks = :n2");
    query.bindValue(":n2",1);
    query.exec();
    UserTableWindow::on_PBFindUser_clicked();



    if(login == user){
        QCoreApplication::exit();
    }

}

