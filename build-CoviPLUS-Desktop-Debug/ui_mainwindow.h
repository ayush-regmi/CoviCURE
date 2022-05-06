/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_3;
    QLabel *label_3;
    QLineEdit *lineEdit_User;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QGroupBox *groupBox_4;
    QLabel *label_5;
    QPushButton *pushButton_hos;
    QPushButton *pushButton_Close;
    QLineEdit *lineEdit_license;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1300, 800);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(60, 80, 581, 501));
        groupBox_3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 170, 186, 255), stop:1 rgba(0, 151, 13, 255));\n"
"border-radius: 20px;"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 40, 521, 121));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(false);
        font.setStrikeOut(false);
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QLatin1String("font: 600 36pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        label_3->setAlignment(Qt::AlignCenter);
        lineEdit_User = new QLineEdit(groupBox_3);
        lineEdit_User->setObjectName(QStringLiteral("lineEdit_User"));
        lineEdit_User->setGeometry(QRect(280, 210, 251, 41));
        lineEdit_User->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 16pt \"Segoe UI\";"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 200, 181, 61));
        label->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 20pt \"Segoe UI\";"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 300, 181, 61));
        label_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 20pt \"Segoe UI\";"));
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit_password = new QLineEdit(groupBox_3);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(280, 310, 251, 41));
        lineEdit_password->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 16pt \"Segoe UI\";"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton_login = new QPushButton(groupBox_3);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(350, 400, 181, 71));
        pushButton_login->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 106, 255, 255), stop:1 rgba(0, 255, 138, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 29pt \"Segoe UI\";"));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(690, 80, 541, 501));
        groupBox_4->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 170, 186, 255), stop:1 rgba(0, 151, 13, 255));\n"
"border-radius: 20px;"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 40, 481, 121));
        label_5->setFont(font);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setAutoFillBackground(false);
        label_5->setStyleSheet(QLatin1String("font: 600 36pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        label_5->setAlignment(Qt::AlignCenter);
        pushButton_hos = new QPushButton(groupBox_4);
        pushButton_hos->setObjectName(QStringLiteral("pushButton_hos"));
        pushButton_hos->setGeometry(QRect(160, 300, 261, 61));
        pushButton_hos->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 106, 255, 255), stop:1 rgba(0, 255, 138, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 26pt \"Segoe UI\";"));
        pushButton_Close = new QPushButton(groupBox_4);
        pushButton_Close->setObjectName(QStringLiteral("pushButton_Close"));
        pushButton_Close->setGeometry(QRect(160, 400, 261, 61));
        pushButton_Close->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 106, 255, 255), stop:1 rgba(0, 255, 138, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 600 26pt \"Segoe UI\";"));
        lineEdit_license = new QLineEdit(groupBox_4);
        lineEdit_license->setObjectName(QStringLiteral("lineEdit_license"));
        lineEdit_license->setGeometry(QRect(160, 210, 261, 51));
        lineEdit_license->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(64, 64, 95);\n"
"font: 18pt \"Segoe UI\";"));
        lineEdit_license->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p>ADMIN LOGIN</p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p>HOSPITAL LOGIN</p></body></html>", Q_NULLPTR));
        pushButton_hos->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        pushButton_Close->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        lineEdit_license->setPlaceholderText(QApplication::translate("MainWindow", "  L  I  C  E  N  C  E", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
