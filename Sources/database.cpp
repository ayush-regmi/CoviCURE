#include "Headers\database.h"

   bool Database::connectDB(){
        // Setting up connection to MYSQL Database on Cloud
        //
        // Database configuration details
        // hostname: hms.cxsp6l8xtyqr.us-east-1.rds.amazonaws.com,
        // Port: 3306,
        // Database Name : hms,
        // Database Username: hms,
        // Database Password: password

//        db = QSqlDatabase::addDatabase("QMYSQL"); // Initializing Database, QMYSQL is MySQL database driver for QT.
//        db.setHostName("127.0.0.1"); // Setting hostname
//        db.setPort(3306); // setting port
//        db.setDatabaseName("sql_store"); // setting database name
//        db.setUserName("root"); //setting username
//        db.setPassword("th@nky0u@lm!ghty"); //setting password
//        qDebug()<<" Start connecting ";
//        if(db.open()) {
//            qDebug()<<" Can't connect "<<"connect to mysql error"<<db.lastError().text();
//            return true;
//        }
//        else { // If database connection is not established
//            qDebug()<<" Successful connection "<<"connect to mysql OK";
//            return false;
//        }
    }

   QSqlDatabase Database::getDB(){
       return db;
   }

//    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("127.0.0.1");      // Connect to the database host name , Here we need to pay attention to （ If it is ”127.0.0.1“, Unable to connect , Is changed to localhost)
//    db.setPort(3306);                 // Connection database port number , Consistent with settings
//     db.setDatabaseName("sql_store");      // Connection database name , Consistent with settings
//     db.setUserName("root");          // Database user name , Consistent with settings
//     db.setPassword("th@nky0u@lm!ghty");    // Database password , Consistent with settings
//     qDebug()<<" Start connecting ";
//     db.open();
//     if(!db.open())
//     {
//         qDebug()<<" Can't connect "<<"connect to mysql error"<<db.lastError().text();
//         return ;
//     }
//     else
//     {
//          qDebug()<<" Successful connection "<<"connect to mysql OK";
//     }
//     QSqlQuery query(db);
//     // This is the name of my watch , The next operation is to print out test surface name All the data in a column
//     query.exec("select * from test");
//     while(query.next()){
//         qDebug()<<query.value("name").toString();
//     }
//}
