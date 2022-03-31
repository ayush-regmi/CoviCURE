#include "Headers\database.h"

   // Setting up connection to MYSQL Database on Cloud
   //
   // Database configuration details
   // hostname: hms.cxsp6l8xtyqr.us-east-1.rds.amazonaws.com,
   // Port: 3306,
   // Database Name : XXX,
   // Database Username: Pitchers@covicure,
   // Database Password: ********

   bool Database::connectDB(QString XXX){
       db=QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("covicure.mysql.database.azure.com");      // Connect to the database host name , Here we need to pay attention to （ If it is ”127.0.0.1“, Unable to connect , Is changed to localhost)
        db.setPort(3306);                 // Connection database port number , Consistent with settings
         db.setDatabaseName(XXX);      // Connection database name , Consistent with settings
         db.setUserName("Pitchers@covicure");          // Database user name , Consistent with settings
         db.setPassword("C0v!Cure");    // Database password , Consistent with settings
         qDebug()<<" Start connecting ";
         db.open();
         if(!db.open())
         {
            qDebug()<<" Can't connect "<<"connect to mysql error"<<db.lastError().text();
             return false;
         }
         else
         {
           qDebug()<<" Successful connection "<<"connect to mysql OK";
              return true;
         }

         QSqlQuery query(db);
             // This is the name of my watch , The next operation is to print out test surface name All the data in a column
             query.exec("select * from test");
             while(query.next()){
                 qDebug()<<query.value("name").toString();
             }
      }


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
 //   }

 //  QSqlDatabase Database::getDB(){
    //   return db;
 //  }

