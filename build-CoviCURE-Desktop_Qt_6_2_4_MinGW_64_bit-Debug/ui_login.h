/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit_email;
    QLabel *label_11;
    QLineEdit *lineEdit_password;
    QLabel *label_12;
    QPushButton *pushButton_login;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(1200, 700);
        Login->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 181, 189);"));
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(300, 60, 691, 561));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 20px;"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 591, 141));
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
        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setEnabled(true);
        lineEdit_email->setGeometry(QRect(280, 250, 361, 41));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_email->sizePolicy().hasHeightForWidth());
        lineEdit_email->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        lineEdit_email->setFont(font1);
        lineEdit_email->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"font: 16pt \"Segoe UI\";\n"
"\n"
"border-radius: 10px;"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(70, 240, 171, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(26);
        font2.setBold(false);
        font2.setItalic(false);
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("font: 26pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_11->setAlignment(Qt::AlignCenter);
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(280, 350, 361, 41));
        sizePolicy.setHeightForWidth(lineEdit_password->sizePolicy().hasHeightForWidth());
        lineEdit_password->setSizePolicy(sizePolicy);
        lineEdit_password->setFont(font1);
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"font: 16pt \"Segoe UI\";\n"
"\n"
"border-radius: 10px;"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(70, 340, 171, 61));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("font: 26pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_12->setAlignment(Qt::AlignCenter);
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(460, 450, 181, 61));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_login->sizePolicy().hasHeightForWidth());
        pushButton_login->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        pushButton_login->setFont(font3);
        pushButton_login->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.629213 rgba(84, 154, 232, 255));\n"
"font: 14pt \"Arial Rounded MT Bold\";\n"
"border-radius: 6px;"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Login", "<html><head/><body><p>L O G  I N</p></body></html>", nullptr));
        lineEdit_email->setPlaceholderText(QCoreApplication::translate("Login", "  Email", nullptr));
        label_11->setText(QCoreApplication::translate("Login", "Email", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("Login", "  Password", nullptr));
        label_12->setText(QCoreApplication::translate("Login", "Password", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
