#include "Headers/Rapidcovid/quepage1.h"
#include "ui_quepage1.h"
#include <QDebug>

double count;

QString cssquepage1=
        "QPushButton {"
                          "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.130682 rgba(0, 255, 96, 255), stop:0.909091 rgba(0, 225, 169, 255));"

                          "color: rgb(255, 255, 255);"
                          "border-radius: 15px;"
                          "font: 20pt;"
                          "width: 80px;"

                       "}"

        "QPushButton:hover {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
                            "}"
        "QpushButton:clicked {"
        "background-color: rgb(85, 170, 127);"
        "}";
QString nextback1=
        "QPushButton {"
                          "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"

                          "color: rgb(255, 255, 255);"
                          "border-radius: 10px;"
                          "font: 20pt;"
                          "width: 80px;"

                       "}"
        "QPushButton:hover {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
                            "}";

Quepage1::Quepage1(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Quepage1)
{

    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    ui->que1_opt1->setStyleSheet(cssquepage1);
    ui->que1_opt2->setStyleSheet(cssquepage1);
    ui->que1_opt3->setStyleSheet(cssquepage1);
    ui->que1_opt4->setStyleSheet(cssquepage1);
    ui->que2_opt1->setStyleSheet(cssquepage1);
    ui->que2_opt2->setStyleSheet(cssquepage1);
    ui->que2_opt3->setStyleSheet(cssquepage1);
    ui->que2_opt4->setStyleSheet(cssquepage1);
    ui->que3_opt1->setStyleSheet(cssquepage1);
    ui->que3_opt2->setStyleSheet(cssquepage1);
    ui->next_quepage1->setStyleSheet(nextback1);
    ui->back_quepage1->setStyleSheet(nextback1);
}

Quepage1::~Quepage1()
{
    delete ui;
}

void Quepage1::on_next_quepage1_clicked()
{
    hide();
    quepage2 = new Quepage2();
    quepage2->show();
}

void Quepage1::on_que1_opt1_clicked()
{
    count+=0.25;
    qDebug() << "count" << count;

}


void Quepage1::on_que1_opt2_clicked()
{
    count+=0.5;
    qDebug() << "count" << count;
}


void Quepage1::on_que1_opt3_clicked()
{
    count+=0.75;
    qDebug() << "count" << count;
}


void Quepage1::on_que1_opt4_clicked()
{
    count+=1;
    qDebug() << "count" << count;
}


void Quepage1::on_que2_opt1_clicked()
{
    count+=0.25;
    qDebug() << "count" << count;
}


void Quepage1::on_que2_opt2_clicked()
{
    count+=0.5;
    qDebug() << "coun" << count;
}


void Quepage1::on_que2_opt3_clicked()
{
    count+=0.75;
    qDebug() << "count" << count;
}


void Quepage1::on_que2_opt4_clicked()
{
    count+=1;
    qDebug() << "count" << count;
}


void Quepage1::on_que3_opt1_clicked()
{
    count+=0.75;
    qDebug() << "count" << count;
}

void Quepage1::on_que3_opt2_clicked()
{
    count+=0.5;
    qDebug() << "count" << count;
}


void Quepage1::on_back_quepage1_clicked()
{
    hide();
}

