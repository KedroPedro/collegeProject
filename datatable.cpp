#include "datatable.h"
#include "database.h"

#include <QTableView>
#include <QStandardItemModel>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>

DataTable::DataTable(QTableView* table, QString selected, QString tableName,const QStringList& headers)
    : _selected(selected), _headers(headers), _tableName(tableName)
{

    QSqlQuery query = getQuery();
    query.exec();
    QStandardItemModel *model = createModel(&query);
    table->setModel(model);
    model->setParent(table);
}

DataTable::~DataTable(){
    _selected = nullptr;
    for(QString a : _headers){
        a = nullptr;
    }
    _tableName = nullptr;
}

QSqlQuery DataTable::getQuery()
{
    Database *db = new Database();
    QString sql = QString("select %1 from %2").arg(_selected).arg(_tableName);
    QSqlQuery query(QSqlDatabase::database(db->getTitle()));
    delete db;
    query.prepare(sql);
    return query;
}



QStandardItemModel* DataTable::createModel(QSqlQuery* query)
{
    QSqlRecord record = query->record();

    QStandardItemModel *model=new QStandardItemModel(0,record.count());
    setHeaders(model);
    fillTable(model,query);
    return model;
}

void DataTable::setHeaders(QStandardItemModel *&model){
    for(int i = 0;i<_headers.length();i++){
        model->setHeaderData(i,Qt::Horizontal,_headers[i]);
    }
}

void DataTable::fillTable(QStandardItemModel *&model, QSqlQuery* query){
    QSqlRecord record;
    for(int row = 0;query->next();row++){
        record =query->record();
        model->insertRow(row);

        for(int column = 0;column < record.count();column++){
            model->setItem(row,column,new QStandardItem(record.value(column).toString()));
        }
    }
}












