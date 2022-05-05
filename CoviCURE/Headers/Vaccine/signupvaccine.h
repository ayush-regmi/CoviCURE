#ifndef SIGNUPVACCINE_H
#define SIGNUPVACCINE_H

#include <QDialog>
#include <QRandomGenerator>
#include "Headers/database.h"
#include "Headers/Vaccine/card1.h"

namespace Ui {
class Signupvaccine;
}

class Signupvaccine : public QDialog
{
    Q_OBJECT

public:
    explicit Signupvaccine(QWidget *parent = nullptr);
    ~Signupvaccine();

private slots:
    void on_pushButton_Back_clicked();

    void on_pushButton_Submit_clicked();

private:
    Ui::Signupvaccine *ui;
    Card1 * card1;
};

#endif // SIGNUPVACCINE_H
