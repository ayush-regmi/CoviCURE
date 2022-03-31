#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QString>

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
    QSqlDatabase db;
};

#endif // SIGNUP_H
