#include "Headers/hospitals.h"
#include "Headers/database.h"

#include "ui_hospitals.h"

Hospitals::Hospitals(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Hospitals)
{
    ui->setupUi(this);
}

Hospitals::~Hospitals()
{
    delete ui;
}

void connectDB(QString);
Database connectHospital;
void Hospitals::on_hos1_clicked()
{
    connectHospital.connectDB("hospital");
}

