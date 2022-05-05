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
   if (sum<=0.25){
       ui->label_message->setStyleSheet(
                   "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.329545 rgba(0, 255, 170, 255), stop:1 rgba(255, 149, 0, 255));"
                   );
       ui->label_message->setText(
      "Congratulations! \n You are at very less risk to covid-19 infection\n"
      "Better Seek prevention and spread awareness about covid-19\n"
         "Best Wishes!");
   }
   else if(sum>0.25 && sum<=0.50){

       ui->label_message->setStyleSheet(
                   "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 128, 0, 255), stop:0.0340909 rgba(255, 128, 0, 255), stop:1 rgba(255, 202, 0, 255));"
                   );
       ui->label_message->setText("Uff!,you are at moderate risk to covid-19 infection.\n"
                                  "Few symptoms of yours have similiar to covid-19 symptoms.\n"
                                  "Have your real time RT-PCR checkup as soon as possible.\n"
                                  "Better Seek prevention and spread awareness about covid-19");

   }
   else if(sum>0.50 && sum<=0.75){
       ui->label_message->setStyleSheet(
                   "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 53, 0, 255), stop:1 rgba(255, 149, 0, 255));"
                   );
       ui->label_message->setText("So, Sorry!,you are at high risk to covid-19 infection."
                                  "Most of the symptoms of you have similiar to covid-19 symptoms."
                                  "Have your real time RT-PCR checkup as soon as possible."
                                  "Better Seek for doctor, isolate yourself and spread awareness about covid-19"
                                  "Best Wishes!");
   }
    else if(sum > 0.75)
//        ui->label_message->setStyleSheet(

//                    );
       ui->label_message->setText("Unfortunately!\n You are at extreme high risk to covid-19 infection:\n"
                                  "Almost every of the symptoms of you have similiar to covid-19 symptoms.\n"
                                  "Have your real time RT-PCR checkout as soon as possible.\n"
                                  "Get Doctor appointment as soon as possible and be admitted to the hospital if possible.\n"
                                  "Isolate yourself and spread awareness about covid-19"
                                  "Best Wishes!");
}

Messagepage::~Messagepage()
{
    delete ui;
}
