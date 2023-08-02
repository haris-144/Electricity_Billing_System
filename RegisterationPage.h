#pragma once
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<cstring>
#include<io.h>
#pragma warning(push)
#pragma warning(disable: 4101)

#include"ChangePassword.h"
#include"LoginPage.h"




#include<filesystem>


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
	/// Summary for RegisterationPage
	/// </summary>
	public ref class RegisterationPage : public System::Windows::Forms::Form
	{
	public:
		RegisterationPage(void)
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
		~RegisterationPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Loginbutton;
	protected: 
	private: System::Windows::Forms::Label^  ChangepasswordLabel;
	private: System::Windows::Forms::TextBox^  textBoxPassword;
	private: System::Windows::Forms::Label^  SetaPasswordLabel;



	private: System::Windows::Forms::PictureBox^  LESCOpicture;
	private: System::Windows::Forms::PictureBox^  exitbutton;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterationPage::typeid));
			this->Loginbutton = (gcnew System::Windows::Forms::Button());
			this->ChangepasswordLabel = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->SetaPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->LESCOpicture = (gcnew System::Windows::Forms::PictureBox());
			this->exitbutton = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->LESCOpicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->exitbutton))->BeginInit();
			this->SuspendLayout();
			// 
			// Loginbutton
			// 
			this->Loginbutton->BackColor = System::Drawing::Color::LightGray;
			this->Loginbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Loginbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Loginbutton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Loginbutton->Location = System::Drawing::Point(261, 240);
			this->Loginbutton->Name = L"Loginbutton";
			this->Loginbutton->Size = System::Drawing::Size(86, 33);
			this->Loginbutton->TabIndex = 17;
			this->Loginbutton->Text = L"Login";
			this->Loginbutton->UseVisualStyleBackColor = false;
			this->Loginbutton->Click += gcnew System::EventHandler(this, &RegisterationPage::Loginbutton_Click);
			// 
			// ChangepasswordLabel
			// 
			this->ChangepasswordLabel->AutoSize = true;
			this->ChangepasswordLabel->BackColor = System::Drawing::Color::Transparent;
			this->ChangepasswordLabel->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ChangepasswordLabel->ForeColor = System::Drawing::Color::Red;
			this->ChangepasswordLabel->Location = System::Drawing::Point(366, 196);
			this->ChangepasswordLabel->Name = L"ChangepasswordLabel";
			this->ChangepasswordLabel->Size = System::Drawing::Size(115, 16);
			this->ChangepasswordLabel->TabIndex = 16;
			this->ChangepasswordLabel->Text = L"Change Password";
			this->ChangepasswordLabel->Click += gcnew System::EventHandler(this, &RegisterationPage::ChangepasswordLabel_Click);
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BackColor = System::Drawing::Color::Lavender;
			this->textBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(312, 164);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(169, 29);
			this->textBoxPassword->TabIndex = 15;
			// 
			// SetaPasswordLabel
			// 
			this->SetaPasswordLabel->AutoSize = true;
			this->SetaPasswordLabel->BackColor = System::Drawing::Color::Silver;
			this->SetaPasswordLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SetaPasswordLabel->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SetaPasswordLabel->Location = System::Drawing::Point(129, 167);
			this->SetaPasswordLabel->Name = L"SetaPasswordLabel";
			this->SetaPasswordLabel->Size = System::Drawing::Size(160, 27);
			this->SetaPasswordLabel->TabIndex = 14;
			this->SetaPasswordLabel->Text = L"Set a Password:";
			// 
			// LESCOpicture
			// 
			this->LESCOpicture->BackColor = System::Drawing::Color::White;
			this->LESCOpicture->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LESCOpicture->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"LESCOpicture.Image")));
			this->LESCOpicture->Location = System::Drawing::Point(12, 12);
			this->LESCOpicture->Name = L"LESCOpicture";
			this->LESCOpicture->Size = System::Drawing::Size(643, 76);
			this->LESCOpicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->LESCOpicture->TabIndex = 10;
			this->LESCOpicture->TabStop = false;
			// 
			// exitbutton
			// 
			this->exitbutton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exitbutton.Image")));
			this->exitbutton->Location = System::Drawing::Point(615, 21);
			this->exitbutton->Name = L"exitbutton";
			this->exitbutton->Size = System::Drawing::Size(31, 28);
			this->exitbutton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->exitbutton->TabIndex = 18;
			this->exitbutton->TabStop = false;
			this->exitbutton->Click += gcnew System::EventHandler(this, &RegisterationPage::pictureBox1_Click);
			// 
			// RegisterationPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(670, 342);
			this->Controls->Add(this->exitbutton);
			this->Controls->Add(this->Loginbutton);
			this->Controls->Add(this->ChangepasswordLabel);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->SetaPasswordLabel);
			this->Controls->Add(this->LESCOpicture);
			this->Name = L"RegisterationPage";
			this->Text = L"Registeration";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->LESCOpicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->exitbutton))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Loginbutton_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ psd = textBoxPassword->Text;
	//std::ofstream output;
	StreamWriter^ output=File::CreateText("record.txt");
    std::ifstream input; 	
	std::ifstream fin;
	std::ifstream Myfile;
	std::string ID;
	std::string PW;
	std::string pass;
	std::string lgID;
	std::string lgpass;
	std::string usernic;
    char ch;
	int uID;
	int srch, srch1, sampleuID, sampleID;
	int randomNumber, randomID;
	bool idCheck,lgCheck,LoginWhile;
	randomNumber=1000*(rand()%10);
    if (randomNumber==0)
    randomNumber=1000;
    uID=randomNumber;
    randomNumber=100*(rand()%10);
    if (randomNumber==0)
    randomNumber=100;
	uID=uID+randomNumber;
	randomNumber=10*(rand()%10);
    if (randomNumber==0)
    randomNumber=10;
    uID=uID+randomNumber;
    randomNumber=rand()%10;
    if (randomNumber==0)
    randomNumber=1;
    uID=uID+randomNumber;
	Myfile.open("EmployeesData.txt");
		//if (Myfile.is_open()){
		if (Myfile){
        //output.open("record.txt");
		srch=uID;
		while (!Myfile.eof()){
		Myfile>>srch1>>usernic;
		if (srch1==srch)
		break;}
		if (srch1==srch){
		while (!0){
        uID=(uID*(rand()%10));
        if (uID==0)
        uID=1000;
        randomID=uID/1000;
        if (randomID>10)
        uID=uID/10;
        sampleuID=uID;
		while (!Myfile.eof()){
		Myfile>>sampleID>>usernic;
		if (sampleuID==sampleID)
		break;}
		if (sampleuID!=sampleID)
		break;}}
		//pass=psd;
        output->Write(uID);
		output->Write(' ');
		output->Write(psd);
		//output->WriteLine("\n");
        output->Close();
		Myfile.close();
		}
	std::string username;
	std::string password;
	std::ifstream finf;
	finf.open("record.txt", ios::in);
	std::ofstream fout("EmployeesData.txt", ios::app);
	finf>>username>>password;
	fout<<username<<' '<<password<<endl;
				 MessageBox::Show("Registeration Completed!\nYour username is: "+uID+"\nYour Password is: "+psd);
				 //std::cout<<"Registeration Completed!\nYour username is: "<<uID<<"\nYour Password is: "<<pass<<endl;
				 LoginPage obj;
				 this->Hide();
				 obj.ShowDialog();

			 }
private: System::Void ChangepasswordLabel_Click(System::Object^  sender, System::EventArgs^  e) {
			 ChangePassword obj;
			 obj.ShowDialog();
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
};
}
#pragma warning(pop)

