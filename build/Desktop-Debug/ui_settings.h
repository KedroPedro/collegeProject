/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QWidget *widget_8;
    QGridLayout *gridLayout_12;
    QLineEdit *LEDBLogin;
    QWidget *widget_5;
    QGridLayout *gridLayout_8;
    QLabel *label_5;
    QWidget *widget_7;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QWidget *widget_6;
    QGridLayout *gridLayout_11;
    QLineEdit *LEDBHost;
    QWidget *widget_9;
    QGridLayout *gridLayout_6;
    QLabel *label_3;
    QWidget *widget_13;
    QGridLayout *gridLayout_14;
    QLineEdit *LEDBTitle;
    QWidget *widget_2;
    QGridLayout *gridLayout_9;
    QLabel *label_6;
    QWidget *widget_12;
    QGridLayout *gridLayout_13;
    QLineEdit *LEDBPassword;
    QWidget *widget_10;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QWidget *widget_4;
    QGridLayout *gridLayout_10;
    QLineEdit *LEDBName;
    QWidget *widget_11;
    QGridLayout *gridLayout_4;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout;
    QPushButton *PBCancel;
    QPushButton *PBChange;
    QWidget *widget_14;
    QGridLayout *gridLayout_15;
    QLabel *label;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName("Settings");
        Settings->resize(436, 516);
        Settings->setMinimumSize(QSize(436, 516));
        Settings->setMaximumSize(QSize(436, 516));
        gridLayout = new QGridLayout(Settings);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        widget = new QWidget(Settings);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(-1, 18, -1, -1);
        widget_8 = new QWidget(widget_3);
        widget_8->setObjectName("widget_8");
        widget_8->setMinimumSize(QSize(0, 60));
        widget_8->setMaximumSize(QSize(16777215, 60));
        widget_8->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_12 = new QGridLayout(widget_8);
        gridLayout_12->setObjectName("gridLayout_12");
        LEDBLogin = new QLineEdit(widget_8);
        LEDBLogin->setObjectName("LEDBLogin");
        LEDBLogin->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEDBLogin->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_12->addWidget(LEDBLogin, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_8, 2, 1, 1, 1);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName("widget_5");
        widget_5->setMinimumSize(QSize(0, 60));
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

        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName("widget_7");
        widget_7->setMinimumSize(QSize(0, 60));
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

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName("widget_6");
        widget_6->setMinimumSize(QSize(0, 60));
        widget_6->setMaximumSize(QSize(16777215, 60));
        widget_6->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_11 = new QGridLayout(widget_6);
        gridLayout_11->setObjectName("gridLayout_11");
        LEDBHost = new QLineEdit(widget_6);
        LEDBHost->setObjectName("LEDBHost");
        LEDBHost->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEDBHost->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_11->addWidget(LEDBHost, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_6, 1, 1, 1, 1);

        widget_9 = new QWidget(widget_3);
        widget_9->setObjectName("widget_9");
        widget_9->setMinimumSize(QSize(0, 60));
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

        widget_13 = new QWidget(widget_3);
        widget_13->setObjectName("widget_13");
        widget_13->setMinimumSize(QSize(0, 60));
        widget_13->setMaximumSize(QSize(16777215, 60));
        widget_13->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_14 = new QGridLayout(widget_13);
        gridLayout_14->setObjectName("gridLayout_14");
        LEDBTitle = new QLineEdit(widget_13);
        LEDBTitle->setObjectName("LEDBTitle");
        LEDBTitle->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEDBTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_14->addWidget(LEDBTitle, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_13, 4, 1, 1, 1);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(0, 60));
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

        widget_12 = new QWidget(widget_3);
        widget_12->setObjectName("widget_12");
        widget_12->setMinimumSize(QSize(0, 60));
        widget_12->setMaximumSize(QSize(16777215, 60));
        widget_12->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_13 = new QGridLayout(widget_12);
        gridLayout_13->setObjectName("gridLayout_13");
        LEDBPassword = new QLineEdit(widget_12);
        LEDBPassword->setObjectName("LEDBPassword");
        LEDBPassword->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"\n"
"height: 25px;\n"
"margin: 10 25"));
        LEDBPassword->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_13->addWidget(LEDBPassword, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_12, 3, 1, 1, 1);

        widget_10 = new QWidget(widget_3);
        widget_10->setObjectName("widget_10");
        widget_10->setMinimumSize(QSize(0, 60));
        widget_10->setMaximumSize(QSize(16777215, 60));
        widget_10->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_5 = new QGridLayout(widget_10);
        gridLayout_5->setObjectName("gridLayout_5");
        label_2 = new QLabel(widget_10);
        label_2->setObjectName("label_2");
        label_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("color:white"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_10, 4, 0, 1, 1);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        widget_4->setMinimumSize(QSize(0, 60));
        widget_4->setMaximumSize(QSize(16777215, 60));
        widget_4->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_10 = new QGridLayout(widget_4);
        gridLayout_10->setObjectName("gridLayout_10");
        LEDBName = new QLineEdit(widget_4);
        LEDBName->setObjectName("LEDBName");
        LEDBName->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEDBName->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_10->addWidget(LEDBName, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_4, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_3, 1, 0, 1, 1);

        widget_11 = new QWidget(widget);
        widget_11->setObjectName("widget_11");
        gridLayout_4 = new QGridLayout(widget_11);
        gridLayout_4->setObjectName("gridLayout_4");
        widget_15 = new QWidget(widget_11);
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


        gridLayout_4->addWidget(widget_15, 0, 0, 1, 1, Qt::AlignmentFlag::AlignBottom);


        gridLayout_2->addWidget(widget_11, 2, 0, 1, 1);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        widget_14 = new QWidget(Settings);
        widget_14->setObjectName("widget_14");
        widget_14->setMinimumSize(QSize(200, 30));
        widget_14->setMaximumSize(QSize(200, 30));
        widget_14->setStyleSheet(QString::fromUtf8("border-bottom-right-radius:30;\n"
"border-bottom-left-radius:30;\n"
"\n"
"border:7px solid #3E7C59;\n"
"border-top:none;"));
        gridLayout_15 = new QGridLayout(widget_14);
        gridLayout_15->setObjectName("gridLayout_15");
        gridLayout_15->setContentsMargins(-1, 1, -1, -1);
        label = new QLabel(widget_14);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border:none;\n"
"color:black;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_15->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(widget_14, 0, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("Settings", "Host", nullptr));
        label_4->setText(QCoreApplication::translate("Settings", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_3->setText(QCoreApplication::translate("Settings", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("Settings", "\320\230\320\274\321\217 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        LEDBPassword->setInputMask(QString());
        LEDBPassword->setText(QString());
        label_2->setText(QCoreApplication::translate("Settings", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        PBCancel->setText(QCoreApplication::translate("Settings", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        PBChange->setText(QCoreApplication::translate("Settings", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Settings", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
