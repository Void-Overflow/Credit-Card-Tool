#pragma once

#include "JsonConfig.h"
#include "Querry.h"

#include "MyForm1.h"

#include <string>

using System::Runtime::InteropServices::Marshal;

std::string in_first_name;
std::string in_last_name;

namespace CreditCardValidator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(560, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome! Please enter your first and last name to start using Comyar\'s Credit Car"
				L"d Tool!(This will only be asked once.)";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::ForestGreen;
			this->button1->Location = System::Drawing::Point(57, 242);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(443, 60);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(100, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"First Name:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(100, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Last Name:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(166, 123);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(249, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(166, 172);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(249, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(974, 472);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		JsonConfig json("configuration.json");

		json.configure_file();

		json.firstName = in_first_name;
		json.lastName = in_last_name;

		json.set_status(); 

		Querry database;
		database.db = "Card Validator";
		
		database.ConnectDataBase();
		database.Create_Table(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "CardNumber varchar(MAX)");
		database.DisconnectDataBase();

		std::cout << "Configuring Card...\n";

		MyForm1^ form1 = gcnew MyForm1;

		this->Hide();
		form1->ShowDialog();
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(this->textBox1->Text);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string NameAsString(charPointer, this->textBox1->Text->Length);
	Marshal::FreeHGlobal(pointer);

	in_first_name = NameAsString;
}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(this->textBox2->Text);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string NameAsString(charPointer, this->textBox2->Text->Length);
	Marshal::FreeHGlobal(pointer);

	in_last_name = NameAsString;
}
	   
	   
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Text = "Comyar's Credit Card Tool";
}
};
}
