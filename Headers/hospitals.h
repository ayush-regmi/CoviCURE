#ifndef HOSPITALS_H
#define HOSPITALS_H

#include <QMainWindow>

namespace Ui {
class Hospitals;
}

class Hospitals : public QMainWindow
{
    Q_OBJECT

public:
    explicit Hospitals(QWidget *parent = nullptr);
    ~Hospitals();

private:
    Ui::Hospitals *ui;


};

#endif // HOSPITALS_H
