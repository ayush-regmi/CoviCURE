#include "Headers\login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QPixmap>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

//    QPixmap bkgnd("F:/2nd semester/COMP/Project/Green-Corporation-Template.jpg");
//        bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatioByExpanding);
//        QPalette palette;
//        palette.setBrush(QPalette::Window, bkgnd);
//        this->setPalette(palette);

   QPixmap pix(":/resources/img/doctor.png");

       ui->picture->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));

}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    QString email=ui->lineEdit_email->text();
    QString password=ui->lineEdit_password->text();


    //Initial dummy code for login
//    if(email=="ayush@gmail.com" && password=="ayush")
//    {
//        dashboard = new Dashboard(this);
//        dashboard -> show();
//    }
//    else{
//         QMessageBox::warning(this,"Login", "Username or password is not correct");
//    }

//    if(email=="ayush@gmail.com" && password=="ayush")
//    {
//        dashboard = new Dashboard(this);
//        dashboard -> showMaximized();
//    }
//    else{
//         QMessageBox::warning(this,"Login", "Username or password is not correct");
//    }
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL", "MyConnect");
        db.setHostName("covicure.mysql.database.azure.com");      // Connect to the database host name , Here we need to pay attention to （ If it is ”127.0.0.1“, Unable to connect , Is changed to localhost)
        db.setPort(3306);                 // Connection database port number , Consistent with settings
         db.setDatabaseName("user");      // Connection database name , Consistent with settings
         db.setUserName("Pitchers@covicure");          // Database user name , Consistent with settings
         db.setPassword("C0v!Cure");    // Database password , Consistent with settings
         qDebug()<<" Start connecting ";

            if (db.open()){
                  qDebug()<<" sql connection successful ";
                  QSqlQuery query(QSqlDatabase::database("MyConnect"));

                  query.prepare(QString("SELECT * FROM users_registration_table WHERE Email=:Email AND Password= :Password"));
                  query.bindValue(":Email", email);
                  query.bindValue(":Password", password);

                  if(!query.exec()){
                      qDebug()<<" Can't connect###"<<"connect to mysql error"<<db.lastError().text();
                  }
                  else{
                       qDebug()<<" Successful connection "<<"connect to mysql OK";
                      while(query.next()){
                          QString emaildb=query.value(3).toString();
                          QString passworddb=query.value(5).toString();

                          if(emaildb==email && passworddb==password){
                                qDebug()<<"Login Successful !!!";
                                dashboard = new Dashboard(this);
                                dashboard -> show();
                          }
                          else{
                               QMessageBox::warning(this,"Login", "Username or password is not correct");
                          }


                      }
                  }
            }

            else {
                 qDebug()<<" Can't connect "<<"connect to mysql error"<<db.lastError().text();
            }

}
