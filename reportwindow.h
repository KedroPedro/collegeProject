#ifndef REPORTWINDOW_H
#define REPORTWINDOW_H

#include <QDialog>

namespace Ui {
class ReportWindow;
}

class ReportWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ReportWindow(QWidget *parent = nullptr);
    ~ReportWindow();

private slots:
    void on_PBVisits_clicked();

    void on_PBPayments_clicked();

private:
    Ui::ReportWindow *ui;
};

#endif // REPORTWINDOW_H
