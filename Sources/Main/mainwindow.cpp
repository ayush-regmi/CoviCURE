#include "Headers\Main\mainwindow.h"
#include "ui_mainwindow.h"

QString cssmain = "QPushButton {"
                  "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));"
                  "color: rgb(255, 255, 255);"
                  "border-radius: 10px;"
                  "width: 100px;"
                  "font: 25pt;"
                  "font-style: \"Cooper Black\";"
                "}"
                  "QPushButton:hover {"
                  "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
                "}";

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->pushButton_Exit_3->setStyleSheet(cssmain);
    ui->pushButton_Login_3->setStyleSheet(cssmain);
    ui->pushButton_Signup_3->setStyleSheet(cssmain);
}

MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_pushButton_Login_3_clicked() {
    this->hide();
    login = new Login(this);
    login->show();
}


void MainWindow::on_pushButton_Exit_3_clicked() {
    this->close();
}


void MainWindow::on_pushButton_Signup_3_clicked() {
    this->hide();
    signup = new Signup(this);
    signup->show();
}

