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
	/// Summary for AddCustomer
	/// </summary>
	public ref class AddCustomer : public System::Windows::Forms::Form
	{
	public:
		AddCustomer(void)
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
		~AddCustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBoxname;
	protected: 
	private: System::Windows::Forms::TextBox^  textBoxaddress;
	private: System::Windows::Forms::TextBox^  textBoxPhoneNo;
	private: System::Windows::Forms::TextBox^  textBoxCtype;
	private: System::Windows::Forms::TextBox^  textBoxMtype;
	private: System::Windows::Forms::TextBox^  textBoxcnic;
	private: System::Windows::Forms::Button^  Enterbutton;
	private: System::Windows::Forms::Label^  Ctype;
	private: System::Windows::Forms::Label^  Mtype;
	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::Label^  address;
	private: System::Windows::Forms::Label^  phoneNo;
	private: System::Windows::Forms::Label^  cnic;
	private: System::Windows::Forms::Label^  customer;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddCustomer::typeid));
			this->textBoxname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxaddress = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPhoneNo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCtype = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMtype = (gcnew System::Windows::Forms::TextBox());
			this->textBoxcnic = (gcnew System::Windows::Forms::TextBox());
			this->Enterbutton = (gcnew System::Windows::Forms::Button());
			this->Ctype = (gcnew System::Windows::Forms::Label());
			this->Mtype = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->address = (gcnew System::Windows::Forms::Label());
			this->phoneNo = (gcnew System::Windows::Forms::Label());
			this->cnic = (gcnew System::Windows::Forms::Label());
			this->customer = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxname
			// 
			this->textBoxname->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxname->Location = System::Drawing::Point(163, 97);
			this->textBoxname->Name = L"textBoxname";
			this->textBoxname->Size = System::Drawing::Size(136, 20);
			this->textBoxname->TabIndex = 42;
			// 
			// textBoxaddress
			// 
			this->textBoxaddress->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxaddress->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxaddress->Location = System::Drawing::Point(163, 120);
			this->textBoxaddress->Name = L"textBoxaddress";
			this->textBoxaddress->Size = System::Drawing::Size(136, 20);
			this->textBoxaddress->TabIndex = 41;
			// 
			// textBoxPhoneNo
			// 
			this->textBoxPhoneNo->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxPhoneNo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPhoneNo->Location = System::Drawing::Point(163, 142);
			this->textBoxPhoneNo->Name = L"textBoxPhoneNo";
			this->textBoxPhoneNo->Size = System::Drawing::Size(136, 20);
			this->textBoxPhoneNo->TabIndex = 40;
			// 
			// textBoxCtype
			// 
			this->textBoxCtype->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxCtype->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxCtype->Location = System::Drawing::Point(163, 166);
			this->textBoxCtype->Name = L"textBoxCtype";
			this->textBoxCtype->Size = System::Drawing::Size(136, 20);
			this->textBoxCtype->TabIndex = 39;
			// 
			// textBoxMtype
			// 
			this->textBoxMtype->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxMtype->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxMtype->Location = System::Drawing::Point(163, 191);
			this->textBoxMtype->Name = L"textBoxMtype";
			this->textBoxMtype->Size = System::Drawing::Size(136, 20);
			this->textBoxMtype->TabIndex = 38;
			// 
			// textBoxcnic
			// 
			this->textBoxcnic->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBoxcnic->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxcnic->Location = System::Drawing::Point(163, 74);
			this->textBoxcnic->Name = L"textBoxcnic";
			this->textBoxcnic->Size = System::Drawing::Size(136, 20);
			this->textBoxcnic->TabIndex = 37;
			// 
			// Enterbutton
			// 
			this->Enterbutton->BackColor = System::Drawing::Color::Transparent;
			this->Enterbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Enterbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Enterbutton->Location = System::Drawing::Point(136, 231);
			this->Enterbutton->Name = L"Enterbutton";
			this->Enterbutton->Size = System::Drawing::Size(82, 29);
			this->Enterbutton->TabIndex = 36;
			this->Enterbutton->Text = L"Enter";
			this->Enterbutton->UseVisualStyleBackColor = false;
			this->Enterbutton->Click += gcnew System::EventHandler(this, &AddCustomer::Enterbutton_Click);
			// 
			// Ctype
			// 
			this->Ctype->AutoSize = true;
			this->Ctype->BackColor = System::Drawing::Color::Transparent;
			this->Ctype->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Ctype->Location = System::Drawing::Point(13, 163);
			this->Ctype->Name = L"Ctype";
			this->Ctype->Size = System::Drawing::Size(144, 23);
			this->Ctype->TabIndex = 35;
			this->Ctype->Text = L"Customer Type:";
			// 
			// Mtype
			// 
			this->Mtype->AutoSize = true;
			this->Mtype->BackColor = System::Drawing::Color::Transparent;
			this->Mtype->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Mtype->Location = System::Drawing::Point(13, 186);
			this->Mtype->Name = L"Mtype";
			this->Mtype->Size = System::Drawing::Size(113, 23);
			this->Mtype->TabIndex = 34;
			this->Mtype->Text = L"Meter Type:";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->BackColor = System::Drawing::Color::Transparent;
			this->name->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(13, 94);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(67, 23);
			this->name->TabIndex = 33;
			this->name->Text = L"Name:";
			// 
			// address
			// 
			this->address->AutoSize = true;
			this->address->BackColor = System::Drawing::Color::Transparent;
			this->address->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->address->Location = System::Drawing::Point(13, 117);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(84, 23);
			this->address->TabIndex = 32;
			this->address->Text = L"Address:";
			// 
			// phoneNo
			// 
			this->phoneNo->AutoSize = true;
			this->phoneNo->BackColor = System::Drawing::Color::Transparent;
			this->phoneNo->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->phoneNo->Location = System::Drawing::Point(13, 140);
			this->phoneNo->Name = L"phoneNo";
			this->phoneNo->Size = System::Drawing::Size(104, 23);
			this->phoneNo->TabIndex = 31;
			this->phoneNo->Text = L"Phone No.:";
			// 
			// cnic
			// 
			this->cnic->AutoSize = true;
			this->cnic->BackColor = System::Drawing::Color::Transparent;
			this->cnic->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cnic->Location = System::Drawing::Point(13, 71);
			this->cnic->Name = L"cnic";
			this->cnic->Size = System::Drawing::Size(62, 23);
			this->cnic->TabIndex = 30;
			this->cnic->Text = L"CNIC:";
			// 
			// customer
			// 
			this->customer->AutoSize = true;
			this->customer->BackColor = System::Drawing::Color::Transparent;
			this->customer->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->customer->Location = System::Drawing::Point(12, 33);
			this->customer->Name = L"customer";
			this->customer->Size = System::Drawing::Size(324, 25);
			this->customer->TabIndex = 29;
			this->customer->Text = L"Enter details for a new customer: ";
			// 
			// AddCustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(644, 305);
			this->Controls->Add(this->textBoxname);
			this->Controls->Add(this->textBoxaddress);
			this->Controls->Add(this->textBoxPhoneNo);
			this->Controls->Add(this->textBoxCtype);
			this->Controls->Add(this->textBoxMtype);
			this->Controls->Add(this->textBoxcnic);
			this->Controls->Add(this->Enterbutton);
			this->Controls->Add(this->Ctype);
			this->Controls->Add(this->Mtype);
			this->Controls->Add(this->name);
			this->Controls->Add(this->address);
			this->Controls->Add(this->phoneNo);
			this->Controls->Add(this->cnic);
			this->Controls->Add(this->customer);
			this->Name = L"AddCustomer";
			this->Text = L"LESCO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Enterbutton_Click(System::Object^  sender, System::EventArgs^  e) {

				 
	int customerCode;
    std::string name;
    std::string cnic;
    std::string address;
    std::string phone;
    std::string customerType;
    std::string meterType;
    std::ofstream sfout("CustomersInfosample.txt",ios::out);		//sample file contains record of recently added customer
	std::ofstream fout("CustomersInfo.txt",ios::app);				//CustomersInfo contains record of all the customers 
	std::ifstream Myfile;
    int code1, code2, randomCode, sampleCode, sampleCode1;
	std::string uscnic,usname,usaddress,usphone,uscustomerType,usmeterType;
	int code,randomNumber;
	//the code below generates the random ID for every customer
	randomNumber=1000*(rand()%10);
    if (randomNumber==0)
    randomNumber=1000;
    code=randomNumber;
    randomNumber=100*(rand()%10);
    if (randomNumber==0)
    randomNumber=100;
	code=code+randomNumber;
	randomNumber=10*(rand()%10);
    if (randomNumber==0)
    randomNumber=10;
    code=code+randomNumber;
    randomNumber=rand()%10;
    if (randomNumber==0)
    randomNumber=1;
    code=code+randomNumber;
    customerCode=code;
    code2=customerCode;
    Myfile.open("CustomersInfo.txt");
    /*the code below checks if the randomly generated ID is already 
	a customer's ID or not if yes it generates a new ID until the
	system generates a new and different ID*/
    if (Myfile.is_open()){
	while (!Myfile.eof()){
	Myfile>>code1>>uscnic>>usname>>usaddress>>usphone>>uscustomerType>>usmeterType;
	if (code1==code2)		//If two employees have same code it breaks and generates new ID
	break;}
	if (code1==code2){
		while (!0){
        customerCode=(customerCode*(rand()%10));
        if (customerCode==0)
        customerCode=1000;
        randomCode=customerCode/1000;
        if (randomCode>=10)
        customerCode=customerCode/10;
        sampleCode=customerCode;
		while (!Myfile.eof()){
		Myfile>>sampleCode1>>uscnic>>usname>>usaddress>>usphone>>uscustomerType>>usmeterType;
		if (sampleCode==sampleCode1)
		break;}
		if (sampleCode!=sampleCode1)
		break;}}
	Myfile.close();
	}
	//end of code for generating customer's ID 
    fout<<customerCode<<' ';	//fout write the customer's info in CustomersInfo file
    sfout<<customerCode<<' ';	//sfout write the customer's info in CustomerInfosample file
	int cnicDigitCount,threeCnicCount=0;
	std::string a,b,c,searchCnic,nadraCnic;
	bool numberCheck,thirteen,nadraCnicCheck;
	std::ifstream cnicIn,nadra;
	StreamWriter^ wcnic=File::CreateText("cnic.txt");	
	String^ cnicw=textBoxcnic->Text;
	std::ifstream rcnic;
	rcnic.open("cnic.txt");
	
	while(!0){
	wcnic->Write(cnicw);
	//wcnic->Write(' ');
	wcnic->Close();
	rcnic>>cnic;
	rcnic.close();				//loop runs until the correct cnic is not entered
	nadra.open("NADRADB.txt");	//nadra file contains cnic of every customer
    //cout << "Enter Customer CNIC: ";
    //cin >> cnic;
	for (int i=0; cnic[i]!='\0'; i++){
	if (cnic[i]<48 || cnic[i]>57){         //check for correct cnic input (digits/numbers only)
	numberCheck=false;
	if(MessageBox::Show("Enter valid data.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();
	break;}
	else
	numberCheck=true;}
	cnicDigitCount=0;
	for (int i=0; cnic[i]!='\0'; i++)	   //count the number of digits in a cnic
	cnicDigitCount++;
	if (cnicDigitCount!=13){
	thirteen=false;
	if(MessageBox::Show("CNIC should be 13-digit.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();}
	else 
	thirteen=true;
	if (nadra.is_open()){				  //check if the cnic is registered in nadra file or not
	while (!nadra.eof()){
	nadra>>nadraCnic>>b>>c;
	if (cnic==nadraCnic){
	nadraCnicCheck=true;
	break;}
	else
	nadraCnicCheck=false;}
	nadra.close();}
	if (numberCheck==true && thirteen==true && nadraCnicCheck==false)
	if(MessageBox::Show("No match found for this CNIC in NADRADB file.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();
	if (numberCheck==true && thirteen==true && nadraCnicCheck==true)
	break;}
	cnicIn.open("CustomersInfo.txt");
	if(cnicIn.is_open()){
	while(!cnicIn.eof()){
	cnicIn>>a>>searchCnic>>a>>a>>a>>a>>a;
	if (cnic==searchCnic)
	threeCnicCount++;
	if (threeCnicCount>3){				  //check if meters are more than three
	if(MessageBox::Show("Not allowed! You can only have at most three meters for the same CNIC.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();
	//cout << "Enter Customer CNIC: ";	  //again ask for cnic if user enter a cnic which has been used for 3 meters already
	while(!0){
    //cin >> cnic;
	wcnic->WriteLine(cnicw);
	rcnic>>cnic;
	for (int i=0; cnic[i]!='\0'; i++){
	if (cnic[i]<48 || cnic[i]>57){						
	numberCheck=false;
	if(MessageBox::Show("Enter valid data.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();
	break;}
	else
	numberCheck=true;}
	cnicDigitCount=0;
	for (int i=0; cnic[i]!='\0'; i++)
	cnicDigitCount++;
	if (cnicDigitCount!=13){
	thirteen=false;
	if(MessageBox::Show("CNIC should be 13-digit.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();}
	else 
	thirteen=true;
	if (numberCheck==true && thirteen==true)
	break;}
	break;}}
	cnicIn.close();}
	else
	if(MessageBox::Show("File not found.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();
    fout<<cnic<<' ';
    sfout<<cnic<<' ';
	StreamWriter^ w=File::CreateText("wr.txt");
	String^ namew=textBoxname->Text;
	String^ addressw=textBoxaddress->Text;
	w->Write(namew);
	w->Write(' ');
	w->Write(addressw);
	w->Write(' ');
	std::ifstream r;
	r.open("wr.txt");
	r>>name;
	r>>address;
	r.close();
	int phDigitCount;
	bool phNumberCheck,eleven;
	StreamWriter^ wph=File::CreateText("wph.txt");
	while(!0){								//loop runs until a correct phone number is not entered
	String^ phonew=textBoxPhoneNo->Text;
	wph->WriteLine(phonew);
	wph->Close();
	std::ifstream rph;
	rph.open("wph.txt");
	rph>>phone;
	rph.close();
	for (int i=0; phone[i]!='\0'; i++){
	if (phone[i]<48 || phone[i]>57){		//check for correct phone number input (digits/numbers only)
	phNumberCheck=false;
	if(MessageBox::Show("Enter valid data.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();
	break;}
	else
	phNumberCheck=true;}
	phDigitCount=0;
	for (int i=0; phone[i]!='\0'; i++)		//count number of digits in a phone number
	phDigitCount++;
	if (phDigitCount!=11){
	eleven=false;
	if(MessageBox::Show("Phone number should be 11-digit.","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();}
	else 
	eleven=true;
	if (phNumberCheck==true && eleven==true)
	break;}
    //cout << "Enter customer type (domestic or commertial): ";
	String^ customerTypew=textBoxCtype->Text;
	StreamWriter^ wct=File::CreateText("ct.txt");
	while(!0){
	wct->WriteLine(customerTypew);
	wct->Close();
	std::ifstream rct;
	rct.open("ct.txt");
	rct>>customerType;
	rct.close();								//loop runs until correct customer type is not entered
                                         		//customer type should be either 'domestic' or 'commertial' only
	
	if (customerType=="domestic" || customerType=="commertial")
	break;
	else{
	if(MessageBox::Show("Please enter either 'domestic' or 'commertial'","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::Cancel)
	Enterbutton->PerformClick();
	}}
	String^ meterTypew=textBoxMtype->Text;
	StreamWriter^ wmt=File::CreateText("mt.txt");
	
	while(!0){								//loop runs until correct meter type is not entered
    wmt->Write(meterTypew);
	wmt->Close();
	std::ifstream rmt;
	rmt.open("mt.txt");
	rmt>>meterType;
	rmt.close();             			//meter type should be either 'single' or 'three' only
	
	if (meterType=="single" || meterType=="three")
	break;
	else{
	if(MessageBox::Show("Please enter either 'single' or 'three'","Wrong Input",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::OK)
		Enterbutton->PerformClick();
	}}
    fout<<name<<' ';
    sfout<<name<<' ';
    fout<<address<<' ';
    sfout<<address<<' ';
    fout<<phone<<' ';
    sfout<<phone<<' ';
    fout<<customerType<<' ';
    sfout<<customerType<<' ';
    fout<<meterType<<' '<<endl;
    sfout<<meterType<<' '<<endl;
    sfout.close();
    MessageBox::Show("\nRecord added sucessfully.\nYour username is: "+customerCode+"\nYour password is: "+cnicw);
	
	
        /*EmployeePage obj;
		this->Hide();
		obj.ShowDialog();*/
    //providing ID as a username and cnic as password to the customer for billing and updating tariff
			 }
};
}
#pragma warning(pop)
