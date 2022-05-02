#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QtDebug>
#include <QtWidgets>
#include <QObject>
#include "patients.h"

namespace Ui {
class Hospital;
}

class Hospital : public QMainWindow
{
    Q_OBJECT

public:
    explicit Hospital(QWidget *parent = nullptr);
    ~Hospital();

private slots:
    void on_pushButton_patients_clicked();

    void on_pushButton_update_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::Hospital *ui;
    Patients *patients;
};

#endif // HOSPITAL_H
