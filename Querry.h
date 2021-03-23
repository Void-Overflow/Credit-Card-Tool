#ifndef DATA_BASE
#define DATA_BASE

using namespace System;
using namespace System::Data::SqlClient;

ref class ConnectDB{
protected:
	SqlConnection^ cnn;
	bool state;

public:
	String^ db;

	bool ConnectDataBase();
	bool DisconnectDataBase(void);
};

ref class Querry : public ConnectDB{
private:
	~Querry(void);
public:
	bool Create_Table(String^ name, String^ columns);

	bool Read_DB(String^ column, String^ table);
	bool Write_DB(String^ path, String^ msg);
};

#endif 