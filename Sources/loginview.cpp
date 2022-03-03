#include "Headers/loginview.h"
#include "ui_loginview.h"

Loginview::Loginview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Loginview)
{
    ui->setupUi(this);
    QPixmap pix2("D:/Sushankhya/CoviCURE/img/login_vaccine");
    ui -> Loginbanner -> setPixmap(pix2.scaled(181, 91, Qt::KeepAspectRatio));

}

Loginview::~Loginview()
{
    delete ui;
}
