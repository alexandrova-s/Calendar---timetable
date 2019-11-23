#pragma once
#include<fstream>
#include<time.h>



namespace Projekt {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o Terminarz
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		static int Second;
		static int Minute;
		static int Hour;

	private: System::Windows::Forms::Timer^  Timer;



	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DataGridViewLinkColumn^  Data;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Godzina;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Typwydarzenia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Wydarzenie;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Usun;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;




	private: System::Windows::Forms::Label^  Time;




	public:
		MyForm(void)
		{
			InitializeComponent();

			StreamReader^ fromFile2 = gcnew StreamReader("daty.txt");
			String^ s;
			for (int i = 0; s = fromFile2->ReadLine(); i++)
			{
				monthCalendar1->AddBoldedDate(DateTime::Parse(s));
			}

			monthCalendar1->UpdateBoldedDates();
			fromFile2->Close();
			delete fromFile2;

		}

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;


	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::ComboBox^  comboBox2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;


	private: System::Windows::Forms::Timer^  timer1;



	private: System::ComponentModel::IContainer^  components;


	protected:

	private:


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Data = (gcnew System::Windows::Forms::DataGridViewLinkColumn());
			this->Godzina = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Typwydarzenia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Wydarzenie = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Usun = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			this->SuspendLayout();
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->monthCalendar1->ForeColor = System::Drawing::Color::Black;
			this->monthCalendar1->Location = System::Drawing::Point(0, 0);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar1_DateChanged);
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar1_DateSelected);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::MistyRose;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Data, this->Godzina,
					this->Typwydarzenia, this->Wydarzenie, this->Usun
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(556, 186);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Data
			// 
			this->Data->ActiveLinkColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Data->DefaultCellStyle = dataGridViewCellStyle1;
			this->Data->HeaderText = L"Data";
			this->Data->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->Data->LinkColor = System::Drawing::Color::Black;
			this->Data->Name = L"Data";
			this->Data->ReadOnly = true;
			this->Data->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Data->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Data->VisitedLinkColor = System::Drawing::Color::Black;
			this->Data->Width = 80;
			// 
			// Godzina
			// 
			this->Godzina->HeaderText = L"Godzina";
			this->Godzina->Name = L"Godzina";
			this->Godzina->ReadOnly = true;
			this->Godzina->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Godzina->ToolTipText = L"jhuhoh";
			this->Godzina->Width = 82;
			// 
			// Typwydarzenia
			// 
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Indigo;
			this->Typwydarzenia->DefaultCellStyle = dataGridViewCellStyle2;
			this->Typwydarzenia->HeaderText = L"Rodzaj wydarzenia";
			this->Typwydarzenia->Name = L"Typwydarzenia";
			// 
			// Wydarzenie
			// 
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Wydarzenie->DefaultCellStyle = dataGridViewCellStyle3;
			this->Wydarzenie->HeaderText = L"Wydarzenie";
			this->Wydarzenie->Name = L"Wydarzenie";
			this->Wydarzenie->Width = 200;
			// 
			// Usun
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::Maroon;
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Maroon;
			dataGridViewCellStyle4->NullValue = nullptr;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Maroon;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::Maroon;
			this->Usun->DefaultCellStyle = dataGridViewCellStyle4;
			this->Usun->HeaderText = L"Usuñ";
			this->Usun->Name = L"Usun";
			this->Usun->Width = 50;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(66, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 29);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Dodaj wydarzenie";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Urodziny", L"Egzamin", L"Spotkanie", L"Projekt",
					L"Inne"
			});
			this->comboBox2->Location = System::Drawing::Point(67, 47);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(143, 21);
			this->comboBox2->TabIndex = 6;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(61, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 26);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Rodzaj wydarzenia";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(66, 187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 29);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Zapisz dane";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(66, 222);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 28);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Wczytaj";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->BackColor = System::Drawing::Color::RosyBrown;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->dataGridView1);
			this->splitContainer1->Size = System::Drawing::Size(556, 482);
			this->splitContainer1->SplitterDistance = 292;
			this->splitContainer1->TabIndex = 10;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->BackColor = System::Drawing::Color::RosyBrown;
			this->splitContainer2->Panel1->Controls->Add(this->splitContainer3);
			this->splitContainer2->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::splitContainer2_Panel1_Paint);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->BackColor = System::Drawing::Color::RosyBrown;
			this->splitContainer2->Panel2->Controls->Add(this->label2);
			this->splitContainer2->Panel2->Controls->Add(this->comboBox1);
			this->splitContainer2->Panel2->Controls->Add(this->label1);
			this->splitContainer2->Panel2->Controls->Add(this->button2);
			this->splitContainer2->Panel2->Controls->Add(this->button3);
			this->splitContainer2->Panel2->Controls->Add(this->comboBox2);
			this->splitContainer2->Panel2->Controls->Add(this->button1);
			this->splitContainer2->Size = System::Drawing::Size(556, 292);
			this->splitContainer2->SplitterDistance = 296;
			this->splitContainer2->TabIndex = 0;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->Time);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->monthCalendar1);
			this->splitContainer3->Size = System::Drawing::Size(296, 292);
			this->splitContainer3->SplitterDistance = 84;
			this->splitContainer3->TabIndex = 0;
			// 
			// Time
			// 
			this->Time->AutoSize = true;
			this->Time->Font = (gcnew System::Drawing::Font(L"Gentium Basic", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Time->Location = System::Drawing::Point(0, 5);
			this->Time->Name = L"Time";
			this->Time->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Time->Size = System::Drawing::Size(258, 74);
			this->Time->TabIndex = 2;
			this->Time->Text = L"00:00:00";
			this->Time->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Time->Click += gcnew System::EventHandler(this, &MyForm::Time_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(98, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 26);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Godzina";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(29) {
				L"Ca³y dzieñ", L"Rano", L"Po³udnie", L"Popo³udnie",
					L"Wieczór", L"00:00", L"01:00", L"02:00", L"03:00", L"04:00", L"05:00", L"06:00", L"07:00", L"08:00", L"08:00", L"10:00", L"11:00",
					L"12:00", L"13:00", L"14:00", L"15:00", L"16:00", L"17:00", L"18:00", L"19:00", L"20:00", L"21:00", L"22:00", L"23:00"
			});
			this->comboBox1->Location = System::Drawing::Point(67, 106);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(143, 21);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// Timer
			// 
			this->Timer->Enabled = true;
			this->Timer->Interval = 1000;
			this->Timer->Tick += gcnew System::EventHandler(this, &MyForm::Timer_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 482);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"MyForm";
			this->Text = L"Terminarz";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel1->PerformLayout();
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//przycisk 'Dodaj wydarzenie'
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (monthCalendar1->SelectionStart < monthCalendar1->TodayDate){
					 MessageBox::Show("Ten termin ju¿ min¹³ i nie mo¿esz zapisaæ wydarzenia");
					 this->errorProvider1->SetError(this->dataGridView1, "");
				 }
				 else
				 {
					 
					 this->dataGridView1->Rows->Add(monthCalendar1->SelectionStart.ToShortDateString(), this->comboBox1->Text, this->comboBox2->Text);


					 monthCalendar1->AddBoldedDate(monthCalendar1->SelectionStart);
					 monthCalendar1->UpdateBoldedDates();
					 this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar1_DateSelected);
					 this->errorProvider1->Clear();
					 
					
				 }
				 
				 

	}

	private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 if (this->dataGridView1->CurrentCell->ColumnIndex == 4){
					 monthCalendar1->RemoveBoldedDate(monthCalendar1->SelectionStart);
					 monthCalendar1->UpdateBoldedDates();
					 this->dataGridView1->Rows->RemoveAt(this->dataGridView1->CurrentCell->RowIndex);
				 }


				 
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 StreamWriter^ outFile = gcnew StreamWriter("daneterminarza.txt");
				 
				 for (int i = 0; i < (this->dataGridView1->RowCount); i++)
				 {
					 outFile->WriteLine("************");
					 outFile->WriteLine(this->dataGridView1->Rows[i]->Cells[0]->Value);
					 outFile->WriteLine(this->dataGridView1->Rows[i]->Cells[1]->Value);
					 outFile->WriteLine(this->dataGridView1->Rows[i]->Cells[2]->Value);
					 outFile->WriteLine(this->dataGridView1->Rows[i]->Cells[3]->Value);
				 }

			
				 MessageBox::Show("Dane zapisane pomyœlnie!");
				 outFile->Close();
				 delete outFile;
				 

	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 StreamReader^ fromFile = gcnew StreamReader("daneterminarza.txt");
			 

			 dataGridView1->Rows->Clear();


			 for (int i = 0; fromFile->ReadLine(); i++)
			 {
				 this->dataGridView1->Rows->Add(fromFile->ReadLine(), fromFile->ReadLine(), fromFile->ReadLine(), fromFile->ReadLine());
			 }
			 
		

			 StreamWriter^ outFile2 = gcnew StreamWriter("daty.txt");


			 for (int i = 0; i < (this->dataGridView1->RowCount); i++)
			 {
				 outFile2->WriteLine(this->dataGridView1->Rows[i]->Cells[0]->Value);
			 }

			 outFile2->Close();
			 delete outFile2;

			 StreamReader^ fromFile2 = gcnew StreamReader("daty.txt");
			 monthCalendar1->RemoveAllBoldedDates();
			 String^ s;
			 for (int i = 0;  s=fromFile2->ReadLine(); i++)
			 {
				 monthCalendar1->AddBoldedDate(DateTime::Parse(s));
			 }

			 monthCalendar1->UpdateBoldedDates();
			 fromFile2->Close();
			 delete fromFile2;


			 fromFile->Close();
			 delete fromFile;
}

private: System::Void splitContainer2_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void monthCalendar1_DateSelected(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
}
private: System::Void Time_Click(System::Object^  sender, System::EventArgs^  e) {
	Timer->Enabled = true;
}
private: System::Void Timer_Tick(System::Object^  sender, System::EventArgs^  e) {


		Timer->Enabled = true;
		Second++;
		if (Second == 60)
		{
			Second = 0;
			Minute++;
			if (Minute == 60)
			{
				Minute = 0;
				Hour++;
			}
		}

		DateTime time1 = DateTime::Now;
		Time->Text = time1.Now.Hour.ToString() + ":" + time1.Now.Minute.ToString() + ":" + time1.Now.Second.ToString();
}

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
