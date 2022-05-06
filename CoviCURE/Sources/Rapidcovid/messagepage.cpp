#include "Headers/Rapidcovid/messagepage.h"
#include "ui_messagepage.h"

double sum;
extern double count;
extern double count2;
extern double count3;
extern double count4;



QString resultt=
        "QPushButton {"
                          "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"

                          "color: rgb(255, 255, 255);"
                          "border-radius: 10px;"
                          "font: 20pt;"
                          "width: 80px;"

                       "}"
        "QPushButton:hover {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
                            "}";
Messagepage::Messagepage(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Messagepage)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    ui->pushButtonresult->setStyleSheet(resultt);

    sum=((count/10)+(count2/6)+(count3/16)+(count4/16));

   qDebug() << "Sum: " << sum << "\n";

}

Messagepage::~Messagepage()
{
    delete ui;
}

void Messagepage::on_pushButtonresult_clicked()
{

    if (sum<0.35){
        ui->label_message->setStyleSheet(
                    "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.329545 rgba(0, 255, 170, 255), stop:1 rgba(255, 149, 0, 255));"
                    );
        ui->label_message->setText(
       "You have 20-25% chance of having covid-19 infection.\n"
       "Have your RT-PCR for confirmation!"
          );
    }
    else if(sum>0.36 && sum<0.60){

        ui->label_message->setStyleSheet(
                    "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 128, 0, 255), stop:0.0340909 rgba(255, 128, 0, 255), stop:1 rgba(255, 202, 0, 255));"
                    );
        ui->label_message->setText("You have 40-45% chance of having covid-19 infection.\n"
                                   "Have your RT-PCR for confirmation.\n"

                                   );

    }
    else if(sum>0.61 && sum<0.85){
        ui->label_message->setStyleSheet(
                    "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 53, 0, 255), stop:1 rgba(255, 149, 0, 255));"
                    );
        ui->label_message->setText("You have 60-65% chance of having covid-19 infection.\n"

                                   "Have your RT-PCR for confirmation.\n"
                                   "Better Seek for doctor!\n"
                                   "Isolate yourself!\n"
                                   );
    }
     else if(sum > 0.86) {
      ui->label_message->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.107955 rgba(175, 0, 0, 255), stop:1 rgba(255, 149, 0, 255));"
                     );
        ui->label_message->setText("you have 80-85% chance of having covid-19 infection.\n"

                                   "Have your RT-PCR for confirmation.\n"
                                   "Get Doctor appointment as soon as possible!\n"
                                   "Isolate yourself!\n"
                                   );
    }
}

