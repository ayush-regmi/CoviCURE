#include "Headers/Vaccine/loginview.h"
#include "ui_loginview.h"

QString cssloginvacc="QPushButton {"
                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 50px;"
                "font: 17pt;"
                "width: 100px;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
             "}";

int PIN = 0;

Loginview::Loginview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Loginview)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();



    ui->pushButton_submit->setStyleSheet(cssloginvacc);
}



Loginview::~Loginview()
{
    delete ui;
}

void Loginview::on_card1_clicked()
{
    PIN = ui->lineEdit_pin->text().toInt();
    card1 = new Card1();
    card1->show();
}


void Loginview::on_card2_clicked()
{
    card2 = new Card2();
    card2->show();
}
