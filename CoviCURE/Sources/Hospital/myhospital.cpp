#include "Headers\Hospital\myhospital.h"
#include "ui_myhospital.h"
#include <string>
#include <iostream>
#include <QPixmap>

QString yesCss="QLabel {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 174, 72, 255), stop:1 rgba(0, 216, 135, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 8px;"
                "font: 16pt;"
                "width: 100px;"
                "font-style: \"Cooper Black\";"
             "}";


QString noCss ="QLabel {"
                    "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"
                    "color: rgb(255, 255, 255);"
                    "border-radius: 8px;"
                    "font: 16pt;"
                    "width: 100px;"
                    "font-style: \"Cooper Black\";"
                 "}";


void connectDB(QString);
Database connectMyHospital;


Myhospital::Myhospital(int hospID, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Myhospital)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();

    // Pictures
    QPixmap ambulancePix(":/resources/img/ambulance.png");
    QPixmap noAmbulancePix(":/resources/img/noAmbulance.png");
    QPixmap mriPix(":/resources/img/cardiology.png");
    QPixmap noMriPix(":/resources/img/noMri.png");
    QPixmap vaccinePix(":/resources/img/vaccine.png");
    QPixmap noVaccinePix(":/resources/img/noVaccine.png");

    QString s = QString::number(hospID);
    qDebug() << "HOSPIDDDD  " << hospID;

    connectMyHospital.connectDB("hospital");
    if(connectMyHospital.connectionDB()) {
        qDebug()<<" yessss";
    }
    else {
        qDebug()<<" Cannot!!!!!!!";
    }
    QString name, address, email, mobile, phone, fax, website;
    QString beds, doctors, oxygen, ventilater, icu;
    QString hospOpen, hospClose, regOpen, regClose;
    QString ambulance, mri, vaccine;
    QSqlQuery run;
    if(run.exec("SELECT * FROM hospitals WHERE id='"+s+"'")) {
                run.next();
                name = run.value(1).toString();
                address = run.value(2).toString();
                email = run.value(3).toString();
                phone = run.value(4).toString();
                mobile = run.value(5).toString();
                fax = run.value(6).toString();
                website = run.value(18).toString();
                beds = run.value(11).toString();
                doctors = run.value(19).toString();
                oxygen = run.value(12).toString();
                ventilater = run.value(13).toString();
                icu = run.value(14).toString();
                hospOpen = run.value(9).toString();
                hospClose = run.value(10).toString();
                regOpen = run.value(7).toString();
                regClose = run.value(8).toString();
                mri = run.value(17).toString();
                ambulance = run.value(15).toString();
                vaccine = run.value(16).toString();
            }
            ui->name->setText((name));
            ui->name_next->setText((name));
            ui->address->setText((address));
            ui->email->setText((email));
            ui->email_next->setText((email));
            ui->phone->setText((phone));
            ui->mobile_2->setText((phone));
            ui->mobile->setText((mobile));
            ui->fax->setText((fax));
            ui->website->setText((website));
            ui->doctors->setText((doctors));
            ui->beds->setText((beds));
            ui->icu->setText((icu));
            ui->oxygen->setText((oxygen));
            ui->ventilaters->setText((ventilater));

            if(hospOpen == "12:00 AM" && hospClose == "11:59 PM") {
                ui->opening->setText("24 Hours");
            }
            else {
                ui->opening->setText(hospOpen + " to " + hospClose);
            }
            if(regOpen == "12:00 AM" && regClose == "11:59 PM") {
                ui->opening->setText("24 Hours");
            }
            else {
                ui->opening_2->setText((regOpen + " to " + regClose));
            }
            if(ambulance == "1") {
                ui->ambulance->setPixmap(ambulancePix.scaled(101, 101, Qt::KeepAspectRatio));
                ui->label_ambulance->setStyleSheet(yesCss);
                ui->ambulance->setStyleSheet("border-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 255, 64, 255), stop:1 rgba(181, 255, 0, 255));");
            }
            else {
                ui->ambulance->setPixmap(noAmbulancePix.scaled(101, 101, Qt::KeepAspectRatio));
                ui->label_ambulance->setStyleSheet(noCss);
            }
            if(mri == "1") {
                ui->mri->setPixmap(mriPix.scaled(101, 101, Qt::KeepAspectRatio));
                ui->label_mri->setStyleSheet(yesCss);
            }
            else {
                ui->mri->setPixmap(noMriPix.scaled(101, 101, Qt::KeepAspectRatio));
                ui->label_mri->setStyleSheet(noCss);
            }
            if(vaccine == "1") {
                ui->vaccine->setPixmap(vaccinePix.scaled(101, 101, Qt::KeepAspectRatio));
                ui->label_vaccine->setStyleSheet(yesCss);
            }
            else {
                ui->vaccine->setPixmap(noVaccinePix.scaled(101, 101, Qt::KeepAspectRatio));
                ui->label_vaccine->setStyleSheet(noCss);
            }
}

Myhospital::~Myhospital()
{
    delete ui;
}
