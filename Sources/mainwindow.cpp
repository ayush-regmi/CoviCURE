#include "Headers\mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include"Headers\login.h"
#include"Headers\signup.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //https://stackoverflow.com/questions/38968743/qt-changing-the-background-color-of-qwidget-using-palette-doesnt-work
    QPixmap bkgnd("F:/2nd semester/COMP/Project/Green-Corporation-Template - Copy.jpg");
        bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Window, bkgnd);
        this->setPalette(palette);

    //https://www.youtube.com/watch?v=SyzxerD2Yps&list=PLS1QulWo1RIZiBcTr5urECberTITj7gjA&index=12
        //Adding photo in a label
//    QPixmap pic("F:/2nd semester/COMP/Project/Mylogo.jpg");
//    int w=ui->label_pic->width();
//    int h=ui->label_pic->height();
//    ui->label_pic->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_3_clicked()
{
    Login LoginBox;
    LoginBox.setModal(true);
    LoginBox.exec();
}


void MainWindow::on_pushButton_Exit_3_clicked()
{
    hide();
}


void MainWindow::on_pushButton_Signup_3_clicked()
{
    Signup signup;
    signup.setModal(true);
    signup.exec();
}

