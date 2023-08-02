#pragma once
#include"LoginPage.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<cstring>
#include<io.h>
#include<filesystem>
#pragma warning(push)
#pragma warning(disable: 4101)
#pragma warning(disable: 4102)

#include"EmployeePage.h"

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
	/// Summary for LoginPage
	/// </summary>
	public ref class LoginPage : public System::Windows::Forms::Form
	{
	public:
		LoginPage(void)
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
		~LoginPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBoxPassword;
	private: System::Windows::Forms::Label^  PasswordLabel;
	protected: 

	private: System::Windows::Forms::Label^  UserIDLabel;
	private: System::Windows::Forms::TextBox^  textBoxUserID;

	private: System::Windows::Forms::PictureBox^  LESCOpicture;
	private: System::Windows::Forms::Button^  Loginbutton;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginPage::typeid));
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->PasswordLabel = (gcnew System::Windows::Forms::Label());
			this->UserIDLabel = (gcnew System::Windows::Forms::Label());
			this->textBoxUserID = (gcnew System::Windows::Forms::TextBox());
			this->LESCOpicture = (gcnew System::Windows::Forms::PictureBox());
			this->Loginbutton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->LESCOpicture))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BackColor = System::Drawing::Color::Lavender;
			this->textBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(296, 179);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(169, 29);
			this->textBoxPassword->TabIndex = 16;
			// 
			// PasswordLabel
			// 
			this->PasswordLabel->AutoSize = true;
			this->PasswordLabel->BackColor = System::Drawing::Color::Silver;
			this->PasswordLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PasswordLabel->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PasswordLabel->Location = System::Drawing::Point(156, 182);
			this->PasswordLabel->Name = L"PasswordLabel";
			this->PasswordLabel->Size = System::Drawing::Size(115, 27);
			this->PasswordLabel->TabIndex = 15;
			this->PasswordLabel->Text = L"Password: ";
			// 
			// UserIDLabel
			// 
			this->UserIDLabel->AutoSize = true;
			this->UserIDLabel->BackColor = System::Drawing::Color::Silver;
			this->UserIDLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->UserIDLabel->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->UserIDLabel->Location = System::Drawing::Point(157, 146);
			this->UserIDLabel->Name = L"UserIDLabel";
			this->UserIDLabel->Size = System::Drawing::Size(114, 27);
			this->UserIDLabel->TabIndex = 14;
			this->UserIDLabel->Text = L"User ID:    ";
			// 
			// textBoxUserID
			// 
			this->textBoxUserID->BackColor = System::Drawing::Color::Lavender;
			this->textBoxUserID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxUserID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBoxUserID->Location = System::Drawing::Point(296, 144);
			this->textBoxUserID->Name = L"textBoxUserID";
			this->textBoxUserID->Size = System::Drawing::Size(169, 29);
			this->textBoxUserID->TabIndex = 13;
			// 
			// LESCOpicture
			// 
			this->LESCOpicture->BackColor = System::Drawing::Color::White;
			this->LESCOpicture->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LESCOpicture->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"LESCOpicture.Image")));
			this->LESCOpicture->Location = System::Drawing::Point(10, 12);
			this->LESCOpicture->Name = L"LESCOpicture";
			this->LESCOpicture->Size = System::Drawing::Size(643, 76);
			this->LESCOpicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->LESCOpicture->TabIndex = 11;
			this->LESCOpicture->TabStop = false;
			// 
			// Loginbutton
			// 
			this->Loginbutton->BackColor = System::Drawing::Color::LightGray;
			this->Loginbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Loginbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Loginbutton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Loginbutton->Location = System::Drawing::Point(267, 256);
			this->Loginbutton->Name = L"Loginbutton";
			this->Loginbutton->Size = System::Drawing::Size(86, 33);
			this->Loginbutton->TabIndex = 18;
			this->Loginbutton->Text = L"Login";
			this->Loginbutton->UseVisualStyleBackColor = false;
			this->Loginbutton->Click += gcnew System::EventHandler(this, &LoginPage::Loginbutton_Click);
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(665, 347);
			this->Controls->Add(this->Loginbutton);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->PasswordLabel);
			this->Controls->Add(this->UserIDLabel);
			this->Controls->Add(this->textBoxUserID);
			this->Controls->Add(this->LESCOpicture);
			this->Name = L"LoginPage";
			this->Text = L"Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->LESCOpicture))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Loginbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	std::ifstream Myfile;
	std::ifstream fin;
	std::ifstream input;
    char ch;
	std::string ID;
	std::string PW;
	std::string lgID;
	std::string lgpass;
	int srch, srch1, sampleuID, sampleID;
	bool idCheck,lgCheck,LoginWhile;
	std::string usernic;
	while(!0){
    	fin.open("EmployeesData.txt");
		/*cout << "Enter ID:";
        cin >> lgID;
        cout << "Enter Password:";
        cin >> lgpass;*/
		String^ lgIDw=textBoxUserID->Text;
		String^ lgpassw=textBoxPassword->Text;
		StreamWriter^ w=File::CreateText("wr.txt");
		w->Write(lgIDw);
		w->Write(' ');
		w->Write(lgpassw);
		w->Close();
		std::ifstream r;
		r.open("wr.txt",ios::in);
		//while(!r.eof())
		r>>lgID;
		r>>lgpass;
		r.close();
//		w->Close();
	//	r.open("wr.txt");
	//	r.close();
	//	std::cout<<lgID<<" "<<lgpass<<endl;
	if (fin.is_open()){
	while (!fin.eof()){
	fin>>ID>>PW;
	if (ID==lgID){
	idCheck=true;
	break;}}
	if (ID!=lgID){
	idCheck=false;
	if(MessageBox::Show("Sorry, NO record found for this ID.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Loginbutton->PerformClick();}
	else{
		if (lgID==ID && lgpass==PW){
        MessageBox::Show("Login successful!");
        cout << endl;
        lgCheck=true;
        EmployeePage obj;
		this->Hide();
		obj.ShowDialog();}
        else{
        lgCheck=false;
        if(MessageBox::Show("Login failed!\nWrong password.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
		Loginbutton->PerformClick();
        }}
	fin.close();}
	else
	if(MessageBox::Show("Could not open file.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Loginbutton->PerformClick();
     //   input.close();
	if (idCheck==true && lgCheck==true){
    LoginWhile=true;
	break;}}
			 }
};
}
#pragma warning(pop)
