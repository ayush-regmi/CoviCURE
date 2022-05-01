#ifndef QUEPAGE3_H
#define QUEPAGE3_H

#include <QDialog>
#include "Headers/Rapidcovid/quepage4.h"

namespace Ui {
class Quepage3;
}

class Quepage3 : public QDialog
{
    Q_OBJECT

public:
    explicit Quepage3(QWidget *parent = nullptr);
    ~Quepage3();
    static double count;

private slots:
    void on_que7_opt1_clicked();

    void on_que7_opt2_clicked();

    void on_que7_opt3_clicked();

    void on_que7_opt4_clicked();

    void on_que7_opt5_clicked();

    void on_que7_opt6_clicked();

    void on_que7_opt7_clicked();

    void on_que7_opt8_clicked();

    void on_que8_opt1_clicked();

    void on_que8_opt2_clicked();

    void on_que8_opt3_clicked();

    void on_que8_opt4_clicked();

    void on_que8_opt5_clicked();

    void on_que8_opt6_clicked();

    void on_que8_opt7_clicked();

    void on_que8_opt8_clicked();

    void on_next_quepage3_clicked();

private:
    Ui::Quepage3 *ui;
    Quepage4 *quepage4;
};

#endif // QUEPAGE3_H
