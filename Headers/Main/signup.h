#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "Headers/database.h"
#include "Headers/Main/login.h"

namespace Ui {
class Signup;
}

class Signup : public QDialog
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();

private slots:
    void on_pushButton_signup_clicked();

private:
    Ui::Signup *ui;
    Login *login;
};

#endif // SIGNUP_H
