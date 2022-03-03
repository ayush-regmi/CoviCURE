#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"Headers\login.h"
#include"Headers\signup.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Login_3_clicked();

    void on_pushButton_Exit_3_clicked();

    void on_pushButton_Signup_3_clicked();

private:
    Ui::MainWindow *ui;
    Login *login;
    Signup *signup;

};
#endif // MAINWINDOW_H
