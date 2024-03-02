/********************************************************************************
** Form generated from reading UI file 'UserDialog1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDIALOG1_H
#define UI_USERDIALOG1_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserDialog1
{
public:
    QLabel *label_chooseVaccine;
    QLabel *label_userP1;
    QComboBox *comboBox_hours;
    QDateEdit *dateEdit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_Jonson;
    QRadioButton *radioButton_moderna;
    QRadioButton *radioButton_pfizer;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_under18;
    QRadioButton *radioButton_over18;
    QRadioButton *radioButton_over50;
    QRadioButton *radioButton_over65;
    QLabel *label_vaccine_version;
    QLabel *label_shot;
    QLabel *label_age;
    QLabel *label;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_in_number;
    QLineEdit *lineEdit_insurNum;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_fName;
    QLineEdit *lineEdit_fName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_lName;
    QLineEdit *lineEdit_lName;
    QPushButton *pushButton_userNextPage;
    QPushButton *pushButton_retour;
    QLabel *label_2;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_secondShot;
    QRadioButton *radioButton_firstShot;
    QLabel *label_13;

    void setupUi(QDialog *UserDialog1)
    {
        if (UserDialog1->objectName().isEmpty())
            UserDialog1->setObjectName("UserDialog1");
        UserDialog1->resize(1359, 972);
        label_chooseVaccine = new QLabel(UserDialog1);
        label_chooseVaccine->setObjectName("label_chooseVaccine");
        label_chooseVaccine->setGeometry(QRect(40, 30, 1221, 261));
        label_chooseVaccine->setContextMenuPolicy(Qt::NoContextMenu);
        label_chooseVaccine->setAutoFillBackground(false);
        label_chooseVaccine->setFrameShape(QFrame::Box);
        label_chooseVaccine->setTextFormat(Qt::AutoText);
        label_chooseVaccine->setPixmap(QPixmap(QString::fromUtf8(":/img/cc.png")));
        label_userP1 = new QLabel(UserDialog1);
        label_userP1->setObjectName("label_userP1");
        label_userP1->setGeometry(QRect(90, 850, 421, 41));
        label_userP1->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));
        comboBox_hours = new QComboBox(UserDialog1);
        comboBox_hours->addItem(QString());
        comboBox_hours->addItem(QString());
        comboBox_hours->addItem(QString());
        comboBox_hours->addItem(QString());
        comboBox_hours->addItem(QString());
        comboBox_hours->addItem(QString());
        comboBox_hours->addItem(QString());
        comboBox_hours->addItem(QString());
        comboBox_hours->addItem(QString());
        comboBox_hours->addItem(QString());
        comboBox_hours->addItem(QString());
        comboBox_hours->addItem(QString());
        comboBox_hours->addItem(QString());
        comboBox_hours->addItem(QString());
        comboBox_hours->setObjectName("comboBox_hours");
        comboBox_hours->setGeometry(QRect(760, 780, 294, 41));
        comboBox_hours->setMaximumSize(QSize(294, 41));
        comboBox_hours->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        dateEdit = new QDateEdit(UserDialog1);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(190, 780, 301, 51));
        dateEdit->setLayoutDirection(Qt::LeftToRight);
        dateEdit->setAutoFillBackground(true);
        dateEdit->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        dateEdit->setFrame(true);
        dateEdit->setKeyboardTracking(true);
        dateEdit->setMaximumDateTime(QDateTime(QDate(2026, 8, 31), QTime(23, 59, 59)));
        dateEdit->setMinimumDateTime(QDateTime(QDate(2023, 5, 24), QTime(0, 0, 0)));
        dateEdit->setMaximumDate(QDate(2026, 8, 31));
        dateEdit->setMinimumDate(QDate(2023, 5, 24));
        dateEdit->setMinimumTime(QTime(0, 0, 0));
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2023, 5, 24));
        layoutWidget = new QWidget(UserDialog1);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 600, 471, 168));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_Jonson = new QRadioButton(layoutWidget);
        radioButton_Jonson->setObjectName("radioButton_Jonson");
        radioButton_Jonson->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        verticalLayout_3->addWidget(radioButton_Jonson);

        radioButton_moderna = new QRadioButton(layoutWidget);
        radioButton_moderna->setObjectName("radioButton_moderna");
        radioButton_moderna->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        verticalLayout_3->addWidget(radioButton_moderna);

        radioButton_pfizer = new QRadioButton(layoutWidget);
        radioButton_pfizer->setObjectName("radioButton_pfizer");
        radioButton_pfizer->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        verticalLayout_3->addWidget(radioButton_pfizer);

        layoutWidget1 = new QWidget(UserDialog1);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(620, 330, 616, 211));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_under18 = new QRadioButton(layoutWidget1);
        radioButton_under18->setObjectName("radioButton_under18");
        radioButton_under18->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(radioButton_under18);

        radioButton_over18 = new QRadioButton(layoutWidget1);
        radioButton_over18->setObjectName("radioButton_over18");
        radioButton_over18->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(radioButton_over18);

        radioButton_over50 = new QRadioButton(layoutWidget1);
        radioButton_over50->setObjectName("radioButton_over50");
        radioButton_over50->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(radioButton_over50);

        radioButton_over65 = new QRadioButton(layoutWidget1);
        radioButton_over65->setObjectName("radioButton_over65");
        radioButton_over65->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(radioButton_over65);

        label_vaccine_version = new QLabel(UserDialog1);
        label_vaccine_version->setObjectName("label_vaccine_version");
        label_vaccine_version->setGeometry(QRect(80, 550, 211, 51));
        label_vaccine_version->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        label_shot = new QLabel(UserDialog1);
        label_shot->setObjectName("label_shot");
        label_shot->setGeometry(QRect(640, 560, 161, 41));
        label_shot->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        label_age = new QLabel(UserDialog1);
        label_age->setObjectName("label_age");
        label_age->setGeometry(QRect(630, 310, 121, 41));
        label_age->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        label = new QLabel(UserDialog1);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 790, 71, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        layoutWidget2 = new QWidget(UserDialog1);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(80, 330, 491, 201));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_in_number = new QLabel(layoutWidget2);
        label_in_number->setObjectName("label_in_number");
        label_in_number->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(label_in_number);

        lineEdit_insurNum = new QLineEdit(layoutWidget2);
        lineEdit_insurNum->setObjectName("lineEdit_insurNum");
        lineEdit_insurNum->setFont(font);

        horizontalLayout->addWidget(lineEdit_insurNum);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_fName = new QLabel(layoutWidget2);
        label_fName->setObjectName("label_fName");
        label_fName->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(label_fName);

        lineEdit_fName = new QLineEdit(layoutWidget2);
        lineEdit_fName->setObjectName("lineEdit_fName");
        lineEdit_fName->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_fName);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_lName = new QLabel(layoutWidget2);
        label_lName->setObjectName("label_lName");
        label_lName->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(label_lName);

        lineEdit_lName = new QLineEdit(layoutWidget2);
        lineEdit_lName->setObjectName("lineEdit_lName");
        lineEdit_lName->setFont(font);

        horizontalLayout_3->addWidget(lineEdit_lName);


        verticalLayout_4->addLayout(horizontalLayout_3);

        pushButton_userNextPage = new QPushButton(UserDialog1);
        pushButton_userNextPage->setObjectName("pushButton_userNextPage");
        pushButton_userNextPage->setGeometry(QRect(1180, 870, 121, 51));
        pushButton_userNextPage->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        pushButton_retour = new QPushButton(UserDialog1);
        pushButton_retour->setObjectName("pushButton_retour");
        pushButton_retour->setGeometry(QRect(1030, 870, 131, 51));
        pushButton_retour->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(UserDialog1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(550, 780, 201, 41));
        label_2->setFont(font);
        layoutWidget3 = new QWidget(UserDialog1);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(630, 600, 469, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_secondShot = new QRadioButton(layoutWidget3);
        radioButton_secondShot->setObjectName("radioButton_secondShot");
        radioButton_secondShot->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(radioButton_secondShot);

        radioButton_firstShot = new QRadioButton(layoutWidget3);
        radioButton_firstShot->setObjectName("radioButton_firstShot");
        radioButton_firstShot->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(radioButton_firstShot);

        label_13 = new QLabel(UserDialog1);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(1110, 540, 261, 241));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setFocusPolicy(Qt::StrongFocus);
        label_13->setContextMenuPolicy(Qt::CustomContextMenu);
        label_13->setAcceptDrops(true);
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/img/cc9976.png")));
        label_13->setWordWrap(false);

        retranslateUi(UserDialog1);

        QMetaObject::connectSlotsByName(UserDialog1);
    } // setupUi

    void retranslateUi(QDialog *UserDialog1)
    {
        UserDialog1->setWindowTitle(QCoreApplication::translate("UserDialog1", "Dialog", nullptr));
        label_chooseVaccine->setText(QString());
        label_userP1->setText(QCoreApplication::translate("UserDialog1", "TextLabel", nullptr));
        comboBox_hours->setItemText(0, QCoreApplication::translate("UserDialog1", "9:30-10:00 a.m.", nullptr));
        comboBox_hours->setItemText(1, QCoreApplication::translate("UserDialog1", "9:00-9:30 a.m.", nullptr));
        comboBox_hours->setItemText(2, QCoreApplication::translate("UserDialog1", "10:00-10:30 a.m.", nullptr));
        comboBox_hours->setItemText(3, QCoreApplication::translate("UserDialog1", "10:30-11:00 a.m.", nullptr));
        comboBox_hours->setItemText(4, QCoreApplication::translate("UserDialog1", "11:00-11:30 a.m.", nullptr));
        comboBox_hours->setItemText(5, QCoreApplication::translate("UserDialog1", "11:30-12:00 P.m.", nullptr));
        comboBox_hours->setItemText(6, QCoreApplication::translate("UserDialog1", "12:00-12:30 p.m.", nullptr));
        comboBox_hours->setItemText(7, QCoreApplication::translate("UserDialog1", "12:30-1:00 p.m.", nullptr));
        comboBox_hours->setItemText(8, QCoreApplication::translate("UserDialog1", "1:00-1:30 p.m.", nullptr));
        comboBox_hours->setItemText(9, QCoreApplication::translate("UserDialog1", "1:30-2:00 p.m.", nullptr));
        comboBox_hours->setItemText(10, QCoreApplication::translate("UserDialog1", "2:00-2:30 p.m.", nullptr));
        comboBox_hours->setItemText(11, QCoreApplication::translate("UserDialog1", "2:30-3:30 p.m.", nullptr));
        comboBox_hours->setItemText(12, QCoreApplication::translate("UserDialog1", "3:30-4:00 p.m.", nullptr));
        comboBox_hours->setItemText(13, QString());

#if QT_CONFIG(whatsthis)
        dateEdit->setWhatsThis(QCoreApplication::translate("UserDialog1", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        dateEdit->setDisplayFormat(QCoreApplication::translate("UserDialog1", "MM/dd/yyyy", nullptr));
        radioButton_Jonson->setText(QCoreApplication::translate("UserDialog1", "Sinopharm ", nullptr));
        radioButton_moderna->setText(QCoreApplication::translate("UserDialog1", "Astrazeneca", nullptr));
        radioButton_pfizer->setText(QCoreApplication::translate("UserDialog1", "Pfizer-BioNTech", nullptr));
        radioButton_under18->setText(QCoreApplication::translate("UserDialog1", "Moins de  18", nullptr));
        radioButton_over18->setText(QCoreApplication::translate("UserDialog1", "Entre 18~50", nullptr));
        radioButton_over50->setText(QCoreApplication::translate("UserDialog1", "Plus Que 50", nullptr));
        radioButton_over65->setText(QCoreApplication::translate("UserDialog1", "Plus Que 65", nullptr));
        label_vaccine_version->setText(QCoreApplication::translate("UserDialog1", "Type de Vaccin :", nullptr));
        label_shot->setText(QCoreApplication::translate("UserDialog1", "Dose :", nullptr));
        label_age->setText(QCoreApplication::translate("UserDialog1", "Age", nullptr));
        label->setText(QCoreApplication::translate("UserDialog1", "Date ", nullptr));
        label_in_number->setText(QCoreApplication::translate("UserDialog1", "CNIE", nullptr));
        label_fName->setText(QCoreApplication::translate("UserDialog1", "Nom", nullptr));
        label_lName->setText(QCoreApplication::translate("UserDialog1", "Prenom", nullptr));
        pushButton_userNextPage->setText(QCoreApplication::translate("UserDialog1", "Enregistrer", nullptr));
        pushButton_retour->setText(QCoreApplication::translate("UserDialog1", "Retour", nullptr));
        label_2->setText(QCoreApplication::translate("UserDialog1", "Heure de Vaccination", nullptr));
        radioButton_secondShot->setText(QCoreApplication::translate("UserDialog1", "Premiere Dose", nullptr));
        radioButton_firstShot->setText(QCoreApplication::translate("UserDialog1", "Deuxieme Dose", nullptr));
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserDialog1: public Ui_UserDialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDIALOG1_H
