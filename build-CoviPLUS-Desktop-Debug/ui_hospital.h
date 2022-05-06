/********************************************************************************
** Form generated from reading UI file 'hospital.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSPITAL_H
#define UI_HOSPITAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hospital
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QLineEdit *phone;
    QLabel *label_3;
    QLineEdit *ropen;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *name;
    QLineEdit *mobile;
    QLabel *label_5;
    QLineEdit *address;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_9;
    QLineEdit *email;
    QLabel *label_7;
    QLineEdit *rclose;
    QLabel *label_10;
    QLineEdit *hopen;
    QLineEdit *fax;
    QLineEdit *hclose;
    QLabel *label_29;
    QGroupBox *groupBox_3;
    QLabel *label_27;
    QPushButton *pushButton_back;
    QLineEdit *ambulance;
    QPushButton *pushButton_add;
    QLabel *label_28;
    QLabel *label_23;
    QLabel *label_17;
    QLineEdit *oxygen;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *vaccination;
    QLineEdit *website;
    QLineEdit *ventilator;
    QLineEdit *ICU;
    QLineEdit *beds;
    QLabel *label_24;
    QLabel *label_30;
    QLineEdit *MRI;
    QPushButton *pushButton_patients;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Hospital)
    {
        if (Hospital->objectName().isEmpty())
            Hospital->setObjectName(QStringLiteral("Hospital"));
        Hospital->resize(1200, 800);
        centralwidget = new QWidget(Hospital);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 20, 531, 641));
        groupBox_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 170, 186, 255), stop:1 rgba(0, 151, 13, 255));\n"
"border-radius: 20px;"));
        phone = new QLineEdit(groupBox_2);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setGeometry(QRect(240, 270, 261, 41));
        phone->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 90, 171, 41));
        label_3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_3->setAlignment(Qt::AlignCenter);
        ropen = new QLineEdit(groupBox_2);
        ropen->setObjectName(QStringLiteral("ropen"));
        ropen->setGeometry(QRect(240, 390, 261, 41));
        ropen->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 150, 171, 41));
        label_4->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_4->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 270, 171, 41));
        label_6->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_6->setAlignment(Qt::AlignCenter);
        name = new QLineEdit(groupBox_2);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(240, 30, 261, 41));
        name->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        mobile = new QLineEdit(groupBox_2);
        mobile->setObjectName(QStringLiteral("mobile"));
        mobile->setGeometry(QRect(240, 210, 261, 41));
        mobile->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 210, 171, 41));
        label_5->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_5->setAlignment(Qt::AlignCenter);
        address = new QLineEdit(groupBox_2);
        address->setObjectName(QStringLiteral("address"));
        address->setGeometry(QRect(240, 90, 261, 41));
        address->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 390, 171, 41));
        label_8->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_8->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 30, 171, 41));
        label_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_2->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(31, 450, 171, 41));
        label_9->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_9->setAlignment(Qt::AlignCenter);
        email = new QLineEdit(groupBox_2);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(240, 150, 261, 41));
        email->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 330, 171, 41));
        label_7->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_7->setAlignment(Qt::AlignCenter);
        rclose = new QLineEdit(groupBox_2);
        rclose->setObjectName(QStringLiteral("rclose"));
        rclose->setGeometry(QRect(240, 450, 261, 41));
        rclose->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 510, 181, 41));
        label_10->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_10->setAlignment(Qt::AlignCenter);
        hopen = new QLineEdit(groupBox_2);
        hopen->setObjectName(QStringLiteral("hopen"));
        hopen->setGeometry(QRect(240, 510, 261, 41));
        hopen->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        fax = new QLineEdit(groupBox_2);
        fax->setObjectName(QStringLiteral("fax"));
        fax->setGeometry(QRect(240, 330, 261, 41));
        fax->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        hclose = new QLineEdit(groupBox_2);
        hclose->setObjectName(QStringLiteral("hclose"));
        hclose->setGeometry(QRect(243, 570, 261, 41));
        hclose->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(30, 570, 181, 41));
        label_29->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_29->setAlignment(Qt::AlignCenter);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(670, 20, 531, 641));
        groupBox_3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 170, 186, 255), stop:1 rgba(0, 151, 13, 255));\n"
"border-radius: 20px;"));
        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(30, 90, 171, 41));
        label_27->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_27->setAlignment(Qt::AlignCenter);
        pushButton_back = new QPushButton(groupBox_3);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(210, 540, 141, 61));
        pushButton_back->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 106, 255, 255), stop:1 rgba(0, 255, 138, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 16pt \"Segoe UI\";"));
        ambulance = new QLineEdit(groupBox_3);
        ambulance->setObjectName(QStringLiteral("ambulance"));
        ambulance->setGeometry(QRect(240, 210, 261, 41));
        ambulance->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        pushButton_add = new QPushButton(groupBox_3);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(380, 540, 141, 61));
        pushButton_add->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 106, 255, 255), stop:1 rgba(0, 255, 138, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 16pt \"Segoe UI\";"));
        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(30, 30, 171, 41));
        label_28->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_28->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(30, 150, 171, 41));
        label_23->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_23->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(30, 210, 171, 41));
        label_17->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_17->setAlignment(Qt::AlignCenter);
        oxygen = new QLineEdit(groupBox_3);
        oxygen->setObjectName(QStringLiteral("oxygen"));
        oxygen->setGeometry(QRect(240, 30, 261, 41));
        oxygen->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(30, 390, 171, 41));
        label_25->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_25->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(30, 270, 171, 41));
        label_26->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_26->setAlignment(Qt::AlignCenter);
        vaccination = new QLineEdit(groupBox_3);
        vaccination->setObjectName(QStringLiteral("vaccination"));
        vaccination->setGeometry(QRect(240, 270, 261, 41));
        vaccination->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        website = new QLineEdit(groupBox_3);
        website->setObjectName(QStringLiteral("website"));
        website->setGeometry(QRect(240, 390, 261, 41));
        website->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        ventilator = new QLineEdit(groupBox_3);
        ventilator->setObjectName(QStringLiteral("ventilator"));
        ventilator->setGeometry(QRect(240, 90, 261, 41));
        ventilator->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        ICU = new QLineEdit(groupBox_3);
        ICU->setObjectName(QStringLiteral("ICU"));
        ICU->setGeometry(QRect(240, 150, 261, 41));
        ICU->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        beds = new QLineEdit(groupBox_3);
        beds->setObjectName(QStringLiteral("beds"));
        beds->setGeometry(QRect(240, 450, 261, 41));
        beds->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(30, 330, 171, 41));
        label_24->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_24->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(groupBox_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(30, 450, 171, 41));
        label_30->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_30->setAlignment(Qt::AlignCenter);
        MRI = new QLineEdit(groupBox_3);
        MRI->setObjectName(QStringLiteral("MRI"));
        MRI->setGeometry(QRect(240, 330, 261, 41));
        MRI->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        pushButton_patients = new QPushButton(groupBox_3);
        pushButton_patients->setObjectName(QStringLiteral("pushButton_patients"));
        pushButton_patients->setGeometry(QRect(30, 540, 161, 71));
        pushButton_patients->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(7, 0, 172, 255), stop:1 rgba(0, 174, 94, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 26pt \"Segoe UI\";"));
        Hospital->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Hospital);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 17));
        Hospital->setMenuBar(menubar);
        statusbar = new QStatusBar(Hospital);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Hospital->setStatusBar(statusbar);

        retranslateUi(Hospital);

        QMetaObject::connectSlotsByName(Hospital);
    } // setupUi

    void retranslateUi(QMainWindow *Hospital)
    {
        Hospital->setWindowTitle(QApplication::translate("Hospital", "MainWindow", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_3->setText(QApplication::translate("Hospital", "Address:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Hospital", "Email:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Hospital", "Phone:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Hospital", "Mobile:", Q_NULLPTR));
        label_8->setText(QApplication::translate("Hospital", "Registration open:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Hospital", "Name:", Q_NULLPTR));
        label_9->setText(QApplication::translate("Hospital", "Registration close:", Q_NULLPTR));
        label_7->setText(QApplication::translate("Hospital", "Fax:", Q_NULLPTR));
        label_10->setText(QApplication::translate("Hospital", "Hospital open:", Q_NULLPTR));
        label_29->setText(QApplication::translate("Hospital", "Hospitla close:", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        label_27->setText(QApplication::translate("Hospital", "Ventilators:", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("Hospital", "Back", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("Hospital", "Add", Q_NULLPTR));
        label_28->setText(QApplication::translate("Hospital", "Oxygen Cylinders:", Q_NULLPTR));
        label_23->setText(QApplication::translate("Hospital", "ICU:", Q_NULLPTR));
        label_17->setText(QApplication::translate("Hospital", "Ambulance:", Q_NULLPTR));
        label_25->setText(QApplication::translate("Hospital", "Website", Q_NULLPTR));
        label_26->setText(QApplication::translate("Hospital", "Vaccination", Q_NULLPTR));
        label_24->setText(QApplication::translate("Hospital", "MRI:", Q_NULLPTR));
        label_30->setText(QApplication::translate("Hospital", "No of beds", Q_NULLPTR));
        pushButton_patients->setText(QApplication::translate("Hospital", "Patients", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Hospital: public Ui_Hospital {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSPITAL_H
