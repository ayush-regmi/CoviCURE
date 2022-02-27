#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QPixmap>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

//    QPixmap bkgnd("F:/2nd semester/COMP/Project/Green-Corporation-Template.jpg");
//        bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatioByExpanding);
//        QPalette palette;
//        palette.setBrush(QPalette::Window, bkgnd);
//        this->setPalette(palette);

//    QPixmap pix("F:/2nd semester/COMP/Project/covid.jpg");
//        int w = ui->label_pic->width();
//        int h = ui->label_pic->height();
//        ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    QString email=ui->lineEdit_email->text();
    QString password=ui->lineEdit_password->text();

    if(email=="prabesh@email.com" && password=="prabesh")
    {
        QMessageBox::information(this, "Login", "Username and password is correct.\nThis will take you to a different page");
    }
    else{
         QMessageBox::warning(this,"Login", "Username or password is not correct");
    }
}

