#include "Headers/Rapidcovid/rapidcovid.h"
#include "ui_rapidcovid.h"
#include <QPixmap>

QString cssrct="QPushButton {"
                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 20px;"
                "font: 17pt;"
                "width: 100px;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
             "}";

QString rctquit ="QPushButton {"
                  "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"

                  "color: rgb(255, 255, 255);"
                  "border-radius: 20px;"
                  "font: 20pt;"
                  "width: 90px;"
                  "font-style: \"Cooper Black\";"
               "}"
                  "QPushButton:hover {"
                    "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.853933 rgba(188, 209, 232, 255));"
               "}";

Rapidcovid::Rapidcovid(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Rapidcovid)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    ui->pushButton_rct->setStyleSheet(cssrct);
    ui->pushButton_quit->setStyleSheet(rctquit);

}

Rapidcovid::~Rapidcovid()
{
    delete ui;
}

void Rapidcovid::on_pushButton_rct_clicked()
{
    hide();
    this->hide();
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

