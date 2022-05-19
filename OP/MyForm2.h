#pragma once
#include"passeneger.h"
static passeneger p;
namespace OP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			p.loadTicket();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::IndianRed;
			this->button1->Location = System::Drawing::Point(385, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 66);
			this->button1->TabIndex = 0;
			this->button1->Text = L"update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(385, 162);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(338, 41);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(385, 225);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(338, 41);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(385, 299);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(338, 41);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(385, 360);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(338, 41);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(465, 32);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(333, 41);
			this->textBox5->TabIndex = 5;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox5_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(395, 36);
			this->label1->TabIndex = 6;
			this->label1->Text = L"enter your name to view data";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(379, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 36);
			this->label2->TabIndex = 7;
			this->label2->Text = L"your data";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(215, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 36);
			this->label3->TabIndex = 8;
			this->label3->Text = L"name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(171, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(215, 36);
			this->label4->TabIndex = 9;
			this->label4->Text = L" boarding point";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(152, 304);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(234, 36);
			this->label5->TabIndex = 10;
			this->label5->Text = L"destination point";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(171, 365);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(189, 36);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Date of travel";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DodgerBlue;
			this->button2->Location = System::Drawing::Point(221, 427);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 65);
			this->button2->TabIndex = 12;
			this->button2->Text = L"view";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(540, 427);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 66);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Insert";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(874, 10);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 47);
			this->button4->TabIndex = 14;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::IndianRed;
			this->ClientSize = System::Drawing::Size(961, 515);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->Text = L"update";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int count = p.tickets.size();
		int counter = 0;
		for (int i = 0; i < p.tickets.size(); i++)
		{
			if (p.tickets[i].passeneger_name != msclr::interop::marshal_as<std::string>(textBox5->Text))

			{
				counter++;
			}

			else if (p.tickets[i].passeneger_name == msclr::interop::marshal_as<std::string>(textBox5->Text))
			{
				vector <ticket> t = p.displayTicket();
				textBox1->Text = msclr::interop::marshal_as<System::String^>(t[i].passeneger_name);
				textBox2->Text = msclr::interop::marshal_as<System::String^>(t[i].boarding_point);
				textBox3->Text = msclr::interop::marshal_as<System::String^>(t[i].destination_point);
				textBox4->Text = msclr::interop::marshal_as<System::String^>(t[i].date_of_travel);
				MessageBox::Show("Data has been viewed");

			}
		}

		if (counter == count)
		{
			MessageBox::Show("Data not found");
		}

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text == "")
		{
			MessageBox::Show("you have to view data first");
			textBox1->Clear();
			textBox2->Clear();
			textBox3->Clear();
			textBox4->Clear();
			return;

		}
		else if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "")
		{
			MessageBox::Show("please fill in all data fields");
			return;
		}


		p.updateTicket(msclr::interop::marshal_as<std::string>(textBox1->Text), msclr::interop::marshal_as<std::string>(textBox2->Text), msclr::interop::marshal_as<std::string>(textBox3->Text), msclr::interop::marshal_as<std::string>(textBox4->Text), msclr::interop::marshal_as<std::string>(textBox5->Text));
		MessageBox::Show("updated successfully");
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int count = p.tickets.size();
	int counter = 0;
	for (int i = 0; i < p.tickets.size(); i++)
	{
		if (p.tickets[i].passeneger_name != msclr::interop::marshal_as<std::string>(textBox1->Text))
		{
			counter++;

		}


	}
	if (counter < count)
	{
		MessageBox::Show("data already exists");
	}
	else
	{

		p.addTicket(msclr::interop::marshal_as<std::string>(textBox1->Text), msclr::interop::marshal_as<std::string>(textBox2->Text), msclr::interop::marshal_as<std::string>(textBox3->Text), msclr::interop::marshal_as<std::string>(textBox4->Text));
		MessageBox::Show("You have inserted sucessfully");
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	p.deletDB();
	p.storeTicket();
	this->Close();
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
