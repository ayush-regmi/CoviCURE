#ifndef CARD2_H
#define CARD2_H

#include <QDialog>

namespace Ui {
class Card2;
}

class Card2 : public QDialog
{
    Q_OBJECT

public:
    explicit Card2(QWidget *parent = nullptr);
    ~Card2();

private:
    Ui::Card2 *ui;
};

#endif // CARD2_H
