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

    bool ConnectDataBase();
    bool DisconnectDataBase(void);
};

ref class Querry : public ConnectDB {
private:
    ~Querry(void);
public:
    bool Create_Table(String^ name, String^ columns);
    int amt_of_rows(String^ table, String^ column, int column_index);

    String^ Read_DB(String^ column, String^ table, int column_index, int row);
    bool Write_DB(String^ table, String^ column, String^ msg);
};

#endif 
