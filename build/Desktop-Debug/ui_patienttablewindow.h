/********************************************************************************
** Form generated from reading UI file 'patienttablewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTTABLEWINDOW_H
#define UI_PATIENTTABLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientTableWindow
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_30;
    QGridLayout *gridLayout_36;
    QWidget *widget_20;
    QGridLayout *gridLayout_10;
    QTableView *TVPatients;
    QWidget *widget_31;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_33;
    QGridLayout *gridLayout_20;
    QLineEdit *LESecondName;
    QPushButton *PBFindPatient;
    QLabel *LLens;

    void setupUi(QDialog *PatientTableWindow)
    {
        if (PatientTableWindow->objectName().isEmpty())
            PatientTableWindow->setObjectName("PatientTableWindow");
        PatientTableWindow->resize(720, 674);
        PatientTableWindow->setMinimumSize(QSize(720, 674));
        PatientTableWindow->setMaximumSize(QSize(720, 674));
        PatientTableWindow->setStyleSheet(QString::fromUtf8("background:#3E7C59;"));
        gridLayout = new QGridLayout(PatientTableWindow);
        gridLayout->setObjectName("gridLayout");
        widget_30 = new QWidget(PatientTableWindow);
        widget_30->setObjectName("widget_30");
        gridLayout_36 = new QGridLayout(widget_30);
        gridLayout_36->setObjectName("gridLayout_36");
        gridLayout_36->setContentsMargins(0, 0, 0, 0);
        widget_20 = new QWidget(widget_30);
        widget_20->setObjectName("widget_20");
        widget_20->setMaximumSize(QSize(700, 600));
        widget_20->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-radius:30;"));
        gridLayout_10 = new QGridLayout(widget_20);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(18, 1, 18, 1);
        TVPatients = new QTableView(widget_20);
        TVPatients->setObjectName("TVPatients");
        TVPatients->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(11);
        TVPatients->setFont(font);
        TVPatients->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"    background-color: #3E7C59;\n"
"    color: white;\n"
"    padding: 5px;\n"
"    border: none;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QTableView {\n"
"    border: 0px solid #ccc;\n"
"    border-radius: 30px;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 4px;\n"
"    padding: 5px;\n"
"}"));
        TVPatients->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TVPatients->horizontalHeader()->setDefaultSectionSize(160);

        gridLayout_10->addWidget(TVPatients, 0, 0, 1, 1);


        gridLayout_36->addWidget(widget_20, 1, 0, 1, 1);

        widget_31 = new QWidget(widget_30);
        widget_31->setObjectName("widget_31");
        widget_31->setMaximumSize(QSize(700, 80));
        verticalLayout_6 = new QVBoxLayout(widget_31);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(15, 0, 15, 0);
        widget_33 = new QWidget(widget_31);
        widget_33->setObjectName("widget_33");
        widget_33->setMinimumSize(QSize(0, 60));
        widget_33->setMaximumSize(QSize(16777215, 60));
        widget_33->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-radius: 30;"));
        gridLayout_20 = new QGridLayout(widget_33);
        gridLayout_20->setObjectName("gridLayout_20");
        gridLayout_20->setContentsMargins(9, -1, -1, -1);
        LESecondName = new QLineEdit(widget_33);
        LESecondName->setObjectName("LESecondName");
        LESecondName->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setItalic(false);
        LESecondName->setFont(font1);
        LESecondName->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;"));

        gridLayout_20->addWidget(LESecondName, 0, 1, 1, 1);

        PBFindPatient = new QPushButton(widget_33);
        PBFindPatient->setObjectName("PBFindPatient");
        PBFindPatient->setMinimumSize(QSize(0, 40));
        PBFindPatient->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:20;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #004528;\n"
"	padding: 5;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));
        PBFindPatient->setAutoDefault(false);

        gridLayout_20->addWidget(PBFindPatient, 0, 2, 1, 1);

        LLens = new QLabel(widget_33);
        LLens->setObjectName("LLens");
        LLens->setMinimumSize(QSize(40, 40));
        LLens->setMaximumSize(QSize(40, 40));

        gridLayout_20->addWidget(LLens, 0, 0, 1, 1);


        verticalLayout_6->addWidget(widget_33);


        gridLayout_36->addWidget(widget_31, 0, 0, 1, 1);


        gridLayout->addWidget(widget_30, 0, 0, 1, 1);


        retranslateUi(PatientTableWindow);

        QMetaObject::connectSlotsByName(PatientTableWindow);
    } // setupUi

    void retranslateUi(QDialog *PatientTableWindow)
    {
        PatientTableWindow->setWindowTitle(QCoreApplication::translate("PatientTableWindow", "Dialog", nullptr));
        LESecondName->setPlaceholderText(QCoreApplication::translate("PatientTableWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\320\260\320\274\320\270\320\273\320\270\321\216", nullptr));
        PBFindPatient->setText(QCoreApplication::translate("PatientTableWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        LLens->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PatientTableWindow: public Ui_PatientTableWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTTABLEWINDOW_H
