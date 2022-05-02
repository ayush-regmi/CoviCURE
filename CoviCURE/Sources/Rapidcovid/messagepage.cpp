#include "Headers/Rapidcovid/messagepage.h"
#include "ui_messagepage.h"

double sum;
extern double count;
extern double count2;
extern double count3;
extern double count4;
Messagepage::Messagepage(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Messagepage)
{
    ui->setupUi(this);
    sum=(count+count2+count3+count4);
   qDebug() << "Sum: " << sum << "\n";
   //if (sum)
}

Messagepage::~Messagepage()
{
    delete ui;
}
