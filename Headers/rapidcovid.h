#ifndef RAPIDCOVID_H
#define RAPIDCOVID_H

#include <QMainWindow>

namespace Ui {
class Rapidcovid;
}

class Rapidcovid : public QMainWindow
{
    Q_OBJECT

public:
    explicit Rapidcovid(QWidget *parent = nullptr);
    ~Rapidcovid();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Rapidcovid *ui;
};

#endif // RAPIDCOVID_H
