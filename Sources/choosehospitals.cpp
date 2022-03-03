#include "Headers\choosehospitals.h"
#include "ui_choosehospitals.h"
#include <QPixmap>

ChooseHospitals::ChooseHospitals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseHospitals)
{
    ui->setupUi(this);
    QPixmap pixSafe(":/resources/img/safe.png");
   // int wSafe = ui->label_safe->width();
   // int hSafe = ui->label_safe->height();
    ui -> label_safe -> setPixmap(pixSafe.scaled(300, 200, Qt::KeepAspectRatio));

    QPixmap pixDoctor(":/resources/img/doctor.png");
   // int wDoctor = ui->label_doctor->width();
   // int hDoctor = ui->label_doctor->height();
    ui -> label_doctor -> setPixmap(pixDoctor.scaled(300, 350, Qt::KeepAspectRatio));
}

ChooseHospitals::~ChooseHospitals()
{
    delete ui;
}

void ChooseHospitals::on_pushButton_ok_clicked()
{
    //hide();
    //availablehospitals = new AvailableHospitals();
   // availablehospitals->show();
}


void ChooseHospitals::on_pushButton_cancel_clicked()
{
    close();
}

