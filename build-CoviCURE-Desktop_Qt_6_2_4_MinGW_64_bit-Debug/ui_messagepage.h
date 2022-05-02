/********************************************************************************
** Form generated from reading UI file 'messagepage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEPAGE_H
#define UI_MESSAGEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>

QT_BEGIN_NAMESPACE

class Ui_Messagepage
{
public:
    QGroupBox *groupbox_display;

    void setupUi(QDialog *Messagepage)
    {
        if (Messagepage->objectName().isEmpty())
            Messagepage->setObjectName(QString::fromUtf8("Messagepage"));
        Messagepage->resize(1200, 700);
        groupbox_display = new QGroupBox(Messagepage);
        groupbox_display->setObjectName(QString::fromUtf8("groupbox_display"));
        groupbox_display->setGeometry(QRect(250, 40, 691, 561));
        groupbox_display->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 213, 255, 255), stop:1 rgba(255, 0, 106, 255));\n"
"border-radius: 20px;"));
        groupbox_display->setAlignment(Qt::AlignCenter);

        retranslateUi(Messagepage);

        QMetaObject::connectSlotsByName(Messagepage);
    } // setupUi

    void retranslateUi(QDialog *Messagepage)
    {
        Messagepage->setWindowTitle(QCoreApplication::translate("Messagepage", "Dialog", nullptr));
        groupbox_display->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Messagepage: public Ui_Messagepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEPAGE_H
