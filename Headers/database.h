#ifndef DATABASE_H
#define DATABASE_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QString>

class Database
{
private:
    QSqlDatabase db;
public:
    bool connectDB(QString);
    QSqlDatabase getDB();

};

#endif // DATABASE_H
