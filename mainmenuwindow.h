#ifndef MAINMENUWINDOW_H
#define MAINMENUWINDOW_H

#include <QDialog>


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
    int getPatientId();
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

private:
    Ui::mainmenuwindow *ui;
};

#endif // MAINMENUWINDOW_H
