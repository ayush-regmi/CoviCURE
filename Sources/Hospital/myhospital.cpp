#include "Headers\Hospital\myhospital.h"
#include "ui_myhospital.h"
#include <string>
#include <iostream>

void connectDB(QString);
Database connectMyHospital;




Myhospital::Myhospital(int hospID, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Myhospital)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    //++hospID;
    QString s = QString::number(hospID);
    qDebug() << "HOSPIDDDD  " << hospID;

    connectMyHospital.connectDB("hospital");
    if(connectMyHospital.connectionDB()) {
        qDebug()<<" yessss";
    }
    else {
        qDebug()<<" Cannot!!!!!!!";
    }
    QString name, address, email, mobile, phone, fax;
    QSqlQuery run;
    if(run.exec("SELECT * FROM hospitals WHERE id='"+s+"'")) {
                run.next();
                name = run.value(1).toString();
                address = run.value(2).toString();
                email = run.value(3).toString();
                phone = run.value(4).toString();
                mobile = run.value(5).toString();
                fax = run.value(6).toString();

            }
            ui->name->setText((name));
            ui->address->setText((address));
            ui->email->setText((email));
            ui->phone->setText((phone));
            ui->mobile->setText((mobile));
            ui->fax->setText((fax));
}

Myhospital::~Myhospital()
{
    delete ui;
}



//    if(run.exec("SELECT * FROM clientdetails WHERE clientId='"+client_ID+"'"))
//    {

//        while(run.next())
//        {
//            name=run.value(1).toString();
//            email=run.value(2).toString();
//            phone=run.value(3).toString();

//            ui->label_Client_Name->setText(name);
//            ui->label_Client_id->setText(client_ID);
//            ui->lineEdit_Client_Email->setText(email);
//            ui->lineEdit_Client_phoneNo->setText(phone);
//            db.dbclose();
//        }
//    set_tabel();
//}
//}
