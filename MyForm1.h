#pragma once

#include <iostream>

#include "JsonConfig.h"
#include "Validator.h"
#include "Querry.h"

namespace CreditCardValidator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PageSetupDialog^ pageSetupDialog1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pageSetupDialog1 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(399, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Messages:";
			// 
			// textBox2
			// 
			this->textBox2->AllowDrop = true;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(402, 44);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(513, 103);
			this->textBox2->TabIndex = 35;
			this->textBox2->Text = L"None;";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 36;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(474, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 21);
			this->button1->TabIndex = 37;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::ForestGreen;
			this->button2->Location = System::Drawing::Point(243, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 28);
			this->button2->TabIndex = 38;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(35, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(191, 21);
			this->comboBox1->TabIndex = 39;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 13);
			this->label3->TabIndex = 40;
			this->label3->Text = L"Select a card to delete from the list:";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(35, 124);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(191, 21);
			this->comboBox2->TabIndex = 41;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Crimson;
			this->button3->Location = System::Drawing::Point(243, 119);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 28);
			this->button3->TabIndex = 42;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 13);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Select or enter a card number:";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(973, 471);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	Querry data_base;
	unsigned long long int num;

	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e){
		MyForm1::Text = "Comyar's Credit Card Tool";
		JsonConfig json("configuration.json");

		json.configure_file(); 
		json.check_status();

		
		this->label1->Font = gcnew Drawing::Font(label1->Font, FontStyle::Bold);
		this->label1->Text = "Welcome " + gcnew String(json.firstName.c_str());

		data_base.db = "Card Validator";
		data_base.ConnectDataBase();

		for (int i = 0; i < data_base.amt_of_rows(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "CardNumber", 0); i++){
			if (Convert::ToInt64(data_base.Read_DB("CardNumber", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i)) != NULL) {
				comboBox1->Items->Add(data_base.Read_DB("CardNumber", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i));
				comboBox2->Items->Add(data_base.Read_DB("CardNumber", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i));
			}
		}
	}
		   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Clear();
	this->textBox2->BackColor = Color::FromKnownColor(KnownColor::Control);
	this->textBox2->Text = "None;";
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Validator validation;
	JsonConfig json("configuration.json");

	try {
		num = Convert::ToInt64(this->comboBox1->Text->Replace(" ",""));

		validation.get_num(num);
		validation.is_valid();

		if (validation.status == false) {
			this->textBox2->BackColor = Color::Red;
			this->textBox2->Text = "Not a Valid Card Number;";
		}
		else {
			this->textBox2->BackColor = Color::Green;
			this->textBox2->Text = "Successfully Selected Credit Card;";

			json.configure_file();
			json.check_status();

			data_base.Write_DB(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "CardNumber" , Convert::ToString(num));

			int rows = data_base.amt_of_rows(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "CardNumber", 0);

			if (Convert::ToInt64(data_base.Read_DB("CardNumber", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, rows - 1)) != NULL) {
				comboBox1->Items->Add(data_base.Read_DB("CardNumber", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, rows - 1));
				comboBox2->Items->Add(data_base.Read_DB("CardNumber", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, rows - 1));
			}
		}
	}
	catch (Exception^ e) {
		Console::WriteLine(e);

		this->textBox2->BackColor = Color::Red;
		this->textBox2->Text = Convert::ToString(e);
	}
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ item = Convert::ToString(comboBox2->SelectedItem);
	JsonConfig json("configuration.json");

	json.configure_file();
	json.check_status();

	comboBox1->Items->Remove(item);
	comboBox2->Items->Remove(item);

	this->textBox2->BackColor = Color::Green;
	this->textBox2->Text = "Successfully removed " + item + " from available cards;";

	data_base.Delete_Row(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "CardNumber = " + item);
}
};
}
