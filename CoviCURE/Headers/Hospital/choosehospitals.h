#ifndef CHOOSEHOSPITALS_H
#define CHOOSEHOSPITALS_H

#include <QDialog>
#include "Headers/Hospital/hospdash.h"


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
    HospDash *hospdash;
};

#endif // CHOOSEHOSPITALS_H
