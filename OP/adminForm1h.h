#pragma once
#include "admin.h"
#include <msclr/marshal_cppstd.h>
using namespace std;

   static admin obj;

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
	public ref class adminForm1h : public System::Windows::Forms::Form
	{
		
	public:
		
		adminForm1h(void)
		{
			
			InitializeComponent();
			fillCombo();
			textBox7->Text = "2000-00-00";
			textBox8->Text = "00:00";
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~adminForm1h()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Button^ button6;

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

	private: System::Windows::Forms::Panel^ panel5;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;













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
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
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
			this->button1->Click += gcnew System::EventHandler(this, &adminForm1h::button1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Location = System::Drawing::Point(955, 641);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(271, 76);
			this->panel3->TabIndex = 12;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(5, 4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(81, 69);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightGray;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(92, 1);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(159, 72);
			this->button5->TabIndex = 6;
			this->button5->Text = L"View Trains";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &adminForm1h::button5_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Controls->Add(this->button6);
			this->panel4->Location = System::Drawing::Point(485, 641);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(215, 76);
			this->panel4->TabIndex = 12;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(5, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(81, 69);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
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
			this->button6->Click += gcnew System::EventHandler(this, &adminForm1h::button6_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(5, 641);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(199, 76);
			this->panel2->TabIndex = 11;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(5, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(81, 69);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(68, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 35);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Train Name : ";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(59, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 35);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Number of Train: ";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(68, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(227, 35);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Boarding point : ";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(68, 263);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(227, 35);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Destination point : ";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(68, 338);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(227, 35);
			this->label5->TabIndex = 15;
			this->label5->Text = L"No.Seats : ";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(68, 400);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(227, 35);
			this->label6->TabIndex = 16;
			this->label6->Text = L"ticket price : ";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(68, 481);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(227, 35);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Date of travel : ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(291, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(425, 34);
			this->textBox1->TabIndex = 18;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &adminForm1h::textBox1_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(291, 106);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(425, 34);
			this->textBox2->TabIndex = 19;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &adminForm1h::textBox2_KeyDown);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(291, 188);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(425, 34);
			this->textBox3->TabIndex = 20;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &adminForm1h::textBox3_KeyDown);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(291, 260);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(425, 34);
			this->textBox4->TabIndex = 21;
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &adminForm1h::textBox4_KeyDown);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(291, 335);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(425, 34);
			this->textBox5->TabIndex = 22;
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &adminForm1h::textBox5_KeyDown);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(291, 397);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(425, 34);
			this->textBox6->TabIndex = 23;
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &adminForm1h::textBox6_KeyDown);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(291, 478);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(425, 34);
			this->textBox7->TabIndex = 24;
			this->textBox7->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &adminForm1h::textBox7_KeyDown);
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
			this->button3->Click += gcnew System::EventHandler(this, &adminForm1h::button3_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Location = System::Drawing::Point(741, 648);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(199, 76);
			this->panel1->TabIndex = 12;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(81, 69);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->pictureBox3);
			this->panel5->Controls->Add(this->button4);
			this->panel5->Location = System::Drawing::Point(240, 648);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(199, 76);
			this->panel5->TabIndex = 25;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(3, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(81, 69);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightGray;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(90, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(106, 69);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &adminForm1h::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(848, 128);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(287, 37);
			this->comboBox1->TabIndex = 26;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &adminForm1h::comboBox1_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(848, 80);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(287, 35);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Choose Train To View ";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1159, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 47);
			this->button2->TabIndex = 12;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &adminForm1h::button2_Click_1);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(291, 547);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(425, 34);
			this->textBox8->TabIndex = 30;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &adminForm1h::textBox8_TextChanged);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(68, 550);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(227, 35);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Time of travel : ";
			// 
			// adminForm1h
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::Wheat;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1235, 808);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->textBox7);
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
			this->Name = L"adminForm1h";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &adminForm1h::adminForm1h_Load);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
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
			textBox7->Text = "2000-00-00";
			textBox8->Text = "00:00";
			last_train_viewed = "";
			comboBox1->Text = "";
			textBox2->Enabled = true;
			fillCombo();
		}


		bool checkingForNo_Train(string s) {
			bool check = false;

			for (int i = 0; i < obj.v2_Num_Train.size(); i++)
			{
				if (obj.v2_Num_Train.at(i) == s)
				{
					check = true;
					break;
				}
			}
			return check;
		}



		void delet() { // func to delete row
			if (last_train_viewed == textBox2->Text) 
				if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "") {
					MessageBox::Show("There should be no nulls !");
					return;
				}
				else if (textBox3->Text == textBox4->Text)
				{
					MessageBox::Show("bording point and destination point is the same");
					textBox4->Text = "";
					return;
				}
				else {
					string del = msclr::interop::marshal_as<std::string>(textBox2->Text);
					obj.deletRow(del);
				}
		}

		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { // delete button
			delet();
			clear();

		}

		void add() { // func to add row
			
			
			string s = msclr::interop::marshal_as<std::string>(textBox2->Text);
			bool check = checkingForNo_Train(s);

			if (check && MessageBox::Show("this ' Number of Train ' already exist in data base", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::OK)
				textBox2->Text = "????????????";

			else if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "")
				MessageBox::Show("There should be no nulls !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			else if (textBox3->Text == textBox4->Text)
			{
				MessageBox::Show("bording point and destination point is the same");
				textBox4->Text = "";

			}
			else {
				obj.AddRow(msclr::interop::marshal_as<std::string>(textBox1->Text), msclr::interop::marshal_as<std::string>(textBox2->Text), msclr::interop::marshal_as<std::string>(textBox3->Text), msclr::interop::marshal_as<std::string>(textBox4->Text), msclr::interop::marshal_as<std::string>(textBox5->Text), msclr::interop::marshal_as<std::string>(textBox6->Text), msclr::interop::marshal_as<std::string>(textBox7->Text), msclr::interop::marshal_as<std::string>(textBox8->Text));
				clear();
			}
			
		}




	

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // add button
		comboBox1->Items->Add(textBox2->Text + " , "+ textBox1->Text);
		add();
	}


	void view(int i) {
		textBox1->Text = msclr::interop::marshal_as<System::String^>(obj.v1_Train_Name.at(i));
		textBox2->Text = msclr::interop::marshal_as<System::String^>(obj.v2_Num_Train.at(i));
		textBox3->Text = msclr::interop::marshal_as<System::String^>(obj.v3_Boarding_point.at(i));
		textBox4->Text = msclr::interop::marshal_as<System::String^>(obj.v4_Destination_point.at(i));
		textBox5->Text = msclr::interop::marshal_as<System::String^>(obj.v5_Num_Seats.at(i));
		textBox6->Text = msclr::interop::marshal_as<System::String^>(obj.v6_ticket_price.at(i));
		textBox7->Text = msclr::interop::marshal_as<System::String^>(obj.v7_Date_travel.at(i));
		textBox8->Text = msclr::interop::marshal_as<System::String^>(obj.v8_Time_travel.at(i));
		last_train_viewed = msclr::interop::marshal_as<System::String^>(obj.v2_Num_Train.at(i));
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) // view rows button
	{

		try {
			
			if (obj.v2_Num_Train.size() == 0) {
				MessageBox::Show("DataBase is Empty !!!!");
				return;
			}
			
			if (obj.v2_Num_Train.size() <= loopInVeiwData)
				loopInVeiwData = 0;

			view(loopInVeiwData);
			

			loopInVeiwData++;
		}
		catch (SQLException e)
		{
			MessageBox::Show(gcnew String(e.what()));
			system("pause");
			exit(1);

		}

		textBox2->Enabled = false;  // to make it cant be changed

	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { // this button makes text boxs empty
		clear();	
	}


	


	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { // update button
		
		string s = msclr::interop::marshal_as<std::string>(textBox2->Text);
		if (checkingForNo_Train(s) == 1) {

			if (last_train_viewed == textBox2->Text) {
				if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "") {
					MessageBox::Show("There should be no nulls !");
					return;
				}
				else if (textBox3->Text == textBox4->Text)
				{
					MessageBox::Show("bording point and destination point is the same");
					textBox4->Text = "";
					return;
				}
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
	}


	private: System::Void adminForm1h_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ folderPath = Application::StartupPath;
		folderPath += "\\images\\";
		String^ fileName = "add.png";
		pictureBox5->Image = Image::FromFile(folderPath + fileName);
		fileName = "clear.png";
		pictureBox1->Image = Image::FromFile(folderPath + fileName);
		fileName = "delete.png";
		pictureBox3->Image = Image::FromFile(folderPath + fileName);
		fileName = "trainIcon.png";
		pictureBox4->Image = Image::FromFile(folderPath + fileName);
		fileName = "Update.png";
		pictureBox2->Image = Image::FromFile(folderPath + fileName);
		this->ActiveControl = textBox1;
	}


	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if(e->KeyCode == Keys::Enter)
			textBox2->Select();
	}


	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
			textBox3->Select();
	}


	private: System::Void textBox3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
			textBox4->Select();
	}


	private: System::Void textBox4_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
			textBox5->Select();
	}


	private: System::Void textBox5_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
			textBox6->Select();
	}


	private: System::Void textBox6_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
			textBox7->Select();
	}


	private: System::Void textBox7_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
			textBox1->Select();
	}


	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		string s;
	
		for (int i = 0; i < obj.v2_Num_Train.size(); i++) {
			s = obj.v2_Num_Train.at(i) + " , " + obj.v1_Train_Name.at(i);

			if (comboBox1->Text == msclr::interop::marshal_as<System::String^>(s)) 
				view(i);

		}
		textBox2->Enabled = false;
	}



	void fillCombo (void) {
		comboBox1->Items->Clear();
	
		for (int i = 0; i < obj.v2_Num_Train.size(); i++)
			comboBox1->Items->Add(msclr::interop::marshal_as<System::String^>(obj.v2_Num_Train.at(i)) + " , " + msclr::interop::marshal_as<System::String^>(obj.v1_Train_Name.at(i)));
	   
	}


	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

		obj.deletDB();  //deleting old rows in data base
		
		obj.insertDB();  //adding new rows in data base

		this->Close();
	}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
