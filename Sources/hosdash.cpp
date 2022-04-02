#include "Headers/hosdash.h"
#include "ui_hosdash.h"

Hosdash::Hosdash(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Hosdash)
{
    ui->setupUi(this);
}

Hosdash::~Hosdash()
{
    delete ui;
}
