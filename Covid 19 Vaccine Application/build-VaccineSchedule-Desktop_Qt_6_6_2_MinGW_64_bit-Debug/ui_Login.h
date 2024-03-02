/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_loginQuit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QPushButton *pushButton_adminRegister;
    QPushButton *pushButton_adminLogin;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_adminUsername;
    QLineEdit *lineEdit_adminUsername;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_adminPW;
    QLineEdit *lineEdit_adminPW;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_adminCode;
    QLineEdit *lineEdit_adminCode;
    QGroupBox *groupBox_user;
    QPushButton *pushButton_userLogin;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_userUsername;
    QLineEdit *lineEdit_userUsername;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_userPW;
    QLineEdit *lineEdit_userPW;
    QPushButton *pushButton_userRegister;
    QLabel *label_welcome;
    QLabel *label_welcome_2;
    QLabel *label_welcome_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1281, 636);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(620, 550, 571, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        label->setFont(font);
        label->setLayoutDirection(Qt::RightToLeft);
        label->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        label->setIndent(-1);
        pushButton_loginQuit = new QPushButton(centralwidget);
        pushButton_loginQuit->setObjectName("pushButton_loginQuit");
        pushButton_loginQuit->setGeometry(QRect(480, 550, 111, 41));
        sizePolicy.setHeightForWidth(pushButton_loginQuit->sizePolicy().hasHeightForWidth());
        pushButton_loginQuit->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_loginQuit->setFont(font1);
        pushButton_loginQuit->setStyleSheet(QString::fromUtf8("color:#fff;\n"
"font: 75 16pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        pushButton_loginQuit->setAutoRepeatDelay(299);
        pushButton_loginQuit->setAutoDefault(false);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 140, 1191, 402));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));
        pushButton_adminRegister = new QPushButton(groupBox);
        pushButton_adminRegister->setObjectName("pushButton_adminRegister");
        pushButton_adminRegister->setGeometry(QRect(140, 300, 141, 51));
        pushButton_adminLogin = new QPushButton(groupBox);
        pushButton_adminLogin->setObjectName("pushButton_adminLogin");
        pushButton_adminLogin->setGeometry(QRect(300, 300, 111, 51));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(40, 50, 481, 231));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_adminUsername = new QLabel(layoutWidget1);
        label_adminUsername->setObjectName("label_adminUsername");

        horizontalLayout_3->addWidget(label_adminUsername);

        lineEdit_adminUsername = new QLineEdit(layoutWidget1);
        lineEdit_adminUsername->setObjectName("lineEdit_adminUsername");

        horizontalLayout_3->addWidget(lineEdit_adminUsername);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_adminPW = new QLabel(layoutWidget1);
        label_adminPW->setObjectName("label_adminPW");

        horizontalLayout_4->addWidget(label_adminPW);

        lineEdit_adminPW = new QLineEdit(layoutWidget1);
        lineEdit_adminPW->setObjectName("lineEdit_adminPW");
        lineEdit_adminPW->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lineEdit_adminPW);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_adminCode = new QLabel(layoutWidget1);
        label_adminCode->setObjectName("label_adminCode");

        horizontalLayout_6->addWidget(label_adminCode);

        lineEdit_adminCode = new QLineEdit(layoutWidget1);
        lineEdit_adminCode->setObjectName("lineEdit_adminCode");
        lineEdit_adminCode->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(lineEdit_adminCode);


        verticalLayout_3->addLayout(horizontalLayout_6);

        groupBox_user = new QGroupBox(groupBox);
        groupBox_user->setObjectName("groupBox_user");
        groupBox_user->setGeometry(QRect(560, 0, 591, 400));
        sizePolicy1.setHeightForWidth(groupBox_user->sizePolicy().hasHeightForWidth());
        groupBox_user->setSizePolicy(sizePolicy1);
        groupBox_user->setStyleSheet(QString::fromUtf8("font: 80 12pt \"MS Shell Dlg 2\";"));
        pushButton_userLogin = new QPushButton(groupBox_user);
        pushButton_userLogin->setObjectName("pushButton_userLogin");
        pushButton_userLogin->setGeometry(QRect(360, 300, 111, 51));
        layoutWidget2 = new QWidget(groupBox_user);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(60, 50, 471, 211));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_userUsername = new QLabel(layoutWidget2);
        label_userUsername->setObjectName("label_userUsername");

        horizontalLayout->addWidget(label_userUsername);

        lineEdit_userUsername = new QLineEdit(layoutWidget2);
        lineEdit_userUsername->setObjectName("lineEdit_userUsername");

        horizontalLayout->addWidget(lineEdit_userUsername);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_userPW = new QLabel(layoutWidget2);
        label_userPW->setObjectName("label_userPW");

        horizontalLayout_2->addWidget(label_userPW);

        lineEdit_userPW = new QLineEdit(layoutWidget2);
        lineEdit_userPW->setObjectName("lineEdit_userPW");
        lineEdit_userPW->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_userPW);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_userRegister = new QPushButton(groupBox_user);
        pushButton_userRegister->setObjectName("pushButton_userRegister");
        pushButton_userRegister->setGeometry(QRect(140, 300, 141, 51));

        horizontalLayout_5->addWidget(groupBox);

        label_welcome = new QLabel(centralwidget);
        label_welcome->setObjectName("label_welcome");
        label_welcome->setGeometry(QRect(-20, 10, 171, 111));
        label_welcome->setScaledContents(true);
        label_welcome_2 = new QLabel(centralwidget);
        label_welcome_2->setObjectName("label_welcome_2");
        label_welcome_2->setGeometry(QRect(380, 0, 581, 131));
        label_welcome_2->setScaledContents(true);
        label_welcome_3 = new QLabel(centralwidget);
        label_welcome_3->setObjectName("label_welcome_3");
        label_welcome_3->setGeometry(QRect(1120, 0, 151, 131));
        label_welcome_3->setScaledContents(true);
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1281, 21));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(lineEdit_userUsername, lineEdit_userPW);
        QWidget::setTabOrder(lineEdit_userPW, pushButton_userRegister);
        QWidget::setTabOrder(pushButton_userRegister, pushButton_userLogin);
        QWidget::setTabOrder(pushButton_userLogin, lineEdit_adminUsername);
        QWidget::setTabOrder(lineEdit_adminUsername, lineEdit_adminPW);
        QWidget::setTabOrder(lineEdit_adminPW, pushButton_adminRegister);
        QWidget::setTabOrder(pushButton_adminRegister, pushButton_adminLogin);
        QWidget::setTabOrder(pushButton_adminLogin, pushButton_loginQuit);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "Status", nullptr));
        pushButton_loginQuit->setText(QCoreApplication::translate("Login", "Quit", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Login", "Admin Page", nullptr));
        pushButton_adminRegister->setText(QCoreApplication::translate("Login", "Creation Account", nullptr));
        pushButton_adminLogin->setText(QCoreApplication::translate("Login", "Connexion", nullptr));
        label_adminUsername->setText(QCoreApplication::translate("Login", "Nom", nullptr));
        label_adminPW->setText(QCoreApplication::translate("Login", "Mot de Pass", nullptr));
        label_adminCode->setText(QCoreApplication::translate("Login", "Code de Centre", nullptr));
        groupBox_user->setTitle(QCoreApplication::translate("Login", "User  page", nullptr));
        pushButton_userLogin->setText(QCoreApplication::translate("Login", "Connexion", nullptr));
        label_userUsername->setText(QCoreApplication::translate("Login", "Nom", nullptr));
        label_userPW->setText(QCoreApplication::translate("Login", "Mot de Pass", nullptr));
        pushButton_userRegister->setText(QCoreApplication::translate("Login", "Creation Account", nullptr));
        label_welcome->setText(QCoreApplication::translate("Login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/img/logo_0_0.png\" /></p></body></html>", nullptr));
        label_welcome_2->setText(QCoreApplication::translate("Login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/img/illustration-s2.png\" /></p></body></html>", nullptr));
        label_welcome_3->setText(QCoreApplication::translate("Login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/img/t1.png\" /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
