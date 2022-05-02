/********************************************************************************
** Form generated from reading UI file 'vaccine_login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VACCINE_LOGIN_H
#define UI_VACCINE_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Vaccine_Login
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *pushButton_login;
    QPushButton *pushButton_register;
    QPushButton *pushButton_back;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Vaccine_Login)
    {
        if (Vaccine_Login->objectName().isEmpty())
            Vaccine_Login->setObjectName(QString::fromUtf8("Vaccine_Login"));
        Vaccine_Login->resize(1200, 700);
        Vaccine_Login->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 181, 189);"));
        groupBox = new QGroupBox(Vaccine_Login);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(180, 30, 891, 621));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 20px;"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 811, 201));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(false);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("font: 600 36pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        label->setAlignment(Qt::AlignCenter);
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(430, 400, 351, 91));
        pushButton_login->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_login->setMouseTracking(false);
        pushButton_login->setStyleSheet(QString::fromUtf8(""));
        pushButton_register = new QPushButton(groupBox);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));
        pushButton_register->setGeometry(QRect(430, 270, 351, 91));
        pushButton_register->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_register->setMouseTracking(false);
        pushButton_register->setStyleSheet(QString::fromUtf8(""));
        pushButton_back = new QPushButton(groupBox);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(550, 530, 231, 61));
        pushButton_back->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_back->setMouseTracking(false);
        pushButton_back->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 280, 231, 71));
        label_2->setStyleSheet(QString::fromUtf8("font: 26pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 410, 231, 71));
        label_3->setStyleSheet(QString::fromUtf8("font: 26pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(Vaccine_Login);

        QMetaObject::connectSlotsByName(Vaccine_Login);
    } // setupUi

    void retranslateUi(QDialog *Vaccine_Login)
    {
        Vaccine_Login->setWindowTitle(QCoreApplication::translate("Vaccine_Login", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Vaccine_Login", "<html><head/><body><p>G E T V A C C I N A T E D</p><p>Protect Yourself and Others</p></body></html>", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Vaccine_Login", "LOG IN", nullptr));
        pushButton_register->setText(QCoreApplication::translate("Vaccine_Login", "REGISTER", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Vaccine_Login", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("Vaccine_Login", "<html><head/><body><p>FOR 1<span style=\" vertical-align:super;\">st</span> DOSE :</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Vaccine_Login", "<html><head/><body><p>FOR 2<span style=\" vertical-align:super;\">nd</span> DOSE :</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vaccine_Login: public Ui_Vaccine_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VACCINE_LOGIN_H
