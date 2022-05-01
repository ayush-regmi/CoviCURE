#include "Headers/Rapidcovid/quepage3.h"
#include "ui_quepage3.h"
#include <QDebug>

extern int count;

QString cssquepage3=
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

Quepage3::Quepage3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quepage3)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    ui->que7_opt1->setStyleSheet(cssquepage3);
    ui->que7_opt2->setStyleSheet(cssquepage3);
    ui->que7_opt3->setStyleSheet(cssquepage3);
    ui->que7_opt4->setStyleSheet(cssquepage3);
    ui->que7_opt5->setStyleSheet(cssquepage3);
    ui->que7_opt6->setStyleSheet(cssquepage3);
    ui->que7_opt7->setStyleSheet(cssquepage3);
    ui->que7_opt8->setStyleSheet(cssquepage3);
    ui->que8_opt1->setStyleSheet(cssquepage3);
    ui->que8_opt2->setStyleSheet(cssquepage3);
    ui->que8_opt3->setStyleSheet(cssquepage3);
    ui->que8_opt4->setStyleSheet(cssquepage3);
    ui->que8_opt5->setStyleSheet(cssquepage3);
    ui->que8_opt6->setStyleSheet(cssquepage3);
    ui->next_quepage3->setStyleSheet(cssquepage3);
    ui->back_quepage3->setStyleSheet(cssquepage3);
}

double Quepage3::count=count;

Quepage3::~Quepage3()
{
    delete ui;
}

void Quepage3::on_que7_opt1_clicked()
{
    count+=0.75;
    qDebug() << "count" << count;
}


void Quepage3::on_que7_opt2_clicked()
{
    count+=1;
    qDebug() << "count" << count;
}


void Quepage3::on_que7_opt3_clicked()
{
    count+=0.75;
    qDebug() << "count" << count;
}


void Quepage3::on_que7_opt4_clicked()
{
    count+=1;
    qDebug() << "count" << count;
}


void Quepage3::on_que7_opt5_clicked()
{
    count+=0.50;
    qDebug() << "count" << count;
}


void Quepage3::on_que7_opt6_clicked()
{
    count+=1;
    qDebug() << "count" << count;
}


void Quepage3::on_que7_opt7_clicked()
{
    count+=0.75;
    qDebug() << "count" << count;
}


void Quepage3::on_que7_opt8_clicked()
{
    count+=1;
    qDebug() << "count" << count;
}


void Quepage3::on_que8_opt1_clicked()
{
    count+=0.75;
    qDebug() << "count" << count;
}


void Quepage3::on_que8_opt2_clicked()
{
    count+=0.75;
    qDebug() << "count" << count;
}


void Quepage3::on_que8_opt3_clicked()
{
    count+=0.50;
    qDebug() << "count" << count;
}


void Quepage3::on_que8_opt4_clicked()
{
    count+=0.25;
    qDebug() << "count" << count;
}


void Quepage3::on_que8_opt5_clicked()
{
    count+=0.50;
    qDebug() << "count" << count;
}


void Quepage3::on_que8_opt6_clicked()
{
    count+=0.25;
    qDebug() << "count" << count;
}


void Quepage3::on_que8_opt7_clicked()
{
    count+=0.25;
    qDebug() << "count" << count;
}


void Quepage3::on_que8_opt8_clicked()
{
    count+=0.25;
    qDebug() << "count" << count;
}

void Quepage3::on_next_quepage3_clicked()
{
    hide();
    quepage4 = new Quepage4(this);
    quepage4->show();
}

