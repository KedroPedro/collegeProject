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
    explicit UserTableWindow(QWidget *parent = nullptr);
    ~UserTableWindow();

private:
    Ui::UserTableWindow *ui;
};

#endif // USERTABLEWINDOW_H
