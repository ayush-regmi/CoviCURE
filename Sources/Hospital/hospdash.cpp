#include "Headers\Hospital\hospdash.h"
#include "ui_hospdash.h"

QString cssHosDash="QPushButton {"
                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 10px;"
                "font: 26pt;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
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
    ui->pushDashboard->setStyleSheet(cssHosDash);
}

HospDash::~HospDash()
{
    delete ui;
}

void HospDash::on_pushHospitals_clicked()
{
    hospitals = new Hospitals();
    hospitals -> show();
    this->hide();
}

void HospDash::on_pushVirtualdoctor_clicked() {
    rapidcovid = new Rapidcovid();
    rapidcovid -> show();
    this->hide();
}

void HospDash::on_pushAppointment_clicked() {
    appointment = new Appointment();
    appointment -> show();
    this->hide();
}


void HospDash::on_pushDashboard_clicked() {
    // Hide the HelpWindow itself
    // or this->close()
    this->hide();

    // Show the MainWindow (i.e. the parent window)
    QWidget *parent = this->parentWidget();
    parent->show();
}

