#ifndef CHOOSEHOSPITALS_H
#define CHOOSEHOSPITALS_H

#include <QDialog>
#include "Headers/hosdash.h"

//   #include "Headers/dashboard.h"

namespace Ui {
class ChooseHospitals;
}

class ChooseHospitals : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseHospitals(QWidget *parent = nullptr);
    ~ChooseHospitals();

private slots:
    void on_pushButton_ok_clicked();

    void on_pushButton_cancel_clicked();

private:
    Ui::ChooseHospitals *ui;
    Hosdash *hosdash;
};

#endif // CHOOSEHOSPITALS_H
