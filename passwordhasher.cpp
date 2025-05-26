#include "passwordhasher.h"
#include "database.h"

#include <QCryptographicHash>
#include <QByteArray>
#include <QString>
#include <QSqlQuery>
#include <QSqlDatabase>



QString PasswordHasher::generateSalt(){

    QString characterSet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    QString salt = "";
    srand(time(0));
    for(int i = 0;i<32;i++){
        salt.append(characterSet.at(rand() % characterSet.length()));
    }
    return salt;
}

QString PasswordHasher::hashPassword(QString password,QString salt){
    QString fullPswd = salt + password;

    QByteArray hash = QCryptographicHash::hash(fullPswd.toUtf8(),QCryptographicHash::Sha256);


    return QString(hash.toHex());
}

bool PasswordHasher::authorizeUser(QString login,QString password){
    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));

    query.prepare("select userpassword,usersalt from "+Database().getDbName()+".users where username = :login");
    query.bindValue(":login",login);

    query.exec();
    query.next();

    if(query.value(0).isNull()){
        return false;
    }

    QString hPass= hashPassword(password,query.value(1).toString());
    if(hPass != query.value(0).toString()){
        return false;
    }



    return true;
}

QString PasswordHasher::getPermissionType(QString login){
    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare("select userpermission from "+Database().getDbName()+".users where username = :login");
    query.bindValue(":login",login);
    query.exec();
    query.next();

    if(query.value(0).isNull()){
        return "None";
    }

    return query.value(0).toString();
}
