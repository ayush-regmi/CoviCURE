#ifndef QUEPAGE3_H
#define QUEPAGE3_H

#include <QDialog>

namespace Ui {
class Quepage3;
}

class Quepage3 : public QDialog
{
    Q_OBJECT

public:
    explicit Quepage3(QWidget *parent = nullptr);
    ~Quepage3();

private:
    Ui::Quepage3 *ui;
};

#endif // QUEPAGE3_H
