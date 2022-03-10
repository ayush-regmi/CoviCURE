#ifndef VACCINE_LOGIN_H
#define VACCINE_LOGIN_H


#include <QDialog>
#include"Headers/loginview.h"
#include"Headers/signupvaccine.h"

namespace Ui {
class Vaccine_Login;
}

class Vaccine_Login : public QDialog
{
    Q_OBJECT

public:
    explicit Vaccine_Login(QWidget *parent = nullptr);
    ~Vaccine_Login();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Vaccine_Login *ui;
    Loginview *loginview;
    Signupvaccine *signupvax;

};

#endif // VACCINE_LOGIN_H
