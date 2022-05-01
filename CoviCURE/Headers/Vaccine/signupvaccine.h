#ifndef SIGNUPVACCINE_H
#define SIGNUPVACCINE_H

#include <QDialog>

namespace Ui {
class Signupvaccine;
}

class Signupvaccine : public QDialog
{
    Q_OBJECT

public:
    explicit Signupvaccine(QWidget *parent = nullptr);
    ~Signupvaccine();

private:
    Ui::Signupvaccine *ui;
};

#endif // SIGNUPVACCINE_H
