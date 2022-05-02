#include "hospital.h"
#include "ui_hospital.h"

QString greenHospital="QPushButton {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 106, 255, 255), stop:1 rgba(0, 255, 138, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 20px;"
                "font: 16pt;"
                "width: 100px;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
             "}";

QString redHospital ="QPushButton {"
                    "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"
                    "color: rgb(255, 255, 255);"
                    "border-radius: 20px;"
                    "font: 16pt;"
                    "width: 100px;"
                    "font-style: \"Cooper Black\";"
                 "}"
                    "QPushButton:hover {"
                      "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.853933 rgba(188, 209, 232, 255));"
                 "}";


QString darkPatients ="QPushButton {"
                    "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(7, 0, 172, 255), stop:1 rgba(0, 174, 94, 255));"
                    "color: rgb(255, 255, 255);"
                    "border-radius: 20px;"
                    "font: 26pt;"
                    "width: 100px;"
                    "font-style: \"Cooper Black\";"
                 "}"
                    "QPushButton:hover {"
                      "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.853933 rgba(188, 209, 232, 255));"
                 "}";


Hospital::Hospital(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Hospital)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    ui->pushButton_add->setStyleSheet(greenHospital);
    ui->pushButton_back->setStyleSheet(redHospital);
    ui->pushButton_patients->setStyleSheet(darkPatients);
}

extern QString License;

Hospital::~Hospital()
{
    delete ui;
}

void Hospital::on_pushButton_patients_clicked()
{
    patients= new Patients(this);
    patients->show();
}

Database updatehos;
void Hospital::on_pushButton_update_clicked()
{
    updatehos.connectDB("hospital");

        if(!updatehos.connectionDB()) {
            qDebug()<<" Can't connect "<<"connect to mysql error"<<updatehos.getDB().lastError().text();
            return ;
        }
        else {
             qDebug()<<" Successful connection."<<"Connected to mysql.";
             QString name= ui->name->text();
             QString address= ui->address->text();
             QString email= ui->email->text();
             QString phone= ui->phone->text();
             QString fax= ui->fax->text();
             QString Ropen= ui->ropen->text();
             QString Rclose= ui->rclose->text();
             QString Hopen= ui->hopen->text();
             QString Hclose= ui->hclose->text();
             QString Ocylinders= ui->oxygen->text();
             QString ventilators= ui->ventilator->text();
             QString icu= ui->ICU->text();
             QString ambulance= ui->ambulance->text();
             QString vacc= ui->vaccination->text();
             QString mri= ui->MRI->text();
             QString website= ui->website->text();
             QString beds= ui->beds->text();

             QSqlQuery qry;

             qry.prepare("update hospitals set  name='"+name+"', address='"+address+"', email='"+email+"', phone='"+phone+"', fax='"+fax+"', registrationOpenTime='"+Ropen+"', registrationCloseTime='"+Rclose+"', hospOpenTime='"+Hopen+"', hospCloseTime='"+Hclose+"', numOfBeds='"+beds+"', numOfOxygenCylinders='"+Ocylinders+"', numOfVentilater='"+ventilators+"', numOfICU='"+icu+"', ambulance='"+ambulance+"', vaccination='"+vacc+"', MRI='"+mri+"', website='"+website+"' where license='"+License+"'");


             if(qry.exec()){
                  QMessageBox:: information(this, "Updated", "Your data has been updated");
                 // this->hide();
             }
             else{
                 QMessageBox:: information(this, "Not updated", "There was a problem with updating.");
             }
        }
}


void Hospital::on_pushButton_back_clicked()
{
    this->close();
}

