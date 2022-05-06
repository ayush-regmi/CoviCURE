/********************************************************************************
** Form generated from reading UI file 'patients.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTS_H
#define UI_PATIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Patients
{
public:
    QTableView *tableView;
    QPushButton *pushButton_back;
    QLabel *label;
    QPushButton *pushButton_refresh;

    void setupUi(QDialog *Patients)
    {
        if (Patients->objectName().isEmpty())
            Patients->setObjectName(QStringLiteral("Patients"));
        Patients->resize(1200, 800);
        Patients->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(182, 213, 255, 255), stop:1 rgba(106, 255, 187, 255));"));
        tableView = new QTableView(Patients);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 86, 1201, 461));
        tableView->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(96, 162, 255, 255), stop:1 rgba(108, 255, 188, 255));\n"
"font: 600 12pt \"Segoe UI\";\n"
"color: rgb(43, 43, 64);\n"
"border-radius:10px;"));
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        pushButton_back = new QPushButton(Patients);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(660, 570, 261, 81));
        pushButton_back->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 20pt \"Segoe UI\";\n"
"border-radius: 15px;"));
        label = new QLabel(Patients);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(430, 20, 431, 51));
        label->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 26pt \"Segoe UI\";\n"
"border-radius:15px;"));
        label->setAlignment(Qt::AlignCenter);
        pushButton_refresh = new QPushButton(Patients);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        pushButton_refresh->setGeometry(QRect(350, 570, 261, 81));
        pushButton_refresh->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 20pt \"Segoe UI\";\n"
"border-radius: 15px;"));

        retranslateUi(Patients);

        QMetaObject::connectSlotsByName(Patients);
    } // setupUi

    void retranslateUi(QDialog *Patients)
    {
        Patients->setWindowTitle(QApplication::translate("Patients", "Dialog", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("Patients", "Back", Q_NULLPTR));
        label->setText(QApplication::translate("Patients", "Patient's Data", Q_NULLPTR));
        pushButton_refresh->setText(QApplication::translate("Patients", "Refresh", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Patients: public Ui_Patients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTS_H
