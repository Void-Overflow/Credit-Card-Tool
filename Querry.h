#ifndef DATA_BASE
#define DATA_BASE

using namespace System;
using namespace System::Data::SqlClient;

ref class ConnectDB {
protected:
    SqlConnection^ cnn;
    bool state;

public:
    String^ db;

    bool ConnectDataBase(void);
    bool DisconnectDataBase(void);
};

ref class Querry : public ConnectDB {
private:
    ~Querry(void);
public:
    bool Create_Table(String^ name, String^ columns);
    bool Create_Column(String^ name, String^ table, String^ datatype);
   

    String^ Read_DB(String^ column, String^ table, int column_index, int row);
    bool Write_DB(String^ table, String^ column, String^ msg);

    bool Delete_Row(String^ table, String^ condition);
    bool Delete_Column(String^ table, String^ column);

    int amt_of_rows(String^ table, String^ column, int column_index);
    bool does_exist(String^ table, String^ column, int column_index);
    bool table_exist(String^ table, int column_index);
};

#endif 
