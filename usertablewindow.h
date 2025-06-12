#ifndef USERTABLEWINDOW_H
#define USERTABLEWINDOW_H

#include <QDialog>

namespace Ui {
class UserTableWindow;
}

class UserTableWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UserTableWindow(QString currentUser, QWidget *parent = nullptr);
    ~UserTableWindow();

private slots:
    void on_TVUsers_doubleClicked(const QModelIndex &index);

    void on_PBFindUser_clicked();

    void on_PBDropPassword_clicked();

    void on_PBUserTableDelete_clicked();

private:
    Ui::UserTableWindow *ui;
    QString user;
};

#endif // USERTABLEWINDOW_H
