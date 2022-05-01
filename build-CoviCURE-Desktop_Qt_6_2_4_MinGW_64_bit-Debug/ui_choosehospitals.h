/********************************************************************************
** Form generated from reading UI file 'choosehospitals.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEHOSPITALS_H
#define UI_CHOOSEHOSPITALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChooseHospitals
{
public:
    QGroupBox *groupBox;
    QLabel *label_main;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *ChooseHospitals)
    {
        if (ChooseHospitals->objectName().isEmpty())
            ChooseHospitals->setObjectName(QString::fromUtf8("ChooseHospitals"));
        ChooseHospitals->resize(1200, 700);
        ChooseHospitals->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 181, 189);"));
        groupBox = new QGroupBox(ChooseHospitals);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 20, 1181, 651));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 10px;"));
        label_main = new QLabel(groupBox);
        label_main->setObjectName(QString::fromUtf8("label_main"));
        label_main->setGeometry(QRect(100, 30, 1001, 371));
        label_main->setStyleSheet(QString::fromUtf8("font: 35pt \"Segoe UI Variable Text\";\n"
"border-radius: 10px;\n"
"color: rgb(255, 255, 255);"));
        label_main->setAlignment(Qt::AlignCenter);
        pushButton_cancel = new QPushButton(groupBox);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(620, 540, 251, 71));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_cancel->sizePolicy().hasHeightForWidth());
        pushButton_cancel->setSizePolicy(sizePolicy);
        pushButton_cancel->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.853933 rgba(188, 209, 232, 255));\n"
"\n"
"border-radius: 7px;"));
        pushButton_ok = new QPushButton(groupBox);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(910, 540, 231, 71));
        sizePolicy.setHeightForWidth(pushButton_ok->sizePolicy().hasHeightForWidth());
        pushButton_ok->setSizePolicy(sizePolicy);
        pushButton_ok->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.629213 rgba(84, 154, 232, 255));\n"
"\n"
"border-radius: 7px;"));

        retranslateUi(ChooseHospitals);
        QObject::connect(pushButton_cancel, &QPushButton::clicked, ChooseHospitals, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(ChooseHospitals);
    } // setupUi

    void retranslateUi(QDialog *ChooseHospitals)
    {
        ChooseHospitals->setWindowTitle(QCoreApplication::translate("ChooseHospitals", "Infected from COVID ?", nullptr));
        groupBox->setTitle(QString());
        label_main->setText(QCoreApplication::translate("ChooseHospitals", "<html><head/><body><p>Are You Infected from COVID ?</p><p>! Choose on Your Need !</p><p>---------------------------------------------------</p><p><span style=\" font-size:36pt; font-weight:700;\">Hospital</span><span style=\" font-size:36pt;\"> -- </span><span style=\" font-size:36pt; font-weight:700;\">Appointment</span><span style=\" font-size:36pt;\"> -- </span><span style=\" font-size:36pt; font-weight:700;\">Virtual Doctor</span></p><p>---------------------------------------------------</p></body></html>", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("ChooseHospitals", "Cancel", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("ChooseHospitals", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseHospitals: public Ui_ChooseHospitals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEHOSPITALS_H
