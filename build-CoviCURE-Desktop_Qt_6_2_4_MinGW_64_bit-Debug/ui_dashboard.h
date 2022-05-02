/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QAction *actionClose;
    QAction *actionClose_2;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_Live;
    QPushButton *pushButton_Rapidcovid;
    QPushButton *pushButton_Hospital;
    QPushButton *pushButton_vaccine;
    QLabel *label_dashboard;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->resize(1260, 700);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dashboard->sizePolicy().hasHeightForWidth());
        Dashboard->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/img/mask.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dashboard->setWindowIcon(icon);
        Dashboard->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 181, 189);"));
        actionClose = new QAction(Dashboard);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionClose_2 = new QAction(Dashboard);
        actionClose_2->setObjectName(QString::fromUtf8("actionClose_2"));
        centralwidget = new QWidget(Dashboard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 0, 1241, 651));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 10px;"));
        pushButton_Live = new QPushButton(groupBox);
        pushButton_Live->setObjectName(QString::fromUtf8("pushButton_Live"));
        pushButton_Live->setGeometry(QRect(30, 270, 571, 161));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(20);
        sizePolicy1.setHeightForWidth(pushButton_Live->sizePolicy().hasHeightForWidth());
        pushButton_Live->setSizePolicy(sizePolicy1);
        pushButton_Live->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Live->setMouseTracking(true);
        pushButton_Live->setLayoutDirection(Qt::LeftToRight);
        pushButton_Live->setAutoFillBackground(false);
        pushButton_Live->setStyleSheet(QString::fromUtf8("font: 26pt \"Cooper Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;\n"
"background0color::hover: \n"
"background-color: qradialgradient(spread:reflect, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.0113636 rgba(255, 25, 92, 255), stop:1 rgba(0, 85, 255, 255));"));
        pushButton_Rapidcovid = new QPushButton(groupBox);
        pushButton_Rapidcovid->setObjectName(QString::fromUtf8("pushButton_Rapidcovid"));
        pushButton_Rapidcovid->setGeometry(QRect(640, 460, 571, 161));
        sizePolicy1.setHeightForWidth(pushButton_Rapidcovid->sizePolicy().hasHeightForWidth());
        pushButton_Rapidcovid->setSizePolicy(sizePolicy1);
        pushButton_Rapidcovid->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Rapidcovid->setMouseTracking(true);
        pushButton_Rapidcovid->setAutoFillBackground(false);
        pushButton_Rapidcovid->setStyleSheet(QString::fromUtf8("font: 26pt \"Cooper Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        pushButton_Hospital = new QPushButton(groupBox);
        pushButton_Hospital->setObjectName(QString::fromUtf8("pushButton_Hospital"));
        pushButton_Hospital->setGeometry(QRect(640, 270, 571, 161));
        sizePolicy1.setHeightForWidth(pushButton_Hospital->sizePolicy().hasHeightForWidth());
        pushButton_Hospital->setSizePolicy(sizePolicy1);
        pushButton_Hospital->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Hospital->setMouseTracking(true);
        pushButton_Hospital->setAutoFillBackground(false);
        pushButton_Hospital->setStyleSheet(QString::fromUtf8("font: 26pt \"Cooper Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;\n"
"background0color::hover: \n"
"background-color: qradialgradient(spread:reflect, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.0113636 rgba(255, 25, 92, 255), stop:1 rgba(0, 85, 255, 255));"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../img/doctor.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Hospital->setIcon(icon1);
        pushButton_vaccine = new QPushButton(groupBox);
        pushButton_vaccine->setObjectName(QString::fromUtf8("pushButton_vaccine"));
        pushButton_vaccine->setGeometry(QRect(30, 460, 571, 161));
        sizePolicy1.setHeightForWidth(pushButton_vaccine->sizePolicy().hasHeightForWidth());
        pushButton_vaccine->setSizePolicy(sizePolicy1);
        pushButton_vaccine->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_vaccine->setMouseTracking(true);
        pushButton_vaccine->setAutoFillBackground(false);
        pushButton_vaccine->setStyleSheet(QString::fromUtf8("font: 26pt \"Cooper Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        label_dashboard = new QLabel(groupBox);
        label_dashboard->setObjectName(QString::fromUtf8("label_dashboard"));
        label_dashboard->setGeometry(QRect(30, 20, 1181, 191));
        label_dashboard->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(31, 174, 126, 255), stop:1 rgba(97, 167, 209, 255));"));
        Dashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dashboard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1260, 17));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Dashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(Dashboard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Dashboard->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionClose_2);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        actionClose->setText(QCoreApplication::translate("Dashboard", "Close", nullptr));
        actionClose_2->setText(QCoreApplication::translate("Dashboard", "Close", nullptr));
        groupBox->setTitle(QString());
        pushButton_Live->setText(QCoreApplication::translate("Dashboard", "Live Covid Status", nullptr));
        pushButton_Rapidcovid->setText(QCoreApplication::translate("Dashboard", "Rapid Covid Test", nullptr));
        pushButton_Hospital->setText(QCoreApplication::translate("Dashboard", "Hospitals", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_Hospital->setShortcut(QCoreApplication::translate("Dashboard", "A, I", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_vaccine->setText(QCoreApplication::translate("Dashboard", "Vaccination", nullptr));
        label_dashboard->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("Dashboard", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
