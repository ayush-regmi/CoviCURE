#ifndef QUEPAGE4_H
#define QUEPAGE4_H

#include <QDialog>
#include "Headers/Rapidcovid/messagepage.h"

namespace Ui {
class Quepage4;
}

class Quepage4 : public QDialog
{
    Q_OBJECT

public:
    explicit Quepage4(QWidget *parent = nullptr);
    ~Quepage4();
    //double count4;

private slots:
    void on_que8_opt9_clicked();

    void on_que8_opt10_clicked();

    void on_que8_opt11_clicked();

    void on_que8_opt12_clicked();

    void on_que8_opt13_clicked();

    void on_que8_opt14_clicked();

    void on_que8_opt15_clicked();

    void on_que8_opt16_clicked();

    void on_que8_opt17_clicked();

    void on_que8_opt18_clicked();

    void on_que8_opt19_clicked();

    void on_que8_opt20_clicked();

    void on_que9_opt1_clicked();

    void on_que9_opt2_clicked();

    void on_que9_opt3_clicked();

    void on_que9_opt4_clicked();

    void on_submit_quepage4_clicked();

private:
    Ui::Quepage4 *ui;
    Messagepage *messagepage;
};

#endif // QUEPAGE4_H
