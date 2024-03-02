/********************************************************************************
** Form generated from reading UI file 'AdminDialog1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDIALOG1_H
#define UI_ADMINDIALOG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDialog1
{
public:
    QListView *listView;
    QPushButton *pushButton_loadInfo;
    QComboBox *comboBox;
    QPushButton *pushButton_save;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_update;
    QLabel *label_11;
    QTableView *tableView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_save_2;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_save_3;
    QLineEdit *lineEdit_pw;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_save_4;
    QLineEdit *lineEdit_insur;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_save_5;
    QLineEdit *lineEdit_fName;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_save_9;
    QLineEdit *lineEdit_lName;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_save_7;
    QLineEdit *lineEdit_age;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_save_8;
    QLineEdit *lineEdit_vaccine;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_save_10;
    QLineEdit *lineEdit_shot;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_save_11;
    QLineEdit *lineEdit_date;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_save_12;
    QLineEdit *lineEdit_time;
    QPushButton *pushButton_quit;
    QPushButton *pushButton_retour;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QDialog *AdminDialog1)
    {
        if (AdminDialog1->objectName().isEmpty())
            AdminDialog1->setObjectName("AdminDialog1");
        AdminDialog1->resize(1429, 804);
        listView = new QListView(AdminDialog1);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(580, 190, 161, 391));
        listView->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_loadInfo = new QPushButton(AdminDialog1);
        pushButton_loadInfo->setObjectName("pushButton_loadInfo");
        pushButton_loadInfo->setGeometry(QRect(950, 720, 151, 61));
        pushButton_loadInfo->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        comboBox = new QComboBox(AdminDialog1);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(630, 280, 16, 16));
        comboBox->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        pushButton_save = new QPushButton(AdminDialog1);
        pushButton_save->setObjectName("pushButton_save");
        pushButton_save->setGeometry(QRect(430, 120, 111, 61));
        pushButton_save->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        pushButton_delete = new QPushButton(AdminDialog1);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setGeometry(QRect(430, 460, 111, 51));
        pushButton_delete->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        pushButton_update = new QPushButton(AdminDialog1);
        pushButton_update->setObjectName("pushButton_update");
        pushButton_update->setGeometry(QRect(430, 300, 111, 61));
        pushButton_update->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        label_11 = new QLabel(AdminDialog1);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(370, 540, 471, 271));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setFocusPolicy(Qt::StrongFocus);
        label_11->setContextMenuPolicy(Qt::CustomContextMenu);
        label_11->setAcceptDrops(true);
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/img/vaccine.png")));
        label_11->setWordWrap(false);
        tableView = new QTableView(AdminDialog1);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(760, 10, 641, 691));
        tableView->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";"));
        layoutWidget = new QWidget(AdminDialog1);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 20, 341, 781));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_save_2 = new QPushButton(layoutWidget);
        pushButton_save_2->setObjectName("pushButton_save_2");
        pushButton_save_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(pushButton_save_2);

        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(lineEdit_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_save_3 = new QPushButton(layoutWidget);
        pushButton_save_3->setObjectName("pushButton_save_3");
        pushButton_save_3->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(pushButton_save_3);

        lineEdit_pw = new QLineEdit(layoutWidget);
        lineEdit_pw->setObjectName("lineEdit_pw");
        lineEdit_pw->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(lineEdit_pw);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_save_4 = new QPushButton(layoutWidget);
        pushButton_save_4->setObjectName("pushButton_save_4");
        pushButton_save_4->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_6->addWidget(pushButton_save_4);

        lineEdit_insur = new QLineEdit(layoutWidget);
        lineEdit_insur->setObjectName("lineEdit_insur");
        lineEdit_insur->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_6->addWidget(lineEdit_insur);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_save_5 = new QPushButton(layoutWidget);
        pushButton_save_5->setObjectName("pushButton_save_5");
        pushButton_save_5->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(pushButton_save_5);

        lineEdit_fName = new QLineEdit(layoutWidget);
        lineEdit_fName->setObjectName("lineEdit_fName");
        lineEdit_fName->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(lineEdit_fName);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_save_9 = new QPushButton(layoutWidget);
        pushButton_save_9->setObjectName("pushButton_save_9");
        pushButton_save_9->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_4->addWidget(pushButton_save_9);

        lineEdit_lName = new QLineEdit(layoutWidget);
        lineEdit_lName->setObjectName("lineEdit_lName");
        lineEdit_lName->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_4->addWidget(lineEdit_lName);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_save_7 = new QPushButton(layoutWidget);
        pushButton_save_7->setObjectName("pushButton_save_7");
        pushButton_save_7->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_7->addWidget(pushButton_save_7);

        lineEdit_age = new QLineEdit(layoutWidget);
        lineEdit_age->setObjectName("lineEdit_age");
        lineEdit_age->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_7->addWidget(lineEdit_age);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_save_8 = new QPushButton(layoutWidget);
        pushButton_save_8->setObjectName("pushButton_save_8");
        pushButton_save_8->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_5->addWidget(pushButton_save_8);

        lineEdit_vaccine = new QLineEdit(layoutWidget);
        lineEdit_vaccine->setObjectName("lineEdit_vaccine");
        lineEdit_vaccine->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_5->addWidget(lineEdit_vaccine);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton_save_10 = new QPushButton(layoutWidget);
        pushButton_save_10->setObjectName("pushButton_save_10");
        pushButton_save_10->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_8->addWidget(pushButton_save_10);

        lineEdit_shot = new QLineEdit(layoutWidget);
        lineEdit_shot->setObjectName("lineEdit_shot");
        lineEdit_shot->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_8->addWidget(lineEdit_shot);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        pushButton_save_11 = new QPushButton(layoutWidget);
        pushButton_save_11->setObjectName("pushButton_save_11");
        pushButton_save_11->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_9->addWidget(pushButton_save_11);

        lineEdit_date = new QLineEdit(layoutWidget);
        lineEdit_date->setObjectName("lineEdit_date");
        lineEdit_date->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_9->addWidget(lineEdit_date);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        pushButton_save_12 = new QPushButton(layoutWidget);
        pushButton_save_12->setObjectName("pushButton_save_12");
        pushButton_save_12->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_10->addWidget(pushButton_save_12);

        lineEdit_time = new QLineEdit(layoutWidget);
        lineEdit_time->setObjectName("lineEdit_time");
        lineEdit_time->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));

        horizontalLayout_10->addWidget(lineEdit_time);


        verticalLayout->addLayout(horizontalLayout_10);

        pushButton_quit = new QPushButton(AdminDialog1);
        pushButton_quit->setObjectName("pushButton_quit");
        pushButton_quit->setGeometry(QRect(1130, 720, 151, 61));
        pushButton_quit->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        pushButton_retour = new QPushButton(AdminDialog1);
        pushButton_retour->setObjectName("pushButton_retour");
        pushButton_retour->setGeometry(QRect(790, 720, 151, 61));
        pushButton_retour->setStyleSheet(QString::fromUtf8("font: 75 14pt \"MS Shell Dlg 2\";"));
        label_12 = new QLabel(AdminDialog1);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(510, 10, 251, 251));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFocusPolicy(Qt::StrongFocus);
        label_12->setContextMenuPolicy(Qt::CustomContextMenu);
        label_12->setAcceptDrops(true);
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/img/HCW.png")));
        label_12->setWordWrap(false);
        label_13 = new QLabel(AdminDialog1);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(1220, 590, 261, 241));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setFocusPolicy(Qt::StrongFocus);
        label_13->setContextMenuPolicy(Qt::CustomContextMenu);
        label_13->setAcceptDrops(true);
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/img/cc9976.png")));
        label_13->setWordWrap(false);
        label_13->raise();
        label_12->raise();
        pushButton_loadInfo->raise();
        pushButton_save->raise();
        pushButton_delete->raise();
        pushButton_update->raise();
        label_11->raise();
        tableView->raise();
        layoutWidget->raise();
        pushButton_quit->raise();
        pushButton_retour->raise();
        comboBox->raise();
        listView->raise();

        retranslateUi(AdminDialog1);

        QMetaObject::connectSlotsByName(AdminDialog1);
    } // setupUi

    void retranslateUi(QDialog *AdminDialog1)
    {
        AdminDialog1->setWindowTitle(QCoreApplication::translate("AdminDialog1", "Dialog", nullptr));
        pushButton_loadInfo->setText(QCoreApplication::translate("AdminDialog1", "Load Data", nullptr));
        pushButton_save->setText(QCoreApplication::translate("AdminDialog1", "Save", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("AdminDialog1", "Delete", nullptr));
        pushButton_update->setText(QCoreApplication::translate("AdminDialog1", "Update", nullptr));
        label_11->setText(QString());
        pushButton_save_2->setText(QCoreApplication::translate("AdminDialog1", "Username", nullptr));
        pushButton_save_3->setText(QCoreApplication::translate("AdminDialog1", "Password", nullptr));
        pushButton_save_4->setText(QCoreApplication::translate("AdminDialog1", "CNIE", nullptr));
        pushButton_save_5->setText(QCoreApplication::translate("AdminDialog1", "Nom", nullptr));
        pushButton_save_9->setText(QCoreApplication::translate("AdminDialog1", "Prenom", nullptr));
        pushButton_save_7->setText(QCoreApplication::translate("AdminDialog1", "Age", nullptr));
        pushButton_save_8->setText(QCoreApplication::translate("AdminDialog1", "Vaccin", nullptr));
        pushButton_save_10->setText(QCoreApplication::translate("AdminDialog1", "Dose", nullptr));
        pushButton_save_11->setText(QCoreApplication::translate("AdminDialog1", "Date", nullptr));
        pushButton_save_12->setText(QCoreApplication::translate("AdminDialog1", "Time", nullptr));
        pushButton_quit->setText(QCoreApplication::translate("AdminDialog1", "Quit", nullptr));
        pushButton_retour->setText(QCoreApplication::translate("AdminDialog1", "Retour", nullptr));
        label_12->setText(QString());
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminDialog1: public Ui_AdminDialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG1_H
