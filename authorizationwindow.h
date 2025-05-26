#ifndef AUTHORIZATIONWINDOW_H
#define AUTHORIZATIONWINDOW_H

#include <QMainWindow>
#include <QSqlQuery>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui {
class AuthorizationWindow;

}
QT_END_NAMESPACE

class AuthorizationWindow : public QMainWindow
{
    Q_OBJECT

public:
    AuthorizationWindow(QWidget *parent = nullptr);

    ~AuthorizationWindow();

private slots:
    bool check_connection();


    void on_PBEnterLogin_clicked();

    void on_PBRegisterReg_clicked();

    void on_action_triggered();

private:
    Ui::AuthorizationWindow *ui;

};
#endif // AUTHORIZATIONWINDOW_H
