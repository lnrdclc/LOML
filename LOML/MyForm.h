#pragma once

namespace LOML {

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
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ tbFirstName;

	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbLastName;
	private: System::Windows::Forms::ComboBox^ cbMonth;
	private: System::Windows::Forms::Label^ lblAnniv;
	private: System::Windows::Forms::ComboBox^ cbDays;

	private: System::Windows::Forms::Button^ btnSubmit;

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->cbMonth = (gcnew System::Windows::Forms::ComboBox());
			this->lblAnniv = (gcnew System::Windows::Forms::Label());
			this->cbDays = (gcnew System::Windows::Forms::ComboBox());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"qwer.jpg");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-54, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(330, 280);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(520, 326);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// tbFirstName
			// 
			this->tbFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbFirstName->Location = System::Drawing::Point(232, 55);
			this->tbFirstName->Multiline = true;
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(190, 26);
			this->tbFirstName->TabIndex = 2;
			// 
			// lblFirstName
			// 
			this->lblFirstName->AutoSize = true;
			this->lblFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFirstName->Location = System::Drawing::Point(232, 36);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(90, 16);
			this->lblFirstName->TabIndex = 3;
			this->lblFirstName->Text = L"First Name: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(232, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Last Name:";
			// 
			// tbLastName
			// 
			this->tbLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbLastName->Location = System::Drawing::Point(232, 114);
			this->tbLastName->Multiline = true;
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(190, 26);
			this->tbLastName->TabIndex = 4;
			// 
			// cbMonth
			// 
			this->cbMonth->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbMonth->FormattingEnabled = true;
			this->cbMonth->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"January", L"February", L"March", L"April", L"May ",
					L"June ", L"July", L"August", L"September", L"October", L"November ", L"December"
			});
			this->cbMonth->Location = System::Drawing::Point(232, 179);
			this->cbMonth->Name = L"cbMonth";
			this->cbMonth->Size = System::Drawing::Size(85, 24);
			this->cbMonth->TabIndex = 6;
			// 
			// lblAnniv
			// 
			this->lblAnniv->AutoSize = true;
			this->lblAnniv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAnniv->Location = System::Drawing::Point(232, 160);
			this->lblAnniv->Name = L"lblAnniv";
			this->lblAnniv->Size = System::Drawing::Size(97, 16);
			this->lblAnniv->TabIndex = 7;
			this->lblAnniv->Text = L"Anniversary: ";
			// 
			// cbDays
			// 
			this->cbDays->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbDays->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbDays->FormattingEnabled = true;
			this->cbDays->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27",
					L"28", L"29", L"30", L"31"
			});
			this->cbDays->Location = System::Drawing::Point(337, 179);
			this->cbDays->Name = L"cbDays";
			this->cbDays->Size = System::Drawing::Size(85, 24);
			this->cbDays->TabIndex = 8;
			// 
			// btnSubmit
			// 
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->Location = System::Drawing::Point(250, 227);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(140, 39);
			this->btnSubmit->TabIndex = 9;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &MyForm::btnSubmit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(444, 308);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->cbDays);
			this->Controls->Add(this->lblAnniv);
			this->Controls->Add(this->cbMonth);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->lblFirstName);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Verification";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		cbMonth->SelectedIndex = 0;
		cbDays->SelectedIndex = 0;

	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ firstName;
		String^ lastName;
		String^ month;
		int days;
		bool isValid = true;

		if (tbFirstName->Text->Trim()->Length > 1) {
			if (tbFirstName->Text == "Rice" || tbFirstName->Text == "Rizallyna" || tbFirstName->Text == "rice" || tbFirstName->Text == "rizallyna") {
				firstName = tbFirstName->Text;
			}
			else MessageBox::Show("Invalid Name!", "Invalid", MessageBoxButtons::RetryCancel, MessageBoxIcon::Error);
		}
		else {
			isValid = false;
			MessageBox::Show("Enter First Name!", "Invalid", MessageBoxButtons::RetryCancel, MessageBoxIcon::Exclamation);
		}

		if (tbLastName->Text->Trim()->Length > 1) {
			if (tbLastName->Text == "Mercene" || tbLastName->Text == "mercene") {
				firstName = tbFirstName->Text;
			}
			else MessageBox::Show("Invalid Last Name!", "Invalid", MessageBoxButtons::RetryCancel, MessageBoxIcon::Error);
		}
		else {
			isValid = false;
			MessageBox::Show("Enter Last Name!", "Invalid", MessageBoxButtons::RetryCancel, MessageBoxIcon::Exclamation);
		}


		if (cbMonth->SelectedIndex == 6) isValid;
		else {
			isValid = false;
			MessageBox::Show("Wrong Month, May Iba Kang Ka Monthsary No!", "Error", MessageBoxButtons::RetryCancel, MessageBoxIcon::Error);
		}
		if (cbDays->SelectedIndex == 21) isValid;
		else {
			isValid = false;
			MessageBox::Show("Wrong Day, May Iba Kang Ka Monthsary No?!", "Error", MessageBoxButtons::RetryCancel, MessageBoxIcon::Error);
		}

		if (isValid) {
			MessageBox::Show("As you can see, this program is only accesible by you.", "To My Rice-swaaan", MessageBoxButtons::OK, MessageBoxIcon::Information);
			MessageBox::Show("Virus Detected!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			MessageBox::Show("ILOVEYOU", "Virus", MessageBoxButtons::OK, MessageBoxIcon::Error);
			MessageBox::Show("ILOVEYOU, sometimes referred to as Love Bug or Love Letter for you, was a computer worm that infected over ten million Windows personal computers on and after 5 May 2000.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			MessageBox::Show("Nevertheless, I just wanted to say na Imissyou bb, sabi sayo madali lang to e.", "To My Rice-swaaan", MessageBoxButtons::OK, MessageBoxIcon::Information);
			MessageBox::Show("Goodluck lagi sa acads mo! Nandito lang me lagi for u <3", "To My Rice-swaaan", MessageBoxButtons::OK, MessageBoxIcon::Information);
			MessageBox::Show("Iloveyouu always my babyy", "To My Rice-swaaan", MessageBoxButtons::OK, MessageBoxIcon::Information);


		}
		
			
		

	}
	
};
}
