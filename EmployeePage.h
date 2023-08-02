#pragma once
#include"NewCustomer.h"
#include"EmployeePage.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<cstring>
#include<io.h>
#include<filesystem>
#include<stdio.h>

#include"Display1.h"

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
	/// Summary for EmployeePage
	/// </summary>
	public ref class EmployeePage : public System::Windows::Forms::Form
	{
	public:
		EmployeePage(void)
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
		~EmployeePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  EmployeesPortal;

	protected: 

	protected: 

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;









	private: System::Windows::Forms::Button^  AddaNewCustomerButton;
	private: System::Windows::Forms::Button^  UpdateATariffbutton;

	private: System::Windows::Forms::Button^  Displaybutton;
	private: System::Windows::Forms::Button^  BillingInfobutton;

	private: System::Windows::Forms::Button^  CNICExpiryDatesbutton;

	private: System::Windows::Forms::Button^  Searchbutton;



	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EmployeePage::typeid));
			this->EmployeesPortal = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->AddaNewCustomerButton = (gcnew System::Windows::Forms::Button());
			this->UpdateATariffbutton = (gcnew System::Windows::Forms::Button());
			this->Displaybutton = (gcnew System::Windows::Forms::Button());
			this->BillingInfobutton = (gcnew System::Windows::Forms::Button());
			this->CNICExpiryDatesbutton = (gcnew System::Windows::Forms::Button());
			this->Searchbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// EmployeesPortal
			// 
			this->EmployeesPortal->AutoSize = true;
			this->EmployeesPortal->BackColor = System::Drawing::Color::Transparent;
			this->EmployeesPortal->Font = (gcnew System::Drawing::Font(L"Georgia", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->EmployeesPortal->Location = System::Drawing::Point(148, 21);
			this->EmployeesPortal->Name = L"EmployeesPortal";
			this->EmployeesPortal->Size = System::Drawing::Size(345, 38);
			this->EmployeesPortal->TabIndex = 0;
			this->EmployeesPortal->Text = L"EMPLOYEES PORTAL";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// AddaNewCustomerButton
			// 
			this->AddaNewCustomerButton->BackColor = System::Drawing::Color::Teal;
			this->AddaNewCustomerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddaNewCustomerButton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AddaNewCustomerButton->Location = System::Drawing::Point(82, 133);
			this->AddaNewCustomerButton->Name = L"AddaNewCustomerButton";
			this->AddaNewCustomerButton->Size = System::Drawing::Size(205, 38);
			this->AddaNewCustomerButton->TabIndex = 8;
			this->AddaNewCustomerButton->Text = L"Display";
			this->AddaNewCustomerButton->UseVisualStyleBackColor = false;
			this->AddaNewCustomerButton->Click += gcnew System::EventHandler(this, &EmployeePage::AddaNewCustomerButton_Click);
			// 
			// UpdateATariffbutton
			// 
			this->UpdateATariffbutton->BackColor = System::Drawing::Color::Teal;
			this->UpdateATariffbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdateATariffbutton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->UpdateATariffbutton->Location = System::Drawing::Point(355, 189);
			this->UpdateATariffbutton->Name = L"UpdateATariffbutton";
			this->UpdateATariffbutton->Size = System::Drawing::Size(205, 34);
			this->UpdateATariffbutton->TabIndex = 9;
			this->UpdateATariffbutton->Text = L"Update a Tariff";
			this->UpdateATariffbutton->UseVisualStyleBackColor = false;
			// 
			// Displaybutton
			// 
			this->Displaybutton->BackColor = System::Drawing::Color::Teal;
			this->Displaybutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Displaybutton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Displaybutton->Location = System::Drawing::Point(82, 83);
			this->Displaybutton->Name = L"Displaybutton";
			this->Displaybutton->Size = System::Drawing::Size(205, 34);
			this->Displaybutton->TabIndex = 10;
			this->Displaybutton->Text = L"Add a new Customer";
			this->Displaybutton->UseVisualStyleBackColor = false;
			this->Displaybutton->Click += gcnew System::EventHandler(this, &EmployeePage::Displaybutton_Click);
			// 
			// BillingInfobutton
			// 
			this->BillingInfobutton->BackColor = System::Drawing::Color::Teal;
			this->BillingInfobutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BillingInfobutton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BillingInfobutton->Location = System::Drawing::Point(355, 137);
			this->BillingInfobutton->Name = L"BillingInfobutton";
			this->BillingInfobutton->Size = System::Drawing::Size(205, 34);
			this->BillingInfobutton->TabIndex = 11;
			this->BillingInfobutton->Text = L"Billing Info";
			this->BillingInfobutton->UseVisualStyleBackColor = false;
			// 
			// CNICExpiryDatesbutton
			// 
			this->CNICExpiryDatesbutton->BackColor = System::Drawing::Color::Teal;
			this->CNICExpiryDatesbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CNICExpiryDatesbutton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->CNICExpiryDatesbutton->Location = System::Drawing::Point(355, 83);
			this->CNICExpiryDatesbutton->Name = L"CNICExpiryDatesbutton";
			this->CNICExpiryDatesbutton->Size = System::Drawing::Size(205, 38);
			this->CNICExpiryDatesbutton->TabIndex = 12;
			this->CNICExpiryDatesbutton->Text = L"CNIC Expiry Dates";
			this->CNICExpiryDatesbutton->UseVisualStyleBackColor = false;
			// 
			// Searchbutton
			// 
			this->Searchbutton->BackColor = System::Drawing::Color::Teal;
			this->Searchbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Searchbutton->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Searchbutton->Location = System::Drawing::Point(82, 189);
			this->Searchbutton->Name = L"Searchbutton";
			this->Searchbutton->Size = System::Drawing::Size(205, 34);
			this->Searchbutton->TabIndex = 13;
			this->Searchbutton->Text = L"Search";
			this->Searchbutton->UseVisualStyleBackColor = false;
			// 
			// EmployeePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(666, 302);
			this->Controls->Add(this->Searchbutton);
			this->Controls->Add(this->CNICExpiryDatesbutton);
			this->Controls->Add(this->BillingInfobutton);
			this->Controls->Add(this->Displaybutton);
			this->Controls->Add(this->UpdateATariffbutton);
			this->Controls->Add(this->AddaNewCustomerButton);
			this->Controls->Add(this->EmployeesPortal);
			this->Name = L"EmployeePage";
			this->Text = L"Employees Portal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void AddaNewCustomerButton_Click(System::Object^  sender, System::EventArgs^  e) {
		/*	Display1 obj;
			this->Hide();
			obj.ShowDialog();*/
		 }
private: System::Void Displaybutton_Click(System::Object^  sender, System::EventArgs^  e) {
			/*Display1 obj;
			this->Hide();
			obj.ShowDialog();*/
		 }
};
}
#pragma warning(pop)
