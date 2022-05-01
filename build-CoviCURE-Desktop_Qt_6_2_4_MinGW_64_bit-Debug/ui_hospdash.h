/********************************************************************************
** Form generated from reading UI file 'hospdash.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSPDASH_H
#define UI_HOSPDASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HospDash
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushVirtualdoctor;
    QPushButton *pushAppointment;
    QPushButton *pushHospitals;
    QPushButton *pushDashboard;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HospDash)
    {
        if (HospDash->objectName().isEmpty())
            HospDash->setObjectName(QString::fromUtf8("HospDash"));
        HospDash->resize(1200, 700);
        centralwidget = new QWidget(HospDash);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 60, 1181, 531));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 30px;"));
        pushVirtualdoctor = new QPushButton(groupBox);
        pushVirtualdoctor->setObjectName(QString::fromUtf8("pushVirtualdoctor"));
        pushVirtualdoctor->setGeometry(QRect(790, 40, 341, 221));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushVirtualdoctor->sizePolicy().hasHeightForWidth());
        pushVirtualdoctor->setSizePolicy(sizePolicy);
        pushAppointment = new QPushButton(groupBox);
        pushAppointment->setObjectName(QString::fromUtf8("pushAppointment"));
        pushAppointment->setGeometry(QRect(410, 40, 351, 221));
        sizePolicy.setHeightForWidth(pushAppointment->sizePolicy().hasHeightForWidth());
        pushAppointment->setSizePolicy(sizePolicy);
        pushHospitals = new QPushButton(groupBox);
        pushHospitals->setObjectName(QString::fromUtf8("pushHospitals"));
        pushHospitals->setGeometry(QRect(40, 40, 341, 221));
        sizePolicy.setHeightForWidth(pushHospitals->sizePolicy().hasHeightForWidth());
        pushHospitals->setSizePolicy(sizePolicy);
        pushDashboard = new QPushButton(groupBox);
        pushDashboard->setObjectName(QString::fromUtf8("pushDashboard"));
        pushDashboard->setGeometry(QRect(420, 430, 341, 61));
        sizePolicy.setHeightForWidth(pushDashboard->sizePolicy().hasHeightForWidth());
        pushDashboard->setSizePolicy(sizePolicy);
        HospDash->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HospDash);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 17));
        HospDash->setMenuBar(menubar);
        statusbar = new QStatusBar(HospDash);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HospDash->setStatusBar(statusbar);

        retranslateUi(HospDash);

        QMetaObject::connectSlotsByName(HospDash);
    } // setupUi

    void retranslateUi(QMainWindow *HospDash)
    {
        HospDash->setWindowTitle(QCoreApplication::translate("HospDash", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        pushVirtualdoctor->setText(QCoreApplication::translate("HospDash", "Virual Doctor", nullptr));
        pushAppointment->setText(QCoreApplication::translate("HospDash", "Book an Appointment", nullptr));
        pushHospitals->setText(QCoreApplication::translate("HospDash", "Availabe Hospitals", nullptr));
        pushDashboard->setText(QCoreApplication::translate("HospDash", "Back to DashBoard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HospDash: public Ui_HospDash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSPDASH_H
