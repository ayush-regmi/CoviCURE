#include "Headers/Vaccine/card1.h"
#include "ui_card1.h"

Card1::Card1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Card1)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
}

Card1::~Card1()
{
    delete ui;
}
