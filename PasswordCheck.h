#pragma once

namespace Passcheck {

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

	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
		System::Windows::Forms::Button^ buttonCheck;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->buttonCheck = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(438, 207);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Password";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(326, 262);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(341, 32);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(112, 356);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 35);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Strength ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->buttonCheck, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(388, 381);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(191, 100);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// buttonCheck
			// 
			this->buttonCheck->Location = System::Drawing::Point(3, 3);
			this->buttonCheck->Name = L"buttonCheck";
			this->buttonCheck->Size = System::Drawing::Size(185, 94);
			this->buttonCheck->TabIndex = 0;
			this->buttonCheck->Text = L"Check";
			this->buttonCheck->UseVisualStyleBackColor = true;
			this->buttonCheck->Click += gcnew System::EventHandler(this, &MyForm::buttonCheck_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(896, 881);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->MinimumSize = System::Drawing::Size(912, 920);
			this->Name = L"MyForm";
			this->Text = L"Password Checker";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void buttonCheck_Click(System::Object^ sender, System::EventArgs^ e) { // to make the check button function and output strength 
		String^ password = textBox1->Text;
		String^ strength = CheckPasswordStrength(password);

		label2->Text = "Strength: " + strength;
		label2->ForeColor = strength == "Strong" ? System::Drawing::Color::Green :
			strength == "Medium" ? System::Drawing::Color::Orange :
			System::Drawing::Color::Red;
	}

	private: String^ CheckPasswordStrength(String^ password) { // to check wheather the password is strong, weak, or medium 
		int length = password->Length;
		bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

		for each (Char ch in password) {
			if (Char::IsUpper(ch)) hasUpper = true;
			if (Char::IsLower(ch)) hasLower = true;
			if (Char::IsDigit(ch)) hasDigit = true;
			if (!Char::IsLetterOrDigit(ch)) hasSpecial = true;
		}

		if (length >= 10 && hasUpper && hasLower && hasDigit && hasSpecial) {
			return "Strong";
		}
		else if (length >= 5 && ((hasUpper && hasLower) || (hasDigit && hasLower) || (hasUpper && hasDigit))) {
			return "Medium";
		}
		else {
			return "Weak";
		}
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
