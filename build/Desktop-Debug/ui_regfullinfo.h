/********************************************************************************
** Form generated from reading UI file 'regfullinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGFULLINFO_H
#define UI_REGFULLINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegFullInfo
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_7;
    QGridLayout *gridLayout_6;
    QWidget *widget_5;
    QGridLayout *gridLayout_5;
    QComboBox *CBPermissions;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *PBCancel;
    QPushButton *PBRegFullInfoReg;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    QLineEdit *LESurname;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLineEdit *LEName;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QLineEdit *LEPatronymic;
    QWidget *widget_8;
    QGridLayout *gridLayout_7;
    QLabel *label;

    void setupUi(QDialog *RegFullInfo)
    {
        if (RegFullInfo->objectName().isEmpty())
            RegFullInfo->setObjectName("RegFullInfo");
        RegFullInfo->resize(367, 530);
        gridLayout = new QGridLayout(RegFullInfo);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        widget_7 = new QWidget(RegFullInfo);
        widget_7->setObjectName("widget_7");
        widget_7->setMinimumSize(QSize(349, 485));
        widget_7->setMaximumSize(QSize(349, 485));
        gridLayout_6 = new QGridLayout(widget_7);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(widget_7);
        widget_5->setObjectName("widget_5");
        widget_5->setMaximumSize(QSize(16777215, 70));
        gridLayout_5 = new QGridLayout(widget_5);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(-1, 0, -1, 0);
        CBPermissions = new QComboBox(widget_5);
        CBPermissions->addItem(QString());
        CBPermissions->addItem(QString());
        CBPermissions->setObjectName("CBPermissions");
        CBPermissions->setMinimumSize(QSize(0, 60));
        CBPermissions->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(14);
        CBPermissions->setFont(font);
        CBPermissions->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        CBPermissions->setStyleSheet(QString::fromUtf8("\n"
"\n"
"    text-align: center;\n"
"	background:white;\n"
"	border:7px solid #3E7C59;\n"
"	border-bottom-right-radius:30;\n"
"	border-top-right-radius:30;\n"
"	color:black;\n"
""));
        CBPermissions->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToContentsOnFirstShow);

        gridLayout_5->addWidget(CBPermissions, 0, 0, 1, 1, Qt::AlignmentFlag::AlignTop);


        gridLayout_6->addWidget(widget_5, 1, 0, 1, 1);

        widget_6 = new QWidget(widget_7);
        widget_6->setObjectName("widget_6");
        horizontalLayout = new QHBoxLayout(widget_6);
        horizontalLayout->setObjectName("horizontalLayout");
        PBCancel = new QPushButton(widget_6);
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

        PBRegFullInfoReg = new QPushButton(widget_6);
        PBRegFullInfoReg->setObjectName("PBRegFullInfoReg");
        PBRegFullInfoReg->setMinimumSize(QSize(0, 40));
        PBRegFullInfoReg->setFont(font);
        PBRegFullInfoReg->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:20;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #3E7C59;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));
        PBRegFullInfoReg->setAutoDefault(false);

        horizontalLayout->addWidget(PBRegFullInfoReg);


        gridLayout_6->addWidget(widget_6, 2, 0, 1, 1);

        widget = new QWidget(widget_7);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(300, 310));
        widget->setMaximumSize(QSize(300, 310));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setMaximumSize(QSize(16777215, 90));
        widget_4->setStyleSheet(QString::fromUtf8("background:white;\n"
"border:7px solid #3E7C59;\n"
"border-radius:45;\n"
""));
        gridLayout_2 = new QGridLayout(widget_4);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(-1, -1, -1, 0);
        LESurname = new QLineEdit(widget_4);
        LESurname->setObjectName("LESurname");
        LESurname->setFont(font);
        LESurname->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;\n"
"background: white;\n"
"height: 25px;\n"
"margin: 10 25;\n"
"color:black;"));
        LESurname->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(LESurname, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_4);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setMaximumSize(QSize(16777215, 90));
        widget_2->setStyleSheet(QString::fromUtf8("background:white;\n"
"border:7px solid #3E7C59;\n"
"border-radius:45;\n"
""));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(-1, -1, -1, 0);
        LEName = new QLineEdit(widget_2);
        LEName->setObjectName("LEName");
        LEName->setFont(font);
        LEName->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;\n"
"background: white;\n"
"height: 25px;\n"
"margin: 10 25;\n"
"color:black;"));
        LEName->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(LEName, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setMaximumSize(QSize(16777215, 90));
        widget_3->setStyleSheet(QString::fromUtf8("background:white;\n"
"border:7px solid #3E7C59;\n"
"border-radius:45;\n"
""));
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(-1, -1, -1, 0);
        LEPatronymic = new QLineEdit(widget_3);
        LEPatronymic->setObjectName("LEPatronymic");
        LEPatronymic->setFont(font);
        LEPatronymic->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;\n"
"background: white;\n"
"height: 25px;\n"
"margin: 10 25;\n"
"color:black;"));
        LEPatronymic->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(LEPatronymic, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_3);


        gridLayout_6->addWidget(widget, 0, 0, 1, 1);


        gridLayout->addWidget(widget_7, 3, 1, 2, 1);

        widget_8 = new QWidget(RegFullInfo);
        widget_8->setObjectName("widget_8");
        widget_8->setMinimumSize(QSize(200, 30));
        widget_8->setMaximumSize(QSize(200, 30));
        widget_8->setStyleSheet(QString::fromUtf8("border-bottom-right-radius:30;\n"
"border-bottom-left-radius:30;\n"
"\n"
"border:7px solid #3E7C59;\n"
"border-top:none;"));
        gridLayout_7 = new QGridLayout(widget_8);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(-1, 1, -1, -1);
        label = new QLabel(widget_8);
        label->setObjectName("label");
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border:none;\n"
"color:black;\n"
"background:none;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_7->addWidget(label, 0, 0, 1, 1, Qt::AlignmentFlag::AlignTop);


        gridLayout->addWidget(widget_8, 0, 1, 1, 1, Qt::AlignmentFlag::AlignHCenter);


        retranslateUi(RegFullInfo);

        CBPermissions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RegFullInfo);
    } // setupUi

    void retranslateUi(QDialog *RegFullInfo)
    {
        RegFullInfo->setWindowTitle(QCoreApplication::translate("RegFullInfo", "Dialog", nullptr));
        CBPermissions->setItemText(0, QCoreApplication::translate("RegFullInfo", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        CBPermissions->setItemText(1, QCoreApplication::translate("RegFullInfo", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));

        PBCancel->setText(QCoreApplication::translate("RegFullInfo", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        PBRegFullInfoReg->setText(QCoreApplication::translate("RegFullInfo", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        LESurname->setPlaceholderText(QCoreApplication::translate("RegFullInfo", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        LEName->setPlaceholderText(QCoreApplication::translate("RegFullInfo", "\320\230\320\274\321\217", nullptr));
        LEPatronymic->setPlaceholderText(QCoreApplication::translate("RegFullInfo", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label->setText(QCoreApplication::translate("RegFullInfo", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegFullInfo: public Ui_RegFullInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGFULLINFO_H
