#ifndef EDITSERVICEWINDOW_H
#define EDITSERVICEWINDOW_H

#include <QDialog>

namespace Ui {
class EditServiceWindow;
}

class EditServiceWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditServiceWindow(int serviceId,QWidget *parent = nullptr);
    ~EditServiceWindow();

private slots:
    void on_PBCancel_clicked();

    void on_PBChange_clicked();

private:
    Ui::EditServiceWindow *ui;
    int servId;
};

#endif // EDITSERVICEWINDOW_H
