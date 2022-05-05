#ifndef RAPIDCOVID_H
#define RAPIDCOVID_H

#include <QMainWindow>
#include "Headers/Rapidcovid/quepage1.h"
//#include "Headers\dashboard.h"

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
    void on_pushButton_rct_clicked();

    void on_pushButton_dashboard_clicked();

  //  void on_pushButton_loginQuit_clicked();

    void on_pushButton_quit_clicked();

private:
    Ui::Rapidcovid *ui;
    Quepage1 *quepage1;
};

#endif // RAPIDCOVID_H
