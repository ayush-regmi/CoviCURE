#include "Headers\hospitals.h"
#include "ui_hospitals.h"
#include <QtSql>
#include  <QtDebug>

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
