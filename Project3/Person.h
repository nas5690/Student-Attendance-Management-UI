#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Person
	/// </summary>
	public ref class Person : public System::Windows::Forms::Form
	{
	public:
		Person(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Person(String^ fname,String^ lname)
		{
			this->fname = fname;
			this->lname = lname;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Person()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		String^ fname;
		String^ lname;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	public: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::TextBox^  searchtxt;
	public: System::Windows::Forms::Button^  searchbtn;
	private:

			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->searchtxt = (gcnew System::Windows::Forms::TextBox());
			this->searchbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(526, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(26, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(206, 21);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Enter ID to View Student: ";
			// 
			// searchtxt
			// 
			this->searchtxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchtxt->Location = System::Drawing::Point(228, 16);
			this->searchtxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchtxt->Name = L"searchtxt";
			this->searchtxt->Size = System::Drawing::Size(164, 29);
			this->searchtxt->TabIndex = 11;
			// 
			// searchbtn
			// 
			this->searchbtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchbtn->Location = System::Drawing::Point(301, 49);
			this->searchbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchbtn->Name = L"searchbtn";
			this->searchbtn->Size = System::Drawing::Size(91, 32);
			this->searchbtn->TabIndex = 12;
			this->searchbtn->Text = L"Search";
			this->searchbtn->UseVisualStyleBackColor = true;
			// 
			// Person
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(526, 335);
			this->Controls->Add(this->searchbtn);
			this->Controls->Add(this->searchtxt);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Person";
			this->Text = L"Student Information";
			this->Load += gcnew System::EventHandler(this, &Person::Person_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Person_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
