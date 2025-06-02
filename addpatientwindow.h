#ifndef ADDPATIENTWINDOW_H
#define ADDPATIENTWINDOW_H

#include <QDialog>

namespace Ui {
class AddPatientWindow;
}

class AddPatientWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddPatientWindow(QWidget *parent = nullptr);
    ~AddPatientWindow();
    QString getPatientFullName();
    int getPatientId();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddPatientWindow *ui;
    QString patientFullName;
    int patientId;
};

#endif // ADDPATIENTWINDOW_H
