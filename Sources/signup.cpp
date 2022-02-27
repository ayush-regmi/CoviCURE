#include "Headers\signup.h"
#include "ui_signup.h"

Signup::Signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);

//    QPixmap pix("F:/2nd semester/COMP/Project/covid.jpg");
//        int w = ui->label_pic->width();
//        int h = ui->label_pic->height();
//        ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));


}

Signup::~Signup()
{
    delete ui;
}
