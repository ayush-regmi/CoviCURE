#include "Headers\Hospital\choosehospitals.h"
#include "ui_choosehospitals.h"
#include <QPixmap>

QString csschoose="QPushButton {"
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

QString chooseexit ="QPushButton {"
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



ChooseHospitals::ChooseHospitals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseHospitals)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();

    ui->pushButton_ok->setStyleSheet(csschoose);
    ui->pushButton_cancel->setStyleSheet(chooseexit);
   // QPixmap pixSafe(":/resources/img/safe.png");
   // int wSafe = ui->label_safe->width();
   // int hSafe = ui->label_safe->height();
    //ui -> label_safe -> setPixmap(pixSafe.scaled(300, 200, Qt::KeepAspectRatio));

   // QPixmap pixDoctor(":/resources/img/doctor.png");
   // int wDoctor = ui->label_doctor->width();
   // int hDoctor = ui->label_doctor->height();
   // ui -> label_doctor -> setPixmap(pixDoctor.scaled(300, 350, Qt::KeepAspectRatio));
}

ChooseHospitals::~ChooseHospitals()
{
    delete ui;
}

void ChooseHospitals::on_pushButton_ok_clicked()
{
    hospdash = new HospDash();
    hospdash -> show();
    this->hide();
}

void ChooseHospitals::on_pushButton_cancel_clicked() {
    // Hide the HelpWindow itself
        // or this->close()
        this->hide();

        // Show the MainWindow (i.e. the parent window)
        QWidget *parent = this->parentWidget();
        parent->show();
}

