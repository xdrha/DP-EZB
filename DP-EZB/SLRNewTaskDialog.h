#pragma once
#include <iostream>

namespace DP_EZB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for slrNewTaskDialog
	/// </summary>
	public ref class slrNewTaskDialog : public System::Windows::Forms::Form
	{
	public:
		slrNewTaskDialog(void)
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
		~slrNewTaskDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ slrPanel1;
	protected:

	protected:
	private: System::Windows::Forms::Label^ slrLabel15;
	private: System::Windows::Forms::TextBox^ slrText15;
	private: System::Windows::Forms::Label^ slrLabel14;
	private: System::Windows::Forms::TextBox^ slrText14;
	private: System::Windows::Forms::Label^ slrLabel13;
	private: System::Windows::Forms::TextBox^ slrText13;
	private: System::Windows::Forms::Label^ slrLabel12;
	private: System::Windows::Forms::TextBox^ slrText12;
	private: System::Windows::Forms::Label^ slrLabel11;
	private: System::Windows::Forms::TextBox^ slrText11;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ pocetSuradnicVektorov;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ pocetVektorov;
	private: System::Windows::Forms::Label^ LabelFirstAction;
	private: System::Windows::Forms::Panel^ bottomPanel;


	private: System::Windows::Forms::Button^ clearTaskButton;
	private: System::Windows::Forms::Button^ createButton;
	private: System::Windows::Forms::Panel^ slrPanel2;
	private: System::Windows::Forms::Label^ slrLabel25;


	private: System::Windows::Forms::TextBox^ slrText25;
	private: System::Windows::Forms::Label^ slrLabel24;


	private: System::Windows::Forms::TextBox^ slrText24;
	private: System::Windows::Forms::Label^ slrLabel23;


	private: System::Windows::Forms::TextBox^ slrText23;
	private: System::Windows::Forms::Label^ slrLabel22;


	private: System::Windows::Forms::TextBox^ slrText22;
	private: System::Windows::Forms::Label^ slrLabel21;


	private: System::Windows::Forms::TextBox^ slrText21;


	private: System::Windows::Forms::Panel^ slrPanel3;
	private: System::Windows::Forms::Label^ slrLabel35;


	private: System::Windows::Forms::TextBox^ slrText35;
	private: System::Windows::Forms::Label^ slrLabel34;


	private: System::Windows::Forms::TextBox^ slrText34;
	private: System::Windows::Forms::Label^ slrLabel33;


	private: System::Windows::Forms::TextBox^ slrText33;
	private: System::Windows::Forms::Label^ slrLabel32;


	private: System::Windows::Forms::TextBox^ slrText32;
	private: System::Windows::Forms::Label^ slrLabel31;


	private: System::Windows::Forms::TextBox^ slrText31;


	private: System::Windows::Forms::Panel^ slrPanel4;
	private: System::Windows::Forms::Label^ slrLabel45;


	private: System::Windows::Forms::TextBox^ slrText45;
	private: System::Windows::Forms::Label^ slrLabel44;


	private: System::Windows::Forms::TextBox^ slrText44;
	private: System::Windows::Forms::Label^ slrLabel43;


	private: System::Windows::Forms::TextBox^ slrText43;
	private: System::Windows::Forms::Label^ slrLabel42;


	private: System::Windows::Forms::TextBox^ slrText42;
	private: System::Windows::Forms::Label^ slrLabel41;


	private: System::Windows::Forms::TextBox^ slrText41;


	private: System::Windows::Forms::Panel^ slrPanel5;
	private: System::Windows::Forms::Label^ slrLabel55;


	private: System::Windows::Forms::TextBox^ slrText55;
	private: System::Windows::Forms::Label^ slrLabel54;


	private: System::Windows::Forms::TextBox^ slrText54;
	private: System::Windows::Forms::Label^ slrLabel53;


	private: System::Windows::Forms::TextBox^ slrText53;
	private: System::Windows::Forms::Label^ slrLabel52;


	private: System::Windows::Forms::TextBox^ slrText52;
	private: System::Windows::Forms::Label^ slrLabel51;


	private: System::Windows::Forms::TextBox^ slrText51;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   /// 
		   /// 
		   /// 
	public: Boolean created = false;
private: System::Windows::Forms::Panel^ bPanel;
public:
private: System::Windows::Forms::TextBox^ bText5;
private: System::Windows::Forms::TextBox^ bText4;
private: System::Windows::Forms::TextBox^ bText3;
private: System::Windows::Forms::TextBox^ bText2;
private: System::Windows::Forms::TextBox^ bText1;

		   void InitializeComponent(void)
		   {
			   this->slrPanel1 = (gcnew System::Windows::Forms::Panel());
			   this->slrLabel15 = (gcnew System::Windows::Forms::Label());
			   this->slrText15 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel14 = (gcnew System::Windows::Forms::Label());
			   this->slrText14 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel13 = (gcnew System::Windows::Forms::Label());
			   this->slrText13 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel12 = (gcnew System::Windows::Forms::Label());
			   this->slrText12 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel11 = (gcnew System::Windows::Forms::Label());
			   this->slrText11 = (gcnew System::Windows::Forms::TextBox());
			   this->bText1 = (gcnew System::Windows::Forms::TextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->pocetSuradnicVektorov = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->pocetVektorov = (gcnew System::Windows::Forms::NumericUpDown());
			   this->LabelFirstAction = (gcnew System::Windows::Forms::Label());
			   this->bottomPanel = (gcnew System::Windows::Forms::Panel());
			   this->createButton = (gcnew System::Windows::Forms::Button());
			   this->clearTaskButton = (gcnew System::Windows::Forms::Button());
			   this->slrPanel2 = (gcnew System::Windows::Forms::Panel());
			   this->slrLabel25 = (gcnew System::Windows::Forms::Label());
			   this->slrText25 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel24 = (gcnew System::Windows::Forms::Label());
			   this->slrText24 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel23 = (gcnew System::Windows::Forms::Label());
			   this->slrText23 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel22 = (gcnew System::Windows::Forms::Label());
			   this->slrText22 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel21 = (gcnew System::Windows::Forms::Label());
			   this->slrText21 = (gcnew System::Windows::Forms::TextBox());
			   this->bText2 = (gcnew System::Windows::Forms::TextBox());
			   this->slrPanel3 = (gcnew System::Windows::Forms::Panel());
			   this->slrLabel35 = (gcnew System::Windows::Forms::Label());
			   this->slrText35 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel34 = (gcnew System::Windows::Forms::Label());
			   this->slrText34 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel33 = (gcnew System::Windows::Forms::Label());
			   this->slrText33 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel32 = (gcnew System::Windows::Forms::Label());
			   this->slrText32 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel31 = (gcnew System::Windows::Forms::Label());
			   this->slrText31 = (gcnew System::Windows::Forms::TextBox());
			   this->bText3 = (gcnew System::Windows::Forms::TextBox());
			   this->slrPanel4 = (gcnew System::Windows::Forms::Panel());
			   this->slrLabel45 = (gcnew System::Windows::Forms::Label());
			   this->slrText45 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel44 = (gcnew System::Windows::Forms::Label());
			   this->slrText44 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel43 = (gcnew System::Windows::Forms::Label());
			   this->slrText43 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel42 = (gcnew System::Windows::Forms::Label());
			   this->slrText42 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel41 = (gcnew System::Windows::Forms::Label());
			   this->slrText41 = (gcnew System::Windows::Forms::TextBox());
			   this->bText4 = (gcnew System::Windows::Forms::TextBox());
			   this->slrPanel5 = (gcnew System::Windows::Forms::Panel());
			   this->slrLabel55 = (gcnew System::Windows::Forms::Label());
			   this->slrText55 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel54 = (gcnew System::Windows::Forms::Label());
			   this->slrText54 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel53 = (gcnew System::Windows::Forms::Label());
			   this->slrText53 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel52 = (gcnew System::Windows::Forms::Label());
			   this->slrText52 = (gcnew System::Windows::Forms::TextBox());
			   this->slrLabel51 = (gcnew System::Windows::Forms::Label());
			   this->slrText51 = (gcnew System::Windows::Forms::TextBox());
			   this->bText5 = (gcnew System::Windows::Forms::TextBox());
			   this->bPanel = (gcnew System::Windows::Forms::Panel());
			   this->slrPanel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetSuradnicVektorov))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetVektorov))->BeginInit();
			   this->bottomPanel->SuspendLayout();
			   this->slrPanel2->SuspendLayout();
			   this->slrPanel3->SuspendLayout();
			   this->slrPanel4->SuspendLayout();
			   this->slrPanel5->SuspendLayout();
			   this->bPanel->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // slrPanel1
			   // 
			   this->slrPanel1->Controls->Add(this->slrLabel15);
			   this->slrPanel1->Controls->Add(this->slrText15);
			   this->slrPanel1->Controls->Add(this->slrLabel14);
			   this->slrPanel1->Controls->Add(this->slrText14);
			   this->slrPanel1->Controls->Add(this->slrLabel13);
			   this->slrPanel1->Controls->Add(this->slrText13);
			   this->slrPanel1->Controls->Add(this->slrLabel12);
			   this->slrPanel1->Controls->Add(this->slrText12);
			   this->slrPanel1->Controls->Add(this->slrLabel11);
			   this->slrPanel1->Controls->Add(this->slrText11);
			   this->slrPanel1->Location = System::Drawing::Point(120, 142);
			   this->slrPanel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrPanel1->Name = L"slrPanel1";
			   this->slrPanel1->Size = System::Drawing::Size(474, 47);
			   this->slrPanel1->TabIndex = 2;
			   // 
			   // slrLabel15
			   // 
			   this->slrLabel15->AutoSize = true;
			   this->slrLabel15->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel15->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel15->Location = System::Drawing::Point(429, 10);
			   this->slrLabel15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel15->Name = L"slrLabel15";
			   this->slrLabel15->Size = System::Drawing::Size(34, 22);
			   this->slrLabel15->TabIndex = 10;
			   this->slrLabel15->Text = L"x =";
			   // 
			   // slrText15
			   // 
			   this->slrText15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText15->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText15->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText15->Location = System::Drawing::Point(382, 5);
			   this->slrText15->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText15->Name = L"slrText15";
			   this->slrText15->Size = System::Drawing::Size(42, 30);
			   this->slrText15->TabIndex = 6;
			   this->slrText15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText15_KeyPress);
			   this->slrText15->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText15_Leave);
			   // 
			   // slrLabel14
			   // 
			   this->slrLabel14->AutoSize = true;
			   this->slrLabel14->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel14->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel14->Location = System::Drawing::Point(334, 10);
			   this->slrLabel14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel14->Name = L"slrLabel14";
			   this->slrLabel14->Size = System::Drawing::Size(34, 22);
			   this->slrLabel14->TabIndex = 8;
			   this->slrLabel14->Text = L"x +";
			   // 
			   // slrText14
			   // 
			   this->slrText14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText14->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText14->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText14->Location = System::Drawing::Point(288, 5);
			   this->slrText14->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText14->Name = L"slrText14";
			   this->slrText14->Size = System::Drawing::Size(42, 30);
			   this->slrText14->TabIndex = 5;
			   this->slrText14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText14_KeyPress);
			   this->slrText14->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText14_Leave);
			   // 
			   // slrLabel13
			   // 
			   this->slrLabel13->AutoSize = true;
			   this->slrLabel13->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel13->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel13->Location = System::Drawing::Point(239, 10);
			   this->slrLabel13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel13->Name = L"slrLabel13";
			   this->slrLabel13->Size = System::Drawing::Size(34, 22);
			   this->slrLabel13->TabIndex = 6;
			   this->slrLabel13->Text = L"x +";
			   // 
			   // slrText13
			   // 
			   this->slrText13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText13->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText13->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText13->Location = System::Drawing::Point(190, 5);
			   this->slrText13->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText13->Name = L"slrText13";
			   this->slrText13->Size = System::Drawing::Size(42, 30);
			   this->slrText13->TabIndex = 4;
			   this->slrText13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText13_KeyPress);
			   this->slrText13->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText13_Leave);
			   // 
			   // slrLabel12
			   // 
			   this->slrLabel12->AutoSize = true;
			   this->slrLabel12->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel12->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel12->Location = System::Drawing::Point(143, 10);
			   this->slrLabel12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel12->Name = L"slrLabel12";
			   this->slrLabel12->Size = System::Drawing::Size(34, 22);
			   this->slrLabel12->TabIndex = 4;
			   this->slrLabel12->Text = L"x +";
			   // 
			   // slrText12
			   // 
			   this->slrText12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText12->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText12->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText12->Location = System::Drawing::Point(97, 5);
			   this->slrText12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText12->Name = L"slrText12";
			   this->slrText12->Size = System::Drawing::Size(42, 30);
			   this->slrText12->TabIndex = 3;
			   this->slrText12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText12_KeyPress);
			   this->slrText12->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText12_Leave);
			   // 
			   // slrLabel11
			   // 
			   this->slrLabel11->AutoSize = true;
			   this->slrLabel11->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel11->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel11->Location = System::Drawing::Point(51, 10);
			   this->slrLabel11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel11->Name = L"slrLabel11";
			   this->slrLabel11->Size = System::Drawing::Size(34, 22);
			   this->slrLabel11->TabIndex = 2;
			   this->slrLabel11->Text = L"x +";
			   // 
			   // slrText11
			   // 
			   this->slrText11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText11->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText11->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText11->Location = System::Drawing::Point(4, 5);
			   this->slrText11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText11->Name = L"slrText11";
			   this->slrText11->Size = System::Drawing::Size(42, 30);
			   this->slrText11->TabIndex = 2;
			   this->slrText11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText11_KeyPress);
			   this->slrText11->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText11_Leave);
			   // 
			   // bText1
			   // 
			   this->bText1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->bText1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->bText1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->bText1->ForeColor = System::Drawing::SystemColors::Window;
			   this->bText1->Location = System::Drawing::Point(4, 5);
			   this->bText1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->bText1->Name = L"bText1";
			   this->bText1->Size = System::Drawing::Size(42, 30);
			   this->bText1->TabIndex = 7;
			   this->bText1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::bText1_KeyPress);
			   this->bText1->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::bText1_Leave);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)));
			   this->label3->ForeColor = System::Drawing::SystemColors::Window;
			   this->label3->Location = System::Drawing::Point(20, 111);
			   this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(370, 22);
			   this->label3->TabIndex = 11;
			   this->label3->Text = L"3. Zadaj koeficienty neznámych v rovniciach:";
			   // 
			   // pocetSuradnicVektorov
			   // 
			   this->pocetSuradnicVektorov->AllowDrop = true;
			   this->pocetSuradnicVektorov->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->pocetSuradnicVektorov->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->pocetSuradnicVektorov->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pocetSuradnicVektorov->ForeColor = System::Drawing::SystemColors::Window;
			   this->pocetSuradnicVektorov->Location = System::Drawing::Point(296, 64);
			   this->pocetSuradnicVektorov->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->pocetSuradnicVektorov->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			   this->pocetSuradnicVektorov->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			   this->pocetSuradnicVektorov->Name = L"pocetSuradnicVektorov";
			   this->pocetSuradnicVektorov->ReadOnly = true;
			   this->pocetSuradnicVektorov->Size = System::Drawing::Size(73, 30);
			   this->pocetSuradnicVektorov->TabIndex = 1;
			   this->pocetSuradnicVektorov->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			   this->pocetSuradnicVektorov->ValueChanged += gcnew System::EventHandler(this, &slrNewTaskDialog::pocetSuradnicVektorov_ValueChanged);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->ForeColor = System::Drawing::SystemColors::Window;
			   this->label2->Location = System::Drawing::Point(20, 66);
			   this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(223, 22);
			   this->label2->TabIndex = 9;
			   this->label2->Text = L"2. Zadaj počet neznámych:";
			   // 
			   // pocetVektorov
			   // 
			   this->pocetVektorov->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->pocetVektorov->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->pocetVektorov->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pocetVektorov->ForeColor = System::Drawing::SystemColors::Window;
			   this->pocetVektorov->Location = System::Drawing::Point(296, 20);
			   this->pocetVektorov->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->pocetVektorov->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			   this->pocetVektorov->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			   this->pocetVektorov->Name = L"pocetVektorov";
			   this->pocetVektorov->ReadOnly = true;
			   this->pocetVektorov->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   this->pocetVektorov->Size = System::Drawing::Size(73, 30);
			   this->pocetVektorov->TabIndex = 0;
			   this->pocetVektorov->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			   this->pocetVektorov->ValueChanged += gcnew System::EventHandler(this, &slrNewTaskDialog::pocetVektorov_ValueChanged);
			   // 
			   // LabelFirstAction
			   // 
			   this->LabelFirstAction->AutoSize = true;
			   this->LabelFirstAction->ForeColor = System::Drawing::SystemColors::Window;
			   this->LabelFirstAction->Location = System::Drawing::Point(20, 20);
			   this->LabelFirstAction->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->LabelFirstAction->Name = L"LabelFirstAction";
			   this->LabelFirstAction->Size = System::Drawing::Size(182, 22);
			   this->LabelFirstAction->TabIndex = 7;
			   this->LabelFirstAction->Text = L"1. Zadaj počet rovníc:";
			   // 
			   // bottomPanel
			   // 
			   this->bottomPanel->Controls->Add(this->createButton);
			   this->bottomPanel->Controls->Add(this->clearTaskButton);
			   this->bottomPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->bottomPanel->Location = System::Drawing::Point(0, 483);
			   this->bottomPanel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->bottomPanel->Name = L"bottomPanel";
			   this->bottomPanel->Size = System::Drawing::Size(674, 40);
			   this->bottomPanel->TabIndex = 13;
			   // 
			   // createButton
			   // 
			   this->createButton->BackColor = System::Drawing::Color::MediumSeaGreen;
			   this->createButton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->createButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			   this->createButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->createButton->ForeColor = System::Drawing::SystemColors::Window;
			   this->createButton->Location = System::Drawing::Point(431, -1);
			   this->createButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->createButton->Name = L"createButton";
			   this->createButton->Size = System::Drawing::Size(229, 40);
			   this->createButton->TabIndex = 29;
			   this->createButton->Text = L"Vytvoriť tabuľku EZB";
			   this->createButton->UseVisualStyleBackColor = false;
			   this->createButton->Click += gcnew System::EventHandler(this, &slrNewTaskDialog::createButton_Click);
			   // 
			   // clearTaskButton
			   // 
			   this->clearTaskButton->BackColor = System::Drawing::Color::Crimson;
			   this->clearTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->clearTaskButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			   this->clearTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->clearTaskButton->ForeColor = System::Drawing::SystemColors::Window;
			   this->clearTaskButton->Location = System::Drawing::Point(271, -1);
			   this->clearTaskButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->clearTaskButton->Name = L"clearTaskButton";
			   this->clearTaskButton->Size = System::Drawing::Size(117, 40);
			   this->clearTaskButton->TabIndex = 28;
			   this->clearTaskButton->Text = L"❌ Zmazať";
			   this->clearTaskButton->UseVisualStyleBackColor = false;
			   this->clearTaskButton->Click += gcnew System::EventHandler(this, &slrNewTaskDialog::clearTaskButton_Click);
			   // 
			   // slrPanel2
			   // 
			   this->slrPanel2->Controls->Add(this->slrLabel25);
			   this->slrPanel2->Controls->Add(this->slrText25);
			   this->slrPanel2->Controls->Add(this->slrLabel24);
			   this->slrPanel2->Controls->Add(this->slrText24);
			   this->slrPanel2->Controls->Add(this->slrLabel23);
			   this->slrPanel2->Controls->Add(this->slrText23);
			   this->slrPanel2->Controls->Add(this->slrLabel22);
			   this->slrPanel2->Controls->Add(this->slrText22);
			   this->slrPanel2->Controls->Add(this->slrLabel21);
			   this->slrPanel2->Controls->Add(this->slrText21);
			   this->slrPanel2->Location = System::Drawing::Point(120, 200);
			   this->slrPanel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrPanel2->Name = L"slrPanel2";
			   this->slrPanel2->Size = System::Drawing::Size(474, 47);
			   this->slrPanel2->TabIndex = 3;
			   // 
			   // slrLabel25
			   // 
			   this->slrLabel25->AutoSize = true;
			   this->slrLabel25->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel25->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel25->Location = System::Drawing::Point(429, 10);
			   this->slrLabel25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel25->Name = L"slrLabel25";
			   this->slrLabel25->Size = System::Drawing::Size(34, 22);
			   this->slrLabel25->TabIndex = 10;
			   this->slrLabel25->Text = L"x =";
			   // 
			   // slrText25
			   // 
			   this->slrText25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText25->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText25->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText25->Location = System::Drawing::Point(382, 5);
			   this->slrText25->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText25->Name = L"slrText25";
			   this->slrText25->Size = System::Drawing::Size(42, 30);
			   this->slrText25->TabIndex = 11;
			   this->slrText25->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText25_KeyPress);
			   this->slrText25->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText25_Leave);
			   // 
			   // slrLabel24
			   // 
			   this->slrLabel24->AutoSize = true;
			   this->slrLabel24->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel24->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel24->Location = System::Drawing::Point(334, 10);
			   this->slrLabel24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel24->Name = L"slrLabel24";
			   this->slrLabel24->Size = System::Drawing::Size(34, 22);
			   this->slrLabel24->TabIndex = 8;
			   this->slrLabel24->Text = L"x +";
			   // 
			   // slrText24
			   // 
			   this->slrText24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText24->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText24->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText24->Location = System::Drawing::Point(288, 5);
			   this->slrText24->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText24->Name = L"slrText24";
			   this->slrText24->Size = System::Drawing::Size(42, 30);
			   this->slrText24->TabIndex = 10;
			   this->slrText24->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText24_KeyPress);
			   this->slrText24->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText24_Leave);
			   // 
			   // slrLabel23
			   // 
			   this->slrLabel23->AutoSize = true;
			   this->slrLabel23->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel23->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel23->Location = System::Drawing::Point(239, 10);
			   this->slrLabel23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel23->Name = L"slrLabel23";
			   this->slrLabel23->Size = System::Drawing::Size(34, 22);
			   this->slrLabel23->TabIndex = 6;
			   this->slrLabel23->Text = L"x +";
			   // 
			   // slrText23
			   // 
			   this->slrText23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText23->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText23->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText23->Location = System::Drawing::Point(190, 5);
			   this->slrText23->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText23->Name = L"slrText23";
			   this->slrText23->Size = System::Drawing::Size(42, 30);
			   this->slrText23->TabIndex = 9;
			   this->slrText23->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText23_KeyPress);
			   this->slrText23->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText23_Leave);
			   // 
			   // slrLabel22
			   // 
			   this->slrLabel22->AutoSize = true;
			   this->slrLabel22->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel22->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel22->Location = System::Drawing::Point(143, 10);
			   this->slrLabel22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel22->Name = L"slrLabel22";
			   this->slrLabel22->Size = System::Drawing::Size(34, 22);
			   this->slrLabel22->TabIndex = 4;
			   this->slrLabel22->Text = L"x +";
			   // 
			   // slrText22
			   // 
			   this->slrText22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText22->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText22->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText22->Location = System::Drawing::Point(97, 5);
			   this->slrText22->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText22->Name = L"slrText22";
			   this->slrText22->Size = System::Drawing::Size(42, 30);
			   this->slrText22->TabIndex = 8;
			   this->slrText22->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText22_KeyPress);
			   this->slrText22->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText22_Leave);
			   // 
			   // slrLabel21
			   // 
			   this->slrLabel21->AutoSize = true;
			   this->slrLabel21->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel21->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel21->Location = System::Drawing::Point(51, 10);
			   this->slrLabel21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel21->Name = L"slrLabel21";
			   this->slrLabel21->Size = System::Drawing::Size(34, 22);
			   this->slrLabel21->TabIndex = 2;
			   this->slrLabel21->Text = L"x +";
			   // 
			   // slrText21
			   // 
			   this->slrText21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText21->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText21->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText21->Location = System::Drawing::Point(4, 5);
			   this->slrText21->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText21->Name = L"slrText21";
			   this->slrText21->Size = System::Drawing::Size(42, 30);
			   this->slrText21->TabIndex = 7;
			   this->slrText21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText21_KeyPress);
			   this->slrText21->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText21_Leave);
			   // 
			   // bText2
			   // 
			   this->bText2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->bText2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->bText2->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->bText2->ForeColor = System::Drawing::SystemColors::Window;
			   this->bText2->Location = System::Drawing::Point(4, 63);
			   this->bText2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->bText2->Name = L"bText2";
			   this->bText2->Size = System::Drawing::Size(42, 30);
			   this->bText2->TabIndex = 12;
			   this->bText2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::bText2_KeyPress);
			   this->bText2->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::bText2_Leave);
			   // 
			   // slrPanel3
			   // 
			   this->slrPanel3->Controls->Add(this->slrLabel35);
			   this->slrPanel3->Controls->Add(this->slrText35);
			   this->slrPanel3->Controls->Add(this->slrLabel34);
			   this->slrPanel3->Controls->Add(this->slrText34);
			   this->slrPanel3->Controls->Add(this->slrLabel33);
			   this->slrPanel3->Controls->Add(this->slrText33);
			   this->slrPanel3->Controls->Add(this->slrLabel32);
			   this->slrPanel3->Controls->Add(this->slrText32);
			   this->slrPanel3->Controls->Add(this->slrLabel31);
			   this->slrPanel3->Controls->Add(this->slrText31);
			   this->slrPanel3->Location = System::Drawing::Point(120, 258);
			   this->slrPanel3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrPanel3->Name = L"slrPanel3";
			   this->slrPanel3->Size = System::Drawing::Size(474, 47);
			   this->slrPanel3->TabIndex = 4;
			   // 
			   // slrLabel35
			   // 
			   this->slrLabel35->AutoSize = true;
			   this->slrLabel35->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel35->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel35->Location = System::Drawing::Point(429, 10);
			   this->slrLabel35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel35->Name = L"slrLabel35";
			   this->slrLabel35->Size = System::Drawing::Size(34, 22);
			   this->slrLabel35->TabIndex = 10;
			   this->slrLabel35->Text = L"x =";
			   // 
			   // slrText35
			   // 
			   this->slrText35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText35->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText35->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText35->Location = System::Drawing::Point(382, 5);
			   this->slrText35->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText35->Name = L"slrText35";
			   this->slrText35->Size = System::Drawing::Size(42, 30);
			   this->slrText35->TabIndex = 16;
			   this->slrText35->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText35_KeyPress);
			   this->slrText35->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText35_Leave);
			   // 
			   // slrLabel34
			   // 
			   this->slrLabel34->AutoSize = true;
			   this->slrLabel34->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel34->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel34->Location = System::Drawing::Point(334, 10);
			   this->slrLabel34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel34->Name = L"slrLabel34";
			   this->slrLabel34->Size = System::Drawing::Size(34, 22);
			   this->slrLabel34->TabIndex = 8;
			   this->slrLabel34->Text = L"x +";
			   // 
			   // slrText34
			   // 
			   this->slrText34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText34->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText34->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText34->Location = System::Drawing::Point(288, 5);
			   this->slrText34->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText34->Name = L"slrText34";
			   this->slrText34->Size = System::Drawing::Size(42, 30);
			   this->slrText34->TabIndex = 15;
			   this->slrText34->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText34_KeyPress);
			   this->slrText34->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText34_Leave);
			   // 
			   // slrLabel33
			   // 
			   this->slrLabel33->AutoSize = true;
			   this->slrLabel33->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel33->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel33->Location = System::Drawing::Point(239, 10);
			   this->slrLabel33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel33->Name = L"slrLabel33";
			   this->slrLabel33->Size = System::Drawing::Size(34, 22);
			   this->slrLabel33->TabIndex = 6;
			   this->slrLabel33->Text = L"x +";
			   // 
			   // slrText33
			   // 
			   this->slrText33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText33->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText33->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText33->Location = System::Drawing::Point(190, 5);
			   this->slrText33->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText33->Name = L"slrText33";
			   this->slrText33->Size = System::Drawing::Size(42, 30);
			   this->slrText33->TabIndex = 14;
			   this->slrText33->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText33_KeyPress);
			   this->slrText33->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText33_Leave);
			   // 
			   // slrLabel32
			   // 
			   this->slrLabel32->AutoSize = true;
			   this->slrLabel32->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel32->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel32->Location = System::Drawing::Point(143, 10);
			   this->slrLabel32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel32->Name = L"slrLabel32";
			   this->slrLabel32->Size = System::Drawing::Size(34, 22);
			   this->slrLabel32->TabIndex = 4;
			   this->slrLabel32->Text = L"x +";
			   // 
			   // slrText32
			   // 
			   this->slrText32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText32->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText32->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText32->Location = System::Drawing::Point(97, 5);
			   this->slrText32->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText32->Name = L"slrText32";
			   this->slrText32->Size = System::Drawing::Size(42, 30);
			   this->slrText32->TabIndex = 13;
			   this->slrText32->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText32_KeyPress);
			   this->slrText32->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText32_Leave);
			   // 
			   // slrLabel31
			   // 
			   this->slrLabel31->AutoSize = true;
			   this->slrLabel31->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel31->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel31->Location = System::Drawing::Point(51, 10);
			   this->slrLabel31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel31->Name = L"slrLabel31";
			   this->slrLabel31->Size = System::Drawing::Size(34, 22);
			   this->slrLabel31->TabIndex = 2;
			   this->slrLabel31->Text = L"x +";
			   // 
			   // slrText31
			   // 
			   this->slrText31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText31->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText31->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText31->Location = System::Drawing::Point(4, 5);
			   this->slrText31->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText31->Name = L"slrText31";
			   this->slrText31->Size = System::Drawing::Size(42, 30);
			   this->slrText31->TabIndex = 12;
			   this->slrText31->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText31_KeyPress);
			   this->slrText31->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText31_Leave);
			   // 
			   // bText3
			   // 
			   this->bText3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->bText3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->bText3->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->bText3->ForeColor = System::Drawing::SystemColors::Window;
			   this->bText3->Location = System::Drawing::Point(4, 120);
			   this->bText3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->bText3->Name = L"bText3";
			   this->bText3->Size = System::Drawing::Size(42, 30);
			   this->bText3->TabIndex = 13;
			   this->bText3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::bText3_KeyPress);
			   this->bText3->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::bText3_Leave);
			   // 
			   // slrPanel4
			   // 
			   this->slrPanel4->Controls->Add(this->slrLabel45);
			   this->slrPanel4->Controls->Add(this->slrText45);
			   this->slrPanel4->Controls->Add(this->slrLabel44);
			   this->slrPanel4->Controls->Add(this->slrText44);
			   this->slrPanel4->Controls->Add(this->slrLabel43);
			   this->slrPanel4->Controls->Add(this->slrText43);
			   this->slrPanel4->Controls->Add(this->slrLabel42);
			   this->slrPanel4->Controls->Add(this->slrText42);
			   this->slrPanel4->Controls->Add(this->slrLabel41);
			   this->slrPanel4->Controls->Add(this->slrText41);
			   this->slrPanel4->Location = System::Drawing::Point(120, 315);
			   this->slrPanel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrPanel4->Name = L"slrPanel4";
			   this->slrPanel4->Size = System::Drawing::Size(474, 47);
			   this->slrPanel4->TabIndex = 5;
			   // 
			   // slrLabel45
			   // 
			   this->slrLabel45->AutoSize = true;
			   this->slrLabel45->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel45->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel45->Location = System::Drawing::Point(429, 10);
			   this->slrLabel45->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel45->Name = L"slrLabel45";
			   this->slrLabel45->Size = System::Drawing::Size(34, 22);
			   this->slrLabel45->TabIndex = 10;
			   this->slrLabel45->Text = L"x =";
			   // 
			   // slrText45
			   // 
			   this->slrText45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText45->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText45->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText45->Location = System::Drawing::Point(382, 5);
			   this->slrText45->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText45->Name = L"slrText45";
			   this->slrText45->Size = System::Drawing::Size(42, 30);
			   this->slrText45->TabIndex = 21;
			   this->slrText45->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText45_KeyPress);
			   this->slrText45->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText45_Leave);
			   // 
			   // slrLabel44
			   // 
			   this->slrLabel44->AutoSize = true;
			   this->slrLabel44->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel44->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel44->Location = System::Drawing::Point(334, 10);
			   this->slrLabel44->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel44->Name = L"slrLabel44";
			   this->slrLabel44->Size = System::Drawing::Size(34, 22);
			   this->slrLabel44->TabIndex = 8;
			   this->slrLabel44->Text = L"x +";
			   // 
			   // slrText44
			   // 
			   this->slrText44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText44->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText44->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText44->Location = System::Drawing::Point(288, 5);
			   this->slrText44->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText44->Name = L"slrText44";
			   this->slrText44->Size = System::Drawing::Size(42, 30);
			   this->slrText44->TabIndex = 20;
			   this->slrText44->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText44_KeyPress);
			   this->slrText44->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText44_Leave);
			   // 
			   // slrLabel43
			   // 
			   this->slrLabel43->AutoSize = true;
			   this->slrLabel43->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel43->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel43->Location = System::Drawing::Point(239, 10);
			   this->slrLabel43->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel43->Name = L"slrLabel43";
			   this->slrLabel43->Size = System::Drawing::Size(34, 22);
			   this->slrLabel43->TabIndex = 6;
			   this->slrLabel43->Text = L"x +";
			   // 
			   // slrText43
			   // 
			   this->slrText43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText43->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText43->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText43->Location = System::Drawing::Point(190, 5);
			   this->slrText43->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText43->Name = L"slrText43";
			   this->slrText43->Size = System::Drawing::Size(42, 30);
			   this->slrText43->TabIndex = 19;
			   this->slrText43->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText43_KeyPress);
			   this->slrText43->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText43_Leave);
			   // 
			   // slrLabel42
			   // 
			   this->slrLabel42->AutoSize = true;
			   this->slrLabel42->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel42->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel42->Location = System::Drawing::Point(143, 10);
			   this->slrLabel42->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel42->Name = L"slrLabel42";
			   this->slrLabel42->Size = System::Drawing::Size(34, 22);
			   this->slrLabel42->TabIndex = 4;
			   this->slrLabel42->Text = L"x +";
			   // 
			   // slrText42
			   // 
			   this->slrText42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText42->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText42->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText42->Location = System::Drawing::Point(97, 5);
			   this->slrText42->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText42->Name = L"slrText42";
			   this->slrText42->Size = System::Drawing::Size(42, 30);
			   this->slrText42->TabIndex = 18;
			   this->slrText42->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText42_KeyPress);
			   this->slrText42->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText42_Leave);
			   // 
			   // slrLabel41
			   // 
			   this->slrLabel41->AutoSize = true;
			   this->slrLabel41->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel41->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel41->Location = System::Drawing::Point(51, 10);
			   this->slrLabel41->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel41->Name = L"slrLabel41";
			   this->slrLabel41->Size = System::Drawing::Size(34, 22);
			   this->slrLabel41->TabIndex = 2;
			   this->slrLabel41->Text = L"x +";
			   // 
			   // slrText41
			   // 
			   this->slrText41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText41->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText41->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText41->Location = System::Drawing::Point(4, 5);
			   this->slrText41->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText41->Name = L"slrText41";
			   this->slrText41->Size = System::Drawing::Size(42, 30);
			   this->slrText41->TabIndex = 17;
			   this->slrText41->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText41_KeyPress);
			   this->slrText41->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText41_Leave);
			   // 
			   // bText4
			   // 
			   this->bText4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->bText4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->bText4->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->bText4->ForeColor = System::Drawing::SystemColors::Window;
			   this->bText4->Location = System::Drawing::Point(4, 178);
			   this->bText4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->bText4->Name = L"bText4";
			   this->bText4->Size = System::Drawing::Size(42, 30);
			   this->bText4->TabIndex = 14;
			   this->bText4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::bText4_KeyPress);
			   this->bText4->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::bText4_Leave);
			   // 
			   // slrPanel5
			   // 
			   this->slrPanel5->Controls->Add(this->slrLabel55);
			   this->slrPanel5->Controls->Add(this->slrText55);
			   this->slrPanel5->Controls->Add(this->slrLabel54);
			   this->slrPanel5->Controls->Add(this->slrText54);
			   this->slrPanel5->Controls->Add(this->slrLabel53);
			   this->slrPanel5->Controls->Add(this->slrText53);
			   this->slrPanel5->Controls->Add(this->slrLabel52);
			   this->slrPanel5->Controls->Add(this->slrText52);
			   this->slrPanel5->Controls->Add(this->slrLabel51);
			   this->slrPanel5->Controls->Add(this->slrText51);
			   this->slrPanel5->Location = System::Drawing::Point(120, 373);
			   this->slrPanel5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrPanel5->Name = L"slrPanel5";
			   this->slrPanel5->Size = System::Drawing::Size(474, 47);
			   this->slrPanel5->TabIndex = 6;
			   // 
			   // slrLabel55
			   // 
			   this->slrLabel55->AutoSize = true;
			   this->slrLabel55->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel55->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel55->Location = System::Drawing::Point(429, 10);
			   this->slrLabel55->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel55->Name = L"slrLabel55";
			   this->slrLabel55->Size = System::Drawing::Size(34, 22);
			   this->slrLabel55->TabIndex = 10;
			   this->slrLabel55->Text = L"x =";
			   // 
			   // slrText55
			   // 
			   this->slrText55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText55->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText55->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText55->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText55->Location = System::Drawing::Point(382, 5);
			   this->slrText55->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText55->Name = L"slrText55";
			   this->slrText55->Size = System::Drawing::Size(42, 30);
			   this->slrText55->TabIndex = 26;
			   this->slrText55->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText55_KeyPress);
			   this->slrText55->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText55_Leave);
			   // 
			   // slrLabel54
			   // 
			   this->slrLabel54->AutoSize = true;
			   this->slrLabel54->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel54->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel54->Location = System::Drawing::Point(334, 10);
			   this->slrLabel54->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel54->Name = L"slrLabel54";
			   this->slrLabel54->Size = System::Drawing::Size(34, 22);
			   this->slrLabel54->TabIndex = 8;
			   this->slrLabel54->Text = L"x +";
			   // 
			   // slrText54
			   // 
			   this->slrText54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText54->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText54->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText54->Location = System::Drawing::Point(288, 5);
			   this->slrText54->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText54->Name = L"slrText54";
			   this->slrText54->Size = System::Drawing::Size(42, 30);
			   this->slrText54->TabIndex = 25;
			   this->slrText54->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText54_KeyPress);
			   this->slrText54->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText54_Leave);
			   // 
			   // slrLabel53
			   // 
			   this->slrLabel53->AutoSize = true;
			   this->slrLabel53->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel53->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel53->Location = System::Drawing::Point(239, 10);
			   this->slrLabel53->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel53->Name = L"slrLabel53";
			   this->slrLabel53->Size = System::Drawing::Size(34, 22);
			   this->slrLabel53->TabIndex = 6;
			   this->slrLabel53->Text = L"x +";
			   // 
			   // slrText53
			   // 
			   this->slrText53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText53->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText53->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText53->Location = System::Drawing::Point(190, 5);
			   this->slrText53->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText53->Name = L"slrText53";
			   this->slrText53->Size = System::Drawing::Size(42, 30);
			   this->slrText53->TabIndex = 24;
			   this->slrText53->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText53_KeyPress);
			   this->slrText53->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText53_Leave);
			   // 
			   // slrLabel52
			   // 
			   this->slrLabel52->AutoSize = true;
			   this->slrLabel52->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel52->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel52->Location = System::Drawing::Point(143, 10);
			   this->slrLabel52->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel52->Name = L"slrLabel52";
			   this->slrLabel52->Size = System::Drawing::Size(34, 22);
			   this->slrLabel52->TabIndex = 4;
			   this->slrLabel52->Text = L"x +";
			   // 
			   // slrText52
			   // 
			   this->slrText52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText52->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText52->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText52->Location = System::Drawing::Point(97, 5);
			   this->slrText52->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText52->Name = L"slrText52";
			   this->slrText52->Size = System::Drawing::Size(42, 30);
			   this->slrText52->TabIndex = 23;
			   this->slrText52->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText52_KeyPress);
			   this->slrText52->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText52_Leave);
			   // 
			   // slrLabel51
			   // 
			   this->slrLabel51->AutoSize = true;
			   this->slrLabel51->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->slrLabel51->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrLabel51->Location = System::Drawing::Point(51, 10);
			   this->slrLabel51->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->slrLabel51->Name = L"slrLabel51";
			   this->slrLabel51->Size = System::Drawing::Size(34, 22);
			   this->slrLabel51->TabIndex = 2;
			   this->slrLabel51->Text = L"x +";
			   // 
			   // slrText51
			   // 
			   this->slrText51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->slrText51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->slrText51->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->slrText51->ForeColor = System::Drawing::SystemColors::Window;
			   this->slrText51->Location = System::Drawing::Point(4, 5);
			   this->slrText51->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->slrText51->Name = L"slrText51";
			   this->slrText51->Size = System::Drawing::Size(42, 30);
			   this->slrText51->TabIndex = 22;
			   this->slrText51->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::slrText51_KeyPress);
			   this->slrText51->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::slrText51_Leave);
			   // 
			   // bText5
			   // 
			   this->bText5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->bText5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->bText5->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->bText5->ForeColor = System::Drawing::SystemColors::Window;
			   this->bText5->Location = System::Drawing::Point(4, 236);
			   this->bText5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->bText5->Name = L"bText5";
			   this->bText5->Size = System::Drawing::Size(42, 30);
			   this->bText5->TabIndex = 15;
			   this->bText5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &slrNewTaskDialog::bText5_KeyPress);
			   this->bText5->Leave += gcnew System::EventHandler(this, &slrNewTaskDialog::bText5_Leave);
			   // 
			   // bPanel
			   // 
			   this->bPanel->Controls->Add(this->bText5);
			   this->bPanel->Controls->Add(this->bText4);
			   this->bPanel->Controls->Add(this->bText3);
			   this->bPanel->Controls->Add(this->bText2);
			   this->bPanel->Controls->Add(this->bText1);
			   this->bPanel->Location = System::Drawing::Point(591, 142);
			   this->bPanel->Name = L"bPanel";
			   this->bPanel->Size = System::Drawing::Size(58, 278);
			   this->bPanel->TabIndex = 14;
			   // 
			   // slrNewTaskDialog
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)));
			   this->ClientSize = System::Drawing::Size(674, 523);
			   this->Controls->Add(this->bPanel);
			   this->Controls->Add(this->slrPanel5);
			   this->Controls->Add(this->slrPanel4);
			   this->Controls->Add(this->slrPanel3);
			   this->Controls->Add(this->slrPanel2);
			   this->Controls->Add(this->bottomPanel);
			   this->Controls->Add(this->slrPanel1);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->pocetSuradnicVektorov);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->pocetVektorov);
			   this->Controls->Add(this->LabelFirstAction);
			   this->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->Name = L"slrNewTaskDialog";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			   this->Text = L"Nový výpočet";
			   this->slrPanel1->ResumeLayout(false);
			   this->slrPanel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetSuradnicVektorov))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetVektorov))->EndInit();
			   this->bottomPanel->ResumeLayout(false);
			   this->slrPanel2->ResumeLayout(false);
			   this->slrPanel2->PerformLayout();
			   this->slrPanel3->ResumeLayout(false);
			   this->slrPanel3->PerformLayout();
			   this->slrPanel4->ResumeLayout(false);
			   this->slrPanel4->PerformLayout();
			   this->slrPanel5->ResumeLayout(false);
			   this->slrPanel5->PerformLayout();
			   this->bPanel->ResumeLayout(false);
			   this->bPanel->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	public: int getPocetRovnic() {
		return (int)this->pocetVektorov->Value;
	}

	public: int getPocetZloziekRovnic() {

		return (int)this->pocetSuradnicVektorov->Value;
	}

	public: int getZeros() { //nulove B
		if ((pocetVektorov->Value == 2 && bText1->Text == "0" && bText2->Text == "0") ||
			(pocetVektorov->Value == 3 && bText1->Text == "0" && bText2->Text == "0" && bText3->Text == "0") ||
			(pocetVektorov->Value == 4 && bText1->Text == "0" && bText2->Text == "0" && bText3->Text == "0" && bText4->Text == "0") ||
			(pocetVektorov->Value == 5 && bText1->Text == "0" && bText2->Text == "0" && bText3->Text == "0" && bText4->Text == "0" && bText5->Text == "0"))
			return 0;
		else
			return 1; // o stlpec navyse
	}

	public: double** getMatrix() {
		double** matrix = 0;
		matrix = new double* [(int)this->pocetVektorov->Value];

		for (int h = 0; h < (int)this->pocetVektorov->Value; h++)
		{
			matrix[h] = new double[(int)this->pocetSuradnicVektorov->Value + getZeros()];

		}

		matrix[0][0] = System::Convert::ToDouble(slrText11->Text);
		matrix[0][1] = System::Convert::ToDouble(slrText12->Text);
		matrix[1][0] = System::Convert::ToDouble(slrText21->Text);
		matrix[1][1] = System::Convert::ToDouble(slrText22->Text);


		try {

			if (slrText13->Text != "") matrix[0][2] = System::Convert::ToDouble(slrText13->Text);
			if (slrText14->Text != "") matrix[0][3] = System::Convert::ToDouble(slrText14->Text);
			if (slrText15->Text != "") matrix[0][4] = System::Convert::ToDouble(slrText15->Text);

			if (slrText23->Text != "") matrix[1][2] = System::Convert::ToDouble(slrText23->Text);
			if (slrText24->Text != "") matrix[1][3] = System::Convert::ToDouble(slrText24->Text);
			if (slrText25->Text != "") matrix[1][4] = System::Convert::ToDouble(slrText25->Text);

			if (slrText31->Text != "") matrix[2][0] = System::Convert::ToDouble(slrText31->Text);
			if (slrText32->Text != "") matrix[2][1] = System::Convert::ToDouble(slrText32->Text);
			if (slrText33->Text != "") matrix[2][2] = System::Convert::ToDouble(slrText33->Text);
			if (slrText34->Text != "") matrix[2][3] = System::Convert::ToDouble(slrText34->Text);
			if (slrText35->Text != "") matrix[2][4] = System::Convert::ToDouble(slrText35->Text);

			if (slrText41->Text != "") matrix[3][0] = System::Convert::ToDouble(slrText41->Text);
			if (slrText42->Text != "") matrix[3][1] = System::Convert::ToDouble(slrText42->Text);
			if (slrText43->Text != "") matrix[3][2] = System::Convert::ToDouble(slrText43->Text);
			if (slrText44->Text != "") matrix[3][3] = System::Convert::ToDouble(slrText44->Text);
			if (slrText45->Text != "") matrix[3][4] = System::Convert::ToDouble(slrText45->Text);

			if (slrText51->Text != "") matrix[4][0] = System::Convert::ToDouble(slrText51->Text);
			if (slrText52->Text != "") matrix[4][1] = System::Convert::ToDouble(slrText52->Text);
			if (slrText53->Text != "") matrix[4][2] = System::Convert::ToDouble(slrText53->Text);
			if (slrText54->Text != "") matrix[4][3] = System::Convert::ToDouble(slrText54->Text);
			if (slrText55->Text != "") matrix[4][4] = System::Convert::ToDouble(slrText55->Text);

			if (bText1->Text != "") matrix[0][System::Convert::ToInt32(pocetSuradnicVektorov->Value)] = System::Convert::ToDouble(bText1->Text);
			if (bText2->Text != "") matrix[1][System::Convert::ToInt32(pocetSuradnicVektorov->Value)] = System::Convert::ToDouble(bText2->Text);
			if (bText3->Text != "") matrix[2][System::Convert::ToInt32(pocetSuradnicVektorov->Value)] = System::Convert::ToDouble(bText3->Text);
			if (bText4->Text != "") matrix[3][System::Convert::ToInt32(pocetSuradnicVektorov->Value)] = System::Convert::ToDouble(bText4->Text);
			if (bText5->Text != "") matrix[4][System::Convert::ToInt32(pocetSuradnicVektorov->Value)] = System::Convert::ToDouble(bText5->Text);
		
		}
		catch (...) {
		}


		return matrix;
	}

	private: String^ subscript(String^ c) {
		if (c == "0") return "₀";
		if (c == "1") return "₁";
		if (c == "2") return "₂";
		if (c == "3") return "₃";
		if (c == "4") return "₄";
		if (c == "5") return "₅";
		if (c == "6") return "₆";
		if (c == "7") return "₇";
		if (c == "8") return "₈";
		if (c == "9") return "₉";
		return "";
	}

	private: Boolean getVsetkyVyplnene() {
			if (slrText11->Text == "") return false;
			if (slrText12->Text == "") return false;
			if (slrText21->Text == "") return false;
			if (slrText22->Text == "") return false;

			if (bText1->Text == "") return false;
			if (bText2->Text == "") return false;


			if (pocetVektorov->Value == 3) {

				if (bText3->Text == "") return false;

				if (slrText31->Text == "") return false;
				if (slrText32->Text == "") return false;
				if (pocetSuradnicVektorov->Value == 3) {
					if (slrText13->Text == "") return false;
					if (slrText23->Text == "") return false;
					if (slrText33->Text == "") return false;
				}

				if (pocetSuradnicVektorov->Value == 4) {
					if (slrText13->Text == "") return false;
					if (slrText23->Text == "") return false;
					if (slrText33->Text == "") return false;
					if (slrText34->Text == "") return false;
				}
				if (pocetSuradnicVektorov->Value == 5) {
					if (slrText13->Text == "") return false;
					if (slrText23->Text == "") return false;
					if (slrText33->Text == "") return false;
					if (slrText34->Text == "") return false;
					if (slrText35->Text == "") return false;
				}

			}
			if (pocetVektorov->Value == 4) {

				if (bText3->Text == "") return false;
				if (bText4->Text == "") return false;

				if (slrText31->Text == "") return false;
				if (slrText32->Text == "") return false;
				if (slrText41->Text == "") return false;
				if (slrText42->Text == "") return false;
				if (pocetSuradnicVektorov->Value == 3) {
					if (slrText13->Text == "") return false;
					if (slrText23->Text == "") return false;
					if (slrText33->Text == "") return false;
					if (slrText43->Text == "") return false;
				}

				if (pocetSuradnicVektorov->Value == 4) {
					if (slrText13->Text == "") return false;
					if (slrText23->Text == "") return false;
					if (slrText33->Text == "") return false;
					if (slrText43->Text == "") return false;
					if (slrText14->Text == "") return false;
					if (slrText24->Text == "") return false;
					if (slrText34->Text == "") return false;
					if (slrText44->Text == "") return false;
				}
				if (pocetSuradnicVektorov->Value == 5) {
					if (slrText13->Text == "") return false;
					if (slrText23->Text == "") return false;
					if (slrText33->Text == "") return false;
					if (slrText43->Text == "") return false;
					if (slrText14->Text == "") return false;
					if (slrText24->Text == "") return false;
					if (slrText34->Text == "") return false;
					if (slrText44->Text == "") return false;
					if (slrText15->Text == "") return false;
					if (slrText25->Text == "") return false;
					if (slrText35->Text == "") return false;
					if (slrText45->Text == "") return false;
				}
			}
			if (pocetVektorov->Value == 5) {

				if (bText3->Text == "") return false;
				if (bText4->Text == "") return false;
				if (bText5->Text == "") return false;

				if (slrText31->Text == "") return false;
				if (slrText32->Text == "") return false;
				if (slrText41->Text == "") return false;
				if (slrText42->Text == "") return false;
				if (slrText51->Text == "") return false;
				if (slrText52->Text == "") return false;
				if (pocetSuradnicVektorov->Value == 3) {
					if (slrText13->Text == "") return false;
					if (slrText23->Text == "") return false;
					if (slrText33->Text == "") return false;
					if (slrText43->Text == "") return false;
					if (slrText53->Text == "") return false;
				}
				if (pocetSuradnicVektorov->Value == 4) {
					if (slrText13->Text == "") return false;
					if (slrText23->Text == "") return false;
					if (slrText33->Text == "") return false;
					if (slrText43->Text == "") return false;
					if (slrText53->Text == "") return false;
					if (slrText14->Text == "") return false;
					if (slrText24->Text == "") return false;
					if (slrText34->Text == "") return false;
					if (slrText44->Text == "") return false;
					if (slrText54->Text == "") return false;
				}
				if (pocetSuradnicVektorov->Value == 5) {
					if (slrText13->Text == "") return false;
					if (slrText23->Text == "") return false;
					if (slrText33->Text == "") return false;
					if (slrText43->Text == "") return false;
					if (slrText53->Text == "") return false;
					if (slrText14->Text == "") return false;
					if (slrText24->Text == "") return false;
					if (slrText34->Text == "") return false;
					if (slrText44->Text == "") return false;
					if (slrText54->Text == "") return false;
					if (slrText15->Text == "") return false;
					if (slrText25->Text == "") return false;
					if (slrText35->Text == "") return false;
					if (slrText45->Text == "") return false;
					if (slrText55->Text == "") return false;
				}
			}

			return true;
		}

	private: System::Void pocetSuradnicVektorov_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		if (this->pocetSuradnicVektorov->Value == 2) {
			this->slrText13->Hide();
			this->slrText23->Hide();
			this->slrText33->Hide();
			this->slrText43->Hide();
			this->slrText53->Hide();
			this->slrText14->Hide();
			this->slrText24->Hide();
			this->slrText34->Hide();
			this->slrText44->Hide();
			this->slrText54->Hide();
			this->slrText15->Hide();
			this->slrText25->Hide();
			this->slrText35->Hide();
			this->slrText45->Hide();
			this->slrText55->Hide();

			this->slrLabel13->Hide();
			this->slrLabel23->Hide();
			this->slrLabel33->Hide();
			this->slrLabel43->Hide();
			this->slrLabel53->Hide();
			this->slrLabel14->Hide();
			this->slrLabel24->Hide();
			this->slrLabel34->Hide();
			this->slrLabel44->Hide();
			this->slrLabel54->Hide();
			this->slrLabel15->Hide();
			this->slrLabel25->Hide();
			this->slrLabel35->Hide();
			this->slrLabel45->Hide();
			this->slrLabel55->Hide();

			this->slrLabel12->Text = "x" + subscript("2") + " =";
			this->slrLabel22->Text = "x" + subscript("2") + " =";
			this->slrLabel32->Text = "x" + subscript("2") + " =";
			this->slrLabel42->Text = "x" + subscript("2") + " =";
			this->slrLabel52->Text = "x" + subscript("2") + " =";

			this->bPanel->Location = System::Drawing::Point(309, 142);


		}

		if (this->pocetSuradnicVektorov->Value == 3) {
			this->slrText13->Show();
			this->slrText23->Show();
			this->slrText33->Show();
			this->slrText43->Show();
			this->slrText53->Show();
			this->slrText14->Hide();
			this->slrText24->Hide();
			this->slrText34->Hide();
			this->slrText44->Hide();
			this->slrText54->Hide();
			this->slrText15->Hide();
			this->slrText25->Hide();
			this->slrText35->Hide();
			this->slrText45->Hide();
			this->slrText55->Hide();

			this->slrLabel13->Show();
			this->slrLabel23->Show();
			this->slrLabel33->Show();
			this->slrLabel43->Show();
			this->slrLabel53->Show();
			this->slrLabel14->Hide();
			this->slrLabel24->Hide();
			this->slrLabel34->Hide();
			this->slrLabel44->Hide();
			this->slrLabel54->Hide();
			this->slrLabel15->Hide();
			this->slrLabel25->Hide();
			this->slrLabel35->Hide();
			this->slrLabel45->Hide();
			this->slrLabel55->Hide();

			this->slrLabel12->Text = "x" + subscript("2") + " +";
			this->slrLabel22->Text = "x" + subscript("2") + " +";
			this->slrLabel32->Text = "x" + subscript("2") + " +";
			this->slrLabel42->Text = "x" + subscript("2") + " +";
			this->slrLabel52->Text = "x" + subscript("2") + " +";

			this->slrLabel13->Text = "x" + subscript("3") + " =";
			this->slrLabel23->Text = "x" + subscript("3") + " =";
			this->slrLabel33->Text = "x" + subscript("3") + " =";
			this->slrLabel43->Text = "x" + subscript("3") + " =";
			this->slrLabel53->Text = "x" + subscript("3") + " =";

			this->bPanel->Location = System::Drawing::Point(403, 142);

		}

		if (this->pocetSuradnicVektorov->Value == 4) {
			this->slrText13->Show();
			this->slrText23->Show();
			this->slrText33->Show();
			this->slrText43->Show();
			this->slrText53->Show();
			this->slrText14->Show();
			this->slrText24->Show();
			this->slrText34->Show();
			this->slrText44->Show();
			this->slrText54->Show();
			this->slrText15->Hide();
			this->slrText25->Hide();
			this->slrText35->Hide();
			this->slrText45->Hide();
			this->slrText55->Hide();

			this->slrLabel13->Show();
			this->slrLabel23->Show();
			this->slrLabel33->Show();
			this->slrLabel43->Show();
			this->slrLabel53->Show();
			this->slrLabel14->Show();
			this->slrLabel24->Show();
			this->slrLabel34->Show();
			this->slrLabel44->Show();
			this->slrLabel54->Show();
			this->slrLabel15->Hide();
			this->slrLabel25->Hide();
			this->slrLabel35->Hide();
			this->slrLabel45->Hide();
			this->slrLabel55->Hide();

			this->slrLabel12->Text = "x" + subscript("2") + " +";
			this->slrLabel22->Text = "x" + subscript("2") + " +";
			this->slrLabel32->Text = "x" + subscript("2") + " +";
			this->slrLabel42->Text = "x" + subscript("2") + " +";
			this->slrLabel52->Text = "x" + subscript("2") + " +";

			this->slrLabel13->Text = "x" + subscript("3") + " +";
			this->slrLabel23->Text = "x" + subscript("3") + " +";
			this->slrLabel33->Text = "x" + subscript("3") + " +";
			this->slrLabel43->Text = "x" + subscript("3") + " +";
			this->slrLabel53->Text = "x" + subscript("3") + " +";

			this->slrLabel14->Text = "x" + subscript("4") + " =";
			this->slrLabel24->Text = "x" + subscript("4") + " =";
			this->slrLabel34->Text = "x" + subscript("4") + " =";
			this->slrLabel44->Text = "x" + subscript("4") + " =";
			this->slrLabel54->Text = "x" + subscript("4") + " =";

			this->bPanel->Location = System::Drawing::Point(497, 142);

		}

		if (this->pocetSuradnicVektorov->Value == 5) {
			this->slrText13->Show();
			this->slrText23->Show();
			this->slrText33->Show();
			this->slrText43->Show();
			this->slrText53->Show();
			this->slrText14->Show();
			this->slrText24->Show();
			this->slrText34->Show();
			this->slrText44->Show();
			this->slrText54->Show();
			this->slrText15->Show();
			this->slrText25->Show();
			this->slrText35->Show();
			this->slrText45->Show();
			this->slrText55->Show();

			this->slrLabel13->Show();
			this->slrLabel23->Show();
			this->slrLabel33->Show();
			this->slrLabel43->Show();
			this->slrLabel53->Show();
			this->slrLabel14->Show();
			this->slrLabel24->Show();
			this->slrLabel34->Show();
			this->slrLabel44->Show();
			this->slrLabel54->Show();
			this->slrLabel15->Show();
			this->slrLabel25->Show();
			this->slrLabel35->Show();
			this->slrLabel45->Show();
			this->slrLabel55->Show();

			this->slrLabel12->Text = "x" + subscript("2") + " +";
			this->slrLabel22->Text = "x" + subscript("2") + " +";
			this->slrLabel32->Text = "x" + subscript("2") + " +";
			this->slrLabel42->Text = "x" + subscript("2") + " +";
			this->slrLabel52->Text = "x" + subscript("2") + " +";

			this->slrLabel13->Text = "x" + subscript("3") + " +";
			this->slrLabel23->Text = "x" + subscript("3") + " +";
			this->slrLabel33->Text = "x" + subscript("3") + " +";
			this->slrLabel43->Text = "x" + subscript("3") + " +";
			this->slrLabel53->Text = "x" + subscript("3") + " +";

			this->slrLabel14->Text = "x" + subscript("4") + " +";
			this->slrLabel24->Text = "x" + subscript("4") + " +";
			this->slrLabel34->Text = "x" + subscript("4") + " +";
			this->slrLabel44->Text = "x" + subscript("4") + " +";
			this->slrLabel54->Text = "x" + subscript("4") + " +";

			this->slrLabel15->Text = "x" + subscript("5") + " =";
			this->slrLabel25->Text = "x" + subscript("5") + " =";
			this->slrLabel35->Text = "x" + subscript("5") + " =";
			this->slrLabel45->Text = "x" + subscript("5") + " =";
			this->slrLabel55->Text = "x" + subscript("5") + " =";

			this->bPanel->Location = System::Drawing::Point(591, 142);

		}
	}
	private: System::Void exitTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
		created = false;
		Form::Close();
	}
	private: System::Void pocetVektorov_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		if (this->pocetVektorov->Value == 2) {
			this->slrPanel3->Hide();
			this->slrPanel4->Hide();
			this->slrPanel5->Hide();
			this->bText3->Hide();
			this->bText4->Hide();
			this->bText5->Hide();
		}
		if (this->pocetVektorov->Value == 3) {
			this->slrPanel3->Show();
			this->slrPanel4->Hide();
			this->slrPanel5->Hide();
			this->bText3->Show();
			this->bText4->Hide();
			this->bText5->Hide();
		}
		if (this->pocetVektorov->Value == 4) {
			this->slrPanel3->Show();
			this->slrPanel4->Show();
			this->slrPanel5->Hide();
			this->bText3->Show();
			this->bText4->Show();
			this->bText5->Hide();
		}
		if (this->pocetVektorov->Value == 5) {
			this->slrPanel3->Show();
			this->slrPanel4->Show();
			this->slrPanel5->Show();
			this->bText3->Show();
			this->bText4->Show();
			this->bText5->Show();
		}

	}
	private: System::Void clearTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->slrText11->Text = "";
		this->slrText12->Text = "";
		this->slrText13->Text = "";
		this->slrText14->Text = "";
		this->slrText15->Text = "";

		this->slrText21->Text = "";
		this->slrText22->Text = "";
		this->slrText23->Text = "";
		this->slrText24->Text = "";
		this->slrText25->Text = "";

		this->slrText31->Text = "";
		this->slrText32->Text = "";
		this->slrText33->Text = "";
		this->slrText34->Text = "";
		this->slrText35->Text = "";

		this->slrText41->Text = "";
		this->slrText42->Text = "";
		this->slrText43->Text = "";
		this->slrText44->Text = "";
		this->slrText45->Text = "";

		this->slrText51->Text = "";
		this->slrText52->Text = "";
		this->slrText53->Text = "";
		this->slrText54->Text = "";
		this->slrText55->Text = "";

		this->bText1->Text = "";
		this->bText2->Text = "";
		this->bText3->Text = "";
		this->bText4->Text = "";
		this->bText5->Text = "";

		pocetVektorov->Enabled = true;

	}

	private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {

		// zisti ci su vsetky hodnoty vyplnene
		if (!getVsetkyVyplnene()) 
			MessageBox::Show("Zadaj všetky koeficienty neznámych v rovniciach!", "Chýbajúce hodnoty !", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else {
			created = true;
			Form::Close();
		}

	}

#pragma region slr_text_key_press

	private: System::Void slrText11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText11->Text->Contains(",") && !this->slrText11->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText11->Text->Contains("-"))) {
			e->Handled = true;
			slrText11->Text = "-";
			slrText11->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}

	}


	private: System::Void slrText12_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText12->Text->Contains(",") && !this->slrText12->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText12->Text->Contains("-"))) {
			e->Handled = true;
			slrText12->Text = "-";
			slrText12->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText13_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText13->Text->Contains(",") && !this->slrText13->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText13->Text->Contains("-"))) {
			e->Handled = true;
			slrText13->Text = "-";
			slrText13->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText14_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText14->Text->Contains(",") && !this->slrText14->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText14->Text->Contains("-"))) {
			e->Handled = true;
			slrText14->Text = "-";
			slrText14->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText15_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText15->Text->Contains(",") && !this->slrText15->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText15->Text->Contains("-"))) {
			e->Handled = true;
			slrText15->Text = "-";
			slrText15->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText21_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText21->Text->Contains(",") && !this->slrText21->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText21->Text->Contains("-"))) {
			e->Handled = true;
			slrText21->Text = "-";
			slrText21->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText22_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText22->Text->Contains(",") && !this->slrText22->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText22->Text->Contains("-"))) {
			e->Handled = true;
			slrText22->Text = "-";
			slrText22->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText23_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText23->Text->Contains(",") && !this->slrText23->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText23->Text->Contains("-"))) {
			e->Handled = true;
			slrText23->Text = "-";
			slrText23->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText24_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText24->Text->Contains(",") && !this->slrText24->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText24->Text->Contains("-"))) {
			e->Handled = true;
			slrText24->Text = "-";
			slrText24->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText25_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText25->Text->Contains(",") && !this->slrText25->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText25->Text->Contains("-"))) {
			e->Handled = true;
			slrText25->Text = "-";
			slrText25->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}

	private: System::Void slrText31_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText31->Text->Contains(",") && !this->slrText31->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText31->Text->Contains("-"))) {
			e->Handled = true;
			slrText31->Text = "-";
			slrText31->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText32_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText32->Text->Contains(",") && !this->slrText32->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText32->Text->Contains("-"))) {
			e->Handled = true;
			slrText32->Text = "-";
			slrText32->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText33_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText33->Text->Contains(",") && !this->slrText33->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText33->Text->Contains("-"))) {
			e->Handled = true;
			slrText33->Text = "-";
			slrText33->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText34_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText34->Text->Contains(",") && !this->slrText34->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText34->Text->Contains("-"))) {
			e->Handled = true;
			slrText34->Text = "-";
			slrText34->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText35_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText35->Text->Contains(",") && !this->slrText35->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText35->Text->Contains("-"))) {
			e->Handled = true;
			slrText35->Text = "-";
			slrText35->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText41_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText41->Text->Contains(",") && !this->slrText41->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText41->Text->Contains("-"))) {
			e->Handled = true;
			slrText41->Text = "-";
			slrText41->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText42_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText42->Text->Contains(",") && !this->slrText42->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText42->Text->Contains("-"))) {
			e->Handled = true;
			slrText42->Text = "-";
			slrText42->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText43_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText43->Text->Contains(",") && !this->slrText43->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText43->Text->Contains("-"))) {
			e->Handled = true;
			slrText43->Text = "-";
			slrText43->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText44_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText44->Text->Contains(",") && !this->slrText44->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText44->Text->Contains("-"))) {
			e->Handled = true;
			slrText44->Text = "-";
			slrText44->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText45_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText45->Text->Contains(",") && !this->slrText45->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText45->Text->Contains("-"))) {
			e->Handled = true;
			slrText45->Text = "-";
			slrText45->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText51_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText51->Text->Contains(",") && !this->slrText51->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText51->Text->Contains("-"))) {
			e->Handled = true;
			slrText51->Text = "-";
			slrText51->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText52_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText52->Text->Contains(",") && !this->slrText52->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText52->Text->Contains("-"))) {
			e->Handled = true;
			slrText52->Text = "-";
			slrText52->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText53_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText53->Text->Contains(",") && !this->slrText53->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText53->Text->Contains("-"))) {
			e->Handled = true;
			slrText53->Text = "-";
			slrText53->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText54_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText54->Text->Contains(",") && !this->slrText54->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText54->Text->Contains("-"))) {
			e->Handled = true;
			slrText54->Text = "-";
			slrText54->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void slrText55_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->slrText55->Text->Contains(",") && !this->slrText55->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->slrText55->Text->Contains("-"))) {
			e->Handled = true;
			slrText55->Text = "-";
			slrText55->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}

	private: System::Void slrText11_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText11->Text);
			slrText11->Text = number.ToString();
		}
		catch (...) {
			slrText11->Text = "";
		}
	}
	private: System::Void slrText12_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText12->Text);
			slrText12->Text = number.ToString();
		}
		catch (...) {
			slrText12->Text = "";
		}
	}
	private: System::Void slrText13_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText13->Text);
			slrText13->Text = number.ToString();
		}
		catch (...) {
			slrText13->Text = "";
		}
	}
	private: System::Void slrText14_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText14->Text);
			slrText14->Text = number.ToString();
		}
		catch (...) {
			slrText14->Text = "";
		}
	}
	private: System::Void slrText15_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText15->Text);
			slrText15->Text = number.ToString();
		}
		catch (...) {
			slrText15->Text = "";
		}
	}
	private: System::Void slrText21_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText21->Text);
			slrText21->Text = number.ToString();
		}
		catch (...) {
			slrText21->Text = "";
		}
	}
	private: System::Void slrText22_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText22->Text);
			slrText22->Text = number.ToString();
		}
		catch (...) {
			slrText22->Text = "";
		}
	}
	private: System::Void slrText23_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText23->Text);
			slrText23->Text = number.ToString();
		}
		catch (...) {
			slrText23->Text = "";
		}
	}
	private: System::Void slrText24_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText24->Text);
			slrText24->Text = number.ToString();
		}
		catch (...) {
			slrText24->Text = "";
		}
	}
	private: System::Void slrText25_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText25->Text);
			slrText25->Text = number.ToString();
		}
		catch (...) {
			slrText25->Text = "";
		}
	}
	private: System::Void slrText31_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText31->Text);
			slrText31->Text = number.ToString();
		}
		catch (...) {
			slrText31->Text = "";
		}
	}
	private: System::Void slrText32_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText32->Text);
			slrText32->Text = number.ToString();
		}
		catch (...) {
			slrText32->Text = "";
		}
	}
	private: System::Void slrText33_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText33->Text);
			slrText33->Text = number.ToString();
		}
		catch (...) {
			slrText33->Text = "";
		}
	}
	private: System::Void slrText34_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText34->Text);
			slrText34->Text = number.ToString();
		}
		catch (...) {
			slrText34->Text = "";
		}
	}
	private: System::Void slrText35_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText35->Text);
			slrText35->Text = number.ToString();
		}
		catch (...) {
			slrText35->Text = "";
		}
	}
	private: System::Void slrText41_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText41->Text);
			slrText41->Text = number.ToString();
		}
		catch (...) {
			slrText41->Text = "";
		}
	}
	private: System::Void slrText42_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText42->Text);
			slrText42->Text = number.ToString();
		}
		catch (...) {
			slrText42->Text = "";
		}
	}
	private: System::Void slrText43_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText43->Text);
			slrText43->Text = number.ToString();
		}
		catch (...) {
			slrText43->Text = "";
		}
	}
	private: System::Void slrText44_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText44->Text);
			slrText44->Text = number.ToString();
		}
		catch (...) {
			slrText44->Text = "";
		}
	}
	private: System::Void slrText45_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText45->Text);
			slrText45->Text = number.ToString();
		}
		catch (...) {
			slrText45->Text = "";
		}
	}
	private: System::Void slrText51_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText51->Text);
			slrText51->Text = number.ToString();
		}
		catch (...) {
			slrText51->Text = "";
		}
	}
	private: System::Void slrText52_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText52->Text);
			slrText52->Text = number.ToString();
		}
		catch (...) {
			slrText52->Text = "";
		}
	}
	private: System::Void slrText53_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText53->Text);
			slrText53->Text = number.ToString();
		}
		catch (...) {
			slrText53->Text = "";
		}
	}
	private: System::Void slrText54_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText54->Text);
			slrText54->Text = number.ToString();
		}
		catch (...) {
			slrText54->Text = "";
		}
	}
	private: System::Void slrText55_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(slrText55->Text);
			slrText55->Text = number.ToString();
		}
		catch (...) {
			slrText55->Text = "";
		}
	}
	private: System::Void bText1_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(bText1->Text);
			bText1->Text = number.ToString();
		}
		catch (...) {
			bText1->Text = "";
		}
	}
private: System::Void bText2_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(bText2->Text);
		bText2->Text = number.ToString();
	}
	catch (...) {
		bText2->Text = "";
	}
}
private: System::Void bText3_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(bText3->Text);
		bText3->Text = number.ToString();
	}
	catch (...) {
		bText3->Text = "";
	}
}
private: System::Void bText4_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(bText4->Text);
		bText4->Text = number.ToString();
	}
	catch (...) {
		bText4->Text = "";
	}
}
private: System::Void bText5_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(bText5->Text);
		bText5->Text = number.ToString();
	}
	catch (...) {
		bText5->Text = "";
	}
}
private: System::Void bText5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->bText5->Text->Contains(",") && !this->bText5->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->bText5->Text->Contains("-"))) {
		e->Handled = true;
		bText5->Text = "-";
		bText5->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void bText4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->bText4->Text->Contains(",") && !this->bText4->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->bText4->Text->Contains("-"))) {
		e->Handled = true;
		bText4->Text = "-";
		bText4->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void bText3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->bText3->Text->Contains(",") && !this->bText3->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->bText3->Text->Contains("-"))) {
		e->Handled = true;
		bText3->Text = "-";
		bText3->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void bText2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->bText2->Text->Contains(",") && !this->bText2->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->bText2->Text->Contains("-"))) {
		e->Handled = true;
		bText2->Text = "-";
		bText2->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void bText1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->bText1->Text->Contains(",") && !this->bText1->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->bText1->Text->Contains("-"))) {
		e->Handled = true;
		bText1->Text = "-";
		bText1->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
#pragma endregion
};
}

