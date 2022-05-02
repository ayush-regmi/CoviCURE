#include "patients.h"
#include "ui_patients.h"



QString redPatient ="QPushButton {"
                    "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"
                    "color: rgb(255, 255, 255);"
                    "border-radius: 20px;"
                    "font: 26pt;"
                    "width: 100px;"
                    "font-style: \"Cooper Black\";"
                 "}"
                    "QPushButton:hover {"
                      "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.853933 rgba(188, 209, 232, 255));"
                 "}";

QString darkPatient ="QPushButton {"
                    "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 142, 71, 255), stop:1 rgba(0, 78, 104, 255));"
                    "color: rgb(255, 255, 255);"
                    "border-radius: 20px;"
                    "font: 26pt;"
                    "width: 100px;"
                    "font-style: \"Cooper Black\";"
                 "}"
                    "QPushButton:hover {"
                      "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.853933 rgba(188, 209, 232, 255));"
                 "}";



Patients::Patients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Patients)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();

    ui->pushButton_refresh->setStyleSheet(darkPatient);
    ui->pushButton_back->setStyleSheet(redPatient);
}

void Database::connectDB(QString XXX){
       db=QSqlDatabase::addDatabase("QMYSQL");
       db.setHostName("127.0.0.1");      // Connect to the database host name , Here we need to pay attention to （ If it is ”127.0.0.1“, Unable to connect , Is changed to localhost)
       db.setPort(3306);                 // Connection database port number , Consistent with settings
       db.setDatabaseName(XXX);      // Connection database name , Consistent with settings
       db.setUserName("root");          // Database user name , Consistent with settings
       db.setPassword("th@nky0u@lm!ghty");    // Database password , Consistent with settings
       qDebug()<<" Start connecting ";
   }

  QSqlDatabase Database::getDB() {
      return db;
  }

  bool Database::connectionDB() {
      db.open();
      if(!db.open()) {
          return false;
      }
      else {
           return true;
      }
  }

Patients::~Patients()
{
    delete ui;
}

Database viewhospital;
void Patients::on_pushButton_refresh_clicked()
{

         viewhospital.connectDB("hospital");
        QSqlQueryModel *model=new QSqlQueryModel();
        viewhospital.connectionDB();

        QSqlQuery *qry=new QSqlQuery(viewhospital.db);
        qry->prepare("select * from appointments");
        qry->exec();
        model->setQuery(*qry);
        ui->tableView->setModel(model);
        qDebug()<<(model->rowCount());
    }




void Patients::on_pushButton_back_clicked()
{
    this->hide();
}

