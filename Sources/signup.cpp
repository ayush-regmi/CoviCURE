#include "Headers\signup.h"
#include "ui_signup.h"

Signup::Signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);

//    QPixmap pix("F:/2nd semester/COMP/Project/covid.jpg");
//        int w = ui->label_pic->width();
//        int h = ui->label_pic->height();
//        ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));


}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_signup_clicked()
{
    db =QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");      // Connect to the database host name , Here we need to pay attention to （ If it is ”127.0.0.1“, Unable to connect , Is changed to localhost)
    db.setPort(3306);                 // Connection database port number , Consistent with settings
     db.setDatabaseName("user");      // Connection database name , Consistent with settings
     db.setUserName("root");          // Database user name , Consistent with settings
     db.setPassword("password");    // Database password , Consistent with settings
     qDebug()<<" Start connecting ";
     db.open();
     if(!db.open())
     {
         qDebug()<<" Can't connect "<<"connect to mysql error"<<db.lastError().text();
         return ;
     }
     else
     {
          qDebug()<<" Successful connection."<<"Connected to mysql.";
          QString firstname= ui->Fname->text();
          QString lastname= ui->Sname->text();
          QString email= ui->Email->text();
          QString phonenumber= ui->Phone->text();
          QString password= ui->Password->text();
          QString repassword= ui->RePassword->text();
          if(password != repassword){
              QMessageBox:: information(this, "Not matched", "Password doesn't match");
              return ;
          }

          QSqlQuery qry;

          qry.prepare("INSERT INTO users_registration_table (First_name, Last_name, Email, Phone_number, Password)"
                      "VALUES (:First_name, :Last_name, :Email, :Phone_number, :Password)");

          qry.bindValue(":First_name", firstname);
          qry.bindValue(":Last_name", lastname);
          qry.bindValue(":Email", email);
          qry.bindValue(":Phone_number", phonenumber);
          qry.bindValue(":Password", password);

          if(qry.exec()){
               QMessageBox:: information(this, "Registered", "You have been registered as a user");
          }
          else{
              QMessageBox:: information(this, "Not registered", "There was a problem with registration.");

          }


     }
}

