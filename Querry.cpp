#include "Querry.h"
#include <iostream>
#include "JsonConfig.h"

bool ConnectDB::ConnectDataBase() {
	try {
		String^ connectionString = "Data Source=COMYAR-PC\\SQLEXPRESS;Initial Catalog=" + db + ";Integrated Security=True";

		cnn = gcnew SqlConnection(connectionString);
		cnn->Open();

		std::cout << "Successfully Connected to Database!\n";
	}
	catch (Exception^ e) {
		Console::WriteLine(e);

		state = false;
		return false;
	}

	state = true;
	return true;
}

bool Querry::Create_Table(String^ name, String^ columns) {
	try {
		SqlCommand^ command;
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter();

		String^ sql = "CREATE TABLE " + name + " (" + columns + ");";

		command = gcnew SqlCommand(sql, cnn);

		adapter->InsertCommand = gcnew SqlCommand(sql, cnn);
		adapter->InsertCommand->ExecuteNonQuery();
	}
	catch (Exception^ e) {
		Console::WriteLine(e);

		return false;
	}

	return true;
}

bool Querry::Read_DB(String^ column, String^ table) {
	try {
		SqlCommand^ command;
		SqlDataReader^ dataReader;

		String^ output;
		String^ sql = "SELECT " + column + " FROM " + table;

		command = gcnew SqlCommand(sql, cnn);
		dataReader = command->ExecuteReader();

		std::cout << "Reading data from Database...\n";

		while (dataReader->Read()) {
			output = output + dataReader->GetValue(0) + " - " + dataReader->GetValue(1) + "\n";
		}

		//command->Dispose();
		dataReader->Close();
	}
	catch (Exception^ e) {
		Console::WriteLine(e);

		return false;
	}

	return true;
}

bool Querry::Write_DB(String^ path, String^ msg) {
	try {
		SqlCommand^ command;
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter();

		String^ sql = "INSERT INTO " +  path +  " VALUES ('" + msg + "')";

		command = gcnew SqlCommand(sql, cnn);

		adapter->InsertCommand = gcnew SqlCommand(sql, cnn);
		adapter->InsertCommand->ExecuteNonQuery();

		//command->Dispose();
	}
	catch (Exception^ e) {
		Console::WriteLine(e);

		return false;
	}

	return true;
}

bool ConnectDB::DisconnectDataBase() {
	try {
		std::cout << "Successfully Disconnected from Database!\n";
		cnn->Close();
	}
	catch (Exception^ e) {
		Console::WriteLine(e);

		state = false;
		return false;
	}

	state = false;
	return true;
}

Querry::~Querry() {
	try {
		if (state == true) {
			std::cout << "Forcefully Disconnected from Database\n";
			cnn->Close();

			state = false;
			return;
		}
		else {
			return;
		}
	}
	catch (Exception^ e) {
		Console::WriteLine(e);

		return;
	}
}