#ifndef QUEPAGE1_H
#define QUEPAGE1_H

#include <QDialog>
#include "Headers/quepage2.h"
namespace Ui {
class Quepage1;
}

class Quepage1 : public QDialog
{
    Q_OBJECT

public:
    explicit Quepage1(QWidget *parent = nullptr);
    ~Quepage1();

private slots:
    void on_next_quepage1_clicked();

private:
    Ui::Quepage1 *ui;
    Quepage2 *quepage2;
};

#endif // QUEPAGE1_H
