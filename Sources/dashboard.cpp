#include "Headers\dashboard.h"
#include "ui_dashboard.h"
#include <QPixmap>
//#include<Headers/vaccine_login.h>

Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Hp/Documents/PROJECTS/CoviCURE/img/dashboard.png");
    //int w = ui->label_dashboard->width();
    //int h = ui->label_dashboard->height();
    ui -> label_dashboard -> setPixmap(pix.scaled(1400, 417, Qt::KeepAspectRatio));
}

Dashboard::~Dashboard()
{
    delete ui;
}



void Dashboard::on_pushButton_Hospital_clicked()
{
    choosehospitals = new ChooseHospitals();
    choosehospitals->show();
}


void Dashboard::on_pushButton_vaccine_clicked()
{
   hide();
   vaccine_login = new Vaccine_Login(this);
   vaccine_login->show();
}

