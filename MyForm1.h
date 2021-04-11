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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label10;
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			this->button2->BackColor = System::Drawing::Color::YellowGreen;
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 13);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Amount Due:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(35, 267);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(191, 20);
			this->textBox1->TabIndex = 45;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button4->Location = System::Drawing::Point(107, 238);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(82, 23);
			this->button4->TabIndex = 46;
			this->button4->Text = L"Set";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 298);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 13);
			this->label6->TabIndex = 47;
			this->label6->Text = L"Interest Rate (%):";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(34, 352);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 13);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Time (Years):";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button5->Location = System::Drawing::Point(123, 293);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(82, 22);
			this->button5->TabIndex = 49;
			this->button5->Text = L"Set";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button6->Location = System::Drawing::Point(107, 347);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(82, 22);
			this->button6->TabIndex = 50;
			this->button6->Text = L"Set";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(35, 321);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(191, 20);
			this->textBox3->TabIndex = 51;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(35, 375);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(191, 20);
			this->textBox4->TabIndex = 52;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(32, 192);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 13);
			this->label8->TabIndex = 53;
			this->label8->Text = L"Card Properties: ";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm1::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(399, 192);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 13);
			this->label9->TabIndex = 54;
			this->label9->Text = L"Interest:";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Simple", L"Compound" });
			this->checkedListBox1->Location = System::Drawing::Point(402, 230);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(105, 49);
			this->checkedListBox1->TabIndex = 55;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button7->Location = System::Drawing::Point(578, 238);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(82, 23);
			this->button7->TabIndex = 56;
			this->button7->Text = L"Calculate";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::YellowGreen;
			this->button8->Location = System::Drawing::Point(728, 236);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(86, 26);
			this->button8->TabIndex = 57;
			this->button8->Text = L"Save";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// textBox5
			// 
			this->textBox5->AllowDrop = true;
			this->textBox5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Location = System::Drawing::Point(402, 321);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox5->Size = System::Drawing::Size(513, 102);
			this->textBox5->TabIndex = 58;
			this->textBox5->Text = L"No Interest;";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(402, 293);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 13);
			this->label10->TabIndex = 59;
			this->label10->Text = L"Output:";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(973, 471);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
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
	double interest, total;

	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e){
		MyForm1::Text = "Comyar's Credit Card Tool";
		JsonConfig json("configuration.json");
		
		json.configure_file(); 
		json.check_status();

		
		this->label1->Font = gcnew Drawing::Font(label1->Font, FontStyle::Bold);
		this->label1->Text = "Welcome " + gcnew String(json.firstName.c_str());

		this->label2->Font = gcnew Drawing::Font(label1->Font, FontStyle::Bold);
		this->label8->Font = gcnew Drawing::Font(label1->Font, FontStyle::Bold);
		this->label9->Font = gcnew Drawing::Font(label1->Font, FontStyle::Bold);
		this->label10->Font = gcnew Drawing::Font(label1->Font, FontStyle::Bold);

		data_base.db = "Card Validator";
		data_base.ConnectDataBase();

		data_base.Delete_Row(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "CardNumber = NULL");

		for (int i = 0; i < data_base.amt_of_rows(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(CardNumber,'')", 0); i++){
			if (Convert::ToInt64(data_base.Read_DB("COALESCE(CardNumber,'1')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i)) != NULL) {
				if (data_base.Read_DB("COALESCE(CardNumber,'1')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i) != "1") {
					comboBox1->Items->Add(data_base.Read_DB("COALESCE(CardNumber,'1')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i));
					comboBox2->Items->Add(data_base.Read_DB("COALESCE(CardNumber,'1')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i));
				}
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

			comboBox1->Items->Add(Convert::ToString(num));
			comboBox2->Items->Add(Convert::ToString(num));
		}
	}

	catch (Exception^ e) {
		Console::WriteLine(e);

		this->textBox2->BackColor = Color::Red;
		this->textBox2->Text = Convert::ToString(e);
	}
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	JsonConfig json("configuration.json");
	String^ item = Convert::ToString(this->comboBox1->Text->Replace(" ", ""));

	bool interest_state[2]{ false, false};
	String^ interest_read;
	String^ total_read;

	json.configure_file();
	json.check_status();

	try {
		if (data_base.does_exist(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "due\",'')", 0)) {
			for (int i = 0; i < data_base.amt_of_rows(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "due\",'')", 0); i++) {
				if (data_base.Read_DB("COALESCE(\"" + item + "due\",'1')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i) != "1")
					textBox1->Text = data_base.Read_DB("COALESCE(\"" + item + "due\",'')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i);
			}
		}

		if (data_base.does_exist(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "rate\",'')", 0)) {
			for (int i = 0; i < data_base.amt_of_rows(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "rate\",'')", 0); i++) {
				if (data_base.Read_DB("COALESCE(\"" + item + "rate\",'1')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i) != "1")
					textBox3->Text = data_base.Read_DB("COALESCE(\"" + item + "rate\",'')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i);
			}
		}

		if (data_base.does_exist(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "time\",'')", 0)) {
			for (int i = 0; i < data_base.amt_of_rows(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "time\",'')", 0); i++) {
				if (data_base.Read_DB("COALESCE(\"" + item + "time\",'1')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i) != "1")
					textBox4->Text = data_base.Read_DB("COALESCE(\"" + item + "time\",'')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i);
			}
		}

		if (data_base.does_exist(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "interest\",'')", 0)) {
			for (int i = 0; i < data_base.amt_of_rows(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "interest\",'')", 0); i++) {
				if (data_base.Read_DB("COALESCE(\"" + item + "interest\",'1')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i) != "1")
					interest_read = data_base.Read_DB("COALESCE(\"" + item + "interest\",'')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i);
					interest_state[1] = true;
			}
		}

		if (data_base.does_exist(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "total\",'')", 0)) {
			for (int i = 0; i < data_base.amt_of_rows(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "total\",'')", 0); i++) {
				if (data_base.Read_DB("COALESCE(\"" + item + "total\",'1')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i) != "1")
				total_read = data_base.Read_DB("COALESCE(\"" + item + "total\",'')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i);
				interest_state[2] = true;
			}
		}

		if (interest_state[1] == true && interest_state[2] == true) {
			textBox5->BackColor = Color::LightYellow;
			textBox5->Text = "Saved interest: " + interest_read + "\n Saved Total: " + total_read;
		}
	}

	catch (Exception^ e) {
		Console::WriteLine(e);

		this->textBox2->BackColor = Color::Red;
		this->textBox2->Text = Convert::ToString(e);
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ item = Convert::ToString(this->comboBox2->Text->Replace(" ", ""));
		JsonConfig json("configuration.json");

		json.configure_file();
		json.check_status();

		comboBox1->Items->Remove(item);
		comboBox2->Items->Remove(item);

		this->textBox2->BackColor = Color::Green;
		this->textBox2->Text = "Successfully removed " + item + " from available cards;";

		data_base.Delete_Row(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(CardNumber, '1') = " + item);
		if (data_base.does_exist(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "due\",'')", 0))
			data_base.Delete_Column(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "\"" + item + "due\"");
		if (data_base.does_exist(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "rate\",'')", 0))
			data_base.Delete_Column(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "\"" + item + "rate\"");
		if (data_base.does_exist(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "time\",'')", 0))
			data_base.Delete_Column(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "\"" + item + "time\"");
		if (data_base.does_exist(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "interest\",'')", 0))
			data_base.Delete_Column(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "\"" + item + "interest\"");
		if (data_base.does_exist(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "total\",'')", 0))
			data_base.Delete_Column(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "\"" + item + "total\"");

		comboBox1->Text = "";
		comboBox2->Text = "";
		textBox1->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->BackColor = Color::FromKnownColor(KnownColor::Control);
		textBox5->Text = "No interest;";
	}
	catch (Exception^ e) {
		Console::WriteLine(e);

		this->textBox2->BackColor = Color::Red;
		this->textBox2->Text = Convert::ToString(e);
	}
}

//AMOUNT DUE
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	JsonConfig json("configuration.json");
	String^ item = Convert::ToString(this->comboBox1->Text->Replace(" ", ""));

	json.configure_file();
	json.check_status();

	try {
		data_base.Create_Column("\"" + item + "due\"" , gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "varchar(255)");
		data_base.Write_DB(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "\"" + item + "due\"", textBox1->Text);

		std::cout << "Added new amount due...\n";
		this->textBox2->BackColor = Color::Green;
		this->textBox2->Text = "Added " + textBox1->Text + " as amount due for " +comboBox1->Text;
	}

	catch(Exception^ e){
		Console::WriteLine(e);

		this->textBox2->BackColor = Color::Red;
		this->textBox2->Text = Convert::ToString(e);
	}
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
//INTEREST RATE
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	JsonConfig json("configuration.json");
	String^ item = Convert::ToString(this->comboBox1->Text->Replace(" ", ""));

	json.configure_file();
	json.check_status();

	try {
		data_base.Create_Column("\"" + item + "rate\"", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "varchar(255)");
		data_base.Write_DB(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "\"" + item + "rate\"", textBox3->Text);

		std::cout << "Added new interest rate...\n";
		this->textBox2->BackColor = Color::Green;
		this->textBox2->Text = "Added " + textBox3->Text + "% as interest rate for " + comboBox1->Text;
	}

	catch (Exception^ e) {
		Console::WriteLine(e);

		this->textBox2->BackColor = Color::Red;
		this->textBox2->Text = Convert::ToString(e);
	}
}

//TIME
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	JsonConfig json("configuration.json");
	String^ item = Convert::ToString(this->comboBox1->Text->Replace(" ", ""));

	json.configure_file();
	json.check_status();

	try {
		data_base.Create_Column("\"" + item + "time\"", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "varchar(255)");
		data_base.Write_DB(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "\"" + item + "time\"", textBox4->Text);

		std::cout << "Added new time...\n";
		this->textBox2->BackColor = Color::Green;
		this->textBox2->Text = "Added " + textBox4->Text + " years as ongoing time for " + comboBox1->Text;
	}

	catch (Exception^ e) {
		Console::WriteLine(e);

		this->textBox2->BackColor = Color::Red;
		this->textBox2->Text = Convert::ToString(e);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	JsonConfig json("configuration.json");
	String^ item = Convert::ToString(this->comboBox1->Text->Replace(" ", ""));

	bool states[2]{false, false};
	double principle, rate, time;

	json.configure_file();
	json.check_status();

	try {
		if (data_base.does_exist(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "due\",'')", 0)) {
			for (int i = 0; i < data_base.amt_of_rows(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "due\",'')", 0); i++) {
				if (data_base.Read_DB("COALESCE(\"" + item + "due\",'1')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i) != "1") {
					principle = (double)Convert::ToDecimal(data_base.Read_DB("COALESCE(\"" + item + "due\",'')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i));
					states[0] = true;
				}
			}
		}
		else {
			states[0] = false;
			this->textBox2->BackColor = Color::Red;
			this->textBox2->Text = "Failed to find principle amount";
		}

		if (data_base.does_exist(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "rate\",'')", 0)) {
			for (int i = 0; i < data_base.amt_of_rows(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "rate\",'')", 0); i++) {
				if (data_base.Read_DB("COALESCE(\"" + item + "rate\",'1')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i) != "1") {
					rate = (double)Convert::ToDecimal(data_base.Read_DB("COALESCE(\"" + item + "rate\",'')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i)) / 100;
					states[1] = true;
				}
			}
		}
		else {
			states[1] = false;
			this->textBox2->BackColor = Color::Red;
			this->textBox2->Text = "Failed to find interest rate";
		}

		if (data_base.does_exist(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "time\",'')", 0)) {
			for (int i = 0; i < data_base.amt_of_rows(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "COALESCE(\"" + item + "time\",'')", 0); i++) {
				if (data_base.Read_DB("COALESCE(\"" + item + "time\",'1')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i) != "1") {
					time = (double)Convert::ToDecimal(data_base.Read_DB("COALESCE(\"" + item + "time\",'')", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), 0, i));
					states[2] = true;
				}
			}
		}
		else {
			states[2] = false;
			this->textBox2->BackColor = Color::Red;
			this->textBox2->Text = "Failed to find time";
		}

		if (states[0] == true && states[1] == true && states[2] == true) {
			for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++) {
				String^ selection = checkedListBox1->CheckedItems[i]->ToString();
				if (selection == "Simple") {
					interest = principle * rate * time;
					total = interest + principle;

					this->textBox5->BackColor = Color::LightYellow;
					this->textBox5->Text = "Simple interest is " + interest + ", which makes the total plus interest " + total + ". If you would like to save this interest for this card, click on the save button.";
				}
				else if (selection == "Compound") {
					interest = (principle * pow((1 + rate), time)) - principle;
					total = principle * pow((1 + rate), time);

					this->textBox5->BackColor = Color::LightYellow;
					this->textBox5->Text = "Compound interest is " + interest + ", which makes the total plus interest " + total + ". If you would like to save this interest for this card, click on the save button.";
				}
				else {
					interest = principle * rate * time;
					total = interest + principle;

					this->textBox5->BackColor = Color::LightYellow;
					this->textBox5->Text = "Simple interest is " + interest + ", which makes the total plus interest " + total + ". If you would like to save this interest for this card, click on the save button.";
				}
			}
		}
	}
	catch (Exception^ e) {
		Console::WriteLine(e);

		this->textBox2->BackColor = Color::Red;
		this->textBox2->Text = Convert::ToString(e);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (interest > 0 && total > 0) {
		JsonConfig json("configuration.json");
		String^ item = Convert::ToString(this->comboBox1->Text->Replace(" ", ""));

		json.configure_file();
		json.check_status();

		try {
			data_base.Create_Column("\"" + item + "interest\"", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "varchar(255)");
			data_base.Create_Column("\"" + item + "total\"", gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "varchar(255)");
			data_base.Write_DB(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "\"" + item + "interest\"", Convert::ToString(interest));
			data_base.Write_DB(gcnew String(json.lastName.c_str()) + gcnew String(json.firstName.c_str()), "\"" + item + "total\"", Convert::ToString(total));

			std::cout << "Saved interest and total to db...\n";
			textBox5->BackColor = Color::GreenYellow;
			this->textBox5->Text = "Saved " + interest + " as the interest, and " + total + " as the total for " + item + ".";
		}

		catch (Exception^ e) {
			Console::WriteLine(e);

			this->textBox5->Text = Convert::ToString(e);
		}
	}
	else {
		this->textBox5->Text = Convert::ToString("Failed to find calculated interest");
	}
}
};
}
