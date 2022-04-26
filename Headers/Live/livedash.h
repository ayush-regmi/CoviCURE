#ifndef LIVEDASH_H
#define LIVEDASH_H

#include <QMainWindow>

namespace Ui {
class Livedash;
}

class Livedash : public QMainWindow
{
    Q_OBJECT

public:
    explicit Livedash(QWidget *parent = nullptr);
    ~Livedash();

private slots:
    void on_pushButtonWHO_clicked();

    void on_pushButtonMoHP_clicked();

    void on_pushButtonWorld_clicked();

    void on_pushButtonNepal_clicked();

    void on_pushButtonBack_clicked();


private:
    Ui::Livedash *ui;
};

#endif // LIVEDASH_H
