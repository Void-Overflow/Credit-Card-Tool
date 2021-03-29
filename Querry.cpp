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

		String^ sql =
			"IF EXISTS(SELECT * FROM INFORMATION_SCHEMA.TABLES WHERE TABLE_NAME = N'" + name + "')\n"
			"BEGIN\n"
			"print 'Table name existed, creating unique table name...'\n"
			"\n"
			"DECLARE @new__name VARCHAR(64) = '" + name + "' + CONVERT(varchar(32), (CONVERT(int, RAND() * (9 - 1) + 1)))\n"
			"\n"
			"WHILE EXISTS(SELECT * FROM INFORMATION_SCHEMA.TABLES WHERE TABLE_NAME = @new__name)\n"
			"BEGIN\n"
			"SET @new__name = @new__name + CONVERT(varchar(32), (CONVERT(int, RAND() * (9 - 1) + 1)))\n"
			"END\n"
			"\n"
			"IF NOT EXISTS(SELECT * FROM INFORMATION_SCHEMA.TABLES WHERE TABLE_NAME = @new__name)\n"
			"BEGIN\n"
			"print @new__name\n"
			"EXEC('CREATE TABLE ' + @new__name + ' (" + columns + ")')\n"
			"END\n"
			"END\n"
			"\n"
			"ELSE\n"
			"BEGIN\n"
			"print 'Table didnt already exist, successfully created table!'\n"
			"CREATE TABLE " + name + "(" + columns + ");\n"
			"END";

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

int Querry::amt_of_rows(String^ table, String^ column, int column_index) {
	Object^ output;
	String^ sql = "SELECT COUNT(" + column + ") FROM " + table;

	try {
		SqlCommand^ command;
		SqlDataReader^ dataReader;

		command = gcnew SqlCommand(sql, cnn);
		dataReader = command->ExecuteReader();

		while (dataReader->Read()) {
			output = dataReader->GetValue(column_index);
		}

		//command->Dispose();
		dataReader->Close();
	}
	catch (Exception^ e) {
		Console::WriteLine(e);

		std::cout << "Failed to Querry database\n";
		return 0;
	}

	return Convert::ToInt32(output);
}

String^ Querry::Read_DB(String^ column, String^ table, int column_index, int row) {
	String^ output;
	String^ sql = "SELECT " + column + " FROM " + table;

	try {
		SqlCommand^ command;
		SqlDataReader^ dataReader;


		command = gcnew SqlCommand(sql, cnn);
		dataReader = command->ExecuteReader();

		std::cout << "Reading data from Database...\n";

		int counter = 0;
		while (dataReader->Read()) {
			if (counter == row)
				output = (String^)dataReader->GetValue(column_index);

			counter++;
		}

		//command->Dispose();
		dataReader->Close();
	}
	catch (Exception^ e) {
		Console::WriteLine(e);

		std::cout << "Failed to Querry database\n";
		return "1";
	}

	return output;
}

bool Querry::Write_DB(String^ table,String^ column ,String^ msg) {
	try {
		SqlCommand^ command;
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter();

		String^ sql = "INSERT INTO " + table + " (" + column+ ") VALUES ('" + msg + "')";

		command = gcnew SqlCommand(sql, cnn);

		std::cout << "Writing to database...\n";

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

bool Querry::Delete_Row(String^ table, String^ condition) {
	try {
		SqlCommand^ command;
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter();

		String^ sql = "DELETE FROM " + table + " WHERE " + condition;

		command = gcnew SqlCommand(sql, cnn);

		std::cout << "Deleting row from previous query...\n";

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