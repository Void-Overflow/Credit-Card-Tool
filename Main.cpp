#include "Validator.h"
#include "JsonConfig.h"

#include "MyForm.h"

#include <iostream>
#include <string>
#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
	Validator validation;
	JsonConfig json("configuration.json");

	json.configure_file();
	json.check_status();

	if (json.status == false) {
		std::cout << "Getting name input from form...\n";
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		CreditCardValidator::MyForm form;
		Application::Run(% form);

		json.firstName = in_first_name;
		json.lastName = in_last_name;

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