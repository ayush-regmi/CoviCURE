#include "Headers\database.h"

   // Setting up connection to MYSQL Database on Cloud
   //
   // Database configuration details
   // hostname: covicure.mysql.database.azure.com
   // Port: 3306,
   // Database Name : XXX,
   // Database Username: Pitchers@covicure,
   // Database Password: ********

    void Database::connectDB(QString XXX){
        db=QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("covicure.mysql.database.azure.com");      // Connect to the database host name , Here we need to pay attention to （ If it is ”127.0.0.1“, Unable to connect , Is changed to localhost)
        db.setPort(3306);                 // Connection database port number , Consistent with settings
        db.setDatabaseName(XXX);      // Connection database name , Consistent with settings
        db.setUserName("Pitchers@covicure");          // Database user name , Consistent with settings
        db.setPassword("C0v!Cure");    // Database password , Consistent with settings
        qDebug()<<" Start connecting ";
    }

   QSqlDatabase Database::getDB() {
       return db;
   }

   bool Database::connectionDB() {
       db.open();
       if(!db.open()) {
           return false;
       }
       else {
            return true;
       }
   }

