/********************************************************************************
** Form generated from reading UI file 'editservicewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSERVICEWINDOW_H
#define UI_EDITSERVICEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditServiceWindow
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout;
    QPushButton *PBCancel;
    QPushButton *PBChange;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QWidget *widget_2;
    QGridLayout *gridLayout_9;
    QLabel *label_6;
    QWidget *widget_4;
    QGridLayout *gridLayout_10;
    QLineEdit *LEName;
    QWidget *widget_5;
    QGridLayout *gridLayout_8;
    QLabel *label_5;
    QWidget *widget_6;
    QGridLayout *gridLayout_11;
    QLineEdit *LEPrice;
    QWidget *widget_7;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QWidget *widget_8;
    QGridLayout *gridLayout_12;
    QLineEdit *LEDuration;
    QWidget *widget_9;
    QGridLayout *gridLayout_6;
    QLabel *label_3;
    QWidget *widget_12;
    QGridLayout *gridLayout_4;
    QTextEdit *TEDescription;

    void setupUi(QDialog *EditServiceWindow)
    {
        if (EditServiceWindow->objectName().isEmpty())
            EditServiceWindow->setObjectName("EditServiceWindow");
        EditServiceWindow->resize(495, 475);
        EditServiceWindow->setMinimumSize(QSize(495, 475));
        EditServiceWindow->setMaximumSize(QSize(495, 475));
        EditServiceWindow->setStyleSheet(QString::fromUtf8("background-color:#3B8C6E"));
        gridLayout = new QGridLayout(EditServiceWindow);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        widget = new QWidget(EditServiceWindow);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-bottom-left-radius:30;\n"
"border-bottom-right-radius:30\n"
""));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(-1, 9, -1, -1);
        widget_15 = new QWidget(widget);
        widget_15->setObjectName("widget_15");
        horizontalLayout = new QHBoxLayout(widget_15);
        horizontalLayout->setObjectName("horizontalLayout");
        PBCancel = new QPushButton(widget_15);
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

        horizontalLayout->addWidget(PBCancel);

        PBChange = new QPushButton(widget_15);
        PBChange->setObjectName("PBChange");
        PBChange->setMinimumSize(QSize(0, 60));
        PBChange->setMaximumSize(QSize(170, 16777215));
        PBChange->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:30;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #004528;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));
        PBChange->setAutoDefault(false);

        horizontalLayout->addWidget(PBChange);


        gridLayout_2->addWidget(widget_15, 1, 0, 1, 1, Qt::AlignmentFlag::AlignBottom);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 0));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(-1, 9, -1, -1);
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


        gridLayout_3->addWidget(widget_2, 0, 0, 1, 1);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        widget_4->setMinimumSize(QSize(0, 60));
        widget_4->setMaximumSize(QSize(16777215, 60));
        widget_4->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_10 = new QGridLayout(widget_4);
        gridLayout_10->setObjectName("gridLayout_10");
        LEName = new QLineEdit(widget_4);
        LEName->setObjectName("LEName");
        LEName->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEName->setMaxLength(45);
        LEName->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_10->addWidget(LEName, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_4, 0, 1, 1, 1);

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


        gridLayout_3->addWidget(widget_5, 1, 0, 1, 1);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName("widget_6");
        widget_6->setMinimumSize(QSize(0, 60));
        widget_6->setMaximumSize(QSize(16777215, 60));
        widget_6->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_11 = new QGridLayout(widget_6);
        gridLayout_11->setObjectName("gridLayout_11");
        LEPrice = new QLineEdit(widget_6);
        LEPrice->setObjectName("LEPrice");
        LEPrice->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEPrice->setMaxLength(45);
        LEPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_11->addWidget(LEPrice, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_6, 1, 1, 1, 1);

        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName("widget_7");
        widget_7->setMaximumSize(QSize(16777215, 60));
        widget_7->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_7 = new QGridLayout(widget_7);
        gridLayout_7->setObjectName("gridLayout_7");
        label_4 = new QLabel(widget_7);
        label_4->setObjectName("label_4");
        label_4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_4->setStyleSheet(QString::fromUtf8("color:white"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_7, 2, 0, 1, 1);

        widget_8 = new QWidget(widget_3);
        widget_8->setObjectName("widget_8");
        widget_8->setMinimumSize(QSize(0, 60));
        widget_8->setMaximumSize(QSize(16777215, 60));
        widget_8->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_12 = new QGridLayout(widget_8);
        gridLayout_12->setObjectName("gridLayout_12");
        LEDuration = new QLineEdit(widget_8);
        LEDuration->setObjectName("LEDuration");
        LEDuration->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEDuration->setMaxLength(45);
        LEDuration->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_12->addWidget(LEDuration, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_8, 2, 1, 1, 1);

        widget_9 = new QWidget(widget_3);
        widget_9->setObjectName("widget_9");
        widget_9->setMaximumSize(QSize(16777215, 60));
        widget_9->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_6 = new QGridLayout(widget_9);
        gridLayout_6->setObjectName("gridLayout_6");
        label_3 = new QLabel(widget_9);
        label_3->setObjectName("label_3");
        label_3->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8("color:white"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_9, 3, 0, 1, 1);

        widget_12 = new QWidget(widget_3);
        widget_12->setObjectName("widget_12");
        widget_12->setMinimumSize(QSize(0, 60));
        widget_12->setMaximumSize(QSize(16777215, 150));
        widget_12->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_4 = new QGridLayout(widget_12);
        gridLayout_4->setObjectName("gridLayout_4");
        TEDescription = new QTextEdit(widget_12);
        TEDescription->setObjectName("TEDescription");
        TEDescription->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"border-radius:0;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));

        gridLayout_4->addWidget(TEDescription, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_12, 3, 1, 1, 1);


        gridLayout_2->addWidget(widget_3, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(EditServiceWindow);

        QMetaObject::connectSlotsByName(EditServiceWindow);
    } // setupUi

    void retranslateUi(QDialog *EditServiceWindow)
    {
        EditServiceWindow->setWindowTitle(QCoreApplication::translate("EditServiceWindow", "Dialog", nullptr));
        PBCancel->setText(QCoreApplication::translate("EditServiceWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        PBChange->setText(QCoreApplication::translate("EditServiceWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("EditServiceWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_5->setText(QCoreApplication::translate("EditServiceWindow", "\320\246\320\265\320\275\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("EditServiceWindow", "\320\224\320\273\320\270\320\275\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("EditServiceWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditServiceWindow: public Ui_EditServiceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSERVICEWINDOW_H
