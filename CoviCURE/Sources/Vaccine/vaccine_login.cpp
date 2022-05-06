#include "Headers/Vaccine/vaccine_login.h"
#include "ui_vaccine_login.h"
#include "Headers/Vaccine/loginview.h"
#include"Headers/Vaccine/signupvaccine.h"

QString cssvacc="QPushButton {"
                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 20px;"
                "font: 17pt;"
                "width: 100px;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
             "}";

QString vaccback ="QPushButton {"
                  "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"

                  "color: rgb(255, 255, 255);"
                  "border-radius: 20px;"
                  "font: 20pt;"
                  "width: 90px;"
                  "font-style: \"Cooper Black\";"
               "}"
                  "QPushButton:hover {"
                    "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.853933 rgba(188, 209, 232, 255));"
               "}";

Vaccine_Login::Vaccine_Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Vaccine_Login)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    ui->pushButton_login->setStyleSheet(cssvacc);
    ui->pushButton_register->setStyleSheet(cssvacc);
    ui->pushButton_back->setStyleSheet(vaccback);
}

Vaccine_Login::~Vaccine_Login()
{
    delete ui;
}

void Vaccine_Login::on_pushButton_login_clicked()
{
       loginview = new Loginview;
       loginview->show();
}


void Vaccine_Login::on_pushButton_register_clicked()
{
    signupvax=new Signupvaccine;
    signupvax->show();
}


void Vaccine_Login::on_pushButton_back_clicked()
{
    hide();
}
