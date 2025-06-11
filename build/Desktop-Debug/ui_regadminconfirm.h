/********************************************************************************
** Form generated from reading UI file 'regadminconfirm.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGADMINCONFIRM_H
#define UI_REGADMINCONFIRM_H

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

class Ui_RegAdminConfirm
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_9;
    QGridLayout *gridLayout_7;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    QLineEdit *LEAdminLogin;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *LEAdminPassword;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout;
    QPushButton *PBCancel;
    QPushButton *PBConfirm;
    QWidget *widget_5;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *RegAdminConfirm)
    {
        if (RegAdminConfirm->objectName().isEmpty())
            RegAdminConfirm->setObjectName("RegAdminConfirm");
        RegAdminConfirm->resize(367, 445);
        RegAdminConfirm->setMinimumSize(QSize(367, 445));
        RegAdminConfirm->setMaximumSize(QSize(367, 445));
        gridLayout = new QGridLayout(RegAdminConfirm);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        widget_9 = new QWidget(RegAdminConfirm);
        widget_9->setObjectName("widget_9");
        widget_9->setMinimumSize(QSize(200, 30));
        widget_9->setMaximumSize(QSize(200, 30));
        widget_9->setStyleSheet(QString::fromUtf8("border-bottom-right-radius:30;\n"
"border-bottom-left-radius:30;\n"
"\n"
"border:7px solid #3E7C59;\n"
"border-top:none;"));
        gridLayout_7 = new QGridLayout(widget_9);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(-1, 1, -1, -1);
        label = new QLabel(widget_9);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border:none;\n"
"color:black;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_7->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(widget_9, 0, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        widget = new QWidget(RegAdminConfirm);
        widget->setObjectName("widget");
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setObjectName("gridLayout_5");
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(300, 220));
        widget_2->setMaximumSize(QSize(300, 220));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName("verticalLayout");
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
        LEAdminLogin = new QLineEdit(widget_4);
        LEAdminLogin->setObjectName("LEAdminLogin");
        LEAdminLogin->setFont(font);
        LEAdminLogin->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;\n"
"background: white;\n"
"height: 25px;\n"
"margin: 10 25;\n"
"color:black;"));
        LEAdminLogin->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(LEAdminLogin, 0, 0, 1, 1);


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
        LEAdminPassword = new QLineEdit(widget_3);
        LEAdminPassword->setObjectName("LEAdminPassword");
        LEAdminPassword->setFont(font);
        LEAdminPassword->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;\n"
"background: white;\n"
"height: 25px;\n"
"margin: 10 25;\n"
"color:black;"));
        LEAdminPassword->setEchoMode(QLineEdit::EchoMode::Password);
        LEAdminPassword->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(LEAdminPassword, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_3);


        gridLayout_5->addWidget(widget_2, 0, 0, 1, 1);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName("widget_7");
        horizontalLayout = new QHBoxLayout(widget_7);
        horizontalLayout->setObjectName("horizontalLayout");
        PBCancel = new QPushButton(widget_7);
        PBCancel->setObjectName("PBCancel");
        PBCancel->setMinimumSize(QSize(0, 40));
        PBCancel->setFont(font);
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
        PBConfirm->setFont(font);
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


        gridLayout_5->addWidget(widget_7, 2, 0, 1, 1);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName("widget_5");
        widget_5->setMinimumSize(QSize(300, 0));
        widget_5->setMaximumSize(QSize(300, 90));
        gridLayout_4 = new QGridLayout(widget_5);
        gridLayout_4->setObjectName("gridLayout_4");
        label_2 = new QLabel(widget_5);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(32, 32));
        label_2->setMaximumSize(QSize(32, 32));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1, Qt::AlignmentFlag::AlignTop);

        label_3 = new QLabel(widget_5);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setPointSize(11);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:gray;"));
        label_3->setTextFormat(Qt::TextFormat::AutoText);
        label_3->setWordWrap(true);

        gridLayout_4->addWidget(label_3, 0, 1, 1, 1);


        gridLayout_5->addWidget(widget_5, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(RegAdminConfirm);

        QMetaObject::connectSlotsByName(RegAdminConfirm);
    } // setupUi

    void retranslateUi(QDialog *RegAdminConfirm)
    {
        RegAdminConfirm->setWindowTitle(QCoreApplication::translate("RegAdminConfirm", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("RegAdminConfirm", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        LEAdminLogin->setPlaceholderText(QCoreApplication::translate("RegAdminConfirm", "\320\233\320\276\320\263\320\270\320\275 ", nullptr));
        LEAdminPassword->setPlaceholderText(QCoreApplication::translate("RegAdminConfirm", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        PBCancel->setText(QCoreApplication::translate("RegAdminConfirm", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        PBConfirm->setText(QCoreApplication::translate("RegAdminConfirm", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("RegAdminConfirm", "\320\224\320\273\321\217 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\320\270 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260 \321\201 \320\277\321\200\320\260\320\262\320\260\320\274\320\270 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260 \321\202\321\200\320\265\320\261\321\203\320\265\321\202\321\201\321\217 \320\277\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265 \320\264\321\200\321\203\320\263\320\276\320\263\320\276 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegAdminConfirm: public Ui_RegAdminConfirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGADMINCONFIRM_H
