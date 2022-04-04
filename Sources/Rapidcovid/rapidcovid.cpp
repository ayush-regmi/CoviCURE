#include "Headers/Rapidcovid/rapidcovid.h"
#include "ui_rapidcovid.h"
#include <QPixmap>

Rapidcovid::Rapidcovid(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Rapidcovid)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();

   // QPixmap pix(":/resources/img/test.png");
   // ui -> label_test -> setPixmap(pix.scaled(700, 350, Qt::KeepAspectRatio));

   // QPixmap pix2(":/resources/img/test.png");
    // ui -> label_test-> setPixmap(pix.scaled(1000, 400, Qt::KeepAspectRatio));

    //QPixmap pix3(":/resources/img/awareness_pic.jpg");
    //ui -> label_awareness2-> setPixmap(pix.scaled(800, 400, Qt::KeepAspectRatio));

}

Rapidcovid::~Rapidcovid()
{
    delete ui;
}

void Rapidcovid::on_pushButton_rct_clicked()
{
    hide();
    quepage1 = new Quepage1(this);
    quepage1->show();
}

void Rapidcovid::on_pushButton_dashboard_clicked()
{
    hide();
    this->hide();
    // Show the MainWindow (i.e. the parent window)
    QWidget *parent = this->parentWidget();
    parent->show();
}

//void on_pushButton_loginQuit_clicked() {
//    hide();
//    this->hide();
//    // Show the MainWindow (i.e. the parent window)
//    QWidget *parent = this->parentWidget();
//    parent->show();
//}


//void Rapidcovid::on_pushButton_dashboard_clicked()
//{
//    hide();
//    dashboard = new Dashboard(this);
//    dashboard->show();
//}

