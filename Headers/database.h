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
    void connectDB(QString);
    QSqlDatabase getDB();
    bool connectionDB();
    bool connectionLogin();
};

#endif // DATABASE_H
