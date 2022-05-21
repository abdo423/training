#pragma once

namespace OP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(243, 99);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(207, 24);
			this->comboBox1->TabIndex = 0;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(243, 196);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(207, 24);
			this->comboBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Desktop;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.8F));
			this->label1->Location = System::Drawing::Point(130, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"From";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Desktop;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.8F));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(130, 183);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 37);
			this->label2->TabIndex = 3;
			this->label2->Text = L"To";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(697, 32);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Enter the boarding and destination point and the Date.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Desktop;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.8F));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(130, 283);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 37);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Date";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(243, 296);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(218, 22);
			this->textBox1->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(278, 361);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 40);
			this->button1->TabIndex = 8;
			this->button1->Text = L"viewTrain";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(761, 434);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	



};
}
