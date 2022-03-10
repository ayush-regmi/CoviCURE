#include "Headers\signupvaccine.h"
#include "ui_signupvaccine.h"
#include"Headers\vaccine_login.h"

Signupvaccine::Signupvaccine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signupvaccine)
{
    ui->setupUi(this);
}

Signupvaccine::~Signupvaccine()
{
    delete ui;
}

