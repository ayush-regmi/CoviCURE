#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLinearGradient>
#include <QFont>
#include "Headers/Hospital/choosehospitals.h"
#include "Headers/Vaccine/vaccine_login.h"
#include "Headers/Rapidcovid/rapidcovid.h"
#include "Headers/Live/livedash.h"



QT_BEGIN_NAMESPACE
namespace Ui { class Dashboard; }
QT_END_NAMESPACE

class Dashboard : public QMainWindow
{
    Q_OBJECT

public:
    Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_pushButton_Hospital_clicked();

    void on_pushButton_vaccine_clicked();

    void on_pushButton_Rapidcovid_clicked();

    void on_pushButton_Livestatus_clicked();

protected:
    Ui::Dashboard *ui;
    ChooseHospitals *choosehospitals;
    Vaccine_Login *vaccine_login;
    Rapidcovid *rapidcovid;
    Livedash *livedash;

};
#endif // DASHBOARD_H
