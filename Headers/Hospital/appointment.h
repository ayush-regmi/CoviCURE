#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <QMainWindow>

namespace Ui {
class Appointment;
}

class Appointment : public QMainWindow
{
    Q_OBJECT

public:
    explicit Appointment(QWidget *parent = nullptr);
    ~Appointment();

private slots:
    void on_pushButton_Back_clicked();


    void on_checkBox_Accept_stateChanged(int arg1);

private:
    Ui::Appointment *ui;
};

#endif // APPOINTMENT_H
