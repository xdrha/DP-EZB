#pragma once
#include "VectorsNewTaskDialog.h"
#include "LPNewTaskDialog.h"
#include "MatrixNewTaskDialog.h"
#include "SLRNewTaskDialog.h"
#include "EZB.cpp"
#include "VectorsTask.cpp"
#include "MatrixTask.cpp"
#include "SLRTask.cpp"
#include "LPTask.cpp"
#include "welcomeDialog.h"
#include "helpDialog.h"
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

	private: System::Windows::Forms::TextBox^ stepTaskTextBox;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ vektoryAll;

	vectorsNewTaskDialog^ vectorsNewTaskD;
	matrixNewTaskDialog^ matrixNewTaskD;
	slrNewTaskDialog^ slrNewTaskD;
	lpNewTaskDialog^ lpNewTaskD;

	EZB* ezb;
	VectorsTask* vt;
	MatrixTask* mt;
	SLRTask* st;
	LPTask* lpt;
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
	private: System::Windows::Forms::Button^ lpButton;
	private: System::Windows::Forms::Panel^ matrixPanel;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ classicSolutionPanel;
	private: System::Windows::Forms::Panel^ matrixSolutionPanel;
	private: System::Windows::Forms::Panel^ solutionMatrixPanel1;
	private: System::Windows::Forms::Label^ solutionMatrixLabel1;
	private: System::Windows::Forms::Panel^ solutionMatrixRightBracket1;



	private: System::Windows::Forms::Panel^ solutionMatrixLeftBracket1;
	private: System::Windows::Forms::DataGridView^ solutionMatrix1;


	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::Panel^ solutionMatrixPanel2;
	private: System::Windows::Forms::Label^ solutionMatrixLabel2;
	private: System::Windows::Forms::Panel^ solutionMatrixRightBracket2;
	private: System::Windows::Forms::Panel^ solutionMatrixLeftBracket2;
	private: System::Windows::Forms::DataGridView^ solutionMatrix2;
	private: System::Windows::Forms::Button^ helperButton;
	private: System::Windows::Forms::Panel^ backgroundPanel;
	private: System::Windows::Forms::Label^ label7;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->bottomPanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->helperButton = (gcnew System::Windows::Forms::Button());
			this->lpButton = (gcnew System::Windows::Forms::Button());
			this->slrButton = (gcnew System::Windows::Forms::Button());
			this->determinantButton = (gcnew System::Windows::Forms::Button());
			this->invertibleMatrixButton = (gcnew System::Windows::Forms::Button());
			this->matrixDecompositionButton = (gcnew System::Windows::Forms::Button());
			this->matrixRankButton = (gcnew System::Windows::Forms::Button());
			this->vectorsButton = (gcnew System::Windows::Forms::Button());
			this->helpButton = (gcnew System::Windows::Forms::Button());
			this->taskButtonPanel = (gcnew System::Windows::Forms::Panel());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->clearTaskButton = (gcnew System::Windows::Forms::Button());
			this->newTaskButton = (gcnew System::Windows::Forms::Button());
			this->taskPanel = (gcnew System::Windows::Forms::Panel());
			this->matrixPanel = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->taskMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->taskTextBox = (gcnew System::Windows::Forms::TextBox());
			this->vektoryAll = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableTaskPanel = (gcnew System::Windows::Forms::Panel());
			this->backgroundPanel = (gcnew System::Windows::Forms::Panel());
			this->ezbTable = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->centerPanel = (gcnew System::Windows::Forms::Panel());
			this->solutionTaskPanel = (gcnew System::Windows::Forms::Panel());
			this->matrixSolutionPanel = (gcnew System::Windows::Forms::Panel());
			this->solutionMatrixPanel2 = (gcnew System::Windows::Forms::Panel());
			this->solutionMatrixLabel2 = (gcnew System::Windows::Forms::Label());
			this->solutionMatrixRightBracket2 = (gcnew System::Windows::Forms::Panel());
			this->solutionMatrixLeftBracket2 = (gcnew System::Windows::Forms::Panel());
			this->solutionMatrix2 = (gcnew System::Windows::Forms::DataGridView());
			this->solutionMatrixPanel1 = (gcnew System::Windows::Forms::Panel());
			this->solutionMatrixLabel1 = (gcnew System::Windows::Forms::Label());
			this->solutionMatrixRightBracket1 = (gcnew System::Windows::Forms::Panel());
			this->solutionMatrixLeftBracket1 = (gcnew System::Windows::Forms::Panel());
			this->solutionMatrix1 = (gcnew System::Windows::Forms::DataGridView());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->classicSolutionPanel = (gcnew System::Windows::Forms::Panel());
			this->stepTaskTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->bottomPanel->SuspendLayout();
			this->topPanel->SuspendLayout();
			this->taskButtonPanel->SuspendLayout();
			this->taskPanel->SuspendLayout();
			this->matrixPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->taskMatrix))->BeginInit();
			this->tableTaskPanel->SuspendLayout();
			this->backgroundPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ezbTable))->BeginInit();
			this->centerPanel->SuspendLayout();
			this->solutionTaskPanel->SuspendLayout();
			this->matrixSolutionPanel->SuspendLayout();
			this->solutionMatrixPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->solutionMatrix2))->BeginInit();
			this->solutionMatrixPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->solutionMatrix1))->BeginInit();
			this->classicSolutionPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// bottomPanel
			// 
			this->bottomPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bottomPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bottomPanel->Controls->Add(this->label1);
			this->bottomPanel->Location = System::Drawing::Point(0, 986);
			this->bottomPanel->Name = L"bottomPanel";
			this->bottomPanel->Size = System::Drawing::Size(1538, 21);
			this->bottomPanel->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Right;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label1->Location = System::Drawing::Point(1320, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Copyright © 2022 Bc. Matej Drha";
			// 
			// topPanel
			// 
			this->topPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->topPanel->BackColor = System::Drawing::Color::DodgerBlue;
			this->topPanel->Controls->Add(this->helperButton);
			this->topPanel->Controls->Add(this->lpButton);
			this->topPanel->Controls->Add(this->slrButton);
			this->topPanel->Controls->Add(this->determinantButton);
			this->topPanel->Controls->Add(this->invertibleMatrixButton);
			this->topPanel->Controls->Add(this->matrixDecompositionButton);
			this->topPanel->Controls->Add(this->matrixRankButton);
			this->topPanel->Controls->Add(this->vectorsButton);
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(1538, 38);
			this->topPanel->TabIndex = 1;
			// 
			// helperButton
			// 
			this->helperButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->helperButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->helperButton->Dock = System::Windows::Forms::DockStyle::Right;
			this->helperButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->helperButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->helperButton->Location = System::Drawing::Point(1425, 0);
			this->helperButton->Name = L"helperButton";
			this->helperButton->Size = System::Drawing::Size(113, 38);
			this->helperButton->TabIndex = 4;
			this->helperButton->Text = L"Pomocník";
			this->helperButton->UseVisualStyleBackColor = false;
			this->helperButton->Click += gcnew System::EventHandler(this, &MyForm::helperButton_Click);
			// 
			// lpButton
			// 
			this->lpButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->lpButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lpButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lpButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lpButton->Location = System::Drawing::Point(999, 0);
			this->lpButton->Name = L"lpButton";
			this->lpButton->Size = System::Drawing::Size(302, 38);
			this->lpButton->TabIndex = 6;
			this->lpButton->Text = L"Úloha lineárneho programovania";
			this->lpButton->UseVisualStyleBackColor = false;
			this->lpButton->Click += gcnew System::EventHandler(this, &MyForm::lpButton_Click);
			// 
			// slrButton
			// 
			this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->slrButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->slrButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->slrButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slrButton->Location = System::Drawing::Point(766, 0);
			this->slrButton->Name = L"slrButton";
			this->slrButton->Size = System::Drawing::Size(234, 38);
			this->slrButton->TabIndex = 5;
			this->slrButton->Text = L"Systém lineárnych rovníc";
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
			this->determinantButton->Location = System::Drawing::Point(585, 0);
			this->determinantButton->Name = L"determinantButton";
			this->determinantButton->Size = System::Drawing::Size(182, 38);
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
			this->invertibleMatrixButton->Location = System::Drawing::Point(423, 0);
			this->invertibleMatrixButton->Name = L"invertibleMatrixButton";
			this->invertibleMatrixButton->Size = System::Drawing::Size(163, 38);
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
			this->matrixDecompositionButton->Location = System::Drawing::Point(271, 0);
			this->matrixDecompositionButton->Name = L"matrixDecompositionButton";
			this->matrixDecompositionButton->Size = System::Drawing::Size(153, 38);
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
			this->matrixRankButton->Location = System::Drawing::Point(116, 0);
			this->matrixRankButton->Name = L"matrixRankButton";
			this->matrixRankButton->Size = System::Drawing::Size(156, 38);
			this->matrixRankButton->TabIndex = 1;
			this->matrixRankButton->Text = L"Hodnosť matice";
			this->matrixRankButton->UseVisualStyleBackColor = false;
			this->matrixRankButton->Click += gcnew System::EventHandler(this, &MyForm::matrixRankButton_Click);
			// 
			// vectorsButton
			// 
			this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->vectorsButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorsButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->vectorsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->vectorsButton->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorsButton->Location = System::Drawing::Point(0, 0);
			this->vectorsButton->Name = L"vectorsButton";
			this->vectorsButton->Size = System::Drawing::Size(117, 38);
			this->vectorsButton->TabIndex = 0;
			this->vectorsButton->Text = L"Vektory";
			this->vectorsButton->UseVisualStyleBackColor = false;
			this->vectorsButton->Click += gcnew System::EventHandler(this, &MyForm::vectorsButton_Click);
			// 
			// helpButton
			// 
			this->helpButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->helpButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->helpButton->Dock = System::Windows::Forms::DockStyle::Right;
			this->helpButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->helpButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->helpButton->Location = System::Drawing::Point(1493, 0);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(45, 38);
			this->helpButton->TabIndex = 3;
			this->helpButton->Text = L"\?";
			this->helpButton->UseVisualStyleBackColor = false;
			this->helpButton->Visible = false;
			this->helpButton->Click += gcnew System::EventHandler(this, &MyForm::helpButton_Click);
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
			this->taskButtonPanel->Location = System::Drawing::Point(0, 50);
			this->taskButtonPanel->Name = L"taskButtonPanel";
			this->taskButtonPanel->Size = System::Drawing::Size(1538, 38);
			this->taskButtonPanel->TabIndex = 2;
			// 
			// resetButton
			// 
			this->resetButton->BackColor = System::Drawing::Color::Goldenrod;
			this->resetButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->resetButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->resetButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->resetButton->Location = System::Drawing::Point(177, 0);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(170, 38);
			this->resetButton->TabIndex = 3;
			this->resetButton->Text = L"↺ Skúsiť znova";
			this->resetButton->UseVisualStyleBackColor = false;
			this->resetButton->Visible = false;
			this->resetButton->Click += gcnew System::EventHandler(this, &MyForm::resetButton_Click);
			// 
			// clearTaskButton
			// 
			this->clearTaskButton->BackColor = System::Drawing::Color::Crimson;
			this->clearTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clearTaskButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->clearTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clearTaskButton->Location = System::Drawing::Point(353, 0);
			this->clearTaskButton->Name = L"clearTaskButton";
			this->clearTaskButton->Size = System::Drawing::Size(117, 38);
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
			this->newTaskButton->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newTaskButton->Location = System::Drawing::Point(6, 0);
			this->newTaskButton->Name = L"newTaskButton";
			this->newTaskButton->Size = System::Drawing::Size(164, 38);
			this->newTaskButton->TabIndex = 1;
			this->newTaskButton->Text = L"➕ Nový výpočet";
			this->newTaskButton->UseVisualStyleBackColor = false;
			this->newTaskButton->Visible = false;
			this->newTaskButton->Click += gcnew System::EventHandler(this, &MyForm::newTaskButton_Click);
			// 
			// taskPanel
			// 
			this->taskPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->taskPanel->AutoSize = true;
			this->taskPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->taskPanel->Controls->Add(this->matrixPanel);
			this->taskPanel->Controls->Add(this->taskTextBox);
			this->taskPanel->Controls->Add(this->vektoryAll);
			this->taskPanel->Controls->Add(this->label3);
			this->taskPanel->Controls->Add(this->label2);
			this->taskPanel->Location = System::Drawing::Point(0, 90);
			this->taskPanel->Name = L"taskPanel";
			this->taskPanel->Size = System::Drawing::Size(1541, 286);
			this->taskPanel->TabIndex = 3;
			this->taskPanel->Visible = false;
			this->taskPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::taskPanel_Paint);
			// 
			// matrixPanel
			// 
			this->matrixPanel->BackColor = System::Drawing::Color::Transparent;
			this->matrixPanel->Controls->Add(this->label6);
			this->matrixPanel->Controls->Add(this->panel2);
			this->matrixPanel->Controls->Add(this->panel3);
			this->matrixPanel->Controls->Add(this->taskMatrix);
			this->matrixPanel->Location = System::Drawing::Point(17, 41);
			this->matrixPanel->Name = L"matrixPanel";
			this->matrixPanel->Size = System::Drawing::Size(450, 183);
			this->matrixPanel->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Window;
			this->label6->Location = System::Drawing::Point(2, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 28);
			this->label6->TabIndex = 19;
			this->label6->Text = L"matica A  =";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(430, 5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(10, 175);
			this->panel2->TabIndex = 18;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(133, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(10, 175);
			this->panel3->TabIndex = 17;
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
			this->taskMatrix->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->taskMatrix->DefaultCellStyle = dataGridViewCellStyle2;
			this->taskMatrix->Enabled = false;
			this->taskMatrix->Location = System::Drawing::Point(149, 5);
			this->taskMatrix->MultiSelect = false;
			this->taskMatrix->Name = L"taskMatrix";
			this->taskMatrix->ReadOnly = true;
			this->taskMatrix->RowHeadersVisible = false;
			this->taskMatrix->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->taskMatrix->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->taskMatrix->Size = System::Drawing::Size(275, 175);
			this->taskMatrix->TabIndex = 4;
			// 
			// taskTextBox
			// 
			this->taskTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->taskTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->taskTextBox->Dock = System::Windows::Forms::DockStyle::Right;
			this->taskTextBox->ForeColor = System::Drawing::SystemColors::Window;
			this->taskTextBox->Location = System::Drawing::Point(778, 0);
			this->taskTextBox->Multiline = true;
			this->taskTextBox->Name = L"taskTextBox";
			this->taskTextBox->ReadOnly = true;
			this->taskTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->taskTextBox->Size = System::Drawing::Size(761, 284);
			this->taskTextBox->TabIndex = 4;
			// 
			// vektoryAll
			// 
			this->vektoryAll->AutoSize = true;
			this->vektoryAll->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vektoryAll->Location = System::Drawing::Point(123, 70);
			this->vektoryAll->Name = L"vektoryAll";
			this->vektoryAll->Size = System::Drawing::Size(0, 22);
			this->vektoryAll->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 22);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Vektory:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 22);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Zadanie:";
			// 
			// tableTaskPanel
			// 
			this->tableTaskPanel->AutoScroll = true;
			this->tableTaskPanel->Controls->Add(this->label7);
			this->tableTaskPanel->Controls->Add(this->backgroundPanel);
			this->tableTaskPanel->Controls->Add(this->label4);
			this->tableTaskPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->tableTaskPanel->Location = System::Drawing::Point(0, 0);
			this->tableTaskPanel->Name = L"tableTaskPanel";
			this->tableTaskPanel->Size = System::Drawing::Size(761, 610);
			this->tableTaskPanel->TabIndex = 4;
			this->tableTaskPanel->Visible = false;
			// 
			// backgroundPanel
			// 
			this->backgroundPanel->BackColor = System::Drawing::Color::DodgerBlue;
			this->backgroundPanel->Controls->Add(this->ezbTable);
			this->backgroundPanel->Location = System::Drawing::Point(13, 47);
			this->backgroundPanel->Name = L"backgroundPanel";
			this->backgroundPanel->Padding = System::Windows::Forms::Padding(3);
			this->backgroundPanel->Size = System::Drawing::Size(738, 377);
			this->backgroundPanel->TabIndex = 6;
			// 
			// ezbTable
			// 
			this->ezbTable->AllowUserToAddRows = false;
			this->ezbTable->AllowUserToDeleteRows = false;
			this->ezbTable->AllowUserToResizeColumns = false;
			this->ezbTable->AllowUserToResizeRows = false;
			this->ezbTable->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ezbTable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ezbTable->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ezbTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->ezbTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ezbTable->DefaultCellStyle = dataGridViewCellStyle4;
			this->ezbTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ezbTable->EnableHeadersVisualStyles = false;
			this->ezbTable->Location = System::Drawing::Point(3, 3);
			this->ezbTable->MultiSelect = false;
			this->ezbTable->Name = L"ezbTable";
			this->ezbTable->ReadOnly = true;
			this->ezbTable->RowHeadersVisible = false;
			this->ezbTable->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->ezbTable->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->ezbTable->Size = System::Drawing::Size(732, 371);
			this->ezbTable->TabIndex = 5;
			this->ezbTable->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::ezbTable_CellDoubleClick);
			this->ezbTable->SelectionChanged += gcnew System::EventHandler(this, &MyForm::ezbTable_SelectionChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 22);
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
			this->centerPanel->Location = System::Drawing::Point(1, 376);
			this->centerPanel->Name = L"centerPanel";
			this->centerPanel->Size = System::Drawing::Size(1536, 610);
			this->centerPanel->TabIndex = 6;
			// 
			// solutionTaskPanel
			// 
			this->solutionTaskPanel->AutoScroll = true;
			this->solutionTaskPanel->Controls->Add(this->matrixSolutionPanel);
			this->solutionTaskPanel->Controls->Add(this->classicSolutionPanel);
			this->solutionTaskPanel->Controls->Add(this->label5);
			this->solutionTaskPanel->Dock = System::Windows::Forms::DockStyle::Right;
			this->solutionTaskPanel->Location = System::Drawing::Point(775, 0);
			this->solutionTaskPanel->Name = L"solutionTaskPanel";
			this->solutionTaskPanel->Size = System::Drawing::Size(761, 610);
			this->solutionTaskPanel->TabIndex = 5;
			this->solutionTaskPanel->Visible = false;
			// 
			// matrixSolutionPanel
			// 
			this->matrixSolutionPanel->AutoScroll = true;
			this->matrixSolutionPanel->Controls->Add(this->solutionMatrixPanel2);
			this->matrixSolutionPanel->Controls->Add(this->solutionMatrixPanel1);
			this->matrixSolutionPanel->Controls->Add(this->resultLabel);
			this->matrixSolutionPanel->Location = System::Drawing::Point(17, 47);
			this->matrixSolutionPanel->Name = L"matrixSolutionPanel";
			this->matrixSolutionPanel->Size = System::Drawing::Size(743, 563);
			this->matrixSolutionPanel->TabIndex = 4;
			this->matrixSolutionPanel->Visible = false;
			// 
			// solutionMatrixPanel2
			// 
			this->solutionMatrixPanel2->BackColor = System::Drawing::Color::Transparent;
			this->solutionMatrixPanel2->Controls->Add(this->solutionMatrixLabel2);
			this->solutionMatrixPanel2->Controls->Add(this->solutionMatrixRightBracket2);
			this->solutionMatrixPanel2->Controls->Add(this->solutionMatrixLeftBracket2);
			this->solutionMatrixPanel2->Controls->Add(this->solutionMatrix2);
			this->solutionMatrixPanel2->Location = System::Drawing::Point(262, 118);
			this->solutionMatrixPanel2->Name = L"solutionMatrixPanel2";
			this->solutionMatrixPanel2->Size = System::Drawing::Size(417, 183);
			this->solutionMatrixPanel2->TabIndex = 8;
			// 
			// solutionMatrixLabel2
			// 
			this->solutionMatrixLabel2->AutoSize = true;
			this->solutionMatrixLabel2->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->solutionMatrixLabel2->ForeColor = System::Drawing::SystemColors::Window;
			this->solutionMatrixLabel2->Location = System::Drawing::Point(4, 78);
			this->solutionMatrixLabel2->Name = L"solutionMatrixLabel2";
			this->solutionMatrixLabel2->Size = System::Drawing::Size(98, 22);
			this->solutionMatrixLabel2->TabIndex = 19;
			this->solutionMatrixLabel2->Text = L"matica A  =";
			// 
			// solutionMatrixRightBracket2
			// 
			this->solutionMatrixRightBracket2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"solutionMatrixRightBracket2.BackgroundImage")));
			this->solutionMatrixRightBracket2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->solutionMatrixRightBracket2->Location = System::Drawing::Point(400, 5);
			this->solutionMatrixRightBracket2->Name = L"solutionMatrixRightBracket2";
			this->solutionMatrixRightBracket2->Size = System::Drawing::Size(10, 175);
			this->solutionMatrixRightBracket2->TabIndex = 18;
			// 
			// solutionMatrixLeftBracket2
			// 
			this->solutionMatrixLeftBracket2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"solutionMatrixLeftBracket2.BackgroundImage")));
			this->solutionMatrixLeftBracket2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->solutionMatrixLeftBracket2->Location = System::Drawing::Point(103, 4);
			this->solutionMatrixLeftBracket2->Name = L"solutionMatrixLeftBracket2";
			this->solutionMatrixLeftBracket2->Size = System::Drawing::Size(10, 175);
			this->solutionMatrixLeftBracket2->TabIndex = 17;
			// 
			// solutionMatrix2
			// 
			this->solutionMatrix2->AllowUserToAddRows = false;
			this->solutionMatrix2->AllowUserToDeleteRows = false;
			this->solutionMatrix2->AllowUserToResizeColumns = false;
			this->solutionMatrix2->AllowUserToResizeRows = false;
			this->solutionMatrix2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->solutionMatrix2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->solutionMatrix2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->solutionMatrix2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->solutionMatrix2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->solutionMatrix2->ColumnHeadersVisible = false;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->solutionMatrix2->DefaultCellStyle = dataGridViewCellStyle6;
			this->solutionMatrix2->Enabled = false;
			this->solutionMatrix2->Location = System::Drawing::Point(119, 5);
			this->solutionMatrix2->MultiSelect = false;
			this->solutionMatrix2->Name = L"solutionMatrix2";
			this->solutionMatrix2->ReadOnly = true;
			this->solutionMatrix2->RowHeadersVisible = false;
			this->solutionMatrix2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->solutionMatrix2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->solutionMatrix2->Size = System::Drawing::Size(275, 175);
			this->solutionMatrix2->TabIndex = 4;
			// 
			// solutionMatrixPanel1
			// 
			this->solutionMatrixPanel1->BackColor = System::Drawing::Color::Transparent;
			this->solutionMatrixPanel1->Controls->Add(this->solutionMatrixLabel1);
			this->solutionMatrixPanel1->Controls->Add(this->solutionMatrixRightBracket1);
			this->solutionMatrixPanel1->Controls->Add(this->solutionMatrixLeftBracket1);
			this->solutionMatrixPanel1->Controls->Add(this->solutionMatrix1);
			this->solutionMatrixPanel1->Location = System::Drawing::Point(0, 201);
			this->solutionMatrixPanel1->Name = L"solutionMatrixPanel1";
			this->solutionMatrixPanel1->Size = System::Drawing::Size(430, 183);
			this->solutionMatrixPanel1->TabIndex = 7;
			// 
			// solutionMatrixLabel1
			// 
			this->solutionMatrixLabel1->AutoSize = true;
			this->solutionMatrixLabel1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->solutionMatrixLabel1->ForeColor = System::Drawing::SystemColors::Window;
			this->solutionMatrixLabel1->Location = System::Drawing::Point(4, 78);
			this->solutionMatrixLabel1->Name = L"solutionMatrixLabel1";
			this->solutionMatrixLabel1->Size = System::Drawing::Size(98, 22);
			this->solutionMatrixLabel1->TabIndex = 19;
			this->solutionMatrixLabel1->Text = L"matica A  =";
			// 
			// solutionMatrixRightBracket1
			// 
			this->solutionMatrixRightBracket1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"solutionMatrixRightBracket1.BackgroundImage")));
			this->solutionMatrixRightBracket1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->solutionMatrixRightBracket1->Location = System::Drawing::Point(412, 5);
			this->solutionMatrixRightBracket1->Name = L"solutionMatrixRightBracket1";
			this->solutionMatrixRightBracket1->Size = System::Drawing::Size(10, 175);
			this->solutionMatrixRightBracket1->TabIndex = 18;
			// 
			// solutionMatrixLeftBracket1
			// 
			this->solutionMatrixLeftBracket1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"solutionMatrixLeftBracket1.BackgroundImage")));
			this->solutionMatrixLeftBracket1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->solutionMatrixLeftBracket1->Location = System::Drawing::Point(115, 4);
			this->solutionMatrixLeftBracket1->Name = L"solutionMatrixLeftBracket1";
			this->solutionMatrixLeftBracket1->Size = System::Drawing::Size(10, 175);
			this->solutionMatrixLeftBracket1->TabIndex = 17;
			// 
			// solutionMatrix1
			// 
			this->solutionMatrix1->AllowUserToAddRows = false;
			this->solutionMatrix1->AllowUserToDeleteRows = false;
			this->solutionMatrix1->AllowUserToResizeColumns = false;
			this->solutionMatrix1->AllowUserToResizeRows = false;
			this->solutionMatrix1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->solutionMatrix1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->solutionMatrix1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->solutionMatrix1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->solutionMatrix1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->solutionMatrix1->ColumnHeadersVisible = false;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->solutionMatrix1->DefaultCellStyle = dataGridViewCellStyle8;
			this->solutionMatrix1->Enabled = false;
			this->solutionMatrix1->Location = System::Drawing::Point(131, 5);
			this->solutionMatrix1->MultiSelect = false;
			this->solutionMatrix1->Name = L"solutionMatrix1";
			this->solutionMatrix1->ReadOnly = true;
			this->solutionMatrix1->RowHeadersVisible = false;
			this->solutionMatrix1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->solutionMatrix1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->solutionMatrix1->Size = System::Drawing::Size(275, 175);
			this->solutionMatrix1->TabIndex = 4;
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Location = System::Drawing::Point(3, 3);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(57, 22);
			this->resultLabel->TabIndex = 0;
			this->resultLabel->Text = L"result";
			// 
			// classicSolutionPanel
			// 
			this->classicSolutionPanel->Controls->Add(this->stepTaskTextBox);
			this->classicSolutionPanel->Location = System::Drawing::Point(17, 47);
			this->classicSolutionPanel->Name = L"classicSolutionPanel";
			this->classicSolutionPanel->Size = System::Drawing::Size(743, 563);
			this->classicSolutionPanel->TabIndex = 3;
			// 
			// stepTaskTextBox
			// 
			this->stepTaskTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->stepTaskTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->stepTaskTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->stepTaskTextBox->ForeColor = System::Drawing::SystemColors::Window;
			this->stepTaskTextBox->Location = System::Drawing::Point(0, 0);
			this->stepTaskTextBox->Multiline = true;
			this->stepTaskTextBox->Name = L"stepTaskTextBox";
			this->stepTaskTextBox->ReadOnly = true;
			this->stepTaskTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->stepTaskTextBox->Size = System::Drawing::Size(743, 563);
			this->stepTaskTextBox->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 22);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Výsledok:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::DodgerBlue;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(13, 423);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(168, 22);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Vyber vedúci prvok";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(1538, 1006);
			this->Controls->Add(this->centerPanel);
			this->Controls->Add(this->taskPanel);
			this->Controls->Add(this->taskButtonPanel);
			this->Controls->Add(this->topPanel);
			this->Controls->Add(this->bottomPanel);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::Window;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EZB kalkulačka";
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MyForm::MyForm_SizeChanged);
			this->bottomPanel->ResumeLayout(false);
			this->bottomPanel->PerformLayout();
			this->topPanel->ResumeLayout(false);
			this->taskButtonPanel->ResumeLayout(false);
			this->taskPanel->ResumeLayout(false);
			this->taskPanel->PerformLayout();
			this->matrixPanel->ResumeLayout(false);
			this->matrixPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->taskMatrix))->EndInit();
			this->tableTaskPanel->ResumeLayout(false);
			this->tableTaskPanel->PerformLayout();
			this->backgroundPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ezbTable))->EndInit();
			this->centerPanel->ResumeLayout(false);
			this->solutionTaskPanel->ResumeLayout(false);
			this->solutionTaskPanel->PerformLayout();
			this->matrixSolutionPanel->ResumeLayout(false);
			this->matrixSolutionPanel->PerformLayout();
			this->solutionMatrixPanel2->ResumeLayout(false);
			this->solutionMatrixPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->solutionMatrix2))->EndInit();
			this->solutionMatrixPanel1->ResumeLayout(false);
			this->solutionMatrixPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->solutionMatrix1))->EndInit();
			this->classicSolutionPanel->ResumeLayout(false);
			this->classicSolutionPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		welcomeDialog^ wD = gcnew welcomeDialog();
		wD->ShowDialog();
	}
	private: System::Void taskPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	double round_up(double value, int decimal_places) {
		const double multiplier = std::pow(10.0, decimal_places);
		return std::ceil(value * multiplier) / multiplier;
	}

private: System::Void newTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->newTaskButton->Text == "\u270E Upraviť") {
		if (taskType == 0) vectorsNewTaskD->ShowDialog();
		if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) matrixNewTaskD->ShowDialog();
		if (taskType == 5) slrNewTaskD->ShowDialog();
		if (taskType == 6) lpNewTaskD->ShowDialog();
	}
	else {
		if (taskType == 0) {
			vectorsNewTaskD = gcnew vectorsNewTaskDialog();
			vectorsNewTaskD->ShowDialog();
		}
		if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) {
			matrixNewTaskD = gcnew matrixNewTaskDialog();
			if (taskType == 3 || taskType == 4) {
				matrixNewTaskD->label2->Hide();
				matrixNewTaskD->pocetStlpcov->Hide();
				matrixNewTaskD->LabelFirstAction->Text = "1. Zadaj stupeň štvorcovej matice:";
				matrixNewTaskD->pocetRiadkov->Location = System::Drawing::Point(305, 20);
				matrixNewTaskD->label3->Text = "2. Zadaj prvky matice:";
			}
			else {
				matrixNewTaskD->label2->Show();
				matrixNewTaskD->pocetStlpcov->Show();
				matrixNewTaskD->LabelFirstAction->Text = "1. Zadaj počet riadkov:";
				matrixNewTaskD->pocetRiadkov->Location = System::Drawing::Point(226, 20);
				matrixNewTaskD->label3->Text = "3. Zadaj prvky matice:";
			}
			matrixNewTaskD->ShowDialog();
		}
		if (taskType == 5) {
			slrNewTaskD = gcnew slrNewTaskDialog();
			slrNewTaskD->setVisuals();
			slrNewTaskD->ShowDialog();
		}
		if (taskType == 6) {
			lpNewTaskD = gcnew lpNewTaskDialog();
			lpNewTaskD->setVisuals();
			lpNewTaskD->ShowDialog();
		}
	}

	if ((taskType == 0 && vectorsNewTaskD->created) || ((taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) && matrixNewTaskD->created) ||
		(taskType == 5 && slrNewTaskD->created) || (taskType == 6 && lpNewTaskD->created)) {
		createNewTask();
	}
	
}
private: System::Void clearTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
	taskMatrix->Rows->Clear();
	taskMatrix->Refresh();
	ezbTable->RowCount = 0;
	ezbTable->Enabled = true;
	ezbTable->ColumnCount = 0;
	ezbTable->Refresh();
	taskPanel->Hide();
	tableTaskPanel->Hide();
	solutionTaskPanel->Hide();
	classicSolutionPanel->Hide();
	matrixSolutionPanel->Hide();
	stepTaskTextBox->Clear();
	label5->Text = "Úloha:";
	helpButton->Hide();
	vektoryAll->Text = "";
	newTaskButton->Text = "➕ Nová úloha";
	clearTaskButton->Visible = false;
	helpButton->Text = "?";
	helpButton->Visible = false;
	resetButton->Visible = false;
	taskTextBox->Text = "";

}

private: System::Void vectorsButton_Click(System::Object^ sender, System::EventArgs^ e) {

	newTaskButton->Show();

	if (clearTaskButton->Visible) {
		if (MessageBox::Show("Zmazať aktuálnu úlohu ?", "Nová úloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->lpButton->BackColor = System::Drawing::Color::DodgerBlue;
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
		this->lpButton->BackColor = System::Drawing::Color::DodgerBlue;
		taskType = 0;
	}
	
}
private: System::Void matrixRankButton_Click(System::Object^ sender, System::EventArgs^ e) {

	newTaskButton->Show();

	if (clearTaskButton->Visible) {
		if (MessageBox::Show("Zmazať aktuálnu úlohu ?", "Nová úloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixRankButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->lpButton->BackColor = System::Drawing::Color::DodgerBlue;
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
		this->lpButton->BackColor = System::Drawing::Color::DodgerBlue;
		taskType = 1;
	}
}
private: System::Void matrixDecompositionButton_Click(System::Object^ sender, System::EventArgs^ e) {
	newTaskButton->Show();
	if (clearTaskButton->Visible) {
		if (MessageBox::Show("Zmazať aktuálnu úlohu ?", "Nová úloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->lpButton->BackColor = System::Drawing::Color::DodgerBlue;
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
		this->lpButton->BackColor = System::Drawing::Color::DodgerBlue;
		taskType = 2;
	}
}
private: System::Void invertibleMatrixButton_Click(System::Object^ sender, System::EventArgs^ e) {
	newTaskButton->Show();
	if (clearTaskButton->Visible) {
		if (MessageBox::Show("Zmazať aktuálnu úlohu ?", "Nová úloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->lpButton->BackColor = System::Drawing::Color::DodgerBlue;
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
		this->lpButton->BackColor = System::Drawing::Color::DodgerBlue;
		taskType = 3;
	}

}
private: System::Void determinantButton_Click(System::Object^ sender, System::EventArgs^ e) {
	newTaskButton->Show();
	if (clearTaskButton->Visible) {
		if (MessageBox::Show("Zmazať aktuálnu úlohu ?", "Nová úloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->determinantButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->lpButton->BackColor = System::Drawing::Color::DodgerBlue;
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
		this->lpButton->BackColor = System::Drawing::Color::DodgerBlue;
		taskType = 4;
	}
}
private: System::Void slrButton_Click(System::Object^ sender, System::EventArgs^ e) {
	newTaskButton->Show();
	if (clearTaskButton->Visible) {
		if (MessageBox::Show("Zmazať aktuálnu úlohu ?", "Nová úloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;;
			this->slrButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lpButton->BackColor = System::Drawing::Color::DodgerBlue;
			taskType = 5;
		}
	}
	else {
		this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->slrButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
			static_cast<System::Int32>(static_cast<System::Byte>(25)));
		this->lpButton->BackColor = System::Drawing::Color::DodgerBlue;
		taskType = 5;
	}
}
private: System::Void lpButton_Click(System::Object^ sender, System::EventArgs^ e) {
	newTaskButton->Show();
	if (clearTaskButton->Visible) {
		if (MessageBox::Show("Zmazať aktuálnu úlohu ?", "Nová úloha", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			clearTaskButton->PerformClick();

			this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->lpButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			taskType = 6;
		}
	}
	else {
		this->vectorsButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixRankButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->matrixDecompositionButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->invertibleMatrixButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->determinantButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->slrButton->BackColor = System::Drawing::Color::DodgerBlue;
		this->lpButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
			static_cast<System::Int32>(static_cast<System::Byte>(25)));
		taskType = 6;
	}
}
private: System::Void okButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->clearTaskButton->PerformClick();
}
private: System::Void resetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	createNewTask();
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
private: void createNewTask() {
		   if (this->newTaskButton->Text == "\u270E Upraviť")
			   this->clearTaskButton->PerformClick();

		   this->newTaskButton->Text = "\u270E Upraviť";
		   this->clearTaskButton->Visible = true;
		   this->clearTaskButton->Location = System::Drawing::Point(177, 0);
		   this->helpButton->Visible = true;
		   this->taskPanel->Show();
		   this->tableTaskPanel->Show();
		   helpButton->Show();

		   if (taskType == 0) {
			   vectorsNewTaskD->created = false;
			   label3->Text = "Daný je systém vektorov:";
			   label3->Show();
			   taskTextBox->Text = "Úlohy:\r\n\r\na) Zistite, či je systém vektorov lineárne závislý alebo nezávislý.\r\n\r\nb) Vypočítajte hodnosť systému vektorov.\r\n\r\n";			   vektoryAll->Show();
			   matrixPanel->Hide();
			   
			   vt = new VectorsTask(vectorsNewTaskD->getPocetVektorov(), vectorsNewTaskD->getPocetSuradnicVektorov(), vectorsNewTaskD->getMatrix(), vectorsNewTaskD->getVB());

			   if (vt->vectorB != 0) taskTextBox->Text += "c) Zistite, či je vektor b\u20D7 lineárnou kombináciou vektorov systému a vypíšte jeho zložky.";

			   //zobraz vektory v labeli

			   String^ text = "";

			   for (int i = 0; i < vt->pocetVektorov; i++) {
				   if (i == vt->pocetVektorov - 1 && vt->vectorB == 1)
					   text += " b\u20D7 = (";
				   else
					   text += "a" + subscript((i + 1).ToString()) + "\u20D7 = (";
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
					   ezbTable->Columns[i]->Name = "b\u20D7";
				   else
					   ezbTable->Columns[i]->Name = "a" + subscript(i.ToString()) + "\u20D7";
				   ezbTable->Columns[i]->Width = 55;

			   }
			   ezbTable->Columns[vt->pocetVektorov + 1]->Name = "∑";

			   for (int i = 0; i <= vt->pocetSuradnic; i++) {
				   ezbTable->Rows->Add();
				   ezbTable->Rows[i]->Height = 35;
				   ezbTable[0, i]->Value = "e" + subscript(i.ToString()) + "\u20D7";
			   }
			   ezbTable->Rows[vt->pocetSuradnic]->Height = 2;

			   for (int i = 0; i <= vt->pocetVektorov + 1; i++) {
				   ezbTable->Columns[i]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				   for (int j = 0; j <= vt->pocetSuradnic; j++) {

					   if (j == vt->pocetSuradnic)
						   ezbTable[i, j]->Style->BackColor = System::Drawing::Color::LightSlateGray;

					   else
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
			   label3->Hide();

			   if (taskType == 1) taskTextBox->Text = "Úlohy:\r\n\r\na) Vypočítajte hodnosť matice A.\r\n\r\n";
			   if (taskType == 2) taskTextBox->Text = "Úlohy:\r\n\r\na) Zistite, či je možné určiť základný bázický rozklad matice A.\r\n\r\nb) Určte základný bázický rozklad matice A.";
			   if (taskType == 3) taskTextBox->Text = "Úlohy:\r\n\r\na) Zistite, či je štvorcová matica A regulárna alebo singulárna.\r\n\r\nb) Určte inverznú maticu k matici A";
			   if (taskType == 4) taskTextBox->Text = "Úlohy:\r\n\r\na) Zistite, či sa dá pre maticu A vypočítať determinant.\r\n\r\nb) Vypočítajte determinant štvorcovej matice A";

			   vektoryAll->Hide();
			   matrixPanel->Show();

			   mt = new MatrixTask(matrixNewTaskD->getPocetRiadkov(), matrixNewTaskD->getPocetStlpcov(), matrixNewTaskD->getMatrix(), taskType);

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
					   taskMatrix[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
						   static_cast<System::Int32>(static_cast<System::Byte>(25)));
					   taskMatrix[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
				   }
			   }
			   taskMatrix->ClearSelection();

			   if (mt->pocetStlpcov == 5) {
				   this->panel2->Location = System::Drawing::Point(430, 4);
				   this->matrixPanel->Width = 450;
			   }
			   if (mt->pocetStlpcov == 4) {
				   this->panel2->Location = System::Drawing::Point(375, 4);
				   this->matrixPanel->Width = 395;
			   }
			   if (mt->pocetStlpcov == 3) {
				   this->panel2->Location = System::Drawing::Point(320, 4);
				   this->matrixPanel->Width = 340;
			   }
			   if (mt->pocetStlpcov == 2) {
				   this->panel2->Location = System::Drawing::Point(265, 4);
				   this->matrixPanel->Width = 285;
			   }

			   if (mt->pocetRiadkov == 5) {
				   this->panel2->Height = 175;
				   this->panel3->Height = 175;
				   this->label6->Location = System::Drawing::Point(2, 78);
			   }
			   if (mt->pocetRiadkov == 4) {
				   this->panel2->Height = 140;
				   this->panel3->Height = 140;
				   this->label6->Location = System::Drawing::Point(2, 60);
			   }
			   if (mt->pocetRiadkov == 3) {
				   this->panel2->Height = 105;
				   this->panel3->Height = 105;
				   this->label6->Location = System::Drawing::Point(2, 42);
			   }
			   if (mt->pocetRiadkov == 2) {
				   this->panel2->Height = 70;
				   this->panel3->Height = 70;
				   this->label6->Location = System::Drawing::Point(2, 24);
			   }


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
					if(taskType == 3 && i > PS - mt->pocetStlpcov)
						ezbTable->Columns[i]->Name = "e" + subscript(System::Convert::ToString(i - mt->pocetStlpcov)) + "\u20D7";
					else
						ezbTable->Columns[i]->Name = "s" + subscript(System::Convert::ToString(i)) +"\u20D7";
				   ezbTable->Columns[i]->Width = 55;

			   }
			   ezbTable->Columns[PS + 1]->Name = "∑";

			   for (int i = 0; i <= mt->pocetRiadkov; i++) {
				   ezbTable->Rows->Add();
				   ezbTable->Rows[i]->Height = 35;
				   ezbTable[0, i]->Value = "e" + subscript(System::Convert::ToString(i + 1)) + "\u20D7";
			   }
			   ezbTable->Rows[mt->pocetRiadkov]->Height = 2;

			   for (int i = 0; i <= PS + 1; i++) {
				   ezbTable->Columns[i]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				   for (int j = 0; j <= mt->pocetRiadkov; j++) {

					   if (j == mt->pocetRiadkov)
						   ezbTable[i, j]->Style->BackColor = System::Drawing::Color::LightSlateGray;

					   else
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
			   label3->Text = "Daný je systém lineárnych rovníc A:";
			   label3->Show();
			   taskTextBox->Text = "Úlohy:\r\n\r\na) Zistite, či systém lineárnych rovníc má riešenie.\r\n\r\nb) Určte všeobecné riešenie, resp. množinu riešení, a zapíšte ho v parametrickom tvare.";
			   vektoryAll->Show();
			   matrixPanel->Hide();

			   st = new SLRTask(slrNewTaskD->getPocetRovnic(), slrNewTaskD->getPocetZloziekRovnic(), slrNewTaskD->getMatrix(), slrNewTaskD->getZeros());

			   //zobraz rovnice v labeli

			   String^ text = "";

			   for (int i = 0; i < st->pocetRovnic; i++) {
				   for (int j = 0; j < st->pocetZloziek; j++) {
					   text += st->matrix[i][j] + "x" + subscript(System::Convert::ToString(j + 1));
					   if (j < st->pocetZloziek - 1 && st->matrix[i][j + 1] >= 0) text += "+ ";
					   if (j == st->pocetZloziek - 1) text += " = " + st->matrix[i][st->pocetZloziek];
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
					   ezbTable->Columns[i]->Name = "b\u20D7";
				   else
					   ezbTable->Columns[i]->Name = "x" + subscript(System::Convert::ToString(i));
				   ezbTable->Columns[i]->Width = 55;

			   }
			   ezbTable->Columns[st->pocetZloziek + st->zeros + 1]->Name = "∑";

			   for (int i = 0; i <= st->pocetRovnic; i++) {
				   ezbTable->Rows->Add();
				   ezbTable->Rows[i]->Height = 35;
				   ezbTable[0, i]->Value = "e" + subscript(System::Convert::ToString(i + 1)) + "\u20D7";
			   }
			   ezbTable->Rows[st->pocetRovnic]->Height = 2;

			   for (int i = 0; i <= st->pocetZloziek + st->zeros + 1; i++) {
				   ezbTable->Columns[i]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				   for (int j = 0; j <= st->pocetRovnic; j++) {

					   if (j == st->pocetRovnic)
						   ezbTable[i, j]->Style->BackColor = System::Drawing::Color::LightSlateGray;

					   else
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

		   if (taskType == 6) {
			   lpNewTaskD->created = false;
			   label3->Show();
			   label3->Text = "Účelová funkcia: " + lpNewTaskD->getUF() + "\r\nOhraničenia:";
			   taskTextBox->Text = "Úlohy:\r\n\r\na) Zapíšte ohraničujúce podmienky vo forme rovnosti.\r\n\r\nb) Určte optimálne riešenie, ak existuje.\r\n\r\n";
			   matrixPanel->Hide();
			   vektoryAll->Show();

			   lpt = new LPTask(lpNewTaskD->getpocetOhraniceni(), lpNewTaskD->getpocetPremennych(), lpNewTaskD->getMatrix(), 0);

			   //zobraz ohranicenia a uf v labeli

			   String^ text = "";
			   String^ doplnkove = "\r\nDoplňujúce podmienky: ";

			   for (int i = 0; i < lpt->pocetOhraniceni; i++) {
				   for (int j = 0; j < lpt->pocetPremennych; j++) {
					   text += lpt->matrix[i][j] + "x" + subscript(System::Convert::ToString(j + 1));
					   if (i == 0) doplnkove += "x" + subscript(System::Convert::ToString(j + 1));
					   if (j < lpt->pocetPremennych - 1) {
						   if (i == 0) doplnkove += ", ";
						   text += "+ ";
					   }
					   if (j == lpt->pocetPremennych-1) text += " ≤ " + lpt->matrix[i][lpt->pocetPremennych];
				   }
				   text += "\r\n";
			   }
			   doplnkove += " ≥ 0";
			   vektoryAll->Location = System::Drawing::Point(123, 74);
			   vektoryAll->Text = text + doplnkove;

			   //zapis do riesenia rozsirene ohranicujuce podmienky ako rovnost

			   text = "";
			   doplnkove = "\r\nDoplňujúce podmienky: ";

			   for (int i = 0; i < lpt->pocetOhraniceni; i++) {
				   for (int j = 0; j < lpt->pocetPremennych + lpt->pocetOhraniceni; j++) {
					   if (j < lpt->pocetPremennych) {
						   if (i == 0) doplnkove += "x" + subscript(System::Convert::ToString(j + 1));
						   text += lpt->matrix[i][j] + "x" + subscript(System::Convert::ToString(j + 1));
					   }
					   else{
						   if (i == j - lpt->pocetPremennych) text += " s" + subscript(System::Convert::ToString(j - lpt->pocetPremennych + 1));
						   if (i == 0) doplnkove += "s" + subscript(System::Convert::ToString(j - lpt->pocetPremennych + 1));
					   }

					  
					   if (j < lpt->pocetPremennych + lpt->pocetOhraniceni - 1) {
						   if (i == 0) doplnkove += ", ";
						   if (j < lpt->pocetPremennych) text += "+ ";

					   }
					   if (j == lpt->pocetPremennych + lpt->pocetOhraniceni - 1) text += " = " + lpt->matrix[i][lpt->pocetPremennych];
				   }
				   text += "\r\n";
			   }
			   doplnkove += " ≥ 0";

			   solutionTaskPanel->Show();
			   classicSolutionPanel->Show();
			   matrixSolutionPanel->Hide();
			   stepTaskTextBox->Text = "a)\r\n" + text + doplnkove;

			   //vytvor bazicku maticu

			   double** bazickaMatica = 0;
			   bazickaMatica = new double* [lpt->pocetOhraniceni];
			   for (int h = 0; h < lpt->pocetOhraniceni; h++)
			   {
				   bazickaMatica[h] = new double[lpt->pocetPremennych + lpt->pocetOhraniceni + 1];
			   }

			   ezbTable->ColumnCount = lpt->pocetPremennych + lpt->pocetOhraniceni + 2;
			   ezbTable->Columns[0]->Name = "Báza";
			   for (int i = 1; i <= lpt->pocetPremennych + lpt->pocetOhraniceni + 1; i++) {
				   if (i == lpt->pocetPremennych + lpt->pocetOhraniceni + 1) ezbTable->Columns[i]->Name = "b\u20D7";
				   else if(i <= lpt->pocetPremennych) ezbTable->Columns[i]->Name = "x" + subscript(System::Convert::ToString(i));
						else ezbTable->Columns[i]->Name = "s" + subscript(System::Convert::ToString(i-lpt->pocetPremennych));
				   if (i < lpt->pocetPremennych + lpt->pocetOhraniceni + 1) ezbTable->Columns[i]->Width = 55;

			   }

			   for (int i = 0; i <= lpt->pocetOhraniceni; i++) {
				   ezbTable->Rows->Add();
				   ezbTable->Rows[i]->Height = 35;
				   ezbTable[0, i]->Value = "s" + subscript(System::Convert::ToString(i + 1)) + "\u20D7";
			   }
			   ezbTable[0, lpt->pocetOhraniceni]->Value = "cⱼ - zⱼ";

			   for (int i = 0; i <= lpt->pocetPremennych + lpt->pocetOhraniceni + 1; i++) {
				   ezbTable->Columns[i]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				   for (int j = 0; j <= lpt->pocetOhraniceni; j++) {

					   if(j == lpt->pocetOhraniceni) 
						   ezbTable[i, j]->Style->BackColor = System::Drawing::Color::LightSlateGray;

					   else
						   ezbTable[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
							   static_cast<System::Int32>(static_cast<System::Byte>(45)));
						ezbTable[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
				   }
			   }
			   //napln simplexovu tabulku

			   for (int j = 0; j <= lpt->pocetOhraniceni; j++) {
				   for (int i = 0; i <= lpt->pocetPremennych + lpt->pocetOhraniceni; i++) {
					   if (j == lpt->pocetOhraniceni)
						   ezbTable[i + 1, j]->Value = lpNewTaskD->getValueOnIndex(i + 1);
					   else {
						   if (i < lpt->pocetPremennych) {
							   ezbTable[i + 1, j]->Value = round_up(lpt->matrix[j][i], 2);
							   bazickaMatica[j][i] = lpt->matrix[j][i];
						   }
						   else {
							   if (i - lpt->pocetPremennych == j) {
								   ezbTable[i + 1, j]->Value = "1";
								   bazickaMatica[j][i] = 1;
							   }
							   else {
								   ezbTable[i + 1, j]->Value = "0";
								   bazickaMatica[j][i] = 0;
							   }
						   }
					   }
					   if (i == lpt->pocetPremennych + lpt->pocetOhraniceni && j != lpt->pocetOhraniceni) {
						   ezbTable[i + 1, j]->Value = round_up(lpt->matrix[j][lpt->pocetPremennych], 2);
						   bazickaMatica[j][i] = lpt->matrix[j][lpt->pocetPremennych];
					   }
				   
				   }
			   }

			   ezb = new EZB(bazickaMatica, lpt->pocetPremennych + lpt->pocetOhraniceni + 1, lpt->pocetOhraniceni);

			   ezb->fillWithOnes(lpt->pocetPremennych, lpt->pocetOhraniceni);
			   checkMatrix(bazickaMatica);


		   }

		   backgroundPanel->Width = 206 + ((ezbTable->ColumnCount - 2) * 55);
		   backgroundPanel->Height = 30;

		   for (int i = 0; i < ezbTable->RowCount; i++) {
			   backgroundPanel->Height += ezbTable->Rows[i]->Height;
		   }
	   }

private: void checkMatrix(double** m) {
	ezbTable->ClearSelection();

		int check = 3;
		Boolean optimalne = false;
		Boolean nepripustne = false;
		Boolean neohranicena = false;
		if (taskType == 0) check = ezb->checkMatrix(vt->vectorB);
		if (taskType == 1 || taskType == 2 || taskType == 4) check = ezb->checkMatrix(0);
		if (taskType == 3) check = ezb->checkMatrix(mt->pocetStlpcov);
		if (taskType == 5) check = ezb->checkMatrix(st->zeros);

		if (taskType == 6) { //podmienka neohranicenosti

			int rowIndex = 0;
			if (ezb != NULL) rowIndex = (ezb->iteration * (lpt->pocetOhraniceni + 1));;
			int columnIndex = 1;

			double maxValue = 0;
			for (int i = 1; i <= lpt->pocetPremennych + lpt->pocetOhraniceni; i++) {
				if (lpNewTaskD->getMaxMin()) {
					if (System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value) > maxValue) {
						maxValue = System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value);
						columnIndex = i;
					}
				}
				else {
					if (System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value) < maxValue) {
						maxValue = System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value);
						columnIndex = i;
					}
				}
			}

			maxValue = 99999999;
			for (int i = 0; i < lpt->pocetOhraniceni; i++) {
				if (System::Convert::ToDouble(ezbTable[ezbTable->ColumnCount - 1, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value) / System::Convert::ToDouble(ezbTable[columnIndex, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value) < maxValue &&
					System::Convert::ToDouble(ezbTable[columnIndex, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value) > 0) {
					maxValue = System::Convert::ToDouble(ezbTable[ezbTable->ColumnCount - 1, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value) / System::Convert::ToDouble(ezbTable[columnIndex, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value);
					rowIndex = i + ezbTable->RowCount - lpt->pocetOhraniceni - 1;
				}
				
			}

			if (maxValue == 99999999) {
				neohranicena = true;
			}
		}

		//podmienka primarnej pripustnosti
		if (taskType == 6) {
			for (int i = 0; i < lpt->pocetOhraniceni; i++)
				if (m[i][lpt->pocetOhraniceni + lpt->pocetPremennych] < 0)
					nepripustne = true;
		}

		//prever optimalne riesenie - riadok cj-zj
		if (taskType == 6) {
			optimalne = true;

			if (lpNewTaskD->getMaxMin()) {
				for (int i = 1; i <= lpt->pocetPremennych + lpt->pocetOhraniceni; i++) {
					if (System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value) > 0)
						optimalne = false;
				}
			}
			else {
				for (int i = 1; i <= lpt->pocetPremennych + lpt->pocetOhraniceni; i++) {
					if (System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value) < 0)
						optimalne = false;
				}
			}

		}

		if (check < 2 || optimalne || nepripustne || neohranicena) { //nulovy riadok alebo koniec ezb

			label7->Hide();
			backgroundPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));;

			this->solutionTaskPanel->Show();
			if (taskType == 2 || taskType == 3) {
				this->matrixSolutionPanel->Show();
				this->classicSolutionPanel->Hide();
			}
			else {
				this->classicSolutionPanel->Show();
				this->matrixSolutionPanel->Hide();

			}
			ezbTable->Enabled = false;
			label5->Text = "Výsledok:";

			String^ field = "";

			if (taskType == 0) {

				for (int i = 0; i < vt->pocetSuradnic; i++) {
					field += ezbTable[0, ezbTable->RowCount - vt->pocetSuradnic + i - 1]->Value->ToString() + "/";
				}

				stepTaskTextBox->Text = vt->getResult(m, check, ezb->pocetZaclenenychVektorov, field, ezbTable->RowCount);
			}
			if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) {

				for (int i = 0; i < mt->pocetRiadkov; i++) {
					field += ezbTable[0, ezbTable->RowCount - mt->pocetRiadkov + i - 1]->Value->ToString() + "/";
				}

				stepTaskTextBox->Text = mt->getResult(m, check, ezb->pocetZaclenenychVektorov, ezb->pocetBazickychVektorov, field, ezbTable->RowCount, ezb->pivots);

				//tu sa bude uloha vetvit na classic a matrix

				if (taskType == 2) {
					resultLabel->Text = stepTaskTextBox->Text;

					if (mt->existB) {
						solutionMatrixPanel1->Show();
						solutionMatrixLabel1->Text = "matica B = ";

						solutionMatrix1->ColumnCount = mt->pocetZaclenenych;

						for (int i = 0; i < mt->pocetRiadkov; i++) {
							solutionMatrix1->Rows->Add();
							solutionMatrix1->Rows[i]->Height = 35;
						}

						for (int i = 0; i < mt->pocetZaclenenych; i++) {
							solutionMatrix1->Columns[i]->Width = 55;
							for (int j = 0; j < mt->pocetRiadkov; j++) {
								solutionMatrix1[i, j]->Value = (mt->matrixB[j][i]);
								solutionMatrix1[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
									static_cast<System::Int32>(static_cast<System::Byte>(25)));
								solutionMatrix1[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
							}
						}
						solutionMatrix1->Width = 55 * mt->pocetZaclenenych;
						solutionMatrix1->Height = 35 * mt->pocetRiadkov;
						solutionMatrix1->ClearSelection();

						//nastav zatvorky

						if (mt->pocetZaclenenych == 5) {
							this->solutionMatrixRightBracket1->Location = System::Drawing::Point(412, 4);
							this->solutionMatrixPanel1->Width = 450;
						}
						if (mt->pocetZaclenenych == 4) {
							this->solutionMatrixRightBracket1->Location = System::Drawing::Point(357, 4);
							this->solutionMatrixPanel1->Width = 395;
						}
						if (mt->pocetZaclenenych == 3) {
							this->solutionMatrixRightBracket1->Location = System::Drawing::Point(302, 4);
							this->solutionMatrixPanel1->Width = 340;
						}
						if (mt->pocetZaclenenych == 2) {
							this->solutionMatrixRightBracket1->Location = System::Drawing::Point(247, 4);
							this->solutionMatrixPanel1->Width = 285;
						}
						if (mt->pocetZaclenenych == 1) {
							this->solutionMatrixRightBracket1->Location = System::Drawing::Point(192, 4);
							this->solutionMatrixPanel1->Width = 230;
						}

						if (mt->pocetRiadkov == 5) {
							this->solutionMatrixRightBracket1->Height = 175;
							this->solutionMatrixLeftBracket1->Height = 175;
							this->solutionMatrixLabel1->Location = System::Drawing::Point(2, 78);
						}
						if (mt->pocetRiadkov == 4) {
							this->solutionMatrixRightBracket1->Height = 140;
							this->solutionMatrixLeftBracket1->Height = 140;
							this->solutionMatrixLabel1->Location = System::Drawing::Point(2, 60);
						}
						if (mt->pocetRiadkov == 3) {
							this->solutionMatrixRightBracket1->Height = 105;
							this->solutionMatrixLeftBracket1->Height = 105;
							this->solutionMatrixLabel1->Location = System::Drawing::Point(2, 42);
						}
						if (mt->pocetRiadkov == 2) {
							this->solutionMatrixRightBracket1->Height = 70;
							this->solutionMatrixLeftBracket1->Height = 70;
							this->solutionMatrixLabel1->Location = System::Drawing::Point(2, 24);
						}

						if (mt->existD) {
							solutionMatrixPanel2->Show();
							solutionMatrixPanel2->Location = System::Drawing::Point(0, 210 + solutionMatrixPanel1->Height);

							solutionMatrixLabel2->Text = "matica D = ";

							solutionMatrix2->ColumnCount = mt->pocetStlpcov - mt->pocetZaclenenych;

							for (int i = 0; i < mt->pocetZaclenenych; i++) {
								solutionMatrix2->Rows->Add();
								solutionMatrix2->Rows[i]->Height = 35;
							}

							for (int i = 0; i < mt->pocetStlpcov - mt->pocetZaclenenych; i++) {
								solutionMatrix2->Columns[i]->Width = 55;
								for (int j = 0; j < mt->pocetZaclenenych; j++) {
									solutionMatrix2[i, j]->Value = (mt->matrixD[j][i]);
									solutionMatrix2[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
										static_cast<System::Int32>(static_cast<System::Byte>(25)));
									solutionMatrix2[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
								}
							}
							solutionMatrix2->Width = 55 * (mt->pocetStlpcov - mt->pocetZaclenenych);
							solutionMatrix2->Height = 35 * mt->pocetZaclenenych;


							//nastav zatvorky

							if (mt->pocetStlpcov - mt->pocetZaclenenych == 5) {
								this->solutionMatrixRightBracket2->Location = System::Drawing::Point(400, 4);
								this->solutionMatrixPanel2->Width = 450;
							}
							if (mt->pocetStlpcov - mt->pocetZaclenenych == 4) {
								this->solutionMatrixRightBracket2->Location = System::Drawing::Point(345, 4);
								this->solutionMatrixPanel2->Width = 395;
							}
							if (mt->pocetStlpcov - mt->pocetZaclenenych == 3) {
								this->solutionMatrixRightBracket2->Location = System::Drawing::Point(290, 4);
								this->solutionMatrixPanel2->Width = 340;
							}
							if (mt->pocetStlpcov - mt->pocetZaclenenych == 2) {
								this->solutionMatrixRightBracket2->Location = System::Drawing::Point(235, 4);
								this->solutionMatrixPanel2->Width = 285;
							}
							if (mt->pocetStlpcov - mt->pocetZaclenenych == 1) {
								this->solutionMatrixRightBracket2->Location = System::Drawing::Point(180, 4);
								this->solutionMatrixPanel2->Width = 230;
							}

							if (mt->pocetZaclenenych == 5) {
								this->solutionMatrixRightBracket2->Height = 175;
								this->solutionMatrixLeftBracket2->Height = 175;
								this->solutionMatrixLabel2->Location = System::Drawing::Point(2, 78);
							}
							if (mt->pocetZaclenenych == 4) {
								this->solutionMatrixRightBracket2->Height = 140;
								this->solutionMatrixLeftBracket2->Height = 140;
								this->solutionMatrixLabel2->Location = System::Drawing::Point(2, 60);
							}
							if (mt->pocetZaclenenych == 3) {
								this->solutionMatrixRightBracket2->Height = 105;
								this->solutionMatrixLeftBracket2->Height = 105;
								this->solutionMatrixLabel2->Location = System::Drawing::Point(2, 42);
							}
							if (mt->pocetZaclenenych == 2) {
								this->solutionMatrixRightBracket2->Height = 70;
								this->solutionMatrixLeftBracket2->Height = 70;
								this->solutionMatrixLabel2->Location = System::Drawing::Point(2, 24);
							}

						}
						else {
							solutionMatrixPanel2->Hide();
							solutionMatrixLabel1->Text = "matica A = ";
						}

					}
					else {
						solutionMatrixPanel1->Hide();
						solutionMatrixPanel2->Hide();
					}



				}

				if (taskType == 3) {
					resultLabel->Text = stepTaskTextBox->Text;

					if (mt->existB) {
						solutionMatrixPanel1->Show();
						solutionMatrixPanel2->Hide();
						solutionMatrixLabel1->Text = "matica A\u207B¹ =";

						solutionMatrix1->ColumnCount = mt->pocetStlpcov;

						for (int i = 0; i < mt->pocetRiadkov; i++) {
							solutionMatrix1->Rows->Add();
							solutionMatrix1->Rows[i]->Height = 35;
						}

						for (int i = 0; i < mt->pocetStlpcov; i++) {
							solutionMatrix1->Columns[i]->Width = 55;
							for (int j = 0; j < mt->pocetRiadkov; j++) {
								solutionMatrix1[i, j]->Value = (mt->matrixB[j][i]);
								solutionMatrix1[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
									static_cast<System::Int32>(static_cast<System::Byte>(25)));
								solutionMatrix1[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
							}
						}
						solutionMatrix1->Width = 55 * mt->pocetZaclenenych;
						solutionMatrix1->Height = 35 * mt->pocetRiadkov;
						solutionMatrix1->ClearSelection();

						//nastav zatvorky

						if (mt->pocetZaclenenych == 5) {
							this->solutionMatrixRightBracket1->Location = System::Drawing::Point(412, 4);
							this->solutionMatrixPanel1->Width = 450;
						}
						if (mt->pocetZaclenenych == 4) {
							this->solutionMatrixRightBracket1->Location = System::Drawing::Point(357, 4);
							this->solutionMatrixPanel1->Width = 395;
						}
						if (mt->pocetZaclenenych == 3) {
							this->solutionMatrixRightBracket1->Location = System::Drawing::Point(302, 4);
							this->solutionMatrixPanel1->Width = 340;
						}
						if (mt->pocetZaclenenych == 2) {
							this->solutionMatrixRightBracket1->Location = System::Drawing::Point(247, 4);
							this->solutionMatrixPanel1->Width = 285;
						}
						if (mt->pocetZaclenenych == 1) {
							this->solutionMatrixRightBracket1->Location = System::Drawing::Point(192, 4);
							this->solutionMatrixPanel1->Width = 230;
						}

						if (mt->pocetRiadkov == 5) {
							this->solutionMatrixRightBracket1->Height = 175;
							this->solutionMatrixLeftBracket1->Height = 175;
							this->solutionMatrixLabel1->Location = System::Drawing::Point(2, 78);
						}
						if (mt->pocetRiadkov == 4) {
							this->solutionMatrixRightBracket1->Height = 140;
							this->solutionMatrixLeftBracket1->Height = 140;
							this->solutionMatrixLabel1->Location = System::Drawing::Point(2, 60);
						}
						if (mt->pocetRiadkov == 3) {
							this->solutionMatrixRightBracket1->Height = 105;
							this->solutionMatrixLeftBracket1->Height = 105;
							this->solutionMatrixLabel1->Location = System::Drawing::Point(2, 42);
						}
						if (mt->pocetRiadkov == 2) {
							this->solutionMatrixRightBracket1->Height = 70;
							this->solutionMatrixLeftBracket1->Height = 70;
							this->solutionMatrixLabel1->Location = System::Drawing::Point(2, 24);
						}

					}
					else {
						solutionMatrixPanel1->Hide();
						solutionMatrixPanel2->Hide();
					}



				}

			}
			if (taskType == 5) {
				for (int i = 0; i < st->pocetRovnic; i++) {
					field += ezbTable[0, ezbTable->RowCount - st->pocetRovnic + i - 1]->Value->ToString() + "/";
				}

				stepTaskTextBox->Text = st->getResult(m, check, ezb->pocetZaclenenychVektorov, ezb->pocetBazickychVektorov, field, ezbTable->RowCount);
			}
			if (taskType == 6) {

				double values[10];
				for (int i = 0; i < lpt->pocetOhraniceni + lpt->pocetPremennych; i++) {
					values[i] = lpNewTaskD->getValueOnIndex(i + 1);
				}

				stepTaskTextBox->Text += lpt->getResult(m, check, ezb->pocetZaclenenychVektorov, ezb->indexyZaclenenychVektorov, values, lpNewTaskD->getMaxMin(), System::Convert::ToDouble(ezbTable[lpt->pocetPremennych + lpt->pocetOhraniceni + 1, ezbTable->RowCount - 1]->Value), optimalne, nepripustne, neohranicena);
			}

		}
		else {
			label7->Show();
			backgroundPanel->BackColor = System::Drawing::Color::DodgerBlue;
			backgroundPanel->Width = 206 + ((ezbTable->ColumnCount - 2) * 55);
			backgroundPanel->Height = 30;

			for (int i = 0; i < ezbTable->RowCount; i++) {
				backgroundPanel->Height += ezbTable->Rows[i]->Height;
			}
			label7->Location = System::Drawing::Point(13, backgroundPanel->Height + 47);
		}
}

private: System::Void helpButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (helpButton->Text == "?") {
		helpButton->Text = "? ";

		if(taskType == 0) taskTextBox->Text = "Úlohy:\r\n\r\nVhodnou voľbou vedúcich prvkov (dvojklikom v tabuľke) postupne uskutočnite elementárnu zmenu bázy.\r\n\r\n" +
			"Vhodný vedúci prvok je 1 alebo číslo, ktoré delí celý riadok bezo zvyšku.\r\n\r\n" +
			"Vektor b\u20D7 nezačleňujte do bázy!\r\n\r\n" +
			"Z poslednej časti tabuľky zistite, či je systém vektorov lineárne závislý alebo nezávislý, hodnosť systému vektorov a či je vektor b\u20D7 lineárnou kombináciou vektorov systému.";

		if (taskType == 1) taskTextBox->Text = "Úlohy:\r\n\r\nMetódou elementárnej zmeny bázy určte hodnosť matice. \r\n\r\nMaticu uvažujeme ako systém stĺpcových vektorov.\r\n\r\n" +
				"Výberom vedúceho prvku (dvojklikom v tabuľke) postupne uskutočnite maximálny počet EZB na určenie hodnosti matice.\r\n\r\n"+
			"Vhodný vedúci prvok je 1 alebo číslo, ktoré delí celý riadok bezo zvyšku.\r\n\r\n";

		if (taskType == 2) taskTextBox->Text = "Úlohy:\r\n\r\nMetódou elementárnej zmeny bázy určte základný bázický rozklad matice.\r\n\r\n" +
			"Vhodnou voľbou vedúcich prvkov (dvojklikom v tabuľke) v prirodzenom poradí postupne uskutočnite elementárnu zmenu bázy.\r\n\r\n"+
			"Vhodný vedúci prvok je 1 alebo číslo, ktoré delí celý riadok bezo zvyšku.\r\n\r\n";

		if (taskType == 3) taskTextBox->Text = "Úlohy:\r\n\r\nMetódou elementárnej zmeny bázy určte inverznú maticu k matici A.\r\n\r\n" +
			"V druhej časti tabuľky je zapísaná jednotková matica E, kedže podľa definície A \u2219 A\u207B¹ = E."+
			"Vhodnou voľbou vedúcich prvkov (dvojklikom v tabuľke) postupne uskutočnite elementárnu zmenu bázy.\r\n\r\n"+
			"Vhodný vedúci prvok je 1 alebo číslo, ktoré delí celý riadok bezo zvyšku.\r\n\r\n";

		if(taskType == 4) taskTextBox->Text = "Úlohy:\r\n\r\nMetódou elementárnej zmeny bázy vypočítajte determinant matice.\r\n\r\n" +
			"Vhodnou voľbou vedúcich prvkov (dvojklikom v tabuľke) postupne uskutočnite elementárnu zmenu bázy.\r\n\r\n" +
			"Z poslednej časti tabuľky zistite, či je matica regulárna a v prípade, že áno, vypočítajte determinant ako súčin vedúcich prvkov a čísla (-1)ˡ.\r\n\r\n"+
			"Vhodný vedúci prvok je 1 alebo číslo, ktoré delí celý riadok bezo zvyšku.\r\n\r\n";

		if (taskType == 5) taskTextBox->Text = "Úlohy:\r\n\r\nMetódou elementárnej zmeny bázy určte riešenie systému lineárnych rovníc ak takéto riešenie existuje.\r\n\r\n" +
				"Výberom vedúceho prvku (dvojklikom v tabuľke) postupne uskutočnite elementárne zmeny bázy a z poslednej časti tabuľky rozhodnite o riešiteľnosti systému lineárnych rovníc.\r\n\r\n"+
				"Vhodný vedúci prvok je 1 alebo číslo, ktoré delí celý riadok bezo zvyšku.\r\n\r\n";

		if (taskType == 6)  taskTextBox->Text = "Úlohy:\r\n\r\n Simplexovým algoritmom vypočítajte optimálne riešenie úlohy lineárneho programovania a hodnotu extremalizačnej funkcie.\r\n\r\n" +
			"Výberom vedúceho prvku(dvojklikom v tabuľke) postupne uskutočnite elementárne zmeny bázy a rozhodnite o riešiteľnosti úlohy lineárneho programovania.\r\n\r\n" +
			"Vedúci prvok je, v tomto prípade, iba jeden možný prvok z tabuľky !\r\n\r\n";

	}

	else {
		helpButton->Text = "?";

		if (taskType == 0) {
			taskTextBox->Text = "Úlohy:\r\n\r\na) Zistite, či je systém vektorov lineárne závislý alebo nezávislý.\r\n\r\nb) Vypočítajte hodnosť systému vektorov.\r\n\r\n";
			if(vt!=NULL && vt->vectorB != 0 ) taskTextBox->Text += "c) Zistite, či je vektor b\u20D7 lineárnou kombináciou vektorov systému a vypíšte jeho zložky.";
		}

		if (taskType == 1) {
			taskTextBox->Text = "Úlohy:\r\n\r\na) Vypočítajte hodnosť matice A.\r\n\r\n";
		}

		if (taskType == 2) {
			taskTextBox->Text = "Úlohy:\r\n\r\na) Zistite, či je možné určiť základný bázický rozklad matice A.\r\n\r\nb) Určte základný bázický rozklad matice A.";
		}

		if (taskType == 3) {
			taskTextBox->Text = "Úlohy:\r\n\r\na) Zistite, či je štvorcová matica A regulárna alebo singulárna.\r\n\r\nb) Určte inverznú maticu k matici A";
		}

		if (taskType == 4) {
			taskTextBox->Text = "Úlohy:\r\n\r\na) Zistite, či sa dá pre maticu A vypočítať determinant.\r\n\r\nb) Vypočítajte determinant štvorcovej matice A";
		}

		if (taskType == 5)taskTextBox->Text = "Úlohy:\r\n\r\na) Zistite, či systém lineárnych rovníc má riešenie.\r\n\r\nb) Určte všeobecné riešenie, resp. množinu riešení, a zapíšte ho v parametrickom tvare.";

		if (taskType == 6) taskTextBox->Text = "Úlohy:\r\n\r\na) Zapíšte ohraničujúce podmienky vo forme rovnosti.\r\n\r\nb) Určte optimálne riešenie, ak existuje.\r\n\r\n";
	}
		
}
private: System::Void ezbTable_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int hlbka = 0;
	int rowIndex = (ezb->iteration * (hlbka + 1));;
	int columnIndex = 1;

	if (taskType == 0) hlbka = vt->pocetSuradnic;
	if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) hlbka = mt->pocetRiadkov;
	if (taskType == 5) hlbka = st->pocetRovnic;
	if (taskType == 6) {
		hlbka = lpt->pocetOhraniceni;

		//povol kliknut len na jednu bunku pri ezb!
		double maxValue = 0;
		for (int i = 1; i <= lpt->pocetPremennych + lpt->pocetOhraniceni; i++) {
			if (lpNewTaskD->getMaxMin()) {
				if (System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value) > maxValue) {
					maxValue = System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value);
					columnIndex = i;
				}
			}
			else {
				if (System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value) < maxValue) {
					maxValue = System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value);
					columnIndex = i;
				}
			}
		}

		maxValue = 99999999;
		for (int i = 0; i < lpt->pocetOhraniceni; i++) {
			if (System::Convert::ToDouble(ezbTable[ezbTable->ColumnCount - 1, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value) / System::Convert::ToDouble(ezbTable[columnIndex, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value) < maxValue &&
				System::Convert::ToDouble(ezbTable[columnIndex, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value) > 0) {
				maxValue = System::Convert::ToDouble(ezbTable[ezbTable->ColumnCount - 1, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value) / System::Convert::ToDouble(ezbTable[columnIndex, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value);
				rowIndex = i + ezbTable->RowCount - lpt->pocetOhraniceni - 1;
			}

		}

	}
	Boolean ignore = true;

	if (taskType == 6 && ezbTable[0, ezbTable->CurrentCell->OwningRow->Index]->Value->ToString()->Contains("s")) ignore = false;

	if (taskType < 6) {
		if (ezbTable->CurrentCell->OwningColumn->Index == 0 || ezbTable->CurrentCell->OwningColumn->Index == ezbTable->ColumnCount - 1 || ezbTable->CurrentCell->OwningRow->Index == ezbTable->RowCount - 1 ||
			ezbTable->CurrentCell->OwningRow->Index < ezbTable->RowCount - (hlbka + 1)
			|| ezb->pocetBazickychVektorov[ezbTable->CurrentCell->OwningRow->Index - (hlbka + 1) * ezb->iteration] == 1 ||
			(ezb->pocetZaclenenychVektorov[ezbTable->CurrentCell->OwningColumn->Index - 1] == 1)
			|| ezbTable->CurrentCell->OwningColumn->Name == "b\u20D7" || (taskType > 0 && taskType < 5 && ezbTable->CurrentCell->OwningColumn->Index > mt->pocetStlpcov)) {

			ezbTable->ClearSelection();
		}
		else {

			if (ezbTable->CurrentCell->Value->ToString() == "0") {
				MessageBox::Show("Vedúci prvok nemôže byť 0 !", "Chybný výber !", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
						ezbTable[0, i]->Value = "a" + subscript(ezbTable->CurrentCell->OwningColumn->Index.ToString()) + "\u20D7" + " \u2192 e" + subscript(System::Convert::ToString(1 + i - (hlbka + 1) * ezb->iteration)) + "\u20D7";
					if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4)
						ezbTable[0, i]->Value = "s" + subscript(ezbTable->CurrentCell->OwningColumn->Index.ToString()) + "\u20D7" + " \u2192 e" + subscript(System::Convert::ToString(1 + i - (hlbka + 1) * ezb->iteration)) + "\u20D7";
					if (taskType == 5)
						ezbTable[0, i]->Value = "x" + subscript(ezbTable->CurrentCell->OwningColumn->Index.ToString()) + " \u2192 e" + subscript(System::Convert::ToString(1 + i - (hlbka + 1) * ezb->iteration)) + "\u20D7";
				}
			}

			ezbTable->ClearSelection();


			ezbTable->Rows[(hlbka * (ezb->iteration + 1)) + ezb->iteration]->Height = 2;

			for (int i = 0; i <= sirka + 1; i++) {
				for (int j = (hlbka + 1) * ezb->iteration; j <= (hlbka * (ezb->iteration + 1)) + ezb->iteration; j++) {
					if (j == (hlbka * (ezb->iteration + 1)) + ezb->iteration)
						ezbTable[i, j]->Style->BackColor = System::Drawing::Color::LightSlateGray;

					else
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

			backgroundPanel->Width = 206 + ((ezbTable->ColumnCount - 2) * 55);
			backgroundPanel->Height = 30;

			for (int i = 0; i < ezbTable->RowCount; i++) {
				backgroundPanel->Height += ezbTable->Rows[i]->Height;
			}

			checkMatrix(newMatrix);

			if (!resetButton->Visible) {
				resetButton->Visible = true;
				this->clearTaskButton->Location = System::Drawing::Point(353, 0);
			}

		}
	}
	else {
		if (ezbTable->CurrentCell->OwningRow->Index != rowIndex || ezbTable->CurrentCell->OwningColumn->Index != columnIndex) {

			ezbTable->ClearSelection();
		}
		else {

			if (ezbTable->CurrentCell->Value->ToString() == "0") {
				MessageBox::Show("Vedúci prvok nemôže byť 0 !", "Chybný výber !", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			ezbTable->CurrentCell->Style->BackColor = System::Drawing::Color::DodgerBlue;
			ezbTable->CurrentCell->Style->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));

			int sirka = lpt->pocetPremennych + lpt->pocetOhraniceni;
			int hlbka = lpt->pocetOhraniceni;

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
					ezbTable[0, i]->Value = "x" + subscript(ezbTable->CurrentCell->OwningColumn->Index.ToString()) + " \u2192 e" + subscript(System::Convert::ToString(1 + i - (hlbka + 1) * ezb->iteration)) + "\u20D7";
				}
			}

			ezbTable->ClearSelection();

			ezbTable[0, (hlbka * (ezb->iteration + 1)) + ezb->iteration]->Value = "cⱼ - zⱼ";

			for (int i = 0; i <= sirka + 1; i++) {
				for (int j = (hlbka + 1) * ezb->iteration; j <= (hlbka * (ezb->iteration + 1)) + ezb->iteration; j++) {
					if (j == (hlbka * (ezb->iteration + 1)) + ezb->iteration)
						ezbTable[i, j]->Style->BackColor = System::Drawing::Color::LightSlateGray;

					else
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

			for (int i = 0; i <= sirka; i++) {
				//vypocitaj cj-zj
				double suma = lpNewTaskD->getValueOnIndex(i + 1);
				for (int j = 0; j < hlbka; j++) {
					if (ezb->pocetBazickychVektorov[j] == 0)
						suma -= lpNewTaskD->getValueOnIndex(j + lpt->pocetPremennych + 1) * System::Convert::ToDouble(ezbTable[i + 1, j + (hlbka + 1) * ezb->iteration]->Value);
					else
						suma -= lpNewTaskD->getValueOnIndex(ezb->indexyBazickychVektorov[j] + 1) * System::Convert::ToDouble(ezbTable[i + 1, j + (hlbka + 1) * ezb->iteration]->Value);
					if (i == sirka && j == hlbka - 1) suma *= -1;
				}
				ezbTable[i + 1, (hlbka * (ezb->iteration + 1)) + ezb->iteration]->Value = suma;
			}	

			backgroundPanel->Width = 206 + ((ezbTable->ColumnCount - 2) * 55);
			backgroundPanel->Height = 30;

			for (int i = 0; i < ezbTable->RowCount; i++) {
				backgroundPanel->Height += ezbTable->Rows[i]->Height;
			}

			checkMatrix(newMatrix);

			if (!resetButton->Visible) {
				resetButton->Visible = true;
				this->clearTaskButton->Location = System::Drawing::Point(353, 0);
			}

		}
	}
	
}
private: System::Void MyForm_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	solutionTaskPanel->Width = this->Width / 2;
	tableTaskPanel->Width = this->Width / 2;
	taskTextBox->Width = this->Width / 2;
	classicSolutionPanel->Width = this->Width / 2 - 18;
	matrixSolutionPanel->Width = this->Width / 2 - 18;
}

private: System::Void ezbTable_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
	
	int hlbka = 0;
	int rowIndex = 0;
	if (ezb != NULL) rowIndex = (ezb->iteration * (hlbka + 1));;
	int columnIndex = 1;
	Boolean ignore = true;

	if (taskType == 0) hlbka = vt->pocetSuradnic;
	if (taskType == 1 || taskType == 2 || taskType == 3 || taskType == 4) hlbka = mt->pocetRiadkov;
	if (taskType == 5) hlbka = st->pocetRovnic;
	if (taskType == 6 && ezbTable->RowCount > 1) {
		hlbka = lpt->pocetOhraniceni;

		//povol kliknut len na jednu bunku pri ezb!
		double maxValue = 0;
		for (int i = 1; i <= lpt->pocetPremennych + lpt->pocetOhraniceni; i++) {
			if (lpNewTaskD->getMaxMin()) {
				if (System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value) > maxValue) {
					maxValue = System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value);
					columnIndex = i;
				}
			}
			else {
				if (System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value) < maxValue) {
					maxValue = System::Convert::ToDouble(ezbTable[i, ezbTable->RowCount - 1]->Value);
					columnIndex = i;
				}
			}
		}

		maxValue = 99999999;
		for (int i = 0; i < lpt->pocetOhraniceni; i++) {
			if (System::Convert::ToDouble(ezbTable[ezbTable->ColumnCount - 1, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value) / System::Convert::ToDouble(ezbTable[columnIndex, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value) < maxValue &&
				System::Convert::ToDouble(ezbTable[columnIndex, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value) > 0) {
				maxValue = System::Convert::ToDouble(ezbTable[ezbTable->ColumnCount - 1, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value) / System::Convert::ToDouble(ezbTable[columnIndex, ezbTable->RowCount - lpt->pocetOhraniceni - 1 + i]->Value);
				rowIndex = i + ezbTable->RowCount - lpt->pocetOhraniceni - 1;
			}

		}

	if (taskType == 6 && ezbTable[0, ezbTable->CurrentCell->OwningRow->Index]->Value->ToString()->Contains("s")) ignore = false;
	}

	if (taskType < 6) {
		if (ezbTable->CurrentCell->OwningColumn->Index == 0 || ezbTable->CurrentCell->OwningColumn->Index == ezbTable->ColumnCount - 1 || ezbTable->CurrentCell->OwningRow->Index == ezbTable->RowCount - 1 ||
			ezbTable->CurrentCell->OwningRow->Index < ezbTable->RowCount - (hlbka + 1)
			|| ezb->pocetBazickychVektorov[ezbTable->CurrentCell->OwningRow->Index - (hlbka + 1) * ezb->iteration] == 1 ||
			(ezb->pocetZaclenenychVektorov[ezbTable->CurrentCell->OwningColumn->Index - 1] == 1)
			|| ezbTable->CurrentCell->OwningColumn->Name == "b\u20D7" || (taskType > 0 && taskType < 5 && ezbTable->CurrentCell->OwningColumn->Index > mt->pocetStlpcov)) {

			ezbTable->ClearSelection();
		}
	}
	else {
		if (ezbTable->CurrentCell->OwningRow->Index != rowIndex || ezbTable->CurrentCell->OwningColumn->Index != columnIndex) {

			ezbTable->ClearSelection();
		}
	}
}
private: System::Void helperButton_Click(System::Object^ sender, System::EventArgs^ e) {
	helpDialog^ h = gcnew helpDialog();
	h->ShowDialog();

}
};
}
