#ifndef DROPPASSWORDWINDOW_H
#define DROPPASSWORDWINDOW_H

#include <QDialog>

namespace Ui {
class DropPasswordWindow;
}

class DropPasswordWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DropPasswordWindow(QString login,QWidget *parent = nullptr);
    ~DropPasswordWindow();

private slots:
    void on_PBCancel_clicked();

    void on_PBConfirm_clicked();

private:
    QString currentLogin;
    Ui::DropPasswordWindow *ui;
};

#endif // DROPPASSWORDWINDOW_H
