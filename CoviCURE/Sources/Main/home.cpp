#include "Headers/Main/home.h"
#include "ui_home.h"

QString css="QPushButton {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0909091 rgba(0, 202, 255, 255), stop:0.863636 rgba(255, 0, 85, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 20px;"
                "font: 30pt;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
             "}";


Home::Home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);

        this->setWindowState(Qt::WindowMaximized);
        this-> showMaximized();
       // QPixmap pix(":/resources/img/CoviCURE.png");
        //ui -> label_dashboard -> setPixmap(pix);
        ui->pushButton_Hospital->setStyleSheet(css);
        ui->pushButton_Live->setStyleSheet(css);
        ui->pushButton_Rapidcovid->setStyleSheet(css);
        ui->pushButton_vaccine->setStyleSheet(css);
}

Home::~Home()
{
    delete ui;
}


void Home::on_pushButton_Hospital_clicked()
{
    choosehospitals = new ChooseHospitals(this);
    choosehospitals -> showMaximized();
}





void Home::on_pushButton_Live_clicked()
{
    livedash = new Livedash();
    livedash -> showMaximized();
}


void Home::on_pushButton_vaccine_clicked()
{
    vaccine_login = new Vaccine_Login();
    vaccine_login -> showMaximized();
}


void Home::on_pushButton_Rapidcovid_clicked()
{
    rapidcovid = new Rapidcovid();
    rapidcovid -> showMaximized();
}

