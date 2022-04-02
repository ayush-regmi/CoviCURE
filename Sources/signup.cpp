#include "Headers\signup.h"
#include "ui_signup.h"

QString csssign="QPushButton {"
                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 10px;"
                "font: 17pt;"
                "width: 100px;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
             "}";

Signup::Signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
    ui->pushButton_signup->setStyleSheet(csssign);
}

Signup::~Signup()
{
    delete ui;
}

Database SignUp;
void connectDb();

void Signup::on_pushButton_signup_clicked() {
    SignUp.connectDB("user");

     if(!SignUp.connectionDB()) {
         qDebug()<<" Can't connect "<<"connect to mysql error"<<SignUp.getDB().lastError().text();
         return ;
     }
     else {
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
               login = new Login(this);
               login -> show();
               this->hide();
          }
          else{
              QMessageBox:: information(this, "Not registered", "There was a problem with registration.");
          }
     }
}
