#include "Headers\dashboard.h"
#include "ui_dashboard.h"
#include <QPixmap>
//#include<Headers/vaccine_login.h>

QString css="QPushButton {"
                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 10px;"
                "font: 26pt;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
             "}";

Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
{

    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    ui->setupUi(this);
   QPixmap pix(":/resources/img/CoviCURE.png");
   ui -> label_dashboard -> setPixmap(pix.scaled(1120, 368, Qt::KeepAspectRatio));
   ui->pushButton_Hospital->setStyleSheet(css);
   ui->pushButton_Live->setStyleSheet(css);
   ui->pushButton_Rapidcovid->setStyleSheet(css);
   ui->pushButton_vaccine->setStyleSheet(css);
}

Dashboard::~Dashboard()
{
    delete ui;
}


void Dashboard::on_pushButton_Hospital_clicked()
{
    hide();
    choosehospitals = new ChooseHospitals(this);
    choosehospitals->show();
}


void Dashboard::on_pushButton_vaccine_clicked()
{
   hide();
   vaccine_login = new Vaccine_Login(this);
   vaccine_login->show();
}

//void Dashboard::on_pushButton_Rapidcovid_clicked()
//{
//    hide();
  //  rapidcovid = new Rapidcovid();
 //   rapidcovid->show();
//}


void Dashboard::on_pushButton_Rapidcovid_clicked()
{
    hide();
    rapidcovid = new Rapidcovid();
    rapidcovid->show();
}

