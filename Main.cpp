#include "Validator.h"
#include "JsonConfig.h"

#include <iostream>
#include <string>

int main() {
	Validator validation;
	JsonConfig json("configurations.json");

	json.configure_file();

	unsigned long long int num;
	
	std::cout << "Please enter a credit card number (with no spaces)\n";
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