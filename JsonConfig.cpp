#include "JsonConfig.h"

#include "json/writer.h"

#include <iostream>
#include <string>

JsonConfig::JsonConfig(std::string infile) {
	file = infile;
}

bool JsonConfig::configure_file() {
	in_file.open(file);
	JSONCPP_STRING errs;
	Json::CharReaderBuilder builder;

	if (!parseFromStream(builder, in_file, &root, &errs)) {
		return EXIT_FAILURE;
	}
	
	return true;
}

bool JsonConfig::check_status() {
	if (root["setup"]["done"] == "TRUE") {
		firstName = root["setup"]["firstname"].asString();
		lastName = root["setup"]["lastname"].asString();

		status = true;
		return true;
	}
	else {
		status = false;
		return false;
	}
}

bool JsonConfig::set_status() {
	out_file.open(file);

	root["setup"]["done"] = "TRUE";
	root["setup"]["firstname"] = firstName;
	root["setup"]["lastname"] = lastName;

	out_file << root;
	out_file.close();

	status = true;
	return true;
}