#ifndef VALIDATOR
#define VALIDATOR

#include <string>

class Validator{
protected:
	unsigned long long int num = 0;
	bool status = false;
public:
	unsigned long long get_num(std::string in);
	bool is_valid();
};

class Luhn_Algorigthem : public Validator {
protected:
	unsigned long long int doubled_val = 0;
public:
	unsigned long long double_every_other_value(unsigned long long int in);
};
#endif
