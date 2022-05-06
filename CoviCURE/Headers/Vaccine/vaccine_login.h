#ifndef VACCINE_LOGIN_H
#define VACCINE_LOGIN_H


#include <QDialog>
#include"Headers/Vaccine/loginview.h"
#include"Headers/Vaccine/signupvaccine.h"
#include "Headers/Vaccine/card1.h"
#include "Headers/Vaccine/card2.h"

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

    void on_pushButton_register_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::Vaccine_Login *ui;
    Loginview *loginview;
    Signupvaccine *signupvax;
    Card1 *card1;
    Card2 *card2;
};

#endif // VACCINE_LOGIN_H
