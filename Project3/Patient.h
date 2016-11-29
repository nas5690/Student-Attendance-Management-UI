#pragma once
#include"Person.h"
using namespace System::IO;
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Patient
	/// </summary>
	public ref class Patient : public System::Windows::Forms::Form
	{
	public:
		Patient(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Patient(int ID,
			String^ race,
			String^ gender,
			String^ dob,
			String^ address)
		{
			this->ID = ID;
			this->race = race;
			this->gender = gender;
			this->address = address;
			this->dob = dob;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Patient()
		{
			if (components)
			{
				delete components;
			}
		}
	
	public:
	public: System::Windows::Forms::Button^  searchbtn;
	public: System::Windows::Forms::Button^  okbtn;

	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::Label^  label8;
	public: System::Windows::Forms::TextBox^  searchtxt;
	public: System::Windows::Forms::TextBox^  fnametxt;
	public: System::Windows::Forms::TextBox^  lnametxt;
	public: System::Windows::Forms::TextBox^  idtxt;
	public: System::Windows::Forms::TextBox^  addresstxt;
	public: System::Windows::Forms::RadioButton^  malerbtn;

	public: System::Windows::Forms::RadioButton^  fmalerbtn;


	public: System::Windows::Forms::ComboBox^  racecb;
	public: System::Windows::Forms::Label^  label9;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		int ID=0;
		String^ race="";
		String^ gender="";
		String^ dob="";
		String^ address="";
	public: System::Windows::Forms::Label^  label1;
	private:
	public: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::TextBox^  textBox2;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	public:
	public:

			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Patient::typeid));
			this->searchbtn = (gcnew System::Windows::Forms::Button());
			this->okbtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->searchtxt = (gcnew System::Windows::Forms::TextBox());
			this->fnametxt = (gcnew System::Windows::Forms::TextBox());
			this->lnametxt = (gcnew System::Windows::Forms::TextBox());
			this->idtxt = (gcnew System::Windows::Forms::TextBox());
			this->addresstxt = (gcnew System::Windows::Forms::TextBox());
			this->malerbtn = (gcnew System::Windows::Forms::RadioButton());
			this->fmalerbtn = (gcnew System::Windows::Forms::RadioButton());
			this->racecb = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->SuspendLayout();
			// 
			// searchbtn
			// 
			this->searchbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchbtn->Location = System::Drawing::Point(433, 64);
			this->searchbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchbtn->Name = L"searchbtn";
			this->searchbtn->Size = System::Drawing::Size(91, 32);
			this->searchbtn->TabIndex = 0;
			this->searchbtn->Text = L"Search";
			this->searchbtn->UseVisualStyleBackColor = true;
			this->searchbtn->Click += gcnew System::EventHandler(this, &Patient::searchbtn_Click);
			// 
			// okbtn
			// 
			this->okbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->okbtn->Location = System::Drawing::Point(390, 378);
			this->okbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->okbtn->Name = L"okbtn";
			this->okbtn->Size = System::Drawing::Size(91, 32);
			this->okbtn->TabIndex = 1;
			this->okbtn->Text = L"OK";
			this->okbtn->UseVisualStyleBackColor = true;
			this->okbtn->Click += gcnew System::EventHandler(this, &Patient::okbtn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(75, 262);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Gender: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(75, 232);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Major: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(75, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 21);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Student ID:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(73, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 21);
			this->label5->TabIndex = 6;
			this->label5->Text = L"First Name:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(80, 171);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 21);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Last Name:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(75, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 21);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Enter ID for search";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(141, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(297, 37);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Student Information";
			// 
			// searchtxt
			// 
			this->searchtxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchtxt->Location = System::Drawing::Point(250, 67);
			this->searchtxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchtxt->Name = L"searchtxt";
			this->searchtxt->Size = System::Drawing::Size(164, 29);
			this->searchtxt->TabIndex = 10;
			// 
			// fnametxt
			// 
			this->fnametxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fnametxt->Location = System::Drawing::Point(180, 163);
			this->fnametxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->fnametxt->Name = L"fnametxt";
			this->fnametxt->Size = System::Drawing::Size(183, 29);
			this->fnametxt->TabIndex = 11;
			// 
			// lnametxt
			// 
			this->lnametxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lnametxt->Location = System::Drawing::Point(180, 130);
			this->lnametxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lnametxt->Name = L"lnametxt";
			this->lnametxt->Size = System::Drawing::Size(183, 29);
			this->lnametxt->TabIndex = 12;
			// 
			// idtxt
			// 
			this->idtxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idtxt->Location = System::Drawing::Point(180, 197);
			this->idtxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->idtxt->Name = L"idtxt";
			this->idtxt->Size = System::Drawing::Size(183, 29);
			this->idtxt->TabIndex = 13;
			this->idtxt->TextChanged += gcnew System::EventHandler(this, &Patient::idtxt_TextChanged);
			// 
			// addresstxt
			// 
			this->addresstxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addresstxt->Location = System::Drawing::Point(180, 229);
			this->addresstxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addresstxt->Multiline = true;
			this->addresstxt->Name = L"addresstxt";
			this->addresstxt->Size = System::Drawing::Size(183, 28);
			this->addresstxt->TabIndex = 14;
			this->addresstxt->TextChanged += gcnew System::EventHandler(this, &Patient::addresstxt_TextChanged);
			// 
			// malerbtn
			// 
			this->malerbtn->AutoSize = true;
			this->malerbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->malerbtn->Location = System::Drawing::Point(180, 262);
			this->malerbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->malerbtn->Name = L"malerbtn";
			this->malerbtn->Size = System::Drawing::Size(64, 25);
			this->malerbtn->TabIndex = 16;
			this->malerbtn->TabStop = true;
			this->malerbtn->Text = L"Male";
			this->malerbtn->UseVisualStyleBackColor = true;
			this->malerbtn->CheckedChanged += gcnew System::EventHandler(this, &Patient::fmalerbtn_CheckedChanged);
			// 
			// fmalerbtn
			// 
			this->fmalerbtn->AutoSize = true;
			this->fmalerbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fmalerbtn->Location = System::Drawing::Point(282, 262);
			this->fmalerbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->fmalerbtn->Name = L"fmalerbtn";
			this->fmalerbtn->Size = System::Drawing::Size(81, 25);
			this->fmalerbtn->TabIndex = 17;
			this->fmalerbtn->TabStop = true;
			this->fmalerbtn->Text = L"Female";
			this->fmalerbtn->UseVisualStyleBackColor = true;
			this->fmalerbtn->CheckedChanged += gcnew System::EventHandler(this, &Patient::malerbtn_CheckedChanged);
			// 
			// racecb
			// 
			this->racecb->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->racecb->FormattingEnabled = true;
			this->racecb->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"African American", L"Caucasian", L"Native American",
					L"Hispanic", L"Asian", L"Other"
			});
			this->racecb->Location = System::Drawing::Point(180, 300);
			this->racecb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->racecb->Name = L"racecb";
			this->racecb->Size = System::Drawing::Size(183, 28);
			this->racecb->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(75, 300);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 21);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Race: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 342);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 21);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Dates Attended:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(180, 334);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 29);
			this->textBox1->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(180, 262);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(183, 20);
			this->textBox2->TabIndex = 22;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Patient::textBox2_TextChanged);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Patient::backgroundWorker1_DoWork);
			// 
			// Patient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(534, 431);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->racecb);
			this->Controls->Add(this->fmalerbtn);
			this->Controls->Add(this->malerbtn);
			this->Controls->Add(this->addresstxt);
			this->Controls->Add(this->idtxt);
			this->Controls->Add(this->lnametxt);
			this->Controls->Add(this->fnametxt);
			this->Controls->Add(this->searchtxt);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->okbtn);
			this->Controls->Add(this->searchbtn);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Patient";
			this->Text = L"Student Information";
			this->Load += gcnew System::EventHandler(this, &Patient::Patient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Patient_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void okbtn_Click(System::Object^  sender, System::EventArgs^  e) {

	fmalerbtn->Visible = true;
	malerbtn->Visible = true;
	textBox2->Visible = false;
	StreamWriter^ sw=File::AppendText("Patient_info.txt");
	Person per(fnametxt->Text,lnametxt->Text);
	this->ID = int::Parse(idtxt->Text);
	this->address = addresstxt->Text;
	this->race = racecb->Text;
	//this->dob = dobtxt->Text;
	sw->WriteLine(this->ID);
	sw->WriteLine(fnametxt->Text);
	sw->WriteLine(lnametxt->Text);
	sw->WriteLine(this->address);
	//sw->WriteLine(this->dob);
	sw->WriteLine(this->gender);
	sw->WriteLine(this->race);
	sw->WriteLine(this->textBox1->Text);
	sw->WriteLine();
	sw->Close();
	this->Close();
	idtxt->Text = "0";
	fnametxt->Text = "";
	lnametxt->Text = "";
	addresstxt->Text = "";
	//dobtxt->Text = "";
	//gendertxt->Text = "";
	racecb->SelectedIndex = 0;
	searchtxt->Text = "";
}
private: System::Void idtxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void fmalerbtn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->gender = "Male";
}
public: System::Void malerbtn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->gender = "Female";
}
public: System::Void searchbtn_Click(System::Object^  sender, System::EventArgs^  e) {
	StreamReader sr("patient_info.txt");
	fmalerbtn->Visible = false;
	malerbtn->Visible = false;
	textBox2->Visible = true;
	String^ line=sr.ReadLine();
	int f = 0;
	while (!sr.EndOfStream)
	{
		if (searchtxt->Text == line){
			idtxt->Text = line;
			fnametxt->Text = sr.ReadLine();
			lnametxt->Text = sr.ReadLine();
			addresstxt->Text = sr.ReadLine();
			textBox2->Text = sr.ReadLine();
			//dobtxt->Text = sr.ReadLine();
			//gendertxt->Text = sr.ReadLine();
			racecb->Text = sr.ReadLine();
			textBox1->Text = sr.ReadLine();
			f = 1;
			break;
		}
		else
			line = sr.ReadLine();
	}
	if (f == 0)
		MessageBox::Show("This student is not available","Result",MessageBoxButtons::OK);
	sr.Close();
}
private: System::Void addresstxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
}
};
}
