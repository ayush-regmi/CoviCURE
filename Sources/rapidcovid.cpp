#include "Headers/rapidcovid.h"
#include "ui_rapidcovid.h"
#include <QPixmap>

Rapidcovid::Rapidcovid(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Rapidcovid)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/rct_img.jpg");
    ui -> label_img -> setPixmap(pix.scaled(1200, 400, Qt::KeepAspectRatio));
}

Rapidcovid::~Rapidcovid()
{
    delete ui;
}

void Rapidcovid::on_pushButton_2_clicked()
{

}

