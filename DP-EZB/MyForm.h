#pragma once
#include "VectorsNewTaskDialog.h"
#include "EZB.cpp"
#include "VectorsTask.cpp"
#include <string.h>

namespace DP_EZB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ bottomPanel;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ topPanel;
	private: System::Windows::Forms::Button^ vectorsButton;
	private: System::Windows::Forms::Button^ matrixRankButton;
	private: System::Windows::Forms::Panel^ taskButtonPanel;
	private: System::Windows::Forms::Button^ newTaskButton;
	private: System::Windows::Forms::Button^ saveTaskButton;
	private: System::Windows::Forms::Button^ clearTaskButton;
	private: System::Windows::Forms::Panel^ taskPanel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ taskMatrix;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ pocetSuradnicVektorovLabel;
	private: System::Windows::Forms::Label^ pocetVektorovLabel;
	private: System::Windows::Forms::Panel^ solutionPanel;
	private: System::Windows::Forms::DataGridView^ ezbTable;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ stepTaskPanel;
	private: System::Windows::Forms::Button^ okButton;
	private: System::Windows::Forms::TextBox^ stepTaskTextBox;

	private: System::Windows::Forms::Label^ label5;



	vectorsNewTaskDialog^ vectorsNewTaskD;
	EZB* ezb;
	VectorsTask* vt;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->bottomPanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->matrixRankButton = (gcnew System::Windows::Forms::Button());
			this->vectorsButton = (gcnew System::Windows::Forms::Button());
			this->taskButtonPanel = (gcnew System::Windows::Forms::Panel());
			this->saveTaskButton = (gcnew System::Windows::Forms::Button());
			this->clearTaskButton = (gcnew System::Windows::Forms::Button());
			this->newTaskButton = (gcnew System::Windows::Forms::Button());
			this->taskPanel = (gcnew System::Windows::Forms::Panel());
			this->taskMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pocetSuradnicVektorovLabel = (gcnew System::Windows::Forms::Label());
			this->pocetVektorovLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->solutionPanel = (gcnew System::Windows::Forms::Panel());
			this->ezbTable = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->stepTaskPanel = (gcnew System::Windows::Forms::Panel());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->stepTaskTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->bottomPanel->SuspendLayout();
			this->topPanel->SuspendLayout();
			this->taskButtonPanel->SuspendLayout();
			this->taskPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->taskMatrix))->BeginInit();
			this->solutionPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ezbTable))->BeginInit();
			this->stepTaskPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// bottomPanel
			// 
			this->bottomPanel->Controls->Add(this->label1);
			this->bottomPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->bottomPanel->Location = System::Drawing::Point(0, 681);
			this->bottomPanel->Name = L"bottomPanel";
			this->bottomPanel->Size = System::Drawing::Size(1025, 20);
			this->bottomPanel->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label1->Location = System::Drawing::Point(806, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Copyright 2022 Bc. Matej Drha";
			// 
			// topPanel
			// 
			this->topPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->topPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->topPanel->Controls->Add(this->matrixRankButton);
			this->topPanel->Controls->Add(this->vectorsButton);
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(1025, 38);
			this->topPanel->TabIndex = 1;
			// 
			// matrixRankButton
			// 
			this->matrixRankButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->matrixRankButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->matrixRankButton->Location = System::Drawing::Point(111, -1);
			this->matrixRankButton->Name = L"matrixRankButton";
			this->matrixRankButton->Size = System::Drawing::Size(140, 38);
			this->matrixRankButton->TabIndex = 1;
			this->matrixRankButton->Text = L"Hodnosť matice";
			this->matrixRankButton->UseVisualStyleBackColor = false;
			this->matrixRankButton->Click += gcnew System::EventHandler(this, &MyForm::matrixRankButton_Click);
			// 
			// vectorsButton
			// 
			this->vectorsButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorsButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->vectorsButton->Location = System::Drawing::Point(-1, -1);
			this->vectorsButton->Name = L"vectorsButton";
			this->vectorsButton->Size = System::Drawing::Size(105, 38);
			this->vectorsButton->TabIndex = 0;
			this->vectorsButton->Text = L"Vektory";
			this->vectorsButton->UseVisualStyleBackColor = false;
			this->vectorsButton->Click += gcnew System::EventHandler(this, &MyForm::vectorsButton_Click);
			// 
			// taskButtonPanel
			// 
			this->taskButtonPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->taskButtonPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->taskButtonPanel->Controls->Add(this->saveTaskButton);
			this->taskButtonPanel->Controls->Add(this->clearTaskButton);
			this->taskButtonPanel->Controls->Add(this->newTaskButton);
			this->taskButtonPanel->Location = System::Drawing::Point(0, 38);
			this->taskButtonPanel->Name = L"taskButtonPanel";
			this->taskButtonPanel->Size = System::Drawing::Size(1025, 38);
			this->taskButtonPanel->TabIndex = 2;
			// 
			// saveTaskButton
			// 
			this->saveTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saveTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->saveTaskButton->Location = System::Drawing::Point(222, -1);
			this->saveTaskButton->Name = L"saveTaskButton";
			this->saveTaskButton->Size = System::Drawing::Size(105, 38);
			this->saveTaskButton->TabIndex = 3;
			this->saveTaskButton->Text = L"Uložiť";
			this->saveTaskButton->UseVisualStyleBackColor = false;
			// 
			// clearTaskButton
			// 
			this->clearTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clearTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clearTaskButton->Location = System::Drawing::Point(111, -1);
			this->clearTaskButton->Name = L"clearTaskButton";
			this->clearTaskButton->Size = System::Drawing::Size(105, 38);
			this->clearTaskButton->TabIndex = 2;
			this->clearTaskButton->Text = L"Zmazať";
			this->clearTaskButton->UseVisualStyleBackColor = false;
			this->clearTaskButton->Click += gcnew System::EventHandler(this, &MyForm::clearTaskButton_Click);
			// 
			// newTaskButton
			// 
			this->newTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->newTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->newTaskButton->Location = System::Drawing::Point(-1, -1);
			this->newTaskButton->Name = L"newTaskButton";
			this->newTaskButton->Size = System::Drawing::Size(105, 38);
			this->newTaskButton->TabIndex = 1;
			this->newTaskButton->Text = L"Nová úloha";
			this->newTaskButton->UseVisualStyleBackColor = false;
			this->newTaskButton->Click += gcnew System::EventHandler(this, &MyForm::newTaskButton_Click);
			// 
			// taskPanel
			// 
			this->taskPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->taskPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->taskPanel->Controls->Add(this->taskMatrix);
			this->taskPanel->Controls->Add(this->label3);
			this->taskPanel->Controls->Add(this->pocetSuradnicVektorovLabel);
			this->taskPanel->Controls->Add(this->pocetVektorovLabel);
			this->taskPanel->Controls->Add(this->label2);
			this->taskPanel->Location = System::Drawing::Point(0, 76);
			this->taskPanel->Name = L"taskPanel";
			this->taskPanel->Size = System::Drawing::Size(1024, 200);
			this->taskPanel->TabIndex = 3;
			this->taskPanel->Visible = false;
			this->taskPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::taskPanel_Paint);
			// 
			// taskMatrix
			// 
			this->taskMatrix->AllowUserToAddRows = false;
			this->taskMatrix->AllowUserToDeleteRows = false;
			this->taskMatrix->AllowUserToResizeColumns = false;
			this->taskMatrix->AllowUserToResizeRows = false;
			this->taskMatrix->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->taskMatrix->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->taskMatrix->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->taskMatrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->taskMatrix->ColumnHeadersVisible = false;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->taskMatrix->DefaultCellStyle = dataGridViewCellStyle7;
			this->taskMatrix->Location = System::Drawing::Point(495, 15);
			this->taskMatrix->MaximumSize = System::Drawing::Size(175, 175);
			this->taskMatrix->MinimumSize = System::Drawing::Size(70, 70);
			this->taskMatrix->MultiSelect = false;
			this->taskMatrix->Name = L"taskMatrix";
			this->taskMatrix->ReadOnly = true;
			this->taskMatrix->RowHeadersVisible = false;
			this->taskMatrix->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->taskMatrix->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->taskMatrix->Size = System::Drawing::Size(175, 175);
			this->taskMatrix->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(402, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 21);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Vektory:";
			// 
			// pocetSuradnicVektorovLabel
			// 
			this->pocetSuradnicVektorovLabel->AutoSize = true;
			this->pocetSuradnicVektorovLabel->Location = System::Drawing::Point(12, 92);
			this->pocetSuradnicVektorovLabel->Name = L"pocetSuradnicVektorovLabel";
			this->pocetSuradnicVektorovLabel->Size = System::Drawing::Size(182, 21);
			this->pocetSuradnicVektorovLabel->TabIndex = 2;
			this->pocetSuradnicVektorovLabel->Text = L"Počet súradníc vektorov: ";
			// 
			// pocetVektorovLabel
			// 
			this->pocetVektorovLabel->AutoSize = true;
			this->pocetVektorovLabel->Location = System::Drawing::Point(12, 62);
			this->pocetVektorovLabel->Name = L"pocetVektorovLabel";
			this->pocetVektorovLabel->Size = System::Drawing::Size(119, 21);
			this->pocetVektorovLabel->TabIndex = 1;
			this->pocetVektorovLabel->Text = L"Počet vektorov: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 21);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Zadanie:";
			// 
			// solutionPanel
			// 
			this->solutionPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->solutionPanel->AutoScroll = true;
			this->solutionPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->solutionPanel->Controls->Add(this->ezbTable);
			this->solutionPanel->Controls->Add(this->label4);
			this->solutionPanel->Location = System::Drawing::Point(0, 276);
			this->solutionPanel->Name = L"solutionPanel";
			this->solutionPanel->Size = System::Drawing::Size(516, 406);
			this->solutionPanel->TabIndex = 4;
			this->solutionPanel->Visible = false;
			// 
			// ezbTable
			// 
			this->ezbTable->AllowUserToAddRows = false;
			this->ezbTable->AllowUserToDeleteRows = false;
			this->ezbTable->AllowUserToResizeColumns = false;
			this->ezbTable->AllowUserToResizeRows = false;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::White;
			this->ezbTable->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle8;
			this->ezbTable->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ezbTable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ezbTable->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ezbTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->ezbTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ezbTable->DefaultCellStyle = dataGridViewCellStyle10;
			this->ezbTable->EnableHeadersVisualStyles = false;
			this->ezbTable->Location = System::Drawing::Point(101, 38);
			this->ezbTable->MultiSelect = false;
			this->ezbTable->Name = L"ezbTable";
			this->ezbTable->ReadOnly = true;
			this->ezbTable->RowHeadersVisible = false;
			this->ezbTable->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->ezbTable->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->ezbTable->Size = System::Drawing::Size(366, 360);
			this->ezbTable->TabIndex = 5;
			this->ezbTable->SelectionChanged += gcnew System::EventHandler(this, &MyForm::ezbTable_SelectionChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(11, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 21);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Riešenie:";
			// 
			// stepTaskPanel
			// 
			this->stepTaskPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->stepTaskPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->stepTaskPanel->Controls->Add(this->okButton);
			this->stepTaskPanel->Controls->Add(this->stepTaskTextBox);
			this->stepTaskPanel->Controls->Add(this->label5);
			this->stepTaskPanel->Location = System::Drawing::Point(516, 276);
			this->stepTaskPanel->Name = L"stepTaskPanel";
			this->stepTaskPanel->Size = System::Drawing::Size(516, 406);
			this->stepTaskPanel->TabIndex = 5;
			this->stepTaskPanel->Visible = false;
			// 
			// okButton
			// 
			this->okButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->okButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->okButton->Location = System::Drawing::Point(385, 241);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(105, 38);
			this->okButton->TabIndex = 2;
			this->okButton->Text = L"OK";
			this->okButton->UseVisualStyleBackColor = false;
			this->okButton->Click += gcnew System::EventHandler(this, &MyForm::okButton_Click);
			// 
			// stepTaskTextBox
			// 
			this->stepTaskTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->stepTaskTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->stepTaskTextBox->ForeColor = System::Drawing::SystemColors::Window;
			this->stepTaskTextBox->Location = System::Drawing::Point(22, 39);
			this->stepTaskTextBox->Multiline = true;
			this->stepTaskTextBox->Name = L"stepTaskTextBox";
			this->stepTaskTextBox->ReadOnly = true;
			this->stepTaskTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->stepTaskTextBox->Size = System::Drawing::Size(468, 196);
			this->stepTaskTextBox->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(18, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 21);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Úloha:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(1025, 701);
			this->Controls->Add(this->stepTaskPanel);
			this->Controls->Add(this->solutionPanel);
			this->Controls->Add(this->taskPanel);
			this->Controls->Add(this->taskButtonPanel);
			this->Controls->Add(this->topPanel);
			this->Controls->Add(this->bottomPanel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::Window;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EZB";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->bottomPanel->ResumeLayout(false);
			this->bottomPanel->PerformLayout();
			this->topPanel->ResumeLayout(false);
			this->taskButtonPanel->ResumeLayout(false);
			this->taskPanel->ResumeLayout(false);
			this->taskPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->taskMatrix))->EndInit();
			this->solutionPanel->ResumeLayout(false);
			this->solutionPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ezbTable))->EndInit();
			this->stepTaskPanel->ResumeLayout(false);
			this->stepTaskPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void taskPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


	////////////////////////////////////////////////

private: System::Void newTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
	vectorsNewTaskD = gcnew vectorsNewTaskDialog();
	vectorsNewTaskD->ShowDialog();

	if (vectorsNewTaskD->created) {
		this->taskPanel->Show();
		this->solutionPanel->Show();
		this->stepTaskPanel->Show();

		vt = new VectorsTask(vectorsNewTaskD->getPocetVektorov(), vectorsNewTaskD->getPocetSuradnicVektorov(), vectorsNewTaskD->getMatrix(), vectorsNewTaskD->getVB());

		pocetVektorovLabel->Text += System::Convert::ToString(vt->pocetVektorov);
		pocetSuradnicVektorovLabel->Text += System::Convert::ToString(vt->pocetSuradnic);

		taskMatrix->ColumnCount = vt->pocetSuradnic;

		for (int i = 0; i < vt->pocetVektorov; i++) {
			taskMatrix->Rows->Add();
			taskMatrix->Rows[i]->Height = 35;
		}

		for (int i = 0; i < vt->pocetSuradnic; i++) {
			taskMatrix->Columns[i]->Width = 35;
			for (int j = 0; j < vt->pocetVektorov; j++) {
				taskMatrix[i, j]->Value = (vt->matrix[j][i]);
				taskMatrix[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				taskMatrix[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
			}
		}
		//
		//vytvor bazicku maticu
		//
		double** bazickaMatica = 0;
		bazickaMatica = new double* [vt->pocetSuradnic];
		for (int h = 0; h < vt->pocetSuradnic; h++)
		{
			bazickaMatica[h] = new double[vt->pocetVektorov + 1];
		}

		ezbTable->ColumnCount = vt->pocetVektorov + 2;
		ezbTable->MultiSelect = false;
		ezbTable->Columns[0]->Name = "Báza";
		for (int i = 1; i <= vt->pocetVektorov; i++) {
			if(vt->vectorB == 1 && i == vt->pocetVektorov)
				ezbTable->Columns[i]->Name = "b";
			else
				ezbTable->Columns[i]->Name = "a" + System::Convert::ToString(i);
			ezbTable->Columns[i]->Width = 35;

		}
		ezbTable->Columns[vt->pocetVektorov + 1]->Name = "Suma";

		for (int i = 0; i <= vt->pocetSuradnic; i++) {
			ezbTable->Rows->Add();
			ezbTable->Rows[i]->Height = 35;
			ezbTable[0, i]->Value = "e" + System::Convert::ToString(i + 1);
		}
		ezbTable->Rows[vt->pocetSuradnic]->Height = 2;

		for (int i = 0; i <= vt->pocetVektorov + 1; i++) {
			ezbTable->Columns[i]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			for (int j = 0; j <= vt->pocetSuradnic; j++) {
				ezbTable[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				ezbTable[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
			}
		}

		for (int j = 0; j < vt->pocetSuradnic; j++) {
			int suma = 0;
			for (int i = 0; i < vt->pocetVektorov; i++) {
				suma += vt->matrix[i][j];
				ezbTable[i + 1, j]->Value = vt->matrix[i][j];
				bazickaMatica[j][i] = vt->matrix[i][j];
				//stepTaskTextBox->Text += System::Convert::ToString(bazickaMatica[j][i]);
			}
			ezbTable[vt->pocetVektorov + 1, j]->Value = suma;
			bazickaMatica[j][vt->pocetVektorov] = suma;
		}
		//
		//skontroluj bazicku maticu /// nove ezb
		//
		ezb = new EZB(bazickaMatica, vt->pocetVektorov+1, vt->pocetSuradnic);
		checkMatrix(bazickaMatica);

	}
}
private: System::Void clearTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
	pocetVektorovLabel->Text = "Pocet vektorov :";
	pocetSuradnicVektorovLabel->Text = "Pocet suradnic vektorov:  ";
	taskMatrix->Rows->Clear();
	taskMatrix->Refresh();
	ezbTable->Rows->Clear();
	ezbTable->Refresh();
	ezbTable->Enabled = true;
	taskPanel->Hide();
	solutionPanel->Hide();
	stepTaskPanel->Hide();
	stepTaskTextBox->Clear();
	okButton->Enabled = false;
	okButton->Text = "OK";
	label5->Text = "Úloha:";

}
	private: System::Void ezbTable_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {

		if (ezbTable->CurrentCell->OwningColumn->Index == 0 || ezbTable->CurrentCell->OwningColumn->Index == ezbTable->ColumnCount - 1 || ezbTable->CurrentCell->OwningRow->Index == ezbTable->RowCount - 1 ||
			ezbTable->CurrentCell->OwningRow->Index < ezbTable->RowCount - (vt->pocetSuradnic + 1)
			|| ezb->pocetBazickychVektorov[ezbTable->CurrentCell->OwningRow->Index - (vt->pocetSuradnic + 1)*ezb->iteration] == 1 ||
			ezb->pocetZaclenenychVektorov[ezbTable->CurrentCell->OwningColumn->Index - 1] == 1
			|| ezbTable->CurrentCell->OwningColumn->Name == "b") {
			
			okButton->Enabled = false;
			stepTaskTextBox->Text = "Vyber veduci prvok (pivot)";
			ezbTable->ClearSelection();
		}
		
	else {
		if (ezb != NULL) {
			if (ezb->stepTask == 2) {
				stepTaskTextBox->Text = "Vyber veduci prvok (pivot)\r\n\r\nvybrany pivot: " + ezbTable->CurrentCell->Value;
				okButton->Enabled = true;
			}
		}
		
	}

}
private: System::Void vectorsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->vectorsButton->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
	this->matrixRankButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
}
private: System::Void matrixRankButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->vectorsButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
	this->matrixRankButton->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
}



private: System::Void okButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->okButton->Text == "Ukoncit") {
		this->clearTaskButton->PerformClick();
	}
	else {

		ezbTable->CurrentCell->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
			static_cast<System::Int32>(static_cast<System::Byte>(65)));

		double** newMatrix = 0;
		newMatrix = ezb->ezb(ezbTable->CurrentCell->OwningColumn->Index-1, (ezbTable->CurrentCell->OwningRow->Index - ezb->iteration * (vt->pocetSuradnic + 1)));
		
		// dokreslenie tabulky

		for (int i = (vt->pocetSuradnic + 1) * ezb->iteration; i <= (vt->pocetSuradnic * (ezb->iteration+1))+ezb->iteration; i++) {
			ezbTable->Rows->Add();
			ezbTable->Rows[i]->Height = 35;
			ezbTable[0, i]->Value = ezbTable[0, i - (vt->pocetSuradnic + 1)]->Value;
			if (i == ezbTable->CurrentCell->OwningRow->Index + (vt->pocetSuradnic + 1)) {
				// a1->e1
				ezbTable[0, i]->Value = "a" + ezbTable->CurrentCell->OwningColumn->Index + " -> e" + System::Convert::ToString(1 + i - (vt->pocetSuradnic + 1) * ezb->iteration);
			}
		}

		ezbTable->ClearSelection();

		ezbTable->Rows[(vt->pocetSuradnic * (ezb->iteration + 1)) + ezb->iteration]->Height = 2;

		for (int i = 0; i <= vt->pocetVektorov + 1; i++) {
			for (int j = (vt->pocetSuradnic + 1) * ezb->iteration; j <= (vt->pocetSuradnic * (ezb->iteration + 1)) + ezb->iteration; j++) {
				ezbTable[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				ezbTable[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
			}
		}

		for (int j = (vt->pocetSuradnic + 1)*ezb->iteration; j < (vt->pocetSuradnic * (ezb->iteration + 1)) + ezb->iteration; j++) {
			for (int i = 0; i <= vt->pocetVektorov; i++) {
				ezbTable[i + 1, j]->Value = newMatrix[j - (((vt->pocetSuradnic+1) * ezb->iteration))][i];
			}
		}

		checkMatrix(newMatrix);
		ezbTable->Height = ezbTable->RowCount * 35;

	}


}

private: void checkMatrix(double** m) {
	ezbTable->ClearSelection();
	int check = ezb->checkMatrix(vt->vectorB);
	if (check < 2) { //nulovy riadok, koniec ezb
		ezbTable->Enabled = false;
		okButton->Enabled = true;
		okButton->Text = "Ukoncit";
		label5->Text = "Výsledok:";
		getResult(m, check);
		stepTaskTextBox->Text += "\r\n\r\n ukoncit ulohu?";
	}
	else { //pokracujeme
		
		stepTaskTextBox->Text = "Vyber veduci prvok (pivot)\r\n\r\n";
		okButton->Enabled = false;
	}
	
}

private: void getResult(double** m, int check) {
	// zaclenene vektory + ich zlozky
	int count = 0;
	String^ all = "{ ";
	String^ zaclenene = "";
	String^ nezaclenene = "";
	String^ vektorB = "";

	for (int i = 1; i <= vt->pocetVektorov - vt->vectorB; i++) {
		all += "a" + i;
		if (i < vt->pocetVektorov - vt->vectorB)
			all += ", ";
		if (ezb->pocetZaclenenychVektorov[i-1] == 1) {
			count++;
			zaclenene += "a" + i;
			if (i <= vt->pocetVektorov - vt->vectorB) {
				zaclenene += ", ";
			}
		}
		else {
			nezaclenene += "a" + i;
			if (i <= vt->pocetVektorov - vt->vectorB) {
				nezaclenene += ", ";
			}
		}
	}
	all += " }";

	if (check == 0) {
		if (count == vt->pocetVektorov - vt->vectorB) {
			stepTaskTextBox->Text = "Koniec vypoctu!\r\n\r\ndo bazy mozno zaclenit vsetky vektory: " + zaclenene + " z vektorov " + all +
				".\r\n\r\n";
		}
		else {
			if (count > 0) {
				stepTaskTextBox->Text = "Koniec vypoctu!\r\n\r\ndo bazy mozno zaclenit najviac " + count + " vektory: " + zaclenene + " z vektorov " + all +
					" a ostatne vektory " + nezaclenene + " su linearnou kombinaciou zaclenenych (bazickych) vektorov:\r\n\r\n";
			}
		}
	}
	else {
		stepTaskTextBox->Text = "Koniec vypoctu!\r\n\r\nZo systemu vektorov " + all + " sme do bazy zaclenili vektory " + zaclenene + " a tieto su linearne nezavisle, preto system vektorov { " +
			zaclenene + " } tvori jednu z moznych baz.\r\n\r\n Nezacleneny vektor " + nezaclenene + " sa da vyjadrit ako jednoznacna linearna kombinacia vektorov bazy: ";

	}
	
	
	//ak je vektor v baze tak vypis jeho suradnice

	for (int j = 1; j <= vt->pocetVektorov; j++) {

		String^ lk = "";
		if (ezb->pocetZaclenenychVektorov[j-1] == 0) {
			lk += "a" + j + " = ";
			Boolean sign = false;
			for (int i = 0; i < vt->pocetSuradnic; i++) {
				if (m[i][j-1] < 0) {
					String^ help = "";
					help += ezbTable[0, ezbTable->RowCount - vt->pocetSuradnic + i - 1]->Value;
					lk += m[i][j-1]+ " * " + help->Substring(0, 2);
					if (!sign) sign = true;
				}
				else {
					if (m[i][j-1] > 0) {
						String^ help = "";
						help += ezbTable[0, ezbTable->RowCount - vt->pocetSuradnic + i - 1]->Value;
						if (sign) lk += " + ";
						lk += m[i][j - 1] + " * " + help->Substring(0, 2);
						if (!sign) sign = true;
					}
				}

			}
			if (vt->vectorB == 1 && j == vt->pocetVektorov)
				vektorB = lk->Substring(3, lk->Length-3);
			else
				stepTaskTextBox->Text += lk + "\r\n";
		}
	}
	
	stepTaskTextBox->Text += "\r\n";

	//linearne zavisly / nezavisly

	if(check == 0){
		if (count == vt->pocetVektorov - vt->vectorB) {
			stepTaskTextBox->Text += "System vektorov A = " + all +
				" je jednou z moznych baz. Vsetky vektory boli zaclenene do bazy a su linearne nezavisle.\r\n\r\n";
		}
		else {
			if (count > 0) {
				stepTaskTextBox->Text += "System vektorov A = " + all +
					" je linearne zavisly, pretoze aspon jeden z vektorov je linearnou kombinaciou ostatnych vektorov.\r\n\r\n";
			}
			else {
				stepTaskTextBox->Text += "System vektorov A = " + all +
					" nie je linearne zavisly, pretoze ziadny z vektorov nie je linearnou kombinaciou ostatnych vektorov.\r\n\r\n";
			}
		}
	}
	else {
		stepTaskTextBox->Text += "System vektorov { " + zaclenene + " } generuje ten isty podpriestor ako povodny system, teda plati:\r\nL " + 
			all + " = L { " + zaclenene + " }\r\n\r\n";

	}

	

	//h(a1-an)

	stepTaskTextBox->Text += "Maximalny pocet vektorov systemu " + all + " ktore mozeme zaclenit do bazy je " + count + ". Preto: h" + 
		all + " = " + count + ".\r\n\r\n";

	//ci je vektor b linearnou kombinaciou

	if (vt->vectorB == 1) {
		for (int i = 0; i < vt->pocetSuradnic; i++) { //nulovy riadok
			int count = 0;
			for (int j = 1; j <= vt->pocetVektorov - vt->vectorB; j++)
				if (m[i][j - 1] != 0) count++;
			if (count == 0 && m[i][vt->pocetVektorov] != 0) {
				//nie je linearnou kombinaciou vektorov bazy + vypis bazu pretoze zlozka bindex != 0
				stepTaskTextBox->Text += "vektor b nie je linearnou kombinaciou vektorov bazy { " + zaclenene + " }, pretoze zlozka b" + (i + 1) + " != 0.\r\n";
				return;
			}
		}
		stepTaskTextBox->Text += "vektor b je linearnou kombinaciou bazickych vektorov " + zaclenene + " a plati: b = " + vektorB + ".\r\n";
	}

}

};
}
