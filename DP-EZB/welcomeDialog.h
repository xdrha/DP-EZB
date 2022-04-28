﻿#pragma once

namespace DP_EZB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for welcomeDialog
	/// </summary>
	public ref class welcomeDialog : public System::Windows::Forms::Form
	{
	public:
		welcomeDialog(void)
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
		~welcomeDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ slrButton;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(welcomeDialog::typeid));
			this->slrButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// slrButton
			// 
			this->slrButton->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->slrButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->slrButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->slrButton->FlatAppearance->BorderSize = 0;
			this->slrButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->slrButton->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->slrButton->ForeColor = System::Drawing::SystemColors::Window;
			this->slrButton->Location = System::Drawing::Point(1146, 350);
			this->slrButton->Margin = System::Windows::Forms::Padding(5);
			this->slrButton->Name = L"slrButton";
			this->slrButton->Size = System::Drawing::Size(120, 33);
			this->slrButton->TabIndex = 6;
			this->slrButton->Text = L"OK";
			this->slrButton->UseVisualStyleBackColor = false;
			this->slrButton->Click += gcnew System::EventHandler(this, &welcomeDialog::slrButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 34);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(436, 32);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Vitajte v aplikácií EZB kalkulačka !";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(46, 110);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(954, 275);
			this->label2->TabIndex = 8;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// welcomeDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1280, 401);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->slrButton);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::Window;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"welcomeDialog";
			this->Opacity = 0.9;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"welcomeDialog";
			this->Load += gcnew System::EventHandler(this, &welcomeDialog::welcomeDialog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void welcomeDialog_Load(System::Object^ sender, System::EventArgs^ e) {
			this->label2->Text =	"Interaktívna aplikácia pomáha pri počítaní príkladov\r\n"+
									"lineárnej algebry a lineárneho programovania.\r\n" +
									"Pre vytvorenie nového výpočtu najprv zvoľte typ úlohy\r\n"+
									"z ponuky záložiek a následne vytvorte nový výpočet kliknutím na tlačidlo." +
			"\r\n\r\n\r\n\r\n\r\n\r\n\r\nVšetky potrebné informácie k ovládaniu aplikácie aj riešeným úlohám nájdete v pomocníku vpravo hore.";


	}
private: System::Void slrButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}