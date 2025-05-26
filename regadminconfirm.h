#ifndef REGADMINCONFIRM_H
#define REGADMINCONFIRM_H

#include <QDialog>

namespace Ui {
class RegAdminConfirm;
}

class RegAdminConfirm : public QDialog
{
    Q_OBJECT

public:
    explicit RegAdminConfirm(QWidget *parent = nullptr);
    ~RegAdminConfirm();
    bool getStatus();

private slots:
    void on_PBConfirm_clicked();


    void on_PBCancel_clicked();

private:
    Ui::RegAdminConfirm *ui;
    bool confirmed;
};

#endif // REGADMINCONFIRM_H
