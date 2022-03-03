#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include "choosehospitals.h"

#include "rapidcovid.h"
=======
#include "Headers/vaccine_login.h"


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


    void on_pushButton_rct_3_clicked();

    void on_pushButton_vaccine_clicked();


private:
    Ui::Dashboard *ui;
    ChooseHospitals *choosehospitals;

    Rapidcovid *rapidcovid;

    Vaccine_Login *vaccine_login;


};
#endif // DASHBOARD_H
