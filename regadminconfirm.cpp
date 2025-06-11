#include "regadminconfirm.h"
#include "ui_regadminconfirm.h"
#include "passwordhasher.h"

#include <QString>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QMessageBox>

RegAdminConfirm::RegAdminConfirm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegAdminConfirm)
    , confirmed(false)
{
    ui->setupUi(this);

    QRegularExpression exp("[a-zA-Z0-9]+");
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(exp,this);

    ui->LEAdminLogin->setValidator(validator);
    ui->LEAdminPassword->setValidator(validator);

}

RegAdminConfirm::~RegAdminConfirm()
{
    delete ui;
}

void RegAdminConfirm::on_PBConfirm_clicked()
{
    QString password = ui->LEAdminPassword->text().trimmed();
    QString login = ui->LEAdminLogin->text().trimmed();
    if( login == "" || password == ""){
        QMessageBox::warning(this,"Ошибка","Все поля должны быть заполнены");
        return;
    }

    if(!PasswordHasher::authorizeUser(login,password) && PasswordHasher::getPermissionType(login) != "Администратор"){
        QMessageBox::warning(this,"Ошибка","Неверный логин или пароль. Пожалуйста, проверьте данные и попробуйте снова.");
        return;
    }

    confirmed = true;
    this->close();
}

bool RegAdminConfirm::getStatus(){
    return confirmed;
}
void RegAdminConfirm::on_PBCancel_clicked()
{
    this->close();
}

