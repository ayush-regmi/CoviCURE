#include "Headers/Rapidcovid/quepage1.h"
#include "ui_quepage1.h"


Quepage1::Quepage1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quepage1)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
}

Quepage1::~Quepage1()
{
    delete ui;
}

void Quepage1::on_next_quepage1_clicked()
{
    hide();
    quepage2 = new Quepage2();
    quepage2->show();
}
