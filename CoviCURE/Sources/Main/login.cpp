#include "Headers\Main\login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QSqlQuery>

QString csslog="QPushButton {"
                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 20px;"
                "font: 17pt;"
                "width: 100px;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
             "}";

Login::Login(QWidget *parent) : QDialog(parent), ui(new Ui::Login) {
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    ui->pushButton_login->setStyleSheet(csslog);
}

void connectDB(QString);
bool connectionDB();
Database connectUser;

void Login::on_pushButton_login_clicked() {
    QString email=ui->lineEdit_email->text();
    QString password=ui->lineEdit_password->text();
    connectUser.connectDB("user");

    if (connectUser.connectionDB()){
        qDebug()<<" sql connection successful ";
        QSqlQuery query(QSqlDatabase::database("user"));
        query.prepare(QString("SELECT * FROM users_registration_table WHERE Email=:Email AND Password= :Password"));
        query.bindValue(":Email", email);
        query.bindValue(":Password", password);
        if(!query.exec()){
            qDebug()<<" Can't connect###"<<"connect to mysql error"<<connectUser.getDB().lastError().text();
        }
        else{
            qDebug()<<" Successful connection "<<"connect to mysql OK";
            while(query.next()){
                QString emaildb=query.value(3).toString();
                QString passworddb=query.value(5).toString();
                if(emaildb==email && passworddb==password){
                    qDebug()<<"Login Successful !!!";
                    this->hide();
                    dashboard = new Dashboard(this);
<<<<<<< HEAD
<<<<<<< HEAD
                  dashboard -> show();
//void Login::on_pushButton_login_clicked() {
//    QString email=ui->lineEdit_email->text();
//    QString password=ui->lineEdit_password->text();
//    connectUser.connectDB("user");

//    if (connectUser.connectionDB()){
//        qDebug()<<" sql connection successful ";
//        QSqlQuery query(QSqlDatabase::database("user"));
//        query.prepare(QString("SELECT * FROM users_registration_table WHERE Email=:Email AND Password= :Password"));
//        query.bindValue(":Email", email);
//        query.bindValue(":Password", password);
//        if(!query.exec()){
//            qDebug()<<" Can't connect###"<<"connect to mysql error"<<connectUser.getDB().lastError().text();
//        }
//        else{
//            qDebug()<<" Successful connection "<<"connect to mysql OK";
//            while(query.next()){
//                QString emaildb=query.value(3).toString();
//                QString passworddb=query.value(5).toString();
//                if(emaildb==email && passworddb==password){
//                    qDebug()<<"Login Successful !!!";
//                    this->hide();
//                    dashboard = new Dashboard(this);
//                    dashboard -> show();
//                }
//                else {
//                     QMessageBox::warning(this,"Login", "Username or password is not correct");
//                     qDebug()<<"User name or password is incorrect !!!";
//                }
//            }
//        }
//    }
//     else {
//        qDebug()<<" Can't connect "<<"connect to mysql error"<<connectUser.getDB().lastError().text();
//     }
=======
=======
>>>>>>> 261ae7bc67ec3518aece23c3f7a9a663011109ce
                    dashboard->showMaximized();
                }
                else {
                     QMessageBox::warning(this,"Login", "Username or password is not correct");
                     qDebug()<<"User name or password is incorrect !!!";
                }
            }
        }
    }
     else {
        qDebug()<<" Can't connect "<<"connect to mysql error"<<connectUser.getDB().lastError().text();
     }
<<<<<<< HEAD
>>>>>>> 5f86903dfd0ddbf30cee88cd050af3fd331bae98
=======
>>>>>>> 261ae7bc67ec3518aece23c3f7a9a663011109ce
}

Login::~Login()
{
    delete ui;
    //connectUser.getDB().close();
}
