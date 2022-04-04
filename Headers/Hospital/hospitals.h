#ifndef HOSPITALS_H
#define HOSPITALS_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include "Headers/database.h"

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

private:
    Ui::Hospitals *ui;
};

#endif // HOSPITALS_H
