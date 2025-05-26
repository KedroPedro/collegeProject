#ifndef EDITPATIENTWINDOW_H
#define EDITPATIENTWINDOW_H

#include <QDialog>

namespace Ui {
class editpatientwindow;
}

class editpatientwindow : public QDialog
{
    Q_OBJECT

public:
    explicit editpatientwindow(int patientId,QWidget *parent = nullptr);
    ~editpatientwindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::editpatientwindow *ui;
    int patId;
};

#endif // EDITPATIENTWINDOW_H
