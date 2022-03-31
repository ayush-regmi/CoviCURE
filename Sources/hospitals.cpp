#include "Headers/hospitals.h"
#include "Headers/database.h"

#include "ui_hospitals.h"

Hospitals::Hospitals(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Hospitals)
{
    ui->setupUi(this);
}

Hospitals::~Hospitals()
{
    delete ui;
}

bool connectDB(QString);
Database connectHospital;
void Hospitals::on_hos1_clicked()
{
    connectHospital.connectDB("hospital");
//      QSqlQuery query(db);
//      // This is the name of my watch , The next operation is to print out test surface name All the data in a column
//      query.exec("select * from test");
//      while(query.next()){
//          qDebug()<<query.value("name").toString();
//      }
}

