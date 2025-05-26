#include "picture.h"
#include <QPixmap>
#include <QDir>
#include <QFile>
#include <QString>
#include <QCoreApplication>
#include <QPainter>
#include <QBitmap>


Picture::Picture(QLabel* label,QString localPath) : _label(label), _localPath(localPath){
    _label->setScaledContents(true);
    _label->setPixmap(setPicture());
}

Picture::Picture(QLabel* label,QString localPath, int picRadius) : _label(label), _localPath(localPath),_picRadius(picRadius){
    _label->setScaledContents(true);
    _label->setPixmap(setRoundedPic());
}

QString Picture::setFullPath(){
    QString pathToApp = QCoreApplication::applicationDirPath();
    QString fullPath = QDir(pathToApp).filePath(_localPath);
    return fullPath;
}

QPixmap Picture::setPicture(){
    QString path = setFullPath();
    QPixmap pic(path);
    return pic;
}

QPixmap Picture::setRoundedPic(){
    QPixmap roundedPic = setPicture();

    QBitmap mask(roundedPic.size());
    mask.fill(Qt::color0);

    QPainter painter(&mask);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setBrush(Qt::color1);
    painter.drawRoundedRect(mask.rect(),_picRadius,_picRadius);

    roundedPic.setMask(mask);
    return roundedPic;
}
