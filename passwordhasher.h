#ifndef PASSWORDHASHER_H
#define PASSWORDHASHER_H

#include <QString>
#include <QCryptographicHash>

class PasswordHasher
{
public:

    static QString generateSalt();
    static QString hashPassword(QString password,QString salt);
    static bool authorizeUser(QString login,QString password);
    static QString getPermissionType(QString login);
};

#endif // PASSWORDHASHER_H
