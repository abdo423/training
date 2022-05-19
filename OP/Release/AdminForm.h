#pragma once
#include "test.h"
#include <msclr/marshal_cppstd.h>
using namespace std;
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
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox1;












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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(92, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 69);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Location = System::Drawing::Point(962, 549);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(271, 76);
			this->panel3->TabIndex = 12;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(5, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(81, 69);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightGray;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(92, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(159, 72);
			this->button5->TabIndex = 6;
			this->button5->Text = L"View Trains";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &AdminForm::button5_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Wingdings", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(-4, -6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 97);
			this->button2->TabIndex = 11;
			this->button2->Text = L"";
			this->button2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminForm::button2_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->button6);
			this->panel4->Location = System::Drawing::Point(492, 549);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(215, 76);
			this->panel4->TabIndex = 12;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(5, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(81, 69);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightGray;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(92, 7);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 66);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Update";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &AdminForm::button6_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(12, 549);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(199, 76);
			this->panel2->TabIndex = 11;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(5, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(81, 69);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(156, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 35);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Train Name : ";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(147, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 35);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Number of Train: ";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(156, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(227, 35);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Boarding point : ";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(156, 259);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(227, 35);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Destination point : ";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(156, 334);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(227, 35);
			this->label5->TabIndex = 15;
			this->label5->Text = L"No.Seats : ";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(156, 396);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(227, 35);
			this->label6->TabIndex = 16;
			this->label6->Text = L"ticket price : ";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(156, 477);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(227, 35);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Date of travel : ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(379, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(425, 34);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(379, 102);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(425, 34);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(379, 184);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(425, 34);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(379, 256);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(425, 34);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(379, 331);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(425, 34);
			this->textBox5->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(379, 393);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(425, 34);
			this->textBox6->TabIndex = 6;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(379, 474);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(425, 34);
			this->textBox7->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightGray;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(100, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 69);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Location = System::Drawing::Point(748, 556);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(199, 76);
			this->panel1->TabIndex = 12;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(3, 4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(81, 69);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->pictureBox5);
			this->panel5->Controls->Add(this->button4);
			this->panel5->Location = System::Drawing::Point(247, 556);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(199, 76);
			this->panel5->TabIndex = 25;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(3, 4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(81, 69);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightGray;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(90, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(106, 69);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AdminForm::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(927, 259);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(239, 212);
			this->listBox1->TabIndex = 26;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Wheat;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1235, 636);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminForm";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int loopInVeiwData = 0;
		String^ last_train_viewed = "";


		void clear() { // func to make text boxs empty
			textBox1->Clear();
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";
			textBox6->Text = "";
			textBox7->Text = "";
			last_train_viewed = "";
		}


		bool checkingForNo_Train() {
			bool check = false;
			test obj = test();
			ResultSet* result = obj.dbGet("select * from test_train");

			while (result->next())
			{
				if (gcnew String(result->getString(2).c_str()) == textBox2->Text)
				{
					check = true;
					break;
				}
			}
			return check;
		}


		void add() { // func to add row
			test obj;
			bool check = checkingForNo_Train();

			if (check && MessageBox::Show("this ' Number of Train ' already exist in data base", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::OK)
				textBox2->Text = "????????????";

			else if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "")
				MessageBox::Show("There should be no nulls !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			else {
				obj.dbSet("INSERT INTO test_train  VALUES('" + msclr::interop::marshal_as<std::string>(textBox1->Text) + "','" + msclr::interop::marshal_as<std::string>(textBox2->Text) + "','" + msclr::interop::marshal_as<std::string>(textBox3->Text) + "','" + msclr::interop::marshal_as<std::string>(textBox4->Text) + "','" + msclr::interop::marshal_as<std::string>(textBox5->Text) + "','" + msclr::interop::marshal_as<std::string>(textBox6->Text) + "','" + msclr::interop::marshal_as<std::string>(textBox7->Text) + "')");
				clear();
			}
		}


		void delet() { // func to delete row
			test obj = test();
			obj.dbSet("DELETE FROM `tsts`.`test_train` WHERE(`train_number` = '" + msclr::interop::marshal_as<std::string>(textBox2->Text) + "')");
		}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // X button
		this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // add button
		add();
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) // view rows button
	{

		// this working without DS

		/*try {
			test obj;
			ResultSet* result = obj.dbGet("select * from train");

			int counter = obj.countRowTable("select * from train");

			for (int i = 0; i < loopInVeiwData; i++)
				result->next();
			loopInVeiwData++;
			if (counter+1 == loopInVeiwData)
				loopInVeiwData = 1;

			textBox1->Text = msclr::interop::marshal_as<System::String^>(result->getString("train name").c_str());
			textBox2->Text = msclr::interop::marshal_as<System::String^>(result->getString(2).c_str());
			textBox3->Text = msclr::interop::marshal_as<System::String^>(result->getString(3).c_str());

			textBox4->Text = msclr::interop::marshal_as<System::String^>(result->getString(4).c_str());
			textBox5->Text = msclr::interop::marshal_as<System::String^>(result->getString(5).c_str());
			textBox6->Text = msclr::interop::marshal_as<System::String^>(result->getString(6).c_str());
			textBox7->Text = msclr::interop::marshal_as<System::String^>(result->getString(7).c_str());

		}
		catch (SQLException e)
		{
			MessageBox::Show(gcnew String(e.what()));

			system("pause");
			exit(1);
		}*/


		// end









		try {
			test obj;
			ResultSet* result = obj.dbGet("select * from test_train");

			vector<string> v1_Train_Name;
			vector<string> v2_Num_Train;
			vector<string> v3_Boarding_point;
			vector<string> v4_Destination_point;
			vector<string> v5_Num_Seats;
			vector<string> v6_ticket_price;
			vector<string> v7_Date_travel;
			while (result->next()) {
				v1_Train_Name.push_back(result->getString(1).c_str());
				v2_Num_Train.push_back(result->getString(2).c_str());
				v3_Boarding_point.push_back(result->getString(3).c_str());
				v4_Destination_point.push_back(result->getString(4).c_str());
				v5_Num_Seats.push_back(result->getString(5).c_str());
				v6_ticket_price.push_back(result->getString(6).c_str());
				v7_Date_travel.push_back(result->getString(7).c_str());
			}



			if (v2_Num_Train.size() <= loopInVeiwData)
				loopInVeiwData = 0;

			textBox1->Text = msclr::interop::marshal_as<System::String^>(v1_Train_Name.at(loopInVeiwData));
			textBox2->Text = msclr::interop::marshal_as<System::String^>(v2_Num_Train.at(loopInVeiwData));
			textBox3->Text = msclr::interop::marshal_as<System::String^>(v3_Boarding_point.at(loopInVeiwData));
			textBox4->Text = msclr::interop::marshal_as<System::String^>(v4_Destination_point.at(loopInVeiwData));
			textBox5->Text = msclr::interop::marshal_as<System::String^>(v5_Num_Seats.at(loopInVeiwData));
			textBox6->Text = msclr::interop::marshal_as<System::String^>(v6_ticket_price.at(loopInVeiwData));
			textBox7->Text = msclr::interop::marshal_as<System::String^>(v7_Date_travel.at(loopInVeiwData));

			last_train_viewed = msclr::interop::marshal_as<System::String^>(v2_Num_Train.at(loopInVeiwData));

			loopInVeiwData++;
		}
		catch (SQLException e)
		{
			MessageBox::Show(gcnew String(e.what()));
			system("pause");
			exit(1);

		}

		/*for (int i = 0; result->next(); i++)
			v.push_back(result);


		if (loopInVeiwData == v.size())
			loopInVeiwData = 0;
			*/



		textBox2->Enabled =false;

	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { // this button makes text boxs empty
		clear();
		textBox2->Enabled = true;
	}


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { // delete button
		delet();
		clear();

	}


	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { // update button

		if (checkingForNo_Train() == 1) {
			if (last_train_viewed == textBox2->Text) {
				if (MessageBox::Show("Are You sure to Update the data of train's number is ( " + textBox2->Text + " )", "warning", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK) {
					delet();
					add();
				}
			}
			else
				MessageBox::Show("sorry , You can't Update data of this train .");
			clear();
		}
		else {
			MessageBox::Show("This train with number ( " + textBox2->Text + " ) isn't exist.", "Error", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
			textBox2->Text = "Plz , Enter correct number of train .";
		}


		/*
		test obj;
		obj.dbSet("UPDATE test_train SET train_name = \"" + msclr::interop::marshal_as<std::string>(textBox1->Text) + "\" , train_number = \"" + msclr::interop::marshal_as<std::string>(textBox2->Text) + "\" , boarding_point = \"" + msclr::interop::marshal_as<std::string>(textBox3->Text) + "\" , destination_point = \"" + msclr::interop::marshal_as<std::string>(textBox4->Text) + "\" , no_seats = \"" + msclr::interop::marshal_as<std::string>(textBox5->Text) + "\", ticket_price  =  \"" + msclr::interop::marshal_as<std::string>(textBox6->Text) + "\", DataOfTravel  =  \"" + msclr::interop::marshal_as<std::string>(textBox7->Text) + "\" WHERE train_number = \"" + msclr::interop::marshal_as<std::string>(textBox2->Text)+"\" )"  );
		clear();
		*/





		/*bool check1 = false;
	 bool check2 = checkingForNo_Train();
		if (textBox2->Text == khaild)
		check1 = true;

		 if (check1 || check2)  {

			 MessageBox::Show("you want to change no.train from " + khaild + " to " + textBox2->Text + " that this operation  must not make .");

		 }
		 else {
			 delet();
			 add();
			 //, "warning", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK
		 */
	}
	private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ folderPath = Application::StartupPath;
		folderPath += "\\images\\";
		String^ fileName = "add.png";
		pictureBox1->Image = Image::FromFile(folderPath + fileName);
		fileName = "clear.png";
		pictureBox4->Image = Image::FromFile(folderPath + fileName);
		fileName = "delete.png";
		pictureBox5->Image = Image::FromFile(folderPath + fileName);
		fileName = "trainIcon.png";
		pictureBox2->Image = Image::FromFile(folderPath + fileName);
		fileName = "Update.png";
		pictureBox3->Image = Image::FromFile(folderPath + fileName);
		this->ActiveControl = textBox1;
		
	}

};
}
