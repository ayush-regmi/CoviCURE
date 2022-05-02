#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include "patients.h"
#include <QString>
#include<QMessageBox>
#include<QRandomGenerator>


namespace Ui {
class Admin;
}

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_add_clicked();

private:
    Ui::Admin *ui;
};

#endif // ADMIN_H
