#ifndef CARD1_H
#define CARD1_H

#include <QDialog>
#include "Headers/database.h"

namespace Ui {
class Card1;
}

class Card1 : public QDialog
{
    Q_OBJECT

public:
    explicit Card1(QWidget *parent = nullptr);
    ~Card1();

private:
    Ui::Card1 *ui;
};

#endif // CARD1_H
