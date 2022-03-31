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

bool connectDB(QString);
Database connectHospital;



