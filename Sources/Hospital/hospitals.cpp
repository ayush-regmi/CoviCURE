#include "Headers/Hospital/hospitals.h"
#include "Headers/database.h"

#include "ui_hospitals.h"

//void connectDB(QString);
//Database connectHospital;

QString csshospitals="QPushButton {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0909091 rgba(0, 202, 255, 255), stop:0.863636 rgba(255, 0, 85, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 20px;"
                "font: 18pt;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
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
//    connectHospital.connectDB("hospital");
//    if(connectHospital.connectionDB()){
//       QSqlQuery query("SELECT address FROM hospitals");
//             while (query.first()) {
//                 QString name = query.value(0).toString();
//                 ui->hos1->setText(name);
//             }
//    }
//   else {
//        qDebug()<<" Can't connect "<<"connect to mysql error"<<connectHospital.getDB().lastError().text();
//    }
}

Hospitals::~Hospitals()
{
    delete ui;
   // connectHospital.getDB().close();
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

