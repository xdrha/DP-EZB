﻿#pragma once
#include "VectorsNewTaskDialog.h"
#include "MatrixNewTaskDialog.h"
#include "EZB.cpp"
#include "VectorsTask.cpp"
#include "MatrixTask.cpp"
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
	matrixNewTaskDialog^ matrixNewTaskD;
	private: System::Windows::Forms::Label^ vektoryAll;
		   EZB* ezb;
	VectorsTask* vt;
	MatrixTask* mt;
	int taskType = 0;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->bottomPanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->matrixRankButton = (gcnew System::Windows::Forms::Button());
			this->vectorsButton = (gcnew System::Windows::Forms::Button());
			this->taskButtonPanel = (gcnew System::Windows::Forms::Panel());
			this->clearTaskButton = (gcnew System::Windows::Forms::Button());
			this->newTaskButton = (gcnew System::Windows::Forms::Button());
			this->taskPanel = (gcnew System::Windows::Forms::Panel());
			this->vektoryAll = (gcnew System::Windows::Forms::Label());
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
			this->taskButtonPanel->Controls->Add(this->clearTaskButton);
			this->taskButtonPanel->Controls->Add(this->newTaskButton);
			this->taskButtonPanel->Location = System::Drawing::Point(0, 38);
			this->taskButtonPanel->Name = L"taskButtonPanel";
			this->taskButtonPanel->Size = System::Drawing::Size(1025, 38);
			this->taskButtonPanel->TabIndex = 2;
			// 
			// clearTaskButton
			// 
			this->clearTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clearTaskButton->Enabled = false;
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
			this->taskPanel->Controls->Add(this->vektoryAll);
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
			// vektoryAll
			// 
			this->vektoryAll->AutoSize = true;
			this->vektoryAll->Location = System::Drawing::Point(496, 15);
			this->vektoryAll->Name = L"vektoryAll";
			this->vektoryAll->Size = System::Drawing::Size(0, 21);
			this->vektoryAll->TabIndex = 5;
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
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->taskMatrix->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->taskMatrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->taskMatrix->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->taskMatrix->DefaultCellStyle = dataGridViewCellStyle2;
			this->taskMatrix->Location = System::Drawing::Point(491, 12);
			this->taskMatrix->MinimumSize = System::Drawing::Size(70, 70);
			this->taskMatrix->MultiSelect = false;
			this->taskMatrix->Name = L"taskMatrix";
			this->taskMatrix->ReadOnly = true;
			this->taskMatrix->RowHeadersVisible = false;
			this->taskMatrix->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->taskMatrix->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->taskMatrix->Size = System::Drawing::Size(304, 178);
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
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			this->ezbTable->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle3;
			this->ezbTable->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ezbTable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ezbTable->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ezbTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->ezbTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ezbTable->DefaultCellStyle = dataGridViewCellStyle5;
			this->ezbTable->EnableHeadersVisualStyles = false;
			this->ezbTable->Location = System::Drawing::Point(12, 45);
			this->ezbTable->MultiSelect = false;
			this->ezbTable->Name = L"ezbTable";
			this->ezbTable->ReadOnly = true;
			this->ezbTable->RowHeadersVisible = false;
			this->ezbTable->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->ezbTable->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->ezbTable->Size = System::Drawing::Size(470, 360);
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

	double round_up(double value, int decimal_places) {
		const double multiplier = std::pow(10.0, decimal_places);
		return std::ceil(value * multiplier) / multiplier;
	}

private: System::Void newTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->newTaskButton->Text == "Upravit") {
		if(taskType == 0) vectorsNewTaskD->ShowDialog();
		if (taskType == 1) matrixNewTaskD->ShowDialog();
	}
	else {
		if (taskType == 0) {
			vectorsNewTaskD = gcnew vectorsNewTaskDialog();
			vectorsNewTaskD->ShowDialog();
		}
		if (taskType == 1) {
			matrixNewTaskD = gcnew matrixNewTaskDialog();
			matrixNewTaskD->ShowDialog();
		}
	}

	if ((taskType == 0 && vectorsNewTaskD->created) || (taskType == 1 && matrixNewTaskD->created)) {
		createNewTask();
	}
	
}
private: System::Void clearTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
	pocetVektorovLabel->Text = "Pocet vektorov :";
	pocetSuradnicVektorovLabel->Text = "Pocet suradnic vektorov:  ";
	taskMatrix->Rows->Clear();
	taskMatrix->Refresh();
	ezbTable->Rows->Clear();
	ezbTable->Enabled = true;
	ezbTable->Columns->Clear();
	ezbTable->Refresh();
	taskPanel->Hide();
	solutionPanel->AutoScroll = false;
	solutionPanel->Height = 406;
	solutionPanel->Hide();
	stepTaskPanel->Hide();
	stepTaskTextBox->Clear();
	okButton->Enabled = false;
	okButton->Text = "OK";
	label5->Text = "Úloha:";
	vektoryAll->Text = "";
	newTaskButton->Text = "Nová úloha";
	clearTaskButton->Enabled = false;

}
	private: System::Void ezbTable_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {

		int hlbka = 0;
		if (taskType == 0) hlbka = vt->pocetSuradnic;
		if (taskType == 1) hlbka = mt->pocetRiadkov;

		if (ezbTable->CurrentCell->OwningColumn->Index == 0 || ezbTable->CurrentCell->OwningColumn->Index == ezbTable->ColumnCount - 1 || ezbTable->CurrentCell->OwningRow->Index == ezbTable->RowCount - 1 ||
			ezbTable->CurrentCell->OwningRow->Index < ezbTable->RowCount - (hlbka + 1)
			|| ezb->pocetBazickychVektorov[ezbTable->CurrentCell->OwningRow->Index - (hlbka + 1)*ezb->iteration] == 1 ||
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
	if (clearTaskButton->Enabled) {
		if (MessageBox::Show("Zmazat aktualnu ulohu ?", "Nova uloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			this->matrixRankButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			taskType = 0;
		}
	}
	else {
		this->vectorsButton->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		this->matrixRankButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		taskType = 0;
	}
	
}
private: System::Void matrixRankButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (clearTaskButton->Enabled) {
		if (MessageBox::Show("Zmazat aktualnu ulohu ?", "Nova uloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->matrixRankButton->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			taskType = 1;
		}
	}
	else {
		this->vectorsButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->matrixRankButton->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		taskType = 1;
	}
}



private: System::Void okButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->okButton->Text == "Ukoncit") {
		this->clearTaskButton->PerformClick();
	}
	else {

		if (ezbTable->CurrentCell->Value->ToString() == "0") {
			MessageBox::Show("Pivot nemoze byt 0 !", "Chybny vyber !", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		ezbTable->CurrentCell->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
			static_cast<System::Int32>(static_cast<System::Byte>(65)));

		int sirka = 0;
		int hlbka = 0;

		if (taskType == 0) {
			sirka = vt->pocetVektorov;
			hlbka = vt->pocetSuradnic;
		}

		if (taskType == 1) {
			sirka = mt->pocetStlpcov;
			hlbka = mt->pocetRiadkov;
		}

		double** newMatrix = 0;
		newMatrix = ezb->ezb(ezbTable->CurrentCell->OwningColumn->Index-1, (ezbTable->CurrentCell->OwningRow->Index - ezb->iteration * (hlbka + 1)));
		
		// dokreslenie tabulky

		for (int i = (hlbka + 1) * ezb->iteration; i <= (hlbka * (ezb->iteration+1))+ezb->iteration; i++) {
			ezbTable->Rows->Add();
			ezbTable->Rows[i]->Height = 35;
			ezbTable[0, i]->Value = ezbTable[0, i - (hlbka + 1)]->Value;
			if (i == ezbTable->CurrentCell->OwningRow->Index + (hlbka + 1)) {
				// a1->e1
				if (taskType == 0) 
					ezbTable[0, i]->Value = "a" + ezbTable->CurrentCell->OwningColumn->Index + " -> e" + System::Convert::ToString(1 + i - (hlbka + 1) * ezb->iteration);
				if (taskType == 1)
					ezbTable[0, i]->Value = "s" + ezbTable->CurrentCell->OwningColumn->Index + " -> e" + System::Convert::ToString(1 + i - (hlbka + 1) * ezb->iteration);
			}
		}

		ezbTable->ClearSelection();

		ezbTable->Rows[(hlbka * (ezb->iteration + 1)) + ezb->iteration]->Height = 2;

		for (int i = 0; i <= sirka + 1; i++) {
			for (int j = (hlbka + 1) * ezb->iteration; j <= (hlbka * (ezb->iteration + 1)) + ezb->iteration; j++) {
				ezbTable[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				ezbTable[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
			}
		}

		for (int j = (hlbka + 1)*ezb->iteration; j < (hlbka * (ezb->iteration + 1)) + ezb->iteration; j++) {
			for (int i = 0; i <= sirka; i++) {
				ezbTable[i + 1, j]->Value = round_up(newMatrix[j - (((hlbka +1) * ezb->iteration))][i], 2);
			}
		}

		checkMatrix(newMatrix);
		ezbTable->Height = ezbTable->RowCount * 35;

	}
}

	   private: void createNewTask() {
		   if (this->newTaskButton->Text == "Upravit")
			   this->clearTaskButton->PerformClick();

		   this->newTaskButton->Text = "Upravit";
		   this->clearTaskButton->Enabled = true;
		   this->taskPanel->Show();
		   this->solutionPanel->Show();
		   this->solutionPanel->AutoScroll = true;
		   this->stepTaskPanel->Show();

		   if (taskType == 0) {
			   vectorsNewTaskD->created = false;
			   label3->Text = "Vektory:";
			   vektoryAll->Show();
			   taskMatrix->Hide();
			   
			   vt = new VectorsTask(vectorsNewTaskD->getPocetVektorov(), vectorsNewTaskD->getPocetSuradnicVektorov(), vectorsNewTaskD->getMatrix(), vectorsNewTaskD->getVB());

			   //zobraz vektory v labeli

			   String^ text = "";

			   for (int i = 0; i < vt->pocetVektorov; i++) {
				   if (i == vt->pocetVektorov - 1 && vt->vectorB == 1)
					   text += " b = (";
				   else
					   text += "a" + (i + 1).ToString() + " = (";
				   for (int j = 0; j < vt->pocetSuradnic; j++) {
					   text += " " + vt->matrix[i][j];
					   if (j < vt->pocetSuradnic - 1)
						   text += "; ";
					   else
						   text += " )";
				   }
				   text += "\r\n";
			   }

			   vektoryAll->Text = text;

			   pocetVektorovLabel->Text += System::Convert::ToString(vt->pocetVektorov);
			   pocetSuradnicVektorovLabel->Text += System::Convert::ToString(vt->pocetSuradnic);

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
				   if (vt->vectorB == 1 && i == vt->pocetVektorov)
					   ezbTable->Columns[i]->Name = "b";
				   else
					   ezbTable->Columns[i]->Name = "a" + System::Convert::ToString(i);
				   ezbTable->Columns[i]->Width = 55;

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
				   double suma = 0;
				   for (int i = 0; i < vt->pocetVektorov; i++) {
					   suma += vt->matrix[i][j];
					   ezbTable[i + 1, j]->Value = round_up(vt->matrix[i][j], 2);
					   bazickaMatica[j][i] = vt->matrix[i][j];
				   }
				   ezbTable[vt->pocetVektorov + 1, j]->Value = round_up(suma, 2);
				   bazickaMatica[j][vt->pocetVektorov] = suma;
			   }
			   //
			   //skontroluj bazicku maticu /// nove ezb
			   //
			   ezb = new EZB(bazickaMatica, vt->pocetVektorov + 1, vt->pocetSuradnic);
			   checkMatrix(bazickaMatica);
		   }
		   //
		   //ak sa riesi matica
		   //
		   if (taskType == 1) {
			   matrixNewTaskD->created = false;
			   label3->Text = "Matica:";
			   vektoryAll->Hide();
			   taskMatrix->Show();

			   mt = new MatrixTask(matrixNewTaskD->getPocetRiadkov(), matrixNewTaskD->getPocetStlpcov(), matrixNewTaskD->getMatrix(), matrixNewTaskD->getVB());

			   pocetVektorovLabel->Text = "Pocet riadkov: " + System::Convert::ToString(mt->pocetRiadkov);
			   pocetSuradnicVektorovLabel->Text = "Pocet stlpcov: " + System::Convert::ToString(mt->pocetStlpcov);

			   taskMatrix->ColumnCount = mt->pocetStlpcov;

			   for (int i = 0; i < mt->pocetRiadkov; i++) {
				   taskMatrix->Rows->Add();
				   taskMatrix->Rows[i]->Height = 35;
			   }

			   for (int i = 0; i < mt->pocetStlpcov; i++) {
				   taskMatrix->Columns[i]->Width = 55;
				   for (int j = 0; j < mt->pocetRiadkov; j++) {
					   taskMatrix[i, j]->Value = (mt->matrix[j][i]);
					   taskMatrix[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   taskMatrix[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
				   }
			   }

			   double** bazickaMatica = 0;
			   bazickaMatica = new double* [mt->pocetRiadkov];
			   for (int h = 0; h < mt->pocetRiadkov; h++)
			   {
				   bazickaMatica[h] = new double[mt->pocetStlpcov + 1];
			   }

			   ezbTable->ColumnCount = mt->pocetStlpcov + 2;
			   ezbTable->MultiSelect = false;
			   ezbTable->Columns[0]->Name = "Báza";
			   for (int i = 1; i <= mt->pocetStlpcov; i++) {
				   if (mt->vectorB == 1 && i == mt->pocetStlpcov)
					   ezbTable->Columns[i]->Name = "b";
				   else
					   ezbTable->Columns[i]->Name = "s" + System::Convert::ToString(i);
				   ezbTable->Columns[i]->Width = 55;

			   }
			   ezbTable->Columns[mt->pocetStlpcov + 1]->Name = "Suma";

			   for (int i = 0; i <= mt->pocetRiadkov; i++) {
				   ezbTable->Rows->Add();
				   ezbTable->Rows[i]->Height = 35;
				   ezbTable[0, i]->Value = "e" + System::Convert::ToString(i + 1);
			   }
			   ezbTable->Rows[mt->pocetRiadkov]->Height = 2;

			   for (int i = 0; i <= mt->pocetStlpcov + 1; i++) {
				   ezbTable->Columns[i]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				   for (int j = 0; j <= mt->pocetRiadkov; j++) {
					   ezbTable[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   ezbTable[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
				   }
			   }

			   for (int j = 0; j < mt->pocetRiadkov; j++) {
				   double suma = 0;
				   for (int i = 0; i < mt->pocetStlpcov; i++) {
					   suma += mt->matrix[j][i];
					   ezbTable[i + 1, j]->Value = round_up(mt->matrix[j][i], 2);
					   bazickaMatica[j][i] = mt->matrix[j][i];
				   }
				   ezbTable[mt->pocetStlpcov + 1, j]->Value = round_up(suma, 2);
				   bazickaMatica[j][mt->pocetStlpcov] = suma;
			   }
			   //
			   //skontroluj bazicku maticu /// nove ezb
			   //
			   ezb = new EZB(bazickaMatica, mt->pocetStlpcov + 1, mt->pocetRiadkov);
			   checkMatrix(bazickaMatica);

		   }
	   }

private: void checkMatrix(double** m) {
	ezbTable->ClearSelection();

	int check = 0;
	if (taskType == 0) check = ezb->checkMatrix(vt->vectorB);
	if (taskType == 1) check = ezb->checkMatrix(mt->vectorB);

	if (check < 2) { //nulovy riadok, koniec ezb
		ezbTable->Enabled = false;
		okButton->Enabled = true;
		okButton->Text = "Ukoncit";
		label5->Text = "Výsledok:";

		String^ field;

		if (taskType == 0) {

			for (int i = 0; i < vt->pocetSuradnic; i++) {
				field += ezbTable[0, ezbTable->RowCount - vt->pocetSuradnic + i - 1]->Value->ToString() + "/";
			}

			stepTaskTextBox->Text = vt->getResult(m, check, ezb->pocetZaclenenychVektorov, field, ezbTable->RowCount);
			stepTaskTextBox->Text += "\r\n\r\n ukoncit ulohu?";
		}
		if (taskType == 1) {

			for (int i = 0; i < mt->pocetStlpcov; i++) {
				field += ezbTable[0, ezbTable->RowCount - mt->pocetStlpcov + i - 1]->Value->ToString() + "/";
			}

			stepTaskTextBox->Text = mt->getResult(m, check, ezb->pocetZaclenenychVektorov, field, ezbTable->RowCount);
			stepTaskTextBox->Text += "\r\n\r\n ukoncit ulohu?";
		}

	}
	else { //pokracujeme
		stepTaskTextBox->Text = "Vyber veduci prvok (pivot)\r\n\r\n";
		okButton->Enabled = false;
	}
	
}

};
}
