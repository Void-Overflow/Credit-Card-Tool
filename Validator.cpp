#include "Validator.h"
#include <string>

unsigned long long Validator::get_num(long long int in) {
	num = in;
	return num;
}

bool Validator::is_valid() {	
    int nDigits = std::to_string(num).length();

    int nSum = 0, isSecond = false;
    for (int i = nDigits - 1; i >= 0; i--) {

        int digit = std::to_string(num)[i] - '0';

        if (isSecond == true)
            digit = digit * 2;

        nSum += digit / 10;
        nSum += digit % 10;

        isSecond = !isSecond;
    }

    if (nSum % 10 == 0) {
        status = true;
    }
    else {
        status = false;
    }

	return status;
}