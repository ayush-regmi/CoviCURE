#include "Headers/Hospital/appointment.h"
#include "ui_appointment.h"

Appointment::Appointment(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Appointment)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
}

Appointment::~Appointment()
{
    delete ui;
}
