#include "Headers\dashboard.h"
#include "ui_dashboard.h"
#include <QPixmap>
//#include<Headers/vaccine_login.h>

Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
{

    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    ui->setupUi(this);
   QPixmap pix(":/resources/img/CoviCURE.png");
   ui -> label_dashboard -> setPixmap(pix.scaled(1120, 368, Qt::KeepAspectRatio));
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

