#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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


void MainWindow::on_pushButton_hos_clicked()
{
    hospital= new Hospital(this);
    hospital->show();
}


void MainWindow::on_pushButton_Close_clicked()
{
    this->close();
}

