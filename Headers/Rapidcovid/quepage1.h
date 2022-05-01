#ifndef QUEPAGE1_H
#define QUEPAGE1_H

#include <QDialog>
#include "Headers/Rapidcovid/quepage2.h"
//#include "rapidcovid.h"
namespace Ui {
class Quepage1;
}

class Quepage1 : public QDialog
{
    Q_OBJECT

public:
    explicit Quepage1(QWidget *parent = nullptr);
    ~Quepage1();
    static double count;

private slots:
    void on_next_quepage1_clicked();

    void on_que1_opt1_clicked();

    void on_que1_opt2_clicked();

    void on_que1_opt3_clicked();

    void on_que1_opt4_clicked();

    void on_que2_opt1_clicked();

    void on_que2_opt2_clicked();

    void on_que2_opt3_clicked();

    void on_que2_opt4_clicked();

    void on_que3_opt1_clicked();

    void on_que3_opt2_clicked();

private:
    Ui::Quepage1 *ui;
    Quepage2 *quepage2;
};

#endif // QUEPAGE1_H
