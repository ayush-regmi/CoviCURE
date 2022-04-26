#include "Headers/Live/livedash.h"
#include "ui_livedash.h"
#include <QDesktopServices>
#include <QUrl>
#include <QString>

QString cssLiveDash = "QPushButton {"
                  "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));"
                  "color: rgb(255, 255, 255);"
                  "border-radius: 20px;"
                  "width: 100px;"
                  "font: 25pt;"
                  "font-style: \"Cooper Black\";"
                "}"
                  "QPushButton:hover {"
                  "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
                "}";
QString liveDAshexit ="QPushButton {"
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

Livedash::Livedash(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Livedash)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    ui->pushButtonWHO->setStyleSheet(cssLiveDash);
    ui->pushButtonMoHP->setStyleSheet(cssLiveDash);
    ui->pushButtonWorld->setStyleSheet(cssLiveDash);
    ui->pushButtonNepal->setStyleSheet(cssLiveDash);
    ui->pushButtonBack->setStyleSheet(liveDAshexit);
}

Livedash::~Livedash()
{
    delete ui;
}

void Livedash::on_pushButtonWHO_clicked()
{
    QString WHO_link="https://www.who.int/emergencies/diseases/novel-coronavirus-2019/advice-for-public";
    QDesktopServices::openUrl(QUrl(WHO_link));
}


void Livedash::on_pushButtonMoHP_clicked()
{
    QString MoHP_link="https://covid19.mohp.gov.np/";
    QDesktopServices::openUrl(QUrl(MoHP_link));
}


void Livedash::on_pushButtonWorld_clicked()
{
    QString World_link="https://www.worldometers.info/coronavirus/";
    QDesktopServices::openUrl(QUrl(World_link));
}


void Livedash::on_pushButtonNepal_clicked()
{
    QString Nepal_link="https://www.worldometers.info/coronavirus/country/nepal/#graph-cases-daily";
    QDesktopServices::openUrl(QUrl(Nepal_link));
}


void Livedash::on_pushButtonBack_clicked()
{
    this->hide();
}
