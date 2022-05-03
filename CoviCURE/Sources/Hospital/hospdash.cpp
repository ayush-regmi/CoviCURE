#include "Headers\Hospital\hospdash.h"
#include "ui_hospdash.h"

QString cssHosDash="QPushButton {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.153409 rgba(0, 98, 197, 255), stop:0.857955 rgba(0, 207, 60, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 20px;"
                "font: 26pt;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
             "}";

QString hospexit ="QPushButton {"
                  "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"

                  "color: rgb(255, 255, 255);"
                  "border-radius: 20px;"
                  "font: 25pt;"
                  "width: 100px;"
                  "font-style: \"Cooper Black\";"
               "}"
                  "QPushButton:hover {"
                    "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.853933 rgba(188, 209, 232, 255));"
               "}";


HospDash::HospDash(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HospDash)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();

    ui->pushHospitals->setStyleSheet(cssHosDash);
    ui->pushVirtualdoctor->setStyleSheet(cssHosDash);
    ui->pushAppointment->setStyleSheet(cssHosDash);
    ui->pushDashboard->setStyleSheet(hospexit);
}

HospDash::~HospDash()
{
    delete ui;
}

void HospDash::on_pushHospitals_clicked()
{
    hospitals = new Hospitals();
    hospitals -> show();
}

void HospDash::on_pushVirtualdoctor_clicked() {
    rapidcovid = new Rapidcovid();
    rapidcovid -> show();
}

void HospDash::on_pushAppointment_clicked() {
    appointment = new Appointment();
    appointment -> show();
}


void HospDash::on_pushDashboard_clicked() {
    this->close();
}
