/********************************************************************************
** Form generated from reading UI file 'editappointmentwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITAPPOINTMENTWINDOW_H
#define UI_EDITAPPOINTMENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditAppointmentWindow
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QWidget *widget_7;
    QGridLayout *gridLayout_12;
    QLabel *label_7;
    QComboBox *CBUsers;
    QWidget *widget_2;
    QGridLayout *gridLayout_9;
    QLabel *label_6;
    QWidget *widget_16;
    QGridLayout *gridLayout_17;
    QLabel *label_13;
    QComboBox *CBServices;
    QWidget *widget_5;
    QGridLayout *gridLayout_8;
    QLabel *label_5;
    QWidget *widget_6;
    QGridLayout *gridLayout_4;
    QDateTimeEdit *DateTime;
    QWidget *widget_14;
    QGridLayout *gridLayout_15;
    QLabel *label_12;
    QWidget *widget_15;
    QGridLayout *gridLayout_16;
    QLineEdit *LEReason;
    QWidget *widget_8;
    QGridLayout *gridLayout_14;
    QLabel *label_11;
    QComboBox *CBStatus;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget_10;
    QGridLayout *gridLayout_5;
    QLabel *LPatientFullName;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout;
    QPushButton *PBSelectPatient;
    QPushButton *PBAddNewPatient;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *PBCancel;
    QPushButton *PBEdit;

    void setupUi(QDialog *EditAppointmentWindow)
    {
        if (EditAppointmentWindow->objectName().isEmpty())
            EditAppointmentWindow->setObjectName("EditAppointmentWindow");
        EditAppointmentWindow->resize(528, 597);
        EditAppointmentWindow->setMinimumSize(QSize(528, 597));
        EditAppointmentWindow->setMaximumSize(QSize(528, 597));
        EditAppointmentWindow->setStyleSheet(QString::fromUtf8("background-color:#3B8C6E"));
        gridLayout = new QGridLayout(EditAppointmentWindow);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        widget = new QWidget(EditAppointmentWindow);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("border-bottom-left-radius:30;\n"
"border-bottom-right-radius:30;\n"
"background:white;"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 0));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName("widget_7");
        widget_7->setMaximumSize(QSize(16777215, 60));
        widget_7->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_12 = new QGridLayout(widget_7);
        gridLayout_12->setObjectName("gridLayout_12");
        label_7 = new QLabel(widget_7);
        label_7->setObjectName("label_7");
        label_7->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_7->setStyleSheet(QString::fromUtf8("color:white"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_12->addWidget(label_7, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_7, 0, 0, 1, 1);

        CBUsers = new QComboBox(widget_3);
        CBUsers->setObjectName("CBUsers");
        CBUsers->setMinimumSize(QSize(0, 60));
        CBUsers->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(14);
        CBUsers->setFont(font);
        CBUsers->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        CBUsers->setStyleSheet(QString::fromUtf8("\n"
"	border-radius:0;\n"
"    text-align: center;\n"
"	background:white;\n"
"	border:7px solid #4C5958;\n"
"	border-bottom-right-radius:30;\n"
"	border-top-right-radius:30;\n"
"	color:black;\n"
""));
        CBUsers->setEditable(false);
        CBUsers->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToContentsOnFirstShow);

        gridLayout_3->addWidget(CBUsers, 0, 1, 1, 1, Qt::AlignmentFlag::AlignTop);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        widget_2->setMaximumSize(QSize(16777215, 60));
        widget_2->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_9 = new QGridLayout(widget_2);
        gridLayout_9->setObjectName("gridLayout_9");
        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");
        label_6->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_6->setStyleSheet(QString::fromUtf8("color:white"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_9->addWidget(label_6, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);

        widget_16 = new QWidget(widget_3);
        widget_16->setObjectName("widget_16");
        widget_16->setMaximumSize(QSize(16777215, 60));
        widget_16->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_17 = new QGridLayout(widget_16);
        gridLayout_17->setObjectName("gridLayout_17");
        label_13 = new QLabel(widget_16);
        label_13->setObjectName("label_13");
        label_13->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_13->setStyleSheet(QString::fromUtf8("color:white"));
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_17->addWidget(label_13, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_16, 2, 0, 1, 1);

        CBServices = new QComboBox(widget_3);
        CBServices->setObjectName("CBServices");
        CBServices->setMinimumSize(QSize(0, 60));
        CBServices->setMaximumSize(QSize(16777215, 40));
        CBServices->setFont(font);
        CBServices->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        CBServices->setStyleSheet(QString::fromUtf8("\n"
"	border-radius:0;\n"
"    text-align: center;\n"
"	background:white;\n"
"	border:7px solid #4C5958;\n"
"	border-bottom-right-radius:30;\n"
"	border-top-right-radius:30;\n"
"	color:black;\n"
""));
        CBServices->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToContentsOnFirstShow);

        gridLayout_3->addWidget(CBServices, 2, 1, 1, 1, Qt::AlignmentFlag::AlignTop);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName("widget_5");
        widget_5->setMaximumSize(QSize(16777215, 60));
        widget_5->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_8 = new QGridLayout(widget_5);
        gridLayout_8->setObjectName("gridLayout_8");
        label_5 = new QLabel(widget_5);
        label_5->setObjectName("label_5");
        label_5->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_5->setStyleSheet(QString::fromUtf8("color:white"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_8->addWidget(label_5, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_5, 3, 0, 1, 1);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName("widget_6");
        gridLayout_4 = new QGridLayout(widget_6);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        DateTime = new QDateTimeEdit(widget_6);
        DateTime->setObjectName("DateTime");
        DateTime->setMinimumSize(QSize(0, 60));
        DateTime->setFont(font);
        DateTime->setStyleSheet(QString::fromUtf8("QDateTimeEdit {\n"
"	border-radius:0;\n"
"    background-color: white;\n"
"    border: 7px solid #4C5958;\n"
"	border-right:none;\n"
"	border-bottom-left-radius:30;\n"
"	border-top-left-radius:30;\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
""));
        DateTime->setFrame(true);
        DateTime->setAlignment(Qt::AlignmentFlag::AlignCenter);
        DateTime->setAccelerated(false);
        DateTime->setProperty("showGroupSeparator", QVariant(false));
        DateTime->setCalendarPopup(true);

        gridLayout_4->addWidget(DateTime, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_6, 3, 1, 1, 1);

        widget_14 = new QWidget(widget_3);
        widget_14->setObjectName("widget_14");
        widget_14->setMaximumSize(QSize(16777215, 60));
        widget_14->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_15 = new QGridLayout(widget_14);
        gridLayout_15->setObjectName("gridLayout_15");
        label_12 = new QLabel(widget_14);
        label_12->setObjectName("label_12");
        label_12->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_12->setStyleSheet(QString::fromUtf8("color:white"));
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_15->addWidget(label_12, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_14, 4, 0, 1, 1);

        widget_15 = new QWidget(widget_3);
        widget_15->setObjectName("widget_15");
        widget_15->setMinimumSize(QSize(0, 60));
        widget_15->setMaximumSize(QSize(16777215, 60));
        widget_15->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_16 = new QGridLayout(widget_15);
        gridLayout_16->setObjectName("gridLayout_16");
        LEReason = new QLineEdit(widget_15);
        LEReason->setObjectName("LEReason");
        LEReason->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEReason->setMaxLength(45);
        LEReason->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_16->addWidget(LEReason, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_15, 4, 1, 1, 1);

        widget_8 = new QWidget(widget_3);
        widget_8->setObjectName("widget_8");
        widget_8->setMaximumSize(QSize(16777215, 60));
        widget_8->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_14 = new QGridLayout(widget_8);
        gridLayout_14->setObjectName("gridLayout_14");
        label_11 = new QLabel(widget_8);
        label_11->setObjectName("label_11");
        label_11->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_11->setStyleSheet(QString::fromUtf8("color:white"));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_14->addWidget(label_11, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_8, 5, 0, 1, 1);

        CBStatus = new QComboBox(widget_3);
        CBStatus->addItem(QString());
        CBStatus->addItem(QString());
        CBStatus->addItem(QString());
        CBStatus->addItem(QString());
        CBStatus->setObjectName("CBStatus");
        CBStatus->setMinimumSize(QSize(0, 60));
        CBStatus->setMaximumSize(QSize(16777215, 40));
        CBStatus->setFont(font);
        CBStatus->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        CBStatus->setStyleSheet(QString::fromUtf8("\n"
"	border-radius:0;\n"
"    text-align: center;\n"
"	background:white;\n"
"	border:7px solid #4C5958;\n"
"	border-bottom-right-radius:30;\n"
"	border-top-right-radius:30;\n"
"	color:black;\n"
""));
        CBStatus->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToContentsOnFirstShow);

        gridLayout_3->addWidget(CBStatus, 5, 1, 1, 1, Qt::AlignmentFlag::AlignTop);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_10 = new QWidget(widget_4);
        widget_10->setObjectName("widget_10");
        gridLayout_5 = new QGridLayout(widget_10);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        LPatientFullName = new QLabel(widget_10);
        LPatientFullName->setObjectName("LPatientFullName");
        LPatientFullName->setFont(font);
        LPatientFullName->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border-bottom:3px solid #4C5958;"));
        LPatientFullName->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(LPatientFullName, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_10);

        widget_9 = new QWidget(widget_4);
        widget_9->setObjectName("widget_9");
        horizontalLayout = new QHBoxLayout(widget_9);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        PBSelectPatient = new QPushButton(widget_9);
        PBSelectPatient->setObjectName("PBSelectPatient");
        PBSelectPatient->setMinimumSize(QSize(0, 60));
        PBSelectPatient->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:30;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #4C5958;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));

        horizontalLayout->addWidget(PBSelectPatient);

        PBAddNewPatient = new QPushButton(widget_9);
        PBAddNewPatient->setObjectName("PBAddNewPatient");
        PBAddNewPatient->setMinimumSize(QSize(0, 60));
        PBAddNewPatient->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:30;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #4C5958;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));

        horizontalLayout->addWidget(PBAddNewPatient);


        verticalLayout->addWidget(widget_9);


        gridLayout_3->addWidget(widget_4, 1, 1, 1, 1);


        gridLayout_2->addWidget(widget_3, 0, 0, 1, 1);

        widget_17 = new QWidget(widget);
        widget_17->setObjectName("widget_17");
        widget_17->setMaximumSize(QSize(16777215, 70));
        horizontalLayout_3 = new QHBoxLayout(widget_17);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        PBCancel = new QPushButton(widget_17);
        PBCancel->setObjectName("PBCancel");
        PBCancel->setMinimumSize(QSize(0, 60));
        PBCancel->setMaximumSize(QSize(170, 16777215));
        PBCancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:30;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #004528;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));
        PBCancel->setAutoDefault(false);

        horizontalLayout_3->addWidget(PBCancel);

        PBEdit = new QPushButton(widget_17);
        PBEdit->setObjectName("PBEdit");
        PBEdit->setMinimumSize(QSize(0, 60));
        PBEdit->setMaximumSize(QSize(170, 16777215));
        PBEdit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:30;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #004528;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));
        PBEdit->setAutoDefault(false);

        horizontalLayout_3->addWidget(PBEdit);


        gridLayout_2->addWidget(widget_17, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(EditAppointmentWindow);

        CBUsers->setCurrentIndex(-1);
        CBServices->setCurrentIndex(-1);
        CBStatus->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(EditAppointmentWindow);
    } // setupUi

    void retranslateUi(QDialog *EditAppointmentWindow)
    {
        EditAppointmentWindow->setWindowTitle(QCoreApplication::translate("EditAppointmentWindow", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("EditAppointmentWindow", "\320\222\321\200\320\260\321\207", nullptr));
        label_6->setText(QCoreApplication::translate("EditAppointmentWindow", "\320\237\320\260\321\206\320\270\320\265\320\275\321\202", nullptr));
        label_13->setText(QCoreApplication::translate("EditAppointmentWindow", "\320\237\321\200\320\276\321\206\320\265\320\264\321\203\321\200\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("EditAppointmentWindow", "\320\224\320\260\321\202\320\260", nullptr));
        label_12->setText(QCoreApplication::translate("EditAppointmentWindow", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("EditAppointmentWindow", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        CBStatus->setItemText(0, QCoreApplication::translate("EditAppointmentWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\276", nullptr));
        CBStatus->setItemText(1, QCoreApplication::translate("EditAppointmentWindow", "\320\222 \320\276\320\266\320\270\320\264\320\260\320\275\320\270\320\270", nullptr));
        CBStatus->setItemText(2, QCoreApplication::translate("EditAppointmentWindow", "\320\222 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\265", nullptr));
        CBStatus->setItemText(3, QCoreApplication::translate("EditAppointmentWindow", "\320\236\321\202\320\274\320\265\320\275\320\265\320\275\320\276", nullptr));

        LPatientFullName->setText(QString());
        PBSelectPatient->setText(QCoreApplication::translate("EditAppointmentWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        PBAddNewPatient->setText(QCoreApplication::translate("EditAppointmentWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\263\320\276", nullptr));
        PBCancel->setText(QCoreApplication::translate("EditAppointmentWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        PBEdit->setText(QCoreApplication::translate("EditAppointmentWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditAppointmentWindow: public Ui_EditAppointmentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITAPPOINTMENTWINDOW_H
