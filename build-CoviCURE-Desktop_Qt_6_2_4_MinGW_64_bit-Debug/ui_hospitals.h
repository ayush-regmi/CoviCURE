/********************************************************************************
** Form generated from reading UI file 'hospitals.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSPITALS_H
#define UI_HOSPITALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hospitals
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *hos1;
    QPushButton *hos2;
    QPushButton *hos3;
    QPushButton *hos9;
    QPushButton *hos4;
    QPushButton *hos6;
    QPushButton *hos5;
    QPushButton *hos7;
    QPushButton *hos8;
    QLabel *label;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Hospitals)
    {
        if (Hospitals->objectName().isEmpty())
            Hospitals->setObjectName(QString::fromUtf8("Hospitals"));
        Hospitals->resize(1200, 700);
        centralwidget = new QWidget(Hospitals);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 1151, 641));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 20px;"));
        hos1 = new QPushButton(groupBox);
        hos1->setObjectName(QString::fromUtf8("hos1"));
        hos1->setGeometry(QRect(30, 150, 321, 111));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hos1->sizePolicy().hasHeightForWidth());
        hos1->setSizePolicy(sizePolicy);
        hos2 = new QPushButton(groupBox);
        hos2->setObjectName(QString::fromUtf8("hos2"));
        hos2->setGeometry(QRect(390, 150, 321, 111));
        sizePolicy.setHeightForWidth(hos2->sizePolicy().hasHeightForWidth());
        hos2->setSizePolicy(sizePolicy);
        hos3 = new QPushButton(groupBox);
        hos3->setObjectName(QString::fromUtf8("hos3"));
        hos3->setGeometry(QRect(750, 150, 321, 111));
        sizePolicy.setHeightForWidth(hos3->sizePolicy().hasHeightForWidth());
        hos3->setSizePolicy(sizePolicy);
        hos9 = new QPushButton(groupBox);
        hos9->setObjectName(QString::fromUtf8("hos9"));
        hos9->setGeometry(QRect(760, 430, 311, 111));
        sizePolicy.setHeightForWidth(hos9->sizePolicy().hasHeightForWidth());
        hos9->setSizePolicy(sizePolicy);
        hos4 = new QPushButton(groupBox);
        hos4->setObjectName(QString::fromUtf8("hos4"));
        hos4->setGeometry(QRect(30, 290, 321, 111));
        sizePolicy.setHeightForWidth(hos4->sizePolicy().hasHeightForWidth());
        hos4->setSizePolicy(sizePolicy);
        hos6 = new QPushButton(groupBox);
        hos6->setObjectName(QString::fromUtf8("hos6"));
        hos6->setGeometry(QRect(750, 290, 321, 111));
        sizePolicy.setHeightForWidth(hos6->sizePolicy().hasHeightForWidth());
        hos6->setSizePolicy(sizePolicy);
        hos5 = new QPushButton(groupBox);
        hos5->setObjectName(QString::fromUtf8("hos5"));
        hos5->setGeometry(QRect(390, 290, 321, 111));
        sizePolicy.setHeightForWidth(hos5->sizePolicy().hasHeightForWidth());
        hos5->setSizePolicy(sizePolicy);
        hos7 = new QPushButton(groupBox);
        hos7->setObjectName(QString::fromUtf8("hos7"));
        hos7->setGeometry(QRect(30, 430, 321, 111));
        sizePolicy.setHeightForWidth(hos7->sizePolicy().hasHeightForWidth());
        hos7->setSizePolicy(sizePolicy);
        hos8 = new QPushButton(groupBox);
        hos8->setObjectName(QString::fromUtf8("hos8"));
        hos8->setGeometry(QRect(390, 430, 321, 111));
        sizePolicy.setHeightForWidth(hos8->sizePolicy().hasHeightForWidth());
        hos8->setSizePolicy(sizePolicy);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 1041, 91));
        label->setStyleSheet(QString::fromUtf8("font: 600 36pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        back = new QPushButton(groupBox);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(30, 570, 171, 51));
        Hospitals->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Hospitals);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 17));
        Hospitals->setMenuBar(menubar);
        statusbar = new QStatusBar(Hospitals);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Hospitals->setStatusBar(statusbar);

        retranslateUi(Hospitals);

        QMetaObject::connectSlotsByName(Hospitals);
    } // setupUi

    void retranslateUi(QMainWindow *Hospitals)
    {
        Hospitals->setWindowTitle(QCoreApplication::translate("Hospitals", "MainWindow", nullptr));
        hos1->setText(QCoreApplication::translate("Hospitals", "hos1", nullptr));
        hos2->setText(QCoreApplication::translate("Hospitals", "hos2", nullptr));
        hos3->setText(QCoreApplication::translate("Hospitals", "hos3", nullptr));
        hos9->setText(QCoreApplication::translate("Hospitals", "PushButton", nullptr));
        hos4->setText(QCoreApplication::translate("Hospitals", "PushButton", nullptr));
        hos6->setText(QCoreApplication::translate("Hospitals", "PushButton", nullptr));
        hos5->setText(QCoreApplication::translate("Hospitals", "PushButton", nullptr));
        hos7->setText(QCoreApplication::translate("Hospitals", "PushButton", nullptr));
        hos8->setText(QCoreApplication::translate("Hospitals", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("Hospitals", "<html><head/><body><p>Book a Hospital</p></body></html>", nullptr));
        back->setText(QCoreApplication::translate("Hospitals", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hospitals: public Ui_Hospitals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSPITALS_H
