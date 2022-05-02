/********************************************************************************
** Form generated from reading UI file 'quepage1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEPAGE1_H
#define UI_QUEPAGE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Quepage1
{
public:
    QGroupBox *groupbox_quepage1;
    QLabel *que1;
    QPushButton *que1_opt1;
    QPushButton *que1_opt2;
    QPushButton *que1_opt3;
    QPushButton *que1_opt4;
    QLabel *que2;
    QPushButton *que2_opt1;
    QPushButton *que2_opt2;
    QPushButton *que2_opt3;
    QPushButton *que2_opt4;
    QLabel *que3;
    QPushButton *que3_opt1;
    QPushButton *que3_opt2;
    QPushButton *back_quepage1;
    QPushButton *next_quepage1;

    void setupUi(QDialog *Quepage1)
    {
        if (Quepage1->objectName().isEmpty())
            Quepage1->setObjectName(QString::fromUtf8("Quepage1"));
        Quepage1->resize(1200, 700);
        Quepage1->setStyleSheet(QString::fromUtf8(""));
        groupbox_quepage1 = new QGroupBox(Quepage1);
        groupbox_quepage1->setObjectName(QString::fromUtf8("groupbox_quepage1"));
        groupbox_quepage1->setGeometry(QRect(60, 20, 1161, 661));
        groupbox_quepage1->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 20px;"));
        groupbox_quepage1->setAlignment(Qt::AlignCenter);
        que1 = new QLabel(groupbox_quepage1);
        que1->setObjectName(QString::fromUtf8("que1"));
        que1->setGeometry(QRect(240, 20, 631, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(false);
        font.setStrikeOut(false);
        que1->setFont(font);
        que1->setLayoutDirection(Qt::LeftToRight);
        que1->setAutoFillBackground(false);
        que1->setStyleSheet(QString::fromUtf8("font: 600 36pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        que1->setAlignment(Qt::AlignCenter);
        que1_opt1 = new QPushButton(groupbox_quepage1);
        que1_opt1->setObjectName(QString::fromUtf8("que1_opt1"));
        que1_opt1->setGeometry(QRect(20, 120, 231, 51));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(que1_opt1->sizePolicy().hasHeightForWidth());
        que1_opt1->setSizePolicy(sizePolicy);
        que1_opt1->setStyleSheet(QString::fromUtf8("font: 600  20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        que1_opt2 = new QPushButton(groupbox_quepage1);
        que1_opt2->setObjectName(QString::fromUtf8("que1_opt2"));
        que1_opt2->setGeometry(QRect(300, 120, 231, 51));
        sizePolicy.setHeightForWidth(que1_opt2->sizePolicy().hasHeightForWidth());
        que1_opt2->setSizePolicy(sizePolicy);
        que1_opt2->setStyleSheet(QString::fromUtf8("font: 600  20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        que1_opt3 = new QPushButton(groupbox_quepage1);
        que1_opt3->setObjectName(QString::fromUtf8("que1_opt3"));
        que1_opt3->setGeometry(QRect(580, 120, 231, 51));
        sizePolicy.setHeightForWidth(que1_opt3->sizePolicy().hasHeightForWidth());
        que1_opt3->setSizePolicy(sizePolicy);
        que1_opt3->setStyleSheet(QString::fromUtf8("font: 600  20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        que1_opt4 = new QPushButton(groupbox_quepage1);
        que1_opt4->setObjectName(QString::fromUtf8("que1_opt4"));
        que1_opt4->setGeometry(QRect(860, 120, 231, 51));
        sizePolicy.setHeightForWidth(que1_opt4->sizePolicy().hasHeightForWidth());
        que1_opt4->setSizePolicy(sizePolicy);
        que1_opt4->setStyleSheet(QString::fromUtf8("font: 600  20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        que2 = new QLabel(groupbox_quepage1);
        que2->setObjectName(QString::fromUtf8("que2"));
        que2->setGeometry(QRect(160, 220, 881, 61));
        que2->setFont(font);
        que2->setLayoutDirection(Qt::LeftToRight);
        que2->setAutoFillBackground(false);
        que2->setStyleSheet(QString::fromUtf8("font: 600 36pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        que2->setAlignment(Qt::AlignCenter);
        que2_opt1 = new QPushButton(groupbox_quepage1);
        que2_opt1->setObjectName(QString::fromUtf8("que2_opt1"));
        que2_opt1->setGeometry(QRect(30, 320, 231, 51));
        sizePolicy.setHeightForWidth(que2_opt1->sizePolicy().hasHeightForWidth());
        que2_opt1->setSizePolicy(sizePolicy);
        que2_opt1->setStyleSheet(QString::fromUtf8("font: 600  20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        que2_opt2 = new QPushButton(groupbox_quepage1);
        que2_opt2->setObjectName(QString::fromUtf8("que2_opt2"));
        que2_opt2->setGeometry(QRect(300, 320, 231, 51));
        sizePolicy.setHeightForWidth(que2_opt2->sizePolicy().hasHeightForWidth());
        que2_opt2->setSizePolicy(sizePolicy);
        que2_opt2->setStyleSheet(QString::fromUtf8("font: 600  20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        que2_opt3 = new QPushButton(groupbox_quepage1);
        que2_opt3->setObjectName(QString::fromUtf8("que2_opt3"));
        que2_opt3->setGeometry(QRect(590, 320, 231, 51));
        sizePolicy.setHeightForWidth(que2_opt3->sizePolicy().hasHeightForWidth());
        que2_opt3->setSizePolicy(sizePolicy);
        que2_opt3->setStyleSheet(QString::fromUtf8("font: 600  20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        que2_opt4 = new QPushButton(groupbox_quepage1);
        que2_opt4->setObjectName(QString::fromUtf8("que2_opt4"));
        que2_opt4->setGeometry(QRect(880, 320, 231, 51));
        sizePolicy.setHeightForWidth(que2_opt4->sizePolicy().hasHeightForWidth());
        que2_opt4->setSizePolicy(sizePolicy);
        que2_opt4->setStyleSheet(QString::fromUtf8("font: 600  20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        que3 = new QLabel(groupbox_quepage1);
        que3->setObjectName(QString::fromUtf8("que3"));
        que3->setGeometry(QRect(230, 410, 671, 61));
        que3->setFont(font);
        que3->setLayoutDirection(Qt::LeftToRight);
        que3->setAutoFillBackground(false);
        que3->setStyleSheet(QString::fromUtf8("font: 600 36pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        que3->setAlignment(Qt::AlignCenter);
        que3_opt1 = new QPushButton(groupbox_quepage1);
        que3_opt1->setObjectName(QString::fromUtf8("que3_opt1"));
        que3_opt1->setGeometry(QRect(290, 510, 231, 51));
        sizePolicy.setHeightForWidth(que3_opt1->sizePolicy().hasHeightForWidth());
        que3_opt1->setSizePolicy(sizePolicy);
        que3_opt1->setStyleSheet(QString::fromUtf8("font: 600  20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        que3_opt2 = new QPushButton(groupbox_quepage1);
        que3_opt2->setObjectName(QString::fromUtf8("que3_opt2"));
        que3_opt2->setGeometry(QRect(640, 510, 231, 51));
        sizePolicy.setHeightForWidth(que3_opt2->sizePolicy().hasHeightForWidth());
        que3_opt2->setSizePolicy(sizePolicy);
        que3_opt2->setStyleSheet(QString::fromUtf8("font: 600  20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        back_quepage1 = new QPushButton(groupbox_quepage1);
        back_quepage1->setObjectName(QString::fromUtf8("back_quepage1"));
        back_quepage1->setGeometry(QRect(30, 600, 191, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(back_quepage1->sizePolicy().hasHeightForWidth());
        back_quepage1->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        back_quepage1->setFont(font1);
        back_quepage1->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));\n"
"font: 20pt \"Arial Rounded MT Bold\";\n"
"border-radius: 5px;\n"
"color: rgb(255, 255, 255);"));
        next_quepage1 = new QPushButton(groupbox_quepage1);
        next_quepage1->setObjectName(QString::fromUtf8("next_quepage1"));
        next_quepage1->setGeometry(QRect(930, 600, 191, 41));
        sizePolicy1.setHeightForWidth(next_quepage1->sizePolicy().hasHeightForWidth());
        next_quepage1->setSizePolicy(sizePolicy1);
        next_quepage1->setFont(font1);
        next_quepage1->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));\n"
"font: 20pt \"Arial Rounded MT Bold\";\n"
"border-radius: 5px;\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(Quepage1);

        QMetaObject::connectSlotsByName(Quepage1);
    } // setupUi

    void retranslateUi(QDialog *Quepage1)
    {
        Quepage1->setWindowTitle(QCoreApplication::translate("Quepage1", "Dialog", nullptr));
        groupbox_quepage1->setTitle(QString());
        que1->setText(QCoreApplication::translate("Quepage1", "<html><head/><body><p>Choose Your Age Group:</p></body></html>", nullptr));
        que1_opt1->setText(QCoreApplication::translate("Quepage1", "0-17", nullptr));
        que1_opt2->setText(QCoreApplication::translate("Quepage1", "18-44", nullptr));
        que1_opt3->setText(QCoreApplication::translate("Quepage1", "45-64", nullptr));
        que1_opt4->setText(QCoreApplication::translate("Quepage1", "Above 65", nullptr));
        que2->setText(QCoreApplication::translate("Quepage1", "<html><head/><body><p>Choose Your Body Temperature Range:</p></body></html>", nullptr));
        que2_opt1->setText(QCoreApplication::translate("Quepage1", "97-98.6\302\260F", nullptr));
        que2_opt2->setText(QCoreApplication::translate("Quepage1", "99-100\302\260F", nullptr));
        que2_opt3->setText(QCoreApplication::translate("Quepage1", "100-101\302\260F", nullptr));
        que2_opt4->setText(QCoreApplication::translate("Quepage1", "Above 102\302\260F", nullptr));
        que3->setText(QCoreApplication::translate("Quepage1", "<html><head/><body><p>Select Your Gender:</p></body></html>", nullptr));
        que3_opt1->setText(QCoreApplication::translate("Quepage1", "Male", nullptr));
        que3_opt2->setText(QCoreApplication::translate("Quepage1", "Female", nullptr));
        back_quepage1->setText(QCoreApplication::translate("Quepage1", "Back", nullptr));
        next_quepage1->setText(QCoreApplication::translate("Quepage1", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quepage1: public Ui_Quepage1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEPAGE1_H
