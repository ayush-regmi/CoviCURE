/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

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

class Ui_Admin
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QStringLiteral("Admin"));
        Admin->resize(1200, 800);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 30, 531, 641));
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
        hclose->setGeometry(QRect(253, 580, 251, 41));
        hclose->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(30, 580, 171, 41));
        label_29->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 14pt \"Segoe UI\";"));
        label_29->setAlignment(Qt::AlignCenter);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(680, 30, 531, 641));
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
        pushButton_back->setGeometry(QRect(90, 540, 181, 61));
        pushButton_back->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 106, 255, 255), stop:1 rgba(0, 255, 138, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 16pt \"Segoe UI\";"));
        ambulance = new QLineEdit(groupBox_3);
        ambulance->setObjectName(QStringLiteral("ambulance"));
        ambulance->setGeometry(QRect(243, 210, 261, 41));
        ambulance->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        pushButton_add = new QPushButton(groupBox_3);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(320, 540, 181, 61));
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
        oxygen->setGeometry(QRect(243, 30, 261, 41));
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
        vaccination->setGeometry(QRect(243, 270, 261, 41));
        vaccination->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        website = new QLineEdit(groupBox_3);
        website->setObjectName(QStringLiteral("website"));
        website->setGeometry(QRect(243, 390, 261, 41));
        website->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        ventilator = new QLineEdit(groupBox_3);
        ventilator->setObjectName(QStringLiteral("ventilator"));
        ventilator->setGeometry(QRect(243, 90, 261, 41));
        ventilator->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        ICU = new QLineEdit(groupBox_3);
        ICU->setObjectName(QStringLiteral("ICU"));
        ICU->setGeometry(QRect(243, 150, 261, 41));
        ICU->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        beds = new QLineEdit(groupBox_3);
        beds->setObjectName(QStringLiteral("beds"));
        beds->setGeometry(QRect(243, 450, 261, 41));
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
        MRI->setGeometry(QRect(243, 330, 261, 41));
        MRI->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 12pt \"Segoe UI\";"));
        Admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Admin);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 17));
        Admin->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Admin->setStatusBar(statusbar);

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "MainWindow", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_3->setText(QApplication::translate("Admin", "Address:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Admin", "Email:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Admin", "Phone:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Admin", "Mobile:", Q_NULLPTR));
        label_8->setText(QApplication::translate("Admin", "Registration open:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Admin", "Name:", Q_NULLPTR));
        label_9->setText(QApplication::translate("Admin", "Registration close:", Q_NULLPTR));
        label_7->setText(QApplication::translate("Admin", "Fax:", Q_NULLPTR));
        label_10->setText(QApplication::translate("Admin", "Hospital open:", Q_NULLPTR));
        label_29->setText(QApplication::translate("Admin", "Hospitla close:", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        label_27->setText(QApplication::translate("Admin", "Ventilators:", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("Admin", "Back", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("Admin", "Add", Q_NULLPTR));
        label_28->setText(QApplication::translate("Admin", "Oxygen Cylinders:", Q_NULLPTR));
        label_23->setText(QApplication::translate("Admin", "ICU:", Q_NULLPTR));
        label_17->setText(QApplication::translate("Admin", "Ambulance:", Q_NULLPTR));
        label_25->setText(QApplication::translate("Admin", "Website", Q_NULLPTR));
        label_26->setText(QApplication::translate("Admin", "Vaccination", Q_NULLPTR));
        label_24->setText(QApplication::translate("Admin", "MRI:", Q_NULLPTR));
        label_30->setText(QApplication::translate("Admin", "No of beds", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
