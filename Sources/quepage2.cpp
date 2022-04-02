#include "Headers/quepage2.h"
#include "ui_quepage2.h"

Quepage2::Quepage2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quepage2)
{
    ui->setupUi(this);
}

Quepage2::~Quepage2()
{
    delete ui;
}

void Quepage2::on_next_quepage2_clicked()
{
        hide();
        quepage3 = new Quepage3(this);
        quepage3->show();
    }


