#ifndef JSON
#define JSON

#include "json/json.h"

#include <fstream>
#include <string>

class JsonConfig{
	std::string file;

	std::ifstream in_file;
	std::ofstream out_file;
	Json::Value root;
	
public:
	bool status = false;
	JsonConfig(std::string infile);

	std::string firstName;
	std::string lastName;

	bool configure_file();
	bool check_status();
	bool set_status();
};

#endif
