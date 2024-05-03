#pragma once
#include <msclr/marshal_cppstd.h>
#include "User.h"

namespace Authentication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Dashboard(User user)
		{
			InitializeComponent();

			// Display the user's information
			textBox1->Text = msclr::interop::marshal_as<System::String^>(user.ism);
			textBox2->Text = msclr::interop::marshal_as<System::String^>(user.familiya);
			textBox3->Text = user.yosh.ToString();
			textBox4->Text = msclr::interop::marshal_as<System::String^>(user.joylashuv);
			textBox5->Text = msclr::interop::marshal_as<System::String^>(user.id);
		}

	protected:
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->Location = System::Drawing::Point(112, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ismi : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->Location = System::Drawing::Point(112, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Familiyasi :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label3->Location = System::Drawing::Point(112, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Yoshi : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label4->Location = System::Drawing::Point(112, 258);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 28);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Turar joyi :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label5->Location = System::Drawing::Point(112, 326);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 28);
			this->label5->TabIndex = 4;
			this->label5->Text = L"ID : ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->textBox1->Location = System::Drawing::Point(394, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 35);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->textBox2->Location = System::Drawing::Point(394, 136);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 35);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->textBox3->Location = System::Drawing::Point(394, 198);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(137, 35);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->textBox4->Location = System::Drawing::Point(394, 258);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(137, 35);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->textBox5->Location = System::Drawing::Point(394, 323);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(137, 35);
			this->textBox5->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label6->Location = System::Drawing::Point(167, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(307, 28);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Foydalanuvchi ma\'lumotlari";
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 426);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
