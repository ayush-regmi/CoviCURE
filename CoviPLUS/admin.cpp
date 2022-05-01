#include "admin.h"
#include "ui_admin.h"
#include<QMessageBox>

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_pushButton_back_clicked()
{
    this->close();
}

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
             QString Licence= ui->licence->text();
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

                qry.prepare("INSERT INTO hospitals (name, address, email, mobile, phone, fax, registrationOpenTime, registrationClosetime, hospOpenTime, hospCloseTime, numOfBeds, numOfOxygenCylinders, numOfVentilater, numOfICU, ambulance, vaccination, MRI, website, licence)"
                            "VALUES (:name, :address, :email, :mobile, :phone, :fax, :ROpen, :RClose, :HOpen, :HClose, :Beds, :Oxygen, :Ventilaters, :ICU, :Ambulance, :Vacc, :MRI, :website, :licence) ");
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
                qry.bindValue(":licence",Licence);


             if(qry.exec()){
                  QMessageBox:: information(this, "Successful", "Your data has been added");

                  this->hide();
             }
             else{
                 QMessageBox:: information(this, "Error", "There was a problem while adding data.");
             }
        }
}

