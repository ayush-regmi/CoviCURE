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

       ui->Picture->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));

}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    QString email=ui->lineEdit_email->text();
    QString password=ui->lineEdit_password->text();

<<<<<<< HEAD
    //Initial dummy code for login
//    if(email=="ayush@gmail.com" && password=="ayush")
//    {
//        dashboard = new Dashboard(this);
//        dashboard -> show();
//    }
//    else{
//         QMessageBox::warning(this,"Login", "Username or password is not correct");
//    }
=======
    if(email=="ayush@gmail.com" && password=="ayush")
    {
        dashboard = new Dashboard(this);
        dashboard -> showMaximized();
    }
    else{
         QMessageBox::warning(this,"Login", "Username or password is not correct");
    }
}
>>>>>>> 7d4709be1292b014e4b76e762f7ab2fa6186e980



    //////////////////////////
    ///
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL", "MyConnect");
        db.setHostName("127.0.0.1");      // Connect to the database host name , Here we need to pay attention to （ If it is ”127.0.0.1“, Unable to connect , Is changed to localhost)
        db.setPort(3306);                 // Connection database port number , Consistent with settings
         db.setDatabaseName("user");      // Connection database name , Consistent with settings
         db.setUserName("root");          // Database user name , Consistent with settings
         db.setPassword("password");    // Database password , Consistent with settings
         qDebug()<<" Start connecting ";


            if (db.open()){
                  QMessageBox::information(this,"Login", "Database opened succesfully");

                  QSqlQuery query(QSqlDatabase::database("MyConnect"));

                  query.prepare(QString("SELECT * FROM users_registration_table WHERE Email=:Email AND Password= :Password"));
                  query.bindValue(":Email", email);
                  query.bindValue(":Password", password);

                  if(!query.exec()){
                      QMessageBox::warning(this,"Login", "Database connection failed");
                  }
                  else{
                       QMessageBox::information(this,"Login", "Database connection successful");
                      while(query.next()){
                          QString emaildb=query.value(3).toString();
                          QString passworddb=query.value(5).toString();

                          if(emaildb==email && passworddb==password){
                                QMessageBox::information(this,"Login", "Login succesfull");
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
                 QMessageBox::warning(this,"Login", "Database connection failed");
            }

}
