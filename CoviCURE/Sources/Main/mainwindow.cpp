#include "Headers\Main\mainwindow.h"
#include "ui_mainwindow.h"

QString cssmain = "QPushButton {"
                  "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));"
                  "color: rgb(255, 255, 255);"
                  "border-radius: 20px;"
                  "width: 100px;"
                  "font: 25pt;"
                  "font-style: \"Cooper Black\";"
                "}"
                  "QPushButton:hover {"
                  "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
                "}";
QString mainexit ="QPushButton {"
                  "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"

                  "color: rgb(255, 255, 255);"
                  "border-radius: 20px;"
                  "font: 20pt;"
                  "width: 90px;"
                  "font-style: \"Cooper Black\";"
               "}"
                  "QPushButton:hover {"
                    "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.853933 rgba(188, 209, 232, 255));"
               "}";

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->pushButton_Exit->setStyleSheet(mainexit);
    ui->pushButton_Login->setStyleSheet(cssmain);
    ui->pushButton_Signup->setStyleSheet(cssmain);
}

MainWindow::~MainWindow() {
    delete ui;
}


<<<<<<< HEAD
void MainWindow::on_pushButton_Login_3_clicked() {
    //this->hide();
=======
void MainWindow::on_pushButton_Login_clicked() {
>>>>>>> 1b5ed295152bde7299fb27c2d7dbf5b4fbc844e1
    login = new Login(this);
    login->show();
}


void MainWindow::on_pushButton_Exit_clicked() {
    this->close();
}


void MainWindow::on_pushButton_Signup_clicked() {
    this->hide();
    signup = new Signup(this);
    signup->show();
}
