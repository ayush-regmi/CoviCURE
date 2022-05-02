#ifndef PATIENTS_H
#define PATIENTS_H

#include <QDialog>
#include <QDialog>
#include <QLineEdit>
#include <QLinearGradient>
#include <QFont>
#include<QtSql>
#include<QSqlDatabase>

namespace Ui {
class Patients;
}

class Patients : public QDialog
{
    Q_OBJECT

public:
    explicit Patients(QWidget *parent = nullptr);
    ~Patients();

private slots:
    void on_pushButton_refresh_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::Patients *ui;
};

class Database
{
private:

public:
     QSqlDatabase db;
    void connectDB(QString);
    QSqlDatabase getDB();
    bool connectionDB();
    bool connectionLogin();
};
#endif // PATIENTS_H
