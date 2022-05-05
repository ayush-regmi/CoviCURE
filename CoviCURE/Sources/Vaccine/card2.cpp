#include "Headers/Vaccine/card2.h"
#include "ui_card2.h"

Card2::Card2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Card2)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
}

Card2::~Card2()
{
    delete ui;
}
