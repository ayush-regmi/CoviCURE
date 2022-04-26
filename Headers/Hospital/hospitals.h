#ifndef HOSPITALS_H
#define HOSPITALS_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include "Headers/database.h"
#include "Headers/Hospital/myhospital.h"

namespace Ui {
class Hospitals;
}

class Hospitals : public QMainWindow
{
    Q_OBJECT

public:
    explicit Hospitals(QWidget *parent = nullptr);
    ~Hospitals();
    static int hospID;

//private slots:
    //void on_hos1_clicked();

private slots:
    void on_back_clicked();

    void on_hos1_clicked();

    void on_hos2_clicked();

    void on_hos3_clicked();

    void on_hos4_clicked();

    void on_hos5_clicked();

    void on_hos6_clicked();

    void on_hos7_clicked();

    void on_hos8_clicked();

    void on_hos9_clicked();

private:
    Ui::Hospitals *ui;
    Myhospital *myhospital;
};

#endif // HOSPITALS_H
