#include "authorizationwindow.h"
#include <QApplication>
#include <QDir>
#include "database.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setWindowIcon(QIcon(QDir(QCoreApplication::applicationDirPath()).filePath("pictures/whitewindowlogo.ico")));
    QSqlDatabase db;
    Database* dbconf = new Database();
    dbconf->setConfig(db);
    db.open();
    delete dbconf;
    AuthorizationWindow w;
    w.show();

    return a.exec();

}
