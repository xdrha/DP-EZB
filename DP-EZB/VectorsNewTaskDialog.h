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
	/// Summary for vectorsNewTaskDialog
	/// </summary>
	public ref class vectorsNewTaskDialog : public System::Windows::Forms::Form
	{
	public:
		vectorsNewTaskDialog(void)
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
		~vectorsNewTaskDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ vectorPanel1;
	protected:

	protected:
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
	private: System::Windows::Forms::Panel^ bottomPanel;

	private: System::Windows::Forms::Button^ exitTaskButton;
	private: System::Windows::Forms::Button^ clearTaskButton;
	private: System::Windows::Forms::Button^ createButton;
	private: System::Windows::Forms::Panel^ vectorPanel2;
	private: System::Windows::Forms::Label^ vectorLabel25;


	private: System::Windows::Forms::TextBox^ vectorText25;
	private: System::Windows::Forms::Label^ vectorLabel24;


	private: System::Windows::Forms::TextBox^ vectorText24;
	private: System::Windows::Forms::Label^ vectorLabel23;


	private: System::Windows::Forms::TextBox^ vectorText23;
	private: System::Windows::Forms::Label^ vectorLabel22;


	private: System::Windows::Forms::TextBox^ vectorText22;
	private: System::Windows::Forms::Label^ vectorLabel21;


	private: System::Windows::Forms::TextBox^ vectorText21;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ vectorPanel3;
	private: System::Windows::Forms::Label^ vectorLabel35;


	private: System::Windows::Forms::TextBox^ vectorText35;
	private: System::Windows::Forms::Label^ vectorLabel34;


	private: System::Windows::Forms::TextBox^ vectorText34;
	private: System::Windows::Forms::Label^ vectorLabel33;


	private: System::Windows::Forms::TextBox^ vectorText33;
	private: System::Windows::Forms::Label^ vectorLabel32;


	private: System::Windows::Forms::TextBox^ vectorText32;
	private: System::Windows::Forms::Label^ vectorLabel31;


	private: System::Windows::Forms::TextBox^ vectorText31;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ vectorPanel4;
	private: System::Windows::Forms::Label^ vectorLabel45;


	private: System::Windows::Forms::TextBox^ vectorText45;
	private: System::Windows::Forms::Label^ vectorLabel44;


	private: System::Windows::Forms::TextBox^ vectorText44;
	private: System::Windows::Forms::Label^ vectorLabel43;


	private: System::Windows::Forms::TextBox^ vectorText43;
private: System::Windows::Forms::Label^ vectorLabel42;


	private: System::Windows::Forms::TextBox^ vectorText42;
	private: System::Windows::Forms::Label^ vectorLabel41;


	private: System::Windows::Forms::TextBox^ vectorText41;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Panel^ vectorPanel5;
private: System::Windows::Forms::Label^ vectorLabel55;


private: System::Windows::Forms::TextBox^ vectorText55;
private: System::Windows::Forms::Label^ vectorLabel54;


private: System::Windows::Forms::TextBox^ vectorText54;
private: System::Windows::Forms::Label^ vectorLabel53;


private: System::Windows::Forms::TextBox^ vectorText53;
private: System::Windows::Forms::Label^ vectorLabel52;


private: System::Windows::Forms::TextBox^ vectorText52;
private: System::Windows::Forms::Label^ vectorLabel51;


private: System::Windows::Forms::TextBox^ vectorText51;

	private: System::Windows::Forms::Label^ label27;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
private: System::Windows::Forms::Button^ vectorB;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		/// 
		/// 
		/// 
	public: Boolean created = false;
	public: int vB = 0;
		
	public: int getPocetVektorov() {
		return (int)this->pocetVektorov->Value;
	}

	public: int getPocetSuradnicVektorov() {
		return (int)this->pocetSuradnicVektorov->Value;
	}

	public: int getVB() {
		return vB;
	}

	public: double** getMatrix() {
		double** matrix = 0;
		matrix = new double* [(int)this->pocetVektorov->Value];

		for (int h = 0; h < (int)this->pocetVektorov->Value; h++)
		{
			matrix[h] = new double[(int)this->pocetSuradnicVektorov->Value];
		
		}

		matrix[0][0] = System::Convert::ToDouble(vectorText11->Text);
		matrix[0][1] = System::Convert::ToDouble(vectorText12->Text);
		matrix[1][0] = System::Convert::ToDouble(vectorText21->Text);
		matrix[1][1] = System::Convert::ToDouble(vectorText22->Text);

		try {

			if (vectorText13->Text != "") matrix[0][2] = System::Convert::ToDouble(vectorText13->Text);
			if (vectorText14->Text != "") matrix[0][3] = System::Convert::ToDouble(vectorText14->Text);
			if (vectorText15->Text != "") matrix[0][4] = System::Convert::ToDouble(vectorText15->Text);

			if (vectorText23->Text != "") matrix[1][2] = System::Convert::ToDouble(vectorText23->Text);
			if (vectorText24->Text != "") matrix[1][3] = System::Convert::ToDouble(vectorText24->Text);
			if (vectorText25->Text != "") matrix[1][4] = System::Convert::ToDouble(vectorText25->Text);

			if (vectorText31->Text != "") matrix[2][0] = System::Convert::ToDouble(vectorText31->Text);
			if (vectorText32->Text != "") matrix[2][1] = System::Convert::ToDouble(vectorText32->Text);
			if (vectorText33->Text != "") matrix[2][2] = System::Convert::ToDouble(vectorText33->Text);
			if (vectorText34->Text != "") matrix[2][3] = System::Convert::ToDouble(vectorText34->Text);
			if (vectorText35->Text != "") matrix[2][4] = System::Convert::ToDouble(vectorText35->Text);

			if (vectorText41->Text != "") matrix[3][0] = System::Convert::ToDouble(vectorText41->Text);
			if (vectorText42->Text != "") matrix[3][1] = System::Convert::ToDouble(vectorText42->Text);
			if (vectorText43->Text != "") matrix[3][2] = System::Convert::ToDouble(vectorText43->Text);
			if (vectorText44->Text != "") matrix[3][3] = System::Convert::ToDouble(vectorText44->Text);
			if (vectorText45->Text != "") matrix[3][4] = System::Convert::ToDouble(vectorText45->Text);

			if (vectorText51->Text != "") matrix[4][0] = System::Convert::ToDouble(vectorText51->Text);
			if (vectorText52->Text != "") matrix[4][1] = System::Convert::ToDouble(vectorText52->Text);
			if (vectorText53->Text != "") matrix[4][2] = System::Convert::ToDouble(vectorText53->Text);
			if (vectorText54->Text != "") matrix[4][3] = System::Convert::ToDouble(vectorText54->Text);
			if (vectorText55->Text != "") matrix[4][4] = System::Convert::ToDouble(vectorText55->Text);
		}
		catch(...){
		}


		return matrix;
	}

	private: Boolean getVsetkyVyplnene() {
		if (vectorText11->Text == "") return false;
		if (vectorText12->Text == "") return false;
		if (vectorText21->Text == "") return false;
		if (vectorText22->Text == "") return false;

		if (pocetVektorov->Value == 3) {
			if (vectorText31->Text == "") return false;
			if (vectorText32->Text == "") return false;
			if (pocetSuradnicVektorov->Value == 3) 
				if (vectorText33->Text == "") return false;
			if (pocetSuradnicVektorov->Value == 4) {
				if (vectorText33->Text == "") return false;
				if (vectorText34->Text == "") return false;
			}		
			if (pocetSuradnicVektorov->Value == 5) {
				if (vectorText33->Text == "") return false;
				if (vectorText34->Text == "") return false;
				if (vectorText35->Text == "") return false;
			}				
			
		}
		if (pocetVektorov->Value == 4) {
			if (vectorText31->Text == "") return false;
			if (vectorText32->Text == "") return false;
			if (vectorText41->Text == "") return false;
			if (vectorText42->Text == "") return false;
			if (pocetSuradnicVektorov->Value == 3) {
				if (vectorText33->Text == "") return false;
				if (vectorText43->Text == "") return false;
			}
				
			if (pocetSuradnicVektorov->Value == 4) {
				if (vectorText33->Text == "") return false;
				if (vectorText34->Text == "") return false;
				if (vectorText43->Text == "") return false;
				if (vectorText44->Text == "") return false;
			}			
			if (pocetSuradnicVektorov->Value == 5) {
				if (vectorText33->Text == "") return false;
				if (vectorText34->Text == "") return false;
				if (vectorText35->Text == "") return false;
				if (vectorText43->Text == "") return false;
				if (vectorText44->Text == "") return false;
				if (vectorText45->Text == "") return false;
			}
		}
		if (pocetVektorov->Value == 5) {
			if (vectorText31->Text == "") return false;
			if (vectorText32->Text == "") return false;
			if (vectorText41->Text == "") return false;
			if (vectorText42->Text == "") return false;
			if (vectorText51->Text == "") return false;
			if (vectorText52->Text == "") return false;
			if (pocetSuradnicVektorov->Value == 3) {
				if (vectorText33->Text == "") return false;
				if (vectorText43->Text == "") return false;
				if (vectorText53->Text == "") return false;
			}
			if (pocetSuradnicVektorov->Value == 4) {
				if (vectorText33->Text == "") return false;
				if (vectorText34->Text == "") return false;
				if (vectorText43->Text == "") return false;
				if (vectorText44->Text == "") return false;
				if (vectorText53->Text == "") return false;
				if (vectorText54->Text == "") return false;
			}
			if (pocetSuradnicVektorov->Value == 5) {
				if (vectorText33->Text == "") return false;
				if (vectorText34->Text == "") return false;
				if (vectorText35->Text == "") return false;
				if (vectorText43->Text == "") return false;
				if (vectorText44->Text == "") return false;
				if (vectorText45->Text == "") return false;
				if (vectorText53->Text == "") return false;
				if (vectorText54->Text == "") return false;
				if (vectorText55->Text == "") return false;
			}
		}

		return true;
	}

	private: Boolean getNulovyRiadok() {
		if (vectorText11->Text == "0" && vectorText12->Text == "0") {
			if (pocetSuradnicVektorov->Value == 2)
				return true;
			if (pocetSuradnicVektorov->Value == 3) {
				if (vectorText13->Text == "0")
					return true;
			}
			if (pocetSuradnicVektorov->Value == 4) {
				if (vectorText13->Text == "0" && vectorText14->Text == "0")
					return true;
			}
			if (pocetSuradnicVektorov->Value == 5) {
				if (vectorText13->Text == "0" && vectorText14->Text == "0" && vectorText15->Text == "0")
					return true;
			}
		}

		if (vectorText21->Text == "0" && vectorText22->Text == "0") {
			if (pocetSuradnicVektorov->Value == 2)
				return true;
			if (pocetSuradnicVektorov->Value == 3) {
				if (vectorText23->Text == "0")
					return true;
			}
			if (pocetSuradnicVektorov->Value == 4) {
				if (vectorText23->Text == "0" && vectorText24->Text == "0")
					return true;
			}
			if (pocetSuradnicVektorov->Value == 5) {
				if (vectorText23->Text == "0" && vectorText24->Text == "0" && vectorText25->Text == "0")
					return true;
			}
		}

		if (vectorText31->Text == "0" && vectorText32->Text == "0") {
			if (pocetSuradnicVektorov->Value == 2)
				return true;
			if (pocetSuradnicVektorov->Value == 3) {
				if (vectorText33->Text == "0")
					return true;
			}
			if (pocetSuradnicVektorov->Value == 4) {
				if (vectorText33->Text == "0" && vectorText34->Text == "0")
					return true;
			}
			if (pocetSuradnicVektorov->Value == 5) {
				if (vectorText33->Text == "0" && vectorText34->Text == "0" && vectorText35->Text == "0")
					return true;
			}
		}

		if (vectorText41->Text == "0" && vectorText42->Text == "0") {
			if (pocetSuradnicVektorov->Value == 2)
				return true;
			if (pocetSuradnicVektorov->Value == 3) {
				if (vectorText43->Text == "0")
					return true;
			}
			if (pocetSuradnicVektorov->Value == 4) {
				if (vectorText43->Text == "0" && vectorText44->Text == "0")
					return true;
			}
			if (pocetSuradnicVektorov->Value == 5) {
				if (vectorText43->Text == "0" && vectorText44->Text == "0" && vectorText45->Text == "0")
					return true;
			}
		}

		if (vectorText51->Text == "0" && vectorText52->Text == "0") {
			if (pocetSuradnicVektorov->Value == 2)
				return true;
			if (pocetSuradnicVektorov->Value == 3) {
				if (vectorText53->Text == "0")
					return true;
			}
			if (pocetSuradnicVektorov->Value == 4) {
				if (vectorText53->Text == "0" && vectorText54->Text == "0")
					return true;
			}
			if (pocetSuradnicVektorov->Value == 5) {
				if (vectorText53->Text == "0" && vectorText54->Text == "0" && vectorText55->Text == "0")
					return true;
			}
		}

		return false;
	}

	private: Boolean getNulovyStlpec() {

		if (vectorText11->Text == "0" && vectorText21->Text == "0") {
			if (pocetVektorov->Value == 2)
				return true;
			if (pocetVektorov->Value == 3) {
				if (vectorText31->Text == "0")
					return true;
			}
			if (pocetVektorov->Value == 4) {
				if (vectorText31->Text == "0" && vectorText41->Text == "0")
					return true;
			}
			if (pocetVektorov->Value == 5) {
				if (vectorText31->Text == "0" && vectorText41->Text == "0" && vectorText51->Text == "0")
					return true;
			}
		}

		if (vectorText12->Text == "0" && vectorText22->Text == "0") {
			if (pocetVektorov->Value == 2)
				return true;
			if (pocetVektorov->Value == 3) {
				if (vectorText32->Text == "0")
					return true;
			}
			if (pocetVektorov->Value == 4) {
				if (vectorText32->Text == "0" && vectorText42->Text == "0")
					return true;
			}
			if (pocetVektorov->Value == 5) {
				if (vectorText32->Text == "0" && vectorText42->Text == "0" && vectorText52->Text == "0")
					return true;
			}
		}

		if (vectorText13->Text == "0" && vectorText23->Text == "0") {
			if (pocetVektorov->Value == 2)
				return true;
			if (pocetVektorov->Value == 3) {
				if (vectorText33->Text == "0")
					return true;
			}
			if (pocetVektorov->Value == 4) {
				if (vectorText33->Text == "0" && vectorText43->Text == "0")
					return true;
			}
			if (pocetVektorov->Value == 5) {
				if (vectorText33->Text == "0" && vectorText43->Text == "0" && vectorText53->Text == "0")
					return true;
			}
		}

		if (vectorText14->Text == "0" && vectorText24->Text == "0") {
			if (pocetVektorov->Value == 2)
				return true;
			if (pocetVektorov->Value == 3) {
				if (vectorText34->Text == "0")
					return true;
			}
			if (pocetVektorov->Value == 4) {
				if (vectorText34->Text == "0" && vectorText44->Text == "0")
					return true;
			}
			if (pocetVektorov->Value == 5) {
				if (vectorText34->Text == "0" && vectorText44->Text == "0" && vectorText54->Text == "0")
					return true;
			}
		}

		if (vectorText15->Text == "0" && vectorText25->Text == "0") {
			if (pocetVektorov->Value == 2)
				return true;
			if (pocetVektorov->Value == 3) {
				if (vectorText35->Text == "0")
					return true;
			}
			if (pocetVektorov->Value == 4) {
				if (vectorText35->Text == "0" && vectorText45->Text == "0")
					return true;
			}
			if (pocetVektorov->Value == 5) {
				if (vectorText35->Text == "0" && vectorText45->Text == "0" && vectorText55->Text == "0")
					return true;
			}
		}



		return false;
	}

		void InitializeComponent(void)
		{
			this->vectorPanel1 = (gcnew System::Windows::Forms::Panel());
			this->vectorLabel15 = (gcnew System::Windows::Forms::Label());
			this->vectorText15 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel14 = (gcnew System::Windows::Forms::Label());
			this->vectorText14 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel13 = (gcnew System::Windows::Forms::Label());
			this->vectorText13 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel12 = (gcnew System::Windows::Forms::Label());
			this->vectorText12 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel11 = (gcnew System::Windows::Forms::Label());
			this->vectorText11 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pocetSuradnicVektorov = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pocetVektorov = (gcnew System::Windows::Forms::NumericUpDown());
			this->LabelFirstAction = (gcnew System::Windows::Forms::Label());
			this->bottomPanel = (gcnew System::Windows::Forms::Panel());
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->clearTaskButton = (gcnew System::Windows::Forms::Button());
			this->exitTaskButton = (gcnew System::Windows::Forms::Button());
			this->vectorPanel2 = (gcnew System::Windows::Forms::Panel());
			this->vectorLabel25 = (gcnew System::Windows::Forms::Label());
			this->vectorText25 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel24 = (gcnew System::Windows::Forms::Label());
			this->vectorText24 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel23 = (gcnew System::Windows::Forms::Label());
			this->vectorText23 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel22 = (gcnew System::Windows::Forms::Label());
			this->vectorText22 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel21 = (gcnew System::Windows::Forms::Label());
			this->vectorText21 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->vectorPanel3 = (gcnew System::Windows::Forms::Panel());
			this->vectorLabel35 = (gcnew System::Windows::Forms::Label());
			this->vectorText35 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel34 = (gcnew System::Windows::Forms::Label());
			this->vectorText34 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel33 = (gcnew System::Windows::Forms::Label());
			this->vectorText33 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel32 = (gcnew System::Windows::Forms::Label());
			this->vectorText32 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel31 = (gcnew System::Windows::Forms::Label());
			this->vectorText31 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->vectorPanel4 = (gcnew System::Windows::Forms::Panel());
			this->vectorLabel45 = (gcnew System::Windows::Forms::Label());
			this->vectorText45 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel44 = (gcnew System::Windows::Forms::Label());
			this->vectorText44 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel43 = (gcnew System::Windows::Forms::Label());
			this->vectorText43 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel42 = (gcnew System::Windows::Forms::Label());
			this->vectorText42 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel41 = (gcnew System::Windows::Forms::Label());
			this->vectorText41 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->vectorPanel5 = (gcnew System::Windows::Forms::Panel());
			this->vectorLabel55 = (gcnew System::Windows::Forms::Label());
			this->vectorText55 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel54 = (gcnew System::Windows::Forms::Label());
			this->vectorText54 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel53 = (gcnew System::Windows::Forms::Label());
			this->vectorText53 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel52 = (gcnew System::Windows::Forms::Label());
			this->vectorText52 = (gcnew System::Windows::Forms::TextBox());
			this->vectorLabel51 = (gcnew System::Windows::Forms::Label());
			this->vectorText51 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->vectorB = (gcnew System::Windows::Forms::Button());
			this->vectorPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetSuradnicVektorov))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetVektorov))->BeginInit();
			this->bottomPanel->SuspendLayout();
			this->vectorPanel2->SuspendLayout();
			this->vectorPanel3->SuspendLayout();
			this->vectorPanel4->SuspendLayout();
			this->vectorPanel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// vectorPanel1
			// 
			this->vectorPanel1->Controls->Add(this->vectorLabel15);
			this->vectorPanel1->Controls->Add(this->vectorText15);
			this->vectorPanel1->Controls->Add(this->vectorLabel14);
			this->vectorPanel1->Controls->Add(this->vectorText14);
			this->vectorPanel1->Controls->Add(this->vectorLabel13);
			this->vectorPanel1->Controls->Add(this->vectorText13);
			this->vectorPanel1->Controls->Add(this->vectorLabel12);
			this->vectorPanel1->Controls->Add(this->vectorText12);
			this->vectorPanel1->Controls->Add(this->vectorLabel11);
			this->vectorPanel1->Controls->Add(this->vectorText11);
			this->vectorPanel1->Controls->Add(this->label4);
			this->vectorPanel1->Location = System::Drawing::Point(123, 136);
			this->vectorPanel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorPanel1->Name = L"vectorPanel1";
			this->vectorPanel1->Size = System::Drawing::Size(466, 45);
			this->vectorPanel1->TabIndex = 2;
			// 
			// vectorLabel15
			// 
			this->vectorLabel15->AutoSize = true;
			this->vectorLabel15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel15->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel15->Location = System::Drawing::Point(434, 3);
			this->vectorLabel15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel15->Name = L"vectorLabel15";
			this->vectorLabel15->Size = System::Drawing::Size(18, 25);
			this->vectorLabel15->TabIndex = 10;
			this->vectorLabel15->Text = L")";
			// 
			// vectorText15
			// 
			this->vectorText15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText15->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText15->Location = System::Drawing::Point(388, 6);
			this->vectorText15->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText15->Name = L"vectorText15";
			this->vectorText15->Size = System::Drawing::Size(38, 29);
			this->vectorText15->TabIndex = 6;
			this->vectorText15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText15_KeyPress);
			this->vectorText15->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText15_Leave);
			// 
			// vectorLabel14
			// 
			this->vectorLabel14->AutoSize = true;
			this->vectorLabel14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel14->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel14->Location = System::Drawing::Point(363, 8);
			this->vectorLabel14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel14->Name = L"vectorLabel14";
			this->vectorLabel14->Size = System::Drawing::Size(16, 25);
			this->vectorLabel14->TabIndex = 8;
			this->vectorLabel14->Text = L";";
			// 
			// vectorText14
			// 
			this->vectorText14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText14->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText14->Location = System::Drawing::Point(320, 6);
			this->vectorText14->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText14->Name = L"vectorText14";
			this->vectorText14->Size = System::Drawing::Size(38, 29);
			this->vectorText14->TabIndex = 5;
			this->vectorText14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText14_KeyPress);
			this->vectorText14->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText14_Leave);
			// 
			// vectorLabel13
			// 
			this->vectorLabel13->AutoSize = true;
			this->vectorLabel13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel13->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel13->Location = System::Drawing::Point(294, 10);
			this->vectorLabel13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel13->Name = L"vectorLabel13";
			this->vectorLabel13->Size = System::Drawing::Size(16, 25);
			this->vectorLabel13->TabIndex = 6;
			this->vectorLabel13->Text = L";";
			// 
			// vectorText13
			// 
			this->vectorText13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText13->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText13->Location = System::Drawing::Point(249, 6);
			this->vectorText13->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText13->Name = L"vectorText13";
			this->vectorText13->Size = System::Drawing::Size(38, 29);
			this->vectorText13->TabIndex = 4;
			this->vectorText13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText13_KeyPress);
			this->vectorText13->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText13_Leave);
			// 
			// vectorLabel12
			// 
			this->vectorLabel12->AutoSize = true;
			this->vectorLabel12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel12->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel12->Location = System::Drawing::Point(224, 8);
			this->vectorLabel12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel12->Name = L"vectorLabel12";
			this->vectorLabel12->Size = System::Drawing::Size(16, 25);
			this->vectorLabel12->TabIndex = 4;
			this->vectorLabel12->Text = L";";
			// 
			// vectorText12
			// 
			this->vectorText12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText12->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText12->Location = System::Drawing::Point(178, 6);
			this->vectorText12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText12->Name = L"vectorText12";
			this->vectorText12->Size = System::Drawing::Size(38, 29);
			this->vectorText12->TabIndex = 3;
			this->vectorText12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText12_KeyPress);
			this->vectorText12->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText12_Leave);
			// 
			// vectorLabel11
			// 
			this->vectorLabel11->AutoSize = true;
			this->vectorLabel11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel11->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel11->Location = System::Drawing::Point(153, 8);
			this->vectorLabel11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel11->Name = L"vectorLabel11";
			this->vectorLabel11->Size = System::Drawing::Size(16, 25);
			this->vectorLabel11->TabIndex = 2;
			this->vectorLabel11->Text = L";";
			// 
			// vectorText11
			// 
			this->vectorText11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText11->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText11->Location = System::Drawing::Point(110, 6);
			this->vectorText11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText11->Name = L"vectorText11";
			this->vectorText11->Size = System::Drawing::Size(38, 29);
			this->vectorText11->TabIndex = 2;
			this->vectorText11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText11_KeyPress);
			this->vectorText11->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText11_Leave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label4->ForeColor = System::Drawing::SystemColors::Window;
			this->label4->Location = System::Drawing::Point(41, 7);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"a1 = (";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->label3->ForeColor = System::Drawing::SystemColors::Window;
			this->label3->Location = System::Drawing::Point(25, 151);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 21);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Vektory:";
			// 
			// pocetSuradnicVektorov
			// 
			this->pocetSuradnicVektorov->AllowDrop = true;
			this->pocetSuradnicVektorov->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->pocetSuradnicVektorov->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pocetSuradnicVektorov->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pocetSuradnicVektorov->ForeColor = System::Drawing::SystemColors::Window;
			this->pocetSuradnicVektorov->Location = System::Drawing::Point(266, 61);
			this->pocetSuradnicVektorov->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pocetSuradnicVektorov->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->pocetSuradnicVektorov->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->pocetSuradnicVektorov->Name = L"pocetSuradnicVektorov";
			this->pocetSuradnicVektorov->ReadOnly = true;
			this->pocetSuradnicVektorov->Size = System::Drawing::Size(66, 29);
			this->pocetSuradnicVektorov->TabIndex = 1;
			this->pocetSuradnicVektorov->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->pocetSuradnicVektorov->ValueChanged += gcnew System::EventHandler(this, &vectorsNewTaskDialog::pocetSuradnicVektorov_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(18, 63);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 21);
			this->label2->TabIndex = 9;
			this->label2->Text = L"2. Zadaj počet súradníc vektorov:";
			// 
			// pocetVektorov
			// 
			this->pocetVektorov->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->pocetVektorov->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pocetVektorov->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pocetVektorov->ForeColor = System::Drawing::SystemColors::Window;
			this->pocetVektorov->Location = System::Drawing::Point(266, 19);
			this->pocetVektorov->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pocetVektorov->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->pocetVektorov->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->pocetVektorov->Name = L"pocetVektorov";
			this->pocetVektorov->ReadOnly = true;
			this->pocetVektorov->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pocetVektorov->Size = System::Drawing::Size(66, 29);
			this->pocetVektorov->TabIndex = 0;
			this->pocetVektorov->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->pocetVektorov->ValueChanged += gcnew System::EventHandler(this, &vectorsNewTaskDialog::pocetVektorov_ValueChanged);
			// 
			// LabelFirstAction
			// 
			this->LabelFirstAction->AutoSize = true;
			this->LabelFirstAction->ForeColor = System::Drawing::SystemColors::Window;
			this->LabelFirstAction->Location = System::Drawing::Point(18, 19);
			this->LabelFirstAction->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelFirstAction->Name = L"LabelFirstAction";
			this->LabelFirstAction->Size = System::Drawing::Size(174, 21);
			this->LabelFirstAction->TabIndex = 7;
			this->LabelFirstAction->Text = L"1. Zadaj počet vektorov:";
			// 
			// bottomPanel
			// 
			this->bottomPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bottomPanel->Controls->Add(this->createButton);
			this->bottomPanel->Controls->Add(this->clearTaskButton);
			this->bottomPanel->Controls->Add(this->exitTaskButton);
			this->bottomPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->bottomPanel->Location = System::Drawing::Point(0, 461);
			this->bottomPanel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bottomPanel->Name = L"bottomPanel";
			this->bottomPanel->Size = System::Drawing::Size(607, 38);
			this->bottomPanel->TabIndex = 13;
			// 
			// createButton
			// 
			this->createButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->createButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->createButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->createButton->ForeColor = System::Drawing::SystemColors::Window;
			this->createButton->Location = System::Drawing::Point(421, -1);
			this->createButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(105, 38);
			this->createButton->TabIndex = 29;
			this->createButton->Text = L"Vytvoriť";
			this->createButton->UseVisualStyleBackColor = false;
			this->createButton->Click += gcnew System::EventHandler(this, &vectorsNewTaskDialog::createButton_Click);
			// 
			// clearTaskButton
			// 
			this->clearTaskButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->clearTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clearTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clearTaskButton->ForeColor = System::Drawing::SystemColors::Window;
			this->clearTaskButton->Location = System::Drawing::Point(244, -1);
			this->clearTaskButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->clearTaskButton->Name = L"clearTaskButton";
			this->clearTaskButton->Size = System::Drawing::Size(105, 38);
			this->clearTaskButton->TabIndex = 28;
			this->clearTaskButton->Text = L"Zmazať";
			this->clearTaskButton->UseVisualStyleBackColor = false;
			this->clearTaskButton->Click += gcnew System::EventHandler(this, &vectorsNewTaskDialog::clearTaskButton_Click);
			// 
			// exitTaskButton
			// 
			this->exitTaskButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->exitTaskButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exitTaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->exitTaskButton->ForeColor = System::Drawing::SystemColors::Window;
			this->exitTaskButton->Location = System::Drawing::Point(76, -1);
			this->exitTaskButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->exitTaskButton->Name = L"exitTaskButton";
			this->exitTaskButton->Size = System::Drawing::Size(105, 38);
			this->exitTaskButton->TabIndex = 27;
			this->exitTaskButton->Text = L"Zrušiť";
			this->exitTaskButton->UseVisualStyleBackColor = false;
			this->exitTaskButton->Click += gcnew System::EventHandler(this, &vectorsNewTaskDialog::exitTaskButton_Click);
			// 
			// vectorPanel2
			// 
			this->vectorPanel2->Controls->Add(this->vectorLabel25);
			this->vectorPanel2->Controls->Add(this->vectorText25);
			this->vectorPanel2->Controls->Add(this->vectorLabel24);
			this->vectorPanel2->Controls->Add(this->vectorText24);
			this->vectorPanel2->Controls->Add(this->vectorLabel23);
			this->vectorPanel2->Controls->Add(this->vectorText23);
			this->vectorPanel2->Controls->Add(this->vectorLabel22);
			this->vectorPanel2->Controls->Add(this->vectorText22);
			this->vectorPanel2->Controls->Add(this->vectorLabel21);
			this->vectorPanel2->Controls->Add(this->vectorText21);
			this->vectorPanel2->Controls->Add(this->label9);
			this->vectorPanel2->Location = System::Drawing::Point(123, 191);
			this->vectorPanel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorPanel2->Name = L"vectorPanel2";
			this->vectorPanel2->Size = System::Drawing::Size(466, 45);
			this->vectorPanel2->TabIndex = 3;
			// 
			// vectorLabel25
			// 
			this->vectorLabel25->AutoSize = true;
			this->vectorLabel25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel25->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel25->Location = System::Drawing::Point(434, 3);
			this->vectorLabel25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel25->Name = L"vectorLabel25";
			this->vectorLabel25->Size = System::Drawing::Size(18, 25);
			this->vectorLabel25->TabIndex = 10;
			this->vectorLabel25->Text = L")";
			// 
			// vectorText25
			// 
			this->vectorText25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText25->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText25->Location = System::Drawing::Point(388, 6);
			this->vectorText25->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText25->Name = L"vectorText25";
			this->vectorText25->Size = System::Drawing::Size(38, 29);
			this->vectorText25->TabIndex = 11;
			this->vectorText25->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText25_KeyPress);
			this->vectorText25->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText25_Leave);
			// 
			// vectorLabel24
			// 
			this->vectorLabel24->AutoSize = true;
			this->vectorLabel24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel24->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel24->Location = System::Drawing::Point(363, 8);
			this->vectorLabel24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel24->Name = L"vectorLabel24";
			this->vectorLabel24->Size = System::Drawing::Size(16, 25);
			this->vectorLabel24->TabIndex = 8;
			this->vectorLabel24->Text = L";";
			// 
			// vectorText24
			// 
			this->vectorText24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText24->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText24->Location = System::Drawing::Point(320, 6);
			this->vectorText24->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText24->Name = L"vectorText24";
			this->vectorText24->Size = System::Drawing::Size(38, 29);
			this->vectorText24->TabIndex = 10;
			this->vectorText24->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText24_KeyPress);
			this->vectorText24->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText24_Leave);
			// 
			// vectorLabel23
			// 
			this->vectorLabel23->AutoSize = true;
			this->vectorLabel23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel23->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel23->Location = System::Drawing::Point(294, 10);
			this->vectorLabel23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel23->Name = L"vectorLabel23";
			this->vectorLabel23->Size = System::Drawing::Size(16, 25);
			this->vectorLabel23->TabIndex = 6;
			this->vectorLabel23->Text = L";";
			// 
			// vectorText23
			// 
			this->vectorText23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText23->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText23->Location = System::Drawing::Point(249, 6);
			this->vectorText23->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText23->Name = L"vectorText23";
			this->vectorText23->Size = System::Drawing::Size(38, 29);
			this->vectorText23->TabIndex = 9;
			this->vectorText23->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText23_KeyPress);
			this->vectorText23->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText23_Leave);
			// 
			// vectorLabel22
			// 
			this->vectorLabel22->AutoSize = true;
			this->vectorLabel22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel22->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel22->Location = System::Drawing::Point(224, 8);
			this->vectorLabel22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel22->Name = L"vectorLabel22";
			this->vectorLabel22->Size = System::Drawing::Size(16, 25);
			this->vectorLabel22->TabIndex = 4;
			this->vectorLabel22->Text = L";";
			// 
			// vectorText22
			// 
			this->vectorText22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText22->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText22->Location = System::Drawing::Point(178, 6);
			this->vectorText22->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText22->Name = L"vectorText22";
			this->vectorText22->Size = System::Drawing::Size(38, 29);
			this->vectorText22->TabIndex = 8;
			this->vectorText22->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText22_KeyPress);
			this->vectorText22->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText22_Leave);
			// 
			// vectorLabel21
			// 
			this->vectorLabel21->AutoSize = true;
			this->vectorLabel21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel21->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel21->Location = System::Drawing::Point(153, 8);
			this->vectorLabel21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel21->Name = L"vectorLabel21";
			this->vectorLabel21->Size = System::Drawing::Size(16, 25);
			this->vectorLabel21->TabIndex = 2;
			this->vectorLabel21->Text = L";";
			// 
			// vectorText21
			// 
			this->vectorText21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText21->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText21->Location = System::Drawing::Point(110, 6);
			this->vectorText21->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText21->Name = L"vectorText21";
			this->vectorText21->Size = System::Drawing::Size(38, 29);
			this->vectorText21->TabIndex = 7;
			this->vectorText21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText21_KeyPress);
			this->vectorText21->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText21_Leave);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label9->ForeColor = System::Drawing::SystemColors::Window;
			this->label9->Location = System::Drawing::Point(41, 8);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 25);
			this->label9->TabIndex = 0;
			this->label9->Text = L"a2 = (";
			// 
			// vectorPanel3
			// 
			this->vectorPanel3->Controls->Add(this->vectorLabel35);
			this->vectorPanel3->Controls->Add(this->vectorText35);
			this->vectorPanel3->Controls->Add(this->vectorLabel34);
			this->vectorPanel3->Controls->Add(this->vectorText34);
			this->vectorPanel3->Controls->Add(this->vectorLabel33);
			this->vectorPanel3->Controls->Add(this->vectorText33);
			this->vectorPanel3->Controls->Add(this->vectorLabel32);
			this->vectorPanel3->Controls->Add(this->vectorText32);
			this->vectorPanel3->Controls->Add(this->vectorLabel31);
			this->vectorPanel3->Controls->Add(this->vectorText31);
			this->vectorPanel3->Controls->Add(this->label15);
			this->vectorPanel3->Location = System::Drawing::Point(123, 246);
			this->vectorPanel3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorPanel3->Name = L"vectorPanel3";
			this->vectorPanel3->Size = System::Drawing::Size(466, 45);
			this->vectorPanel3->TabIndex = 4;
			// 
			// vectorLabel35
			// 
			this->vectorLabel35->AutoSize = true;
			this->vectorLabel35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel35->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel35->Location = System::Drawing::Point(434, 3);
			this->vectorLabel35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel35->Name = L"vectorLabel35";
			this->vectorLabel35->Size = System::Drawing::Size(18, 25);
			this->vectorLabel35->TabIndex = 10;
			this->vectorLabel35->Text = L")";
			// 
			// vectorText35
			// 
			this->vectorText35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText35->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText35->Location = System::Drawing::Point(388, 6);
			this->vectorText35->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText35->Name = L"vectorText35";
			this->vectorText35->Size = System::Drawing::Size(38, 29);
			this->vectorText35->TabIndex = 16;
			this->vectorText35->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText35_KeyPress);
			this->vectorText35->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText35_Leave);
			// 
			// vectorLabel34
			// 
			this->vectorLabel34->AutoSize = true;
			this->vectorLabel34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel34->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel34->Location = System::Drawing::Point(363, 8);
			this->vectorLabel34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel34->Name = L"vectorLabel34";
			this->vectorLabel34->Size = System::Drawing::Size(16, 25);
			this->vectorLabel34->TabIndex = 8;
			this->vectorLabel34->Text = L";";
			// 
			// vectorText34
			// 
			this->vectorText34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText34->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText34->Location = System::Drawing::Point(320, 6);
			this->vectorText34->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText34->Name = L"vectorText34";
			this->vectorText34->Size = System::Drawing::Size(38, 29);
			this->vectorText34->TabIndex = 15;
			this->vectorText34->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText34_KeyPress);
			this->vectorText34->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText34_Leave);
			// 
			// vectorLabel33
			// 
			this->vectorLabel33->AutoSize = true;
			this->vectorLabel33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel33->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel33->Location = System::Drawing::Point(294, 10);
			this->vectorLabel33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel33->Name = L"vectorLabel33";
			this->vectorLabel33->Size = System::Drawing::Size(16, 25);
			this->vectorLabel33->TabIndex = 6;
			this->vectorLabel33->Text = L";";
			// 
			// vectorText33
			// 
			this->vectorText33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText33->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText33->Location = System::Drawing::Point(249, 6);
			this->vectorText33->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText33->Name = L"vectorText33";
			this->vectorText33->Size = System::Drawing::Size(38, 29);
			this->vectorText33->TabIndex = 14;
			this->vectorText33->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText33_KeyPress);
			this->vectorText33->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText33_Leave);
			// 
			// vectorLabel32
			// 
			this->vectorLabel32->AutoSize = true;
			this->vectorLabel32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel32->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel32->Location = System::Drawing::Point(224, 8);
			this->vectorLabel32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel32->Name = L"vectorLabel32";
			this->vectorLabel32->Size = System::Drawing::Size(16, 25);
			this->vectorLabel32->TabIndex = 4;
			this->vectorLabel32->Text = L";";
			// 
			// vectorText32
			// 
			this->vectorText32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText32->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText32->Location = System::Drawing::Point(178, 6);
			this->vectorText32->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText32->Name = L"vectorText32";
			this->vectorText32->Size = System::Drawing::Size(38, 29);
			this->vectorText32->TabIndex = 13;
			this->vectorText32->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText32_KeyPress);
			this->vectorText32->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText32_Leave);
			// 
			// vectorLabel31
			// 
			this->vectorLabel31->AutoSize = true;
			this->vectorLabel31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel31->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel31->Location = System::Drawing::Point(153, 8);
			this->vectorLabel31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel31->Name = L"vectorLabel31";
			this->vectorLabel31->Size = System::Drawing::Size(16, 25);
			this->vectorLabel31->TabIndex = 2;
			this->vectorLabel31->Text = L";";
			// 
			// vectorText31
			// 
			this->vectorText31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText31->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText31->Location = System::Drawing::Point(110, 6);
			this->vectorText31->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText31->Name = L"vectorText31";
			this->vectorText31->Size = System::Drawing::Size(38, 29);
			this->vectorText31->TabIndex = 12;
			this->vectorText31->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText31_KeyPress);
			this->vectorText31->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText31_Leave);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label15->ForeColor = System::Drawing::SystemColors::Window;
			this->label15->Location = System::Drawing::Point(41, 7);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 25);
			this->label15->TabIndex = 0;
			this->label15->Text = L"a3 = (";
			// 
			// vectorPanel4
			// 
			this->vectorPanel4->Controls->Add(this->vectorLabel45);
			this->vectorPanel4->Controls->Add(this->vectorText45);
			this->vectorPanel4->Controls->Add(this->vectorLabel44);
			this->vectorPanel4->Controls->Add(this->vectorText44);
			this->vectorPanel4->Controls->Add(this->vectorLabel43);
			this->vectorPanel4->Controls->Add(this->vectorText43);
			this->vectorPanel4->Controls->Add(this->vectorLabel42);
			this->vectorPanel4->Controls->Add(this->vectorText42);
			this->vectorPanel4->Controls->Add(this->vectorLabel41);
			this->vectorPanel4->Controls->Add(this->vectorText41);
			this->vectorPanel4->Controls->Add(this->label21);
			this->vectorPanel4->Location = System::Drawing::Point(123, 301);
			this->vectorPanel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorPanel4->Name = L"vectorPanel4";
			this->vectorPanel4->Size = System::Drawing::Size(466, 45);
			this->vectorPanel4->TabIndex = 5;
			// 
			// vectorLabel45
			// 
			this->vectorLabel45->AutoSize = true;
			this->vectorLabel45->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel45->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel45->Location = System::Drawing::Point(434, 3);
			this->vectorLabel45->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel45->Name = L"vectorLabel45";
			this->vectorLabel45->Size = System::Drawing::Size(18, 25);
			this->vectorLabel45->TabIndex = 10;
			this->vectorLabel45->Text = L")";
			// 
			// vectorText45
			// 
			this->vectorText45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText45->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText45->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText45->Location = System::Drawing::Point(388, 6);
			this->vectorText45->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText45->Name = L"vectorText45";
			this->vectorText45->Size = System::Drawing::Size(38, 29);
			this->vectorText45->TabIndex = 21;
			this->vectorText45->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText45_KeyPress);
			this->vectorText45->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText45_Leave);
			// 
			// vectorLabel44
			// 
			this->vectorLabel44->AutoSize = true;
			this->vectorLabel44->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel44->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel44->Location = System::Drawing::Point(363, 8);
			this->vectorLabel44->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel44->Name = L"vectorLabel44";
			this->vectorLabel44->Size = System::Drawing::Size(16, 25);
			this->vectorLabel44->TabIndex = 8;
			this->vectorLabel44->Text = L";";
			// 
			// vectorText44
			// 
			this->vectorText44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText44->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText44->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText44->Location = System::Drawing::Point(320, 6);
			this->vectorText44->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText44->Name = L"vectorText44";
			this->vectorText44->Size = System::Drawing::Size(38, 29);
			this->vectorText44->TabIndex = 20;
			this->vectorText44->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText44_KeyPress);
			this->vectorText44->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText44_Leave);
			// 
			// vectorLabel43
			// 
			this->vectorLabel43->AutoSize = true;
			this->vectorLabel43->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel43->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel43->Location = System::Drawing::Point(294, 10);
			this->vectorLabel43->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel43->Name = L"vectorLabel43";
			this->vectorLabel43->Size = System::Drawing::Size(16, 25);
			this->vectorLabel43->TabIndex = 6;
			this->vectorLabel43->Text = L";";
			// 
			// vectorText43
			// 
			this->vectorText43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText43->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText43->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText43->Location = System::Drawing::Point(249, 6);
			this->vectorText43->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText43->Name = L"vectorText43";
			this->vectorText43->Size = System::Drawing::Size(38, 29);
			this->vectorText43->TabIndex = 19;
			this->vectorText43->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText43_KeyPress);
			this->vectorText43->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText43_Leave);
			// 
			// vectorLabel42
			// 
			this->vectorLabel42->AutoSize = true;
			this->vectorLabel42->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel42->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel42->Location = System::Drawing::Point(224, 8);
			this->vectorLabel42->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel42->Name = L"vectorLabel42";
			this->vectorLabel42->Size = System::Drawing::Size(16, 25);
			this->vectorLabel42->TabIndex = 4;
			this->vectorLabel42->Text = L";";
			// 
			// vectorText42
			// 
			this->vectorText42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText42->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText42->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText42->Location = System::Drawing::Point(178, 6);
			this->vectorText42->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText42->Name = L"vectorText42";
			this->vectorText42->Size = System::Drawing::Size(38, 29);
			this->vectorText42->TabIndex = 18;
			this->vectorText42->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText42_KeyPress);
			this->vectorText42->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText42_Leave);
			// 
			// vectorLabel41
			// 
			this->vectorLabel41->AutoSize = true;
			this->vectorLabel41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel41->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel41->Location = System::Drawing::Point(153, 8);
			this->vectorLabel41->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel41->Name = L"vectorLabel41";
			this->vectorLabel41->Size = System::Drawing::Size(16, 25);
			this->vectorLabel41->TabIndex = 2;
			this->vectorLabel41->Text = L";";
			// 
			// vectorText41
			// 
			this->vectorText41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText41->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText41->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText41->Location = System::Drawing::Point(110, 6);
			this->vectorText41->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText41->Name = L"vectorText41";
			this->vectorText41->Size = System::Drawing::Size(38, 29);
			this->vectorText41->TabIndex = 17;
			this->vectorText41->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText41_KeyPress);
			this->vectorText41->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText41_Leave);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label21->ForeColor = System::Drawing::SystemColors::Window;
			this->label21->Location = System::Drawing::Point(41, 6);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(61, 25);
			this->label21->TabIndex = 0;
			this->label21->Text = L"a4 = (";
			// 
			// vectorPanel5
			// 
			this->vectorPanel5->Controls->Add(this->vectorLabel55);
			this->vectorPanel5->Controls->Add(this->vectorText55);
			this->vectorPanel5->Controls->Add(this->vectorLabel54);
			this->vectorPanel5->Controls->Add(this->vectorText54);
			this->vectorPanel5->Controls->Add(this->vectorLabel53);
			this->vectorPanel5->Controls->Add(this->vectorText53);
			this->vectorPanel5->Controls->Add(this->vectorLabel52);
			this->vectorPanel5->Controls->Add(this->vectorText52);
			this->vectorPanel5->Controls->Add(this->vectorLabel51);
			this->vectorPanel5->Controls->Add(this->vectorText51);
			this->vectorPanel5->Controls->Add(this->label27);
			this->vectorPanel5->Location = System::Drawing::Point(123, 356);
			this->vectorPanel5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorPanel5->Name = L"vectorPanel5";
			this->vectorPanel5->Size = System::Drawing::Size(466, 45);
			this->vectorPanel5->TabIndex = 6;
			// 
			// vectorLabel55
			// 
			this->vectorLabel55->AutoSize = true;
			this->vectorLabel55->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel55->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel55->Location = System::Drawing::Point(434, 3);
			this->vectorLabel55->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel55->Name = L"vectorLabel55";
			this->vectorLabel55->Size = System::Drawing::Size(18, 25);
			this->vectorLabel55->TabIndex = 10;
			this->vectorLabel55->Text = L")";
			// 
			// vectorText55
			// 
			this->vectorText55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText55->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText55->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText55->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText55->Location = System::Drawing::Point(388, 6);
			this->vectorText55->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText55->Name = L"vectorText55";
			this->vectorText55->Size = System::Drawing::Size(38, 29);
			this->vectorText55->TabIndex = 26;
			this->vectorText55->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText55_KeyPress);
			this->vectorText55->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText55_Leave);
			// 
			// vectorLabel54
			// 
			this->vectorLabel54->AutoSize = true;
			this->vectorLabel54->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel54->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel54->Location = System::Drawing::Point(363, 8);
			this->vectorLabel54->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel54->Name = L"vectorLabel54";
			this->vectorLabel54->Size = System::Drawing::Size(16, 25);
			this->vectorLabel54->TabIndex = 8;
			this->vectorLabel54->Text = L";";
			// 
			// vectorText54
			// 
			this->vectorText54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText54->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText54->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText54->Location = System::Drawing::Point(320, 6);
			this->vectorText54->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText54->Name = L"vectorText54";
			this->vectorText54->Size = System::Drawing::Size(38, 29);
			this->vectorText54->TabIndex = 25;
			this->vectorText54->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText54_KeyPress);
			this->vectorText54->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText54_Leave);
			// 
			// vectorLabel53
			// 
			this->vectorLabel53->AutoSize = true;
			this->vectorLabel53->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel53->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel53->Location = System::Drawing::Point(294, 10);
			this->vectorLabel53->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel53->Name = L"vectorLabel53";
			this->vectorLabel53->Size = System::Drawing::Size(16, 25);
			this->vectorLabel53->TabIndex = 6;
			this->vectorLabel53->Text = L";";
			// 
			// vectorText53
			// 
			this->vectorText53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText53->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText53->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText53->Location = System::Drawing::Point(249, 6);
			this->vectorText53->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText53->Name = L"vectorText53";
			this->vectorText53->Size = System::Drawing::Size(38, 29);
			this->vectorText53->TabIndex = 24;
			this->vectorText53->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText53_KeyPress);
			this->vectorText53->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText53_Leave);
			// 
			// vectorLabel52
			// 
			this->vectorLabel52->AutoSize = true;
			this->vectorLabel52->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel52->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel52->Location = System::Drawing::Point(224, 8);
			this->vectorLabel52->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel52->Name = L"vectorLabel52";
			this->vectorLabel52->Size = System::Drawing::Size(16, 25);
			this->vectorLabel52->TabIndex = 4;
			this->vectorLabel52->Text = L";";
			// 
			// vectorText52
			// 
			this->vectorText52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText52->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText52->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText52->Location = System::Drawing::Point(178, 6);
			this->vectorText52->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText52->Name = L"vectorText52";
			this->vectorText52->Size = System::Drawing::Size(38, 29);
			this->vectorText52->TabIndex = 23;
			this->vectorText52->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText52_KeyPress);
			this->vectorText52->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText52_Leave);
			// 
			// vectorLabel51
			// 
			this->vectorLabel51->AutoSize = true;
			this->vectorLabel51->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->vectorLabel51->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorLabel51->Location = System::Drawing::Point(153, 8);
			this->vectorLabel51->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->vectorLabel51->Name = L"vectorLabel51";
			this->vectorLabel51->Size = System::Drawing::Size(16, 25);
			this->vectorLabel51->TabIndex = 2;
			this->vectorLabel51->Text = L";";
			// 
			// vectorText51
			// 
			this->vectorText51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->vectorText51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vectorText51->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorText51->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorText51->Location = System::Drawing::Point(110, 6);
			this->vectorText51->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorText51->Name = L"vectorText51";
			this->vectorText51->Size = System::Drawing::Size(38, 29);
			this->vectorText51->TabIndex = 22;
			this->vectorText51->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &vectorsNewTaskDialog::vectorText51_KeyPress);
			this->vectorText51->Leave += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorText51_Leave);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label27->ForeColor = System::Drawing::SystemColors::Window;
			this->label27->Location = System::Drawing::Point(41, 6);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(61, 25);
			this->label27->TabIndex = 0;
			this->label27->Text = L"a5 = (";
			// 
			// vectorB
			// 
			this->vectorB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->vectorB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vectorB->Enabled = false;
			this->vectorB->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->vectorB->ForeColor = System::Drawing::SystemColors::Window;
			this->vectorB->Location = System::Drawing::Point(166, 411);
			this->vectorB->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->vectorB->Name = L"vectorB";
			this->vectorB->Size = System::Drawing::Size(148, 38);
			this->vectorB->TabIndex = 28;
			this->vectorB->Text = L"Pridať vektor b";
			this->vectorB->UseVisualStyleBackColor = false;
			this->vectorB->Click += gcnew System::EventHandler(this, &vectorsNewTaskDialog::vectorB_Click);
			// 
			// vectorsNewTaskDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(607, 499);
			this->Controls->Add(this->vectorB);
			this->Controls->Add(this->vectorPanel5);
			this->Controls->Add(this->vectorPanel4);
			this->Controls->Add(this->vectorPanel3);
			this->Controls->Add(this->vectorPanel2);
			this->Controls->Add(this->bottomPanel);
			this->Controls->Add(this->vectorPanel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pocetSuradnicVektorov);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pocetVektorov);
			this->Controls->Add(this->LabelFirstAction);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"vectorsNewTaskDialog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Nová úloha";
			this->vectorPanel1->ResumeLayout(false);
			this->vectorPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetSuradnicVektorov))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetVektorov))->EndInit();
			this->bottomPanel->ResumeLayout(false);
			this->vectorPanel2->ResumeLayout(false);
			this->vectorPanel2->PerformLayout();
			this->vectorPanel3->ResumeLayout(false);
			this->vectorPanel3->PerformLayout();
			this->vectorPanel4->ResumeLayout(false);
			this->vectorPanel4->PerformLayout();
			this->vectorPanel5->ResumeLayout(false);
			this->vectorPanel5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pocetSuradnicVektorov_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		if (this->pocetSuradnicVektorov->Value == 2) {
			this->vectorText13->Hide();
			this->vectorText23->Hide();
			this->vectorText33->Hide();
			this->vectorText43->Hide();
			this->vectorText53->Hide();
			this->vectorText14->Hide();
			this->vectorText24->Hide();
			this->vectorText34->Hide();
			this->vectorText44->Hide();
			this->vectorText54->Hide();
			this->vectorText15->Hide();
			this->vectorText25->Hide();
			this->vectorText35->Hide();
			this->vectorText45->Hide();
			this->vectorText55->Hide();

			this->vectorLabel13->Hide();
			this->vectorLabel23->Hide();
			this->vectorLabel33->Hide();
			this->vectorLabel43->Hide();
			this->vectorLabel53->Hide();
			this->vectorLabel14->Hide();
			this->vectorLabel24->Hide();
			this->vectorLabel34->Hide();
			this->vectorLabel44->Hide();
			this->vectorLabel54->Hide();
			this->vectorLabel15->Hide();
			this->vectorLabel25->Hide();
			this->vectorLabel35->Hide();
			this->vectorLabel45->Hide();
			this->vectorLabel55->Hide();

			this->vectorLabel12->Text = ")";
			this->vectorLabel22->Text = ")";
			this->vectorLabel32->Text = ")";
			this->vectorLabel42->Text = ")";
			this->vectorLabel52->Text = ")";


		}

		if (this->pocetSuradnicVektorov->Value == 3) {
			this->vectorText13->Show();
			this->vectorText23->Show();
			this->vectorText33->Show();
			this->vectorText43->Show();
			this->vectorText53->Show();
			this->vectorText14->Hide();
			this->vectorText24->Hide();
			this->vectorText34->Hide();
			this->vectorText44->Hide();
			this->vectorText54->Hide();
			this->vectorText15->Hide();
			this->vectorText25->Hide();
			this->vectorText35->Hide();
			this->vectorText45->Hide();
			this->vectorText55->Hide();

			this->vectorLabel13->Show();
			this->vectorLabel23->Show();
			this->vectorLabel33->Show();
			this->vectorLabel43->Show();
			this->vectorLabel53->Show();
			this->vectorLabel14->Hide();
			this->vectorLabel24->Hide();
			this->vectorLabel34->Hide();
			this->vectorLabel44->Hide();
			this->vectorLabel54->Hide();
			this->vectorLabel15->Hide();
			this->vectorLabel25->Hide();
			this->vectorLabel35->Hide();
			this->vectorLabel45->Hide();
			this->vectorLabel55->Hide();

			this->vectorLabel12->Text = ";";
			this->vectorLabel22->Text = ";";
			this->vectorLabel32->Text = ";";
			this->vectorLabel42->Text = ";";
			this->vectorLabel52->Text = ";";

			this->vectorLabel13->Text = ")";
			this->vectorLabel23->Text = ")";
			this->vectorLabel33->Text = ")";
			this->vectorLabel43->Text = ")";
			this->vectorLabel53->Text = ")";

		}

		if (this->pocetSuradnicVektorov->Value == 4) {
			this->vectorText13->Show();
			this->vectorText23->Show();
			this->vectorText33->Show();
			this->vectorText43->Show();
			this->vectorText53->Show();
			this->vectorText14->Show();
			this->vectorText24->Show();
			this->vectorText34->Show();
			this->vectorText44->Show();
			this->vectorText54->Show();
			this->vectorText15->Hide();
			this->vectorText25->Hide();
			this->vectorText35->Hide();
			this->vectorText45->Hide();
			this->vectorText55->Hide();

			this->vectorLabel13->Show();
			this->vectorLabel23->Show();
			this->vectorLabel33->Show();
			this->vectorLabel43->Show();
			this->vectorLabel53->Show();
			this->vectorLabel14->Show();
			this->vectorLabel24->Show();
			this->vectorLabel34->Show();
			this->vectorLabel44->Show();
			this->vectorLabel54->Show();
			this->vectorLabel15->Hide();
			this->vectorLabel25->Hide();
			this->vectorLabel35->Hide();
			this->vectorLabel45->Hide();
			this->vectorLabel55->Hide();

			this->vectorLabel12->Text = ";";
			this->vectorLabel22->Text = ";";
			this->vectorLabel32->Text = ";";
			this->vectorLabel42->Text = ";";
			this->vectorLabel52->Text = ";";

			this->vectorLabel13->Text = ";";
			this->vectorLabel23->Text = ";";
			this->vectorLabel33->Text = ";";
			this->vectorLabel43->Text = ";";
			this->vectorLabel53->Text = ";";

			this->vectorLabel14->Text = ")";
			this->vectorLabel24->Text = ")";
			this->vectorLabel34->Text = ")";
			this->vectorLabel44->Text = ")";
			this->vectorLabel54->Text = ")";

		}

		if (this->pocetSuradnicVektorov->Value == 5) {
			this->vectorText13->Show();
			this->vectorText23->Show();
			this->vectorText33->Show();
			this->vectorText43->Show();
			this->vectorText53->Show();
			this->vectorText14->Show();
			this->vectorText24->Show();
			this->vectorText34->Show();
			this->vectorText44->Show();
			this->vectorText54->Show();
			this->vectorText15->Show();
			this->vectorText25->Show();
			this->vectorText35->Show();
			this->vectorText45->Show();
			this->vectorText55->Show();

			this->vectorLabel13->Show();
			this->vectorLabel23->Show();
			this->vectorLabel33->Show();
			this->vectorLabel43->Show();
			this->vectorLabel53->Show();
			this->vectorLabel14->Show();
			this->vectorLabel24->Show();
			this->vectorLabel34->Show();
			this->vectorLabel44->Show();
			this->vectorLabel54->Show();
			this->vectorLabel15->Show();
			this->vectorLabel25->Show();
			this->vectorLabel35->Show();
			this->vectorLabel45->Show();
			this->vectorLabel55->Show();

			this->vectorLabel12->Text = ";";
			this->vectorLabel22->Text = ";";
			this->vectorLabel32->Text = ";";
			this->vectorLabel42->Text = ";";
			this->vectorLabel52->Text = ";";

			this->vectorLabel13->Text = ";";
			this->vectorLabel23->Text = ";";
			this->vectorLabel33->Text = ";";
			this->vectorLabel43->Text = ";";
			this->vectorLabel53->Text = ";";

			this->vectorLabel14->Text = ";";
			this->vectorLabel24->Text = ";";
			this->vectorLabel34->Text = ";";
			this->vectorLabel44->Text = ";";
			this->vectorLabel54->Text = ";";

			this->vectorLabel15->Text = ")";
			this->vectorLabel25->Text = ")";
			this->vectorLabel35->Text = ")";
			this->vectorLabel45->Text = ")";
			this->vectorLabel55->Text = ")";

		}
	}
private: System::Void exitTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
	created = false;
	Form::Close();
}
private: System::Void pocetVektorov_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	if (this->pocetVektorov->Value == 2) {
		this->vectorPanel3->Hide();
		this->vectorPanel4->Hide();
		this->vectorPanel5->Hide();

		this->vectorB->Enabled = true;
		this->vectorB->Location = System::Drawing::Point(148, 246);
	}
	if (this->pocetVektorov->Value == 3) {
		this->vectorPanel3->Show();
		this->vectorPanel4->Hide();
		this->vectorPanel5->Hide();

		this->vectorB->Enabled = true;
		this->vectorB->Location = System::Drawing::Point(148, 301);

		if (vB == 1) {
			label15->Text = "b = (";
		}
	}
	if (this->pocetVektorov->Value == 4) {
		this->vectorPanel3->Show();
		this->vectorPanel4->Show();
		this->vectorPanel5->Hide();

		this->vectorB->Enabled = true;
		this->vectorB->Location = System::Drawing::Point(148, 356);

		if (vB == 1) {
			label21->Text = "b = (";
		}
	}
	if (this->pocetVektorov->Value == 5) {
		this->vectorPanel3->Show();
		this->vectorPanel4->Show();
		this->vectorPanel5->Show();

		this->vectorB->Enabled = false;
		this->vectorB->Location = System::Drawing::Point(148, 411);

		if (vB == 1) {
			label27->Text = "b = (";
		}
	}

}
private: System::Void clearTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->vectorText11->Text = "";
	this->vectorText12->Text = "";
	this->vectorText13->Text = "";
	this->vectorText14->Text = "";
	this->vectorText15->Text = "";

	this->vectorText21->Text = "";
	this->vectorText22->Text = "";
	this->vectorText23->Text = "";
	this->vectorText24->Text = "";
	this->vectorText25->Text = "";

	this->vectorText31->Text = "";
	this->vectorText32->Text = "";
	this->vectorText33->Text = "";
	this->vectorText34->Text = "";
	this->vectorText35->Text = "";

	this->vectorText41->Text = "";
	this->vectorText42->Text = "";
	this->vectorText43->Text = "";
	this->vectorText44->Text = "";
	this->vectorText45->Text = "";

	this->vectorText51->Text = "";
	this->vectorText52->Text = "";
	this->vectorText53->Text = "";
	this->vectorText54->Text = "";
	this->vectorText55->Text = "";

	vB = 0;
	pocetVektorov->Enabled = true;
	if(pocetVektorov->Value < 5)
		vectorB->Enabled = true;
	label15->Text = "a3 = (";
	label21->Text = "a4 = (";
	label27->Text = "a5 = (";

}

private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {
	created = true;

	// zisti ci su vsetky hodnoty vyplnene
	if (getVsetkyVyplnene()) {
		if (!getNulovyRiadok() && !getNulovyStlpec()) {
			Form::Close();
		}
		else {
			MessageBox::Show("V linearnom priestore nesmie byt nulovy riadok alebo stlpec !", "Chybny vstup !", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	else {
		MessageBox::Show("Vypln vsetky zlozky vsetkych vektorov !", "Chybajuce hodnoty !", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	
}
private: System::Void vectorB_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (pocetVektorov->Value < 5 - vB) {
		vB = 1;
		pocetVektorov->Value++;
		pocetVektorov->Enabled = false;
		vectorB->Enabled = false;
	}
}

#pragma region vector_text_key_press

private: System::Void vectorText11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText11->Text->Contains(",") && !this->vectorText11->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText11->Text->Contains("-"))) {
		e->Handled = true;
		vectorText11->Text = "-";
		vectorText11->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 ) {
			e->Handled = true;
	}

}


private: System::Void vectorText12_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText12->Text->Contains(",") && !this->vectorText12->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText12->Text->Contains("-"))) {
		e->Handled = true;
		vectorText12->Text = "-";
		vectorText12->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
	}
}
private: System::Void vectorText13_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText13->Text->Contains(",") && !this->vectorText13->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText13->Text->Contains("-"))) {
		e->Handled = true;
		vectorText13->Text = "-";
		vectorText13->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
	}
}
private: System::Void vectorText14_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText14->Text->Contains(",") && !this->vectorText14->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText14->Text->Contains("-"))) {
		e->Handled = true;
		vectorText14->Text = "-";
		vectorText14->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText15_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText15->Text->Contains(",") && !this->vectorText15->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText15->Text->Contains("-"))) {
		e->Handled = true;
		vectorText15->Text = "-";
		vectorText15->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText21_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText21->Text->Contains(",") && !this->vectorText21->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText21->Text->Contains("-"))) {
		e->Handled = true;
		vectorText21->Text = "-";
		vectorText21->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText22_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText22->Text->Contains(",") && !this->vectorText22->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText22->Text->Contains("-"))) {
		e->Handled = true;
		vectorText22->Text = "-";
		vectorText22->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText23_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText23->Text->Contains(",") && !this->vectorText23->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText23->Text->Contains("-"))) {
		e->Handled = true;
		vectorText23->Text = "-";
		vectorText23->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText24_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText24->Text->Contains(",") && !this->vectorText24->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText24->Text->Contains("-"))) {
		e->Handled = true;
		vectorText24->Text = "-";
		vectorText24->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText25_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText25->Text->Contains(",") && !this->vectorText25->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText25->Text->Contains("-"))) {
		e->Handled = true;
		vectorText25->Text = "-";
		vectorText25->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}

private: System::Void vectorText31_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText31->Text->Contains(",") && !this->vectorText31->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText31->Text->Contains("-"))) {
		e->Handled = true;
		vectorText31->Text = "-";
		vectorText31->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText32_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText32->Text->Contains(",") && !this->vectorText32->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText32->Text->Contains("-"))) {
		e->Handled = true;
		vectorText32->Text = "-";
		vectorText32->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText33_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText33->Text->Contains(",") && !this->vectorText33->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText33->Text->Contains("-"))) {
		e->Handled = true;
		vectorText33->Text = "-";
		vectorText33->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText34_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText34->Text->Contains(",") && !this->vectorText34->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText34->Text->Contains("-"))) {
		e->Handled = true;
		vectorText34->Text = "-";
		vectorText34->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText35_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText35->Text->Contains(",") && !this->vectorText35->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText35->Text->Contains("-"))) {
		e->Handled = true;
		vectorText35->Text = "-";
		vectorText35->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText41_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText41->Text->Contains(",") && !this->vectorText41->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText41->Text->Contains("-"))) {
		e->Handled = true;
		vectorText41->Text = "-";
		vectorText41->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText42_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText42->Text->Contains(",") && !this->vectorText42->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText42->Text->Contains("-"))) {
		e->Handled = true;
		vectorText42->Text = "-";
		vectorText42->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText43_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText43->Text->Contains(",") && !this->vectorText43->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText43->Text->Contains("-"))) {
		e->Handled = true;
		vectorText43->Text = "-";
		vectorText43->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText44_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText44->Text->Contains(",") && !this->vectorText44->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText44->Text->Contains("-"))) {
		e->Handled = true;
		vectorText44->Text = "-";
		vectorText44->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText45_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText45->Text->Contains(",") && !this->vectorText45->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText45->Text->Contains("-"))) {
		e->Handled = true;
		vectorText45->Text = "-";
		vectorText45->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText51_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText51->Text->Contains(",") && !this->vectorText51->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText51->Text->Contains("-"))) {
		e->Handled = true;
		vectorText51->Text = "-";
		vectorText51->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText52_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText52->Text->Contains(",") && !this->vectorText52->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText52->Text->Contains("-"))) {
		e->Handled = true;
		vectorText52->Text = "-";
		vectorText52->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText53_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText53->Text->Contains(",") && !this->vectorText53->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText53->Text->Contains("-"))) {
		e->Handled = true;
		vectorText53->Text = "-";
		vectorText53->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText54_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText54->Text->Contains(",") && !this->vectorText54->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText54->Text->Contains("-"))) {
		e->Handled = true;
		vectorText54->Text = "-";
		vectorText54->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void vectorText55_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == ',') {
		if (this->vectorText55->Text->Contains(",") && !this->vectorText55->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->vectorText55->Text->Contains("-"))) {
		e->Handled = true;
		vectorText55->Text = "-";
		vectorText55->SelectionStart = 1;
	}
	// Accept only digits ",", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}

private: System::Void vectorText11_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText11->Text);
		vectorText11->Text = number.ToString();
	}
	catch (...) {
		vectorText11->Text = "";
	}
}
private: System::Void vectorText12_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText12->Text);
		vectorText12->Text = number.ToString();
	}
	catch (...) {
		vectorText12->Text = "";
	}
}
private: System::Void vectorText13_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText13->Text);
		vectorText13->Text = number.ToString();
	}
	catch (...) {
		vectorText13->Text = "";
	}
}
private: System::Void vectorText14_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText14->Text);
		vectorText14->Text = number.ToString();
	}
	catch (...) {
		vectorText14->Text = "";
	}
}
private: System::Void vectorText15_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText15->Text);
		vectorText15->Text = number.ToString();
	}
	catch (...) {
		vectorText15->Text = "";
	}
}
private: System::Void vectorText21_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText21->Text);
		vectorText21->Text = number.ToString();
	}
	catch (...) {
		vectorText21->Text = "";
	}
}
private: System::Void vectorText22_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText22->Text);
		vectorText22->Text = number.ToString();
	}
	catch (...) {
		vectorText22->Text = "";
	}
}
private: System::Void vectorText23_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText23->Text);
		vectorText23->Text = number.ToString();
	}
	catch (...) {
		vectorText23->Text = "";
	}
}
private: System::Void vectorText24_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText24->Text);
		vectorText24->Text = number.ToString();
	}
	catch (...) {
		vectorText24->Text = "";
	}
}
private: System::Void vectorText25_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText25->Text);
		vectorText25->Text = number.ToString();
	}
	catch (...) {
		vectorText25->Text = "";
	}
}
private: System::Void vectorText31_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText31->Text);
		vectorText31->Text = number.ToString();
	}
	catch (...) {
		vectorText31->Text = "";
	}
}
private: System::Void vectorText32_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText32->Text);
		vectorText32->Text = number.ToString();
	}
	catch (...) {
		vectorText32->Text = "";
	}
}
private: System::Void vectorText33_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText33->Text);
		vectorText33->Text = number.ToString();
	}
	catch (...) {
		vectorText33->Text = "";
	}
}
private: System::Void vectorText34_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText34->Text);
		vectorText34->Text = number.ToString();
	}
	catch (...) {
		vectorText34->Text = "";
	}
}
private: System::Void vectorText35_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText35->Text);
		vectorText35->Text = number.ToString();
	}
	catch (...) {
		vectorText35->Text = "";
	}
}
private: System::Void vectorText41_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText41->Text);
		vectorText41->Text = number.ToString();
	}
	catch (...) {
		vectorText41->Text = "";
	}
}
private: System::Void vectorText42_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText42->Text);
		vectorText42->Text = number.ToString();
	}
	catch (...) {
		vectorText42->Text = "";
	}
}
private: System::Void vectorText43_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText43->Text);
		vectorText43->Text = number.ToString();
	}
	catch (...) {
		vectorText43->Text = "";
	}
}
private: System::Void vectorText44_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText44->Text);
		vectorText44->Text = number.ToString();
	}
	catch (...) {
		vectorText44->Text = "";
	}
}
private: System::Void vectorText45_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText45->Text);
		vectorText45->Text = number.ToString();
	}
	catch (...) {
		vectorText45->Text = "";
	}
}
private: System::Void vectorText51_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText51->Text);
		vectorText51->Text = number.ToString();
	}
	catch (...) {
		vectorText51->Text = "";
	}
}
private: System::Void vectorText52_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText52->Text);
		vectorText52->Text = number.ToString();
	}
	catch (...) {
		vectorText52->Text = "";
	}
}
private: System::Void vectorText53_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText53->Text);
		vectorText53->Text = number.ToString();
	}
	catch (...) {
		vectorText53->Text = "";
	}
}
private: System::Void vectorText54_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText54->Text);
		vectorText54->Text = number.ToString();
	}
	catch (...) {
		vectorText54->Text = "";
	}
}
private: System::Void vectorText55_Leave(System::Object^ sender, System::EventArgs^ e) {
	try {
		double number = System::Convert::ToDouble(vectorText55->Text);
		vectorText55->Text = number.ToString();
	}
	catch (...) {
		vectorText55->Text = "";
	}
}
#pragma endregion
};
}
