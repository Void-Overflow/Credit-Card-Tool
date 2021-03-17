#include "Querry.h"

ConnectDB::ConnectDB(System::String^ in_file){
	sql_file = System::IO::File::ReadAllText(in_file);
}

bool ConnectDB::ConnectDataBase() {
	String^ connectionString = "Data Source=WIN-50GP30FGO75;Initial Catalog=Demodb;User ID=sa;Password=demol23";
	SqlConnection^ cnn = gcnew SqlConnection(connectionString);
	cnn->Open();

	state = true;
	return true;
}

ConnectDB::~ConnectDB() {
	cnn->Close();
}