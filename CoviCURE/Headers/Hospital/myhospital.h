#ifndef MYHOSPITAL_H
#define MYHOSPITAL_H

#include <QMainWindow>
#include "Headers/database.h"
#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QString>
#include <QDebug>
//#include "Headers/Hospital/hospitals.h"

namespace Ui {
class Myhospital;
}

class Myhospital : public QMainWindow
{
    Q_OBJECT

public:
    explicit Myhospital(int hospID, QWidget *parent = nullptr);

    ~Myhospital();

private:
    Ui::Myhospital *ui;
};

#endif // MYHOSPITAL_H
