#include "Headers\mainwindow.h"


#include <QApplication>
#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtDebug>

//void connect_mysql()
//{
//       QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
//       db.setHostName("127.0.0.1");      // Connect to the database host name , Here we need to pay attention to （ If it is ”127.0.0.1“, Unable to connect , Is changed to localhost)
//       db.setPort(3306);                 // Connection database port number , Consistent with settings
//        db.setDatabaseName("sql_store");      // Connection database name , Consistent with settings
//        db.setUserName("root");          // Database user name , Consistent with settings
//        db.setPassword("th@nky0u@lm!ghty");    // Database password , Consistent with settings
//        qDebug()<<" Start connecting ";
//        db.open();
//        if(!db.open())
//        {
//            qDebug()<<" Can't connect "<<"connect to mysql error"<<db.lastError().text();
//            return ;
//        }
//        else
//        {
//             qDebug()<<" Successful connection "<<"connect to mysql OK";
//        }
//        QSqlQuery query(db);
//        // This is the name of my watch , The next operation is to print out test surface name All the data in a column
//        query.exec("select * from test");
//        while(query.next()){
//            qDebug()<<query.value("name").toString();
//        }
//}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

