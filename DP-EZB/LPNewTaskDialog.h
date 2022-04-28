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
	/// Summary for lpNewTaskDialog
	/// </summary>
	public ref class lpNewTaskDialog : public System::Windows::Forms::Form
	{
	public:
		lpNewTaskDialog(void)
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
		~lpNewTaskDialog()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::NumericUpDown^ pocetPremennych;
	private: System::Windows::Forms::Label^ LabelFirstAction;
	private: System::Windows::Forms::Panel^ bottomPanel;


	private: System::Windows::Forms::Button^ clearTaskButton;
	private: System::Windows::Forms::Button^ createButton;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
private: System::Windows::Forms::Button^ ohranicenie;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   /// 
		   /// 
		   /// 
public: Boolean created = false;

private: System::Windows::Forms::NumericUpDown^ pocetOhraniceni;
public:
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Panel^ bPanel;


private: System::Windows::Forms::TextBox^ bText5;
private: System::Windows::Forms::TextBox^ bText4;
private: System::Windows::Forms::TextBox^ bText3;
private: System::Windows::Forms::TextBox^ bText2;
private: System::Windows::Forms::TextBox^ bText1;
private: System::Windows::Forms::Panel^ lpPanel5;
private: System::Windows::Forms::Label^ lpLabel55;
private: System::Windows::Forms::TextBox^ lpText55;
private: System::Windows::Forms::Label^ lpLabel54;
private: System::Windows::Forms::TextBox^ lpText54;
private: System::Windows::Forms::Label^ lpLabel53;
private: System::Windows::Forms::TextBox^ lpText53;
private: System::Windows::Forms::Label^ lpLabel52;
private: System::Windows::Forms::TextBox^ lpText52;
private: System::Windows::Forms::Label^ lpLabel51;
private: System::Windows::Forms::TextBox^ lpText51;
private: System::Windows::Forms::Panel^ lpPanel4;
private: System::Windows::Forms::Label^ lpLabel45;
private: System::Windows::Forms::TextBox^ lpText45;
private: System::Windows::Forms::Label^ lpLabel44;
private: System::Windows::Forms::TextBox^ lpText44;
private: System::Windows::Forms::Label^ lpLabel43;
private: System::Windows::Forms::TextBox^ lpText43;
private: System::Windows::Forms::Label^ lpLabel42;
private: System::Windows::Forms::TextBox^ lpText42;
private: System::Windows::Forms::Label^ lpLabel41;
private: System::Windows::Forms::TextBox^ lpText41;
private: System::Windows::Forms::Panel^ lpPanel3;
private: System::Windows::Forms::Label^ lpLabel35;
private: System::Windows::Forms::TextBox^ lpText35;
private: System::Windows::Forms::Label^ lpLabel34;
private: System::Windows::Forms::TextBox^ lpText34;
private: System::Windows::Forms::Label^ lpLabel33;
private: System::Windows::Forms::TextBox^ lpText33;
private: System::Windows::Forms::Label^ lpLabel32;
private: System::Windows::Forms::TextBox^ lpText32;
private: System::Windows::Forms::Label^ lpLabel31;
private: System::Windows::Forms::TextBox^ lpText31;
private: System::Windows::Forms::Panel^ lpPanel2;
private: System::Windows::Forms::Label^ lpLabel25;
private: System::Windows::Forms::TextBox^ lpText25;
private: System::Windows::Forms::Label^ lpLabel24;
private: System::Windows::Forms::TextBox^ lpText24;
private: System::Windows::Forms::Label^ lpLabel23;
private: System::Windows::Forms::TextBox^ lpText23;
private: System::Windows::Forms::Label^ lpLabel22;
private: System::Windows::Forms::TextBox^ lpText22;
private: System::Windows::Forms::Label^ lpLabel21;
private: System::Windows::Forms::TextBox^ lpText21;
private: System::Windows::Forms::Panel^ lpPanel1;
private: System::Windows::Forms::Label^ lpLabel15;
private: System::Windows::Forms::TextBox^ lpText15;
private: System::Windows::Forms::Label^ lpLabel14;
private: System::Windows::Forms::TextBox^ lpText14;
private: System::Windows::Forms::Label^ lpLabel13;
private: System::Windows::Forms::TextBox^ lpText13;
private: System::Windows::Forms::Label^ lpLabel12;
private: System::Windows::Forms::TextBox^ lpText12;
private: System::Windows::Forms::Label^ lpLabel11;
private: System::Windows::Forms::TextBox^ lpText11;
private: System::Windows::Forms::ComboBox^ maxmin;
private: System::Windows::Forms::Panel^ ufPanel;

private: System::Windows::Forms::Label^ ufLabel5;

private: System::Windows::Forms::TextBox^ ufText5;
private: System::Windows::Forms::Label^ ufLabel4;


private: System::Windows::Forms::TextBox^ ufText4;
private: System::Windows::Forms::Label^ ufLabel3;


private: System::Windows::Forms::TextBox^ ufText3;
private: System::Windows::Forms::Label^ ufLabel2;


private: System::Windows::Forms::TextBox^ ufText2;
private: System::Windows::Forms::Label^ ufLabel1;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label7;


private: System::Windows::Forms::TextBox^ ufText1;


		   void InitializeComponent(void)
		   {
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->pocetPremennych = (gcnew System::Windows::Forms::NumericUpDown());
			   this->LabelFirstAction = (gcnew System::Windows::Forms::Label());
			   this->bottomPanel = (gcnew System::Windows::Forms::Panel());
			   this->createButton = (gcnew System::Windows::Forms::Button());
			   this->clearTaskButton = (gcnew System::Windows::Forms::Button());
			   this->ohranicenie = (gcnew System::Windows::Forms::Button());
			   this->pocetOhraniceni = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->bPanel = (gcnew System::Windows::Forms::Panel());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->bText5 = (gcnew System::Windows::Forms::TextBox());
			   this->bText4 = (gcnew System::Windows::Forms::TextBox());
			   this->bText3 = (gcnew System::Windows::Forms::TextBox());
			   this->bText2 = (gcnew System::Windows::Forms::TextBox());
			   this->bText1 = (gcnew System::Windows::Forms::TextBox());
			   this->lpPanel5 = (gcnew System::Windows::Forms::Panel());
			   this->lpLabel55 = (gcnew System::Windows::Forms::Label());
			   this->lpText55 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel54 = (gcnew System::Windows::Forms::Label());
			   this->lpText54 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel53 = (gcnew System::Windows::Forms::Label());
			   this->lpText53 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel52 = (gcnew System::Windows::Forms::Label());
			   this->lpText52 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel51 = (gcnew System::Windows::Forms::Label());
			   this->lpText51 = (gcnew System::Windows::Forms::TextBox());
			   this->lpPanel4 = (gcnew System::Windows::Forms::Panel());
			   this->lpLabel45 = (gcnew System::Windows::Forms::Label());
			   this->lpText45 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel44 = (gcnew System::Windows::Forms::Label());
			   this->lpText44 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel43 = (gcnew System::Windows::Forms::Label());
			   this->lpText43 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel42 = (gcnew System::Windows::Forms::Label());
			   this->lpText42 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel41 = (gcnew System::Windows::Forms::Label());
			   this->lpText41 = (gcnew System::Windows::Forms::TextBox());
			   this->lpPanel3 = (gcnew System::Windows::Forms::Panel());
			   this->lpLabel35 = (gcnew System::Windows::Forms::Label());
			   this->lpText35 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel34 = (gcnew System::Windows::Forms::Label());
			   this->lpText34 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel33 = (gcnew System::Windows::Forms::Label());
			   this->lpText33 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel32 = (gcnew System::Windows::Forms::Label());
			   this->lpText32 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel31 = (gcnew System::Windows::Forms::Label());
			   this->lpText31 = (gcnew System::Windows::Forms::TextBox());
			   this->lpPanel2 = (gcnew System::Windows::Forms::Panel());
			   this->lpLabel25 = (gcnew System::Windows::Forms::Label());
			   this->lpText25 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel24 = (gcnew System::Windows::Forms::Label());
			   this->lpText24 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel23 = (gcnew System::Windows::Forms::Label());
			   this->lpText23 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel22 = (gcnew System::Windows::Forms::Label());
			   this->lpText22 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel21 = (gcnew System::Windows::Forms::Label());
			   this->lpText21 = (gcnew System::Windows::Forms::TextBox());
			   this->lpPanel1 = (gcnew System::Windows::Forms::Panel());
			   this->lpLabel15 = (gcnew System::Windows::Forms::Label());
			   this->lpText15 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel14 = (gcnew System::Windows::Forms::Label());
			   this->lpText14 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel13 = (gcnew System::Windows::Forms::Label());
			   this->lpText13 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel12 = (gcnew System::Windows::Forms::Label());
			   this->lpText12 = (gcnew System::Windows::Forms::TextBox());
			   this->lpLabel11 = (gcnew System::Windows::Forms::Label());
			   this->lpText11 = (gcnew System::Windows::Forms::TextBox());
			   this->maxmin = (gcnew System::Windows::Forms::ComboBox());
			   this->ufPanel = (gcnew System::Windows::Forms::Panel());
			   this->ufLabel5 = (gcnew System::Windows::Forms::Label());
			   this->ufText5 = (gcnew System::Windows::Forms::TextBox());
			   this->ufLabel4 = (gcnew System::Windows::Forms::Label());
			   this->ufText4 = (gcnew System::Windows::Forms::TextBox());
			   this->ufLabel3 = (gcnew System::Windows::Forms::Label());
			   this->ufText3 = (gcnew System::Windows::Forms::TextBox());
			   this->ufLabel2 = (gcnew System::Windows::Forms::Label());
			   this->ufText2 = (gcnew System::Windows::Forms::TextBox());
			   this->ufLabel1 = (gcnew System::Windows::Forms::Label());
			   this->ufText1 = (gcnew System::Windows::Forms::TextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetPremennych))->BeginInit();
			   this->bottomPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetOhraniceni))->BeginInit();
			   this->bPanel->SuspendLayout();
			   this->lpPanel5->SuspendLayout();
			   this->lpPanel4->SuspendLayout();
			   this->lpPanel3->SuspendLayout();
			   this->lpPanel2->SuspendLayout();
			   this->lpPanel1->SuspendLayout();
			   this->ufPanel->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)));
			   this->label3->ForeColor = System::Drawing::SystemColors::Window;
			   this->label3->Location = System::Drawing::Point(20, 166);
			   this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(409, 22);
			   this->label3->TabIndex = 0;
			   this->label3->Text = L"3. Zadaj koeficienty premenných v ohraničeniach:";
			   // 
			   // pocetPremennych
			   // 
			   this->pocetPremennych->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->pocetPremennych->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->pocetPremennych->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pocetPremennych->ForeColor = System::Drawing::SystemColors::Window;
			   this->pocetPremennych->Location = System::Drawing::Point(296, 20);
			   this->pocetPremennych->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->pocetPremennych->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			   this->pocetPremennych->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			   this->pocetPremennych->Name = L"pocetPremennych";
			   this->pocetPremennych->ReadOnly = true;
			   this->pocetPremennych->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   this->pocetPremennych->Size = System::Drawing::Size(73, 30);
			   this->pocetPremennych->TabIndex = 0;
			   this->pocetPremennych->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			   this->pocetPremennych->ValueChanged += gcnew System::EventHandler(this, &lpNewTaskDialog::pocetPremennych_ValueChanged);
			   // 
			   // LabelFirstAction
			   // 
			   this->LabelFirstAction->AutoSize = true;
			   this->LabelFirstAction->ForeColor = System::Drawing::SystemColors::Window;
			   this->LabelFirstAction->Location = System::Drawing::Point(20, 20);
			   this->LabelFirstAction->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->LabelFirstAction->Name = L"LabelFirstAction";
			   this->LabelFirstAction->Size = System::Drawing::Size(233, 22);
			   this->LabelFirstAction->TabIndex = 0;
			   this->LabelFirstAction->Text = L"1. Zadaj počet premenných:";
			   // 
			   // bottomPanel
			   // 
			   this->bottomPanel->Controls->Add(this->createButton);
			   this->bottomPanel->Controls->Add(this->clearTaskButton);
			   this->bottomPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->bottomPanel->Location = System::Drawing::Point(0, 542);
			   this->bottomPanel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->bottomPanel->Name = L"bottomPanel";
			   this->bottomPanel->Size = System::Drawing::Size(674, 40);
			   this->bottomPanel->TabIndex = 8;
			   // 
			   // createButton
			   // 
			   this->createButton->BackColor = System::Drawing::Color::MediumSeaGreen;
			   this->createButton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->createButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			   this->createButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->createButton->ForeColor = System::Drawing::SystemColors::Window;
			   this->createButton->Location = System::Drawing::Point(334, -1);
			   this->createButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->createButton->Name = L"createButton";
			   this->createButton->Size = System::Drawing::Size(326, 40);
			   this->createButton->TabIndex = 40;
			   this->createButton->Text = L"➕ Vytvoriť novú simplexovú tabuľku";
			   this->createButton->UseVisualStyleBackColor = false;
			   this->createButton->Click += gcnew System::EventHandler(this, &lpNewTaskDialog::createButton_Click);
			   // 
			   // clearTaskButton
			   // 
			   this->clearTaskButton->BackColor = System::Drawing::Color::Crimson;
			   this->clearTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->clearTaskButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			   this->clearTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->clearTaskButton->ForeColor = System::Drawing::SystemColors::Window;
			   this->clearTaskButton->Location = System::Drawing::Point(192, -1);
			   this->clearTaskButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->clearTaskButton->Name = L"clearTaskButton";
			   this->clearTaskButton->Size = System::Drawing::Size(117, 40);
			   this->clearTaskButton->TabIndex = 39;
			   this->clearTaskButton->Text = L"❌ Zmazať";
			   this->clearTaskButton->UseVisualStyleBackColor = false;
			   this->clearTaskButton->Click += gcnew System::EventHandler(this, &lpNewTaskDialog::clearTaskButton_Click);
			   // 
			   // ohranicenie
			   // 
			   this->ohranicenie->BackColor = System::Drawing::Color::DodgerBlue;
			   this->ohranicenie->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->ohranicenie->Enabled = false;
			   this->ohranicenie->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			   this->ohranicenie->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->ohranicenie->ForeColor = System::Drawing::SystemColors::Window;
			   this->ohranicenie->Location = System::Drawing::Point(77, 491);
			   this->ohranicenie->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->ohranicenie->Name = L"ohranicenie";
			   this->ohranicenie->Size = System::Drawing::Size(216, 40);
			   this->ohranicenie->TabIndex = 38;
			   this->ohranicenie->Text = L"➕ Pridať ohraničenie";
			   this->ohranicenie->UseVisualStyleBackColor = false;
			   this->ohranicenie->Click += gcnew System::EventHandler(this, &lpNewTaskDialog::ohranicenie_Click);
			   // 
			   // pocetOhraniceni
			   // 
			   this->pocetOhraniceni->AllowDrop = true;
			   this->pocetOhraniceni->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->pocetOhraniceni->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->pocetOhraniceni->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pocetOhraniceni->ForeColor = System::Drawing::SystemColors::Window;
			   this->pocetOhraniceni->Location = System::Drawing::Point(383, 20);
			   this->pocetOhraniceni->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->pocetOhraniceni->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			   this->pocetOhraniceni->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->pocetOhraniceni->Name = L"pocetOhraniceni";
			   this->pocetOhraniceni->ReadOnly = true;
			   this->pocetOhraniceni->Size = System::Drawing::Size(73, 30);
			   this->pocetOhraniceni->TabIndex = 1;
			   this->pocetOhraniceni->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			   this->pocetOhraniceni->Visible = false;
			   this->pocetOhraniceni->ValueChanged += gcnew System::EventHandler(this, &lpNewTaskDialog::pocetOhraniceni_ValueChanged);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->ForeColor = System::Drawing::SystemColors::Window;
			   this->label2->Location = System::Drawing::Point(20, 66);
			   this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(423, 22);
			   this->label2->TabIndex = 0;
			   this->label2->Text = L"2. Zadaj koeficienty premenných v účelovej funkcii:";
			   // 
			   // bPanel
			   // 
			   this->bPanel->Controls->Add(this->label7);
			   this->bPanel->Controls->Add(this->label6);
			   this->bPanel->Controls->Add(this->label5);
			   this->bPanel->Controls->Add(this->label4);
			   this->bPanel->Controls->Add(this->label1);
			   this->bPanel->Controls->Add(this->bText5);
			   this->bPanel->Controls->Add(this->bText4);
			   this->bPanel->Controls->Add(this->bText3);
			   this->bPanel->Controls->Add(this->bText2);
			   this->bPanel->Controls->Add(this->bText1);
			   this->bPanel->Location = System::Drawing::Point(538, 202);
			   this->bPanel->Name = L"bPanel";
			   this->bPanel->Size = System::Drawing::Size(107, 278);
			   this->bPanel->TabIndex = 7;
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->ForeColor = System::Drawing::SystemColors::Window;
			   this->label7->Location = System::Drawing::Point(6, 241);
			   this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(21, 22);
			   this->label7->TabIndex = 0;
			   this->label7->Text = L"≤";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->ForeColor = System::Drawing::SystemColors::Window;
			   this->label6->Location = System::Drawing::Point(6, 183);
			   this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(21, 22);
			   this->label6->TabIndex = 0;
			   this->label6->Text = L"≤";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->ForeColor = System::Drawing::SystemColors::Window;
			   this->label5->Location = System::Drawing::Point(6, 126);
			   this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(21, 22);
			   this->label5->TabIndex = 0;
			   this->label5->Text = L"≤";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->ForeColor = System::Drawing::SystemColors::Window;
			   this->label4->Location = System::Drawing::Point(6, 68);
			   this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(21, 22);
			   this->label4->TabIndex = 0;
			   this->label4->Text = L"≤";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::SystemColors::Window;
			   this->label1->Location = System::Drawing::Point(6, 10);
			   this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(21, 22);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"≤";
			   // 
			   // bText5
			   // 
			   this->bText5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->bText5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->bText5->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->bText5->ForeColor = System::Drawing::SystemColors::Window;
			   this->bText5->Location = System::Drawing::Point(44, 236);
			   this->bText5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->bText5->Name = L"bText5";
			   this->bText5->Size = System::Drawing::Size(42, 30);
			   this->bText5->TabIndex = 37;
			   this->bText5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::bText5_KeyPress);
			   this->bText5->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::bText5_Leave);
			   // 
			   // bText4
			   // 
			   this->bText4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->bText4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->bText4->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->bText4->ForeColor = System::Drawing::SystemColors::Window;
			   this->bText4->Location = System::Drawing::Point(44, 178);
			   this->bText4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->bText4->Name = L"bText4";
			   this->bText4->Size = System::Drawing::Size(42, 30);
			   this->bText4->TabIndex = 31;
			   this->bText4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::bText4_KeyPress);
			   this->bText4->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::bText4_Leave);
			   // 
			   // bText3
			   // 
			   this->bText3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->bText3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->bText3->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->bText3->ForeColor = System::Drawing::SystemColors::Window;
			   this->bText3->Location = System::Drawing::Point(44, 120);
			   this->bText3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->bText3->Name = L"bText3";
			   this->bText3->Size = System::Drawing::Size(42, 30);
			   this->bText3->TabIndex = 25;
			   this->bText3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::bText3_KeyPress);
			   this->bText3->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::bText3_Leave);
			   // 
			   // bText2
			   // 
			   this->bText2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->bText2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->bText2->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->bText2->ForeColor = System::Drawing::SystemColors::Window;
			   this->bText2->Location = System::Drawing::Point(44, 63);
			   this->bText2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->bText2->Name = L"bText2";
			   this->bText2->Size = System::Drawing::Size(42, 30);
			   this->bText2->TabIndex = 19;
			   this->bText2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::bText2_KeyPress);
			   this->bText2->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::bText2_Leave);
			   // 
			   // bText1
			   // 
			   this->bText1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->bText1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->bText1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->bText1->ForeColor = System::Drawing::SystemColors::Window;
			   this->bText1->Location = System::Drawing::Point(44, 5);
			   this->bText1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->bText1->Name = L"bText1";
			   this->bText1->Size = System::Drawing::Size(42, 30);
			   this->bText1->TabIndex = 13;
			   this->bText1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::bText1_KeyPress);
			   this->bText1->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::bText1_Leave);
			   // 
			   // lpPanel5
			   // 
			   this->lpPanel5->Controls->Add(this->lpLabel55);
			   this->lpPanel5->Controls->Add(this->lpText55);
			   this->lpPanel5->Controls->Add(this->lpLabel54);
			   this->lpPanel5->Controls->Add(this->lpText54);
			   this->lpPanel5->Controls->Add(this->lpLabel53);
			   this->lpPanel5->Controls->Add(this->lpText53);
			   this->lpPanel5->Controls->Add(this->lpLabel52);
			   this->lpPanel5->Controls->Add(this->lpText52);
			   this->lpPanel5->Controls->Add(this->lpLabel51);
			   this->lpPanel5->Controls->Add(this->lpText51);
			   this->lpPanel5->Location = System::Drawing::Point(77, 433);
			   this->lpPanel5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpPanel5->Name = L"lpPanel5";
			   this->lpPanel5->Size = System::Drawing::Size(455, 47);
			   this->lpPanel5->TabIndex = 6;
			   // 
			   // lpLabel55
			   // 
			   this->lpLabel55->AutoSize = true;
			   this->lpLabel55->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel55->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel55->Location = System::Drawing::Point(429, 10);
			   this->lpLabel55->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel55->Name = L"lpLabel55";
			   this->lpLabel55->Size = System::Drawing::Size(19, 22);
			   this->lpLabel55->TabIndex = 0;
			   this->lpLabel55->Text = L"x";
			   // 
			   // lpText55
			   // 
			   this->lpText55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText55->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText55->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText55->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText55->Location = System::Drawing::Point(382, 5);
			   this->lpText55->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText55->Name = L"lpText55";
			   this->lpText55->Size = System::Drawing::Size(42, 30);
			   this->lpText55->TabIndex = 36;
			   this->lpText55->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText55_KeyPress);
			   this->lpText55->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText55_Leave);
			   // 
			   // lpLabel54
			   // 
			   this->lpLabel54->AutoSize = true;
			   this->lpLabel54->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel54->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel54->Location = System::Drawing::Point(334, 10);
			   this->lpLabel54->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel54->Name = L"lpLabel54";
			   this->lpLabel54->Size = System::Drawing::Size(34, 22);
			   this->lpLabel54->TabIndex = 0;
			   this->lpLabel54->Text = L"x +";
			   // 
			   // lpText54
			   // 
			   this->lpText54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText54->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText54->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText54->Location = System::Drawing::Point(288, 5);
			   this->lpText54->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText54->Name = L"lpText54";
			   this->lpText54->Size = System::Drawing::Size(42, 30);
			   this->lpText54->TabIndex = 35;
			   this->lpText54->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText54_KeyPress);
			   this->lpText54->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText54_Leave);
			   // 
			   // lpLabel53
			   // 
			   this->lpLabel53->AutoSize = true;
			   this->lpLabel53->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel53->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel53->Location = System::Drawing::Point(239, 10);
			   this->lpLabel53->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel53->Name = L"lpLabel53";
			   this->lpLabel53->Size = System::Drawing::Size(34, 22);
			   this->lpLabel53->TabIndex = 0;
			   this->lpLabel53->Text = L"x +";
			   // 
			   // lpText53
			   // 
			   this->lpText53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText53->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText53->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText53->Location = System::Drawing::Point(190, 5);
			   this->lpText53->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText53->Name = L"lpText53";
			   this->lpText53->Size = System::Drawing::Size(42, 30);
			   this->lpText53->TabIndex = 34;
			   this->lpText53->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText53_KeyPress);
			   this->lpText53->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText53_Leave);
			   // 
			   // lpLabel52
			   // 
			   this->lpLabel52->AutoSize = true;
			   this->lpLabel52->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel52->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel52->Location = System::Drawing::Point(143, 10);
			   this->lpLabel52->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel52->Name = L"lpLabel52";
			   this->lpLabel52->Size = System::Drawing::Size(34, 22);
			   this->lpLabel52->TabIndex = 0;
			   this->lpLabel52->Text = L"x +";
			   // 
			   // lpText52
			   // 
			   this->lpText52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText52->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText52->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText52->Location = System::Drawing::Point(97, 5);
			   this->lpText52->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText52->Name = L"lpText52";
			   this->lpText52->Size = System::Drawing::Size(42, 30);
			   this->lpText52->TabIndex = 33;
			   this->lpText52->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText52_KeyPress);
			   this->lpText52->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText52_Leave);
			   // 
			   // lpLabel51
			   // 
			   this->lpLabel51->AutoSize = true;
			   this->lpLabel51->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel51->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel51->Location = System::Drawing::Point(51, 10);
			   this->lpLabel51->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel51->Name = L"lpLabel51";
			   this->lpLabel51->Size = System::Drawing::Size(34, 22);
			   this->lpLabel51->TabIndex = 0;
			   this->lpLabel51->Text = L"x +";
			   // 
			   // lpText51
			   // 
			   this->lpText51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText51->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText51->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText51->Location = System::Drawing::Point(4, 5);
			   this->lpText51->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText51->Name = L"lpText51";
			   this->lpText51->Size = System::Drawing::Size(42, 30);
			   this->lpText51->TabIndex = 32;
			   this->lpText51->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText51_KeyPress);
			   this->lpText51->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText51_Leave);
			   // 
			   // lpPanel4
			   // 
			   this->lpPanel4->Controls->Add(this->lpLabel45);
			   this->lpPanel4->Controls->Add(this->lpText45);
			   this->lpPanel4->Controls->Add(this->lpLabel44);
			   this->lpPanel4->Controls->Add(this->lpText44);
			   this->lpPanel4->Controls->Add(this->lpLabel43);
			   this->lpPanel4->Controls->Add(this->lpText43);
			   this->lpPanel4->Controls->Add(this->lpLabel42);
			   this->lpPanel4->Controls->Add(this->lpText42);
			   this->lpPanel4->Controls->Add(this->lpLabel41);
			   this->lpPanel4->Controls->Add(this->lpText41);
			   this->lpPanel4->Location = System::Drawing::Point(77, 375);
			   this->lpPanel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpPanel4->Name = L"lpPanel4";
			   this->lpPanel4->Size = System::Drawing::Size(455, 47);
			   this->lpPanel4->TabIndex = 5;
			   // 
			   // lpLabel45
			   // 
			   this->lpLabel45->AutoSize = true;
			   this->lpLabel45->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel45->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel45->Location = System::Drawing::Point(429, 10);
			   this->lpLabel45->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel45->Name = L"lpLabel45";
			   this->lpLabel45->Size = System::Drawing::Size(19, 22);
			   this->lpLabel45->TabIndex = 0;
			   this->lpLabel45->Text = L"x";
			   // 
			   // lpText45
			   // 
			   this->lpText45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText45->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText45->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText45->Location = System::Drawing::Point(382, 5);
			   this->lpText45->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText45->Name = L"lpText45";
			   this->lpText45->Size = System::Drawing::Size(42, 30);
			   this->lpText45->TabIndex = 30;
			   this->lpText45->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText45_KeyPress);
			   this->lpText45->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText45_Leave);
			   // 
			   // lpLabel44
			   // 
			   this->lpLabel44->AutoSize = true;
			   this->lpLabel44->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel44->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel44->Location = System::Drawing::Point(334, 10);
			   this->lpLabel44->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel44->Name = L"lpLabel44";
			   this->lpLabel44->Size = System::Drawing::Size(34, 22);
			   this->lpLabel44->TabIndex = 0;
			   this->lpLabel44->Text = L"x +";
			   // 
			   // lpText44
			   // 
			   this->lpText44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText44->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText44->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText44->Location = System::Drawing::Point(288, 5);
			   this->lpText44->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText44->Name = L"lpText44";
			   this->lpText44->Size = System::Drawing::Size(42, 30);
			   this->lpText44->TabIndex = 29;
			   this->lpText44->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText44_KeyPress);
			   this->lpText44->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText44_Leave);
			   // 
			   // lpLabel43
			   // 
			   this->lpLabel43->AutoSize = true;
			   this->lpLabel43->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel43->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel43->Location = System::Drawing::Point(239, 10);
			   this->lpLabel43->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel43->Name = L"lpLabel43";
			   this->lpLabel43->Size = System::Drawing::Size(34, 22);
			   this->lpLabel43->TabIndex = 0;
			   this->lpLabel43->Text = L"x +";
			   // 
			   // lpText43
			   // 
			   this->lpText43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText43->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText43->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText43->Location = System::Drawing::Point(190, 5);
			   this->lpText43->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText43->Name = L"lpText43";
			   this->lpText43->Size = System::Drawing::Size(42, 30);
			   this->lpText43->TabIndex = 28;
			   this->lpText43->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText43_KeyPress);
			   this->lpText43->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText43_Leave);
			   // 
			   // lpLabel42
			   // 
			   this->lpLabel42->AutoSize = true;
			   this->lpLabel42->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel42->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel42->Location = System::Drawing::Point(143, 10);
			   this->lpLabel42->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel42->Name = L"lpLabel42";
			   this->lpLabel42->Size = System::Drawing::Size(34, 22);
			   this->lpLabel42->TabIndex = 0;
			   this->lpLabel42->Text = L"x +";
			   // 
			   // lpText42
			   // 
			   this->lpText42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText42->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText42->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText42->Location = System::Drawing::Point(97, 5);
			   this->lpText42->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText42->Name = L"lpText42";
			   this->lpText42->Size = System::Drawing::Size(42, 30);
			   this->lpText42->TabIndex = 27;
			   this->lpText42->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText42_KeyPress);
			   this->lpText42->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText42_Leave);
			   // 
			   // lpLabel41
			   // 
			   this->lpLabel41->AutoSize = true;
			   this->lpLabel41->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel41->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel41->Location = System::Drawing::Point(51, 10);
			   this->lpLabel41->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel41->Name = L"lpLabel41";
			   this->lpLabel41->Size = System::Drawing::Size(34, 22);
			   this->lpLabel41->TabIndex = 0;
			   this->lpLabel41->Text = L"x +";
			   // 
			   // lpText41
			   // 
			   this->lpText41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText41->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText41->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText41->Location = System::Drawing::Point(4, 5);
			   this->lpText41->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText41->Name = L"lpText41";
			   this->lpText41->Size = System::Drawing::Size(42, 30);
			   this->lpText41->TabIndex = 26;
			   this->lpText41->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText41_KeyPress);
			   this->lpText41->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText41_Leave);
			   // 
			   // lpPanel3
			   // 
			   this->lpPanel3->Controls->Add(this->lpLabel35);
			   this->lpPanel3->Controls->Add(this->lpText35);
			   this->lpPanel3->Controls->Add(this->lpLabel34);
			   this->lpPanel3->Controls->Add(this->lpText34);
			   this->lpPanel3->Controls->Add(this->lpLabel33);
			   this->lpPanel3->Controls->Add(this->lpText33);
			   this->lpPanel3->Controls->Add(this->lpLabel32);
			   this->lpPanel3->Controls->Add(this->lpText32);
			   this->lpPanel3->Controls->Add(this->lpLabel31);
			   this->lpPanel3->Controls->Add(this->lpText31);
			   this->lpPanel3->Location = System::Drawing::Point(77, 318);
			   this->lpPanel3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpPanel3->Name = L"lpPanel3";
			   this->lpPanel3->Size = System::Drawing::Size(455, 47);
			   this->lpPanel3->TabIndex = 4;
			   // 
			   // lpLabel35
			   // 
			   this->lpLabel35->AutoSize = true;
			   this->lpLabel35->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel35->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel35->Location = System::Drawing::Point(429, 10);
			   this->lpLabel35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel35->Name = L"lpLabel35";
			   this->lpLabel35->Size = System::Drawing::Size(19, 22);
			   this->lpLabel35->TabIndex = 0;
			   this->lpLabel35->Text = L"x";
			   // 
			   // lpText35
			   // 
			   this->lpText35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText35->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText35->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText35->Location = System::Drawing::Point(382, 5);
			   this->lpText35->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText35->Name = L"lpText35";
			   this->lpText35->Size = System::Drawing::Size(42, 30);
			   this->lpText35->TabIndex = 24;
			   this->lpText35->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText35_KeyPress);
			   this->lpText35->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText35_Leave);
			   // 
			   // lpLabel34
			   // 
			   this->lpLabel34->AutoSize = true;
			   this->lpLabel34->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel34->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel34->Location = System::Drawing::Point(334, 10);
			   this->lpLabel34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel34->Name = L"lpLabel34";
			   this->lpLabel34->Size = System::Drawing::Size(34, 22);
			   this->lpLabel34->TabIndex = 0;
			   this->lpLabel34->Text = L"x +";
			   // 
			   // lpText34
			   // 
			   this->lpText34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText34->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText34->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText34->Location = System::Drawing::Point(288, 5);
			   this->lpText34->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText34->Name = L"lpText34";
			   this->lpText34->Size = System::Drawing::Size(42, 30);
			   this->lpText34->TabIndex = 23;
			   this->lpText34->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText34_KeyPress);
			   this->lpText34->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText34_Leave);
			   // 
			   // lpLabel33
			   // 
			   this->lpLabel33->AutoSize = true;
			   this->lpLabel33->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel33->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel33->Location = System::Drawing::Point(239, 10);
			   this->lpLabel33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel33->Name = L"lpLabel33";
			   this->lpLabel33->Size = System::Drawing::Size(34, 22);
			   this->lpLabel33->TabIndex = 0;
			   this->lpLabel33->Text = L"x +";
			   // 
			   // lpText33
			   // 
			   this->lpText33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText33->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText33->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText33->Location = System::Drawing::Point(190, 5);
			   this->lpText33->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText33->Name = L"lpText33";
			   this->lpText33->Size = System::Drawing::Size(42, 30);
			   this->lpText33->TabIndex = 22;
			   this->lpText33->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText33_KeyPress);
			   this->lpText33->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText33_Leave);
			   // 
			   // lpLabel32
			   // 
			   this->lpLabel32->AutoSize = true;
			   this->lpLabel32->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel32->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel32->Location = System::Drawing::Point(143, 10);
			   this->lpLabel32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel32->Name = L"lpLabel32";
			   this->lpLabel32->Size = System::Drawing::Size(34, 22);
			   this->lpLabel32->TabIndex = 0;
			   this->lpLabel32->Text = L"x +";
			   // 
			   // lpText32
			   // 
			   this->lpText32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText32->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText32->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText32->Location = System::Drawing::Point(97, 5);
			   this->lpText32->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText32->Name = L"lpText32";
			   this->lpText32->Size = System::Drawing::Size(42, 30);
			   this->lpText32->TabIndex = 21;
			   this->lpText32->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText32_KeyPress);
			   this->lpText32->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText32_Leave);
			   // 
			   // lpLabel31
			   // 
			   this->lpLabel31->AutoSize = true;
			   this->lpLabel31->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel31->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel31->Location = System::Drawing::Point(51, 10);
			   this->lpLabel31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel31->Name = L"lpLabel31";
			   this->lpLabel31->Size = System::Drawing::Size(34, 22);
			   this->lpLabel31->TabIndex = 0;
			   this->lpLabel31->Text = L"x +";
			   // 
			   // lpText31
			   // 
			   this->lpText31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText31->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText31->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText31->Location = System::Drawing::Point(4, 5);
			   this->lpText31->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText31->Name = L"lpText31";
			   this->lpText31->Size = System::Drawing::Size(42, 30);
			   this->lpText31->TabIndex = 20;
			   this->lpText31->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText31_KeyPress);
			   this->lpText31->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText31_Leave);
			   // 
			   // lpPanel2
			   // 
			   this->lpPanel2->Controls->Add(this->lpLabel25);
			   this->lpPanel2->Controls->Add(this->lpText25);
			   this->lpPanel2->Controls->Add(this->lpLabel24);
			   this->lpPanel2->Controls->Add(this->lpText24);
			   this->lpPanel2->Controls->Add(this->lpLabel23);
			   this->lpPanel2->Controls->Add(this->lpText23);
			   this->lpPanel2->Controls->Add(this->lpLabel22);
			   this->lpPanel2->Controls->Add(this->lpText22);
			   this->lpPanel2->Controls->Add(this->lpLabel21);
			   this->lpPanel2->Controls->Add(this->lpText21);
			   this->lpPanel2->Location = System::Drawing::Point(77, 260);
			   this->lpPanel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpPanel2->Name = L"lpPanel2";
			   this->lpPanel2->Size = System::Drawing::Size(455, 47);
			   this->lpPanel2->TabIndex = 3;
			   // 
			   // lpLabel25
			   // 
			   this->lpLabel25->AutoSize = true;
			   this->lpLabel25->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel25->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel25->Location = System::Drawing::Point(429, 10);
			   this->lpLabel25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel25->Name = L"lpLabel25";
			   this->lpLabel25->Size = System::Drawing::Size(19, 22);
			   this->lpLabel25->TabIndex = 0;
			   this->lpLabel25->Text = L"x";
			   // 
			   // lpText25
			   // 
			   this->lpText25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText25->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText25->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText25->Location = System::Drawing::Point(382, 5);
			   this->lpText25->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText25->Name = L"lpText25";
			   this->lpText25->Size = System::Drawing::Size(42, 30);
			   this->lpText25->TabIndex = 18;
			   this->lpText25->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText25_KeyPress);
			   this->lpText25->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText25_Leave);
			   // 
			   // lpLabel24
			   // 
			   this->lpLabel24->AutoSize = true;
			   this->lpLabel24->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel24->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel24->Location = System::Drawing::Point(334, 10);
			   this->lpLabel24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel24->Name = L"lpLabel24";
			   this->lpLabel24->Size = System::Drawing::Size(34, 22);
			   this->lpLabel24->TabIndex = 0;
			   this->lpLabel24->Text = L"x +";
			   // 
			   // lpText24
			   // 
			   this->lpText24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText24->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText24->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText24->Location = System::Drawing::Point(288, 5);
			   this->lpText24->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText24->Name = L"lpText24";
			   this->lpText24->Size = System::Drawing::Size(42, 30);
			   this->lpText24->TabIndex = 17;
			   this->lpText24->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText24_KeyPress);
			   this->lpText24->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText24_Leave);
			   // 
			   // lpLabel23
			   // 
			   this->lpLabel23->AutoSize = true;
			   this->lpLabel23->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel23->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel23->Location = System::Drawing::Point(239, 10);
			   this->lpLabel23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel23->Name = L"lpLabel23";
			   this->lpLabel23->Size = System::Drawing::Size(34, 22);
			   this->lpLabel23->TabIndex = 0;
			   this->lpLabel23->Text = L"x +";
			   // 
			   // lpText23
			   // 
			   this->lpText23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText23->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText23->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText23->Location = System::Drawing::Point(190, 5);
			   this->lpText23->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText23->Name = L"lpText23";
			   this->lpText23->Size = System::Drawing::Size(42, 30);
			   this->lpText23->TabIndex = 16;
			   this->lpText23->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText23_KeyPress);
			   this->lpText23->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText23_Leave);
			   // 
			   // lpLabel22
			   // 
			   this->lpLabel22->AutoSize = true;
			   this->lpLabel22->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel22->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel22->Location = System::Drawing::Point(143, 10);
			   this->lpLabel22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel22->Name = L"lpLabel22";
			   this->lpLabel22->Size = System::Drawing::Size(34, 22);
			   this->lpLabel22->TabIndex = 0;
			   this->lpLabel22->Text = L"x +";
			   // 
			   // lpText22
			   // 
			   this->lpText22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText22->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText22->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText22->Location = System::Drawing::Point(97, 5);
			   this->lpText22->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText22->Name = L"lpText22";
			   this->lpText22->Size = System::Drawing::Size(42, 30);
			   this->lpText22->TabIndex = 15;
			   this->lpText22->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText22_KeyPress);
			   this->lpText22->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText22_Leave);
			   // 
			   // lpLabel21
			   // 
			   this->lpLabel21->AutoSize = true;
			   this->lpLabel21->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel21->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel21->Location = System::Drawing::Point(51, 10);
			   this->lpLabel21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel21->Name = L"lpLabel21";
			   this->lpLabel21->Size = System::Drawing::Size(34, 22);
			   this->lpLabel21->TabIndex = 0;
			   this->lpLabel21->Text = L"x +";
			   // 
			   // lpText21
			   // 
			   this->lpText21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText21->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText21->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText21->Location = System::Drawing::Point(4, 5);
			   this->lpText21->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText21->Name = L"lpText21";
			   this->lpText21->Size = System::Drawing::Size(42, 30);
			   this->lpText21->TabIndex = 14;
			   this->lpText21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText21_KeyPress);
			   this->lpText21->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText21_Leave);
			   // 
			   // lpPanel1
			   // 
			   this->lpPanel1->Controls->Add(this->lpLabel15);
			   this->lpPanel1->Controls->Add(this->lpText15);
			   this->lpPanel1->Controls->Add(this->lpLabel14);
			   this->lpPanel1->Controls->Add(this->lpText14);
			   this->lpPanel1->Controls->Add(this->lpLabel13);
			   this->lpPanel1->Controls->Add(this->lpText13);
			   this->lpPanel1->Controls->Add(this->lpLabel12);
			   this->lpPanel1->Controls->Add(this->lpText12);
			   this->lpPanel1->Controls->Add(this->lpLabel11);
			   this->lpPanel1->Controls->Add(this->lpText11);
			   this->lpPanel1->Location = System::Drawing::Point(77, 202);
			   this->lpPanel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpPanel1->Name = L"lpPanel1";
			   this->lpPanel1->Size = System::Drawing::Size(455, 47);
			   this->lpPanel1->TabIndex = 2;
			   // 
			   // lpLabel15
			   // 
			   this->lpLabel15->AutoSize = true;
			   this->lpLabel15->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel15->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel15->Location = System::Drawing::Point(429, 10);
			   this->lpLabel15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel15->Name = L"lpLabel15";
			   this->lpLabel15->Size = System::Drawing::Size(19, 22);
			   this->lpLabel15->TabIndex = 0;
			   this->lpLabel15->Text = L"x";
			   // 
			   // lpText15
			   // 
			   this->lpText15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText15->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText15->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText15->Location = System::Drawing::Point(382, 5);
			   this->lpText15->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText15->Name = L"lpText15";
			   this->lpText15->Size = System::Drawing::Size(42, 30);
			   this->lpText15->TabIndex = 12;
			   this->lpText15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText15_KeyPress);
			   this->lpText15->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText15_Leave);
			   // 
			   // lpLabel14
			   // 
			   this->lpLabel14->AutoSize = true;
			   this->lpLabel14->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel14->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel14->Location = System::Drawing::Point(334, 10);
			   this->lpLabel14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel14->Name = L"lpLabel14";
			   this->lpLabel14->Size = System::Drawing::Size(34, 22);
			   this->lpLabel14->TabIndex = 0;
			   this->lpLabel14->Text = L"x +";
			   // 
			   // lpText14
			   // 
			   this->lpText14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText14->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText14->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText14->Location = System::Drawing::Point(288, 5);
			   this->lpText14->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText14->Name = L"lpText14";
			   this->lpText14->Size = System::Drawing::Size(42, 30);
			   this->lpText14->TabIndex = 11;
			   this->lpText14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText14_KeyPress);
			   this->lpText14->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText14_Leave);
			   // 
			   // lpLabel13
			   // 
			   this->lpLabel13->AutoSize = true;
			   this->lpLabel13->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel13->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel13->Location = System::Drawing::Point(239, 10);
			   this->lpLabel13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel13->Name = L"lpLabel13";
			   this->lpLabel13->Size = System::Drawing::Size(34, 22);
			   this->lpLabel13->TabIndex = 0;
			   this->lpLabel13->Text = L"x +";
			   // 
			   // lpText13
			   // 
			   this->lpText13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText13->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText13->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText13->Location = System::Drawing::Point(190, 5);
			   this->lpText13->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText13->Name = L"lpText13";
			   this->lpText13->Size = System::Drawing::Size(42, 30);
			   this->lpText13->TabIndex = 10;
			   this->lpText13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText13_KeyPress);
			   this->lpText13->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText13_Leave);
			   // 
			   // lpLabel12
			   // 
			   this->lpLabel12->AutoSize = true;
			   this->lpLabel12->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel12->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel12->Location = System::Drawing::Point(143, 10);
			   this->lpLabel12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel12->Name = L"lpLabel12";
			   this->lpLabel12->Size = System::Drawing::Size(34, 22);
			   this->lpLabel12->TabIndex = 0;
			   this->lpLabel12->Text = L"x +";
			   // 
			   // lpText12
			   // 
			   this->lpText12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText12->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText12->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText12->Location = System::Drawing::Point(97, 5);
			   this->lpText12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText12->Name = L"lpText12";
			   this->lpText12->Size = System::Drawing::Size(42, 30);
			   this->lpText12->TabIndex = 9;
			   this->lpText12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText12_KeyPress);
			   this->lpText12->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText12_Leave);
			   // 
			   // lpLabel11
			   // 
			   this->lpLabel11->AutoSize = true;
			   this->lpLabel11->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lpLabel11->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpLabel11->Location = System::Drawing::Point(51, 10);
			   this->lpLabel11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lpLabel11->Name = L"lpLabel11";
			   this->lpLabel11->Size = System::Drawing::Size(34, 22);
			   this->lpLabel11->TabIndex = 0;
			   this->lpLabel11->Text = L"x +";
			   // 
			   // lpText11
			   // 
			   this->lpText11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->lpText11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->lpText11->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lpText11->ForeColor = System::Drawing::SystemColors::Window;
			   this->lpText11->Location = System::Drawing::Point(4, 5);
			   this->lpText11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->lpText11->Name = L"lpText11";
			   this->lpText11->Size = System::Drawing::Size(42, 30);
			   this->lpText11->TabIndex = 8;
			   this->lpText11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::lpText11_KeyPress);
			   this->lpText11->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::lpText11_Leave);
			   // 
			   // maxmin
			   // 
			   this->maxmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)));
			   this->maxmin->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->maxmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->maxmin->ForeColor = System::Drawing::SystemColors::Window;
			   this->maxmin->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"max(f)", L"min(f)" });
			   this->maxmin->Location = System::Drawing::Point(1, 7);
			   this->maxmin->Name = L"maxmin";
			   this->maxmin->Size = System::Drawing::Size(79, 30);
			   this->maxmin->TabIndex = 2;
			   // 
			   // ufPanel
			   // 
			   this->ufPanel->Controls->Add(this->ufLabel5);
			   this->ufPanel->Controls->Add(this->maxmin);
			   this->ufPanel->Controls->Add(this->ufText5);
			   this->ufPanel->Controls->Add(this->ufLabel4);
			   this->ufPanel->Controls->Add(this->ufText4);
			   this->ufPanel->Controls->Add(this->ufLabel3);
			   this->ufPanel->Controls->Add(this->ufText3);
			   this->ufPanel->Controls->Add(this->ufLabel2);
			   this->ufPanel->Controls->Add(this->ufText2);
			   this->ufPanel->Controls->Add(this->ufLabel1);
			   this->ufPanel->Controls->Add(this->ufText1);
			   this->ufPanel->Location = System::Drawing::Point(81, 110);
			   this->ufPanel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->ufPanel->Name = L"ufPanel";
			   this->ufPanel->Size = System::Drawing::Size(575, 47);
			   this->ufPanel->TabIndex = 1;
			   // 
			   // ufLabel5
			   // 
			   this->ufLabel5->AutoSize = true;
			   this->ufLabel5->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ufLabel5->ForeColor = System::Drawing::SystemColors::Window;
			   this->ufLabel5->Location = System::Drawing::Point(519, 13);
			   this->ufLabel5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->ufLabel5->Name = L"ufLabel5";
			   this->ufLabel5->Size = System::Drawing::Size(19, 22);
			   this->ufLabel5->TabIndex = 0;
			   this->ufLabel5->Text = L"x";
			   // 
			   // ufText5
			   // 
			   this->ufText5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->ufText5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->ufText5->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->ufText5->ForeColor = System::Drawing::SystemColors::Window;
			   this->ufText5->Location = System::Drawing::Point(472, 8);
			   this->ufText5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->ufText5->Name = L"ufText5";
			   this->ufText5->Size = System::Drawing::Size(42, 30);
			   this->ufText5->TabIndex = 7;
			   this->ufText5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::ufText5_KeyPress);
			   this->ufText5->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::ufText5_Leave);
			   // 
			   // ufLabel4
			   // 
			   this->ufLabel4->AutoSize = true;
			   this->ufLabel4->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ufLabel4->ForeColor = System::Drawing::SystemColors::Window;
			   this->ufLabel4->Location = System::Drawing::Point(424, 13);
			   this->ufLabel4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->ufLabel4->Name = L"ufLabel4";
			   this->ufLabel4->Size = System::Drawing::Size(38, 22);
			   this->ufLabel4->TabIndex = 0;
			   this->ufLabel4->Text = L"x + ";
			   // 
			   // ufText4
			   // 
			   this->ufText4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->ufText4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->ufText4->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->ufText4->ForeColor = System::Drawing::SystemColors::Window;
			   this->ufText4->Location = System::Drawing::Point(378, 8);
			   this->ufText4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->ufText4->Name = L"ufText4";
			   this->ufText4->Size = System::Drawing::Size(42, 30);
			   this->ufText4->TabIndex = 6;
			   this->ufText4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::ufText4_KeyPress);
			   this->ufText4->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::ufText4_Leave);
			   // 
			   // ufLabel3
			   // 
			   this->ufLabel3->AutoSize = true;
			   this->ufLabel3->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ufLabel3->ForeColor = System::Drawing::SystemColors::Window;
			   this->ufLabel3->Location = System::Drawing::Point(329, 13);
			   this->ufLabel3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->ufLabel3->Name = L"ufLabel3";
			   this->ufLabel3->Size = System::Drawing::Size(38, 22);
			   this->ufLabel3->TabIndex = 0;
			   this->ufLabel3->Text = L"x + ";
			   // 
			   // ufText3
			   // 
			   this->ufText3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->ufText3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->ufText3->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->ufText3->ForeColor = System::Drawing::SystemColors::Window;
			   this->ufText3->Location = System::Drawing::Point(280, 8);
			   this->ufText3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->ufText3->Name = L"ufText3";
			   this->ufText3->Size = System::Drawing::Size(42, 30);
			   this->ufText3->TabIndex = 5;
			   this->ufText3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::ufText3_KeyPress);
			   this->ufText3->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::ufText3_Leave);
			   // 
			   // ufLabel2
			   // 
			   this->ufLabel2->AutoSize = true;
			   this->ufLabel2->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ufLabel2->ForeColor = System::Drawing::SystemColors::Window;
			   this->ufLabel2->Location = System::Drawing::Point(233, 13);
			   this->ufLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->ufLabel2->Name = L"ufLabel2";
			   this->ufLabel2->Size = System::Drawing::Size(38, 22);
			   this->ufLabel2->TabIndex = 0;
			   this->ufLabel2->Text = L"x + ";
			   // 
			   // ufText2
			   // 
			   this->ufText2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->ufText2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->ufText2->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->ufText2->ForeColor = System::Drawing::SystemColors::Window;
			   this->ufText2->Location = System::Drawing::Point(187, 8);
			   this->ufText2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->ufText2->Name = L"ufText2";
			   this->ufText2->Size = System::Drawing::Size(42, 30);
			   this->ufText2->TabIndex = 4;
			   this->ufText2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::ufText2_KeyPress);
			   this->ufText2->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::ufText2_Leave);
			   // 
			   // ufLabel1
			   // 
			   this->ufLabel1->AutoSize = true;
			   this->ufLabel1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ufLabel1->ForeColor = System::Drawing::SystemColors::Window;
			   this->ufLabel1->Location = System::Drawing::Point(141, 13);
			   this->ufLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->ufLabel1->Name = L"ufLabel1";
			   this->ufLabel1->Size = System::Drawing::Size(38, 22);
			   this->ufLabel1->TabIndex = 0;
			   this->ufLabel1->Text = L"x + ";
			   // 
			   // ufText1
			   // 
			   this->ufText1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				   static_cast<System::Int32>(static_cast<System::Byte>(45)));
			   this->ufText1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->ufText1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->ufText1->ForeColor = System::Drawing::SystemColors::Window;
			   this->ufText1->Location = System::Drawing::Point(94, 8);
			   this->ufText1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->ufText1->Name = L"ufText1";
			   this->ufText1->Size = System::Drawing::Size(42, 30);
			   this->ufText1->TabIndex = 3;
			   this->ufText1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lpNewTaskDialog::ufText1_KeyPress);
			   this->ufText1->Leave += gcnew System::EventHandler(this, &lpNewTaskDialog::ufText1_Leave);
			   // 
			   // lpNewTaskDialog
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)));
			   this->ClientSize = System::Drawing::Size(674, 582);
			   this->Controls->Add(this->ufPanel);
			   this->Controls->Add(this->bPanel);
			   this->Controls->Add(this->lpPanel5);
			   this->Controls->Add(this->lpPanel4);
			   this->Controls->Add(this->lpPanel3);
			   this->Controls->Add(this->lpPanel2);
			   this->Controls->Add(this->lpPanel1);
			   this->Controls->Add(this->ohranicenie);
			   this->Controls->Add(this->bottomPanel);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->pocetOhraniceni);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->pocetPremennych);
			   this->Controls->Add(this->LabelFirstAction);
			   this->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->Name = L"lpNewTaskDialog";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			   this->Text = L"Nová úloha";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetPremennych))->EndInit();
			   this->bottomPanel->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetOhraniceni))->EndInit();
			   this->bPanel->ResumeLayout(false);
			   this->bPanel->PerformLayout();
			   this->lpPanel5->ResumeLayout(false);
			   this->lpPanel5->PerformLayout();
			   this->lpPanel4->ResumeLayout(false);
			   this->lpPanel4->PerformLayout();
			   this->lpPanel3->ResumeLayout(false);
			   this->lpPanel3->PerformLayout();
			   this->lpPanel2->ResumeLayout(false);
			   this->lpPanel2->PerformLayout();
			   this->lpPanel1->ResumeLayout(false);
			   this->lpPanel1->PerformLayout();
			   this->ufPanel->ResumeLayout(false);
			   this->ufPanel->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	public: int getpocetPremennych() {
		return (int)this->pocetPremennych->Value;
	}

	public: int getpocetOhraniceni() {
		return (int)this->pocetOhraniceni->Value;
	}

	public: double** getMatrix() {
		double** matrix = 0;
		matrix = new double* [(int)this->pocetOhraniceni->Value];

		for (int h = 0; h < (int)this->pocetOhraniceni->Value; h++)
		{
			matrix[h] = new double[(int)this->pocetPremennych->Value+1];

		}

		matrix[0][0] = System::Convert::ToDouble(lpText11->Text);
		matrix[0][1] = System::Convert::ToDouble(lpText12->Text);

		try {

			if (lpText13->Text != "") matrix[0][2] = System::Convert::ToDouble(lpText13->Text);
			if (lpText14->Text != "") matrix[0][3] = System::Convert::ToDouble(lpText14->Text);
			if (lpText15->Text != "") matrix[0][4] = System::Convert::ToDouble(lpText15->Text);

			if (lpText21->Text != "") matrix[1][0] = System::Convert::ToDouble(lpText21->Text);
			if (lpText22->Text != "") matrix[1][1] = System::Convert::ToDouble(lpText22->Text);
			if (lpText23->Text != "") matrix[1][2] = System::Convert::ToDouble(lpText23->Text);
			if (lpText24->Text != "") matrix[1][3] = System::Convert::ToDouble(lpText24->Text);
			if (lpText25->Text != "") matrix[1][4] = System::Convert::ToDouble(lpText25->Text);

			if (lpText31->Text != "") matrix[2][0] = System::Convert::ToDouble(lpText31->Text);
			if (lpText32->Text != "") matrix[2][1] = System::Convert::ToDouble(lpText32->Text);
			if (lpText33->Text != "") matrix[2][2] = System::Convert::ToDouble(lpText33->Text);
			if (lpText34->Text != "") matrix[2][3] = System::Convert::ToDouble(lpText34->Text);
			if (lpText35->Text != "") matrix[2][4] = System::Convert::ToDouble(lpText35->Text);

			if (lpText41->Text != "") matrix[3][0] = System::Convert::ToDouble(lpText41->Text);
			if (lpText42->Text != "") matrix[3][1] = System::Convert::ToDouble(lpText42->Text);
			if (lpText43->Text != "") matrix[3][2] = System::Convert::ToDouble(lpText43->Text);
			if (lpText44->Text != "") matrix[3][3] = System::Convert::ToDouble(lpText44->Text);
			if (lpText45->Text != "") matrix[3][4] = System::Convert::ToDouble(lpText45->Text);

			if (lpText51->Text != "") matrix[4][0] = System::Convert::ToDouble(lpText51->Text);
			if (lpText52->Text != "") matrix[4][1] = System::Convert::ToDouble(lpText52->Text);
			if (lpText53->Text != "") matrix[4][2] = System::Convert::ToDouble(lpText53->Text);
			if (lpText54->Text != "") matrix[4][3] = System::Convert::ToDouble(lpText54->Text);
			if (lpText55->Text != "") matrix[4][4] = System::Convert::ToDouble(lpText55->Text);

			if (bText1->Text != "") matrix[0][System::Convert::ToInt32(pocetPremennych->Value)] = System::Convert::ToDouble(bText1->Text);
			if (bText2->Text != "") matrix[1][System::Convert::ToInt32(pocetPremennych->Value)] = System::Convert::ToDouble(bText2->Text);
			if (bText3->Text != "") matrix[2][System::Convert::ToInt32(pocetPremennych->Value)] = System::Convert::ToDouble(bText3->Text);
			if (bText4->Text != "") matrix[3][System::Convert::ToInt32(pocetPremennych->Value)] = System::Convert::ToDouble(bText4->Text);
			if (bText5->Text != "") matrix[4][System::Convert::ToInt32(pocetPremennych->Value)] = System::Convert::ToDouble(bText5->Text);
		}
		catch (...) {
		}


		return matrix;
	}

	public: String^ getUF() {
		String^ output = "";

		output = maxmin->SelectedItem->ToString() + " = " + ufText1->Text + "x" + subscript("1");
		if (System::Convert::ToDouble(ufText2->Text) > 0) output += " + " + ufText2->Text + "x" + subscript("2");
		else if (System::Convert::ToDouble(ufText2->Text) < 0) output += " " + ufText2->Text + "x" + subscript("2");
		if (pocetPremennych->Value > 2 && System::Convert::ToDouble(ufText3->Text) > 0 ) output += " + " + ufText3->Text + "x" + subscript("3");
		else if (pocetPremennych->Value > 2 && System::Convert::ToDouble(ufText3->Text) < 0) output += " " + ufText3->Text + "x" + subscript("3");
		if (pocetPremennych->Value > 3 && System::Convert::ToDouble(ufText4->Text) > 0) output += " + " + ufText4->Text + "x" + subscript("4");
		else if (pocetPremennych->Value > 3 &&System::Convert::ToDouble(ufText4->Text) < 0) output += " " + ufText4->Text + "x" + subscript("4");
		if (pocetPremennych->Value > 4 && System::Convert::ToDouble(ufText5->Text) > 0) output += " + " + ufText5->Text + "x" + subscript("5");
		else if (pocetPremennych->Value > 4 && System::Convert::ToDouble(ufText5->Text) < 0) output += " " + ufText5->Text + "x" + subscript("5");

		return output;
	}

	public: int getValueOnIndex(int index) {
		int value = 0;
		if (index == 1) value = System::Convert::ToInt32(ufText1->Text);
		if (index > pocetPremennych->Value) value = 0;
		else {
			if (index == 2) value = System::Convert::ToInt32(ufText2->Text);
			if (index == 3) value = System::Convert::ToInt32(ufText3->Text);
			if (index == 4) value = System::Convert::ToInt32(ufText4->Text);
			if (index == 5) value = System::Convert::ToInt32(ufText5->Text);
		}

		return value;
	}

	public: Boolean getMaxMin() {
		if (maxmin->SelectedIndex) return false;
		else return true;
	}

	public: void setVisuals() {
		pocetPremennych->Value = 2;
		pocetOhraniceni->Value = 1;

		maxmin->SelectedIndex = 0;
		ufLabel1->Text = "x" + subscript("1");
		ufLabel2->Text = "x" + subscript("2");
		ufLabel3->Text = "x" + subscript("3");
		ufLabel4->Text = "x" + subscript("4");
		ufLabel5->Text = "x" + subscript("5");

		lpLabel11->Text = "x" + subscript("1");
		lpLabel12->Text = "x" + subscript("2");
		lpLabel13->Text = "x" + subscript("3");
		lpLabel14->Text = "x" + subscript("4");
		lpLabel15->Text = "x" + subscript("5");

		lpLabel21->Text = "x" + subscript("1");
		lpLabel22->Text = "x" + subscript("2");
		lpLabel23->Text = "x" + subscript("3");
		lpLabel24->Text = "x" + subscript("4");
		lpLabel25->Text = "x" + subscript("5");

		lpLabel31->Text = "x" + subscript("1");
		lpLabel32->Text = "x" + subscript("2");
		lpLabel33->Text = "x" + subscript("3");
		lpLabel34->Text = "x" + subscript("4");
		lpLabel35->Text = "x" + subscript("5");

		lpLabel41->Text = "x" + subscript("1");
		lpLabel42->Text = "x" + subscript("2");
		lpLabel43->Text = "x" + subscript("3");
		lpLabel44->Text = "x" + subscript("4");
		lpLabel45->Text = "x" + subscript("5");

		lpLabel51->Text = "x" + subscript("1");
		lpLabel52->Text = "x" + subscript("2");
		lpLabel53->Text = "x" + subscript("3");
		lpLabel54->Text = "x" + subscript("4");
		lpLabel55->Text = "x" + subscript("5");


	}

	private: Boolean vsetkyVyplnene() {
		if (lpText11->Text == "") return false;
		if (lpText12->Text == "") return false;
		if (bText1->Text == "") return false;

		if (ufText1->Text == "") return false;
		if (ufText2->Text == "") return false;

		if (pocetPremennych->Value == 3) {
			if (ufText3->Text == "") return false;
		}
		if (pocetPremennych->Value == 4) {
			if (ufText3->Text == "") return false;
			if (ufText4->Text == "") return false;
		}
		if (pocetPremennych->Value == 5) {
			if (ufText3->Text == "") return false;
			if (ufText4->Text == "") return false;
			if (ufText5->Text == "") return false;
		}

		if (pocetOhraniceni->Value == 2) {
			if (lpText21->Text == "") return false;
			if (lpText22->Text == "") return false;
			if (bText2->Text == "") return false;
			if (pocetPremennych->Value == 3) {
				if (lpText13->Text == "") return false;
				if (lpText23->Text == "") return false;
			}

			if (pocetPremennych->Value == 4) {
				if (lpText13->Text == "") return false;
				if (lpText14->Text == "") return false;
				if (lpText23->Text == "") return false;
				if (lpText24->Text == "") return false;
			}
			if (pocetPremennych->Value == 5) {
				if (lpText13->Text == "") return false;
				if (lpText14->Text == "") return false;
				if (lpText15->Text == "") return false;
				if (lpText23->Text == "") return false;
				if (lpText24->Text == "") return false;
				if (lpText25->Text == "") return false;
			}

		}

		if (pocetOhraniceni->Value == 3) {
			if (lpText21->Text == "") return false;
			if (lpText22->Text == "") return false;
			if (lpText31->Text == "") return false;
			if (lpText32->Text == "") return false;
			if (bText3->Text == "") return false;
			if (pocetPremennych->Value == 3) {
				if (lpText13->Text == "") return false;
				if (lpText23->Text == "") return false;
				if (lpText33->Text == "") return false;
			}

			if (pocetPremennych->Value == 4) {
				if (lpText13->Text == "") return false;
				if (lpText14->Text == "") return false;
				if (lpText23->Text == "") return false;
				if (lpText24->Text == "") return false;
				if (lpText33->Text == "") return false;
				if (lpText34->Text == "") return false;
			}
			if (pocetPremennych->Value == 5) {
				if (lpText13->Text == "") return false;
				if (lpText14->Text == "") return false;
				if (lpText15->Text == "") return false;
				if (lpText23->Text == "") return false;
				if (lpText24->Text == "") return false;
				if (lpText25->Text == "") return false;
				if (lpText33->Text == "") return false;
				if (lpText34->Text == "") return false;
				if (lpText35->Text == "") return false;
			}

		}
		if (pocetOhraniceni->Value == 4) {
			if (lpText21->Text == "") return false;
			if (lpText22->Text == "") return false;
			if (lpText31->Text == "") return false;
			if (lpText32->Text == "") return false;
			if (lpText41->Text == "") return false;
			if (lpText42->Text == "") return false;
			if (bText4->Text == "") return false;
			if (pocetPremennych->Value == 3) {
				if (lpText13->Text == "") return false;
				if (lpText23->Text == "") return false;
				if (lpText33->Text == "") return false;
				if (lpText43->Text == "") return false;
			}

			if (pocetPremennych->Value == 4) {
				if (lpText13->Text == "") return false;
				if (lpText23->Text == "") return false;
				if (lpText33->Text == "") return false;
				if (lpText43->Text == "") return false;
				if (lpText14->Text == "") return false;
				if (lpText24->Text == "") return false;
				if (lpText34->Text == "") return false;
				if (lpText44->Text == "") return false;
			}
			if (pocetPremennych->Value == 5) {
				if (lpText13->Text == "") return false;
				if (lpText23->Text == "") return false;
				if (lpText33->Text == "") return false;
				if (lpText43->Text == "") return false;
				if (lpText14->Text == "") return false;
				if (lpText24->Text == "") return false;
				if (lpText34->Text == "") return false;
				if (lpText44->Text == "") return false;
				if (lpText15->Text == "") return false;
				if (lpText25->Text == "") return false;
				if (lpText35->Text == "") return false;
				if (lpText45->Text == "") return false;
			}
		}
		if (pocetOhraniceni->Value == 5) {
			if (lpText21->Text == "") return false;
			if (lpText22->Text == "") return false;
			if (lpText31->Text == "") return false;
			if (lpText32->Text == "") return false;
			if (lpText41->Text == "") return false;
			if (lpText42->Text == "") return false;
			if (lpText51->Text == "") return false;
			if (lpText52->Text == "") return false;
			if (bText5->Text == "") return false;
			if (pocetPremennych->Value == 3) {
				if (lpText13->Text == "") return false;
				if (lpText23->Text == "") return false;
				if (lpText33->Text == "") return false;
				if (lpText43->Text == "") return false;
				if (lpText53->Text == "") return false;
			}
			if (pocetPremennych->Value == 4) {
				if (lpText13->Text == "") return false;
				if (lpText23->Text == "") return false;
				if (lpText33->Text == "") return false;
				if (lpText43->Text == "") return false;
				if (lpText53->Text == "") return false;
				if (lpText14->Text == "") return false;
				if (lpText24->Text == "") return false;
				if (lpText34->Text == "") return false;
				if (lpText44->Text == "") return false;
				if (lpText54->Text == "") return false;
			}
			if (pocetPremennych->Value == 5) {
				if (lpText13->Text == "") return false;
				if (lpText23->Text == "") return false;
				if (lpText33->Text == "") return false;
				if (lpText43->Text == "") return false;
				if (lpText53->Text == "") return false;
				if (lpText14->Text == "") return false;
				if (lpText24->Text == "") return false;
				if (lpText34->Text == "") return false;
				if (lpText44->Text == "") return false;
				if (lpText54->Text == "") return false;
				if (lpText15->Text == "") return false;
				if (lpText25->Text == "") return false;
				if (lpText35->Text == "") return false;
				if (lpText45->Text == "") return false;
				if (lpText55->Text == "") return false;
			}
		}

		return true;
	}

	private: Boolean getNulovyRiadok() {
		if (lpText11->Text == "0" && lpText12->Text == "0") {
			if (pocetPremennych->Value == 2)
				return true;
			if (pocetPremennych->Value == 3) {
				if (lpText13->Text == "0")
					return true;
			}
			if (pocetPremennych->Value == 4) {
				if (lpText13->Text == "0" && lpText14->Text == "0")
					return true;
			}
			if (pocetPremennych->Value == 5) {
				if (lpText13->Text == "0" && lpText14->Text == "0" && lpText15->Text == "0")
					return true;
			}
		}

		if (lpText21->Text == "0" && lpText22->Text == "0") {
			if (pocetPremennych->Value == 2)
				return true;
			if (pocetPremennych->Value == 3) {
				if (lpText23->Text == "0")
					return true;
			}
			if (pocetPremennych->Value == 4) {
				if (lpText23->Text == "0" && lpText24->Text == "0")
					return true;
			}
			if (pocetPremennych->Value == 5) {
				if (lpText23->Text == "0" && lpText24->Text == "0" && lpText25->Text == "0")
					return true;
			}
		}

		if (lpText31->Text == "0" && lpText32->Text == "0") {
			if (pocetPremennych->Value == 2)
				return true;
			if (pocetPremennych->Value == 3) {
				if (lpText33->Text == "0")
					return true;
			}
			if (pocetPremennych->Value == 4) {
				if (lpText33->Text == "0" && lpText34->Text == "0")
					return true;
			}
			if (pocetPremennych->Value == 5) {
				if (lpText33->Text == "0" && lpText34->Text == "0" && lpText35->Text == "0")
					return true;
			}
		}

		if (lpText41->Text == "0" && lpText42->Text == "0") {
			if (pocetPremennych->Value == 2)
				return true;
			if (pocetPremennych->Value == 3) {
				if (lpText43->Text == "0")
					return true;
			}
			if (pocetPremennych->Value == 4) {
				if (lpText43->Text == "0" && lpText44->Text == "0")
					return true;
			}
			if (pocetPremennych->Value == 5) {
				if (lpText43->Text == "0" && lpText44->Text == "0" && lpText45->Text == "0")
					return true;
			}
		}

		if (lpText51->Text == "0" && lpText52->Text == "0") {
			if (pocetPremennych->Value == 2)
				return true;
			if (pocetOhraniceni->Value == 3) {
				if (lpText53->Text == "0")
					return true;
			}
			if (pocetPremennych->Value == 4) {
				if (lpText53->Text == "0" && lpText54->Text == "0")
					return true;
			}
			if (pocetPremennych->Value == 5) {
				if (lpText53->Text == "0" && lpText54->Text == "0" && lpText55->Text == "0")
					return true;
			}
		}

		if (ufText1->Text == "0" && ufText2->Text == "0") {
			if (pocetPremennych->Value == 2)
				return true;
			if (pocetOhraniceni->Value == 3) {
				if (ufText3->Text == "0")
					return true;
			}
			if (pocetPremennych->Value == 4) {
				if (ufText3->Text == "0" && ufText4->Text == "0")
					return true;
			}
			if (pocetPremennych->Value == 5) {
				if (ufText2->Text == "0" && ufText4->Text == "0" && ufText5->Text == "0")
					return true;
			}
		}

		return false;
	}

	private: System::Void pocetOhraniceni_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		if (this->pocetOhraniceni->Value == 1) {
			this->lpPanel2->Hide();
			this->lpPanel3->Hide();
			this->lpPanel4->Hide();
			this->lpPanel5->Hide();

			this->lpText21->Text = "";
			this->lpText22->Text = "";
			this->lpText23->Text = "";
			this->lpText24->Text = "";
			this->lpText25->Text = "";

			this->lpText31->Text = "";
			this->lpText32->Text = "";
			this->lpText33->Text = "";
			this->lpText34->Text = "";
			this->lpText35->Text = "";

			this->lpText41->Text = "";
			this->lpText42->Text = "";
			this->lpText43->Text = "";
			this->lpText44->Text = "";
			this->lpText45->Text = "";

			this->lpText51->Text = "";
			this->lpText52->Text = "";
			this->lpText53->Text = "";
			this->lpText54->Text = "";
			this->lpText55->Text = "";

			this->bText2->Text = "";
			this->bText3->Text = "";
			this->bText4->Text = "";
			this->bText5->Text = "";

			bText2->Hide();
			bText3->Hide();
			bText4->Hide();
			bText5->Hide();

			label4->Hide();
			label5->Hide();
			label6->Hide();
			label7->Hide();

			this->ohranicenie->Enabled = true;
			this->ohranicenie->Location = System::Drawing::Point(77, 260);
		}

		if (this->pocetOhraniceni->Value == 2) {
			this->lpPanel2->Show();
			this->lpPanel3->Hide();
			this->lpPanel4->Hide();
			this->lpPanel5->Hide();

			this->lpText31->Text = "";
			this->lpText32->Text = "";
			this->lpText33->Text = "";
			this->lpText34->Text = "";
			this->lpText35->Text = "";

			this->lpText41->Text = "";
			this->lpText42->Text = "";
			this->lpText43->Text = "";
			this->lpText44->Text = "";
			this->lpText45->Text = "";

			this->lpText51->Text = "";
			this->lpText52->Text = "";
			this->lpText53->Text = "";
			this->lpText54->Text = "";
			this->lpText55->Text = "";

			this->bText3->Text = "";
			this->bText4->Text = "";
			this->bText5->Text = "";

			bText2->Show();
			bText3->Hide();
			bText4->Hide();
			bText5->Hide();

			label4->Show();
			label5->Hide();
			label6->Hide();
			label7->Hide();

			this->ohranicenie->Enabled = true;
			this->ohranicenie->Location = System::Drawing::Point(77, 318);
		}
		if (this->pocetOhraniceni->Value == 3) {
			this->lpPanel2->Show();
			this->lpPanel3->Show();
			this->lpPanel4->Hide();
			this->lpPanel5->Hide();

			this->lpText41->Text = "";
			this->lpText42->Text = "";
			this->lpText43->Text = "";
			this->lpText44->Text = "";
			this->lpText45->Text = "";

			this->lpText51->Text = "";
			this->lpText52->Text = "";
			this->lpText53->Text = "";
			this->lpText54->Text = "";
			this->lpText55->Text = "";

			this->bText4->Text = "";
			this->bText5->Text = "";

			bText2->Show();
			bText3->Show();
			bText4->Hide();
			bText5->Hide();

			label4->Show();
			label5->Show();
			label6->Hide();
			label7->Hide();

			this->ohranicenie->Enabled = true;
			this->ohranicenie->Location = System::Drawing::Point(77, 375);
		}
		if (this->pocetOhraniceni->Value == 4) {
			this->lpPanel2->Show();
			this->lpPanel3->Show();
			this->lpPanel4->Show();
			this->lpPanel5->Hide();

			this->lpText51->Text = "";
			this->lpText52->Text = "";
			this->lpText53->Text = "";
			this->lpText54->Text = "";
			this->lpText55->Text = "";

			this->bText5->Text = "";

			bText2->Show();
			bText3->Show();
			bText4->Show();
			bText5->Hide();

			label4->Show();
			label5->Show();
			label6->Show();
			label7->Hide();

			this->ohranicenie->Enabled = true;
			this->ohranicenie->Location = System::Drawing::Point(77, 433);

		}
		if (this->pocetOhraniceni->Value == 5) {
			this->lpPanel2->Show();
			this->lpPanel3->Show();
			this->lpPanel4->Show();
			this->lpPanel5->Show();

			bText2->Show();
			bText3->Show();
			bText4->Show();
			bText5->Show();

			label4->Show();
			label5->Show();
			label6->Show();
			label7->Show();

			this->ohranicenie->Enabled = false;
			this->ohranicenie->Location = System::Drawing::Point(77, 491);	

		}
	}

	private: System::Void pocetPremennych_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		if (this->pocetPremennych->Value == 2) {
			this->lpText13->Hide();
			this->lpText23->Hide();
			this->lpText33->Hide();
			this->lpText43->Hide();
			this->lpText53->Hide();
			this->lpText14->Hide();
			this->lpText24->Hide();
			this->lpText34->Hide();
			this->lpText44->Hide();
			this->lpText54->Hide();
			this->lpText15->Hide();
			this->lpText25->Hide();
			this->lpText35->Hide();
			this->lpText45->Hide();
			this->lpText55->Hide();

			this->lpText13->Text = "";
			this->lpText23->Text = ""; 
			this->lpText33->Text = ""; 
			this->lpText43->Text = ""; 
			this->lpText53->Text = ""; 
			this->lpText14->Text = ""; 
			this->lpText24->Text = ""; 
			this->lpText34->Text = ""; 
			this->lpText44->Text = ""; 
			this->lpText54->Text = ""; 
			this->lpText15->Text = ""; 
			this->lpText25->Text = ""; 
			this->lpText35->Text = ""; 
			this->lpText45->Text = ""; 
			this->lpText55->Text = "";

			this->ufText3->Text = "";
			this->ufText4->Text = "";
			this->ufText5->Text = "";

			this->lpLabel13->Hide();
			this->lpLabel23->Hide();
			this->lpLabel33->Hide();
			this->lpLabel43->Hide();
			this->lpLabel53->Hide();
			this->lpLabel14->Hide();
			this->lpLabel24->Hide();
			this->lpLabel34->Hide();
			this->lpLabel44->Hide();
			this->lpLabel54->Hide();
			this->lpLabel15->Hide();
			this->lpLabel25->Hide();
			this->lpLabel35->Hide();
			this->lpLabel45->Hide();
			this->lpLabel55->Hide();

			this->ufText3->Hide();
			this->ufText4->Hide();
			this->ufText5->Hide();

			this->ufLabel3->Hide();
			this->ufLabel4->Hide();
			this->ufLabel5->Hide();

			this->bPanel->Location = System::Drawing::Point(261, 202);

		}

		if (this->pocetPremennych->Value == 3) {
			this->lpText13->Show();
			this->lpText23->Show();
			this->lpText33->Show();
			this->lpText43->Show();
			this->lpText53->Show();
			this->lpText14->Hide();
			this->lpText24->Hide();
			this->lpText34->Hide();
			this->lpText44->Hide();
			this->lpText54->Hide();
			this->lpText15->Hide();
			this->lpText25->Hide();
			this->lpText35->Hide();
			this->lpText45->Hide();
			this->lpText55->Hide();

		
			this->lpText14->Text = "";
			this->lpText24->Text = "";
			this->lpText34->Text = "";
			this->lpText44->Text = "";
			this->lpText54->Text = "";
			this->lpText15->Text = "";
			this->lpText25->Text = "";
			this->lpText35->Text = "";
			this->lpText45->Text = "";
			this->lpText55->Text = "";

			this->ufText4->Text = "";
			this->ufText5->Text = "";

			this->lpLabel13->Show();
			this->lpLabel23->Show();
			this->lpLabel33->Show();
			this->lpLabel43->Show();
			this->lpLabel53->Show();
			this->lpLabel14->Hide();
			this->lpLabel24->Hide();
			this->lpLabel34->Hide();
			this->lpLabel44->Hide();
			this->lpLabel54->Hide();
			this->lpLabel15->Hide();
			this->lpLabel25->Hide();
			this->lpLabel35->Hide();
			this->lpLabel45->Hide();
			this->lpLabel55->Hide();

			this->ufText3->Show();
			this->ufText4->Hide();
			this->ufText5->Hide();

			this->ufLabel3->Show();
			this->ufLabel4->Hide();
			this->ufLabel5->Hide();

			this->bPanel->Location = System::Drawing::Point(360, 202);

		}

		if (this->pocetPremennych->Value == 4) {
			this->lpText13->Show();
			this->lpText23->Show();
			this->lpText33->Show();
			this->lpText43->Show();
			this->lpText53->Show();
			this->lpText14->Show();
			this->lpText24->Show();
			this->lpText34->Show();
			this->lpText44->Show();
			this->lpText54->Show();
			this->lpText15->Hide();
			this->lpText25->Hide();
			this->lpText35->Hide();
			this->lpText45->Hide();
			this->lpText55->Hide();

			this->lpText15->Text = "";
			this->lpText25->Text = "";
			this->lpText35->Text = "";
			this->lpText45->Text = "";
			this->lpText55->Text = "";

			this->ufText5->Text = "";

			this->lpLabel13->Show();
			this->lpLabel23->Show();
			this->lpLabel33->Show();
			this->lpLabel43->Show();
			this->lpLabel53->Show();
			this->lpLabel14->Show();
			this->lpLabel24->Show();
			this->lpLabel34->Show();
			this->lpLabel44->Show();
			this->lpLabel54->Show();
			this->lpLabel15->Hide();
			this->lpLabel25->Hide();
			this->lpLabel35->Hide();
			this->lpLabel45->Hide();
			this->lpLabel55->Hide();

			this->ufText3->Show();
			this->ufText4->Show();
			this->ufText5->Hide();

			this->ufLabel3->Show();
			this->ufLabel4->Show();
			this->ufLabel5->Hide();

			this->bPanel->Location = System::Drawing::Point(459, 202);

		}

		if (this->pocetPremennych->Value == 5) {

			this->lpText13->Show();
			this->lpText23->Show();
			this->lpText33->Show();
			this->lpText43->Show();
			this->lpText53->Show();
			this->lpText14->Show();
			this->lpText24->Show();
			this->lpText34->Show();
			this->lpText44->Show();
			this->lpText54->Show();
			this->lpText15->Show();
			this->lpText25->Show();
			this->lpText35->Show();
			this->lpText45->Show();
			this->lpText55->Show();

			this->lpLabel13->Show();
			this->lpLabel23->Show();
			this->lpLabel33->Show();
			this->lpLabel43->Show();
			this->lpLabel53->Show();
			this->lpLabel14->Show();
			this->lpLabel24->Show();
			this->lpLabel34->Show();
			this->lpLabel44->Show();
			this->lpLabel54->Show();
			this->lpLabel15->Show();
			this->lpLabel25->Show();
			this->lpLabel35->Show();
			this->lpLabel45->Show();
			this->lpLabel55->Show();

			this->ufText3->Show();
			this->ufText4->Show();
			this->ufText5->Show();

			this->ufLabel3->Show();
			this->ufLabel4->Show();
			this->ufLabel5->Show();

			this->bPanel->Location = System::Drawing::Point(538, 202);
		}

	}
	private: System::Void clearTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lpText11->Text = "";
		this->lpText12->Text = "";
		this->lpText13->Text = "";
		this->lpText14->Text = "";
		this->lpText15->Text = "";

		this->lpText21->Text = "";
		this->lpText22->Text = "";
		this->lpText23->Text = "";
		this->lpText24->Text = "";
		this->lpText25->Text = "";

		this->lpText31->Text = "";
		this->lpText32->Text = "";
		this->lpText33->Text = "";
		this->lpText34->Text = "";
		this->lpText35->Text = "";

		this->lpText41->Text = "";
		this->lpText42->Text = "";
		this->lpText43->Text = "";
		this->lpText44->Text = "";
		this->lpText45->Text = "";

		this->lpText51->Text = "";
		this->lpText52->Text = "";
		this->lpText53->Text = "";
		this->lpText54->Text = "";
		this->lpText55->Text = "";

		this->bText1->Text = "";
		this->bText2->Text = "";
		this->bText3->Text = "";
		this->bText4->Text = "";
		this->bText5->Text = "";

		this->ufText1->Text = "";
		this->ufText2->Text = "";
		this->ufText3->Text = "";
		this->ufText4->Text = "";
		this->ufText5->Text = "";

		pocetOhraniceni->Value = 1;
		ohranicenie->Enabled = true;
	}

	private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {


		// zisti ci su vsetky hodnoty vyplnene
		if (vsetkyVyplnene()) {
			if (!getNulovyRiadok()) {
				created = true;
				Form::Close();
			}
			else {
				MessageBox::Show("V lineárnom priestore nesmie byť nulový riadok !", "Chybný vstup !", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		else {
			MessageBox::Show("Vyplň všetky hodnoty ohraničení aj účelovej funkcie !", "Chýbajúce hodnoty !", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


	}
	private: System::Void ohranicenie_Click(System::Object^ sender, System::EventArgs^ e) {

		if (pocetOhraniceni->Value < 5) {
			pocetOhraniceni->Value++;
		}
		else
			ohranicenie->Enabled = false;
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

#pragma region lp_text_key_press

	private: System::Void lpText11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText11->Text->Contains(",") && !this->lpText11->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText11->Text->Contains("-"))) {
			e->Handled = true;
			lpText11->Text = "-";
			lpText11->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}

	}


	private: System::Void lpText12_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText12->Text->Contains(",") && !this->lpText12->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText12->Text->Contains("-"))) {
			e->Handled = true;
			lpText12->Text = "-";
			lpText12->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText13_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText13->Text->Contains(",") && !this->lpText13->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText13->Text->Contains("-"))) {
			e->Handled = true;
			lpText13->Text = "-";
			lpText13->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText14_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText14->Text->Contains(",") && !this->lpText14->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText14->Text->Contains("-"))) {
			e->Handled = true;
			lpText14->Text = "-";
			lpText14->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText15_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText15->Text->Contains(",") && !this->lpText15->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText15->Text->Contains("-"))) {
			e->Handled = true;
			lpText15->Text = "-";
			lpText15->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText21_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText21->Text->Contains(",") && !this->lpText21->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText21->Text->Contains("-"))) {
			e->Handled = true;
			lpText21->Text = "-";
			lpText21->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText22_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText22->Text->Contains(",") && !this->lpText22->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText22->Text->Contains("-"))) {
			e->Handled = true;
			lpText22->Text = "-";
			lpText22->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText23_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText23->Text->Contains(",") && !this->lpText23->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText23->Text->Contains("-"))) {
			e->Handled = true;
			lpText23->Text = "-";
			lpText23->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText24_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText24->Text->Contains(",") && !this->lpText24->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText24->Text->Contains("-"))) {
			e->Handled = true;
			lpText24->Text = "-";
			lpText24->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText25_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText25->Text->Contains(",") && !this->lpText25->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText25->Text->Contains("-"))) {
			e->Handled = true;
			lpText25->Text = "-";
			lpText25->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}

	private: System::Void lpText31_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText31->Text->Contains(",") && !this->lpText31->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText31->Text->Contains("-"))) {
			e->Handled = true;
			lpText31->Text = "-";
			lpText31->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText32_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText32->Text->Contains(",") && !this->lpText32->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText32->Text->Contains("-"))) {
			e->Handled = true;
			lpText32->Text = "-";
			lpText32->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText33_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText33->Text->Contains(",") && !this->lpText33->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText33->Text->Contains("-"))) {
			e->Handled = true;
			lpText33->Text = "-";
			lpText33->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText34_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText34->Text->Contains(",") && !this->lpText34->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText34->Text->Contains("-"))) {
			e->Handled = true;
			lpText34->Text = "-";
			lpText34->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText35_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText35->Text->Contains(",") && !this->lpText35->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText35->Text->Contains("-"))) {
			e->Handled = true;
			lpText35->Text = "-";
			lpText35->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText41_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText41->Text->Contains(",") && !this->lpText41->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText41->Text->Contains("-"))) {
			e->Handled = true;
			lpText41->Text = "-";
			lpText41->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText42_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText42->Text->Contains(",") && !this->lpText42->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText42->Text->Contains("-"))) {
			e->Handled = true;
			lpText42->Text = "-";
			lpText42->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText43_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText43->Text->Contains(",") && !this->lpText43->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText43->Text->Contains("-"))) {
			e->Handled = true;
			lpText43->Text = "-";
			lpText43->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText44_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText44->Text->Contains(",") && !this->lpText44->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText44->Text->Contains("-"))) {
			e->Handled = true;
			lpText44->Text = "-";
			lpText44->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText45_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText45->Text->Contains(",") && !this->lpText45->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText45->Text->Contains("-"))) {
			e->Handled = true;
			lpText45->Text = "-";
			lpText45->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText51_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText51->Text->Contains(",") && !this->lpText51->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText51->Text->Contains("-"))) {
			e->Handled = true;
			lpText51->Text = "-";
			lpText51->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText52_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText52->Text->Contains(",") && !this->lpText52->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText52->Text->Contains("-"))) {
			e->Handled = true;
			lpText52->Text = "-";
			lpText52->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText53_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText53->Text->Contains(",") && !this->lpText53->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText53->Text->Contains("-"))) {
			e->Handled = true;
			lpText53->Text = "-";
			lpText53->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText54_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText54->Text->Contains(",") && !this->lpText54->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText54->Text->Contains("-"))) {
			e->Handled = true;
			lpText54->Text = "-";
			lpText54->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void lpText55_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == ',') {
			if (this->lpText55->Text->Contains(",") && !this->lpText55->SelectedText->Contains(","))
				e->Handled = true;
		}
		// Allow negative numbers
		else if (e->KeyChar == '-' && !(this->lpText55->Text->Contains("-"))) {
			e->Handled = true;
			lpText55->Text = "-";
			lpText55->SelectionStart = 1;
		}
		// Accept only digits ",", "-" and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}

	private: System::Void lpText11_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText11->Text);
			lpText11->Text = number.ToString();
		}
		catch (...) {
			lpText11->Text = "";
		}
	}
	private: System::Void lpText12_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText12->Text);
			lpText12->Text = number.ToString();
		}
		catch (...) {
			lpText12->Text = "";
		}
	}
	private: System::Void lpText13_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText13->Text);
			lpText13->Text = number.ToString();
		}
		catch (...) {
			lpText13->Text = "";
		}
	}
	private: System::Void lpText14_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText14->Text);
			lpText14->Text = number.ToString();
		}
		catch (...) {
			lpText14->Text = "";
		}
	}
	private: System::Void lpText15_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText15->Text);
			lpText15->Text = number.ToString();
		}
		catch (...) {
			lpText15->Text = "";
		}
	}
	private: System::Void lpText21_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText21->Text);
			lpText21->Text = number.ToString();
		}
		catch (...) {
			lpText21->Text = "";
		}
	}
	private: System::Void lpText22_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText22->Text);
			lpText22->Text = number.ToString();
		}
		catch (...) {
			lpText22->Text = "";
		}
	}
	private: System::Void lpText23_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText23->Text);
			lpText23->Text = number.ToString();
		}
		catch (...) {
			lpText23->Text = "";
		}
	}
	private: System::Void lpText24_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText24->Text);
			lpText24->Text = number.ToString();
		}
		catch (...) {
			lpText24->Text = "";
		}
	}
	private: System::Void lpText25_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText25->Text);
			lpText25->Text = number.ToString();
		}
		catch (...) {
			lpText25->Text = "";
		}
	}
	private: System::Void lpText31_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText31->Text);
			lpText31->Text = number.ToString();
		}
		catch (...) {
			lpText31->Text = "";
		}
	}
	private: System::Void lpText32_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText32->Text);
			lpText32->Text = number.ToString();
		}
		catch (...) {
			lpText32->Text = "";
		}
	}
	private: System::Void lpText33_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText33->Text);
			lpText33->Text = number.ToString();
		}
		catch (...) {
			lpText33->Text = "";
		}
	}
	private: System::Void lpText34_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText34->Text);
			lpText34->Text = number.ToString();
		}
		catch (...) {
			lpText34->Text = "";
		}
	}
	private: System::Void lpText35_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText35->Text);
			lpText35->Text = number.ToString();
		}
		catch (...) {
			lpText35->Text = "";
		}
	}
	private: System::Void lpText41_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText41->Text);
			lpText41->Text = number.ToString();
		}
		catch (...) {
			lpText41->Text = "";
		}
	}
	private: System::Void lpText42_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText42->Text);
			lpText42->Text = number.ToString();
		}
		catch (...) {
			lpText42->Text = "";
		}
	}
	private: System::Void lpText43_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText43->Text);
			lpText43->Text = number.ToString();
		}
		catch (...) {
			lpText43->Text = "";
		}
	}
	private: System::Void lpText44_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText44->Text);
			lpText44->Text = number.ToString();
		}
		catch (...) {
			lpText44->Text = "";
		}
	}
	private: System::Void lpText45_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText45->Text);
			lpText45->Text = number.ToString();
		}
		catch (...) {
			lpText45->Text = "";
		}
	}
	private: System::Void lpText51_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText51->Text);
			lpText51->Text = number.ToString();
		}
		catch (...) {
			lpText51->Text = "";
		}
	}
	private: System::Void lpText52_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText52->Text);
			lpText52->Text = number.ToString();
		}
		catch (...) {
			lpText52->Text = "";
		}
	}
	private: System::Void lpText53_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText53->Text);
			lpText53->Text = number.ToString();
		}
		catch (...) {
			lpText53->Text = "";
		}
	}
	private: System::Void lpText54_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText54->Text);
			lpText54->Text = number.ToString();
		}
		catch (...) {
			lpText54->Text = "";
		}
	}
	private: System::Void lpText55_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			double number = System::Convert::ToDouble(lpText55->Text);
			lpText55->Text = number.ToString();
		}
		catch (...) {
			lpText55->Text = "";
		}
	}

private: System::Void ufText1_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(ufText1->Text);
		ufText1->Text = number.ToString();
	}
	catch (...) {
		ufText1->Text = "";
	}
}
private: System::Void ufText2_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(ufText2->Text);
		ufText2->Text = number.ToString();
	}
	catch (...) {
		ufText2->Text = "";
	}
}
private: System::Void ufText3_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(ufText3->Text);
		ufText3->Text = number.ToString();
	}
	catch (...) {
		ufText3->Text = "";
	}
}
private: System::Void ufText4_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(ufText4->Text);
		ufText4->Text = number.ToString();
	}
	catch (...) {
		ufText4->Text = "";
	}
}
private: System::Void ufText5_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(ufText5->Text);
		ufText5->Text = number.ToString();
	}
	catch (...) {
		ufText5->Text = "";
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
private: System::Void ufText1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->ufText1->Text->Contains(",") && !this->ufText1->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->ufText1->Text->Contains("-"))) {
		e->Handled = true;
		ufText1->Text = "-";
		ufText1->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void ufText2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->ufText2->Text->Contains(",") && !this->ufText2->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->ufText2->Text->Contains("-"))) {
		e->Handled = true;
		ufText2->Text = "-";
		ufText2->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void ufText3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->ufText3->Text->Contains(",") && !this->ufText3->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->ufText3->Text->Contains("-"))) {
		e->Handled = true;
		ufText3->Text = "-";
		ufText3->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void ufText4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->ufText4->Text->Contains(",") && !this->ufText4->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->ufText4->Text->Contains("-"))) {
		e->Handled = true;
		ufText4->Text = "-";
		ufText4->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void ufText5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->ufText5->Text->Contains(",") && !this->ufText5->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->ufText5->Text->Contains("-"))) {
		e->Handled = true;
		ufText5->Text = "-";
		ufText5->SelectionStart = 1;
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
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void bText5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->bText5->Text->Contains(",") && !this->bText5->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
#pragma endregion


};
}