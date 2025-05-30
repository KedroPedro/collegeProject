#include "database.h"
#include <QSettings>
#include <QDir>
#include <QCoreApplication>



Database::Database() : _dbConf(new QString[4])
{
    setTitle();
    getConf();
}

void Database::getConf(){
    QSettings settings(QDir(QCoreApplication::applicationDirPath()).filePath("config.ini"),QSettings::IniFormat);
    settings.beginGroup("Database");
    _dbConf[0] = settings.value("dbname").toString();
    _dbConf[1] = settings.value("host").toString();
    _dbConf[2] = settings.value("username").toString();
    _dbConf[3] = settings.value("password").toString();
    settings.endGroup();

}

void Database::setTitle(){
    QSettings settings(QDir(QCoreApplication::applicationDirPath()).filePath("config.ini"),QSettings::IniFormat);
    settings.beginGroup("Database");
    _dbTitle = settings.value("title").toString();
}

void Database::setConfig(QSqlDatabase& db){
    db = QSqlDatabase::addDatabase("QMYSQL",_dbTitle);
    db.setDatabaseName(_dbConf[0]);
    db.setHostName(_dbConf[1]);
    db.setUserName(_dbConf[2]);
    db.setPassword(_dbConf[3]);
}

QString Database::getTitle(){
    return _dbTitle;
}

QString Database::getDbName(){
    return _dbConf[0];
}

Database::~Database(){
    _dbTitle = nullptr;
    _dbConf = nullptr;
}












