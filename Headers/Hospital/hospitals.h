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

//private slots:
    //void on_hos1_clicked();

private slots:
    void on_back_clicked();

    void on_hos1_clicked();

private:
    Ui::Hospitals *ui;
    Myhospital *myhospital;
};

#endif // HOSPITALS_H
