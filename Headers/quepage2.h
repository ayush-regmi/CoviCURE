#ifndef QUEPAGE2_H
#define QUEPAGE2_H

#include <QDialog>
#include "Headers/quepage3.h"
namespace Ui {
class Quepage2;
}

class Quepage2 : public QDialog
{
    Q_OBJECT

public:
    explicit Quepage2(QWidget *parent = nullptr);
    ~Quepage2();

private slots:
    void on_next_quepage2_clicked();

private:
    Ui::Quepage2 *ui;
    Quepage3 *quepage3;
};

#endif // QUEPAGE2_H
