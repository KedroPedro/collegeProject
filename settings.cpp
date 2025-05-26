#include "settings.h"
#include "ui_settings.h"

#include <QString>
#include <QSettings>
#include <QCoreApplication>
#include <QDir>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

Settings::Settings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Settings)
{
    ui->setupUi(this);
    QSettings settings(QDir(QCoreApplication::applicationDirPath()).filePath("config.ini"),QSettings::IniFormat);
    settings.beginGroup("Database");
    ui->LEDBHost->setText(settings.value("host").toString());
    ui->LEDBLogin->setText(settings.value("username").toString());
    ui->LEDBPassword->setText(settings.value("password").toString());
    ui->LEDBName->setText(settings.value("dbname").toString());
    ui->LEDBTitle->setText(settings.value("title").toString());

    QRegularExpression exp("[a-zA-Z0-9]+");
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(exp,this);

    ui->LEDBHost->setValidator(validator);
    ui->LEDBLogin->setValidator(validator);
    ui->LEDBPassword->setValidator(validator);
    ui->LEDBName->setValidator(validator);
    ui->LEDBTitle->setValidator(validator);
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_PBChange_clicked()
{
    QSettings settings(QDir(QCoreApplication::applicationDirPath()).filePath("config.ini"),QSettings::IniFormat);

    if(ui->LEDBHost->text().trimmed() == ""||ui->LEDBLogin->text().trimmed() == "" ||ui->LEDBPassword->text().trimmed() == ""
        ||ui->LEDBName->text().trimmed() == "" ||ui->LEDBTitle->text().trimmed() == "")
    {
        QMessageBox::warning(this,"Ошибка","Все поля должны быть заполнены");
        return;
    }

    settings.beginGroup("Database");
    settings.setValue("host",ui->LEDBHost->text());
    settings.setValue("username",ui->LEDBLogin->text());
    settings.setValue("password",ui->LEDBPassword->text());
    settings.setValue("dbname",ui->LEDBName->text());
    settings.setValue("title",ui->LEDBTitle->text());
    QMessageBox::information(this,"Успех","Для вступления изменений в силу требуется перезапустить приложение");
    this->close();
}


void Settings::on_PBCancel_clicked()
{
    this->close();
}

