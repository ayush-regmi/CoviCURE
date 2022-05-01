#include "hospital.h"
#include "ui_hospital.h"

Hospital::Hospital(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Hospital)
{
    ui->setupUi(this);
}

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
             QString Licence= ui->licence->text();
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

             qry.prepare("update hospitals set  name='"+name+"', address='"+address+"', email='"+email+"', phone='"+phone+"', fax='"+fax+"', registrationOpenTime='"+Ropen+"', registrationCloseTime='"+Rclose+"', hospOpenTime='"+Hopen+"', hospCloseTime='"+Hclose+"', numOfBeds='"+beds+"', numOfOxygenCylinders='"+Ocylinders+"', numOfVentilater='"+ventilators+"', numOfICU='"+icu+"', ambulance='"+ambulance+"', vaccination='"+vacc+"', MRI='"+mri+"', website='"+website+"' where licence='"+Licence+"'");


             if(qry.exec()){
                  QMessageBox:: information(this, "Updated", "Your data has been updated");

                  this->hide();
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

