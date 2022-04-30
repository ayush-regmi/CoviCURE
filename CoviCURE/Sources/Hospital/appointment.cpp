#include "Headers/Hospital/appointment.h"
#include "ui_appointment.h"
#include <QDebug>
#include <QComboBox>

QString cssbook="QPushButton {"
                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 20px;"
                "font: 25pt;"
                "width: 100px;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
             "}";

QString chooseback ="QPushButton {"
                    "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"

                    "color: rgb(255, 255, 255);"
                    "border-radius: 20px;"
                    "font: 25pt;"
                    "width: 100px;"
                    "font-style: \"Cooper Black\";"
                 "}"
                    "QPushButton:hover {"
                      "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.853933 rgba(188, 209, 232, 255));"
                 "}";

QString btnDeactive="QPushButton {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(44, 44, 44, 255), stop:1 rgba(110, 110, 110, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 20px;"
                "font: 25pt;"
                "width: 100px;"
                "font-style: \"Cooper Black\";"
             "}";

void connectDB(QString);
Database connectAppointment;
QString currentHosp = "";
QString name[9];
QString doctors[10];
int rowCount = 0;

Appointment::Appointment(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Appointment)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();

    //button Style
   // ui->pushButtonBook->setStyleSheet(cssbook);
    ui->pushButton_Back->setStyleSheet(chooseback);
    ui->checkBox_Accept->setStyleSheet(cssbook);

    //Combo Mr
    ui->combo_Mr->addItem("Mr");
    ui->combo_Mr->addItem("Mrs");

    // Combo Sex
    ui->combo_Sex->addItem("Male");
    ui->combo_Sex->addItem("Female");

    //Connecting to Database Hospital
    connectAppointment.connectDB("hospital");
    if(connectAppointment.connectionDB()) {
        qDebug()<<" yessss";
    }
    else {
        qDebug()<<" Cannot!!!!!!!";
    }

    QSqlQuery run;
    // Counting number of rows
    run.exec("SELECT * FROM hospitals");
    while(run.next())
        rowCount++;

    // Adding hospital names to combo_Hospital
    if(run.exec("SELECT name FROM hospitals")) {
        for(int i = 0; i < rowCount; i++) {
            run.next();
            name[i] = run.value(0).toString();
        }
        for(int i = 0; i < rowCount; i++) {
            ui->combo_Hospital->addItem(name[i]);
        }
        qDebug() << "Added hospitals to combo";
     }
    else {
        qDebug()<<"Could not add hospitals to combo";
    }


}

Appointment::~Appointment()
{
    delete ui;
}

void Appointment::on_pushButton_Back_clicked()
{
    this->close();
}

void Appointment::on_checkBox_Accept_stateChanged(int arg1)
{
    if(arg1) {
        ui->pushButton_Book->setStyleSheet(cssbook);
    }
    else {
        ui->pushButton_Book->setStyleSheet(btnDeactive);
    }
}

void Appointment::on_pushButton_Book_clicked()
{
    if(ui->checkBox_Accept->isChecked()) {
        connectAppointment.connectDB("hospital");
        if(!connectAppointment.connectionDB()) {
            qDebug()<<" Can't connect "<<"connect to mysql error"<<connectAppointment.getDB().lastError().text();
            return ;
        }
        else {
            qDebug()<< "Successful connection." << "connected to mysql.";
            QString name = ui -> lineEditName -> text();
            QString gurdian = ui -> lineEditGurdian -> text();
            QString mobile = ui -> lineEditMobile -> text();
            QString phone = ui -> lineEditPhone -> text();
            QString address = ui -> lineEditAddress -> text();
            QString state = ui -> lineEditState -> text();
            QString nation = ui -> lineEditNation -> text();
            QString dob = ui -> dateEditDob -> text();
            QString gender = ui -> combo_Mr->currentText();
            QString sex = ui -> combo_Sex->currentText();
            QString doctor = ui->combo_Doctor->currentText();
            QString hospital = ui->combo_Hospital->currentText();
            QString date = ui->dateEdit_Appointment->text();
            QString time = ui->timeEdit_Appointment->text();

            QSqlQuery qry;
            qry.prepare("INSERT INTO appointments(name, gurdian, mobile, phone, adderss, state, nation, dob, gender, sex, doctor, hospital, date, time)"
                        "VALUES (:name, :gurdainName, :mobile, :phone, :adderss, :state, :nation, :dob, :gender, :sex, :doctor, :hospital, :date, :time");
            qry.bindValue(":name", name);
            qry.bindValue(":guardianName", gurdian);
            qry.bindValue(":mobile", mobile);
            qry.bindValue(":phone", phone);
            qry.bindValue(":address", address);
            qry.bindValue(":state", state);
            qry.bindValue(":nation", nation);
            qry.bindValue(":dob", dob);
            qry.bindValue(":gender", gender);
            qry.bindValue(":sex", sex);
            qry.bindValue(":doctor", doctor);
            qry.bindValue(":hospital", hospital);
            qry.bindValue(":date", date);
            qry.bindValue(":time", time);
            if(qry.exec()) {
                QMessageBox:: information(this, "Appointed", "You have been appointed as a patient");
            }
            else{
                qDebug() << "Error!!!!!!" << qry.lastError().text();
                QMessageBox:: information(this, "Not Appointed", "There was a problem with appointment.");
            }
        }
    }
}          




void Appointment::on_combo_Hospital_currentTextChanged(const QString &arg1)
{
    currentHosp = arg1;
    qDebug() << "CurrentHosp: " << arg1;
    ui->combo_Doctor->clear();

    //Connecting to Database Hospital
    connectAppointment.connectDB("hospital");
    if(connectAppointment.connectionDB()) {
        qDebug()<<" yessss";
    }
    else {
        qDebug()<<" Cannot!!!!!!!";
    }

    QSqlQuery run;
    for(int i = 0; i < rowCount; i++) {
        if(currentHosp == name[i]) {
            qDebug()<< "hereherehre CurrentHosp: " << currentHosp;
            if(run.exec("SELECT * FROM doctors WHERE name='"+currentHosp+"'")) {
                run.next();
                for(int j = 0; j < 10; j++) {
                    doctors[j] = run.value(j + 2).toString();
                    ui->combo_Doctor->addItem(doctors[j]);
                }
                qDebug() << "doctors are applieeddd" << name[i];
            }
            else {
                //QMessageBox:: information(this, "No Doctors", "There are no doctors available");
                qDebug() << "Query didnt run";
            }
        }
        else {
            qDebug() << "current hospital didn't detected";
        }
    }
}


