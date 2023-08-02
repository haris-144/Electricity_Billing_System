#pragma once
#include"RegisterationPage.h"
#include"LoginPage.h"
namespace FinalProject_ISE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegAndLogPg
	/// </summary>
	public ref class RegAndLogPg : public System::Windows::Forms::Form
	{
	public:
		RegAndLogPg(void)
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
		~RegAndLogPg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LESCO;
	protected: 
	private: System::Windows::Forms::Button^  RegAndLogPgRegisterButton;
	private: System::Windows::Forms::Button^  RegAndLogPgLoginButton;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RegAndLogPg::typeid));
			this->LESCO = (gcnew System::Windows::Forms::Label());
			this->RegAndLogPgRegisterButton = (gcnew System::Windows::Forms::Button());
			this->RegAndLogPgLoginButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LESCO
			// 
			this->LESCO->AutoSize = true;
			this->LESCO->BackColor = System::Drawing::Color::Transparent;
			this->LESCO->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LESCO->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LESCO->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->LESCO->Location = System::Drawing::Point(128, 9);
			this->LESCO->Name = L"LESCO";
			this->LESCO->Size = System::Drawing::Size(391, 126);
			this->LESCO->TabIndex = 0;
			this->LESCO->Text = L"LESCO";
			// 
			// RegAndLogPgRegisterButton
			// 
			this->RegAndLogPgRegisterButton->BackColor = System::Drawing::Color::Teal;
			this->RegAndLogPgRegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegAndLogPgRegisterButton->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RegAndLogPgRegisterButton->Location = System::Drawing::Point(271, 171);
			this->RegAndLogPgRegisterButton->Name = L"RegAndLogPgRegisterButton";
			this->RegAndLogPgRegisterButton->Size = System::Drawing::Size(127, 35);
			this->RegAndLogPgRegisterButton->TabIndex = 1;
			this->RegAndLogPgRegisterButton->Text = L"Register";
			this->RegAndLogPgRegisterButton->UseVisualStyleBackColor = false;
			this->RegAndLogPgRegisterButton->Click += gcnew System::EventHandler(this, &RegAndLogPg::RegAndLogPgRegisterButton_Click);
			// 
			// RegAndLogPgLoginButton
			// 
			this->RegAndLogPgLoginButton->BackColor = System::Drawing::Color::Teal;
			this->RegAndLogPgLoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegAndLogPgLoginButton->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RegAndLogPgLoginButton->Location = System::Drawing::Point(271, 212);
			this->RegAndLogPgLoginButton->Name = L"RegAndLogPgLoginButton";
			this->RegAndLogPgLoginButton->Size = System::Drawing::Size(127, 35);
			this->RegAndLogPgLoginButton->TabIndex = 2;
			this->RegAndLogPgLoginButton->Text = L"Login";
			this->RegAndLogPgLoginButton->UseVisualStyleBackColor = false;
			this->RegAndLogPgLoginButton->Click += gcnew System::EventHandler(this, &RegAndLogPg::RegAndLogPgLoginButton_Click);
			// 
			// RegAndLogPg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(659, 371);
			this->Controls->Add(this->RegAndLogPgLoginButton);
			this->Controls->Add(this->RegAndLogPgRegisterButton);
			this->Controls->Add(this->LESCO);
			this->Name = L"RegAndLogPg";
			this->Text = L"LESCO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RegAndLogPgRegisterButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 RegisterationPage obj;
				 this->Hide();
				 obj.ShowDialog();
			 }
private: System::Void RegAndLogPgLoginButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 LoginPage obj;
				 this->Hide();
				 obj.ShowDialog();
		 }
};
}
