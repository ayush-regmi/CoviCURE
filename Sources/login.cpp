#include "Headers\login.h"
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

   QPixmap pix(":/resources/img/doctor.png");

       ui->label_3->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));

}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    QString email=ui->lineEdit_email->text();
    QString password=ui->lineEdit_password->text();

    if(email=="ayush@gmail.com" && password=="ayush")
    {

        dashboard = new Dashboard(this);
        dashboard -> show();
    }
    else{
         QMessageBox::warning(this,"Login", "Username or password is not correct");
    }
}

