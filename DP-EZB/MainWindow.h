#pragma once
#include "VectorsNewTaskDialog.h"
#include "EZB.cpp"

namespace DP_EZB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
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

	private: vectorsNewTaskDialog^ vectorsNewTaskD;
	private: System::Windows::Forms::Panel^ bottomPanel;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ topPanel;


	private: System::Windows::Forms::Button^ matrixRank;
	private: System::Windows::Forms::Button^ vectors;
	private: System::Windows::Forms::Panel^ taskButtonPanel;

	private: System::Windows::Forms::Button^ saveTaskButton;
	private: System::Windows::Forms::Button^ clearTaskButton;
	private: System::Windows::Forms::Button^ newTaskButton;
	private: System::Windows::Forms::Panel^ taskPanel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ pocetSuradnicVektorovLabel;
	private: System::Windows::Forms::Label^ pocetVektorovLabel;
	private: System::Windows::Forms::DataGridView^ taskMatrix;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ solutionPanel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ ezbTable;

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
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->matrixRank = (gcnew System::Windows::Forms::Button());
			this->vectors = (gcnew System::Windows::Forms::Button());
			this->bottomPanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->taskButtonPanel = (gcnew System::Windows::Forms::Panel());
			this->saveTaskButton = (gcnew System::Windows::Forms::Button());
			this->clearTaskButton = (gcnew System::Windows::Forms::Button());
			this->newTaskButton = (gcnew System::Windows::Forms::Button());
			this->taskPanel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->taskMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->pocetSuradnicVektorovLabel = (gcnew System::Windows::Forms::Label());
			this->pocetVektorovLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->solutionPanel = (gcnew System::Windows::Forms::Panel());
			this->ezbTable = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->topPanel->SuspendLayout();
			this->bottomPanel->SuspendLayout();
			this->taskButtonPanel->SuspendLayout();
			this->taskPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->taskMatrix))->BeginInit();
			this->solutionPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ezbTable))->BeginInit();
			this->SuspendLayout();
			// 
			// topPanel
			// 
			this->topPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->topPanel->Controls->Add(this->matrixRank);
			this->topPanel->Controls->Add(this->vectors);
			this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(1024, 38);
			this->topPanel->TabIndex = 0;
			// 
			// matrixRank
			// 
			this->matrixRank->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->matrixRank->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->matrixRank->ForeColor = System::Drawing::SystemColors::Window;
			this->matrixRank->Location = System::Drawing::Point(75, 0);
			this->matrixRank->Name = L"matrixRank";
			this->matrixRank->Size = System::Drawing::Size(129, 38);
			this->matrixRank->TabIndex = 1;
			this->matrixRank->Text = L"Hodnosť matice";
			this->matrixRank->UseVisualStyleBackColor = false;
			this->matrixRank->Click += gcnew System::EventHandler(this, &MyForm::matrixRank_Click);
			// 
			// vectors
			// 
			this->vectors->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->vectors->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->vectors->ForeColor = System::Drawing::SystemColors::Window;
			this->vectors->Location = System::Drawing::Point(0, 0);
			this->vectors->Name = L"vectors";
			this->vectors->Size = System::Drawing::Size(75, 38);
			this->vectors->TabIndex = 0;
			this->vectors->Text = L"Vektory";
			this->vectors->UseVisualStyleBackColor = false;
			this->vectors->Click += gcnew System::EventHandler(this, &MyForm::vectors_Click);
			// 
			// bottomPanel
			// 
			this->bottomPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->bottomPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bottomPanel->Controls->Add(this->label1);
			this->bottomPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->bottomPanel->Location = System::Drawing::Point(0, 748);
			this->bottomPanel->Name = L"bottomPanel";
			this->bottomPanel->Size = System::Drawing::Size(1024, 20);
			this->bottomPanel->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Right;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(822, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Copyright 2022 Bc. Matej Drha";
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
			this->taskButtonPanel->Size = System::Drawing::Size(1024, 38);
			this->taskButtonPanel->TabIndex = 4;
			// 
			// saveTaskButton
			// 
			this->saveTaskButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->saveTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->saveTaskButton->ForeColor = System::Drawing::SystemColors::Window;
			this->saveTaskButton->Location = System::Drawing::Point(200, -1);
			this->saveTaskButton->Name = L"saveTaskButton";
			this->saveTaskButton->Size = System::Drawing::Size(105, 38);
			this->saveTaskButton->TabIndex = 3;
			this->saveTaskButton->Text = L"Uložiť";
			this->saveTaskButton->UseVisualStyleBackColor = false;
			// 
			// clearTaskButton
			// 
			this->clearTaskButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->clearTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clearTaskButton->ForeColor = System::Drawing::SystemColors::Window;
			this->clearTaskButton->Location = System::Drawing::Point(99, -1);
			this->clearTaskButton->Name = L"clearTaskButton";
			this->clearTaskButton->Size = System::Drawing::Size(105, 38);
			this->clearTaskButton->TabIndex = 2;
			this->clearTaskButton->Text = L"Zmazať";
			this->clearTaskButton->UseVisualStyleBackColor = false;
			this->clearTaskButton->Click += gcnew System::EventHandler(this, &MyForm::clearTaskButton_Click);
			// 
			// newTaskButton
			// 
			this->newTaskButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->newTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->newTaskButton->ForeColor = System::Drawing::SystemColors::Window;
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
			this->taskPanel->Controls->Add(this->label3);
			this->taskPanel->Controls->Add(this->taskMatrix);
			this->taskPanel->Controls->Add(this->pocetSuradnicVektorovLabel);
			this->taskPanel->Controls->Add(this->pocetVektorovLabel);
			this->taskPanel->Controls->Add(this->label2);
			this->taskPanel->Location = System::Drawing::Point(0, 76);
			this->taskPanel->Name = L"taskPanel";
			this->taskPanel->Size = System::Drawing::Size(1024, 200);
			this->taskPanel->TabIndex = 5;
			this->taskPanel->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::Window;
			this->label3->Location = System::Drawing::Point(326, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Matica:";
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
			this->taskMatrix->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->taskMatrix->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->taskMatrix->ColumnHeadersHeight = 20;
			this->taskMatrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->taskMatrix->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->taskMatrix->DefaultCellStyle = dataGridViewCellStyle2;
			this->taskMatrix->Location = System::Drawing::Point(404, 5);
			this->taskMatrix->MaximumSize = System::Drawing::Size(175, 175);
			this->taskMatrix->MinimumSize = System::Drawing::Size(70, 70);
			this->taskMatrix->Name = L"taskMatrix";
			this->taskMatrix->RowHeadersVisible = false;
			this->taskMatrix->RowHeadersWidth = 20;
			this->taskMatrix->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->taskMatrix->Size = System::Drawing::Size(175, 175);
			this->taskMatrix->TabIndex = 3;
			// 
			// pocetSuradnicVektorovLabel
			// 
			this->pocetSuradnicVektorovLabel->AutoSize = true;
			this->pocetSuradnicVektorovLabel->ForeColor = System::Drawing::SystemColors::Window;
			this->pocetSuradnicVektorovLabel->Location = System::Drawing::Point(17, 84);
			this->pocetSuradnicVektorovLabel->Name = L"pocetSuradnicVektorovLabel";
			this->pocetSuradnicVektorovLabel->Size = System::Drawing::Size(186, 21);
			this->pocetSuradnicVektorovLabel->TabIndex = 2;
			this->pocetSuradnicVektorovLabel->Text = L"Počet súradníc vektorov:  ";
			// 
			// pocetVektorovLabel
			// 
			this->pocetVektorovLabel->AutoSize = true;
			this->pocetVektorovLabel->ForeColor = System::Drawing::SystemColors::Window;
			this->pocetVektorovLabel->Location = System::Drawing::Point(17, 61);
			this->pocetVektorovLabel->Name = L"pocetVektorovLabel";
			this->pocetVektorovLabel->Size = System::Drawing::Size(123, 21);
			this->pocetVektorovLabel->TabIndex = 1;
			this->pocetVektorovLabel->Text = L"Počet vektorov:  ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(13, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 21);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Zadanie:";
			// 
			// solutionPanel
			// 
			this->solutionPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->solutionPanel->Controls->Add(this->ezbTable);
			this->solutionPanel->Controls->Add(this->label4);
			this->solutionPanel->Location = System::Drawing::Point(0, 276);
			this->solutionPanel->Name = L"solutionPanel";
			this->solutionPanel->Size = System::Drawing::Size(516, 472);
			this->solutionPanel->TabIndex = 6;
			this->solutionPanel->Visible = false;
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
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ezbTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->ezbTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ezbTable->DefaultCellStyle = dataGridViewCellStyle4;
			this->ezbTable->EnableHeadersVisualStyles = false;
			this->ezbTable->Location = System::Drawing::Point(131, 17);
			this->ezbTable->Name = L"ezbTable";
			this->ezbTable->RowHeadersVisible = false;
			this->ezbTable->RowHeadersWidth = 20;
			this->ezbTable->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->ezbTable->Size = System::Drawing::Size(233, 102);
			this->ezbTable->TabIndex = 6;
			this->ezbTable->SelectionChanged += gcnew System::EventHandler(this, &MyForm::ezbTable_SelectionChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Window;
			this->label4->Location = System::Drawing::Point(14, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 21);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Riešenie:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::Window;
			this->label5->Location = System::Drawing::Point(16, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 21);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Úloha:";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(1024, 768);
			this->Controls->Add(this->solutionPanel);
			this->Controls->Add(this->taskPanel);
			this->Controls->Add(this->taskButtonPanel);
			this->Controls->Add(this->bottomPanel);
			this->Controls->Add(this->topPanel);
			this->Enabled = false;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::Window;
			this->Location = System::Drawing::Point(20, 54);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EZB";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->topPanel->ResumeLayout(false);
			this->bottomPanel->ResumeLayout(false);
			this->bottomPanel->PerformLayout();
			this->taskButtonPanel->ResumeLayout(false);
			this->taskPanel->ResumeLayout(false);
			this->taskPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->taskMatrix))->EndInit();
			this->solutionPanel->ResumeLayout(false);
			this->solutionPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ezbTable))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void vectors_Click(System::Object^ sender, System::EventArgs^ e) {
	this->vectors->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
	this->matrixRank->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
}
private: System::Void matrixRank_Click(System::Object^ sender, System::EventArgs^ e) {
	this->vectors->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
	this->matrixRank->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
}
private: System::Void pocetSuradnicVektorov_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void newTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
	vectorsNewTaskD = gcnew vectorsNewTaskDialog();
	vectorsNewTaskD->ShowDialog();

	if (vectorsNewTaskD->created) {
		this->taskPanel->Show();
		this->solutionPanel->Show();

		int pocetVektorov = vectorsNewTaskD->getPocetVektorov();
		int pocetSuradnicVektorov = vectorsNewTaskD->getPocetSuradnicVektorov();
		int** matrix = vectorsNewTaskD->getMatrix();

		pocetVektorovLabel->Text += System::Convert::ToString(pocetVektorov);
		pocetSuradnicVektorovLabel->Text += System::Convert::ToString(pocetSuradnicVektorov);
		
		taskMatrix->ColumnCount = pocetSuradnicVektorov;

		for (int i = 0; i < pocetVektorov; i++) {
			taskMatrix->Rows->Add();
			taskMatrix->Rows[i]->Height = 35;
		}

		for (int i = 0; i < pocetSuradnicVektorov; i++) {
			taskMatrix->Columns[i]->Width = 35;
			for (int j = 0; j < pocetVektorov; j++) {
				taskMatrix[i,j]->Value = (matrix[j][i]);
				taskMatrix[i,j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				taskMatrix[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
			}		
		}
		//
		//vygeneruje sa riesenie - ezb tabulka
		//
		//
		//vytvor bazicku maticu
		//
		int** bazickaMatica = 0;
		bazickaMatica = new int* [pocetSuradnicVektorov];
		for (int h = 0; h < pocetSuradnicVektorov; h++)
		{
			bazickaMatica[h] = new int[pocetVektorov + 1];
		}


		ezbTable->ColumnCount = pocetVektorov + 2;
		ezbTable->MultiSelect = false;
		ezbTable->Columns[0]->Name = "Báza";
		for (int i = 1; i <= pocetVektorov; i++) {
			ezbTable->Columns[i]->Name = "a" + System::Convert::ToString(i);
			ezbTable->Columns[i]->Width = 35;		

		}
		ezbTable->Columns[pocetVektorov+1]->Name = "Suma";

		for (int i = 0; i <= pocetSuradnicVektorov; i++) {
			ezbTable->Rows->Add();
			ezbTable->Rows[i]->Height = 35;
			ezbTable[0,i]->Value = "e" + System::Convert::ToString(i+1);
		}
		ezbTable->Rows[pocetSuradnicVektorov]->Height = 2;

		for (int i = 0; i <= pocetVektorov + 1; i++) {
			ezbTable->Columns[i]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			for (int j = 0; j <= pocetSuradnicVektorov; j++) {
				ezbTable[i, j]->Style->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				ezbTable[i, j]->Style->ForeColor = System::Drawing::SystemColors::Window;
			}
		}

		for (int j = 0; j < pocetSuradnicVektorov; j++) {
			int suma = 0;
			for (int i = 0; i < pocetVektorov; i++) {
				suma += matrix[i][j];
				ezbTable[i + 1, j]->Value = matrix[i][j];
				bazickaMatica[i][j] = matrix[i][j];
			}
			ezbTable[pocetVektorov + 1, j]->Value = suma;
			bazickaMatica[j][pocetVektorov] = suma;
		}
		//
		//skontroluj bazicku maticu
		//
		//EZB ezb = EZB(bazickaMatica);

		// 
		// EZB
		//

		
		

	}
}
private: System::Void clearTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
	pocetVektorovLabel->Text = "Počet vektorov :";
	pocetSuradnicVektorovLabel->Text = "Počet súradníc vektorov:  ";
	taskMatrix->Rows->Clear();
	taskMatrix->Refresh();
	ezbTable->Rows->Clear();
	ezbTable->Refresh();
	taskPanel->Hide();
	solutionPanel->Hide();

}
private: System::Void ezbTable_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {

	if(ezbTable->CurrentCell->OwningColumn->Index == 0 || ezbTable->CurrentCell->OwningColumn->Index == ezbTable->ColumnCount - 1 || ezbTable->CurrentCell->OwningRow->Index == ezbTable->RowCount - 1)
		ezbTable->ClearSelection();
}
};
}
