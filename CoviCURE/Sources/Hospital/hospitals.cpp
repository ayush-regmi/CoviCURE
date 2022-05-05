#include "Headers/Hospital/hospitals.h"
#include "Headers/database.h"
#include "Headers/Hospital/hospitals.h"

#include "ui_hospitals.h"

void connectDB(QString);
Database connectHospital;
int Hospitals::hospID = 0;


QString csshospitals="QPushButton {"
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

QString hospback ="QPushButton {"
                    "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"

                    "color: rgb(255, 255, 255);"
                    "border-radius: 20px;"
                    "font: 25pt;"
                    "width: 100px;"
                    "font-style: \"Cooper Black\";"
                 "}"
                    "QPushButton:hover {"
                      "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.853933 rgba(188, 209, 232, 255));"
                 "}";

Hospitals::Hospitals(QWidget *parent) : QMainWindow(parent),ui(new Ui::Hospitals) {
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();


    ui->hos1->setStyleSheet(csshospitals);
    ui->hos2->setStyleSheet(csshospitals);
    ui->hos3->setStyleSheet(csshospitals);
    ui->hos4->setStyleSheet(csshospitals);
    ui->hos5->setStyleSheet(csshospitals);
    ui->hos6->setStyleSheet(csshospitals);
    ui->hos7->setStyleSheet(csshospitals);
    ui->hos8->setStyleSheet(csshospitals);
    ui->hos9->setStyleSheet(csshospitals);

    connectHospital.connectDB("hospital");
    if(connectHospital.connectionDB()) {
        qDebug()<<" yessss";
    }
    else {
        qDebug()<<" Cannot!!!!!!!";
    }
    QString name[9];
    int rowCount = 0;
    QSqlQuery run;

    // Counting number of rows
    run.exec("SELECT * FROM hospitals");
    while(run.next())
        rowCount++;

    if(run.exec("SELECT name FROM hospitals")) {
            for(int i = 0; i < rowCount; i++) {
                run.next();
                name[i] = run.value(0).toString();
            }
            ui->hos1->setText((name[0]));
            ui->hos2->setText((name[1]));
            ui->hos3->setText((name[2]));
            ui->hos4->setText((name[3]));
            ui->hos5->setText((name[4]));
            ui->hos6->setText((name[5]));
            ui->hos7->setText((name[6]));
            ui->hos8->setText((name[7]));
            ui->hos9->setText((name[8]));
     }
    else {
        qDebug()<<"Cannot ####";
    }
}

Hospitals::~Hospitals() {
    delete ui;
    hospID = 0;
    connectHospital.getDB().close();
}

void Hospitals::on_back_clicked() {
    this->close();
    hospID = 0;
}

void Hospitals::on_hos1_clicked() {
    hospID += 1;
    myhospital = new Myhospital(hospID);
    myhospital -> show();
    this->close();
    hospID = 0;
}


void Hospitals::on_hos2_clicked() {
    hospID += 2;
    myhospital = new Myhospital(hospID);
    myhospital -> show();
    this->close();
    hospID = 0;
}


void Hospitals::on_hos3_clicked() {
    hospID += 3;
    myhospital = new Myhospital(hospID);
    myhospital -> show();
    this->close();
    hospID = 0;
}

void Hospitals::on_hos4_clicked() {
    hospID += 4;
    myhospital = new Myhospital(hospID);
    myhospital -> show();
    this->close();
    hospID = 0;
}

void Hospitals::on_hos5_clicked() {
    hospID += 5;
    myhospital = new Myhospital(hospID);
    myhospital -> show();
    this->close();
    hospID = 0;
}

void Hospitals::on_hos6_clicked() {
    hospID += 6;
    myhospital = new Myhospital(hospID);
    myhospital -> show();
    this->close();
    hospID = 0;
}

void Hospitals::on_hos7_clicked() {
    hospID += 7;
    myhospital = new Myhospital(hospID);
    myhospital -> show();
    this->close();
    hospID = 0;
}

void Hospitals::on_hos8_clicked() {
    hospID += 8;
    myhospital = new Myhospital(hospID);
    myhospital -> show();
    this->close();
    hospID = 0;
}

void Hospitals::on_hos9_clicked() {
    hospID += 9;
    myhospital = new Myhospital(hospID);
    myhospital -> show();
    this->close();
    hospID = 0;
}
