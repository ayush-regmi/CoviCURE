#ifndef MESSAGEPAGE_H
#define MESSAGEPAGE_H

#include <QDialog>

namespace Ui {
class Messagepage;
}

class Messagepage : public QDialog
{
    Q_OBJECT

public:
    explicit Messagepage(QWidget *parent = nullptr);
    ~Messagepage();

private slots:
    void on_pushButtonresult_clicked();

private:
    Ui::Messagepage *ui;
    //Messagepage *messagepage;
};

#endif // MESSAGEPAGE_H
