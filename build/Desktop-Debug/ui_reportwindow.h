/********************************************************************************
** Form generated from reading UI file 'reportwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTWINDOW_H
#define UI_REPORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportWindow
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QWidget *widget_8;
    QGridLayout *gridLayout_7;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout_4;
    QPushButton *PBPayments;
    QPushButton *PBVisits;
    QSpinBox *spinBox;
    QComboBox *comboBox;

    void setupUi(QDialog *ReportWindow)
    {
        if (ReportWindow->objectName().isEmpty())
            ReportWindow->setObjectName("ReportWindow");
        ReportWindow->resize(352, 368);
        ReportWindow->setStyleSheet(QString::fromUtf8("background-color:#3B8C6E;\n"
"border-radius:0;\n"
"border-bottom-right-radius:30;\n"
"border-bottom-left-radius:30;"));
        gridLayout = new QGridLayout(ReportWindow);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        widget = new QWidget(ReportWindow);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background:white;"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        frame = new QFrame(widget);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(16777215, 40));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(-1, 0, -1, -1);
        widget_8 = new QWidget(frame);
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
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border:none;\n"
"color:black;\n"
"background:none;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_7->addWidget(label, 0, 0, 1, 1, Qt::AlignmentFlag::AlignTop);


        gridLayout_3->addWidget(widget_8, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:20;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #004528;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));
        gridLayout_4 = new QGridLayout(widget_2);
        gridLayout_4->setObjectName("gridLayout_4");
        PBPayments = new QPushButton(widget_2);
        PBPayments->setObjectName("PBPayments");
        PBPayments->setMinimumSize(QSize(0, 60));
        PBPayments->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_4->addWidget(PBPayments, 3, 0, 1, 1);

        PBVisits = new QPushButton(widget_2);
        PBVisits->setObjectName("PBVisits");
        PBVisits->setMinimumSize(QSize(0, 60));
        PBVisits->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:20;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #004528;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));

        gridLayout_4->addWidget(PBVisits, 2, 0, 1, 1);

        spinBox = new QSpinBox(widget_2);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimumSize(QSize(0, 60));
        spinBox->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        spinBox->setStyleSheet(QString::fromUtf8("\n"
"	border-radius:0;\n"
"    text-align: center;\n"
"	background:white;\n"
"	border:7px solid #4C5958;\n"
"	border-bottom-right-radius:30;\n"
"	border-top-right-radius:30;\n"
"	color:black;\n"
""));
        spinBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        spinBox->setMinimum(2024);
        spinBox->setMaximum(2055);

        gridLayout_4->addWidget(spinBox, 1, 0, 1, 1);

        comboBox = new QComboBox(widget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(0, 60));
        comboBox->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        comboBox->setStyleSheet(QString::fromUtf8("\n"
"	border-radius:0;\n"
"    text-align: center;\n"
"	background:white;\n"
"	border:7px solid #4C5958;\n"
"	border-bottom-right-radius:30;\n"
"	border-top-right-radius:30;\n"
"	color:black;\n"
""));

        gridLayout_4->addWidget(comboBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(ReportWindow);

        comboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ReportWindow);
    } // setupUi

    void retranslateUi(QDialog *ReportWindow)
    {
        ReportWindow->setWindowTitle(QCoreApplication::translate("ReportWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ReportWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        PBPayments->setText(QCoreApplication::translate("ReportWindow", "\320\236\320\277\320\273\320\260\321\202\321\213", nullptr));
        PBVisits->setText(QCoreApplication::translate("ReportWindow", "\320\237\320\276\321\201\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ReportWindow", "\320\257\320\275\320\262\320\260\321\200\321\214", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ReportWindow", "\320\244\320\265\320\262\321\200\320\260\320\273\321\214", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("ReportWindow", "\320\234\320\260\321\200\321\202", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("ReportWindow", "\320\220\321\200\320\265\320\273\321\214", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("ReportWindow", "\320\234\320\260\320\271", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("ReportWindow", "\320\230\321\216\320\275\321\214", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("ReportWindow", "\320\230\321\216\320\273\321\214", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("ReportWindow", "\320\220\320\262\320\263\321\203\321\201\321\202", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("ReportWindow", "\320\241\320\265\320\275\321\202\321\217\320\261\321\200\321\214", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("ReportWindow", "\320\236\320\272\321\202\321\217\320\261\321\200\321\214", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("ReportWindow", "\320\235\320\276\321\217\320\261\321\200\321\214", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("ReportWindow", "\320\224\320\265\320\272\320\260\320\261\321\200\321\214", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ReportWindow: public Ui_ReportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTWINDOW_H
