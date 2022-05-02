/********************************************************************************
** Form generated from reading UI file 'rapidcovid.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAPIDCOVID_H
#define UI_RAPIDCOVID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rapidcovid
{
public:
    QWidget *centralwidget;
    QLabel *label_test;
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *pushButton_rct;
    QPushButton *pushButton_quit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Rapidcovid)
    {
        if (Rapidcovid->objectName().isEmpty())
            Rapidcovid->setObjectName(QString::fromUtf8("Rapidcovid"));
        Rapidcovid->resize(1200, 700);
        Rapidcovid->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 181, 189);"));
        centralwidget = new QWidget(Rapidcovid);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_test = new QLabel(centralwidget);
        label_test->setObjectName(QString::fromUtf8("label_test"));
        label_test->setGeometry(QRect(849, 358, 29, 16));
        label_test->setStyleSheet(QString::fromUtf8("margin-right: 25"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(200, 80, 911, 541));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 20px;"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 811, 161));
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
        pushButton_rct = new QPushButton(groupBox);
        pushButton_rct->setObjectName(QString::fromUtf8("pushButton_rct"));
        pushButton_rct->setGeometry(QRect(310, 270, 301, 81));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_rct->sizePolicy().hasHeightForWidth());
        pushButton_rct->setSizePolicy(sizePolicy);
        pushButton_rct->setStyleSheet(QString::fromUtf8("font: 26pt \"Cooper Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        pushButton_quit = new QPushButton(groupBox);
        pushButton_quit->setObjectName(QString::fromUtf8("pushButton_quit"));
        pushButton_quit->setGeometry(QRect(310, 410, 301, 71));
        sizePolicy.setHeightForWidth(pushButton_quit->sizePolicy().hasHeightForWidth());
        pushButton_quit->setSizePolicy(sizePolicy);
        pushButton_quit->setStyleSheet(QString::fromUtf8("font: 26pt \"Cooper Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));\n"
"border-radius: 10px;"));
        Rapidcovid->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Rapidcovid);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 17));
        Rapidcovid->setMenuBar(menubar);
        statusbar = new QStatusBar(Rapidcovid);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Rapidcovid->setStatusBar(statusbar);

        retranslateUi(Rapidcovid);

        QMetaObject::connectSlotsByName(Rapidcovid);
    } // setupUi

    void retranslateUi(QMainWindow *Rapidcovid)
    {
        Rapidcovid->setWindowTitle(QCoreApplication::translate("Rapidcovid", "MainWindow", nullptr));
        label_test->setText(QString());
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Rapidcovid", "<html><head/><body><p>RAPID COVID TEST</p><p><span style=\" font-size:22pt; font-weight:400;\">A Virtual Covid-19 Ditector</span></p></body></html>", nullptr));
        pushButton_rct->setText(QCoreApplication::translate("Rapidcovid", "TEST", nullptr));
        pushButton_quit->setText(QCoreApplication::translate("Rapidcovid", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rapidcovid: public Ui_Rapidcovid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAPIDCOVID_H
