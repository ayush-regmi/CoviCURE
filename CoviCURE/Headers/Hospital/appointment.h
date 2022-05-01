#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <QMainWindow>
#include "Headers/database.h"

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

    void on_pushButton_Book_clicked();

    void on_combo_Hospital_currentTextChanged(const QString &arg1);



private:
    Ui::Appointment *ui;
};

#endif // APPOINTMENT_H
