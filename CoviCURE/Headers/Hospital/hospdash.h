#ifndef HOSPDASH_H
#define HOSPDASH_H

#include <QMainWindow>
#include "Headers/Rapidcovid/rapidcovid.h"
#include "Headers/Hospital/hospitals.h"
#include "Headers/Hospital/appointment.h"


namespace Ui {
class HospDash;
}

class HospDash : public QMainWindow
{
    Q_OBJECT

public:
    explicit HospDash(QWidget *parent = nullptr);
    ~HospDash();

private slots:
    void on_pushHospitals_clicked();
    void on_pushVirtualdoctor_clicked();
    void on_pushDashboard_clicked();
    void on_pushAppointment_clicked();

private:
    Ui::HospDash *ui;
    Hospitals *hospitals;
    Rapidcovid *rapidcovid;
    Appointment * appointment;
};

#endif // HOSPDASH_H
