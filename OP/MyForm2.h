#pragma once
#include"passeneger.h"
#include"test.h"
#include<string>
#include <ctime>
#include"admin.h"
using namespace std;
static passeneger p;
static admin A = admin();
static string id_Us;
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
		MyForm2(string id_user)
		{
			id_Us = id_user;
			InitializeComponent();
			loadCities();
			p.loadTicket();
			A.loadTrains();
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
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::IndianRed;
			this->button1->Location = System::Drawing::Point(329, 421);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 66);
			this->button1->TabIndex = 0;
			this->button1->Text = L"update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(232, 155);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(341, 41);
			this->textBox1->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(232, 353);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(341, 41);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(419, 32);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(333, 41);
			this->textBox5->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(108, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(253, 36);
			this->label1->TabIndex = 6;
			this->label1->Text = L"search by ticket id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(323, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 36);
			this->label2->TabIndex = 7;
			this->label2->Text = L"your data";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 36);
			this->label3->TabIndex = 8;
			this->label3->Text = L"name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(-1, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(215, 36);
			this->label4->TabIndex = 9;
			this->label4->Text = L" boarding point";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(-1, 297);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(234, 36);
			this->label5->TabIndex = 10;
			this->label5->Text = L"destination point";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(-1, 356);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(189, 36);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Date of travel";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DodgerBlue;
			this->button2->Location = System::Drawing::Point(166, 422);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 65);
			this->button2->TabIndex = 12;
			this->button2->Text = L"view";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(485, 422);
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
			this->button4->Location = System::Drawing::Point(1159, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 47);
			this->button4->TabIndex = 14;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::MediumTurquoise;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(800, 424);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 64);
			this->button5->TabIndex = 15;
			this->button5->Text = L"ViewTrain";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 36;
			this->listBox1->Location = System::Drawing::Point(679, 147);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(544, 148);
			this->listBox1->TabIndex = 16;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::listBox1_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(232, 220);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(341, 44);
			this->comboBox1->TabIndex = 17;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(232, 289);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(341, 44);
			this->comboBox2->TabIndex = 18;
			// 
			// MyForm2
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::IndianRed;
			this->ClientSize = System::Drawing::Size(1224, 515);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button5);
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
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->Text = L"update";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 int bookedTrain=-1;
		void loadCities() {
			test t;
			ResultSet* result = t.dbGet("select * from egypt");
			while (result->next()) {
				string s = result->getString(1).c_str();
				comboBox1->Items->Add(msclr::interop::marshal_as<System::String^>(s));
				comboBox2->Items->Add(msclr::interop::marshal_as<System::String^>(s));
			}
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int count = p.tickets.size();
		int counter = 0;
		for (int i = 0; i < p.tickets.size(); i++)
		{
			if (p.tickets[i].id != msclr::interop::marshal_as<std::string>(textBox5->Text))

			{
				counter++;
			}

			else if (p.tickets[i].id == msclr::interop::marshal_as<std::string>(textBox5->Text) && p.tickets[i].id_user == id_Us)
			{
				vector <ticket> t = p.displayTicket();
				textBox1->Text = msclr::interop::marshal_as<System::String^>(t[i].passeneger_name);
				comboBox1->Text = msclr::interop::marshal_as<System::String^>(t[i].boarding_point);
				comboBox2->Text = msclr::interop::marshal_as<System::String^>(t[i].destination_point);
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
			comboBox1->Text = "";
			comboBox2->Text = "";
			textBox4->Clear();
			return;

		}
		else if (textBox1->Text == "" || comboBox1->Text == "" || comboBox2->Text == "" || textBox4->Text == "")
		{
			MessageBox::Show("please fill in all data fields");
			return;
		}
		else if ((listBox1->Text) == "" || msclr::interop::marshal_as<std::string>(listBox1->Text) == "no trains available") {
			MessageBox::Show("please select train first");
			return;
		}
		else if ((A.adminTrains[bookedTrain].no_people >= A.adminTrains[bookedTrain].no_seats)) {
			MessageBox::Show("the train is full");
			return;
		}
		int check = -1;
		for (int i = 0; i < p.tickets.size(); i++) {
			if (p.tickets[i].id == msclr::interop::marshal_as<std::string>(textBox5->Text)) {
				check = i;
				break;
			}
		}
		if (check != -1 ) {
			for (int i = 0; i < A.adminTrains.size(); i++) {
				if (A.adminTrains[i].train_number == p.tickets[check].number_of_train) {
					A.adminTrains[i].no_people--;
					break;
				}
			}
			p.updateTicket(msclr::interop::marshal_as<std::string>(textBox1->Text), msclr::interop::marshal_as<std::string>(comboBox1->Text), msclr::interop::marshal_as<std::string>(comboBox2->Text), msclr::interop::marshal_as<std::string>(textBox4->Text), A.adminTrains[bookedTrain].train_number, msclr::interop::marshal_as<std::string>(textBox5->Text), id_Us);
			A.adminTrains[bookedTrain].no_people++;
			MessageBox::Show("updated successfully");
		}else {
			MessageBox::Show("this name is not exist in data base .");
		}
	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	int count = p.tickets.size();
	int counter = 0;
	for (int i = 0; i < p.tickets.size(); i++)
	{
		if (p.tickets[i].passeneger_name == msclr::interop::marshal_as<std::string>(textBox1->Text)&& p.tickets[i].id_user== id_Us )
		{
			MessageBox::Show("data already exists");
			return;
		}
	}
	if (msclr::interop::marshal_as<std::string>(listBox1->Text) == "" || msclr::interop::marshal_as<std::string>(listBox1->Text) == "no trains available") {
		MessageBox::Show("please select train first");
		return;
	}
	else
	{
		if ((A.adminTrains[bookedTrain].no_people >= A.adminTrains[bookedTrain].no_seats)) {
			MessageBox::Show("the train is full");
			return;
		}
		
		else
		{
			int	ids = p.tickets.size() + 1;
			p.addTicket(msclr::interop::marshal_as<std::string>(textBox1->Text), msclr::interop::marshal_as<std::string>(comboBox1->Text), msclr::interop::marshal_as<std::string>(comboBox2->Text), msclr::interop::marshal_as<std::string>(textBox4->Text), A.adminTrains[bookedTrain].train_number, to_string(ids) , id_Us);
			MessageBox::Show("you booked train " + msclr::interop::marshal_as<System::String^>(A.adminTrains[bookedTrain].train_number) + " your tikcet id is:  " + ids + "  have a nice trip");
			A.adminTrains[bookedTrain].no_people++;
			listBox1->Items->Clear();
		}
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	p.deletDB();
	p.storeTicket();
	p.delvector();
	A.deletDB();
	A.insertDB();
	A.delvector();
	this->Close();
	
	
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
		   string month;
		   month.push_back(date[5]);
		   month.push_back(date[6]);
		   int M = stoi(month);
		   string day;
		   day.push_back(date[8]);
		   day.push_back(date[9]);
		   int D = stoi(day);
		   if ((1900 + local_time->tm_year < Y)) 
		   {
			   return true;
			   
		   }
		   else if ((1900 + local_time->tm_year > Y)) 
		   {
			   
				   MessageBox::Show("year");
				   return false;
			  
		   }
		   else 
		   {
			   if ((1 + local_time->tm_mon < M))
			   {

				   return true;



			   }
			   else if ((1 + local_time->tm_mon > M)) {
				   MessageBox::Show("month");
				   return false;
			   }
			   else
			   {
				   if (local_time->tm_mday < D)
					   return true;
				   else if (local_time->tm_mday > D)
				   {
					   MessageBox::Show("day");
					   return false;
				   }
				   else if(timing != "notime") {
					   return checkTimeWithlocalTime(timing);
				   }
				   else {
					   return 1;
				   }

			   }
		   }
	   
				  

			 
			

			  
	   }

	   bool checkTimeWithlocalTime(string timeing) {

		   time_t ttime = time(0);
		   tm* local_time = localtime(&ttime);

			   string Hour;
			   Hour.push_back(timeing[0]);
			   Hour.push_back(timeing[1]);
			   int H = stoi(Hour);

			   if (local_time->tm_hour > H)
			   {
				  // MessageBox::Show("hour");
				   return false;
			   }
			   else if (local_time->tm_hour < H)
				   return true;

			   string minute;
			   minute.push_back(timeing[3]);
			   minute.push_back(timeing[4]);
			   int M = stoi(minute);
			   if (!(local_time->tm_min <= M)) 
			   {
				  // MessageBox::Show("min");
					   return false;


			   }

			   return true;
		  
	   }

	   bool checkDate() {
		   string date = msclr::interop::marshal_as<std::string>(textBox4->Text);
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

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	int check = 0;
	if (comboBox1->Text == "" || comboBox2->Text == "" || textBox4->Text == "") 
	{
		MessageBox::Show("Enter the boarding point,destination point and Date ");

	}
	else if (checkDate() == 0 || checkDateWithlocalDate(msclr::interop::marshal_as<std::string>(textBox4->Text), "notime") == false  ){
		MessageBox::Show("Enter the Date correctly ");
	}
	else 
	{
		for (int i = 0; i < A.adminTrains.size(); i++)
		{
			if ((comboBox1->Text == msclr::interop::marshal_as<System::String^>(A.adminTrains[i].boarding_point)) && (comboBox2->Text == msclr::interop::marshal_as<System::String^>(A.adminTrains[i].destination_point)) && (textBox4->Text == msclr::interop::marshal_as<System::String^>(A.adminTrains[i].DateOfTravel)) )
			{
				
				if (checkDateWithlocalDate(A.adminTrains[i].DateOfTravel , A.adminTrains[i].TimeOfTravel) ==true) {
					string s = A.adminTrains[i].train_name + "  " + A.adminTrains[i].train_number + "  " + A.adminTrains[i].boarding_point + "  " + A.adminTrains[i].destination_point + "  " + to_string(A.adminTrains[i].ticket_price) + "  " + A.adminTrains[i].DateOfTravel + "  " + A.adminTrains[i].TimeOfTravel;
					listBox1->Items->Add(msclr::interop::marshal_as<System::String^>(s));
					check = 1;
					comboBox1->Text = "";
					comboBox2->Text = "";
					textBox4->Text = "";
				}
			}
		}
	}
	if (check == 0)
		listBox1->Items->Add("no trains available");
}

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	string s = msclr::interop::marshal_as<std::string>(listBox1->Text);
	
	for (int i = 0; i < A.adminTrains.size(); i++) 
	{
		string index = A.adminTrains[i].train_name + "  " + A.adminTrains[i].train_number + "  " + A.adminTrains[i].boarding_point + "  " + A.adminTrains[i].destination_point + "  " + to_string(A.adminTrains[i].ticket_price) + "  " + A.adminTrains[i].DateOfTravel + "  " + A.adminTrains[i].TimeOfTravel;

		if (index == s) {
			comboBox1->Text = msclr::interop::marshal_as<System::String^>(A.adminTrains[i].boarding_point);
			comboBox2->Text= msclr::interop::marshal_as<System::String^>(A.adminTrains[i].destination_point);
			textBox4->Text = msclr::interop::marshal_as<System::String^>(A.adminTrains[i].DateOfTravel);
			bookedTrain = i;
		}

	}
}

private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
