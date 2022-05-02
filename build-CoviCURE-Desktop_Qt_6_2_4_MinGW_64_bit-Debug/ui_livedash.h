/********************************************************************************
** Form generated from reading UI file 'livedash.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIVEDASH_H
#define UI_LIVEDASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Livedash
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButtonNepal;
    QPushButton *pushButtonWHO;
    QPushButton *pushButtonMoHP;
    QPushButton *pushButtonBack;
    QPushButton *pushButtonWorld;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Livedash)
    {
        if (Livedash->objectName().isEmpty())
            Livedash->setObjectName(QString::fromUtf8("Livedash"));
        Livedash->resize(1200, 800);
        centralwidget = new QWidget(Livedash);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(80, 40, 691, 561));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 20px;"));
        pushButtonNepal = new QPushButton(groupBox);
        pushButtonNepal->setObjectName(QString::fromUtf8("pushButtonNepal"));
        pushButtonNepal->setGeometry(QRect(240, 120, 171, 51));
        pushButtonWHO = new QPushButton(groupBox);
        pushButtonWHO->setObjectName(QString::fromUtf8("pushButtonWHO"));
        pushButtonWHO->setGeometry(QRect(70, 40, 111, 41));
        pushButtonMoHP = new QPushButton(groupBox);
        pushButtonMoHP->setObjectName(QString::fromUtf8("pushButtonMoHP"));
        pushButtonMoHP->setGeometry(QRect(70, 90, 121, 51));
        pushButtonBack = new QPushButton(groupBox);
        pushButtonBack->setObjectName(QString::fromUtf8("pushButtonBack"));
        pushButtonBack->setGeometry(QRect(240, 40, 101, 41));
        pushButtonWorld = new QPushButton(groupBox);
        pushButtonWorld->setObjectName(QString::fromUtf8("pushButtonWorld"));
        pushButtonWorld->setGeometry(QRect(80, 160, 211, 81));
        Livedash->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Livedash);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 17));
        Livedash->setMenuBar(menubar);
        statusbar = new QStatusBar(Livedash);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Livedash->setStatusBar(statusbar);

        retranslateUi(Livedash);

        QMetaObject::connectSlotsByName(Livedash);
    } // setupUi

    void retranslateUi(QMainWindow *Livedash)
    {
        Livedash->setWindowTitle(QCoreApplication::translate("Livedash", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        pushButtonNepal->setText(QCoreApplication::translate("Livedash", "Nepal", nullptr));
        pushButtonWHO->setText(QCoreApplication::translate("Livedash", "WHO", nullptr));
        pushButtonMoHP->setText(QCoreApplication::translate("Livedash", "MoHP", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("Livedash", "Back", nullptr));
        pushButtonWorld->setText(QCoreApplication::translate("Livedash", "World", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Livedash: public Ui_Livedash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIVEDASH_H
