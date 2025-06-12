/********************************************************************************
** Form generated from reading UI file 'usertablewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERTABLEWINDOW_H
#define UI_USERTABLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserTableWindow
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    QWidget *widget_30;
    QGridLayout *gridLayout_36;
    QWidget *widget_31;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_33;
    QGridLayout *gridLayout_20;
    QLineEdit *LEUserLogin;
    QPushButton *PBFindUser;
    QLabel *LLens;
    QWidget *widget_20;
    QGridLayout *gridLayout_10;
    QTableView *TVUsers;
    QWidget *AdminPanel2;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_5;
    QGridLayout *gridLayout_3;
    QWidget *widget_21;
    QGridLayout *gridLayout_9;
    QWidget *widget_25;
    QGridLayout *gridLayout_17;
    QLabel *label_13;
    QWidget *widget_24;
    QGridLayout *gridLayout_15;
    QLabel *label_11;
    QWidget *widget_23;
    QGridLayout *gridLayout_13;
    QLabel *label_9;
    QWidget *widget_22;
    QGridLayout *gridLayout_11;
    QLabel *label_2;
    QWidget *widget_26;
    QGridLayout *gridLayout_18;
    QLabel *LId;
    QWidget *widget_27;
    QGridLayout *gridLayout_16;
    QLabel *LPermission;
    QWidget *widget_28;
    QGridLayout *gridLayout_14;
    QLabel *LLogin;
    QWidget *widget_29;
    QGridLayout *gridLayout_12;
    QLabel *LFullName;
    QWidget *widget_6;
    QGridLayout *gridLayout_4;
    QPushButton *PBDropPassword;
    QPushButton *PBUserTableDelete;
    QWidget *widget_7;

    void setupUi(QDialog *UserTableWindow)
    {
        if (UserTableWindow->objectName().isEmpty())
            UserTableWindow->setObjectName("UserTableWindow");
        UserTableWindow->resize(1166, 751);
        UserTableWindow->setMinimumSize(QSize(1166, 751));
        UserTableWindow->setMaximumSize(QSize(1166, 751));
        UserTableWindow->setStyleSheet(QString::fromUtf8("background-color:#3B8C6E"));
        gridLayout = new QGridLayout(UserTableWindow);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        widget = new QWidget(UserTableWindow);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-bottom-right-radius:30;\n"
"border-bottom-left-radius:30;"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");

        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 700));
        widget_3->setStyleSheet(QString::fromUtf8("background-color:#3B8C6E;\n"
"border-radius:30;"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("background:white;"));
        gridLayout_2 = new QGridLayout(widget_4);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_30 = new QWidget(widget_4);
        widget_30->setObjectName("widget_30");
        gridLayout_36 = new QGridLayout(widget_30);
        gridLayout_36->setObjectName("gridLayout_36");
        gridLayout_36->setContentsMargins(0, 0, 0, 0);
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
        LEUserLogin = new QLineEdit(widget_33);
        LEUserLogin->setObjectName("LEUserLogin");
        LEUserLogin->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setItalic(false);
        LEUserLogin->setFont(font);
        LEUserLogin->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;"));

        gridLayout_20->addWidget(LEUserLogin, 0, 1, 1, 1);

        PBFindUser = new QPushButton(widget_33);
        PBFindUser->setObjectName("PBFindUser");
        PBFindUser->setMinimumSize(QSize(0, 40));
        PBFindUser->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        PBFindUser->setAutoDefault(false);

        gridLayout_20->addWidget(PBFindUser, 0, 2, 1, 1);

        LLens = new QLabel(widget_33);
        LLens->setObjectName("LLens");
        LLens->setMinimumSize(QSize(40, 40));
        LLens->setMaximumSize(QSize(40, 40));

        gridLayout_20->addWidget(LLens, 0, 0, 1, 1);


        verticalLayout_6->addWidget(widget_33);


        gridLayout_36->addWidget(widget_31, 0, 0, 1, 1);

        widget_20 = new QWidget(widget_30);
        widget_20->setObjectName("widget_20");
        widget_20->setMaximumSize(QSize(700, 600));
        widget_20->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-radius:30;"));
        gridLayout_10 = new QGridLayout(widget_20);
        gridLayout_10->setObjectName("gridLayout_10");
        TVUsers = new QTableView(widget_20);
        TVUsers->setObjectName("TVUsers");
        TVUsers->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setPointSize(11);
        TVUsers->setFont(font1);
        TVUsers->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
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
        TVUsers->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TVUsers->horizontalHeader()->setDefaultSectionSize(160);

        gridLayout_10->addWidget(TVUsers, 0, 0, 1, 1);


        gridLayout_36->addWidget(widget_20, 1, 0, 1, 1);

        AdminPanel2 = new QWidget(widget_30);
        AdminPanel2->setObjectName("AdminPanel2");
        AdminPanel2->setMaximumSize(QSize(700, 60));
        horizontalLayout_6 = new QHBoxLayout(AdminPanel2);
        horizontalLayout_6->setObjectName("horizontalLayout_6");

        gridLayout_36->addWidget(AdminPanel2, 2, 0, 1, 1);


        gridLayout_2->addWidget(widget_30, 0, 0, 1, 1);


        horizontalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName("widget_5");
        widget_5->setStyleSheet(QString::fromUtf8("background:white;\n"
"border-radius:30;"));
        gridLayout_3 = new QGridLayout(widget_5);
        gridLayout_3->setObjectName("gridLayout_3");
        widget_21 = new QWidget(widget_5);
        widget_21->setObjectName("widget_21");
        widget_21->setStyleSheet(QString::fromUtf8("background:white"));
        gridLayout_9 = new QGridLayout(widget_21);
        gridLayout_9->setObjectName("gridLayout_9");
        widget_25 = new QWidget(widget_21);
        widget_25->setObjectName("widget_25");
        widget_25->setStyleSheet(QString::fromUtf8("background:#4C5958"));
        gridLayout_17 = new QGridLayout(widget_25);
        gridLayout_17->setObjectName("gridLayout_17");
        label_13 = new QLabel(widget_25);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("color:white"));
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_17->addWidget(label_13, 0, 0, 1, 1);


        gridLayout_9->addWidget(widget_25, 3, 0, 1, 1);

        widget_24 = new QWidget(widget_21);
        widget_24->setObjectName("widget_24");
        widget_24->setStyleSheet(QString::fromUtf8("background:#4C5958"));
        gridLayout_15 = new QGridLayout(widget_24);
        gridLayout_15->setObjectName("gridLayout_15");
        label_11 = new QLabel(widget_24);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("color:white"));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_15->addWidget(label_11, 0, 0, 1, 1);


        gridLayout_9->addWidget(widget_24, 2, 0, 1, 1);

        widget_23 = new QWidget(widget_21);
        widget_23->setObjectName("widget_23");
        widget_23->setStyleSheet(QString::fromUtf8("background:#4C5958"));
        gridLayout_13 = new QGridLayout(widget_23);
        gridLayout_13->setObjectName("gridLayout_13");
        label_9 = new QLabel(widget_23);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("color:white"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_13->addWidget(label_9, 0, 0, 1, 1);


        gridLayout_9->addWidget(widget_23, 1, 0, 1, 1);

        widget_22 = new QWidget(widget_21);
        widget_22->setObjectName("widget_22");
        widget_22->setMaximumSize(QSize(100, 16777215));
        widget_22->setStyleSheet(QString::fromUtf8("background:#4C5958"));
        gridLayout_11 = new QGridLayout(widget_22);
        gridLayout_11->setObjectName("gridLayout_11");
        label_2 = new QLabel(widget_22);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color:white"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_11->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_9->addWidget(widget_22, 0, 0, 1, 1);

        widget_26 = new QWidget(widget_21);
        widget_26->setObjectName("widget_26");
        widget_26->setMinimumSize(QSize(90, 70));
        widget_26->setMaximumSize(QSize(16777215, 70));
        widget_26->setStyleSheet(QString::fromUtf8("background:#4C5958"));
        gridLayout_18 = new QGridLayout(widget_26);
        gridLayout_18->setObjectName("gridLayout_18");
        LId = new QLabel(widget_26);
        LId->setObjectName("LId");
        LId->setStyleSheet(QString::fromUtf8("color:white"));
        LId->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_18->addWidget(LId, 0, 0, 1, 1);


        gridLayout_9->addWidget(widget_26, 3, 1, 1, 1);

        widget_27 = new QWidget(widget_21);
        widget_27->setObjectName("widget_27");
        widget_27->setMinimumSize(QSize(90, 70));
        widget_27->setMaximumSize(QSize(16777215, 70));
        widget_27->setStyleSheet(QString::fromUtf8("background:#4C5958"));
        gridLayout_16 = new QGridLayout(widget_27);
        gridLayout_16->setObjectName("gridLayout_16");
        LPermission = new QLabel(widget_27);
        LPermission->setObjectName("LPermission");
        LPermission->setStyleSheet(QString::fromUtf8("color:white"));
        LPermission->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_16->addWidget(LPermission, 0, 0, 1, 1);


        gridLayout_9->addWidget(widget_27, 2, 1, 1, 1);

        widget_28 = new QWidget(widget_21);
        widget_28->setObjectName("widget_28");
        widget_28->setMinimumSize(QSize(90, 70));
        widget_28->setMaximumSize(QSize(16777215, 70));
        widget_28->setStyleSheet(QString::fromUtf8("background:#4C5958"));
        gridLayout_14 = new QGridLayout(widget_28);
        gridLayout_14->setObjectName("gridLayout_14");
        LLogin = new QLabel(widget_28);
        LLogin->setObjectName("LLogin");
        LLogin->setMaximumSize(QSize(16777215, 314234));
        LLogin->setStyleSheet(QString::fromUtf8("color:white"));
        LLogin->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_14->addWidget(LLogin, 0, 0, 1, 1);


        gridLayout_9->addWidget(widget_28, 1, 1, 1, 1);

        widget_29 = new QWidget(widget_21);
        widget_29->setObjectName("widget_29");
        widget_29->setMinimumSize(QSize(90, 70));
        widget_29->setMaximumSize(QSize(16777215, 70));
        widget_29->setStyleSheet(QString::fromUtf8("background:#4C5958"));
        gridLayout_12 = new QGridLayout(widget_29);
        gridLayout_12->setObjectName("gridLayout_12");
        LFullName = new QLabel(widget_29);
        LFullName->setObjectName("LFullName");
        LFullName->setMaximumSize(QSize(16777215, 234234));
        LFullName->setStyleSheet(QString::fromUtf8("color:white"));
        LFullName->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_12->addWidget(LFullName, 0, 0, 1, 1);


        gridLayout_9->addWidget(widget_29, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget_21, 0, 0, 1, 1);

        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName("widget_6");
        gridLayout_4 = new QGridLayout(widget_6);
        gridLayout_4->setObjectName("gridLayout_4");
        PBDropPassword = new QPushButton(widget_6);
        PBDropPassword->setObjectName("PBDropPassword");
        PBDropPassword->setMinimumSize(QSize(0, 80));
        PBDropPassword->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:20;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #004528;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));
        PBDropPassword->setAutoDefault(false);

        gridLayout_4->addWidget(PBDropPassword, 1, 0, 1, 1);

        PBUserTableDelete = new QPushButton(widget_6);
        PBUserTableDelete->setObjectName("PBUserTableDelete");
        PBUserTableDelete->setMinimumSize(QSize(0, 80));
        PBUserTableDelete->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:20;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #004528;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));
        PBUserTableDelete->setCheckable(false);

        gridLayout_4->addWidget(PBUserTableDelete, 2, 0, 1, 1);

        widget_7 = new QWidget(widget_6);
        widget_7->setObjectName("widget_7");

        gridLayout_4->addWidget(widget_7, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_6, 1, 0, 1, 1);


        horizontalLayout->addWidget(widget_5);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 2);

        verticalLayout->addWidget(widget_3);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(UserTableWindow);

        QMetaObject::connectSlotsByName(UserTableWindow);
    } // setupUi

    void retranslateUi(QDialog *UserTableWindow)
    {
        UserTableWindow->setWindowTitle(QCoreApplication::translate("UserTableWindow", "Dialog", nullptr));
        LEUserLogin->setPlaceholderText(QCoreApplication::translate("UserTableWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\320\276\320\263\320\270\320\275", nullptr));
        PBFindUser->setText(QCoreApplication::translate("UserTableWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        LLens->setText(QString());
        label_13->setText(QCoreApplication::translate("UserTableWindow", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        label_11->setText(QCoreApplication::translate("UserTableWindow", "\320\224\320\276\321\201\321\202\321\203\320\277", nullptr));
        label_9->setText(QCoreApplication::translate("UserTableWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("UserTableWindow", "\320\244\320\230\320\236", nullptr));
        LId->setText(QString());
        LPermission->setText(QString());
        LLogin->setText(QString());
        LFullName->setText(QString());
        PBDropPassword->setText(QCoreApplication::translate("UserTableWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        PBUserTableDelete->setText(QCoreApplication::translate("UserTableWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserTableWindow: public Ui_UserTableWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERTABLEWINDOW_H
