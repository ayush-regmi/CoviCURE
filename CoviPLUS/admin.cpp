#include "admin.h"
#include "ui_admin.h"
#include <qglobal.h>
#include <random>

//#include <QRandomGenerator>

QString greenAdmin="QPushButton {"
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

QString redAdmin ="QPushButton {"
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

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();

    ui->pushButton_add->setStyleSheet(greenAdmin);
    ui->pushButton_back->setStyleSheet(redAdmin);
    High = 999999;
    Low = 100000;
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_pushButton_back_clicked()
{
    this->close();
}

//quint32 v = QRandomGenerator::global()->bounded(999999);
//QString License = QString::number(v);

qsrand(qrand());
QString License = QString::number(qrand() % ((High + 1) - Low) + Low);

Database addhos;
void Admin::on_pushButton_add_clicked()
{
   addhos.connectDB("hospital");

        if(!addhos.connectionDB()) {
            qDebug()<<" Can't connect "<<"connect to mysql error"<<addhos.getDB().lastError().text();
            return ;
        }
        else {
             qDebug()<<" Successful connection."<<"Connected to mysql.";
             QString name= ui->name->text();
             QString address= ui->address->text();
             QString email= ui->email->text();
             QString phone= ui->phone->text();
             QString mobile= ui->mobile->text();
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

                qry.prepare("INSERT INTO hospitals (name, address, email, mobile, phone, fax, registrationOpenTime, registrationClosetime, hospOpenTime, hospCloseTime, numOfBeds, numOfOxygenCylinders, numOfVentilater, numOfICU, ambulance, vaccination, MRI, website, license)"
                            "VALUES (:name, :address, :email, :mobile, :phone, :fax, :ROpen, :RClose, :HOpen, :HClose, :Beds, :Oxygen, :Ventilaters, :ICU, :Ambulance, :Vacc, :MRI, :website, :license) ");
                qry.bindValue(":name", name);
                qry.bindValue(":address",address);
                qry.bindValue(":email",email);
                qry.bindValue(":mobile", mobile);
                qry.bindValue(":phone",phone);
                qry.bindValue(":fax",fax);
                qry.bindValue(":ROpen",Ropen);
                qry.bindValue(":RClose",Rclose);
                qry.bindValue(":HOpen",Hopen);
                qry.bindValue(":HClose",Hclose);
                qry.bindValue(":Beds",beds);
                qry.bindValue(":Oxygen",Ocylinders);
                qry.bindValue(":Ventilaters",ventilators);
                qry.bindValue(":ICU",icu);
                qry.bindValue(":Ambulance",ambulance);
                qry.bindValue(":Vacc",vacc);
                qry.bindValue(":MRI",mri);
                qry.bindValue(":website",website);
                qry.bindValue(":license",License);


             if(qry.exec()){
                  QMessageBox:: information(this, "Successful", "Your data has been added");

                  this->hide();
             }
             else{
                 QMessageBox:: information(this, "Error", "There was a problem while adding data.");
             }
        }
}

