#ifndef DATA_BASE
#define DATA_BASE

using namespace System;
using namespace System::Data::SqlClient;

ref class ConnectDB{
protected:
	SqlConnection^ cnn;
	String^ sql_file;
	bool state;

public:
	ConnectDB(System::String^ in_file);
	bool ConnectDataBase();
	~ConnectDB(void);
};

ref class Querry : public ConnectDB{
private:
	Querry() : ConnectDB("script.sql") { };
public:
};

#endif 