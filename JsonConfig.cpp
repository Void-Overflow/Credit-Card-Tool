#include "JsonConfig.h"
#include <iostream>

JsonConfig::JsonConfig(std::string infile) {
	file.open(infile);
}

bool JsonConfig::configure_file() {
	Json::CharReaderBuilder builder;
	JSONCPP_STRING errs;

	if (!parseFromStream(builder, file, &root, &errs)) {
		std::cout << errs << std::endl;
		return EXIT_FAILURE;
	}
	
	return true;
}

void JsonConfig::check_status() {

}

void JsonConfig::set_status() {

}