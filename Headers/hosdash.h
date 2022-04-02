#ifndef HOSDASH_H
#define HOSDASH_H

#include <QWidget>

namespace Ui {
class Hosdash;
}

class Hosdash : public QWidget
{
    Q_OBJECT

public:
    explicit Hosdash(QWidget *parent = nullptr);
    ~Hosdash();

private:
    Ui::Hosdash *ui;
};

#endif // HOSDASH_H
