#ifndef MAINMENUWINDOW_H
#define MAINMENUWINDOW_H

#include <QDialog>
#include <QTableView>

namespace Ui {
class mainmenuwindow;
}

class mainmenuwindow : public QDialog
{
    Q_OBJECT

public:
    explicit mainmenuwindow(QWidget *parent = nullptr);
    ~mainmenuwindow();

public slots:
    int getId(QTableView *table);
private slots:


    void on_PBMainMenu_clicked();

    void on_PBPacientList_clicked();


    void on_TVPatients_doubleClicked(const QModelIndex &index);


    void on_PBFindPatient_clicked();


    void on_PBServices_clicked();

    void on_PBAppointment_clicked();

    void on_LESecondName_returnPressed();


    void on_PBPatietTableAdd_clicked();

    void on_PBPatientTableDelete_clicked();

    void on_PBPatientTableEdit_clicked();



    void on_PBServiceTableAdd_clicked();

    void on_PBServiceTableDelete_clicked();

    void on_PBServiceTableEdit_clicked();

    void on_TVServices_doubleClicked(const QModelIndex &index);

    void on_PBServiceFind_clicked();



    void on_CWAppointments_clicked(const QDate &date);

    void on_TVAppointments_doubleClicked(const QModelIndex &index);

    void on_PBAppointmentAdd_clicked();

    void on_PBAppointmentEdit_clicked();

    void on_PBAppointmentDelete_clicked();

private:
    Ui::mainmenuwindow *ui;
};

#endif // MAINMENUWINDOW_H
