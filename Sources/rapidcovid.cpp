#include "Headers/rapidcovid.h"
#include "ui_rapidcovid.h"
#include <QPixmap>

Rapidcovid::Rapidcovid(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Rapidcovid)
{
    ui->setupUi(this);

    QPixmap pix(":/resources/img/test.png");
    ui -> label_test -> setPixmap(pix.scaled(700, 350, Qt::KeepAspectRatio));

   // QPixmap pix2(":/resources/img/test.png");
    // ui -> label_test-> setPixmap(pix.scaled(1000, 400, Qt::KeepAspectRatio));

    //QPixmap pix3(":/resources/img/awareness_pic.jpg");
    //ui -> label_awareness2-> setPixmap(pix.scaled(800, 400, Qt::KeepAspectRatio));

}

Rapidcovid::~Rapidcovid()
{
    delete ui;
}
