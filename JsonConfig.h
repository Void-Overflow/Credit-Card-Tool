#ifndef JSON
#define JSON

#include "JsonConfig.h"
#include "json/json.h"

#include <fstream>
#include <string>

class JsonConfig{
	std::ifstream file;
	Json::Value root;
	
public:
	bool status = false;
	JsonConfig(std::string infile);

	bool configure_file();
	void check_status();
	void set_status();
};

#endif
