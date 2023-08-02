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

#include"ConfirmPassword.h"
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
	/// Summary for ChangePassword
	/// </summary>
	public ref class ChangePassword : public System::Windows::Forms::Form
	{
	public:
		ChangePassword(void)
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
		~ChangePassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelUsername;
	protected: 
	private: System::Windows::Forms::Label^  labelPassword;
	private: System::Windows::Forms::TextBox^  textBoxusername;
	private: System::Windows::Forms::TextBox^  textBoxPassword;
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
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxusername = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->Enterbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelUsername
			// 
			this->labelUsername->AutoSize = true;
			this->labelUsername->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelUsername->Location = System::Drawing::Point(12, 24);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(82, 18);
			this->labelUsername->TabIndex = 0;
			this->labelUsername->Text = L"Username:";
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelPassword->Location = System::Drawing::Point(12, 55);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(80, 18);
			this->labelPassword->TabIndex = 1;
			this->labelPassword->Text = L"Password: ";
			// 
			// textBoxusername
			// 
			this->textBoxusername->BackColor = System::Drawing::Color::White;
			this->textBoxusername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxusername->Location = System::Drawing::Point(111, 25);
			this->textBoxusername->Name = L"textBoxusername";
			this->textBoxusername->Size = System::Drawing::Size(133, 20);
			this->textBoxusername->TabIndex = 2;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BackColor = System::Drawing::Color::White;
			this->textBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPassword->Location = System::Drawing::Point(111, 55);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(133, 20);
			this->textBoxPassword->TabIndex = 3;
			// 
			// Enterbutton
			// 
			this->Enterbutton->BackColor = System::Drawing::Color::Transparent;
			this->Enterbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Enterbutton->Location = System::Drawing::Point(102, 109);
			this->Enterbutton->Name = L"Enterbutton";
			this->Enterbutton->Size = System::Drawing::Size(75, 23);
			this->Enterbutton->TabIndex = 4;
			this->Enterbutton->Text = L"Enter";
			this->Enterbutton->UseVisualStyleBackColor = false;
			this->Enterbutton->Click += gcnew System::EventHandler(this, &ChangePassword::Enterbutton_Click);
			// 
			// ChangePassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(287, 219);
			this->Controls->Add(this->Enterbutton);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxusername);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->labelUsername);
			this->Name = L"ChangePassword";
			this->Text = L"Change Password";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Enterbutton_Click(System::Object^  sender, System::EventArgs^  e) {
				 		 
	float username;
	std::string pw1, pw2;
	bool check,PwCheck,confirmPw;
	bool idcheck;
	//int searchid;
	int srchid, extrasearch=1;
	int searchid;
	int searchid1;
	String^ searchidw=textBoxusername->Text;
	StreamWriter^ w=File::CreateText("wr.txt");
	std::ifstream r;
	r.open("wr.txt");
	w->WriteLine(searchidw);
	r>>searchid;
	std::string pw, pwcnic, newpw, pwnic;
	std::ifstream infile;
	std::ofstream outfile;
	infile.open("EmployeesData.txt");
	outfile.open("TemporaryEmployeesData.txt"); 	//temp file for storing EmployeedData and overwriting the update(s)     				
	//cout<<"Enter username: ";
	//cin>>searchid;
	if (infile.is_open()){
	while (!infile.eof()){
	infile>>searchid1>>pwcnic;
	if (extrasearch==searchid1)
	break;
	outfile<<searchid1;
	extrasearch=searchid1;
	if (searchid1==searchid){
	check=true;
	idcheck=true;
	while(!0){
	/*cout<<"Enter current password: ";
	cin>>pw;*/
	String^ pww=textBoxPassword->Text;
	w->WriteLine(pww);
	r>>pw;
	if (check==true && pw==pwcnic){
	PwCheck=true;
	ConfirmPassword obj;
	obj.ShowDialog();
	/*pw1;
	while(!0){
	cin>>pw2;
	if (pw1==pw2){
	confirmPw=true;
	newpw=pw1;
	outfile<<' '<<newpw<<endl;
	cout<<"Password has been updated!"<<endl;
	remove("EmployeesData.txt");
	idcheck=true;}
	else{
	cout<<"Enter the same password."<<endl;
	confirmPw=false;}
	if(confirmPw)
	break;}*/}
	else{
	if(MessageBox::Show("Wrong password.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();
	PwCheck=false;}
	if (PwCheck==true)
	break;}
	}
	else{
	outfile<<' '<<pwcnic;}}
	if (!idcheck)
	if(MessageBox::Show("Sorry, No record found for this ID","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();
	infile.close();
	}
	else
	if(MessageBox::Show("File not found.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();
	extrasearch=1;
	std::ifstream ifile;
	std::ofstream ofile;
	ifile.open("TemporaryEmployeesData.txt"); //temp file contains updates EmployeesData file
	ofile.open("EmployeesData.txt");		  //deleting and making a new file with update(s)
	if (ifile.is_open()){
	while (!ifile.eof()){
	ifile>>srchid>>pwnic;
	if (extrasearch==srchid)
	break;
	ofile<<srchid<<" "<<pwnic;
	extrasearch=srchid;
	}
	ifile.close();
	}
	else
	if(MessageBox::Show("File not found.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();
	remove("TemporaryEmployeesData.txt");   //deleting the temp file
			 }
};
}
#pragma warning(pop)
