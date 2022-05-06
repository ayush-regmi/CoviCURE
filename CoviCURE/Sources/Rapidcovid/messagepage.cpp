#include "Headers/Rapidcovid/messagepage.h"
#include "ui_messagepage.h"

double sum;
extern double count;
extern double count2;
extern double count3;
extern double count4;

//QString low="QLabel {"
//                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0909091 rgba(0, 202, 255, 255), stop:0.863636 rgba(255, 0, 85, 255));"
//                "color: rgb(255, 255, 255);"
//                "font: 20pt;"
//             "}";
//QString medium="QLabel {"
//                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 128, 0, 255), stop:0.0340909 rgba(255, 128, 0, 255), stop:1 rgba(255, 202, 0, 255));"
//                "color: rgb(255, 255, 255);"
//                "font: 20pt;"
//             "}";
//QString high="QLabel {"
//                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 53, 0, 255), stop:1 rgba(255, 149, 0, 255));"
//                "color: rgb(255, 255, 255);"
//                "font: 20pt;"
//             "}";
//QString extreme="QLabel {"
//                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 149, 0, 255));"
//                "color: rgb(255, 255, 255);"
//                "font: 20pt;"
//             "}";

Messagepage::Messagepage(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Messagepage)
{
    ui->setupUi(this);
    sum=((count/10)+(count2/6)+(count3/16)+(count4/16));

   qDebug() << "Sum: " << sum << "\n";
   if (sum<=0.35){
       ui->label_message->setStyleSheet(
                   "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.329545 rgba(0, 255, 170, 255), stop:1 rgba(255, 149, 0, 255));"
                   );
       ui->label_message->setText(
      "You have 20-25% chance of having covid-19 infection\n"
      "Better Seek prevention and spread awareness about covid-19\n"
         "Best Wishes!");
   }
   else if(sum>0.35 && sum<=0.60){

       ui->label_message->setStyleSheet(
                   "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 128, 0, 255), stop:0.0340909 rgba(255, 128, 0, 255), stop:1 rgba(255, 202, 0, 255));"
                   );
       ui->label_message->setText("You have 40-45% chance of having covid-19 infection.\n"
                                  "Have your real time RT-PCR for confirmation.\n"
                                  "Better Seek prevention and spread awareness about covid-19\n"
                                  "Best Wishes!");

   }
   else if(sum>0.60 && sum<=0.85){
       ui->label_message->setStyleSheet(
                   "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 53, 0, 255), stop:1 rgba(255, 149, 0, 255));"
                   );
       ui->label_message->setText("You have 60-65% chance of having covid-19 infection.\n"

                                  "Have your real time RT-PCR for confirmation.\n"
                                  "Better Seek for doctor!\n"
                                  "Isolate yourself and spread awareness about covid-19.\n"
                                  "Best Wishes!");
   }
    else if(sum > 0.85)
     ui->label_message->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.107955 rgba(175, 0, 0, 255), stop:1 rgba(255, 149, 0, 255));"
                    );
       ui->label_message->setText("you have 80-85% chance of having covid-19 infection.\n"

                                  "Have your real time RT-PCR for confirmation.\n"
                                  "Get Doctor appointment as soon as possible!\n"
                                  "Isolate yourself and spread awareness about covid-19\n"
                                  "Best Wishes!");
}

Messagepage::~Messagepage()
{
    count = 0;
    count2 = 0;
    count3 = 0;
    count4 = 0;
    sum = 0;
    delete ui;
}
