#include "Validator.h"

#include <iostream>
#include <string>

int main() {
	Validator validate;
	long long int num;
	
	std::cout << "Please enter a credit card number\n";
	std::cin >> num;

	validate.get_num(num);
	validate.is_valid();

	std::cout << validate.status;

	return 0;
}