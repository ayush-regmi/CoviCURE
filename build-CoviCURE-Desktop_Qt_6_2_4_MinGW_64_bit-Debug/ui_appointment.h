/********************************************************************************
** Form generated from reading UI file 'appointment.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOINTMENT_H
#define UI_APPOINTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Appointment
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *lineEditName;
    QLabel *labelName;
    QLineEdit *lineEditGurdian;
    QLabel *labelGurdian;
    QLabel *labelSex;
    QLabel *labelMobile;
    QLineEdit *lineEditMobile;
    QLineEdit *lineEditPhone;
    QLabel *labelPhone;
    QLineEdit *lineEditAddress;
    QLabel *labelAddress;
    QLabel *labelState;
    QLineEdit *lineEditState;
    QLabel *labelNation;
    QLineEdit *lineEditNation;
    QDateEdit *dateEditDob;
    QLabel *labelDob;
    QComboBox *combo_Mr;
    QComboBox *combo_Sex;
    QGroupBox *groupBox_2;
    QLabel *label;
    QCheckBox *checkBox_Accept;
    QPushButton *pushButton_Book;
    QPushButton *pushButton_Back;
    QLabel *labelAppointDate;
    QDateEdit *dateEdit_Appointment;
    QLabel *labelHospital;
    QLabel *labelDoctor;
    QLabel *labelAppointTime;
    QTimeEdit *timeEdit_Appointment;
    QComboBox *combo_Hospital;
    QComboBox *combo_Doctor;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Appointment)
    {
        if (Appointment->objectName().isEmpty())
            Appointment->setObjectName(QString::fromUtf8("Appointment"));
        Appointment->resize(1200, 700);
        Appointment->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 181, 189);"));
        centralwidget = new QWidget(Appointment);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 611, 611));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 15px;"));
        lineEditName = new QLineEdit(groupBox);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(186, 40, 401, 41));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditName->sizePolicy().hasHeightForWidth());
        lineEditName->setSizePolicy(sizePolicy);
        lineEditName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"font: 16pt \"Segoe UI\";"));
        labelName = new QLabel(groupBox);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setGeometry(QRect(31, 40, 71, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelName->sizePolicy().hasHeightForWidth());
        labelName->setSizePolicy(sizePolicy1);
        labelName->setLayoutDirection(Qt::LeftToRight);
        labelName->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelName->setAlignment(Qt::AlignCenter);
        labelName->setWordWrap(false);
        lineEditGurdian = new QLineEdit(groupBox);
        lineEditGurdian->setObjectName(QString::fromUtf8("lineEditGurdian"));
        lineEditGurdian->setGeometry(QRect(170, 110, 411, 41));
        sizePolicy.setHeightForWidth(lineEditGurdian->sizePolicy().hasHeightForWidth());
        lineEditGurdian->setSizePolicy(sizePolicy);
        lineEditGurdian->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"font: 16pt \"Segoe UI\";"));
        labelGurdian = new QLabel(groupBox);
        labelGurdian->setObjectName(QString::fromUtf8("labelGurdian"));
        labelGurdian->setGeometry(QRect(31, 111, 131, 41));
        labelGurdian->setLayoutDirection(Qt::LeftToRight);
        labelGurdian->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelGurdian->setAlignment(Qt::AlignCenter);
        labelGurdian->setWordWrap(false);
        labelSex = new QLabel(groupBox);
        labelSex->setObjectName(QString::fromUtf8("labelSex"));
        labelSex->setGeometry(QRect(30, 180, 111, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelSex->sizePolicy().hasHeightForWidth());
        labelSex->setSizePolicy(sizePolicy2);
        labelSex->setLayoutDirection(Qt::LeftToRight);
        labelSex->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelSex->setAlignment(Qt::AlignCenter);
        labelSex->setWordWrap(false);
        labelMobile = new QLabel(groupBox);
        labelMobile->setObjectName(QString::fromUtf8("labelMobile"));
        labelMobile->setGeometry(QRect(30, 250, 121, 41));
        labelMobile->setLayoutDirection(Qt::LeftToRight);
        labelMobile->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelMobile->setAlignment(Qt::AlignCenter);
        labelMobile->setWordWrap(false);
        lineEditMobile = new QLineEdit(groupBox);
        lineEditMobile->setObjectName(QString::fromUtf8("lineEditMobile"));
        lineEditMobile->setGeometry(QRect(160, 250, 421, 41));
        sizePolicy.setHeightForWidth(lineEditMobile->sizePolicy().hasHeightForWidth());
        lineEditMobile->setSizePolicy(sizePolicy);
        lineEditMobile->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"font: 16pt \"Segoe UI\";"));
        lineEditPhone = new QLineEdit(groupBox);
        lineEditPhone->setObjectName(QString::fromUtf8("lineEditPhone"));
        lineEditPhone->setGeometry(QRect(160, 321, 421, 41));
        sizePolicy.setHeightForWidth(lineEditPhone->sizePolicy().hasHeightForWidth());
        lineEditPhone->setSizePolicy(sizePolicy);
        lineEditPhone->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"font: 16pt \"Segoe UI\";"));
        labelPhone = new QLabel(groupBox);
        labelPhone->setObjectName(QString::fromUtf8("labelPhone"));
        labelPhone->setGeometry(QRect(31, 320, 121, 41));
        labelPhone->setLayoutDirection(Qt::LeftToRight);
        labelPhone->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelPhone->setAlignment(Qt::AlignCenter);
        labelPhone->setWordWrap(false);
        lineEditAddress = new QLineEdit(groupBox);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));
        lineEditAddress->setGeometry(QRect(160, 390, 421, 41));
        sizePolicy.setHeightForWidth(lineEditAddress->sizePolicy().hasHeightForWidth());
        lineEditAddress->setSizePolicy(sizePolicy);
        lineEditAddress->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"font: 16pt \"Segoe UI\";"));
        labelAddress = new QLabel(groupBox);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));
        labelAddress->setGeometry(QRect(31, 390, 121, 41));
        labelAddress->setLayoutDirection(Qt::LeftToRight);
        labelAddress->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelAddress->setAlignment(Qt::AlignCenter);
        labelAddress->setWordWrap(false);
        labelState = new QLabel(groupBox);
        labelState->setObjectName(QString::fromUtf8("labelState"));
        labelState->setGeometry(QRect(31, 461, 121, 41));
        labelState->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelState->setAlignment(Qt::AlignCenter);
        lineEditState = new QLineEdit(groupBox);
        lineEditState->setObjectName(QString::fromUtf8("lineEditState"));
        lineEditState->setGeometry(QRect(160, 460, 421, 41));
        sizePolicy.setHeightForWidth(lineEditState->sizePolicy().hasHeightForWidth());
        lineEditState->setSizePolicy(sizePolicy);
        lineEditState->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"font: 16pt \"Segoe UI\";"));
        labelNation = new QLabel(groupBox);
        labelNation->setObjectName(QString::fromUtf8("labelNation"));
        labelNation->setGeometry(QRect(30, 531, 121, 41));
        labelNation->setLayoutDirection(Qt::LeftToRight);
        labelNation->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelNation->setAlignment(Qt::AlignCenter);
        labelNation->setWordWrap(false);
        lineEditNation = new QLineEdit(groupBox);
        lineEditNation->setObjectName(QString::fromUtf8("lineEditNation"));
        lineEditNation->setGeometry(QRect(160, 530, 421, 41));
        sizePolicy.setHeightForWidth(lineEditNation->sizePolicy().hasHeightForWidth());
        lineEditNation->setSizePolicy(sizePolicy);
        lineEditNation->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"font: 16pt \"Segoe UI\";"));
        dateEditDob = new QDateEdit(groupBox);
        dateEditDob->setObjectName(QString::fromUtf8("dateEditDob"));
        dateEditDob->setGeometry(QRect(440, 180, 141, 41));
        sizePolicy1.setHeightForWidth(dateEditDob->sizePolicy().hasHeightForWidth());
        dateEditDob->setSizePolicy(sizePolicy1);
        dateEditDob->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelDob = new QLabel(groupBox);
        labelDob->setObjectName(QString::fromUtf8("labelDob"));
        labelDob->setGeometry(QRect(330, 182, 101, 41));
        sizePolicy2.setHeightForWidth(labelDob->sizePolicy().hasHeightForWidth());
        labelDob->setSizePolicy(sizePolicy2);
        labelDob->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelDob->setAlignment(Qt::AlignCenter);
        combo_Mr = new QComboBox(groupBox);
        combo_Mr->setObjectName(QString::fromUtf8("combo_Mr"));
        combo_Mr->setGeometry(QRect(110, 40, 71, 41));
        combo_Mr->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        combo_Sex = new QComboBox(groupBox);
        combo_Sex->setObjectName(QString::fromUtf8("combo_Sex"));
        combo_Sex->setGeometry(QRect(160, 180, 111, 41));
        combo_Sex->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(680, 30, 581, 611));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 10px;"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 330, 581, 161));
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(36, 0, 87, 255), stop:1 rgba(0, 87, 110, 255));\n"
"border-radius: 10px;\n"
"font: 13pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label->setMargin(26);
        checkBox_Accept = new QCheckBox(groupBox_2);
        checkBox_Accept->setObjectName(QString::fromUtf8("checkBox_Accept"));
        checkBox_Accept->setGeometry(QRect(290, 540, 81, 31));
        checkBox_Accept->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_Book = new QPushButton(groupBox_2);
        pushButton_Book->setObjectName(QString::fromUtf8("pushButton_Book"));
        pushButton_Book->setGeometry(QRect(380, 530, 171, 51));
        pushButton_Book->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(44, 44, 44, 255), stop:1 rgba(110, 110, 110, 255));"));
        pushButton_Back = new QPushButton(groupBox_2);
        pushButton_Back->setObjectName(QString::fromUtf8("pushButton_Back"));
        pushButton_Back->setGeometry(QRect(30, 530, 171, 51));
        labelAppointDate = new QLabel(groupBox_2);
        labelAppointDate->setObjectName(QString::fromUtf8("labelAppointDate"));
        labelAppointDate->setGeometry(QRect(31, 180, 271, 41));
        sizePolicy2.setHeightForWidth(labelAppointDate->sizePolicy().hasHeightForWidth());
        labelAppointDate->setSizePolicy(sizePolicy2);
        labelAppointDate->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelAppointDate->setAlignment(Qt::AlignCenter);
        dateEdit_Appointment = new QDateEdit(groupBox_2);
        dateEdit_Appointment->setObjectName(QString::fromUtf8("dateEdit_Appointment"));
        dateEdit_Appointment->setGeometry(QRect(340, 180, 211, 41));
        sizePolicy1.setHeightForWidth(dateEdit_Appointment->sizePolicy().hasHeightForWidth());
        dateEdit_Appointment->setSizePolicy(sizePolicy1);
        dateEdit_Appointment->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelHospital = new QLabel(groupBox_2);
        labelHospital->setObjectName(QString::fromUtf8("labelHospital"));
        labelHospital->setGeometry(QRect(31, 40, 271, 41));
        sizePolicy2.setHeightForWidth(labelHospital->sizePolicy().hasHeightForWidth());
        labelHospital->setSizePolicy(sizePolicy2);
        labelHospital->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelHospital->setAlignment(Qt::AlignCenter);
        labelDoctor = new QLabel(groupBox_2);
        labelDoctor->setObjectName(QString::fromUtf8("labelDoctor"));
        labelDoctor->setGeometry(QRect(31, 110, 271, 41));
        sizePolicy2.setHeightForWidth(labelDoctor->sizePolicy().hasHeightForWidth());
        labelDoctor->setSizePolicy(sizePolicy2);
        labelDoctor->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelDoctor->setAlignment(Qt::AlignCenter);
        labelAppointTime = new QLabel(groupBox_2);
        labelAppointTime->setObjectName(QString::fromUtf8("labelAppointTime"));
        labelAppointTime->setGeometry(QRect(31, 250, 271, 41));
        sizePolicy2.setHeightForWidth(labelAppointTime->sizePolicy().hasHeightForWidth());
        labelAppointTime->setSizePolicy(sizePolicy2);
        labelAppointTime->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        labelAppointTime->setAlignment(Qt::AlignCenter);
        timeEdit_Appointment = new QTimeEdit(groupBox_2);
        timeEdit_Appointment->setObjectName(QString::fromUtf8("timeEdit_Appointment"));
        timeEdit_Appointment->setGeometry(QRect(340, 250, 211, 41));
        sizePolicy1.setHeightForWidth(timeEdit_Appointment->sizePolicy().hasHeightForWidth());
        timeEdit_Appointment->setSizePolicy(sizePolicy1);
        timeEdit_Appointment->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);"));
        combo_Hospital = new QComboBox(groupBox_2);
        combo_Hospital->setObjectName(QString::fromUtf8("combo_Hospital"));
        combo_Hospital->setGeometry(QRect(340, 40, 211, 41));
        combo_Doctor = new QComboBox(groupBox_2);
        combo_Doctor->setObjectName(QString::fromUtf8("combo_Doctor"));
        combo_Doctor->setGeometry(QRect(340, 110, 211, 41));
        Appointment->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Appointment);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 17));
        Appointment->setMenuBar(menubar);
        statusbar = new QStatusBar(Appointment);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Appointment->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        labelName->setBuddy(lineEditName);
#endif // QT_CONFIG(shortcut)

        retranslateUi(Appointment);

        QMetaObject::connectSlotsByName(Appointment);
    } // setupUi

    void retranslateUi(QMainWindow *Appointment)
    {
        Appointment->setWindowTitle(QCoreApplication::translate("Appointment", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Appointment", "GroupBox", nullptr));
        labelName->setText(QCoreApplication::translate("Appointment", "Name ", nullptr));
        labelGurdian->setText(QCoreApplication::translate("Appointment", "Gurdian Name", nullptr));
        labelSex->setText(QCoreApplication::translate("Appointment", "Sex", nullptr));
        labelMobile->setText(QCoreApplication::translate("Appointment", "Mobile No    ", nullptr));
        labelPhone->setText(QCoreApplication::translate("Appointment", "Phone No    ", nullptr));
        labelAddress->setText(QCoreApplication::translate("Appointment", "Address      ", nullptr));
        labelState->setText(QCoreApplication::translate("Appointment", "State           ", nullptr));
        labelNation->setText(QCoreApplication::translate("Appointment", "Nation        ", nullptr));
        labelDob->setText(QCoreApplication::translate("Appointment", "DOB", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Appointment", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("Appointment", "<html><head/><body><p><span style=\" font-weight:700;\">Terms &amp; Conditions</span></p><p><span style=\" font-size:12pt;\">Please arrive 15 miutes before the appointment time to complete biling and other formalities.</span></p><p><span style=\" font-size:12pt;\">Waitlisted appointements are subject to cancellations of booked appointments.</span></p></body></html>", nullptr));
        checkBox_Accept->setText(QCoreApplication::translate("Appointment", "I Accept", nullptr));
        pushButton_Book->setText(QCoreApplication::translate("Appointment", "Book", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("Appointment", "Back", nullptr));
        labelAppointDate->setText(QCoreApplication::translate("Appointment", "Appointment Date", nullptr));
        labelHospital->setText(QCoreApplication::translate("Appointment", "Select Hospital", nullptr));
        labelDoctor->setText(QCoreApplication::translate("Appointment", "Doctor", nullptr));
        labelAppointTime->setText(QCoreApplication::translate("Appointment", "Appointment Time", nullptr));
        combo_Hospital->setStyleSheet(QCoreApplication::translate("Appointment", "font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);", nullptr));
        combo_Doctor->setStyleSheet(QCoreApplication::translate("Appointment", "font: 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(54, 0, 129, 255), stop:1 rgba(0, 116, 147, 255));\n"
"color: rgb(255, 255, 255);", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Appointment: public Ui_Appointment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINTMENT_H
