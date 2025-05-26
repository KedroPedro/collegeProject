#ifndef REGFULLINFO_H
#define REGFULLINFO_H

#include <QDialog>

namespace Ui {
class RegFullInfo;
}

class RegFullInfo : public QDialog
{
    Q_OBJECT

public:
    explicit RegFullInfo(QWidget *parent = nullptr);
    ~RegFullInfo();
    bool GetRegistrationStatus();

private slots:
    void on_PBRegFullInfoReg_clicked();

    void on_PBCancel_clicked();

private:
    Ui::RegFullInfo *ui;
    bool registrationStatus;
    void NormalUserRegistration();
    bool AdminRegistration();
    void AddUser();
};

#endif // REGFULLINFO_H
