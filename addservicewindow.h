#ifndef ADDSERVICEWINDOW_H
#define ADDSERVICEWINDOW_H

#include <QDialog>

namespace Ui {
class AddServiceWindow;
}

class AddServiceWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddServiceWindow(QWidget *parent = nullptr);
    ~AddServiceWindow();

private slots:
    void on_PBCancel_clicked();

    void on_PBAdd_clicked();

private:
    Ui::AddServiceWindow *ui;
};

#endif // ADDSERVICEWINDOW_H
