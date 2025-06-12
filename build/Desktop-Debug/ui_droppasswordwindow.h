/********************************************************************************
** Form generated from reading UI file 'droppasswordwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DROPPASSWORDWINDOW_H
#define UI_DROPPASSWORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DropPasswordWindow
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    QLineEdit *LEPassword;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *LEPasswordAgain;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout;
    QPushButton *PBCancel;
    QPushButton *PBConfirm;

    void setupUi(QDialog *DropPasswordWindow)
    {
        if (DropPasswordWindow->objectName().isEmpty())
            DropPasswordWindow->setObjectName("DropPasswordWindow");
        DropPasswordWindow->resize(341, 402);
        DropPasswordWindow->setStyleSheet(QString::fromUtf8("background-color:#3B8C6E"));
        gridLayout = new QGridLayout(DropPasswordWindow);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        widget = new QWidget(DropPasswordWindow);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background:white;"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(300, 220));
        widget_2->setMaximumSize(QSize(345345, 345354));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:black;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        widget_4->setMaximumSize(QSize(16777215, 90));
        widget_4->setStyleSheet(QString::fromUtf8("background:white;\n"
"border:7px solid #3E7C59;\n"
"border-radius:45;\n"
""));
        gridLayout_2 = new QGridLayout(widget_4);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(-1, -1, -1, 0);
        LEPassword = new QLineEdit(widget_4);
        LEPassword->setObjectName("LEPassword");
        QFont font1;
        font1.setPointSize(14);
        LEPassword->setFont(font1);
        LEPassword->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;\n"
"background: white;\n"
"height: 25px;\n"
"margin: 10 25;\n"
"color:black;"));
        LEPassword->setEchoMode(QLineEdit::EchoMode::Password);
        LEPassword->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(LEPassword, 1, 0, 1, 1);


        verticalLayout->addWidget(widget_4);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        widget_3->setMaximumSize(QSize(16777215, 90));
        widget_3->setStyleSheet(QString::fromUtf8("background:white;\n"
"border:7px solid #3E7C59;\n"
"border-radius:45;\n"
""));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(-1, -1, -1, 0);
        LEPasswordAgain = new QLineEdit(widget_3);
        LEPasswordAgain->setObjectName("LEPasswordAgain");
        LEPasswordAgain->setFont(font1);
        LEPasswordAgain->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;\n"
"background: white;\n"
"height: 25px;\n"
"margin: 10 25;\n"
"color:black;"));
        LEPasswordAgain->setEchoMode(QLineEdit::EchoMode::Password);
        LEPasswordAgain->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(LEPasswordAgain, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_3);


        verticalLayout_2->addWidget(widget_2);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName("widget_7");
        horizontalLayout = new QHBoxLayout(widget_7);
        horizontalLayout->setObjectName("horizontalLayout");
        PBCancel = new QPushButton(widget_7);
        PBCancel->setObjectName("PBCancel");
        PBCancel->setMinimumSize(QSize(0, 40));
        PBCancel->setFont(font1);
        PBCancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:20;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #3E7C59;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));
        PBCancel->setAutoDefault(false);

        horizontalLayout->addWidget(PBCancel);

        PBConfirm = new QPushButton(widget_7);
        PBConfirm->setObjectName("PBConfirm");
        PBConfirm->setMinimumSize(QSize(0, 40));
        PBConfirm->setFont(font1);
        PBConfirm->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:20;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #3E7C59;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));
        PBConfirm->setAutoDefault(false);

        horizontalLayout->addWidget(PBConfirm);


        verticalLayout_2->addWidget(widget_7);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 1);

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(DropPasswordWindow);

        QMetaObject::connectSlotsByName(DropPasswordWindow);
    } // setupUi

    void retranslateUi(QDialog *DropPasswordWindow)
    {
        DropPasswordWindow->setWindowTitle(QCoreApplication::translate("DropPasswordWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DropPasswordWindow", "\320\241\320\261\321\200\320\276\321\201 \320\277\320\260\321\200\320\276\320\273\321\217", nullptr));
        LEPassword->setPlaceholderText(QCoreApplication::translate("DropPasswordWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        LEPasswordAgain->setPlaceholderText(QCoreApplication::translate("DropPasswordWindow", "\320\237\320\260\321\200\320\276\320\273\321\214 \320\277\320\276\320\262\321\202\320\276\321\200\320\275\320\276", nullptr));
        PBCancel->setText(QCoreApplication::translate("DropPasswordWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        PBConfirm->setText(QCoreApplication::translate("DropPasswordWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DropPasswordWindow: public Ui_DropPasswordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DROPPASSWORDWINDOW_H
