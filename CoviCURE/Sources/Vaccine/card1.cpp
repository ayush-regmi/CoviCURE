#include "Headers/Vaccine/card1.h"
#include "ui_card1.h"


void connectDB(QString);
Database connectCard;
extern int PIN;

QString str = QString::number(PIN);

Card1::Card1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Card1)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();

    connectCard.connectDB("hospital");
    if(connectCard.connectionDB()) {
        qDebug()<<" yessss";
    }
    else {
        qDebug()<<" Cannot!!!!!!!";
    }

    QString name, address, pin, mobile, phone, date, dob;
    QString license, state, sex, nation, vaccineName, nextDueDate;
    QSqlQuery run;

    if(run.exec("SELECT * FROM vaccine WHERE pin='"+str+"'")) {
                run.next();
                name = run.value(2).toString();
                pin = run.value(1).toString();
                sex = run.value(3).toString();
                dob = run.value(4).toString();
                date = run.value(5).toString();
                mobile = run.value(6).toString();
                license = run.value(7).toString();
                address = run.value(8).toString();
                state = run.value(9).toString();
                nation = run.value(10).toString();
                vaccineName = run.value(13).toString();
                nextDueDate = run.value(14).toString();
            }

            ui->name->setText((name));
            ui->pin->setText(pin);
            ui->combo_Sex->setCurrentText(sex);
            ui->dob->setText(dob);
            ui->date->setText(date);
            ui->mobile->setText(mobile);
            ui->license->setText(license);
            ui->address->setText(address);
            ui->state->setText(state);
            ui->nationality->setText(nation);
            ui->vaccineName->setText(vaccineName);
            ui->duedate->setText(nextDueDate);
}

Card1::~Card1()
{
    delete ui;
}



