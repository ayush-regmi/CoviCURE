#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "Headers\Main\dashboard.h"
#include "Headers\database.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::Login *ui;
    Dashboard *dashboard;
};

#endif // LOGIN_H
