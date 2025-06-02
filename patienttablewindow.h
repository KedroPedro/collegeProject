#ifndef PATIENTTABLEWINDOW_H
#define PATIENTTABLEWINDOW_H

#include <QDialog>

namespace Ui {
class PatientTableWindow;
}

class PatientTableWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PatientTableWindow(QWidget *parent = nullptr);
    ~PatientTableWindow();
    int getPatientId();
    QString getPatientFullName();

private slots:
    void on_TVPatients_doubleClicked(const QModelIndex &index);

    void on_PBFindPatient_clicked();

private:
    Ui::PatientTableWindow *ui;
    QString patientFullName;
    int patientId;
};

#endif // PATIENTTABLEWINDOW_H
