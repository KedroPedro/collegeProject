/********************************************************************************
** Form generated from reading UI file 'authorizationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATIONWINDOW_H
#define UI_AUTHORIZATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthorizationWindow
{
public:
    QAction *actionlkjlj;
    QAction *action;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QPushButton *PBEnterLogin;
    QLineEdit *LEPasswordLogin;
    QLineEdit *LEUserLogin;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLineEdit *LEPasswordRegAgain;
    QLineEdit *LEUserReg;
    QPushButton *PBRegisterReg;
    QLineEdit *LEPasswordReg;
    QMenuBar *menubar;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AuthorizationWindow)
    {
        if (AuthorizationWindow->objectName().isEmpty())
            AuthorizationWindow->setObjectName("AuthorizationWindow");
        AuthorizationWindow->resize(300, 400);
        AuthorizationWindow->setStyleSheet(QString::fromUtf8("background-color:white"));
        actionlkjlj = new QAction(AuthorizationWindow);
        actionlkjlj->setObjectName("actionlkjlj");
        action = new QAction(AuthorizationWindow);
        action->setObjectName("action");
        centralwidget = new QWidget(AuthorizationWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setMinimumSize(QSize(250, 320));
        tabWidget->setMaximumSize(QSize(250, 320));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget {\n"
"    background: white;\n"
"    border: 2px solid #3E7C59;\n"
"    border-radius: 30px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"\n"
"QTabWidget::pane {\n"
"    border: none;\n"
"    margin-top: 10px; \n"
"    background: white;\n"
"    border-radius: 25px; \n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background: white;\n"
"    color: black;\n"
"    border: 2px solid #3E7C59;\n"
"    border-bottom: none;\n"
"    border-top-left-radius: 10px;\n"
"    border-top-right-radius: 10px;\n"
"    padding: 8px 16px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #3E7C59;\n"
"    color: white;\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background: #E0F0E7;\n"
"}"));
        tabWidget->setTabPosition(QTabWidget::TabPosition::North);
        tabWidget->setTabShape(QTabWidget::TabShape::Triangular);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        PBEnterLogin = new QPushButton(tab);
        PBEnterLogin->setObjectName("PBEnterLogin");
        PBEnterLogin->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	height: 30;\n"
"	margin: 10 70;\n"
"	border-radius:20;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #3E7C59;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));

        gridLayout_2->addWidget(PBEnterLogin, 2, 0, 1, 2);

        LEPasswordLogin = new QLineEdit(tab);
        LEPasswordLogin->setObjectName("LEPasswordLogin");
        LEPasswordLogin->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;\n"
"background: white;\n"
"height: 25px;\n"
"margin: 10 25;\n"
"\n"
""));
        LEPasswordLogin->setMaxLength(50);
        LEPasswordLogin->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_2->addWidget(LEPasswordLogin, 1, 0, 1, 2);

        LEUserLogin = new QLineEdit(tab);
        LEUserLogin->setObjectName("LEUserLogin");
        LEUserLogin->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;\n"
"background: white;\n"
"height: 25px;\n"
"margin:10 25"));
        LEUserLogin->setMaxLength(50);

        gridLayout_2->addWidget(LEUserLogin, 0, 0, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName("gridLayout_3");
        LEPasswordRegAgain = new QLineEdit(tab_2);
        LEPasswordRegAgain->setObjectName("LEPasswordRegAgain");
        LEPasswordRegAgain->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;\n"
"background: white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEPasswordRegAgain->setMaxLength(50);
        LEPasswordRegAgain->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_3->addWidget(LEPasswordRegAgain, 3, 0, 1, 1);

        LEUserReg = new QLineEdit(tab_2);
        LEUserReg->setObjectName("LEUserReg");
        LEUserReg->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;\n"
"background: white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEUserReg->setMaxLength(32767);
        LEUserReg->setDragEnabled(false);

        gridLayout_3->addWidget(LEUserReg, 0, 0, 1, 1);

        PBRegisterReg = new QPushButton(tab_2);
        PBRegisterReg->setObjectName("PBRegisterReg");
        PBRegisterReg->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	height: 30;\n"
"	margin: 10 60;\n"
"	border-radius:20;\n"
"	background-color:white;\n"
"	color:black;\n"
"	border: 7px solid #3E7C59;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"        background-color:#ACACAC;\n"
"}"));

        gridLayout_3->addWidget(PBRegisterReg, 4, 0, 1, 1);

        LEPasswordReg = new QLineEdit(tab_2);
        LEPasswordReg->setObjectName("LEPasswordReg");
        LEPasswordReg->setStyleSheet(QString::fromUtf8("border: 0px solid red;\n"
"border-bottom: 2px solid black;\n"
"background: white;\n"
"height: 25px;\n"
"margin: 10 25"));
        LEPasswordReg->setMaxLength(32767);
        LEPasswordReg->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_3->addWidget(LEPasswordReg, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        AuthorizationWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AuthorizationWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 300, 22));
        menubar->setStyleSheet(QString::fromUtf8("QMenuBar {\n"
"    background-color: #3E7C59;\n"
"\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    background-color: transparent;\n"
"    color: white;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background-color: #4CAF6B;\n"
"    color: white;\n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    background-color: #2A5A40;\n"
"}\n"
"\n"
"\n"
"QMenu {\n"
"    background-color: white;\n"
"    border: 2px solid #3E7C59;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"\n"
"}\n"
"\n"
"QMenu::item {\n"
"    color: black;\n"
"	padding: 2px 25px;\n"
"    margin: 2px;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    background-color: #4CAF6B;\n"
"    color: white;\n"
"}"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"bakcground:red;"));
        AuthorizationWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AuthorizationWindow);
        statusbar->setObjectName("statusbar");
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        statusbar->setFont(font);
        statusbar->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);
        statusbar->setAutoFillBackground(false);
        AuthorizationWindow->setStatusBar(statusbar);

        menubar->addAction(menu_2->menuAction());
        menu_2->addAction(action);

        retranslateUi(AuthorizationWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AuthorizationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AuthorizationWindow)
    {
        AuthorizationWindow->setWindowTitle(QCoreApplication::translate("AuthorizationWindow", "AuthorizationWindow", nullptr));
        actionlkjlj->setText(QCoreApplication::translate("AuthorizationWindow", "lkjlj", nullptr));
        action->setText(QCoreApplication::translate("AuthorizationWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        PBEnterLogin->setText(QCoreApplication::translate("AuthorizationWindow", "\320\222\321\205\320\276\320\264", nullptr));
        LEPasswordLogin->setPlaceholderText(QCoreApplication::translate("AuthorizationWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        LEUserLogin->setPlaceholderText(QCoreApplication::translate("AuthorizationWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AuthorizationWindow", "\320\222\321\205\320\276\320\264", nullptr));
        LEPasswordRegAgain->setPlaceholderText(QCoreApplication::translate("AuthorizationWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        LEUserReg->setInputMask(QString());
        LEUserReg->setPlaceholderText(QCoreApplication::translate("AuthorizationWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        PBRegisterReg->setText(QCoreApplication::translate("AuthorizationWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        LEPasswordReg->setInputMask(QString());
        LEPasswordReg->setText(QString());
        LEPasswordReg->setPlaceholderText(QCoreApplication::translate("AuthorizationWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AuthorizationWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        menu_2->setTitle(QCoreApplication::translate("AuthorizationWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthorizationWindow: public Ui_AuthorizationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATIONWINDOW_H
