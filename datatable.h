#ifndef DATATABLE_H
#define DATATABLE_H

#include <QTableView>
#include <QStandardItemModel>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>

class DataTable
{
public:
    DataTable(QTableView* table, QString selected, QString tableName,const QStringList& headers);
    ~DataTable();
private:
    QStringList _headers;
    QString _selected;
    QString _tableName;

    QSqlQuery getQuery();
    void setHeaders(QStandardItemModel *&model);
    void fillTable(QStandardItemModel *&model, QSqlQuery* query);
    QStandardItemModel* createModel(QSqlQuery* query);
};

#endif // DATATABLE_H
