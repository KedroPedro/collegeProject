#include "authorizationwindow.h"
#include <QApplication>
#include "database.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase db;
    Database* dbconf = new Database();
    dbconf->setConfig(db);
    db.open();
    delete dbconf;
    AuthorizationWindow w;
    w.show();

    return a.exec();

}
