#include "Headers/quepage3.h"
#include "ui_quepage3.h"

Quepage3::Quepage3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quepage3)
{
    ui->setupUi(this);
}

Quepage3::~Quepage3()
{
    delete ui;
}
