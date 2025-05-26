#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>

class Database
{
public:
    Database();
    ~Database();
    void setConfig(QSqlDatabase &db);
    QString getTitle();
    QString getDbName();
private:

    QString* _dbConf;
    QString _dbTitle;

    void setTitle();
    void getConf();
};

#endif // DATABASE_H
