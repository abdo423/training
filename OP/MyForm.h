#pragma once
#include "MyForm1.h"
#include <msclr/marshal_cppstd.h>
#include "Email_login.h"

namespace OP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

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
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ Reg;
	private: System::Windows::Forms::Button^ Sign;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::TextBox^ textBox_username;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Reg = (gcnew System::Windows::Forms::Button());
			this->Sign = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(51, 463);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 54);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Reg
			// 
			this->Reg->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Reg->FlatAppearance->BorderSize = 0;
			this->Reg->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reg->ForeColor = System::Drawing::Color::White;
			this->Reg->Location = System::Drawing::Point(233, 379);
			this->Reg->Name = L"Reg";
			this->Reg->Size = System::Drawing::Size(161, 54);
			this->Reg->TabIndex = 13;
			this->Reg->Text = L"Register";
			this->Reg->UseVisualStyleBackColor = false;
			this->Reg->Click += gcnew System::EventHandler(this, &MyForm::Reg_Click);
			// 
			// Sign
			// 
			this->Sign->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Sign->FlatAppearance->BorderSize = 0;
			this->Sign->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Sign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sign->ForeColor = System::Drawing::Color::White;
			this->Sign->Location = System::Drawing::Point(51, 379);
			this->Sign->Name = L"Sign";
			this->Sign->Size = System::Drawing::Size(161, 54);
			this->Sign->TabIndex = 14;
			this->Sign->Text = L"Sign in";
			this->Sign->UseVisualStyleBackColor = false;
			this->Sign->Click += gcnew System::EventHandler(this, &MyForm::Sign_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(51, 331);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(343, 2);
			this->panel2->TabIndex = 11;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(51, 229);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(343, 2);
			this->panel1->TabIndex = 10;
			// 
			// textBox_password
			// 
			this->textBox_password->BackColor = System::Drawing::Color::Black;
			this->textBox_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox_password->ForeColor = System::Drawing::Color::White;
			this->textBox_password->Location = System::Drawing::Point(51, 297);
			this->textBox_password->MaxLength = 15;
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(343, 29);
			this->textBox_password->TabIndex = 8;
			// 
			// textBox_username
			// 
			this->textBox_username->BackColor = System::Drawing::Color::Black;
			this->textBox_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_username->ForeColor = System::Drawing::Color::White;
			this->textBox_username->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox_username->Location = System::Drawing::Point(51, 196);
			this->textBox_username->MaxLength = 30;
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->Size = System::Drawing::Size(343, 29);
			this->textBox_username->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 10.8F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(46, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(46, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 23);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Username";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Text", 34.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(37, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 83);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Sign In";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(677, -58);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(331, 614);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Reg);
			this->Controls->Add(this->Sign);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_username);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void Reg_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ x = gcnew MyForm1();
		x->Show();
	}

	private: System::Void Sign_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ User = this->textBox_username->Text;
		string g = msclr::interop::marshal_as<std::string>(User);
		String^ Pass = this->textBox_password->Text;
		string q = msclr::interop::marshal_as<std::string>(Pass);

		if (User->Length == 0)
		{
			MessageBox::Show("Please enter your username");
		}

		else if (Pass->Length == 0)
		{
			MessageBox::Show("Please enter your Password");
		}

		else if (User == "admin" && Pass == "admin")
		{
			MessageBox::Show("how are you and your goats?");
			//Admin Form
		}

		else
		{
			bool p;
			Email_login x;
			p = x.login(g, q);
			if (p)
			{
				MessageBox::Show("yo-yo-yo");
			}
			else
			{
				MessageBox::Show("esmo leh capol 3adweya");
			}
		}
	}
};
}
