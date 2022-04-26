#ifndef MYHOSPITAL_H
#define MYHOSPITAL_H

#include <QMainWindow>

namespace Ui {
class Myhospital;
}

class Myhospital : public QMainWindow
{
    Q_OBJECT

public:
    explicit Myhospital(QWidget *parent = nullptr);
    ~Myhospital();

private:
    Ui::Myhospital *ui;
};

#endif // MYHOSPITAL_H
