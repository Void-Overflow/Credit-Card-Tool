#ifndef VALIDATOR
#define VALIDATOR

class Validator{
protected:
	unsigned long long int num = 0;
public:
	bool status = false;

	unsigned long long get_num(long long int in);
	bool is_valid();
};
#endif
