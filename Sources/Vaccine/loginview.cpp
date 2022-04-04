#include "Headers/Vaccine/loginview.h"
#include "ui_loginview.h"

Loginview::Loginview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Loginview)
{
    ui->setupUi(this);
    QPixmap pix2(":/resources/img/login_vaccine.png");
    ui -> Loginbanner -> setPixmap(pix2.scaled(181, 91, Qt::KeepAspectRatio));

}

Loginview::~Loginview()
{
    delete ui;
}
