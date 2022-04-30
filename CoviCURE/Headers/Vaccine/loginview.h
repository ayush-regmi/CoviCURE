#ifndef LOGINVIEW_H
#define LOGINVIEW_H

#include <QDialog>


namespace Ui {
class Loginview;
}

class Loginview : public QDialog
{
    Q_OBJECT

public:
    explicit Loginview(QWidget *parent = nullptr);
    ~Loginview();

private:
    Ui::Loginview *ui;

};

#endif // LOGINVIEW_H
