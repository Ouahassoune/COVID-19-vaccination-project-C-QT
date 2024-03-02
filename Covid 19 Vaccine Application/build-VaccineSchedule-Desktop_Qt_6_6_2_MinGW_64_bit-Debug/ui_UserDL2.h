/********************************************************************************
** Form generated from reading UI file 'UserDL2.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDL2_H
#define UI_USERDL2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserDL2
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCalendarWidget *calendarWidget_date;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_confirm;

    void setupUi(QDialog *UserDL2)
    {
        if (UserDL2->objectName().isEmpty())
            UserDL2->setObjectName("UserDL2");
        UserDL2->resize(1341, 776);
        verticalLayout_2 = new QVBoxLayout(UserDL2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        calendarWidget_date = new QCalendarWidget(UserDL2);
        calendarWidget_date->setObjectName("calendarWidget_date");
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        calendarWidget_date->setFont(font);
        calendarWidget_date->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";\n"
"alternate-background-color: rgb(170, 170, 0);"));

        horizontalLayout->addWidget(calendarWidget_date);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(UserDL2);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/vaccinePic2.jfif")));
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        verticalLayout->addWidget(label);

        pushButton_confirm = new QPushButton(UserDL2);
        pushButton_confirm->setObjectName("pushButton_confirm");
        pushButton_confirm->setStyleSheet(QString::fromUtf8("font: 75 16pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(pushButton_confirm);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(UserDL2);

        QMetaObject::connectSlotsByName(UserDL2);
    } // setupUi

    void retranslateUi(QDialog *UserDL2)
    {
        UserDL2->setWindowTitle(QCoreApplication::translate("UserDL2", "Dialog", nullptr));
        label->setText(QString());
        pushButton_confirm->setText(QCoreApplication::translate("UserDL2", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserDL2: public Ui_UserDL2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDL2_H
