#include "JsonConfig.h"

#include "MyForm.h"
#include "MyForm1.h"

#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	JsonConfig json("configuration.json");

	json.configure_file();
	json.check_status();

	if (json.status == false) {
		std::cout << "Getting name input from form...\n";

		CreditCardValidator::MyForm form;
		Application::Run(% form);
	} else {
		std::cout << "Configuring Card...\n";

		CreditCardValidator::MyForm1 form1;
		Application::Run(% form1);
	}

	std::string endstr;
	std::getline(std::cin, endstr);
	return 0;
}