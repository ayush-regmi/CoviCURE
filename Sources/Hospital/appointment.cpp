#include "Headers/Hospital/appointment.h"
#include "ui_appointment.h"
#include <QDebug>

QString cssbook="QPushButton {"
                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 20px;"
                "font: 25pt;"
                "width: 100px;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
             "}";

QString chooseback ="QPushButton {"
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

QString btnDeactive="QPushButton {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(44, 44, 44, 255), stop:1 rgba(110, 110, 110, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 20px;"
                "font: 25pt;"
                "width: 100px;"
                "font-style: \"Cooper Black\";"
             "}";

Appointment::Appointment(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Appointment)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();

    //button Style
   // ui->pushButtonBook->setStyleSheet(cssbook);
    ui->pushButton_Back->setStyleSheet(chooseback);
    ui->checkBox_Accept->setStyleSheet(cssbook);

    //Combo Mr
    ui->combo_Mr->addItem("Mr");
    ui->combo_Mr->addItem("Mrs");

    // Combo Sex
    ui->combo_Sex->addItem("Male");
    ui->combo_Sex->addItem("Female");
}

Appointment::~Appointment()
{
    delete ui;
}

void Appointment::on_pushButton_Back_clicked()
{
    this->close();
}



void Appointment::on_checkBox_Accept_stateChanged(int arg1)
{
    if(arg1) {
        ui->pushButton_Book->setStyleSheet(cssbook);
    }
    else {
        ui->pushButton_Book->setStyleSheet(btnDeactive);
    }
}

