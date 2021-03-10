#include "Validator.h"
#include "JsonConfig.h"

#include <iostream>
#include <string>
#include <windows.h>

int main() {
	Validator validation;
	JsonConfig json("configuration.json");

	json.configure_file();
	json.check_status();

	if (json.status == false) {
		std::cout << "Hi, welcome to Comyar's Credit Card Tool, please enter your first name (this will only be asked once.)\n";
		std::cin >> json.firstName;
		std::cout << "Now please enter your last name:\n";
		std::cin >> json.lastName;

		json.set_status();
		system("CLS");
	}


	unsigned long long int num;
	std::cout << "Welcome " << json.firstName << "! Please enter a valid credit card number (with no spaces)\n";
	std::cin >> num;

	validation.get_num(num);
	validation.is_valid();

	while (validation.status == false) {
		std::cout << "Not a valid credit card number, try again:\n";
		std::cin >> num;

		validation.get_num(num);
		validation.is_valid();
	}

	return 0;
}