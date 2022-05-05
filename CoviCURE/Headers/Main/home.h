#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include <QWidget>
#include <QStackedWidget>
#include "Headers/Hospital/choosehospitals.h"
#include "Headers/Live/livedash.h"
#include "Headers/Rapidcovid/rapidcovid.h"
#include "Headers/Vaccine/vaccine_login.h"


namespace Ui {
class Home;
}



class Home : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    QWidget *	widget(int index) const;
    ~Home();

private slots:

    void on_pushButton_Hospital_clicked();

    void on_pushButton_Live_clicked();

    void on_pushButton_vaccine_clicked();

    void on_pushButton_Rapidcovid_clicked();

    void on_pushButton_Out_clicked();

private:
    Ui::Home *ui;
    Livedash *livedash;
    ChooseHospitals *choosehospitals;
    Rapidcovid *rapidcovid;
    Vaccine_Login *vaccine_login;

};

#endif // HOME_H
