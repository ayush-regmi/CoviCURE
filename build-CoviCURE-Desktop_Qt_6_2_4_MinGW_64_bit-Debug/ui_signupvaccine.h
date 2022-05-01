/********************************************************************************
** Form generated from reading UI file 'signupvaccine.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPVACCINE_H
#define UI_SIGNUPVACCINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Signupvaccine
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_signupv;
    QLineEdit *lineEdit_8;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_13;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_6;
    QLabel *label_9;
    QLineEdit *lineEdit_13;
    QLabel *label_15;

    void setupUi(QDialog *Signupvaccine)
    {
        if (Signupvaccine->objectName().isEmpty())
            Signupvaccine->setObjectName(QString::fromUtf8("Signupvaccine"));
        Signupvaccine->resize(1054, 700);
        Signupvaccine->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(Signupvaccine);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 0, 1054, 811));
        QFont font;
        font.setPointSize(18);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("background-image: url(:/resources/img/doctor.png);"));
        groupBox->setAlignment(Qt::AlignCenter);
        pushButton_signupv = new QPushButton(groupBox);
        pushButton_signupv->setObjectName(QString::fromUtf8("pushButton_signupv"));
        pushButton_signupv->setGeometry(QRect(290, 500, 131, 61));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_signupv->sizePolicy().hasHeightForWidth());
        pushButton_signupv->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_signupv->setFont(font1);
        pushButton_signupv->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_signupv->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 211, 208);\n"
"font: 14pt \"Arial Rounded MT Bold\";\n"
"border-radius:15px;"));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(230, 80, 271, 32));
        lineEdit_8->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(12, 85, 127, 32));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 160, 271, 32));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(12, 161, 124, 32));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(12, 237, 102, 32));
        lineEdit_11 = new QLineEdit(groupBox);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(230, 240, 271, 32));
        lineEdit_11->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(230, 310, 271, 32));
        lineEdit_6->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255, 255, 255);"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(12, 313, 195, 32));
        lineEdit_13 = new QLineEdit(groupBox);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(230, 380, 271, 32));
        lineEdit_13->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255, 255, 255);"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 380, 71, 32));

        retranslateUi(Signupvaccine);

        QMetaObject::connectSlotsByName(Signupvaccine);
    } // setupUi

    void retranslateUi(QDialog *Signupvaccine)
    {
        Signupvaccine->setWindowTitle(QCoreApplication::translate("Signupvaccine", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Signupvaccine", "Register", nullptr));
        pushButton_signupv->setText(QCoreApplication::translate("Signupvaccine", "Submit", nullptr));
        lineEdit_8->setText(QString());
        label_8->setText(QCoreApplication::translate("Signupvaccine", "First Name: ", nullptr));
        label_2->setText(QCoreApplication::translate("Signupvaccine", "Last Name: ", nullptr));
        label_13->setText(QCoreApplication::translate("Signupvaccine", "Password:", nullptr));
        label_9->setText(QCoreApplication::translate("Signupvaccine", "Confirm Password:", nullptr));
        label_15->setText(QCoreApplication::translate("Signupvaccine", "ID NO:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signupvaccine: public Ui_Signupvaccine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPVACCINE_H
