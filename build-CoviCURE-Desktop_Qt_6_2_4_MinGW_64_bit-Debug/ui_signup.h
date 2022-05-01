/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QGroupBox *groupBox;
    QLabel *Signup_2;
    QPushButton *pushButton_signup;
    QLabel *Email;
    QLabel *Fname;
    QLineEdit *Phone_2;
    QLabel *Password;
    QLabel *RePassword;
    QLabel *Phone;
    QLineEdit *Fname_2;
    QLabel *Sname;
    QLineEdit *Sname_2;
    QLineEdit *Email_2;
    QLineEdit *RePassword_2;
    QLineEdit *Password_2;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName(QString::fromUtf8("Signup"));
        Signup->resize(1200, 700);
        Signup->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 181, 189);"));
        groupBox = new QGroupBox(Signup);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(230, 20, 841, 631));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 20px;"));
        Signup_2 = new QLabel(groupBox);
        Signup_2->setObjectName(QString::fromUtf8("Signup_2"));
        Signup_2->setGeometry(QRect(50, 20, 751, 71));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(false);
        font.setStrikeOut(false);
        Signup_2->setFont(font);
        Signup_2->setLayoutDirection(Qt::LeftToRight);
        Signup_2->setAutoFillBackground(false);
        Signup_2->setStyleSheet(QString::fromUtf8("font: 600 36pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        Signup_2->setAlignment(Qt::AlignCenter);
        pushButton_signup = new QPushButton(groupBox);
        pushButton_signup->setObjectName(QString::fromUtf8("pushButton_signup"));
        pushButton_signup->setGeometry(QRect(570, 560, 241, 51));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_signup->sizePolicy().hasHeightForWidth());
        pushButton_signup->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_signup->setFont(font1);
        pushButton_signup->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.629213 rgba(84, 154, 232, 255));\n"
"font: 14pt \"Arial Rounded MT Bold\";"));
        Email = new QLabel(groupBox);
        Email->setObjectName(QString::fromUtf8("Email"));
        Email->setGeometry(QRect(50, 280, 171, 41));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setItalic(false);
        Email->setFont(font2);
        Email->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        Email->setAlignment(Qt::AlignCenter);
        Fname = new QLabel(groupBox);
        Fname->setObjectName(QString::fromUtf8("Fname"));
        Fname->setGeometry(QRect(50, 140, 171, 41));
        Fname->setFont(font2);
        Fname->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        Fname->setAlignment(Qt::AlignCenter);
        Phone_2 = new QLineEdit(groupBox);
        Phone_2->setObjectName(QString::fromUtf8("Phone_2"));
        Phone_2->setGeometry(QRect(270, 350, 531, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Phone_2->sizePolicy().hasHeightForWidth());
        Phone_2->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(false);
        font3.setItalic(false);
        Phone_2->setFont(font3);
        Phone_2->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"font: 16pt \"Segoe UI\";\n"
"border-radius:10px;"));
        Password = new QLabel(groupBox);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(50, 420, 171, 41));
        Password->setFont(font2);
        Password->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        Password->setAlignment(Qt::AlignCenter);
        RePassword = new QLabel(groupBox);
        RePassword->setObjectName(QString::fromUtf8("RePassword"));
        RePassword->setGeometry(QRect(50, 490, 171, 41));
        RePassword->setFont(font2);
        RePassword->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        RePassword->setAlignment(Qt::AlignCenter);
        Phone = new QLabel(groupBox);
        Phone->setObjectName(QString::fromUtf8("Phone"));
        Phone->setGeometry(QRect(50, 350, 171, 41));
        Phone->setFont(font2);
        Phone->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        Phone->setAlignment(Qt::AlignCenter);
        Fname_2 = new QLineEdit(groupBox);
        Fname_2->setObjectName(QString::fromUtf8("Fname_2"));
        Fname_2->setEnabled(true);
        Fname_2->setGeometry(QRect(270, 140, 531, 41));
        sizePolicy1.setHeightForWidth(Fname_2->sizePolicy().hasHeightForWidth());
        Fname_2->setSizePolicy(sizePolicy1);
        Fname_2->setFont(font3);
        Fname_2->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"font: 16pt \"Segoe UI\";\n"
"border-radius:10px;"));
        Sname = new QLabel(groupBox);
        Sname->setObjectName(QString::fromUtf8("Sname"));
        Sname->setGeometry(QRect(50, 210, 171, 41));
        Sname->setFont(font2);
        Sname->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        Sname->setAlignment(Qt::AlignCenter);
        Sname_2 = new QLineEdit(groupBox);
        Sname_2->setObjectName(QString::fromUtf8("Sname_2"));
        Sname_2->setGeometry(QRect(270, 210, 531, 41));
        sizePolicy1.setHeightForWidth(Sname_2->sizePolicy().hasHeightForWidth());
        Sname_2->setSizePolicy(sizePolicy1);
        Sname_2->setFont(font3);
        Sname_2->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"font: 16pt \"Segoe UI\";\n"
"border-radius:10px;"));
        Email_2 = new QLineEdit(groupBox);
        Email_2->setObjectName(QString::fromUtf8("Email_2"));
        Email_2->setGeometry(QRect(270, 280, 531, 41));
        sizePolicy1.setHeightForWidth(Email_2->sizePolicy().hasHeightForWidth());
        Email_2->setSizePolicy(sizePolicy1);
        Email_2->setFont(font3);
        Email_2->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"font: 16pt \"Segoe UI\";\n"
"border-radius:10px;"));
        RePassword_2 = new QLineEdit(groupBox);
        RePassword_2->setObjectName(QString::fromUtf8("RePassword_2"));
        RePassword_2->setGeometry(QRect(270, 490, 531, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(RePassword_2->sizePolicy().hasHeightForWidth());
        RePassword_2->setSizePolicy(sizePolicy2);
        RePassword_2->setFont(font3);
        RePassword_2->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"font: 16pt \"Segoe UI\";\n"
"border-radius:10px;"));
        RePassword_2->setEchoMode(QLineEdit::Password);
        Password_2 = new QLineEdit(groupBox);
        Password_2->setObjectName(QString::fromUtf8("Password_2"));
        Password_2->setGeometry(QRect(270, 420, 531, 41));
        sizePolicy1.setHeightForWidth(Password_2->sizePolicy().hasHeightForWidth());
        Password_2->setSizePolicy(sizePolicy1);
        Password_2->setFont(font3);
        Password_2->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"font: 16pt \"Segoe UI\";\n"
"border-radius:10px;"));
        Password_2->setEchoMode(QLineEdit::Password);

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Dialog", nullptr));
        groupBox->setTitle(QString());
        Signup_2->setText(QCoreApplication::translate("Signup", "<html><head/><body><p>S I G N  U P</p></body></html>", nullptr));
        pushButton_signup->setText(QCoreApplication::translate("Signup", "Signup", nullptr));
        Email->setText(QCoreApplication::translate("Signup", "Email", nullptr));
        Fname->setText(QCoreApplication::translate("Signup", "First Name", nullptr));
        Phone_2->setPlaceholderText(QCoreApplication::translate("Signup", "  Phone number", nullptr));
        Password->setText(QCoreApplication::translate("Signup", "Password", nullptr));
        RePassword->setText(QCoreApplication::translate("Signup", "Re-password", nullptr));
        Phone->setText(QCoreApplication::translate("Signup", "Phone No", nullptr));
        Fname_2->setPlaceholderText(QCoreApplication::translate("Signup", "  Name", nullptr));
        Sname->setText(QCoreApplication::translate("Signup", "Last Name", nullptr));
        Sname_2->setPlaceholderText(QCoreApplication::translate("Signup", "  Surname", nullptr));
        Email_2->setPlaceholderText(QCoreApplication::translate("Signup", "  Email", nullptr));
        RePassword_2->setPlaceholderText(QCoreApplication::translate("Signup", "  Confirm Password", nullptr));
        Password_2->setPlaceholderText(QCoreApplication::translate("Signup", "  New Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
