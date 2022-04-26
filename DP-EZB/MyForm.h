#pragma once
#include "VectorsNewTaskDialog.h"
#include "MatrixNewTaskDialog.h"
#include "SLRNewTaskDialog.h"
#include "EZB.cpp"
#include "VectorsTask.cpp"
#include "MatrixTask.cpp"
#include "SLRTask.cpp"
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


	private: System::Windows::Forms::Panel^ tableTaskPanel;
	private: System::Windows::Forms::DataGridView^ ezbTable;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ solutionTaskPanel;
	private: System::Windows::Forms::Button^ okButton;
	private: System::Windows::Forms::TextBox^ stepTaskTextBox;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ vektoryAll;

	vectorsNewTaskDialog^ vectorsNewTaskD;
	matrixNewTaskDialog^ matrixNewTaskD;
	slrNewTaskDialog^ slrNewTaskD;

	EZB* ezb;
	VectorsTask* vt;
	MatrixTask* mt;
	SLRTask* st;
	int taskType = 0;
	Boolean shown = false;
	private: System::Windows::Forms::TextBox^ taskTextBox;
	private: System::Windows::Forms::Button^ determinantButton;


	private: System::Windows::Forms::Button^ resetButton;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ matrixDecompositionButton;
	private: System::Windows::Forms::Button^ invertibleMatrixButton;
	private: System::Windows::Forms::Button^ slrButton;
	private: System::Windows::Forms::Panel^ centerPanel;
	private: System::Windows::Forms::Button^ helpButton;



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
			this->slrButton = (gcnew System::Windows::Forms::Button());
			this->determinantButton = (gcnew System::Windows::Forms::Button());
			this->invertibleMatrixButton = (gcnew System::Windows::Forms::Button());
			this->matrixDecompositionButton = (gcnew System::Windows::Forms::Button());
			this->matrixRankButton = (gcnew System::Windows::Forms::Button());
			this->vectorsButton = (gcnew System::Windows::Forms::Button());
			this->taskButtonPanel = (gcnew System::Windows::Forms::Panel());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->helpButton = (gcnew System::Windows::Forms::Button());
			this->clearTaskButton = (gcnew System::Windows::Forms::Button());
			this->newTaskButton = (gcnew System::Windows::Forms::Button());
			this->taskPanel = (gcnew System::Windows::Forms::Panel());
			this->taskTextBox = (gcnew System::Windows::Forms::TextBox());
			this->vektoryAll = (gcnew System::Windows::Forms::Label());
			this->taskMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableTaskPanel = (gcnew System::Windows::Forms::Panel());
			this->ezbTable = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->centerPanel = (gcnew System::Windows::Forms::Panel());
			this->solutionTaskPanel = (gcnew System::Windows::Forms::Panel());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->stepTaskTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->bottomPanel->SuspendLayout();
			this->topPanel->SuspendLayout();
			this->taskButtonPanel->SuspendLayout();
			this->taskPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->taskMatrix))->BeginInit();
			this->tableTaskPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ezbTable))->BeginInit();
			this->centerPanel->SuspendLayout();
			this->solutionTaskPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// bottomPanel
			// 
			this->bottomPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bottomPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bottomPanel->Controls->Add(this->label1);
			this->bottomPanel->Location = System::Drawing::Point(0, 941);
			this->bottomPanel->Name = L"bottomPanel";
			this->bottomPanel->Size = System::Drawing::Size(1384, 20);
			this->bottomPanel->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Right;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label1->Location = System::Drawing::Point(1182, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Copyright 2022 Bc. Matej Drha";
			// 
			// topPanel
			// 
			this->topPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->topPanel->BackColor = System::Drawing::Color::DodgerBlue;
			this->topPanel->Controls->Add(this->slrButton);
			this->topPanel->Controls->Add(this->determinantButton);
			this->topPanel->Controls->Add(this->invertibleMatrixButton);
			this->topPanel->Controls->Add(this->matrixDecompositionButton);
			this->topPanel->Controls->Add(this->matrixRankButton);
			this->topPanel->Controls->Add(this->vectorsButton);
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(1384, 37);
			this->topPanel->TabIndex = 1;
			// 
			// slrButton
			// 
			this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->slrButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->slrButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->slrButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slrButton->Location = System::Drawing::Point(684, 0);
			this->slrButton->Name = L"slrButton";
			this->slrButton->Size = System::Drawing::Size(91, 37);
			this->slrButton->TabIndex = 5;
			this->slrButton->Text = L"SLR";
			this->slrButton->UseVisualStyleBackColor = false;
			this->slrButton->Click += gcnew System::EventHandler(this, &MyForm::slrButton_Click);
			// 
			// determinantButton
			// 
			this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->determinantButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->determinantButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->determinantButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->determinantButton->Location = System::Drawing::Point(520, 0);
			this->determinantButton->Name = L"determinantButton";
			this->determinantButton->Size = System::Drawing::Size(164, 37);
			this->determinantButton->TabIndex = 4;
			this->determinantButton->Text = L"Determinant matice";
			this->determinantButton->UseVisualStyleBackColor = false;
			this->determinantButton->Click += gcnew System::EventHandler(this, &MyForm::determinantButton_Click);
			// 
			// invertibleMatrixButton
			// 
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->invertibleMatrixButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->invertibleMatrixButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->invertibleMatrixButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->invertibleMatrixButton->Location = System::Drawing::Point(373, 0);
			this->invertibleMatrixButton->Name = L"invertibleMatrixButton";
			this->invertibleMatrixButton->Size = System::Drawing::Size(147, 37);
			this->invertibleMatrixButton->TabIndex = 3;
			this->invertibleMatrixButton->Text = L"Inverzná matica";
			this->invertibleMatrixButton->UseVisualStyleBackColor = false;
			this->invertibleMatrixButton->Click += gcnew System::EventHandler(this, &MyForm::invertibleMatrixButton_Click);
			// 
			// matrixDecompositionButton
			// 
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixDecompositionButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->matrixDecompositionButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->matrixDecompositionButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->matrixDecompositionButton->Location = System::Drawing::Point(245, 0);
			this->matrixDecompositionButton->Name = L"matrixDecompositionButton";
			this->matrixDecompositionButton->Size = System::Drawing::Size(128, 37);
			this->matrixDecompositionButton->TabIndex = 2;
			this->matrixDecompositionButton->Text = L"Rozklad matice";
			this->matrixDecompositionButton->UseVisualStyleBackColor = false;
			this->matrixDecompositionButton->Click += gcnew System::EventHandler(this, &MyForm::matrixDecompositionButton_Click);
			// 
			// matrixRankButton
			// 
			this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixRankButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->matrixRankButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->matrixRankButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->matrixRankButton->Location = System::Drawing::Point(105, 0);
			this->matrixRankButton->Name = L"matrixRankButton";
			this->matrixRankButton->Size = System::Drawing::Size(140, 37);
			this->matrixRankButton->TabIndex = 1;
			this->matrixRankButton->Text = L"Hodnosť matice";
			this->matrixRankButton->UseVisualStyleBackColor = false;
			this->matrixRankButton->Click += gcnew System::EventHandler(this, &MyForm::matrixRankButton_Click);
			// 
			// vectorsButton
			// 
			this->vectorsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->vectorsButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorsButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->vectorsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->vectorsButton->Location = System::Drawing::Point(0, 0);
			this->vectorsButton->Name = L"vectorsButton";
			this->vectorsButton->Size = System::Drawing::Size(105, 37);
			this->vectorsButton->TabIndex = 0;
			this->vectorsButton->Text = L"Vektory";
			this->vectorsButton->UseVisualStyleBackColor = false;
			this->vectorsButton->Click += gcnew System::EventHandler(this, &MyForm::vectorsButton_Click);
			// 
			// taskButtonPanel
			// 
			this->taskButtonPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->taskButtonPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->taskButtonPanel->Controls->Add(this->resetButton);
			this->taskButtonPanel->Controls->Add(this->helpButton);
			this->taskButtonPanel->Controls->Add(this->clearTaskButton);
			this->taskButtonPanel->Controls->Add(this->newTaskButton);
			this->taskButtonPanel->Location = System::Drawing::Point(0, 47);
			this->taskButtonPanel->Name = L"taskButtonPanel";
			this->taskButtonPanel->Size = System::Drawing::Size(1384, 37);
			this->taskButtonPanel->TabIndex = 2;
			// 
			// resetButton
			// 
			this->resetButton->BackColor = System::Drawing::Color::Goldenrod;
			this->resetButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->resetButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->resetButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->resetButton->Location = System::Drawing::Point(139, 0);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(153, 37);
			this->resetButton->TabIndex = 3;
			this->resetButton->Text = L"↺ Skúsiť znova";
			this->resetButton->UseVisualStyleBackColor = false;
			this->resetButton->Visible = false;
			this->resetButton->Click += gcnew System::EventHandler(this, &MyForm::resetButton_Click);
			// 
			// helpButton
			// 
			this->helpButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->helpButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->helpButton->Dock = System::Windows::Forms::DockStyle::Right;
			this->helpButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->helpButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->helpButton->Location = System::Drawing::Point(1279, 0);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(105, 37);
			this->helpButton->TabIndex = 3;
			this->helpButton->Text = L"\? Pomocník";
			this->helpButton->UseVisualStyleBackColor = false;
			this->helpButton->Visible = false;
			this->helpButton->Click += gcnew System::EventHandler(this, &MyForm::helpButton_Click);
			// 
			// clearTaskButton
			// 
			this->clearTaskButton->BackColor = System::Drawing::Color::Crimson;
			this->clearTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clearTaskButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->clearTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clearTaskButton->Location = System::Drawing::Point(297, 0);
			this->clearTaskButton->Name = L"clearTaskButton";
			this->clearTaskButton->Size = System::Drawing::Size(105, 37);
			this->clearTaskButton->TabIndex = 2;
			this->clearTaskButton->Text = L"❌ Zmazať";
			this->clearTaskButton->UseVisualStyleBackColor = false;
			this->clearTaskButton->Visible = false;
			this->clearTaskButton->Click += gcnew System::EventHandler(this, &MyForm::clearTaskButton_Click);
			// 
			// newTaskButton
			// 
			this->newTaskButton->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->newTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->newTaskButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->newTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newTaskButton->Location = System::Drawing::Point(5, 0);
			this->newTaskButton->Name = L"newTaskButton";
			this->newTaskButton->Size = System::Drawing::Size(129, 37);
			this->newTaskButton->TabIndex = 1;
			this->newTaskButton->Text = L"➕ Nová úloha";
			this->newTaskButton->UseVisualStyleBackColor = false;
			this->newTaskButton->Click += gcnew System::EventHandler(this, &MyForm::newTaskButton_Click);
			// 
			// taskPanel
			// 
			this->taskPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->taskPanel->AutoSize = true;
			this->taskPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->taskPanel->Controls->Add(this->taskTextBox);
			this->taskPanel->Controls->Add(this->vektoryAll);
			this->taskPanel->Controls->Add(this->taskMatrix);
			this->taskPanel->Controls->Add(this->label3);
			this->taskPanel->Controls->Add(this->label2);
			this->taskPanel->Location = System::Drawing::Point(0, 86);
			this->taskPanel->Name = L"taskPanel";
			this->taskPanel->Size = System::Drawing::Size(1383, 273);
			this->taskPanel->TabIndex = 3;
			this->taskPanel->Visible = false;
			this->taskPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::taskPanel_Paint);
			// 
			// taskTextBox
			// 
			this->taskTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->taskTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->taskTextBox->Dock = System::Windows::Forms::DockStyle::Right;
			this->taskTextBox->ForeColor = System::Drawing::SystemColors::Window;
			this->taskTextBox->Location = System::Drawing::Point(696, 0);
			this->taskTextBox->Multiline = true;
			this->taskTextBox->Name = L"taskTextBox";
			this->taskTextBox->ReadOnly = true;
			this->taskTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->taskTextBox->Size = System::Drawing::Size(685, 271);
			this->taskTextBox->TabIndex = 4;
			// 
			// vektoryAll
			// 
			this->vektoryAll->AutoSize = true;
			this->vektoryAll->Location = System::Drawing::Point(111, 52);
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
			this->taskMatrix->Enabled = false;
			this->taskMatrix->Location = System::Drawing::Point(111, 52);
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
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 21);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Vektory:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 21);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Úloha:";
			// 
			// tableTaskPanel
			// 
			this->tableTaskPanel->AutoScroll = true;
			this->tableTaskPanel->Controls->Add(this->ezbTable);
			this->tableTaskPanel->Controls->Add(this->label4);
			this->tableTaskPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->tableTaskPanel->Location = System::Drawing::Point(0, 0);
			this->tableTaskPanel->Name = L"tableTaskPanel";
			this->tableTaskPanel->Size = System::Drawing::Size(685, 583);
			this->tableTaskPanel->TabIndex = 4;
			this->tableTaskPanel->Visible = false;
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
			this->ezbTable->Location = System::Drawing::Point(12, 45);
			this->ezbTable->MultiSelect = false;
			this->ezbTable->Name = L"ezbTable";
			this->ezbTable->ReadOnly = true;
			this->ezbTable->RowHeadersVisible = false;
			this->ezbTable->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->ezbTable->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->ezbTable->Size = System::Drawing::Size(664, 360);
			this->ezbTable->TabIndex = 5;
			this->ezbTable->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::ezbTable_CellDoubleClick);
			this->ezbTable->SelectionChanged += gcnew System::EventHandler(this, &MyForm::ezbTable_SelectionChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 21);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Riešenie:";
			// 
			// centerPanel
			// 
			this->centerPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->centerPanel->Controls->Add(this->solutionTaskPanel);
			this->centerPanel->Controls->Add(this->tableTaskPanel);
			this->centerPanel->Location = System::Drawing::Point(1, 359);
			this->centerPanel->Name = L"centerPanel";
			this->centerPanel->Size = System::Drawing::Size(1382, 583);
			this->centerPanel->TabIndex = 6;
			// 
			// solutionTaskPanel
			// 
			this->solutionTaskPanel->AutoScroll = true;
			this->solutionTaskPanel->Controls->Add(this->okButton);
			this->solutionTaskPanel->Controls->Add(this->stepTaskTextBox);
			this->solutionTaskPanel->Controls->Add(this->label5);
			this->solutionTaskPanel->Dock = System::Windows::Forms::DockStyle::Right;
			this->solutionTaskPanel->Location = System::Drawing::Point(697, 0);
			this->solutionTaskPanel->Name = L"solutionTaskPanel";
			this->solutionTaskPanel->Size = System::Drawing::Size(685, 583);
			this->solutionTaskPanel->TabIndex = 5;
			this->solutionTaskPanel->Visible = false;
			// 
			// okButton
			// 
			this->okButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->okButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->okButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->okButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->okButton->Location = System::Drawing::Point(562, 420);
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
			this->stepTaskTextBox->Location = System::Drawing::Point(12, 39);
			this->stepTaskTextBox->Multiline = true;
			this->stepTaskTextBox->Name = L"stepTaskTextBox";
			this->stepTaskTextBox->ReadOnly = true;
			this->stepTaskTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->stepTaskTextBox->Size = System::Drawing::Size(668, 366);
			this->stepTaskTextBox->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 21);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Výsledok:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(1384, 961);
			this->Controls->Add(this->centerPanel);
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
			this->Text = L"EZB kalkulačka";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MyForm::MyForm_SizeChanged);
			this->bottomPanel->ResumeLayout(false);
			this->bottomPanel->PerformLayout();
			this->topPanel->ResumeLayout(false);
			this->taskButtonPanel->ResumeLayout(false);
			this->taskPanel->ResumeLayout(false);
			this->taskPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->taskMatrix))->EndInit();
			this->tableTaskPanel->ResumeLayout(false);
			this->tableTaskPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ezbTable))->EndInit();
			this->centerPanel->ResumeLayout(false);
			this->solutionTaskPanel->ResumeLayout(false);
			this->solutionTaskPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

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
		if (taskType == 0) vectorsNewTaskD->ShowDialog();
		if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) matrixNewTaskD->ShowDialog();
		if (taskType == 5) slrNewTaskD->ShowDialog();
	}
	else {
		if (taskType == 0) {
			vectorsNewTaskD = gcnew vectorsNewTaskDialog();
			vectorsNewTaskD->ShowDialog();
		}
		if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) {
			matrixNewTaskD = gcnew matrixNewTaskDialog();
			if (taskType == 2 || taskType == 3 || taskType == 4) matrixNewTaskD->vectorB->Hide();
			if (taskType == 1) matrixNewTaskD->vectorB->Show();
			if (taskType == 3 || taskType == 4) {
				matrixNewTaskD->label2->Hide();
				matrixNewTaskD->pocetStlpcov->Hide();
				matrixNewTaskD->LabelFirstAction->Text = "Zadaj rozmer matice:";
			}
			else {
				matrixNewTaskD->label2->Show();
				matrixNewTaskD->pocetStlpcov->Show();
				matrixNewTaskD->LabelFirstAction->Text = "Zadaj pocet riadkov:";
			}
			matrixNewTaskD->ShowDialog();
		}
		if (taskType == 5) {
			slrNewTaskD = gcnew slrNewTaskDialog();
			slrNewTaskD->ShowDialog();
		}
	}

	if ((taskType == 0 && vectorsNewTaskD->created) || ((taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) && matrixNewTaskD->created) ||
		(taskType == 5 && slrNewTaskD->created)) {
		createNewTask();
	}
	
}
private: System::Void clearTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
	taskMatrix->Rows->Clear();
	taskMatrix->Refresh();
	ezbTable->RowCount = 0;
	ezbTable->Enabled = true;
	ezbTable->ColumnCount = 0;
	ezbTable->Height = 360;
	ezbTable->Width = 664;
	ezbTable->Refresh();
	taskPanel->Hide();
	tableTaskPanel->Hide();
	solutionTaskPanel->Hide();
	stepTaskTextBox->Clear();
	okButton->Enabled = false;
	okButton->Text = "OK";
	label5->Text = "Úloha:";
	vektoryAll->Text = "";
	newTaskButton->Text = "➕ Nová úloha";
	clearTaskButton->Visible = false;
	helpButton->Text = "\? Pomocník";
	helpButton->Visible = false;
	resetButton->Visible = false;
	taskTextBox->Text = "";

}
private: System::Void ezbTable_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {

		int hlbka = 0;
		if (taskType == 0) hlbka = vt->pocetSuradnic;
		if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) hlbka = mt->pocetRiadkov;
		if (taskType == 5) hlbka = st->pocetRovnic;

		if (ezbTable->CurrentCell->OwningColumn->Index == 0 || ezbTable->CurrentCell->OwningColumn->Index == ezbTable->ColumnCount - 1 || ezbTable->CurrentCell->OwningRow->Index == ezbTable->RowCount - 1 ||
			ezbTable->CurrentCell->OwningRow->Index < ezbTable->RowCount - (hlbka + 1)
			|| ezb->pocetBazickychVektorov[ezbTable->CurrentCell->OwningRow->Index - (hlbka + 1)*ezb->iteration] == 1 ||
			ezb->pocetZaclenenychVektorov[ezbTable->CurrentCell->OwningColumn->Index - 1] == 1
			|| ezbTable->CurrentCell->OwningColumn->Name == "b" || (taskType > 0 && taskType < 5 && ezbTable->CurrentCell->OwningColumn->Index > mt->pocetStlpcov)) {
			
			ezbTable->ClearSelection();
		}
	

}

private: System::Void vectorsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (clearTaskButton->Visible) {
		if (MessageBox::Show("Zmazat aktualnu ulohu ?", "Nova uloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
			taskType = 0;
		}
	}
	else {
		this->vectorsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
			static_cast<System::Int32>(static_cast<System::Byte>(25)));
		this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
		taskType = 0;
	}
	
}
private: System::Void matrixRankButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (clearTaskButton->Visible) {
		if (MessageBox::Show("Zmazat aktualnu ulohu ?", "Nova uloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixRankButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
			taskType = 1;
		}
	}
	else {
		this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixRankButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
			static_cast<System::Int32>(static_cast<System::Byte>(25)));
		this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
		taskType = 1;
	}
}
private: System::Void matrixDecompositionButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (clearTaskButton->Visible) {
		if (MessageBox::Show("Zmazat aktualnu ulohu ?", "Nova uloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
			taskType = 2;
		}
	}
	else {
		this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixDecompositionButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
			static_cast<System::Int32>(static_cast<System::Byte>(25)));
		this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
		taskType = 2;
	}
}
private: System::Void invertibleMatrixButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (clearTaskButton->Visible) {
		if (MessageBox::Show("Zmazat aktualnu ulohu ?", "Nova uloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
			taskType = 3;
		}
	}
	else {
		this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->invertibleMatrixButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
			static_cast<System::Int32>(static_cast<System::Byte>(25)));
		this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
		taskType = 3;
	}

}
private: System::Void determinantButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (clearTaskButton->Visible) {
		if (MessageBox::Show("Zmazat aktualnu ulohu ?", "Nova uloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->determinantButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
			taskType = 4;
		}
	}
	else {
		this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->determinantButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
			static_cast<System::Int32>(static_cast<System::Byte>(25)));
		this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
		taskType = 4;
	}
}
private: System::Void slrButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (clearTaskButton->Visible) {
		if (MessageBox::Show("Zmazat aktualnu ulohu ?", "Nova uloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;;
			this->slrButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			taskType = 5;
		}
	}
	else {
		this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;;
		this->slrButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
			static_cast<System::Int32>(static_cast<System::Byte>(25)));
		taskType = 5;
	}
}

private: System::Void okButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->clearTaskButton->PerformClick();
}
private: System::Void resetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	createNewTask();
}

private: void createNewTask() {
		   if (this->newTaskButton->Text == "Upravit")
			   this->clearTaskButton->PerformClick();

		   this->newTaskButton->Text = "Upravit";
		   this->clearTaskButton->Visible = true;
		   this->clearTaskButton->Location = System::Drawing::Point(139, 0);
		   this->helpButton->Visible = true;
		   this->taskPanel->Show();
		   this->tableTaskPanel->Show();

		   if (taskType == 0) {
			   vectorsNewTaskD->created = false;
			   label3->Text = "Vektory:";
			   taskTextBox->Text = "a) Zistite ci je system vektorov linearne zavisly alebo nezavisly\r\nb) Vypocitajte hodnost systemu vektorov (h)";
			   vektoryAll->Show();
			   taskMatrix->Hide();
			   
			   vt = new VectorsTask(vectorsNewTaskD->getPocetVektorov(), vectorsNewTaskD->getPocetSuradnicVektorov(), vectorsNewTaskD->getMatrix(), vectorsNewTaskD->getVB());

			   if (vt->vectorB != 0) taskTextBox->Text += "\r\nc) Zistite ci je vektor b linearnou kombinaciou systemu vektorov";

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
		   if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) {
			   matrixNewTaskD->created = false;
			   label3->Text = "Matica:";

			   if (taskType == 1) taskTextBox->Text = "a) Vypocitajte hodnost matice\r\n";
			   if (taskType == 2) taskTextBox->Text = "a) Zistite ci je mozne rozlozit maticu na sucin matic\r\nb) Najdite bazicky rozklad matice v tvare: \r\n A = B * C = B * (E | D)";
			   if (taskType == 3) taskTextBox->Text = "a) Zistite ci je stvorcova matica regularna alebo singularna\r\nb) Najdite inverznu maticu k matici A";
			   if (taskType == 4) taskTextBox->Text = "a) Zistite ci sa da pre maticu vypocitat determinant\r\nb) Vypocitajte determinant stvorcovej matice A";
			 
			   vektoryAll->Hide();
			   taskMatrix->Show();

			   mt = new MatrixTask(matrixNewTaskD->getPocetRiadkov(), matrixNewTaskD->getPocetStlpcov(), matrixNewTaskD->getMatrix(), matrixNewTaskD->getVB(), taskType);

			   if (mt->vectorB != 0) taskTextBox->Text += "b) Zistite ci vektor b patri do stlpcoveho podpriestoru matice.";

			   //task matrix

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
			   taskMatrix->ClearSelection();

			   //vytvorenie bazickej matice

			   int PS = mt->pocetStlpcov;
			   if (taskType == 3) PS += mt->pocetStlpcov;

			   double** bazickaMatica = 0;
			   bazickaMatica = new double* [mt->pocetRiadkov];
			   for (int h = 0; h < mt->pocetRiadkov; h++)
			   {
				   bazickaMatica[h] = new double[PS + 1];
			   }

			   ezbTable->ColumnCount = PS + 2;
			   ezbTable->MultiSelect = false;
			   ezbTable->Columns[0]->Name = "Báza";
			   for (int i = 1; i <= PS; i++) {
				   if (mt->vectorB == 1 && i == PS)
					   ezbTable->Columns[i]->Name = "b";
				   else
					   if(taskType == 3 && i > PS - mt->pocetStlpcov)
						   ezbTable->Columns[i]->Name = "e" + System::Convert::ToString(i - mt->pocetStlpcov);
					   else
						   ezbTable->Columns[i]->Name = "s" + System::Convert::ToString(i);
				   ezbTable->Columns[i]->Width = 55;

			   }
			   ezbTable->Columns[PS + 1]->Name = "Suma";

			   for (int i = 0; i <= mt->pocetRiadkov; i++) {
				   ezbTable->Rows->Add();
				   ezbTable->Rows[i]->Height = 35;
				   ezbTable[0, i]->Value = "e" + System::Convert::ToString(i + 1);
			   }
			   ezbTable->Rows[mt->pocetRiadkov]->Height = 2;

			   for (int i = 0; i <= PS + 1; i++) {
				   ezbTable->Columns[i]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				   for (int j = 0; j <= mt->pocetRiadkov; j++) {
					   ezbTable[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   ezbTable[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
				   }
			   }
			   //vypln ezb tabulku hodnotami
			   for (int j = 0; j < mt->pocetRiadkov; j++) {
				   double suma = 0;
				   for (int i = 0; i < PS; i++) {
					   suma += mt->matrix[j][i];
					   ezbTable[i + 1, j]->Value = round_up(mt->matrix[j][i], 2);
					   bazickaMatica[j][i] = mt->matrix[j][i];
				   }
				   ezbTable[PS + 1, j]->Value = round_up(suma, 2);
				   bazickaMatica[j][PS] = suma;
			   }
			   //
			   //skontroluj bazicku maticu /// nove ezb
			   //
			   ezb = new EZB(bazickaMatica, PS + 1, mt->pocetRiadkov);
			   checkMatrix(bazickaMatica);
			   ezbTable->Height = ezbTable->RowCount * 35;
			   ezbTable->Width = (ezbTable->ColumnCount + 2) * 55;
		   }
			//ak sa riesi SLR
		   if (taskType == 5) {
			   slrNewTaskD->created = false;
			   label3->Text = "Rovnice:";
			   taskTextBox->Text = "a) Zistite, ci system linearnych rovnic ma riesenie. + \r\nb) Najdite vseobecne riesenie, resp. mnozinu rieseni.";
			   vektoryAll->Show();
			   taskMatrix->Hide();

			   st = new SLRTask(slrNewTaskD->getPocetRovnic(), slrNewTaskD->getPocetZloziekRovnic(), slrNewTaskD->getMatrix(), slrNewTaskD->getZeros());

			   //zobraz rovnice v labeli

			   String^ text = "";

			   for (int i = 0; i < st->pocetRovnic; i++) {
				   for (int j = 0; j < st->pocetZloziek; j++) {
					   text += st->matrix[i][j] + "x" + System::Convert::ToString(j+1) + " ";
					   if (j < st->pocetZloziek - 1 && st->matrix[i][j + 1] >= 0) text += "+ ";
					   if (st->zeros == 1 && j == st->pocetZloziek - 1) text += " = " + st->matrix[i][st->pocetZloziek];
				   }
				   text += "\r\n";
			   }

			   vektoryAll->Text = text;

			   //
			   //vytvor bazicku maticu
			   //
			   double** bazickaMatica = 0;
			   bazickaMatica = new double* [st->pocetRovnic];
			   for (int h = 0; h < st->pocetRovnic; h++)
			   {
				   bazickaMatica[h] = new double[st->pocetZloziek + st->zeros + 1];
			   }

			   ezbTable->ColumnCount = st->pocetZloziek + st->zeros + 2;
			   ezbTable->Columns[0]->Name = "Báza";
			   for (int i = 1; i <= st->pocetZloziek + st->zeros; i++) {
				   if (st->zeros == 1 && i == st->pocetZloziek + st->zeros)
					   ezbTable->Columns[i]->Name = "b";
				   else
					   ezbTable->Columns[i]->Name = "x" + System::Convert::ToString(i);
				   ezbTable->Columns[i]->Width = 55;

			   }
			   ezbTable->Columns[st->pocetZloziek + st->zeros + 1]->Name = "Suma";

			   for (int i = 0; i <= st->pocetRovnic; i++) {
				   ezbTable->Rows->Add();
				   ezbTable->Rows[i]->Height = 35;
				   ezbTable[0, i]->Value = "e" + System::Convert::ToString(i + 1);
			   }
			   ezbTable->Rows[st->pocetRovnic]->Height = 2;

			   for (int i = 0; i <= st->pocetZloziek + st->zeros + 1; i++) {
				   ezbTable->Columns[i]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				   for (int j = 0; j <= st->pocetRovnic; j++) {
					   ezbTable[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   ezbTable[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
				   }
			   }

			   for (int j = 0; j < st->pocetRovnic; j++) {
				   double suma = 0;
				   for (int i = 0; i < st->pocetZloziek + st->zeros; i++) {
					   suma += st->matrix[j][i];
					   ezbTable[i + 1, j]->Value = round_up(st->matrix[j][i], 2);
					   bazickaMatica[j][i] = st->matrix[j][i];
				   }
				   ezbTable[st->pocetZloziek + st->zeros + 1, j]->Value = round_up(suma, 2);
				   bazickaMatica[j][st->pocetZloziek + st->zeros] = suma;
			   }


			   //
			   //skontroluj bazicku maticu /// nove ezb
			   //
			   ezb = new EZB(bazickaMatica, st->pocetZloziek+st->zeros + 1, st->pocetRovnic);
			   checkMatrix(bazickaMatica);
		   }
	   }

private: void checkMatrix(double** m) {
	ezbTable->ClearSelection();

	int check = 0;
	if (taskType == 0) check = ezb->checkMatrix(vt->vectorB);
	if (taskType == 1 || taskType == 2 || taskType == 4) check = ezb->checkMatrix(mt->vectorB);
	if (taskType == 3) check = ezb->checkMatrix(mt->pocetStlpcov);
	if (taskType == 5) check = ezb->checkMatrix(st->zeros);

	if (check < 2) { //nulovy riadok alebo koniec ezb
		this->solutionTaskPanel->Show();
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
			stepTaskTextBox->Text += "\r\n\r\nUkoncit ulohu?";
		}
		if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) {

			for (int i = 0; i < mt->pocetRiadkov; i++) {
				field += ezbTable[0, ezbTable->RowCount - mt->pocetRiadkov + i - 1]->Value->ToString() + "/";
			}

			stepTaskTextBox->Text = mt->getResult(m, check, ezb->pocetZaclenenychVektorov, ezb->pocetBazickychVektorov, field, ezbTable->RowCount, ezb->pivots);
			stepTaskTextBox->Text += "\r\n\r\nUkoncit ulohu?";
		}
		if (taskType == 5) {
			for (int i = 0; i < st->pocetRovnic; i++) {
				field += ezbTable[0, ezbTable->RowCount - st->pocetRovnic + i - 1]->Value->ToString() + "/";
			}

			stepTaskTextBox->Text = st->getResult(m, check, ezb->pocetZaclenenychVektorov, ezb->pocetBazickychVektorov, field, ezbTable->RowCount);
			stepTaskTextBox->Text += "\r\n\r\nUkoncit ulohu?";
		}

	}
	
}

private: System::Void helpButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (helpButton->Text == "Pomocník") {
		helpButton->Text = "Zavriet";

		if(taskType == 0) taskTextBox->Text = "Vhodnou volbou veducich prvkov (dvojklikom v tabulke) postupne uskutocnite elementarnu zmenu bazy.\r\n\r\n" +
			"Vhodny veduci prvok je 1 alebo cislo, ktore deli cely riadok bezo zvysku.\r\n\r\n" +
			"Vektor b nezaclenujte do bazy!\r\n\r\n" +
			"Z poslednej casti tabulky zistite ci je system vektorov linearne zavisly alebo nezavisly, hodnost systemu vektorov (h), popripade ci je vektor b linearnou kombinaciou systemu vektorov.";

		if (taskType == 1) taskTextBox->Text = "Metodou elementarnej zmeny bazy urcite hodnost matice. \r\n\r\nMaticu uvazujeme ako system stlpcovych vektorov.\r\n\r\n" +
				"Zlozky stlpovych vektorov su zapisane v tabulke elementarnej zmeny bazy a povazujeme ich za suradnice tychto vektorov.\r\n\r\n" +
				"Vyberom veduceho prvku (dvojklikom v tabulke) postupne uskutocnite maximalny pocet EZB na najdenie hodnosti matice, ktora sa rovna hodnosti systemu stlpcovych vektorov, popripade zistite ci je vektor b patri do stlpcoveho podpriestoru matice.\r\n\r\n";

		if (taskType == 2) taskTextBox->Text = "Metodou elementarnej zmeny bazy najdite bazicky rozklad matice v tvare: \r\n A = B * C = B * (E | D)\r\n\r\n" +
			"Zlozky stlpovych vektorov su zapisane v tabulke elementarnej zmeny bazy a povazujeme ich za suradnice tychto vektorov.\r\n\r\n" +
			"Vhodnou volbou veducich prvkov (dvojklikom v tabulke) v prirodzenom poradi postupne uskutocnite elementarnu zmenu bazy.\r\n\r\n";

		if (taskType == 3) taskTextBox->Text = "Metodou elementarnej zmeny bazy najdite inverznu maticu k matici A.\r\n\r\n" +
			"Zlozky stlpovych vektorov su zapisane v tabulke elementarnej zmeny bazy a povazujeme ich za suradnice tychto vektorov.\r\n\r\n" +
			"V druhej casti tabulky je zapisana jednotkova matica E, kedze podla definicie A * A-1 = E."+
			"Vhodnou volbou veducich prvkov (dvojklikom v tabulke) postupne uskutocnite elementarnu zmenu bazy.\r\n\r\n";

		if(taskType == 4) taskTextBox->Text = "Metodou elementarnej zmeny bazy vypocitajte determinant matice.\r\n\r\n" +
			"Zlozky stlpovych vektorov su zapisane v tabulke elementarnej zmeny bazy a povazujeme ich za suradnice tychto vektorov.\r\n\r\n" +
			"Vhodnou volbou veducich prvkov (dvojklikom v tabulke) postupne zaclenujeme maximalny pocet vektorov do bazy.\r\n\r\n" +
			"Z poslednej casti tabulky zistite ci je matica regularna a v pripade ze ano, vypocitaj determinant ako sucin veducich prvkov a cisla (-1)^I.";

		if (taskType == 5) taskTextBox->Text = "Metodou elementarnej zmeny bazy najdite riesenie systemu linearnych rovnic ak taketo riesenie existuje.\r\n\r\n" +
				"V tabulke elementarnej zmeny bazy su zapisane stlpcove vektory matice systemu linearnych rovnic a ich zlozky povazujeme za suradnice v jednotkovej baze.\r\n\r\n" +
				"Vyberom veduceho prvku (dvojklikom v tabulke) postupne uskutocnite elementarne zmeny bazy a z poslednej casti tabulky rozhodnite o riesitelnosti systemu linearnych rovnic.\r\n\r\n"+
			"Vhodny veduci prvok je 1 alebo cislo, ktore deli cely riadok bezo zvysku.\r\n\r\n";


	}

	else {
		helpButton->Text == "Pomocník";

		if (taskType == 0) {
			taskTextBox->Text = "a) Zistite ci je system vektorov linearne zavisly alebo nezavisly\r\nb) Vypocitajte hodnost systemu vektorov (h)";
			if(vt!=NULL && vt->vectorB != 0 ) taskTextBox->Text += "\r\nc) Zistite ci je vektor b linearnou kombinaciou systemu vektorov";
		}

		if (taskType == 1) {
			taskTextBox->Text = "a) Vypocitajte hodnost matice\r\n";
			if (mt != NULL && mt->vectorB != 0) taskTextBox->Text += "b) Zistite ci vektor b patri do stlpcoveho podpriestoru matice.";
		}

		if (taskType == 2) {
			taskTextBox->Text = "a) Zistite ci je mozne rozlozit maticu na sucin matic\r\nb) Najdite bazicky rozklad matice v tvare: \r\n A = B * C = B * (E | D)";
		}

		if (taskType == 3) {
			taskTextBox->Text = "a) Zistite ci je stvorcova matica regularna alebo singularna\r\nb) Najdite inverznu maticu k matici A";
		}

		if (taskType == 4) {
			taskTextBox->Text = "a) Zistite ci sa da pre maticu vypocitat determinant\r\nb) Vypocitajte determinant stvorcovej matice A";
		}

		if (taskType == 5) taskTextBox->Text = "a) Zistite ci system linearnych rovnic ma riesenie. + \r\nb) Najdite vseobecne riesenie, resp. mnozinu rieseni.";
	}
		
}
private: System::Void ezbTable_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int hlbka = 0;
	if (taskType == 0) hlbka = vt->pocetSuradnic;
	if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) hlbka = mt->pocetRiadkov;
	if (taskType == 5) hlbka = st->pocetRovnic;

	if (ezbTable->CurrentCell->OwningColumn->Index == 0 || ezbTable->CurrentCell->OwningColumn->Index == ezbTable->ColumnCount - 1 || ezbTable->CurrentCell->OwningRow->Index == ezbTable->RowCount - 1 ||
		ezbTable->CurrentCell->OwningRow->Index < ezbTable->RowCount - (hlbka + 1)
		|| ezb->pocetBazickychVektorov[ezbTable->CurrentCell->OwningRow->Index - (hlbka + 1) * ezb->iteration] == 1 ||
		ezb->pocetZaclenenychVektorov[ezbTable->CurrentCell->OwningColumn->Index - 1] == 1
		|| ezbTable->CurrentCell->OwningColumn->Name == "b" || (taskType > 0 && taskType < 5 && ezbTable->CurrentCell->OwningColumn->Index > mt->pocetStlpcov)) {

		ezbTable->ClearSelection();
	}
	else {
		if (ezbTable->CurrentCell->Value->ToString() == "0") {
			MessageBox::Show("Pivot nemoze byt 0 !", "Chybny vyber !", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		ezbTable->CurrentCell->Style->BackColor = System::Drawing::Color::DodgerBlue;
		ezbTable->CurrentCell->Style->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));

		int sirka = 0;
		int hlbka = 0;

		if (taskType == 0) {
			sirka = vt->pocetVektorov;
			hlbka = vt->pocetSuradnic;
		}

		if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) {
			sirka = mt->pocetStlpcov;
			hlbka = mt->pocetRiadkov;
			if (taskType == 3) sirka += mt->pocetStlpcov;
		}

		if (taskType == 5) {
			sirka = st->pocetZloziek + st->zeros;
			hlbka = st->pocetRovnic;
		}

		double** newMatrix = 0;
		ezb->pivots[ezb->iteration] = ezb->getPivot(ezbTable->CurrentCell->OwningColumn->Index - 1, (ezbTable->CurrentCell->OwningRow->Index - ezb->iteration * (hlbka + 1)));
		newMatrix = ezb->ezb(ezbTable->CurrentCell->OwningColumn->Index - 1, (ezbTable->CurrentCell->OwningRow->Index - ezb->iteration * (hlbka + 1)));

		// dokreslenie tabulky

		for (int i = (hlbka + 1) * ezb->iteration; i <= (hlbka * (ezb->iteration + 1)) + ezb->iteration; i++) {
			ezbTable->Rows->Add();
			ezbTable->Rows[i]->Height = 35;
			ezbTable[0, i]->Value = ezbTable[0, i - (hlbka + 1)]->Value;
			if (i == ezbTable->CurrentCell->OwningRow->Index + (hlbka + 1)) {
				// a1->e1
				if (taskType == 0)
					ezbTable[0, i]->Value = "a" + ezbTable->CurrentCell->OwningColumn->Index + " -> e" + System::Convert::ToString(1 + i - (hlbka + 1) * ezb->iteration);
				if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4)
					ezbTable[0, i]->Value = "s" + ezbTable->CurrentCell->OwningColumn->Index + " -> e" + System::Convert::ToString(1 + i - (hlbka + 1) * ezb->iteration);
				if (taskType == 5)
					ezbTable[0, i]->Value = "x" + ezbTable->CurrentCell->OwningColumn->Index + " -> e" + System::Convert::ToString(1 + i - (hlbka + 1) * ezb->iteration);
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

		for (int j = (hlbka + 1) * ezb->iteration; j < (hlbka * (ezb->iteration + 1)) + ezb->iteration; j++) {
			for (int i = 0; i <= sirka; i++) {
				ezbTable[i + 1, j]->Value = round_up(newMatrix[j - (((hlbka + 1) * ezb->iteration))][i], 2);
			}
		}

		checkMatrix(newMatrix);
		ezbTable->Height = ezbTable->RowCount * 35;
		ezbTable->Width = (ezbTable->ColumnCount + 2) * 55;

		if (!resetButton->Visible) {
			resetButton->Visible = true;
			this->clearTaskButton->Location = System::Drawing::Point(297, 0);
		}
	}
}
private: System::Void MyForm_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	solutionTaskPanel->Width = this->Width / 2;
	tableTaskPanel->Width = this->Width / 2;
	taskTextBox->Width = this->Width / 2;
	stepTaskTextBox->Width = this->Width / 2 - 18;
	okButton->Location = System::Drawing::Point(stepTaskTextBox->Width - 123, 420);
}
};
}
