#pragma once

namespace $safeprojectname$ {

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
	private: System::Windows::Forms::Panel^ topPanel;
	private: System::Windows::Forms::Panel^ centerPanel;
	private: array<System::Windows::Forms::Label^>^ LabelArr1;
	private: array<System::Windows::Forms::TextBox ^>^ TextArr1;
	protected:



	private: System::Windows::Forms::Panel^ bottomPanel;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ buttonPanel;

	private: System::Windows::Forms::Button^ matrixRank;
	private: System::Windows::Forms::Button^ vectors;
	private: System::Windows::Forms::Panel^ vectorsWorkPanel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ vectorLabel15;
	private: System::Windows::Forms::TextBox^ vectorText15;
	private: System::Windows::Forms::Label^ vectorLabel14;
	private: System::Windows::Forms::TextBox^ vectorText14;
	private: System::Windows::Forms::Label^ vectorLabel13;
	private: System::Windows::Forms::TextBox^ vectorText13;
	private: System::Windows::Forms::Label^ vectorLabel12;
	private: System::Windows::Forms::TextBox^ vectorText12;
	private: System::Windows::Forms::Label^ vectorLabel11;
	private: System::Windows::Forms::TextBox^ vectorText11;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ pocetSuradnicVektorov;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ pocetVektorov;
	private: System::Windows::Forms::Label^ LabelFirstAction;


	private:











	protected:

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
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->centerPanel = (gcnew System::Windows::Forms::Panel());
			this->buttonPanel = (gcnew System::Windows::Forms::Panel());
			this->matrixRank = (gcnew System::Windows::Forms::Button());
			this->vectors = (gcnew System::Windows::Forms::Button());
			this->bottomPanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->vectorsWorkPanel = (gcnew System::Windows::Forms::Panel());
			this->LabelFirstAction = (gcnew System::Windows::Forms::Label());
			this->pocetVektorov = (gcnew System::Windows::Forms::NumericUpDown());
			this->pocetSuradnicVektorov = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->vectorText11 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel11 = (gcnew System::Windows::Forms::Label());
			this->vectorText12 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel12 = (gcnew System::Windows::Forms::Label());
			this->vectorText13 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel13 = (gcnew System::Windows::Forms::Label());
			this->vectorText14 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel14 = (gcnew System::Windows::Forms::Label());
			this->vectorText15 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel15 = (gcnew System::Windows::Forms::Label());
			this->centerPanel->SuspendLayout();
			this->buttonPanel->SuspendLayout();
			this->bottomPanel->SuspendLayout();
			this->vectorsWorkPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetVektorov))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetSuradnicVektorov))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::SystemColors::WindowText;
			this->topPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(1024, 30);
			this->topPanel->TabIndex = 1;
			// 
			// centerPanel
			// 
			this->centerPanel->AutoScroll = true;
			this->centerPanel->BackColor = System::Drawing::SystemColors::WindowText;
			this->centerPanel->Controls->Add(this->vectorsWorkPanel);
			this->centerPanel->Controls->Add(this->buttonPanel);
			this->centerPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->centerPanel->Location = System::Drawing::Point(0, 30);
			this->centerPanel->Name = L"centerPanel";
			this->centerPanel->Size = System::Drawing::Size(1024, 738);
			this->centerPanel->TabIndex = 2;
			// 
			// buttonPanel
			// 
			this->buttonPanel->Controls->Add(this->matrixRank);
			this->buttonPanel->Controls->Add(this->vectors);
			this->buttonPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonPanel->Location = System::Drawing::Point(0, 0);
			this->buttonPanel->Name = L"buttonPanel";
			this->buttonPanel->Size = System::Drawing::Size(1024, 38);
			this->buttonPanel->TabIndex = 0;
			// 
			// matrixRank
			// 
			this->matrixRank->BackColor = System::Drawing::SystemColors::WindowText;
			this->matrixRank->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->matrixRank->ForeColor = System::Drawing::SystemColors::Window;
			this->matrixRank->Location = System::Drawing::Point(75, 0);
			this->matrixRank->Name = L"matrixRank";
			this->matrixRank->Size = System::Drawing::Size(103, 38);
			this->matrixRank->TabIndex = 1;
			this->matrixRank->Text = L"Matrix Rank";
			this->matrixRank->UseVisualStyleBackColor = false;
			this->matrixRank->Click += gcnew System::EventHandler(this, &MyForm::matrixRank_Click);
			// 
			// vectors
			// 
			this->vectors->BackColor = System::Drawing::SystemColors::WindowText;
			this->vectors->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->vectors->ForeColor = System::Drawing::SystemColors::Window;
			this->vectors->Location = System::Drawing::Point(0, 0);
			this->vectors->Name = L"vectors";
			this->vectors->Size = System::Drawing::Size(75, 38);
			this->vectors->TabIndex = 0;
			this->vectors->Text = L"Vectors";
			this->vectors->UseVisualStyleBackColor = false;
			this->vectors->Click += gcnew System::EventHandler(this, &MyForm::vectors_Click);
			// 
			// bottomPanel
			// 
			this->bottomPanel->BackColor = System::Drawing::SystemColors::WindowText;
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
			// vectorsWorkPanel
			// 
			this->vectorsWorkPanel->Controls->Add(this->panel1);
			this->vectorsWorkPanel->Controls->Add(this->label3);
			this->vectorsWorkPanel->Controls->Add(this->pocetSuradnicVektorov);
			this->vectorsWorkPanel->Controls->Add(this->label2);
			this->vectorsWorkPanel->Controls->Add(this->pocetVektorov);
			this->vectorsWorkPanel->Controls->Add(this->LabelFirstAction);
			this->vectorsWorkPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->vectorsWorkPanel->Location = System::Drawing::Point(0, 38);
			this->vectorsWorkPanel->Name = L"vectorsWorkPanel";
			this->vectorsWorkPanel->Size = System::Drawing::Size(1024, 700);
			this->vectorsWorkPanel->TabIndex = 1;
			// 
			// LabelFirstAction
			// 
			this->LabelFirstAction->AutoSize = true;
			this->LabelFirstAction->ForeColor = System::Drawing::SystemColors::Window;
			this->LabelFirstAction->Location = System::Drawing::Point(39, 56);
			this->LabelFirstAction->Name = L"LabelFirstAction";
			this->LabelFirstAction->Size = System::Drawing::Size(174, 21);
			this->LabelFirstAction->TabIndex = 0;
			this->LabelFirstAction->Text = L"1. Zadaj počet vektorov:";
			// 
			// pocetVektorov
			// 
			this->pocetVektorov->Location = System::Drawing::Point(282, 56);
			this->pocetVektorov->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->pocetVektorov->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->pocetVektorov->Name = L"pocetVektorov";
			this->pocetVektorov->Size = System::Drawing::Size(44, 29);
			this->pocetVektorov->TabIndex = 2;
			this->pocetVektorov->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// pocetSuradnicVektorov
			// 
			this->pocetSuradnicVektorov->Location = System::Drawing::Point(282, 100);
			this->pocetSuradnicVektorov->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->pocetSuradnicVektorov->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->pocetSuradnicVektorov->Name = L"pocetSuradnicVektorov";
			this->pocetSuradnicVektorov->Size = System::Drawing::Size(44, 29);
			this->pocetSuradnicVektorov->TabIndex = 4;
			this->pocetSuradnicVektorov->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->pocetSuradnicVektorov->ValueChanged += gcnew System::EventHandler(this, &MyForm::pocetSuradnicVektorov_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(39, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"2. Zadaj počet súradníc vektorov:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::WindowText;
			this->label3->ForeColor = System::Drawing::SystemColors::Window;
			this->label3->Location = System::Drawing::Point(43, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 21);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Vektory:";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->vectorLabel15);
			this->panel1->Controls->Add(this->vectorText15);
			this->panel1->Controls->Add(this->vectorLabel14);
			this->panel1->Controls->Add(this->vectorText14);
			this->panel1->Controls->Add(this->vectorLabel13);
			this->panel1->Controls->Add(this->vectorText13);
			this->panel1->Controls->Add(this->vectorLabel12);
			this->panel1->Controls->Add(this->vectorText12);
			this->panel1->Controls->Add(this->vectorLabel11);
			this->panel1->Controls->Add(this->vectorText11);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(139, 157);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(323, 34);
			this->panel1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label4->ForeColor = System::Drawing::SystemColors::Window;
			this->label4->Location = System::Drawing::Point(6, 4);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"a1 = (";
			//
			// LabelArr
			//
			this->LabelArr1 = gcnew array<System::Windows::Forms::Label^>(25);
			this->LabelArr1[0] = this->vectorLabel11;
			this->LabelArr1[1] = this->vectorLabel12;
			this->LabelArr1[2] = this->vectorLabel13;
			this->LabelArr1[3] = this->vectorLabel14;
			this->LabelArr1[4] = this->vectorLabel15;
			//
			// TextArr1
			// 
			this->TextArr1 = gcnew array<System::Windows::Forms::TextBox^>(25);
			this->TextArr1[0] = this->vectorText11;
			this->TextArr1[1] = this->vectorText12;
			this->TextArr1[2] = this->vectorText13;
			this->TextArr1[3] = this->vectorText14;
			this->TextArr1[4] = this->vectorText15;
			// 
			// vectorText11
			// 
			this->vectorText11->Location = System::Drawing::Point(73, 4);
			this->vectorText11->Name = L"vectorText11";
			this->vectorText11->Size = System::Drawing::Size(27, 29);
			this->vectorText11->TabIndex = 1;
			// 
			// vectorLabel11
			// 
			this->vectorLabel11->AutoSize = true;
			this->vectorLabel11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel11->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel11->Location = System::Drawing::Point(102, 5);
			this->vectorLabel11->Name = L"vectorLabel11";
			this->vectorLabel11->Size = System::Drawing::Size(16, 25);
			this->vectorLabel11->TabIndex = 2;
			this->vectorLabel11->Text = L";";
			// 
			// vectorText12
			// 
			this->vectorText12->Location = System::Drawing::Point(119, 3);
			this->vectorText12->Name = L"vectorText12";
			this->vectorText12->Size = System::Drawing::Size(27, 29);
			this->vectorText12->TabIndex = 3;
			// 
			// vectorLabel12
			// 
			this->vectorLabel12->AutoSize = true;
			this->vectorLabel12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel12->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel12->Location = System::Drawing::Point(149, 5);
			this->vectorLabel12->Name = L"vectorLabel12";
			this->vectorLabel12->Size = System::Drawing::Size(16, 25);
			this->vectorLabel12->TabIndex = 4;
			this->vectorLabel12->Text = L";";
			// 
			// vectorText13
			// 
			this->vectorText13->Location = System::Drawing::Point(166, 3);
			this->vectorText13->Name = L"vectorText13";
			this->vectorText13->Size = System::Drawing::Size(27, 29);
			this->vectorText13->TabIndex = 5;
			// 
			// vectorLabel13
			// 
			this->vectorLabel13->AutoSize = true;
			this->vectorLabel13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel13->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel13->Location = System::Drawing::Point(196, 6);
			this->vectorLabel13->Name = L"vectorLabel13";
			this->vectorLabel13->Size = System::Drawing::Size(16, 25);
			this->vectorLabel13->TabIndex = 6;
			this->vectorLabel13->Text = L";";
			// 
			// vectorText14
			// 
			this->vectorText14->Location = System::Drawing::Point(213, 1);
			this->vectorText14->Name = L"vectorText14";
			this->vectorText14->Size = System::Drawing::Size(27, 29);
			this->vectorText14->TabIndex = 7;
			// 
			// vectorLabel15
			// 
			this->vectorLabel14->AutoSize = true;
			this->vectorLabel14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel14->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel14->Location = System::Drawing::Point(242, 5);
			this->vectorLabel14->Name = L"vectorLabel15";
			this->vectorLabel14->Size = System::Drawing::Size(16, 25);
			this->vectorLabel14->TabIndex = 8;
			this->vectorLabel14->Text = L";";
			// 
			// vectorText15
			// 
			this->vectorText15->Location = System::Drawing::Point(259, 2);
			this->vectorText15->Name = L"vectorText15";
			this->vectorText15->Size = System::Drawing::Size(27, 29);
			this->vectorText15->TabIndex = 9;
			// 
			// vectorLabel16
			// 
			this->vectorLabel15->AutoSize = true;
			this->vectorLabel15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel15->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel15->Location = System::Drawing::Point(289, 2);
			this->vectorLabel15->Name = L"vectorLabel16";
			this->vectorLabel15->Size = System::Drawing::Size(18, 25);
			this->vectorLabel15->TabIndex = 10;
			this->vectorLabel15->Text = L")";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::WindowText;
			this->ClientSize = System::Drawing::Size(1024, 768);
			this->Controls->Add(this->bottomPanel);
			this->Controls->Add(this->centerPanel);
			this->Controls->Add(this->topPanel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EZB";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->centerPanel->ResumeLayout(false);
			this->buttonPanel->ResumeLayout(false);
			this->bottomPanel->ResumeLayout(false);
			this->bottomPanel->PerformLayout();
			this->vectorsWorkPanel->ResumeLayout(false);
			this->vectorsWorkPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetVektorov))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetSuradnicVektorov))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Application::Exit();

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
	for (int i = 1; i <= 5; i++) {
		if (i < System::Convert::ToInt16(this->pocetSuradnicVektorov->Value)) {
			this->LabelArr1[i-1]->Visible;
			this->LabelArr1[i - 1]->Text = ";";
			this->TextArr1[i - 1]->Visible = true;
		}
		else {
			if (i == System::Convert::ToInt16(this->pocetSuradnicVektorov->Value)) {
				this->LabelArr1[i-1]->Visible = true;
				this->TextArr1[i - 1]->Visible = true;
				this->LabelArr1[i-1]->Text = ")";
			}
			else {
				this->LabelArr1[i-1]->Visible = false;
				this->TextArr1[i - 1]->Visible = false;
			}

		}
	}
}
};
}
