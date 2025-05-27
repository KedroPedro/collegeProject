#include "editservicewindow.h"
#include "ui_editservicewindow.h"
#include "database.h"

#include <QSqlQuery>
#include <QSqlDatabase>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QMessageBox>

EditServiceWindow::EditServiceWindow(int serviceId,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditServiceWindow),servId(serviceId)
{
    ui->setupUi(this);

    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select serviceduration,servicename,serviceprice,servicedescription from "+Database().getDbName()+".services where id = :id");
    query.bindValue(":id",serviceId);
    query.exec();
    query.next();

    ui->LEDuration->setText(query.value(0).toString());
    ui->LEName->setText(query.value(1).toString());
    ui->LEPrice->setText(QString::number(query.value(2).toDouble(), 'f', 2));
    ui->TEDescription->setText((query.value(3).toString()));


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

EditServiceWindow::~EditServiceWindow()
{
    delete ui;
}

void EditServiceWindow::on_PBCancel_clicked()
{
    this->close();
}


void EditServiceWindow::on_PBChange_clicked()
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
    query.prepare("update "+Database().getDbName()+".services "
                "set servicedescription = :desc, serviceduration = :dur"
                ", servicename = :name,serviceprice = :price"
                " where id = :id");

    query.bindValue(":desc",description);
    query.bindValue(":dur",duration);
    query.bindValue(":name",name);
    query.bindValue(":price",price.toDouble());
    query.bindValue(":id",servId);

    query.exec();
    this->close();
    return;
}

