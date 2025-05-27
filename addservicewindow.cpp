#include "addservicewindow.h"
#include "ui_addservicewindow.h"
#include "database.h"

#include <QSqlQuery>
#include <QSqlDatabase>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QMessageBox>

AddServiceWindow::AddServiceWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddServiceWindow)
{
    ui->setupUi(this);

    QRegularExpression expPrice("^\\d{1,7}(\\.\\d{0,2})?$");
    QRegularExpressionValidator *priceValidator = new QRegularExpressionValidator(expPrice,this);

    QRegularExpression expText("^[а-яА-Я0-9\\s]+$");
    QRegularExpressionValidator *textValidator = new QRegularExpressionValidator(expText,this);

    QRegularExpression expNum("^[0-9]+$");
    QRegularExpressionValidator *numbValidator = new QRegularExpressionValidator(expNum,this);

    ui->LEName->setValidator(textValidator);
    ui->LEDuration->setValidator(numbValidator);
    ui->LEPrice->setValidator(priceValidator);
}

AddServiceWindow::~AddServiceWindow()
{
    delete ui;
}

void AddServiceWindow::on_PBCancel_clicked()
{
    this->close();
}


void AddServiceWindow::on_PBAdd_clicked()
{
    QString name = ui->LEName->text();
    QString duration = ui->LEDuration->text();
    QString description = ui->TEDescription->toPlainText();
    QString price = ui->LEPrice->text();

    bool errFlag = false;
    if(name.isEmpty())                      errFlag = true;
    else if(duration.isEmpty())             errFlag = true;
    else if(description.isEmpty())          errFlag = true;
    else if(price.isEmpty())                errFlag = true;
    else if(price.length() > 10)            errFlag = true;
    else if(price[price.length()-1] == ".") errFlag = true;

    if(errFlag){
        QMessageBox::warning(this,"Ошибка","Все поля должны быть заполнены корректно.");
        return;
    }

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("insert into "+Database().getDbName()+".services "
                "(servicedescription,serviceduration,servicename,serviceprice)"
                "values (:desc,:dur,:name,:price)");

    query.bindValue(":desc",description);
    query.bindValue(":dur",duration);
    query.bindValue(":name",name);
    query.bindValue(":price",price.toDouble());

    query.exec();
    this->close();

}

