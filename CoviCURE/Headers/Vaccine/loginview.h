#ifndef LOGINVIEW_H
#define LOGINVIEW_H

#include "Headers/Vaccine/card1.h"
#include "Headers/Vaccine/card2.h"

#include <QDialog>


namespace Ui {
class Loginview;
}

class Loginview : public QDialog
{
    Q_OBJECT

public:
    explicit Loginview(QWidget *parent = nullptr);
    ~Loginview();

private slots:
    void on_card1_clicked();

    void on_card2_clicked();


private:
    Ui::Loginview *ui;
    Card1 *card1;
    Card2 *card2;

};

#endif // LOGINVIEW_H
