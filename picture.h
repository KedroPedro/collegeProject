#ifndef PICTURE_H
#define PICTURE_H

#include <QObject>
#include <QLabel>
#include <QString>
#include <QPixmap>


class Picture : QObject
{
    Q_OBJECT
public:
    Picture(QLabel *label,QString localPath, int picRadius);
    Picture(QLabel *label,QString localPath);
private:
    QLabel *_label;
    QString _localPath;
    int _picRadius = 0;

    QPixmap setRoundedPic();
    QPixmap setPicture();
    QString setFullPath();
};

#endif // PICTURE_H
