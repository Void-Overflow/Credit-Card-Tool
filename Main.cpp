#include <iostream>
#include "Validator.h"

int main() {
	Validator validate;
	Luhn_Algorigthem algorithem;
	std::string num;
	
	std::cout << "Please enter a credit card number to be checked for validity: \n";
	std::cin >> num;
	std::cout << validate.get_num(num) << " : " << algorithem.double_every_other_value(stoi(num));
	return 0;
}