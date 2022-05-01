/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_Signup_3;
    QPushButton *pushButton_Login_3;
    QPushButton *pushButton_Exit_3;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 181, 189);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(280, 70, 731, 561));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 20px;"));
        pushButton_Signup_3 = new QPushButton(groupBox);
        pushButton_Signup_3->setObjectName(QString::fromUtf8("pushButton_Signup_3"));
        pushButton_Signup_3->setGeometry(QRect(170, 260, 381, 61));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Signup_3->sizePolicy().hasHeightForWidth());
        pushButton_Signup_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        pushButton_Signup_3->setFont(font);
        pushButton_Signup_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.629213 rgba(84, 154, 232, 255));\n"
"font: 14pt \"Arial Rounded MT Bold\";\n"
"\n"
"border-radius: 5px;\n"
"color: rgb(255, 255, 255);"));
        pushButton_Login_3 = new QPushButton(groupBox);
        pushButton_Login_3->setObjectName(QString::fromUtf8("pushButton_Login_3"));
        pushButton_Login_3->setGeometry(QRect(170, 360, 381, 61));
        sizePolicy.setHeightForWidth(pushButton_Login_3->sizePolicy().hasHeightForWidth());
        pushButton_Login_3->setSizePolicy(sizePolicy);
        pushButton_Login_3->setFont(font);
        pushButton_Login_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.629213 rgba(84, 154, 232, 255));\n"
"font: 14pt \"Arial Rounded MT Bold\";\n"
"\n"
"border-radius: 5px;\n"
"color: rgb(255, 255, 255);"));
        pushButton_Exit_3 = new QPushButton(groupBox);
        pushButton_Exit_3->setObjectName(QString::fromUtf8("pushButton_Exit_3"));
        pushButton_Exit_3->setGeometry(QRect(170, 460, 381, 59));
        sizePolicy.setHeightForWidth(pushButton_Exit_3->sizePolicy().hasHeightForWidth());
        pushButton_Exit_3->setSizePolicy(sizePolicy);
        pushButton_Exit_3->setFont(font);
        pushButton_Exit_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));\n"
"font: 14pt \"Arial Rounded MT Bold\";\n"
"border-radius: 5px;\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 651, 171));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setStrikeOut(false);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("font: 600 30pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        pushButton_Signup_3->setText(QCoreApplication::translate("MainWindow", "Signup", nullptr));
        pushButton_Login_3->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_Exit_3->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700;\">!! NAMASTE !!</span></p><p><span style=\" font-size:36pt; font-weight:400;\">Welcome to CoviCURE</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
