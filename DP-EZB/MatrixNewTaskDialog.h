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
	/// Summary for MatrixNewTaskDialog
	/// </summary>
	public ref class matrixNewTaskDialog : public System::Windows::Forms::Form
	{
	public:
		matrixNewTaskDialog(void)
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
		~matrixNewTaskDialog()
		{
			if (components)
			{
				delete components;
			}
		}
			private: System::Windows::Forms::Panel^ matrixPanel1;
			protected:

			protected:

			private: System::Windows::Forms::TextBox^ matrixText15;

			private: System::Windows::Forms::TextBox^ matrixText14;

			private: System::Windows::Forms::TextBox^ matrixText13;

			private: System::Windows::Forms::TextBox^ matrixText12;

			private: System::Windows::Forms::TextBox^ matrixText11;

			public: System::Windows::Forms::Label^ label3;
			public: System::Windows::Forms::NumericUpDown^ pocetStlpcov;
			public: System::Windows::Forms::Label^ label2;
			private: System::Windows::Forms::NumericUpDown^ pocetRiadkov;
			public: System::Windows::Forms::Label^ LabelFirstAction;
			private: System::Windows::Forms::Panel^ bottomPanel;


			private: System::Windows::Forms::Button^ clearTaskButton;
			private: System::Windows::Forms::Button^ createButton;
			private: System::Windows::Forms::Panel^ matrixPanel2;



			private: System::Windows::Forms::TextBox^ matrixText25;



			private: System::Windows::Forms::TextBox^ matrixText24;



			private: System::Windows::Forms::TextBox^ matrixText23;



			private: System::Windows::Forms::TextBox^ matrixText22;



			private: System::Windows::Forms::TextBox^ matrixText21;


			private: System::Windows::Forms::Panel^ matrixPanel3;



			private: System::Windows::Forms::TextBox^ matrixText35;



			private: System::Windows::Forms::TextBox^ matrixText34;



			private: System::Windows::Forms::TextBox^ matrixText33;



			private: System::Windows::Forms::TextBox^ matrixText32;



			private: System::Windows::Forms::TextBox^ matrixText31;


			private: System::Windows::Forms::Panel^ matrixPanel4;



			private: System::Windows::Forms::TextBox^ matrixText45;



			private: System::Windows::Forms::TextBox^ matrixText44;



			private: System::Windows::Forms::TextBox^ matrixText43;



			private: System::Windows::Forms::TextBox^ matrixText42;



			private: System::Windows::Forms::TextBox^ matrixText41;


			private: System::Windows::Forms::Panel^ matrixPanel5;



			private: System::Windows::Forms::TextBox^ matrixText55;



			private: System::Windows::Forms::TextBox^ matrixText54;



			private: System::Windows::Forms::TextBox^ matrixText53;



			private: System::Windows::Forms::TextBox^ matrixText52;



			private: System::Windows::Forms::TextBox^ matrixText51;




			private:
				/// <summary>
				/// Required designer variable.
				/// </summary>
				System::ComponentModel::Container^ components;
			public: System::Windows::Forms::Button^ vectorB;

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

			public: int getPocetRiadkov() {
				return (int)this->pocetRiadkov->Value;
			}

			public: int getPocetStlpcov() {
				return (int)this->pocetStlpcov->Value;
			}

			public: int getVB() {
				return vB;
			}

			public: double** getMatrix() {
				double** matrix = 0;
				matrix = new double* [(int)this->pocetRiadkov->Value];

				for (int h = 0; h < (int)this->pocetRiadkov->Value; h++)
				{
					matrix[h] = new double[(int)this->pocetStlpcov->Value];

				}

				matrix[0][0] = System::Convert::ToDouble(matrixText11->Text);
				matrix[0][1] = System::Convert::ToDouble(matrixText12->Text);
				matrix[1][0] = System::Convert::ToDouble(matrixText21->Text);
				matrix[1][1] = System::Convert::ToDouble(matrixText22->Text);

				try {

					if (matrixText13->Text != "") matrix[0][2] = System::Convert::ToDouble(matrixText13->Text);
					if (matrixText14->Text != "") matrix[0][3] = System::Convert::ToDouble(matrixText14->Text);
					if (matrixText15->Text != "") matrix[0][4] = System::Convert::ToDouble(matrixText15->Text);

					if (matrixText23->Text != "") matrix[1][2] = System::Convert::ToDouble(matrixText23->Text);
					if (matrixText24->Text != "") matrix[1][3] = System::Convert::ToDouble(matrixText24->Text);
					if (matrixText25->Text != "") matrix[1][4] = System::Convert::ToDouble(matrixText25->Text);

					if (matrixText31->Text != "") matrix[2][0] = System::Convert::ToDouble(matrixText31->Text);
					if (matrixText32->Text != "") matrix[2][1] = System::Convert::ToDouble(matrixText32->Text);
					if (matrixText33->Text != "") matrix[2][2] = System::Convert::ToDouble(matrixText33->Text);
					if (matrixText34->Text != "") matrix[2][3] = System::Convert::ToDouble(matrixText34->Text);
					if (matrixText35->Text != "") matrix[2][4] = System::Convert::ToDouble(matrixText35->Text);

					if (matrixText41->Text != "") matrix[3][0] = System::Convert::ToDouble(matrixText41->Text);
					if (matrixText42->Text != "") matrix[3][1] = System::Convert::ToDouble(matrixText42->Text);
					if (matrixText43->Text != "") matrix[3][2] = System::Convert::ToDouble(matrixText43->Text);
					if (matrixText44->Text != "") matrix[3][3] = System::Convert::ToDouble(matrixText44->Text);
					if (matrixText45->Text != "") matrix[3][4] = System::Convert::ToDouble(matrixText45->Text);

					if (matrixText51->Text != "") matrix[4][0] = System::Convert::ToDouble(matrixText51->Text);
					if (matrixText52->Text != "") matrix[4][1] = System::Convert::ToDouble(matrixText52->Text);
					if (matrixText53->Text != "") matrix[4][2] = System::Convert::ToDouble(matrixText53->Text);
					if (matrixText54->Text != "") matrix[4][3] = System::Convert::ToDouble(matrixText54->Text);
					if (matrixText55->Text != "") matrix[4][4] = System::Convert::ToDouble(matrixText55->Text);
				}
				catch (...) {
				}


				return matrix;
			}

private: Boolean getVsetkyVyplnene() {
	if (matrixText11->Text == "") return false;
	if (matrixText12->Text == "") return false;
	if (matrixText21->Text == "") return false;
	if (matrixText22->Text == "") return false;

	if (pocetRiadkov->Value == 3) {

		if (matrixText31->Text == "") return false;
		if (matrixText32->Text == "") return false;
		if (pocetStlpcov->Value == 3) {
			if (matrixText13->Text == "") return false;
			if (matrixText23->Text == "") return false;
			if (matrixText33->Text == "") return false;
		}

		if (pocetStlpcov->Value == 4) {
			if (matrixText13->Text == "") return false;
			if (matrixText23->Text == "") return false;
			if (matrixText33->Text == "") return false;
			if (matrixText34->Text == "") return false;
		}
		if (pocetStlpcov->Value == 5) {
			if (matrixText13->Text == "") return false;
			if (matrixText23->Text == "") return false;
			if (matrixText33->Text == "") return false;
			if (matrixText34->Text == "") return false;
			if (matrixText35->Text == "") return false;
		}

	}
	if (pocetRiadkov->Value == 4) {

		if (matrixText31->Text == "") return false;
		if (matrixText32->Text == "") return false;
		if (matrixText41->Text == "") return false;
		if (matrixText42->Text == "") return false;
		if (pocetStlpcov->Value == 3) {
			if (matrixText13->Text == "") return false;
			if (matrixText23->Text == "") return false;
			if (matrixText33->Text == "") return false;
			if (matrixText43->Text == "") return false;
		}

		if (pocetStlpcov->Value == 4) {
			if (matrixText13->Text == "") return false;
			if (matrixText23->Text == "") return false;
			if (matrixText33->Text == "") return false;
			if (matrixText43->Text == "") return false;
			if (matrixText14->Text == "") return false;
			if (matrixText24->Text == "") return false;
			if (matrixText34->Text == "") return false;
			if (matrixText44->Text == "") return false;
		}
		if (pocetStlpcov->Value == 5) {
			if (matrixText13->Text == "") return false;
			if (matrixText23->Text == "") return false;
			if (matrixText33->Text == "") return false;
			if (matrixText43->Text == "") return false;
			if (matrixText14->Text == "") return false;
			if (matrixText24->Text == "") return false;
			if (matrixText34->Text == "") return false;
			if (matrixText44->Text == "") return false;
			if (matrixText15->Text == "") return false;
			if (matrixText25->Text == "") return false;
			if (matrixText35->Text == "") return false;
			if (matrixText45->Text == "") return false;
		}
	}
	if (pocetRiadkov->Value == 5) {

		if (matrixText31->Text == "") return false;
		if (matrixText32->Text == "") return false;
		if (matrixText41->Text == "") return false;
		if (matrixText42->Text == "") return false;
		if (matrixText51->Text == "") return false;
		if (matrixText52->Text == "") return false;
		if (pocetStlpcov->Value == 3) {
			if (matrixText13->Text == "") return false;
			if (matrixText23->Text == "") return false;
			if (matrixText33->Text == "") return false;
			if (matrixText43->Text == "") return false;
			if (matrixText53->Text == "") return false;
		}
		if (pocetStlpcov->Value == 4) {
			if (matrixText13->Text == "") return false;
			if (matrixText23->Text == "") return false;
			if (matrixText33->Text == "") return false;
			if (matrixText43->Text == "") return false;
			if (matrixText53->Text == "") return false;
			if (matrixText14->Text == "") return false;
			if (matrixText24->Text == "") return false;
			if (matrixText34->Text == "") return false;
			if (matrixText44->Text == "") return false;
			if (matrixText54->Text == "") return false;
		}
		if (pocetStlpcov->Value == 5) {
			if (matrixText13->Text == "") return false;
			if (matrixText23->Text == "") return false;
			if (matrixText33->Text == "") return false;
			if (matrixText43->Text == "") return false;
			if (matrixText53->Text == "") return false;
			if (matrixText14->Text == "") return false;
			if (matrixText24->Text == "") return false;
			if (matrixText34->Text == "") return false;
			if (matrixText44->Text == "") return false;
			if (matrixText54->Text == "") return false;
			if (matrixText15->Text == "") return false;
			if (matrixText25->Text == "") return false;
			if (matrixText35->Text == "") return false;
			if (matrixText45->Text == "") return false;
			if (matrixText55->Text == "") return false;
		}
	}

	return true;
}

			private: Boolean getNulovyRiadok() {
				if (matrixText11->Text == "0" && matrixText12->Text == "0") {
					if (pocetStlpcov->Value == 2)
						return true;
					if (pocetStlpcov->Value == 3) {
						if (matrixText13->Text == "0")
							return true;
					}
					if (pocetStlpcov->Value == 4) {
						if (matrixText13->Text == "0" && matrixText14->Text == "0")
							return true;
					}
					if (pocetStlpcov->Value == 5) {
						if (matrixText13->Text == "0" && matrixText14->Text == "0" && matrixText15->Text == "0")
							return true;
					}
				}

				if (matrixText21->Text == "0" && matrixText22->Text == "0") {
					if (pocetStlpcov->Value == 2)
						return true;
					if (pocetStlpcov->Value == 3) {
						if (matrixText23->Text == "0")
							return true;
					}
					if (pocetStlpcov->Value == 4) {
						if (matrixText23->Text == "0" && matrixText24->Text == "0")
							return true;
					}
					if (pocetStlpcov->Value == 5) {
						if (matrixText23->Text == "0" && matrixText24->Text == "0" && matrixText25->Text == "0")
							return true;
					}
				}

				if (matrixText31->Text == "0" && matrixText32->Text == "0") {
					if (pocetStlpcov->Value == 2)
						return true;
					if (pocetStlpcov->Value == 3) {
						if (matrixText33->Text == "0")
							return true;
					}
					if (pocetStlpcov->Value == 4) {
						if (matrixText33->Text == "0" && matrixText34->Text == "0")
							return true;
					}
					if (pocetStlpcov->Value == 5) {
						if (matrixText33->Text == "0" && matrixText34->Text == "0" && matrixText35->Text == "0")
							return true;
					}
				}

				if (matrixText41->Text == "0" && matrixText42->Text == "0") {
					if (pocetStlpcov->Value == 2)
						return true;
					if (pocetStlpcov->Value == 3) {
						if (matrixText43->Text == "0")
							return true;
					}
					if (pocetStlpcov->Value == 4) {
						if (matrixText43->Text == "0" && matrixText44->Text == "0")
							return true;
					}
					if (pocetStlpcov->Value == 5) {
						if (matrixText43->Text == "0" && matrixText44->Text == "0" && matrixText45->Text == "0")
							return true;
					}
				}

				if (matrixText51->Text == "0" && matrixText52->Text == "0") {
					if (pocetStlpcov->Value == 2)
						return true;
					if (pocetStlpcov->Value == 3) {
						if (matrixText53->Text == "0")
							return true;
					}
					if (pocetStlpcov->Value == 4) {
						if (matrixText53->Text == "0" && matrixText54->Text == "0")
							return true;
					}
					if (pocetStlpcov->Value == 5) {
						if (matrixText53->Text == "0" && matrixText54->Text == "0" && matrixText55->Text == "0")
							return true;
					}
				}

				return false;
			}

			private: Boolean getNulovyStlpec() {

				if (matrixText11->Text == "0" && matrixText21->Text == "0") {
					if (pocetRiadkov->Value == 2)
						return true;
					if (pocetRiadkov->Value == 3) {
						if (matrixText31->Text == "0")
							return true;
					}
					if (pocetRiadkov->Value == 4) {
						if (matrixText31->Text == "0" && matrixText41->Text == "0")
							return true;
					}
					if (pocetRiadkov->Value == 5) {
						if (matrixText31->Text == "0" && matrixText41->Text == "0" && matrixText51->Text == "0")
							return true;
					}
				}

				if (matrixText12->Text == "0" && matrixText22->Text == "0") {
					if (pocetRiadkov->Value == 2)
						return true;
					if (pocetRiadkov->Value == 3) {
						if (matrixText32->Text == "0")
							return true;
					}
					if (pocetRiadkov->Value == 4) {
						if (matrixText32->Text == "0" && matrixText42->Text == "0")
							return true;
					}
					if (pocetRiadkov->Value == 5) {
						if (matrixText32->Text == "0" && matrixText42->Text == "0" && matrixText52->Text == "0")
							return true;
					}
				}

				if (matrixText13->Text == "0" && matrixText23->Text == "0") {
					if (pocetRiadkov->Value == 2)
						return true;
					if (pocetRiadkov->Value == 3) {
						if (matrixText33->Text == "0")
							return true;
					}
					if (pocetRiadkov->Value == 4) {
						if (matrixText33->Text == "0" && matrixText43->Text == "0")
							return true;
					}
					if (pocetRiadkov->Value == 5) {
						if (matrixText33->Text == "0" && matrixText43->Text == "0" && matrixText53->Text == "0")
							return true;
					}
				}

				if (matrixText14->Text == "0" && matrixText24->Text == "0") {
					if (pocetRiadkov->Value == 2)
						return true;
					if (pocetRiadkov->Value == 3) {
						if (matrixText34->Text == "0")
							return true;
					}
					if (pocetRiadkov->Value == 4) {
						if (matrixText34->Text == "0" && matrixText44->Text == "0")
							return true;
					}
					if (pocetRiadkov->Value == 5) {
						if (matrixText34->Text == "0" && matrixText44->Text == "0" && matrixText54->Text == "0")
							return true;
					}
				}

				if (matrixText15->Text == "0" && matrixText25->Text == "0") {
					if (pocetRiadkov->Value == 2)
						return true;
					if (pocetRiadkov->Value == 3) {
						if (matrixText35->Text == "0")
							return true;
					}
					if (pocetRiadkov->Value == 4) {
						if (matrixText35->Text == "0" && matrixText45->Text == "0")
							return true;
					}
					if (pocetRiadkov->Value == 5) {
						if (matrixText35->Text == "0" && matrixText45->Text == "0" && matrixText55->Text == "0")
							return true;
					}
				}



				return false;
			}

				   void InitializeComponent(void)
				   {
					   this->matrixPanel1 = (gcnew System::Windows::Forms::Panel());
					   this->matrixText15 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText14 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText13 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText12 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText11 = (gcnew System::Windows::Forms::TextBox());
					   this->label3 = (gcnew System::Windows::Forms::Label());
					   this->pocetStlpcov = (gcnew System::Windows::Forms::NumericUpDown());
					   this->label2 = (gcnew System::Windows::Forms::Label());
					   this->pocetRiadkov = (gcnew System::Windows::Forms::NumericUpDown());
					   this->LabelFirstAction = (gcnew System::Windows::Forms::Label());
					   this->bottomPanel = (gcnew System::Windows::Forms::Panel());
					   this->createButton = (gcnew System::Windows::Forms::Button());
					   this->clearTaskButton = (gcnew System::Windows::Forms::Button());
					   this->matrixPanel2 = (gcnew System::Windows::Forms::Panel());
					   this->matrixText25 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText24 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText23 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText22 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText21 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixPanel3 = (gcnew System::Windows::Forms::Panel());
					   this->matrixText35 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText34 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText33 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText32 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText31 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixPanel4 = (gcnew System::Windows::Forms::Panel());
					   this->matrixText45 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText44 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText43 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText42 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText41 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixPanel5 = (gcnew System::Windows::Forms::Panel());
					   this->matrixText55 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText54 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText53 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText52 = (gcnew System::Windows::Forms::TextBox());
					   this->matrixText51 = (gcnew System::Windows::Forms::TextBox());
					   this->vectorB = (gcnew System::Windows::Forms::Button());
					   this->matrixPanel1->SuspendLayout();
					   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetStlpcov))->BeginInit();
					   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetRiadkov))->BeginInit();
					   this->bottomPanel->SuspendLayout();
					   this->matrixPanel2->SuspendLayout();
					   this->matrixPanel3->SuspendLayout();
					   this->matrixPanel4->SuspendLayout();
					   this->matrixPanel5->SuspendLayout();
					   this->SuspendLayout();
					   // 
					   // matrixPanel1
					   // 
					   this->matrixPanel1->Controls->Add(this->matrixText15);
					   this->matrixPanel1->Controls->Add(this->matrixText14);
					   this->matrixPanel1->Controls->Add(this->matrixText13);
					   this->matrixPanel1->Controls->Add(this->matrixText12);
					   this->matrixPanel1->Controls->Add(this->matrixText11);
					   this->matrixPanel1->Location = System::Drawing::Point(100, 158);
					   this->matrixPanel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixPanel1->Name = L"matrixPanel1";
					   this->matrixPanel1->Size = System::Drawing::Size(373, 47);
					   this->matrixPanel1->TabIndex = 2;
					   // 
					   // matrixText15
					   // 
					   this->matrixText15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText15->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText15->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText15->Location = System::Drawing::Point(321, 6);
					   this->matrixText15->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText15->Name = L"matrixText15";
					   this->matrixText15->Size = System::Drawing::Size(42, 30);
					   this->matrixText15->TabIndex = 6;
					   this->matrixText15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText15_KeyPress);
					   this->matrixText15->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText15_Leave);
					   // 
					   // matrixText14
					   // 
					   this->matrixText14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText14->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText14->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText14->Location = System::Drawing::Point(246, 6);
					   this->matrixText14->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText14->Name = L"matrixText14";
					   this->matrixText14->Size = System::Drawing::Size(42, 30);
					   this->matrixText14->TabIndex = 5;
					   this->matrixText14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText14_KeyPress);
					   this->matrixText14->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText14_Leave);
					   // 
					   // matrixText13
					   // 
					   this->matrixText13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText13->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText13->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText13->Location = System::Drawing::Point(167, 6);
					   this->matrixText13->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText13->Name = L"matrixText13";
					   this->matrixText13->Size = System::Drawing::Size(42, 30);
					   this->matrixText13->TabIndex = 4;
					   this->matrixText13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText13_KeyPress);
					   this->matrixText13->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText13_Leave);
					   // 
					   // matrixText12
					   // 
					   this->matrixText12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText12->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText12->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText12->Location = System::Drawing::Point(88, 6);
					   this->matrixText12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText12->Name = L"matrixText12";
					   this->matrixText12->Size = System::Drawing::Size(42, 30);
					   this->matrixText12->TabIndex = 3;
					   this->matrixText12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText12_KeyPress);
					   this->matrixText12->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText12_Leave);
					   // 
					   // matrixText11
					   // 
					   this->matrixText11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText11->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText11->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText11->Location = System::Drawing::Point(12, 6);
					   this->matrixText11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText11->Name = L"matrixText11";
					   this->matrixText11->Size = System::Drawing::Size(42, 30);
					   this->matrixText11->TabIndex = 2;
					   this->matrixText11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText11_KeyPress);
					   this->matrixText11->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText11_Leave);
					   // 
					   // label3
					   // 
					   this->label3->AutoSize = true;
					   this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
						   static_cast<System::Int32>(static_cast<System::Byte>(25)));
					   this->label3->ForeColor = System::Drawing::SystemColors::Window;
					   this->label3->Location = System::Drawing::Point(20, 114);
					   this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
					   this->label3->Name = L"label3";
					   this->label3->Size = System::Drawing::Size(195, 22);
					   this->label3->TabIndex = 11;
					   this->label3->Text = L"3. Vyplň zložky matice:";
					   // 
					   // pocetStlpcov
					   // 
					   this->pocetStlpcov->AllowDrop = true;
					   this->pocetStlpcov->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->pocetStlpcov->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->pocetStlpcov->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->pocetStlpcov->ForeColor = System::Drawing::SystemColors::Window;
					   this->pocetStlpcov->Location = System::Drawing::Point(220, 64);
					   this->pocetStlpcov->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->pocetStlpcov->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
					   this->pocetStlpcov->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
					   this->pocetStlpcov->Name = L"pocetStlpcov";
					   this->pocetStlpcov->ReadOnly = true;
					   this->pocetStlpcov->Size = System::Drawing::Size(73, 30);
					   this->pocetStlpcov->TabIndex = 1;
					   this->pocetStlpcov->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
					   this->pocetStlpcov->ValueChanged += gcnew System::EventHandler(this, &matrixNewTaskDialog::pocetStlpcov_ValueChanged);
					   // 
					   // label2
					   // 
					   this->label2->AutoSize = true;
					   this->label2->ForeColor = System::Drawing::SystemColors::Window;
					   this->label2->Location = System::Drawing::Point(20, 66);
					   this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
					   this->label2->Name = L"label2";
					   this->label2->Size = System::Drawing::Size(188, 22);
					   this->label2->TabIndex = 9;
					   this->label2->Text = L"2. Zadaj počet stĺpcov:";
					   // 
					   // pocetRiadkov
					   // 
					   this->pocetRiadkov->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->pocetRiadkov->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->pocetRiadkov->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->pocetRiadkov->ForeColor = System::Drawing::SystemColors::Window;
					   this->pocetRiadkov->Location = System::Drawing::Point(220, 20);
					   this->pocetRiadkov->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->pocetRiadkov->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
					   this->pocetRiadkov->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
					   this->pocetRiadkov->Name = L"pocetRiadkov";
					   this->pocetRiadkov->ReadOnly = true;
					   this->pocetRiadkov->RightToLeft = System::Windows::Forms::RightToLeft::No;
					   this->pocetRiadkov->Size = System::Drawing::Size(73, 30);
					   this->pocetRiadkov->TabIndex = 0;
					   this->pocetRiadkov->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
					   this->pocetRiadkov->ValueChanged += gcnew System::EventHandler(this, &matrixNewTaskDialog::pocetRiadkov_ValueChanged);
					   // 
					   // LabelFirstAction
					   // 
					   this->LabelFirstAction->AutoSize = true;
					   this->LabelFirstAction->ForeColor = System::Drawing::SystemColors::Window;
					   this->LabelFirstAction->Location = System::Drawing::Point(20, 20);
					   this->LabelFirstAction->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
					   this->LabelFirstAction->Name = L"LabelFirstAction";
					   this->LabelFirstAction->Size = System::Drawing::Size(193, 22);
					   this->LabelFirstAction->TabIndex = 7;
					   this->LabelFirstAction->Text = L"1. Zadaj počet riadkov:";
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
					   this->createButton->Size = System::Drawing::Size(228, 40);
					   this->createButton->TabIndex = 29;
					   this->createButton->Text = L"➕ Vytvoriť novú úlohu";
					   this->createButton->UseVisualStyleBackColor = false;
					   this->createButton->Click += gcnew System::EventHandler(this, &matrixNewTaskDialog::createButton_Click);
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
					   this->clearTaskButton->Click += gcnew System::EventHandler(this, &matrixNewTaskDialog::clearTaskButton_Click);
					   // 
					   // matrixPanel2
					   // 
					   this->matrixPanel2->Controls->Add(this->matrixText25);
					   this->matrixPanel2->Controls->Add(this->matrixText24);
					   this->matrixPanel2->Controls->Add(this->matrixText23);
					   this->matrixPanel2->Controls->Add(this->matrixText22);
					   this->matrixPanel2->Controls->Add(this->matrixText21);
					   this->matrixPanel2->Location = System::Drawing::Point(100, 216);
					   this->matrixPanel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixPanel2->Name = L"matrixPanel2";
					   this->matrixPanel2->Size = System::Drawing::Size(373, 47);
					   this->matrixPanel2->TabIndex = 3;
					   // 
					   // matrixText25
					   // 
					   this->matrixText25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText25->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText25->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText25->Location = System::Drawing::Point(320, 6);
					   this->matrixText25->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText25->Name = L"matrixText25";
					   this->matrixText25->Size = System::Drawing::Size(42, 30);
					   this->matrixText25->TabIndex = 11;
					   this->matrixText25->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText25_KeyPress);
					   this->matrixText25->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText25_Leave);
					   // 
					   // matrixText24
					   // 
					   this->matrixText24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText24->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText24->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText24->Location = System::Drawing::Point(244, 6);
					   this->matrixText24->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText24->Name = L"matrixText24";
					   this->matrixText24->Size = System::Drawing::Size(42, 30);
					   this->matrixText24->TabIndex = 10;
					   this->matrixText24->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText24_KeyPress);
					   this->matrixText24->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText24_Leave);
					   // 
					   // matrixText23
					   // 
					   this->matrixText23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText23->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText23->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText23->Location = System::Drawing::Point(166, 6);
					   this->matrixText23->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText23->Name = L"matrixText23";
					   this->matrixText23->Size = System::Drawing::Size(42, 30);
					   this->matrixText23->TabIndex = 9;
					   this->matrixText23->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText23_KeyPress);
					   this->matrixText23->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText23_Leave);
					   // 
					   // matrixText22
					   // 
					   this->matrixText22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText22->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText22->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText22->Location = System::Drawing::Point(87, 6);
					   this->matrixText22->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText22->Name = L"matrixText22";
					   this->matrixText22->Size = System::Drawing::Size(42, 30);
					   this->matrixText22->TabIndex = 8;
					   this->matrixText22->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText22_KeyPress);
					   this->matrixText22->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText22_Leave);
					   // 
					   // matrixText21
					   // 
					   this->matrixText21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText21->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText21->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText21->Location = System::Drawing::Point(11, 6);
					   this->matrixText21->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText21->Name = L"matrixText21";
					   this->matrixText21->Size = System::Drawing::Size(42, 30);
					   this->matrixText21->TabIndex = 7;
					   this->matrixText21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText21_KeyPress);
					   this->matrixText21->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText21_Leave);
					   // 
					   // matrixPanel3
					   // 
					   this->matrixPanel3->Controls->Add(this->matrixText35);
					   this->matrixPanel3->Controls->Add(this->matrixText34);
					   this->matrixPanel3->Controls->Add(this->matrixText33);
					   this->matrixPanel3->Controls->Add(this->matrixText32);
					   this->matrixPanel3->Controls->Add(this->matrixText31);
					   this->matrixPanel3->Location = System::Drawing::Point(100, 274);
					   this->matrixPanel3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixPanel3->Name = L"matrixPanel3";
					   this->matrixPanel3->Size = System::Drawing::Size(373, 47);
					   this->matrixPanel3->TabIndex = 4;
					   // 
					   // matrixText35
					   // 
					   this->matrixText35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText35->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText35->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText35->Location = System::Drawing::Point(320, 6);
					   this->matrixText35->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText35->Name = L"matrixText35";
					   this->matrixText35->Size = System::Drawing::Size(42, 30);
					   this->matrixText35->TabIndex = 16;
					   this->matrixText35->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText35_KeyPress);
					   this->matrixText35->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText35_Leave);
					   // 
					   // matrixText34
					   // 
					   this->matrixText34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText34->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText34->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText34->Location = System::Drawing::Point(244, 6);
					   this->matrixText34->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText34->Name = L"matrixText34";
					   this->matrixText34->Size = System::Drawing::Size(42, 30);
					   this->matrixText34->TabIndex = 15;
					   this->matrixText34->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText34_KeyPress);
					   this->matrixText34->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText34_Leave);
					   // 
					   // matrixText33
					   // 
					   this->matrixText33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText33->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText33->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText33->Location = System::Drawing::Point(166, 6);
					   this->matrixText33->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText33->Name = L"matrixText33";
					   this->matrixText33->Size = System::Drawing::Size(42, 30);
					   this->matrixText33->TabIndex = 14;
					   this->matrixText33->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText33_KeyPress);
					   this->matrixText33->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText33_Leave);
					   // 
					   // matrixText32
					   // 
					   this->matrixText32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText32->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText32->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText32->Location = System::Drawing::Point(87, 6);
					   this->matrixText32->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText32->Name = L"matrixText32";
					   this->matrixText32->Size = System::Drawing::Size(42, 30);
					   this->matrixText32->TabIndex = 13;
					   this->matrixText32->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText32_KeyPress);
					   this->matrixText32->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText32_Leave);
					   // 
					   // matrixText31
					   // 
					   this->matrixText31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText31->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText31->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText31->Location = System::Drawing::Point(11, 6);
					   this->matrixText31->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText31->Name = L"matrixText31";
					   this->matrixText31->Size = System::Drawing::Size(42, 30);
					   this->matrixText31->TabIndex = 12;
					   this->matrixText31->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText31_KeyPress);
					   this->matrixText31->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText31_Leave);
					   // 
					   // matrixPanel4
					   // 
					   this->matrixPanel4->Controls->Add(this->matrixText45);
					   this->matrixPanel4->Controls->Add(this->matrixText44);
					   this->matrixPanel4->Controls->Add(this->matrixText43);
					   this->matrixPanel4->Controls->Add(this->matrixText42);
					   this->matrixPanel4->Controls->Add(this->matrixText41);
					   this->matrixPanel4->Location = System::Drawing::Point(100, 331);
					   this->matrixPanel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixPanel4->Name = L"matrixPanel4";
					   this->matrixPanel4->Size = System::Drawing::Size(373, 47);
					   this->matrixPanel4->TabIndex = 5;
					   // 
					   // matrixText45
					   // 
					   this->matrixText45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText45->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText45->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText45->Location = System::Drawing::Point(320, 6);
					   this->matrixText45->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText45->Name = L"matrixText45";
					   this->matrixText45->Size = System::Drawing::Size(42, 30);
					   this->matrixText45->TabIndex = 21;
					   this->matrixText45->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText45_KeyPress);
					   this->matrixText45->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText45_Leave);
					   // 
					   // matrixText44
					   // 
					   this->matrixText44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText44->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText44->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText44->Location = System::Drawing::Point(244, 6);
					   this->matrixText44->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText44->Name = L"matrixText44";
					   this->matrixText44->Size = System::Drawing::Size(42, 30);
					   this->matrixText44->TabIndex = 20;
					   this->matrixText44->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText44_KeyPress);
					   this->matrixText44->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText44_Leave);
					   // 
					   // matrixText43
					   // 
					   this->matrixText43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText43->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText43->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText43->Location = System::Drawing::Point(166, 6);
					   this->matrixText43->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText43->Name = L"matrixText43";
					   this->matrixText43->Size = System::Drawing::Size(42, 30);
					   this->matrixText43->TabIndex = 19;
					   this->matrixText43->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText43_KeyPress);
					   this->matrixText43->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText43_Leave);
					   // 
					   // matrixText42
					   // 
					   this->matrixText42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText42->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText42->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText42->Location = System::Drawing::Point(87, 6);
					   this->matrixText42->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText42->Name = L"matrixText42";
					   this->matrixText42->Size = System::Drawing::Size(42, 30);
					   this->matrixText42->TabIndex = 18;
					   this->matrixText42->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText42_KeyPress);
					   this->matrixText42->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText42_Leave);
					   // 
					   // matrixText41
					   // 
					   this->matrixText41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText41->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText41->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText41->Location = System::Drawing::Point(11, 6);
					   this->matrixText41->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText41->Name = L"matrixText41";
					   this->matrixText41->Size = System::Drawing::Size(42, 30);
					   this->matrixText41->TabIndex = 17;
					   this->matrixText41->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText41_KeyPress);
					   this->matrixText41->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText41_Leave);
					   // 
					   // matrixPanel5
					   // 
					   this->matrixPanel5->Controls->Add(this->matrixText55);
					   this->matrixPanel5->Controls->Add(this->matrixText54);
					   this->matrixPanel5->Controls->Add(this->matrixText53);
					   this->matrixPanel5->Controls->Add(this->matrixText52);
					   this->matrixPanel5->Controls->Add(this->matrixText51);
					   this->matrixPanel5->Location = System::Drawing::Point(100, 389);
					   this->matrixPanel5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixPanel5->Name = L"matrixPanel5";
					   this->matrixPanel5->Size = System::Drawing::Size(373, 47);
					   this->matrixPanel5->TabIndex = 6;
					   // 
					   // matrixText55
					   // 
					   this->matrixText55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText55->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText55->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText55->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText55->Location = System::Drawing::Point(320, 6);
					   this->matrixText55->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText55->Name = L"matrixText55";
					   this->matrixText55->Size = System::Drawing::Size(42, 30);
					   this->matrixText55->TabIndex = 26;
					   this->matrixText55->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText55_KeyPress);
					   this->matrixText55->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText55_Leave);
					   // 
					   // matrixText54
					   // 
					   this->matrixText54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText54->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText54->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText54->Location = System::Drawing::Point(244, 6);
					   this->matrixText54->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText54->Name = L"matrixText54";
					   this->matrixText54->Size = System::Drawing::Size(42, 30);
					   this->matrixText54->TabIndex = 25;
					   this->matrixText54->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText54_KeyPress);
					   this->matrixText54->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText54_Leave);
					   // 
					   // matrixText53
					   // 
					   this->matrixText53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText53->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText53->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText53->Location = System::Drawing::Point(166, 6);
					   this->matrixText53->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText53->Name = L"matrixText53";
					   this->matrixText53->Size = System::Drawing::Size(42, 30);
					   this->matrixText53->TabIndex = 24;
					   this->matrixText53->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText53_KeyPress);
					   this->matrixText53->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText53_Leave);
					   // 
					   // matrixText52
					   // 
					   this->matrixText52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText52->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText52->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText52->Location = System::Drawing::Point(87, 6);
					   this->matrixText52->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText52->Name = L"matrixText52";
					   this->matrixText52->Size = System::Drawing::Size(42, 30);
					   this->matrixText52->TabIndex = 23;
					   this->matrixText52->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText52_KeyPress);
					   this->matrixText52->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText52_Leave);
					   // 
					   // matrixText51
					   // 
					   this->matrixText51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
						   static_cast<System::Int32>(static_cast<System::Byte>(45)));
					   this->matrixText51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					   this->matrixText51->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->matrixText51->ForeColor = System::Drawing::SystemColors::Window;
					   this->matrixText51->Location = System::Drawing::Point(11, 6);
					   this->matrixText51->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->matrixText51->Name = L"matrixText51";
					   this->matrixText51->Size = System::Drawing::Size(42, 30);
					   this->matrixText51->TabIndex = 22;
					   this->matrixText51->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrixNewTaskDialog::matrixText51_KeyPress);
					   this->matrixText51->Leave += gcnew System::EventHandler(this, &matrixNewTaskDialog::matrixText51_Leave);
					   // 
					   // vectorB
					   // 
					   this->vectorB->BackColor = System::Drawing::Color::DodgerBlue;
					   this->vectorB->Cursor = System::Windows::Forms::Cursors::Hand;
					   this->vectorB->Enabled = false;
					   this->vectorB->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
						   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
					   this->vectorB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					   this->vectorB->ForeColor = System::Drawing::SystemColors::Window;
					   this->vectorB->Location = System::Drawing::Point(476, 158);
					   this->vectorB->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->vectorB->Name = L"vectorB";
					   this->vectorB->Size = System::Drawing::Size(184, 40);
					   this->vectorB->TabIndex = 28;
					   this->vectorB->Text = L"➕ Pridať vektor b⃗";
					   this->vectorB->UseVisualStyleBackColor = false;
					   this->vectorB->Click += gcnew System::EventHandler(this, &matrixNewTaskDialog::vectorB_Click);
					   // 
					   // matrixNewTaskDialog
					   // 
					   this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
					   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
						   static_cast<System::Int32>(static_cast<System::Byte>(25)));
					   this->ClientSize = System::Drawing::Size(674, 523);
					   this->Controls->Add(this->vectorB);
					   this->Controls->Add(this->matrixPanel5);
					   this->Controls->Add(this->matrixPanel4);
					   this->Controls->Add(this->matrixPanel3);
					   this->Controls->Add(this->matrixPanel2);
					   this->Controls->Add(this->bottomPanel);
					   this->Controls->Add(this->matrixPanel1);
					   this->Controls->Add(this->label3);
					   this->Controls->Add(this->pocetStlpcov);
					   this->Controls->Add(this->label2);
					   this->Controls->Add(this->pocetRiadkov);
					   this->Controls->Add(this->LabelFirstAction);
					   this->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						   static_cast<System::Byte>(0)));
					   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
					   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
					   this->Name = L"matrixNewTaskDialog";
					   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
					   this->Text = L"Nová úloha";
					   this->matrixPanel1->ResumeLayout(false);
					   this->matrixPanel1->PerformLayout();
					   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetStlpcov))->EndInit();
					   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pocetRiadkov))->EndInit();
					   this->bottomPanel->ResumeLayout(false);
					   this->matrixPanel2->ResumeLayout(false);
					   this->matrixPanel2->PerformLayout();
					   this->matrixPanel3->ResumeLayout(false);
					   this->matrixPanel3->PerformLayout();
					   this->matrixPanel4->ResumeLayout(false);
					   this->matrixPanel4->PerformLayout();
					   this->matrixPanel5->ResumeLayout(false);
					   this->matrixPanel5->PerformLayout();
					   this->ResumeLayout(false);
					   this->PerformLayout();

				   }
#pragma endregion
			private: System::Void pocetStlpcov_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

				if (this->pocetStlpcov->Value == 2) {
					this->matrixText13->Hide();
					this->matrixText23->Hide();
					this->matrixText33->Hide();
					this->matrixText43->Hide();
					this->matrixText53->Hide();
					this->matrixText14->Hide();
					this->matrixText24->Hide();
					this->matrixText34->Hide();
					this->matrixText44->Hide();
					this->matrixText54->Hide();
					this->matrixText15->Hide();
					this->matrixText25->Hide();
					this->matrixText35->Hide();
					this->matrixText45->Hide();
					this->matrixText55->Hide();

					this->vectorB->Enabled = true;
					this->vectorB->Location = System::Drawing::Point(239, 158);

				}

				if (this->pocetStlpcov->Value == 3) {
					this->matrixText13->Show();
					this->matrixText23->Show();
					this->matrixText33->Show();
					this->matrixText43->Show();
					this->matrixText53->Show();
					this->matrixText14->Hide();
					this->matrixText24->Hide();
					this->matrixText34->Hide();
					this->matrixText44->Hide();
					this->matrixText54->Hide();
					this->matrixText15->Hide();
					this->matrixText25->Hide();
					this->matrixText35->Hide();
					this->matrixText45->Hide();
					this->matrixText55->Hide();

					this->vectorB->Enabled = true;
					this->vectorB->Location = System::Drawing::Point(318, 158);
					if (vB) {
						this->matrixText13->BackColor = System::Drawing::Color::DodgerBlue;
						this->matrixText23->BackColor = System::Drawing::Color::DodgerBlue;
						this->matrixText33->BackColor = System::Drawing::Color::DodgerBlue;
						this->matrixText43->BackColor = System::Drawing::Color::DodgerBlue;
						this->matrixText53->BackColor = System::Drawing::Color::DodgerBlue;
					}
				}

				if (this->pocetStlpcov->Value == 4) {
					this->matrixText13->Show();
					this->matrixText23->Show();
					this->matrixText33->Show();
					this->matrixText43->Show();
					this->matrixText53->Show();
					this->matrixText14->Show();
					this->matrixText24->Show();
					this->matrixText34->Show();
					this->matrixText44->Show();
					this->matrixText54->Show();
					this->matrixText15->Hide();
					this->matrixText25->Hide();
					this->matrixText35->Hide();
					this->matrixText45->Hide();
					this->matrixText55->Hide();

					this->vectorB->Enabled = true;
					this->vectorB->Location = System::Drawing::Point(397, 158);

					if (vB) {
						this->matrixText14->BackColor = System::Drawing::Color::DodgerBlue;
						this->matrixText24->BackColor = System::Drawing::Color::DodgerBlue;
						this->matrixText34->BackColor = System::Drawing::Color::DodgerBlue;
						this->matrixText44->BackColor = System::Drawing::Color::DodgerBlue;
						this->matrixText54->BackColor = System::Drawing::Color::DodgerBlue;
					}
				}

				if (this->pocetStlpcov->Value == 5) {
					this->matrixText13->Show();
					this->matrixText23->Show();
					this->matrixText33->Show();
					this->matrixText43->Show();
					this->matrixText53->Show();
					this->matrixText14->Show();
					this->matrixText24->Show();
					this->matrixText34->Show();
					this->matrixText44->Show();
					this->matrixText54->Show();
					this->matrixText15->Show();
					this->matrixText25->Show();
					this->matrixText35->Show();
					this->matrixText45->Show();
					this->matrixText55->Show();

					this->vectorB->Enabled = false;
					this->vectorB->Location = System::Drawing::Point(476, 158);

					if (vB) {
						this->matrixText15->BackColor = System::Drawing::Color::DodgerBlue;
						this->matrixText25->BackColor = System::Drawing::Color::DodgerBlue;
						this->matrixText35->BackColor = System::Drawing::Color::DodgerBlue;
						this->matrixText45->BackColor = System::Drawing::Color::DodgerBlue;
						this->matrixText55->BackColor = System::Drawing::Color::DodgerBlue;
					}

				}
			}
			private: System::Void exitTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
				created = false;
				Form::Close();
			}
			private: System::Void pocetRiadkov_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

				if (!pocetStlpcov->Visible) pocetStlpcov->Value = pocetRiadkov->Value;

				if (this->pocetRiadkov->Value == 2) {
					this->matrixPanel3->Hide();
					this->matrixPanel4->Hide();
					this->matrixPanel5->Hide();

				}
				if (this->pocetRiadkov->Value == 3) {
					this->matrixPanel3->Show();
					this->matrixPanel4->Hide();
					this->matrixPanel5->Hide();

				}
				if (this->pocetRiadkov->Value == 4) {
					this->matrixPanel3->Show();
					this->matrixPanel4->Show();
					this->matrixPanel5->Hide();

				}
				if (this->pocetRiadkov->Value == 5) {
					this->matrixPanel3->Show();
					this->matrixPanel4->Show();
					this->matrixPanel5->Show();

				}

			}
			private: System::Void clearTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
				this->matrixText11->Text = "";
				this->matrixText12->Text = "";
				this->matrixText13->Text = "";
				this->matrixText14->Text = "";
				this->matrixText15->Text = "";

				this->matrixText21->Text = "";
				this->matrixText22->Text = "";
				this->matrixText23->Text = "";
				this->matrixText24->Text = "";
				this->matrixText25->Text = "";

				this->matrixText31->Text = "";
				this->matrixText32->Text = "";
				this->matrixText33->Text = "";
				this->matrixText34->Text = "";
				this->matrixText35->Text = "";

				this->matrixText41->Text = "";
				this->matrixText42->Text = "";
				this->matrixText43->Text = "";
				this->matrixText44->Text = "";
				this->matrixText45->Text = "";

				this->matrixText51->Text = "";
				this->matrixText52->Text = "";
				this->matrixText53->Text = "";
				this->matrixText54->Text = "";
				this->matrixText55->Text = "";

				vB = 0;
				pocetStlpcov->Enabled = true;
				if (pocetStlpcov->Value < 5)
					vectorB->Enabled = true;
				label3->Text = "3. Vyplň zložky matice:";

				this->matrixText13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				this->matrixText23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				this->matrixText33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				this->matrixText43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				this->matrixText53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));

				this->matrixText14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				this->matrixText24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				this->matrixText34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				this->matrixText44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				this->matrixText54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));

				this->matrixText15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				this->matrixText25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				this->matrixText35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				this->matrixText45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));
				this->matrixText55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
					static_cast<System::Int32>(static_cast<System::Byte>(45)));				

			}

			private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {


				// zisti ci su vsetky hodnoty vyplnene
				if (getVsetkyVyplnene()) {
					if (!getNulovyRiadok() && !getNulovyStlpec()) {
						created = true;
						Form::Close();

					}
					else {
						MessageBox::Show("V linearnom priestore nesmie byt nulovy riadok alebo stlpec !", "Chybny vstup !", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

				}
				else {
					MessageBox::Show("Vypln vsetky zlozky matice !", "Chybajuce hodnoty !", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}


			}
			private: System::Void vectorB_Click(System::Object^ sender, System::EventArgs^ e) {

				if (pocetStlpcov->Value < 5 - vB) {
					vB = 1;
					label3->Text = "3. Vyplň zložky matice a vektora b\u20D7:";
					pocetStlpcov->Value++;
					pocetStlpcov->Enabled = false;
					vectorB->Enabled = false;
				}
			}

#pragma region matrix_text_key_press

			private: System::Void matrixText11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText11->Text->Contains(",") && !this->matrixText11->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText11->Text->Contains("-"))) {
					e->Handled = true;
					matrixText11->Text = "-";
					matrixText11->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}

			}


			private: System::Void matrixText12_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText12->Text->Contains(",") && !this->matrixText12->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText12->Text->Contains("-"))) {
					e->Handled = true;
					matrixText12->Text = "-";
					matrixText12->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText13_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText13->Text->Contains(",") && !this->matrixText13->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText13->Text->Contains("-"))) {
					e->Handled = true;
					matrixText13->Text = "-";
					matrixText13->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText14_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText14->Text->Contains(",") && !this->matrixText14->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText14->Text->Contains("-"))) {
					e->Handled = true;
					matrixText14->Text = "-";
					matrixText14->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText15_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText15->Text->Contains(",") && !this->matrixText15->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText15->Text->Contains("-"))) {
					e->Handled = true;
					matrixText15->Text = "-";
					matrixText15->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText21_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText21->Text->Contains(",") && !this->matrixText21->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText21->Text->Contains("-"))) {
					e->Handled = true;
					matrixText21->Text = "-";
					matrixText21->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText22_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText22->Text->Contains(",") && !this->matrixText22->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText22->Text->Contains("-"))) {
					e->Handled = true;
					matrixText22->Text = "-";
					matrixText22->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText23_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText23->Text->Contains(",") && !this->matrixText23->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText23->Text->Contains("-"))) {
					e->Handled = true;
					matrixText23->Text = "-";
					matrixText23->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText24_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText24->Text->Contains(",") && !this->matrixText24->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText24->Text->Contains("-"))) {
					e->Handled = true;
					matrixText24->Text = "-";
					matrixText24->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText25_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText25->Text->Contains(",") && !this->matrixText25->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText25->Text->Contains("-"))) {
					e->Handled = true;
					matrixText25->Text = "-";
					matrixText25->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}

			private: System::Void matrixText31_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText31->Text->Contains(",") && !this->matrixText31->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText31->Text->Contains("-"))) {
					e->Handled = true;
					matrixText31->Text = "-";
					matrixText31->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText32_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText32->Text->Contains(",") && !this->matrixText32->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText32->Text->Contains("-"))) {
					e->Handled = true;
					matrixText32->Text = "-";
					matrixText32->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText33_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText33->Text->Contains(",") && !this->matrixText33->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText33->Text->Contains("-"))) {
					e->Handled = true;
					matrixText33->Text = "-";
					matrixText33->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText34_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText34->Text->Contains(",") && !this->matrixText34->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText34->Text->Contains("-"))) {
					e->Handled = true;
					matrixText34->Text = "-";
					matrixText34->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText35_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText35->Text->Contains(",") && !this->matrixText35->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText35->Text->Contains("-"))) {
					e->Handled = true;
					matrixText35->Text = "-";
					matrixText35->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText41_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText41->Text->Contains(",") && !this->matrixText41->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText41->Text->Contains("-"))) {
					e->Handled = true;
					matrixText41->Text = "-";
					matrixText41->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText42_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText42->Text->Contains(",") && !this->matrixText42->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText42->Text->Contains("-"))) {
					e->Handled = true;
					matrixText42->Text = "-";
					matrixText42->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText43_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText43->Text->Contains(",") && !this->matrixText43->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText43->Text->Contains("-"))) {
					e->Handled = true;
					matrixText43->Text = "-";
					matrixText43->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText44_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText44->Text->Contains(",") && !this->matrixText44->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText44->Text->Contains("-"))) {
					e->Handled = true;
					matrixText44->Text = "-";
					matrixText44->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText45_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText45->Text->Contains(",") && !this->matrixText45->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText45->Text->Contains("-"))) {
					e->Handled = true;
					matrixText45->Text = "-";
					matrixText45->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText51_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText51->Text->Contains(",") && !this->matrixText51->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText51->Text->Contains("-"))) {
					e->Handled = true;
					matrixText51->Text = "-";
					matrixText51->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText52_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText52->Text->Contains(",") && !this->matrixText52->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText52->Text->Contains("-"))) {
					e->Handled = true;
					matrixText52->Text = "-";
					matrixText52->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText53_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText53->Text->Contains(",") && !this->matrixText53->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText53->Text->Contains("-"))) {
					e->Handled = true;
					matrixText53->Text = "-";
					matrixText53->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText54_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText54->Text->Contains(",") && !this->matrixText54->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText54->Text->Contains("-"))) {
					e->Handled = true;
					matrixText54->Text = "-";
					matrixText54->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}
			private: System::Void matrixText55_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				if (e->KeyChar == ',') {
					if (this->matrixText55->Text->Contains(",") && !this->matrixText55->SelectedText->Contains(","))
						e->Handled = true;
				}
				// Allow negative numbers
				else if (e->KeyChar == '-' && !(this->matrixText55->Text->Contains("-"))) {
					e->Handled = true;
					matrixText55->Text = "-";
					matrixText55->SelectionStart = 1;
				}
				// Accept only digits ",", "-" and the Backspace character
				else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
					e->Handled = true;
				}
			}

			private: System::Void matrixText11_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText11->Text);
					matrixText11->Text = number.ToString();
				}
				catch (...) {
					matrixText11->Text = "";
				}
			}
			private: System::Void matrixText12_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText12->Text);
					matrixText12->Text = number.ToString();
				}
				catch (...) {
					matrixText12->Text = "";
				}
			}
			private: System::Void matrixText13_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText13->Text);
					matrixText13->Text = number.ToString();
				}
				catch (...) {
					matrixText13->Text = "";
				}
			}
			private: System::Void matrixText14_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText14->Text);
					matrixText14->Text = number.ToString();
				}
				catch (...) {
					matrixText14->Text = "";
				}
			}
			private: System::Void matrixText15_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText15->Text);
					matrixText15->Text = number.ToString();
				}
				catch (...) {
					matrixText15->Text = "";
				}
			}
			private: System::Void matrixText21_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText21->Text);
					matrixText21->Text = number.ToString();
				}
				catch (...) {
					matrixText21->Text = "";
				}
			}
			private: System::Void matrixText22_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText22->Text);
					matrixText22->Text = number.ToString();
				}
				catch (...) {
					matrixText22->Text = "";
				}
			}
			private: System::Void matrixText23_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText23->Text);
					matrixText23->Text = number.ToString();
				}
				catch (...) {
					matrixText23->Text = "";
				}
			}
			private: System::Void matrixText24_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText24->Text);
					matrixText24->Text = number.ToString();
				}
				catch (...) {
					matrixText24->Text = "";
				}
			}
			private: System::Void matrixText25_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText25->Text);
					matrixText25->Text = number.ToString();
				}
				catch (...) {
					matrixText25->Text = "";
				}
			}
			private: System::Void matrixText31_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText31->Text);
					matrixText31->Text = number.ToString();
				}
				catch (...) {
					matrixText31->Text = "";
				}
			}
			private: System::Void matrixText32_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText32->Text);
					matrixText32->Text = number.ToString();
				}
				catch (...) {
					matrixText32->Text = "";
				}
			}
			private: System::Void matrixText33_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText33->Text);
					matrixText33->Text = number.ToString();
				}
				catch (...) {
					matrixText33->Text = "";
				}
			}
			private: System::Void matrixText34_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText34->Text);
					matrixText34->Text = number.ToString();
				}
				catch (...) {
					matrixText34->Text = "";
				}
			}
			private: System::Void matrixText35_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText35->Text);
					matrixText35->Text = number.ToString();
				}
				catch (...) {
					matrixText35->Text = "";
				}
			}
			private: System::Void matrixText41_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText41->Text);
					matrixText41->Text = number.ToString();
				}
				catch (...) {
					matrixText41->Text = "";
				}
			}
			private: System::Void matrixText42_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText42->Text);
					matrixText42->Text = number.ToString();
				}
				catch (...) {
					matrixText42->Text = "";
				}
			}
			private: System::Void matrixText43_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText43->Text);
					matrixText43->Text = number.ToString();
				}
				catch (...) {
					matrixText43->Text = "";
				}
			}
			private: System::Void matrixText44_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText44->Text);
					matrixText44->Text = number.ToString();
				}
				catch (...) {
					matrixText44->Text = "";
				}
			}
			private: System::Void matrixText45_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText45->Text);
					matrixText45->Text = number.ToString();
				}
				catch (...) {
					matrixText45->Text = "";
				}
			}
			private: System::Void matrixText51_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText51->Text);
					matrixText51->Text = number.ToString();
				}
				catch (...) {
					matrixText51->Text = "";
				}
			}
			private: System::Void matrixText52_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText52->Text);
					matrixText52->Text = number.ToString();
				}
				catch (...) {
					matrixText52->Text = "";
				}
			}
			private: System::Void matrixText53_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText53->Text);
					matrixText53->Text = number.ToString();
				}
				catch (...) {
					matrixText53->Text = "";
				}
			}
			private: System::Void matrixText54_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText54->Text);
					matrixText54->Text = number.ToString();
				}
				catch (...) {
					matrixText54->Text = "";
				}
			}
			private: System::Void matrixText55_Leave(System::Object^ sender, System::EventArgs^ e) {
				try {
					double number = System::Convert::ToDouble(matrixText55->Text);
					matrixText55->Text = number.ToString();
				}
				catch (...) {
					matrixText55->Text = "";
				}
			}
#pragma endregion

	private: System::Void MatrixNewTaskDialog_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	
};
}
