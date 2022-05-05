#include "Headers/Vaccine\signupvaccine.h"
#include "ui_signupvaccine.h"
#include"Headers/Vaccine\vaccine_login.h"

QString vaccSubmit="QPushButton {"
                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.210227 rgba(57, 230, 255, 255), stop:1 rgba(165, 0, 198, 255));"
                "color: rgb(255, 255, 255);"
                "border-radius: 20px;"
                "font: 22pt;"
                "width: 100px;"
                "font-style: \"Cooper Black\";"
             "}"
                "QPushButton:hover {"
                 "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
             "}";

QString vaccExit ="QPushButton {"
                  "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"

                  "color: rgb(255, 255, 255);"
                  "border-radius: 20px;"
                  "font: 20pt;"
                  "width: 90px;"
                  "font-style: \"Cooper Black\";"
               "}"
                  "QPushButton:hover {"
                    "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 0, 0, 255), stop:0.853933 rgba(188, 209, 232, 255));"
               "}";

Signupvaccine::Signupvaccine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signupvaccine)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    ui->pushButton_Submit->setStyleSheet(vaccSubmit);
    ui->pushButton_Back->setStyleSheet(vaccExit);

    ui->combo_Sex->addItem("Male");
    ui->combo_Sex->addItem("Female");
}

Signupvaccine::~Signupvaccine()
{
    delete ui;
}


void Signupvaccine::on_pushButton_Back_clicked()
{
    this->close();
}

quint32 v = QRandomGenerator::global()->bounded(9999);
QString pin = QString::number(v);

Database Register;
void connectDb();
void Signupvaccine::on_pushButton_Submit_clicked()
{
    Register.connectDB("user");

     if(!Register.connectionDB()) {
         qDebug()<<" Can't connect "<<"connect to mysql error"<<Register.getDB().lastError().text();
         return ;
     }
     else {
          qDebug()<<" Successful connection."<<"Connected to mysql.";
          QString name = ui->lineEditName->text();
          QString mobile = ui->lineEditMobile->text();
          QString address = ui->lineEditAddress->text();
          QString license = ui->lineEditAddressLicense->text();
          QString state = ui->lineEditState->text();
          QString nation = ui->lineEditNation->text();
          QString dob = ui->dateEditDob->text();
          QString date = ui->dateEditDate->text();
          QString sex = ui->combo_Sex->currentText();

          QSqlQuery qry;

          qry.prepare("INSERT INTO vaccine (name, sex, dob, date, mobile, address, license, state, nation, pin)"
                      "VALUES (:name, :sex, :dob, :date, :mobile, :address, :license, :state, :nation, :pin)");
          qry.bindValue(":name", name);
          qry.bindValue(":sex", sex);
          qry.bindValue(":dob", dob);
          qry.bindValue(":date", date);
          qry.bindValue(":mobile", mobile);
          qry.bindValue(":address", address);
          qry.bindValue(":license", license);
          qry.bindValue(":state", state);
          qry.bindValue(":nation", nation);
          qry.bindValue(":pin", pin);

          if(qry.exec()){
               QMessageBox:: information(this, "Registered", "You have been registered as a user");
               card1 = new Card1;
               card1->show();
          }
          else{
              QMessageBox:: information(this, "Not registered", "There was a problem with registration.");
          }
     }
}

