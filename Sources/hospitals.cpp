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

bool connectDB();

void Hospitals::on_hos1_clicked()
{
   QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL"); // Initializing Database, QMYSQL is MySQL database driver for QT.
    db.setHostName("127.0.0.1"); // Setting hostname
    db.setPort(3306); // setting port
    db.setDatabaseName("sql_store"); // setting database name
    db.setUserName("root"); //setting username
    db.setPassword("th@nky0u@lm!ghty"); //setting password
    qDebug()<<" Start connecting ";
    if(db.open()) {
        qDebug()<<" Can't connect "<<"connect to mysql error"<<db.lastError().text();
       // return true;
    }
    else { // If database connection is not established
        qDebug()<<" Successful connection "<<"connect to mysql OK";
      //  return false;
    }
}

