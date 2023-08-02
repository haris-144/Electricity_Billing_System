#pragma once
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<cstring>
#include<io.h>
#include<filesystem>
#pragma warning(push)
#pragma warning(disable: 4101)

namespace FinalProject_ISE {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for ConfirmPassword
	/// </summary>
	public ref class ConfirmPassword : public System::Windows::Forms::Form
	{
	public:
		ConfirmPassword(void)
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
		~ConfirmPassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelnewPassword;
	protected: 
	private: System::Windows::Forms::Label^  labelCinfirmPassword;
	private: System::Windows::Forms::MaskedTextBox^  TextBoxNewPw;
	private: System::Windows::Forms::MaskedTextBox^  TextBoxConfirmPw;
	private: System::Windows::Forms::Button^  Enterbutton;

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
			this->labelnewPassword = (gcnew System::Windows::Forms::Label());
			this->labelCinfirmPassword = (gcnew System::Windows::Forms::Label());
			this->TextBoxNewPw = (gcnew System::Windows::Forms::MaskedTextBox());
			this->TextBoxConfirmPw = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Enterbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelnewPassword
			// 
			this->labelnewPassword->AutoSize = true;
			this->labelnewPassword->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelnewPassword->Location = System::Drawing::Point(12, 39);
			this->labelnewPassword->Name = L"labelnewPassword";
			this->labelnewPassword->Size = System::Drawing::Size(111, 18);
			this->labelnewPassword->TabIndex = 0;
			this->labelnewPassword->Text = L"New Password:";
			// 
			// labelCinfirmPassword
			// 
			this->labelCinfirmPassword->AutoSize = true;
			this->labelCinfirmPassword->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelCinfirmPassword->Location = System::Drawing::Point(12, 68);
			this->labelCinfirmPassword->Name = L"labelCinfirmPassword";
			this->labelCinfirmPassword->Size = System::Drawing::Size(136, 18);
			this->labelCinfirmPassword->TabIndex = 1;
			this->labelCinfirmPassword->Text = L"Confirm Password:";
			// 
			// TextBoxNewPw
			// 
			this->TextBoxNewPw->Location = System::Drawing::Point(154, 37);
			this->TextBoxNewPw->Name = L"TextBoxNewPw";
			this->TextBoxNewPw->Size = System::Drawing::Size(147, 20);
			this->TextBoxNewPw->TabIndex = 2;
			// 
			// TextBoxConfirmPw
			// 
			this->TextBoxConfirmPw->Location = System::Drawing::Point(154, 69);
			this->TextBoxConfirmPw->Name = L"TextBoxConfirmPw";
			this->TextBoxConfirmPw->Size = System::Drawing::Size(147, 20);
			this->TextBoxConfirmPw->TabIndex = 3;
			// 
			// Enterbutton
			// 
			this->Enterbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Enterbutton->Location = System::Drawing::Point(126, 108);
			this->Enterbutton->Name = L"Enterbutton";
			this->Enterbutton->Size = System::Drawing::Size(75, 23);
			this->Enterbutton->TabIndex = 4;
			this->Enterbutton->Text = L"Enter";
			this->Enterbutton->UseVisualStyleBackColor = true;
			this->Enterbutton->Click += gcnew System::EventHandler(this, &ConfirmPassword::Enterbutton_Click);
			// 
			// ConfirmPassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(335, 198);
			this->Controls->Add(this->Enterbutton);
			this->Controls->Add(this->TextBoxConfirmPw);
			this->Controls->Add(this->TextBoxNewPw);
			this->Controls->Add(this->labelCinfirmPassword);
			this->Controls->Add(this->labelnewPassword);
			this->Name = L"ConfirmPassword";
			this->Text = L"Confirm Password";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Enterbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	float username;
	std::string pw;
	bool check,PwCheck,confirmPw;
	bool idcheck;
	std::string pw1, pw2;
	std::string pwcnic, newpw, pwnic;
	std::ifstream infile;
	std::ofstream outfile;
	infile.open("EmployeesData.txt");
	outfile.open("TemporaryEmployeesData.txt"); 	//temp file for storing EmployeedData and overwriting the update(s) 			 
	String^ pw1w=TextBoxNewPw->Text;
	String^ pw2w=TextBoxConfirmPw->Text;
	StreamWriter^ w=File::CreateText("wr.txt");
	std::ifstream r;
	r.open("wr.txt");
	w->WriteLine(pw1w);
	r>>pw1;
	w->WriteLine(pw2w);
	r>>pw2;
	while(!0){
	if (pw1==pw2){
	confirmPw=true;
	newpw=pw1;
	outfile<<' '<<newpw;
	MessageBox::Show("Password has been updated!");
	remove("EmployeesData.txt");
	idcheck=true;}
	else{
	if(MessageBox::Show("Enter the same password.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();
	confirmPw=false;}
	if(confirmPw)
		break;}/*
	else{
	MessageBox::Show("Wrong password.");
	PwCheck=false;}
	if (PwCheck==true)
	break;}
	}
	else{
	outfile<<' '<<pwcnic<<endl;}}
	if (!idcheck)
	cout<<"Sorry, No record found for ID: "<<searchid<<endl;	
	infile.close();
	}
	else
	cout<<"File not found."<<endl;
	extrasearch=1;
	ifstream ifile;
	ofstream ofile;
	ifile.open("TemporaryEmployeesData.txt"); //temp file contains updates EmployeesData file
	ofile.open("EmployeesData.txt");		  //deleting and making a new file with update(s)
	if (ifile.is_open()){
	while (!ifile.eof()){
	ifile>>srchid>>pwnic;
	if (extrasearch==srchid)
	break;
	ofile<<srchid<<" "<<pwnic<<endl;
	extrasearch=srchid;
	}
	ifile.close();
	}
	else
	cout<<"File not found."<<endl;
	remove("TemporaryEmployeesData.txt");   //deleting the temp file
		 }*/
			 }
};
}
#pragma warning(pop)

