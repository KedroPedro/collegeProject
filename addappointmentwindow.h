#ifndef ADDAPPOINTMENTWINDOW_H
#define ADDAPPOINTMENTWINDOW_H

#include <QDialog>

namespace Ui {
class AddAppointmentWindow;
}

class AddAppointmentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddAppointmentWindow(QWidget *parent = nullptr);
    ~AddAppointmentWindow();

private slots:
    void on_PBCancel_clicked();

    void on_PBAdd_clicked();

    void on_PBAddNewPatient_clicked();

    void on_PBSelectPatient_clicked();

private:
    Ui::AddAppointmentWindow *ui;
    int patientId;
};

#endif // ADDAPPOINTMENTWINDOW_H
