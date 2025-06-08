#ifndef EDITAPPOINTMENTWINDOW_H
#define EDITAPPOINTMENTWINDOW_H

#include <QDialog>

namespace Ui {
class EditAppointmentWindow;
}

class EditAppointmentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditAppointmentWindow(int appointId, QWidget *parent = nullptr);
    ~EditAppointmentWindow();

private slots:
    void on_PBSelectPatient_clicked();

    void on_PBAddNewPatient_clicked();

    void on_PBEdit_clicked();

    void on_PBCancel_clicked();

private:
    Ui::EditAppointmentWindow *ui;
    int currentPatientId;
    int currentAppointId;
};

#endif // EDITAPPOINTMENTWINDOW_H
