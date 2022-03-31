#include "Headers\login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QPixmap>
#include <QSqlQuery>

Login::Login(QWidget *parent) : QDialog(parent), ui(new Ui::Login) {
    ui->setupUi(this);
    QPixmap pix(":/resources/img/doctor.png");
    ui->picture->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));
}

Login::~Login()
{
    delete ui;
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
                    dashboard = new Dashboard(this);
                    dashboard -> show();
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
}
