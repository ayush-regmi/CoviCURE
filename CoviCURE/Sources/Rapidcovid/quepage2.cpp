#include "Headers/Rapidcovid/quepage2.h"
#include "ui_quepage2.h"
#include <QDebug>
#include <QtGlobal>
//int count2;
double count2;
//extern double count;
QString cssquepage2=
        "QPushButton {"
                          "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"

                          "color: rgb(255, 255, 255);"
                          "border-radius: 20px;"
                          "font: 20pt;"
                          "width: 90px;"
                          "font-style: \"Cooper Black\";"
                       "}"
        "QPushButton:hover {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
                            "}";


Quepage2::Quepage2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quepage2)
{

    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    ui->que4_opt1->setStyleSheet(cssquepage2);
    ui->que4_opt2->setStyleSheet(cssquepage2);
    ui->que5_opt1->setStyleSheet(cssquepage2);
    ui->que5_opt2->setStyleSheet(cssquepage2);
    ui->que6_opt1->setStyleSheet(cssquepage2);
    ui->que6_opt2->setStyleSheet(cssquepage2);
    ui->next_quepage2->setStyleSheet(cssquepage2);
    ui->back_quepage2->setStyleSheet(cssquepage2);
}

//double Quepage2::count2 = 0;


Quepage2::~Quepage2()
{
    delete ui;
}
void Quepage2::on_next_quepage2_clicked()
{
    hide();
    quepage3 = new Quepage3(this);
    quepage3->show();
}

//void Quepage2::on_next_quepage2_clicked()
//{
//    hide();
//    quepage3 = new Quepage3(this);
//    quepage3->show();
//}

void Quepage2::on_que4_opt1_clicked()
{
    count2+=1;
    qDebug() << "count2" << count2;
}


void Quepage2::on_que4_opt2_clicked()
{
    count2+=0;
    qDebug() << "count2" << count2;
}


void Quepage2::on_que5_opt1_clicked()
{
    count2+=1;
    qDebug() << "count2" << count2;
}


void Quepage2::on_que5_opt2_clicked()
{
    count2+=0;
    qDebug() << "count2" << count2;
}


void Quepage2::on_que6_opt1_clicked()
{
    count2+=1;
    qDebug() << "count2" << count2;
}


void Quepage2::on_que6_opt2_clicked()
{
    count2+=0;
    qDebug() << "count2" << count2;
}




