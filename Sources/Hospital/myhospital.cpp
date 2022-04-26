#include "Headers\Hospital\myhospital.h"
#include "ui_myhospital.h"

Myhospital::Myhospital(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Myhospital)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
}

Myhospital::~Myhospital()
{
    delete ui;
}
