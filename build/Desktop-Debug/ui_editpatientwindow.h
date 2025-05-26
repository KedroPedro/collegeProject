/********************************************************************************
** Form generated from reading UI file 'editpatientwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPATIENTWINDOW_H
#define UI_EDITPATIENTWINDOW_H

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

class Ui_editpatientwindow
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QWidget *widget_10;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QWidget *widget_8;
    QGridLayout *gridLayout_12;
    QLineEdit *LEPatronymic;
    QWidget *widget_9;
    QGridLayout *gridLayout_6;
    QLabel *label_3;
    QWidget *widget_4;
    QGridLayout *gridLayout_10;
    QLineEdit *LESurname;
    QWidget *widget_14;
    QGridLayout *gridLayout_15;
    QLineEdit *LEPhoneNumber;
    QWidget *widget_6;
    QGridLayout *gridLayout_11;
    QLineEdit *LEFirstname;
    QWidget *widget_11;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QWidget *widget_5;
    QGridLayout *gridLayout_8;
    QLabel *label_5;
    QWidget *widget_13;
    QGridLayout *gridLayout_14;
    QLineEdit *LEAddress;
    QWidget *widget_7;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QWidget *widget_12;
    QGridLayout *gridLayout_13;
    QLineEdit *LEDateOfBirth;
    QWidget *widget_2;
    QGridLayout *gridLayout_9;
    QLabel *label_6;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *editpatientwindow)
    {
        if (editpatientwindow->objectName().isEmpty())
            editpatientwindow->setObjectName("editpatientwindow");
        editpatientwindow->resize(495, 575);
        editpatientwindow->setMinimumSize(QSize(495, 575));
        editpatientwindow->setMaximumSize(QSize(495, 575));
        editpatientwindow->setStyleSheet(QString::fromUtf8("background-color:#3B8C6E"));
        gridLayout = new QGridLayout(editpatientwindow);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        widget = new QWidget(editpatientwindow);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-bottom-left-radius:30;\n"
"border-bottom-right-radius:30\n"
""));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(-1, 18, -1, -1);
        widget_10 = new QWidget(widget_3);
        widget_10->setObjectName("widget_10");
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

        widget_8 = new QWidget(widget_3);
        widget_8->setObjectName("widget_8");
        widget_8->setMinimumSize(QSize(0, 60));
        widget_8->setMaximumSize(QSize(16777215, 60));
        widget_8->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_12 = new QGridLayout(widget_8);
        gridLayout_12->setObjectName("gridLayout_12");
        LEPatronymic = new QLineEdit(widget_8);
        LEPatronymic->setObjectName("LEPatronymic");
        LEPatronymic->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEPatronymic->setMaxLength(45);
        LEPatronymic->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_12->addWidget(LEPatronymic, 0, 0, 1, 1);


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

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        widget_4->setMinimumSize(QSize(0, 60));
        widget_4->setMaximumSize(QSize(16777215, 60));
        widget_4->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_10 = new QGridLayout(widget_4);
        gridLayout_10->setObjectName("gridLayout_10");
        LESurname = new QLineEdit(widget_4);
        LESurname->setObjectName("LESurname");
        LESurname->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LESurname->setMaxLength(45);
        LESurname->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_10->addWidget(LESurname, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_4, 0, 1, 1, 1);

        widget_14 = new QWidget(widget_3);
        widget_14->setObjectName("widget_14");
        widget_14->setMinimumSize(QSize(285, 60));
        widget_14->setMaximumSize(QSize(16777215, 60));
        widget_14->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_15 = new QGridLayout(widget_14);
        gridLayout_15->setObjectName("gridLayout_15");
        LEPhoneNumber = new QLineEdit(widget_14);
        LEPhoneNumber->setObjectName("LEPhoneNumber");
        LEPhoneNumber->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEPhoneNumber->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_15->addWidget(LEPhoneNumber, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_14, 5, 1, 1, 1);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName("widget_6");
        widget_6->setMinimumSize(QSize(0, 60));
        widget_6->setMaximumSize(QSize(16777215, 60));
        widget_6->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_11 = new QGridLayout(widget_6);
        gridLayout_11->setObjectName("gridLayout_11");
        LEFirstname = new QLineEdit(widget_6);
        LEFirstname->setObjectName("LEFirstname");
        LEFirstname->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEFirstname->setMaxLength(45);
        LEFirstname->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_11->addWidget(LEFirstname, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_6, 1, 1, 1, 1);

        widget_11 = new QWidget(widget_3);
        widget_11->setObjectName("widget_11");
        widget_11->setMaximumSize(QSize(16777215, 60));
        widget_11->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_4 = new QGridLayout(widget_11);
        gridLayout_4->setObjectName("gridLayout_4");
        label = new QLabel(widget_11);
        label->setObjectName("label");
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color:white"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_11, 5, 0, 1, 1);

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

        widget_13 = new QWidget(widget_3);
        widget_13->setObjectName("widget_13");
        widget_13->setMinimumSize(QSize(0, 60));
        widget_13->setMaximumSize(QSize(16777215, 60));
        widget_13->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_14 = new QGridLayout(widget_13);
        gridLayout_14->setObjectName("gridLayout_14");
        LEAddress = new QLineEdit(widget_13);
        LEAddress->setObjectName("LEAddress");
        LEAddress->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEAddress->setMaxLength(254);
        LEAddress->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_14->addWidget(LEAddress, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_13, 4, 1, 1, 1);

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

        widget_12 = new QWidget(widget_3);
        widget_12->setObjectName("widget_12");
        widget_12->setMinimumSize(QSize(0, 60));
        widget_12->setMaximumSize(QSize(16777215, 60));
        widget_12->setStyleSheet(QString::fromUtf8("background:#4C5958;\n"
"border-radius:30"));
        gridLayout_13 = new QGridLayout(widget_12);
        gridLayout_13->setObjectName("gridLayout_13");
        LEDateOfBirth = new QLineEdit(widget_12);
        LEDateOfBirth->setObjectName("LEDateOfBirth");
        LEDateOfBirth->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid white;\n"
"color:white;\n"
"\n"
"height: 25px;\n"
"margin: 10 25"));
        LEDateOfBirth->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_13->addWidget(LEDateOfBirth, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_12, 3, 1, 1, 1);

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


        gridLayout_2->addWidget(widget_3, 0, 0, 1, 1);

        widget_15 = new QWidget(widget);
        widget_15->setObjectName("widget_15");
        horizontalLayout = new QHBoxLayout(widget_15);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_2 = new QPushButton(widget_15);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 60));
        pushButton_2->setMaximumSize(QSize(170, 16777215));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:30;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #004528;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));
        pushButton_2->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget_15);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 60));
        pushButton->setMaximumSize(QSize(170, 16777215));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:30;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #004528;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));
        pushButton->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton);


        gridLayout_2->addWidget(widget_15, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(editpatientwindow);

        QMetaObject::connectSlotsByName(editpatientwindow);
    } // setupUi

    void retranslateUi(QDialog *editpatientwindow)
    {
        editpatientwindow->setWindowTitle(QCoreApplication::translate("editpatientwindow", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("editpatientwindow", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        label_3->setText(QCoreApplication::translate("editpatientwindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        LEPhoneNumber->setInputMask(QCoreApplication::translate("editpatientwindow", "+375 (99) 999 99 99", nullptr));
        LEPhoneNumber->setText(QCoreApplication::translate("editpatientwindow", "+375 ()   ", nullptr));
        LEPhoneNumber->setPlaceholderText(QString());
        label->setText(QCoreApplication::translate("editpatientwindow", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        label_5->setText(QCoreApplication::translate("editpatientwindow", "\320\230\320\274\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("editpatientwindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        LEDateOfBirth->setInputMask(QCoreApplication::translate("editpatientwindow", "9999-99-99", nullptr));
        label_6->setText(QCoreApplication::translate("editpatientwindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("editpatientwindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("editpatientwindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editpatientwindow: public Ui_editpatientwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPATIENTWINDOW_H
