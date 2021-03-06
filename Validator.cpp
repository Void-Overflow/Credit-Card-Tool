#include "Validator.h"
#include <string>

unsigned long long Validator::get_num(std::string in) {
	num = atoi(in.c_str());
	return num;
}

unsigned long long int Luhn_Algorigthem::double_every_other_value(unsigned long long int in) {
	int counter = 10;
	
	for (int i = 0; i < std::to_string(in).length(); i++) {
		if (i % 2 == 0) { //Is even
			counter * 10;
			doubled_val += (in % counter) * 2;
		}
		else { //Is odd
			doubled_val += (in % counter);
		}
	}

	return doubled_val;
}

bool Validator::is_valid() {
	if (num <= 0)
		return false;
	
	Luhn_Algorigthem Altorithem;
	Altorithem.double_every_other_value(num);

	return status;
}