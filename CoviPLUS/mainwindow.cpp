#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

QString greenMain="QPushButton {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 106, 255, 255), stop:1 rgba(0, 255, 138, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 20px;"
                "font: 26pt;"
                "width: 100px;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
             "}";

QString redMain ="QPushButton {"
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


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_Close->setStyleSheet(greenMain);
    ui->pushButton_hos->setStyleSheet(greenMain);
    ui->pushButton_Close->setStyleSheet(redMain);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username= ui->lineEdit_User->text();
    QString password= ui->lineEdit_password->text();

    if(username== "admin" && password== "admin"){
        admin= new Admin(this);
        admin->show();
    }
    else{
        QMessageBox::warning(this, "login", "Username or Password incorrect");
    }
}

void connectDB(QString);
bool connectionDB();
Database connectUser;

void MainWindow::on_pushButton_hos_clicked()
{
    QString License=ui->lineEdit_license->text();

    connectUser.connectDB("hospital");

    if (connectUser.connectionDB()){
        qDebug()<<" sql connection successful ";
        QSqlQuery query(QSqlDatabase::database("user"));
        query.prepare(QString("SELECT * FROM hospitals WHERE License=:license"));
        query.bindValue(":license", License);

        if(!query.exec()){
            qDebug()<<" Can't connect###"<<"connect to mysql error"<<connectUser.getDB().lastError().text();
        }
        else{
            qDebug()<<" Successful connection "<<"connect to mysql OK";
            while(query.next()){
                QString Licensedb=query.value(1).toString();

                if(Licensedb == License){
                    qDebug()<<"Login Successful !!!";
                    this->hide();
                    hospital = new Hospital(this);
                    hospital->showMaximized();
                }
                else {
                     QMessageBox::warning(this,"Login", "License not Available");
                     qDebug()<<"License not Available !!!";
                }
            }
        }
    }
     else {
        qDebug()<<" Can't connect "<<"connect to mysql error"<<connectUser.getDB().lastError().text();
     }
}


void MainWindow::on_pushButton_Close_clicked()
{
    this->close();
}

