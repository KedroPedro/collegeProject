#include "reportwindow.h"
#include "ui_reportwindow.h"
#include "database.h"

#include <QFileDialog>
#include <QSqlQuery>
#include <QMessageBox>
#include <QStandardPaths>
#include <QDateTime>
#include <QTextStream>
#include <QSqlError>

ReportWindow::ReportWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReportWindow)
{
    ui->setupUi(this);
}

ReportWindow::~ReportWindow()
{
    delete ui;
}

void ReportWindow::on_PBVisits_clicked()
{
    int month = ui->comboBox->currentIndex() + 1;
    int year = ui->spinBox->value();
    QString db = Database().getDbName();

    QString fileName = QFileDialog::getSaveFileName(this,
                                                    "Сохранить отчет о посещениях",
                                                    QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) +
                                                        QString("/visits_report_%1_%2.txt").arg(month).arg(year),
                                                    "Текстовые файлы (*.txt)");

    if (fileName.isEmpty()) {
        return;
    }

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Ошибка",
                              QString("Не удалось открыть файл для записи:\n%1\n%2")
                                  .arg(fileName)
                                  .arg(file.errorString()));
        return;
    }

    QTextStream out(&file);
    out.setEncoding(QStringConverter::Utf8);


    out << QString("Отчет о посещениях за %1 %2 года\n")
               .arg(ui->comboBox->currentText())
               .arg(year);
    out << "Сгенерирован: " << QDateTime::currentDateTime().toString("dd.MM.yyyy HH:mm") << "\n\n";


    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare(
        "select "
        "date_format(" + db + ".visits.visitdate, '%d.%m.%Y %H:%i') as formdate, "
               "concat(" + db + ".patients.patientsurname, ' ', " + db + ".patients.patientname, ' ', " + db + ".patients.patientpatronymic) as patient, "
        + db + ".users.userfullname as doctor, "
        + db + ".visits.visitreason as diagnosis, "
        + db + ".visits.visitstatus, "
               "(select " + db + ".services.servicename from " + db + ".services "
               "join " + db + ".visitservices on " + db + ".services.id = " + db + ".visitservices.visitservicesserviceid "
               "where " + db + ".visitservices.visitservicesvisitid = " + db + ".visits.id limit 1) as servicename "
               "from " + db + ".visits "
               "join " + db + ".patients on " + db + ".patients.id = " + db + ".visits.visitpatientid "
               "join " + db + ".users on " + db + ".users.id = " + db + ".visits.visituserid "
               "where year(" + db + ".visits.visitdate) = :year "
               "and month(" + db + ".visits.visitdate) = :month "
               "order by " + db + ".visits.visitdate");

    query.bindValue(":year", year);
    query.bindValue(":month", month);

    if(!query.exec()){
        QMessageBox::warning(this, "Ошибка запроса", query.lastError().text());
        file.close();
        return;
    }

    out << QString("%1\t%2\t%3\t%4\t%5\n")
               .arg("Дата", -20)
               .arg("Пациент", -30)
               .arg("Врач", -25)
               .arg("Услуга", -25)
               .arg("Причина", -40);

    out << QString().fill('-', 140) << "\n";


    while (query.next()) {
        out << QString("%1\t%2\t%3\t%4\t%5\n")
        .arg(query.value("formdate").toString(), -20)
            .arg(query.value("patient").toString(), -30)
            .arg(query.value("doctor").toString(), -25)
            .arg(query.value("servicename").toString(), -25)
            .arg(query.value("diagnosis").toString(), -40);
    }

    file.close();

    if (QFile::exists(fileName)) {
        QMessageBox::information(this, "Успех",
                                 QString("Отчет успешно сохранен:\n%1").arg(fileName));
    } else {
        QMessageBox::warning(this, "Ошибка",
                              "Файл не был создан. Проверьте права на запись.");
    }
}

void ReportWindow::on_PBPayments_clicked()
{
    // Получаем выбранные месяц и год
    int month = ui->comboBox->currentIndex() + 1;
    int year = ui->spinBox->value();
    QString db = Database().getDbName();

    // Формируем имя файла
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    "Сохранить отчет о платежах",
                                                    QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) +
                                                        QString("/payments_report_%1_%2.txt").arg(month).arg(year),
                                                    "Текстовые файлы (*.txt)");

    if (fileName.isEmpty()) {
        return;
    }

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Ошибка", "Не удалось создать файл: " + file.errorString());
        return;
    }

    QTextStream out(&file);
    out.setEncoding(QStringConverter::Utf8);

    // Заголовок отчета
    out << QString("Отчет о платежах за %1 %2 года\n")
               .arg(ui->comboBox->currentText())
               .arg(year);
    out << "Сгенерирован: " << QDateTime::currentDateTime().toString("dd.MM.yyyy HH:mm") << "\n\n";

    // SQL-запрос
    QSqlQuery query(QSqlDatabase::database(Database().getTitle()));
    query.prepare(
        "select "
        "date_format(" + db + ".payments.paymentdate, '%d.%m.%Y %H:%i') as payment_date, "
               "concat(" + db + ".patients.patientsurname, ' ', " + db + ".patients.patientname, ' ', " + db + ".patients.patientpatronymic) as patient_name, "
        + db + ".payments.paymentamount as amount, "
               "(select " + db + ".services.servicename from " + db + ".services "
               "join " + db + ".visitservices on " + db + ".services.id = " + db + ".visitservices.visitservicesserviceid "
               "where " + db + ".visitservices.visitservicesvisitid = " + db + ".visits.id limit 1) as purpose "
               "from " + db + ".payments "
               "join " + db + ".visits on " + db + ".payments.paymentvisitid = " + db + ".visits.id "
               "join " + db + ".patients on " + db + ".visits.visitpatientid = " + db + ".patients.id "
               "where year(" + db + ".payments.paymentdate) = :year "
               "and month(" + db + ".payments.paymentdate) = :month "
               "order by " + db + ".payments.paymentdate desc");

    query.bindValue(":year", year);
    query.bindValue(":month", month);

    if (!query.exec()) {
        QMessageBox::warning(this, "Ошибка запроса", query.lastError().text());
        file.close();
        return;
    }

    // Заголовки столбцов
    out << QString("%1\t%2\t%3\t%4\n")
               .arg("Дата", -20)
               .arg("Пациент", -30)
               .arg("Сумма", -15)
               .arg("Назначение", -30);

    out << QString().fill('-', 120) << "\n";

    // Данные
    double totalAmount = 0;
    while (query.next()) {
        double amount = query.value("amount").toDouble();
        totalAmount += amount;

        out << QString("%1\t%2\t%3\t%4\n")
                   .arg(query.value("payment_date").toString(), -20)
                   .arg(query.value("patient_name").toString(), -30)
                   .arg(QString::number(amount, 'f', 2), -15)
                   .arg(query.value("purpose").toString(), -30);
    }

    // Итоговая сумма
    out << "\nИтого: " << QString::number(totalAmount, 'f', 2) << "\n";

    // Явное закрытие файла с проверкой
    file.close();
    if (!file.error() == QFile::NoError) {
        QMessageBox::warning(this, "Ошибка", "Ошибка при сохранении файла: " + file.errorString());
        return;
    }

    // Проверка существования файла
    if (QFile::exists(fileName)) {
        QMessageBox::information(this, "Успех", "Отчет успешно сохранен в файл:\n" + fileName);
    } else {
        QMessageBox::warning(this, "Ошибка", "Файл не был создан. Проверьте права на запись.");
    }
}
