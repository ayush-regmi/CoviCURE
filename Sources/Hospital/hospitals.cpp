#include "Headers/Hospital/hospitals.h"
#include "Headers/database.h"

#include "ui_hospitals.h"

void connectDB(QString);
Database connectHospital;

Hospitals::Hospitals(QWidget *parent) : QMainWindow(parent),ui(new Ui::Hospitals) {
    ui->setupUi(this);
    connectHospital.connectDB("hospital");
    if(connectHospital.connectionDB()){
       QSqlQuery query("SELECT address FROM hospitals");
             while (query.first()) {
                 QString name = query.value(0).toString();
                 ui->hos1->setText(name);
             }
    }
   else {
        qDebug()<<" Can't connect "<<"connect to mysql error"<<connectHospital.getDB().lastError().text();
    }
}

Hospitals::~Hospitals()
{
    delete ui;
    connectHospital.getDB().close();
}


//void Hospitals::on_hos1_clicked()
//{
//    connectHospital.connectDB("hospital");
//    QString name;
//        QSqlQuery run;
//        //run.prepare("SELECT * FROM hospitals WHERE name='"+name+"'");
//        if(run.exec("SELECT * FROM hospitals WHERE name='"+name+"'"))
//        {
//            int count=0;
//            while(run.next())
//            {
//                name=run.value(1).toString();

//                ui->hos1->setText(name);
//               // ui->hos1->setPlaceholderText(name);
//               // ui->lineEdit_Client_ID->setPlaceholderText(client_ID);
//               // ui->lineEdit_Client_Email->setPlaceholderText(email);
//               // ui->lineEdit_Client_PhoneNo->setPlaceholderText(phone);
//                count++;
//            }
//            if(count==1)
//            {
//                connectHospital.getDB().close();
//            }
//    }
//}

