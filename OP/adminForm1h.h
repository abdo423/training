#pragma once
#include "trains.h"
#include <msclr/marshal_cppstd.h>
#include<vector>
#include"admin.h"
#include"test.h"
static admin obj = admin();

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
	public ref class adminForm1h : public System::Windows::Forms::Form
	{
		
	public:
		
		adminForm1h(void)
		{
			
			InitializeComponent();
			loadCities();
			obj.loadTrains();
			fillCombo();
			
			textBox7->Text = "2022-01-01";
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
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;














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
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
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
			this->panel3->BackColor = System::Drawing::Color::Transparent;
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
			this->panel4->BackColor = System::Drawing::Color::Transparent;
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
			this->panel2->BackColor = System::Drawing::Color::Transparent;
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
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(68, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 35);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Train Name : ";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(59, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 35);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Number of Train: ";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(68, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(227, 35);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Boarding point : ";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(68, 263);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(227, 35);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Destination point : ";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(68, 338);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(227, 35);
			this->label5->TabIndex = 15;
			this->label5->Text = L"No.Seats : ";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(68, 400);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(227, 35);
			this->label6->TabIndex = 16;
			this->label6->Text = L"ticket price : ";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Transparent;
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
			this->panel1->BackColor = System::Drawing::Color::Transparent;
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
			this->panel5->BackColor = System::Drawing::Color::Transparent;
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
			this->label9->BackColor = System::Drawing::Color::Transparent;
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
			this->button2->Location = System::Drawing::Point(1172, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 47);
			this->button2->TabIndex = 12;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &adminForm1h::button2_Click);
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
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(68, 550);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(227, 35);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Time of travel : ";
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(291, 188);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(425, 37);
			this->comboBox3->TabIndex = 32;
			this->comboBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &adminForm1h::comboBox3_KeyDown_1);
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(291, 263);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(425, 37);
			this->comboBox4->TabIndex = 33;
			this->comboBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &adminForm1h::comboBox4_KeyDown_1);
			// 
			// adminForm1h
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1235, 733);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
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
			this->Text = L"trains";
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
		int last_train_viewed = 0;
		int no_people = 0;

		void loadCities() {
			test t;
			ResultSet* result = t.dbGet("select * from egypt");
			while (result->next()) {
				string s = result->getString(1).c_str();
				comboBox3->Items->Add(msclr::interop::marshal_as<System::String^>(s));
				comboBox4->Items->Add(msclr::interop::marshal_as<System::String^>(s));
			}
		}

		void clear() { // func to make text boxs empty
			textBox1->Clear();
			textBox2->Text = "";
			comboBox3->Text = "";
			comboBox4->Text = "";
			textBox5->Text = "";
			textBox6->Text = "";
			textBox7->Text = "2022-01-01";
			textBox8->Text = "00:00";
			last_train_viewed = 0;
			comboBox1->Text = "";
			no_people = 0;
			textBox2->Enabled = true;
			fillCombo();
		}


		bool checkDateWithlocalDate(string date, string timing) {
			//string date = msclr::interop::marshal_as<std::string>(textBox4->Text);
		   //0123-56-89
			time_t ttime = time(0);
			tm* local_time = localtime(&ttime);

			string Year;
			Year.push_back(date[0]);
			Year.push_back(date[1]);
			Year.push_back(date[2]);
			Year.push_back(date[3]);
			int Y = stoi(Year);

			if (!(1900 + local_time->tm_year <= Y))
				return 0;
			string month;
			month.push_back(date[5]);
			month.push_back(date[6]);
			int M = stoi(month);
			if (!( 1+local_time->tm_mon <= M))
				return 0;

			string day;
			day.push_back(date[8]);
			day.push_back(date[9]);
			int D = stoi(day);
			if (!(local_time->tm_mday <= D))
				return 0;

			if (  local_time->tm_mday == D && 1 + local_time->tm_mon == M && 1900 + local_time->tm_year == Y)
				return checkTimeWithlocalTime(timing);

			return 1;
		}

		bool checkTimeWithlocalTime(string timeing) {

			time_t ttime = time(0);
			tm* local_time = localtime(&ttime);

			string Hour;
			Hour.push_back(timeing[0]);
			Hour.push_back(timeing[1]);
			int H = stoi(Hour);

			if (local_time->tm_hour > H)
				return 0;
			else if (local_time->tm_hour < H)
				return 1;

			string minute;
			minute.push_back(timeing[3]);
			minute.push_back(timeing[4]);
			int M = stoi(minute);
			if (!(local_time->tm_min <= M))
				return 0;

			return 1;

		}


		bool checkDate() {
			string date = msclr::interop::marshal_as<std::string>(textBox7->Text);
			//0123-56-89
			if (date.size() == 10 && date[4] == '-' && date[7] == '-')
			{
				string month;
				month.push_back(date[5]);
				month.push_back(date[6]);
				int M = stoi(month);
				string day;
				day.push_back(date[8]);
				day.push_back(date[9]);
				int D = stoi(day);
				//1 3 5 7 8 10 12 ,31
				if (M >= 1 && M <= 12 && D >= 1) {
					if ((M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12) && D <= 31)
						return 1;
					else if ((M == 4 || M == 6 || M == 9 || M == 11) && D <= 30)
						return 1;
					else if ((M == 2) && D <= 29)
						return 1;
					else
						return 0;
				}
				else
					return 0;
			}
			else
				return 0;
		}



		bool checkTime() {
			string time = msclr::interop::marshal_as<std::string>(textBox8->Text);

			if (time.size() == 5 && time[2] == ':')
			{

				string Hour;
				Hour.push_back(time[0]);
				Hour.push_back(time[1]);
				int H = stoi(Hour);
				string minute;
				minute.push_back(time[3]);
				minute.push_back(time[4]);
				int M = stoi(minute);
				if (H >= 0 && H < 24 && M >= 0 && M < 60)
					return 1;
				else
					return 0;
			}
			else
				return 0;
		}



		void delet() { // func to delete row
			
				if (msclr::interop::marshal_as<System::String^>(obj.adminTrains[last_train_viewed].train_number) == textBox2->Text)
					if (textBox1->Text == "" || textBox2->Text == "" || comboBox3->Text == "" || comboBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "") {
						MessageBox::Show("There should be no nulls !");
						return;
					}
					else if (comboBox3->Text == comboBox4->Text)
					{
						MessageBox::Show("bording point and destination point is the same");
						comboBox4->Text = "";
						return;
					}
					else if (checkDate() == 0) {
						MessageBox::Show("Please , Enter  Date of travel correctly .", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						textBox7->Text = "****-**-**";
					}
					else if (checkTime() == 0) {
						MessageBox::Show("Please , Enter  Time of travel correctly .", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						textBox8->Text = "..:..";
					}
				else {
					string del = msclr::interop::marshal_as<std::string>(textBox2->Text);
					no_people = obj.deletRow(del);
					
				}
		}

		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { // delete button
			delet();
			clear();

		}

		void add() { // func to add row
			
			
			string s = msclr::interop::marshal_as<std::string>(textBox2->Text);
			bool check = obj.checkingForNo_Train(s);

			if (check && MessageBox::Show("this ' Number of Train ' already exist in data base", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::OK)
				textBox2->Text = "????????????";
			
			else if (textBox1->Text == "" || textBox2->Text == "" || comboBox3->Text == "" || comboBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "")
				MessageBox::Show("There should be no nulls !", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else if (checkDate() == 0) {
				MessageBox::Show("Please , Enter  Date of travel correctly .", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox7->Text = "****-**-**";
			}
			else if (checkTime() == 0) {
				MessageBox::Show("Please , Enter  Time of travel correctly .", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox8->Text = "..:..";
			}
			else if (comboBox3->Text == comboBox4->Text)
			{
				MessageBox::Show("bording point and destination point is the same");
				comboBox4->Text = "";

			}
			else if (checkDateWithlocalDate(msclr::interop::marshal_as<std::string>(textBox7->Text), msclr::interop::marshal_as<std::string>(textBox8->Text)) == 0) {
				MessageBox::Show("this Data or time is old !! ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox7->Text = "****-**-**"; 
				textBox8->Text = "..:..";
			}
			else {
				obj.AddRow(msclr::interop::marshal_as<std::string>(textBox1->Text), msclr::interop::marshal_as<std::string>(textBox2->Text), msclr::interop::marshal_as<std::string>(comboBox3->Text), msclr::interop::marshal_as<std::string>(comboBox4->Text), msclr::interop::marshal_as<std::string>(textBox5->Text), msclr::interop::marshal_as<std::string>(textBox6->Text), msclr::interop::marshal_as<std::string>(textBox7->Text), msclr::interop::marshal_as<std::string>(textBox8->Text) , no_people);
				clear();
			}
			
		}




	

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // add button
		comboBox1->Items->Add(textBox2->Text + " , "+ textBox1->Text);
		add();
	}


		   void view(int i) {
			  
				   textBox1->Text = msclr::interop::marshal_as<System::String^>(obj.adminTrains[i].train_name);
				   textBox2->Text = msclr::interop::marshal_as<System::String^>(obj.adminTrains[i].train_number);
				   comboBox3->Text = msclr::interop::marshal_as<System::String^>(obj.adminTrains[i].boarding_point);
				   comboBox4->Text = msclr::interop::marshal_as<System::String^>(obj.adminTrains[i].destination_point);
				   textBox5->Text = msclr::interop::marshal_as<System::String^>(to_string(obj.adminTrains[i].no_seats));
				   textBox6->Text = msclr::interop::marshal_as<System::String^>(to_string(obj.adminTrains[i].ticket_price));
				   textBox7->Text = msclr::interop::marshal_as<System::String^>(obj.adminTrains[i].DateOfTravel);
				   textBox8->Text = msclr::interop::marshal_as<System::String^>(obj.adminTrains[i].TimeOfTravel);
				   last_train_viewed = i;
			
		   }


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) // view rows button
	{

		try {
			
			if (obj.adminTrains.size() == 0) {
				MessageBox::Show("DataBase is Empty !!!!");
				return;
			}
			
			if (obj.adminTrains.size() <= loopInVeiwData)
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
		if (obj.checkingForNo_Train(s) == 1) {

			if (msclr::interop::marshal_as<System::String^>(obj.adminTrains[last_train_viewed].train_number) == textBox2->Text) {
				if (textBox1->Text == "" || textBox2->Text == "" || comboBox3->Text == "" || comboBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "") {
					MessageBox::Show("There should be no nulls !");
					return;
				}
				else if (comboBox3->Text == comboBox4->Text)
				{
					MessageBox::Show("bording point and destination point is the same");
					comboBox4->Text = "";
					return;
				}
				else if (checkDate() == 0) {
					MessageBox::Show("Please , Enter  Date of travel correctly .", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					textBox7->Text = "****-**-**";
				}
				else if (checkTime() == 0) {
					MessageBox::Show("Please , Enter  Time of travel correctly .", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					textBox8->Text = "..:..";
				}
				else if (checkDateWithlocalDate(msclr::interop::marshal_as<std::string>(textBox7->Text), msclr::interop::marshal_as<std::string>(textBox8->Text)) == 0) {
					MessageBox::Show("this Data or time is old !! ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					textBox7->Text = "****-**-**";
					textBox8->Text = "..:..";
				}
				else if (obj.adminTrains[last_train_viewed].no_people > stoi(msclr::interop::marshal_as<std::string>(textBox5->Text))) {
					MessageBox::Show("The number of reservations is greater than the new No.Seat", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					textBox5->Text = "!!!!!";
				}else if(MessageBox::Show("Are You sure to Update the data of admin's number is ( " + textBox2->Text + " )", "warning", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK) {
					delet();
					add();
				}
			}else
				MessageBox::Show("sorry , You can't Update data of this admin .");
			clear();
		}
		else {
			MessageBox::Show("This admin with number ( " + textBox2->Text + " ) isn't exist.", "Error", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
			textBox2->Text = "Plz , Enter correct number of admin .";
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
		fileName = "adminForm3.jpg";
		BackgroundImage = Image::FromFile(folderPath + fileName);
		
		
		this->ActiveControl = textBox1;
	}


	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if(e->KeyCode == Keys::Enter)
			textBox2->Select();
	}


	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
			comboBox3->Select();
	}


	
	private: System::Void comboBox3_KeyDown_1(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
			comboBox4->Select();
	}

	

	private: System::Void comboBox4_KeyDown_1(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
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
	
		for (int i = 0; i < obj.adminTrains.size();i++) {
			s = obj.adminTrains[i].train_number + " , " + obj.adminTrains[i].train_name;

			if (comboBox1->Text == msclr::interop::marshal_as<System::String^>(s)) 
				view(i);

		}
		textBox2->Enabled = false;
	}



	void fillCombo (void) {
		comboBox1->Items->Clear();
	
		for (int i = 0; i < obj.adminTrains.size(); i++)
			comboBox1->Items->Add(msclr::interop::marshal_as<System::String^>(obj.adminTrains[i].train_number) + " , " + msclr::interop::marshal_as<System::String^>(obj.adminTrains[i].train_name));
	   
	}



private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	obj.deletDB();  //deleting old rows in data base

	obj.insertDB();  //adding new rows in data base
	obj.delvector();
	this->Close();
}


};
}
