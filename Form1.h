#pragma once
#include <fstream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>

namespace Cinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	using namespace std;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		void save()
		{
			StreamWriter ^sw = gcnew StreamWriter("Cinema.bin");
			for(Int32 n=0; n<listBox1->Items->Count; ++n)
				{
				sw->WriteLine(listBox1->Items[n]);        
				}
			sw->Flush();
			sw->Close();
		}

		bool THE_Flag;
	private: System::Windows::Forms::Button^  button6;
	public: 
		bool THE_Sort;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Button^  button5;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(369, 290);
			this->listBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 308);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Загрузка";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(103, 308);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Сохранение";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(194, 308);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Удаление";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(285, 308);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Сортировка";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(432, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(237, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(384, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Фильм:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(426, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Ряд:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(461, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(22, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"01";
			this->textBox2->WordWrap = false;
			this->textBox2->Leave += gcnew System::EventHandler(this, &Form1::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(602, 40);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(21, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"01";
			this->textBox3->WordWrap = false;
			this->textBox3->Leave += gcnew System::EventHandler(this, &Form1::textBox3_Leave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(554, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Место:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(471, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Цена (р):";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(528, 67);
			this->textBox4->MaxLength = 4;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(57, 20);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"100";
			this->textBox4->WordWrap = false;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(387, 136);
			this->textBox5->MaxLength = 4;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(36, 20);
			this->textBox5->TabIndex = 13;
			this->textBox5->Text = L"2000";
			this->textBox5->Leave += gcnew System::EventHandler(this, &Form1::textBox5_Leave);
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(429, 136);
			this->textBox6->MaxLength = 2;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(40, 20);
			this->textBox6->TabIndex = 14;
			this->textBox6->Text = L"01";
			this->textBox6->Leave += gcnew System::EventHandler(this, &Form1::textBox6_Leave);
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(475, 136);
			this->textBox7->MaxLength = 2;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(40, 20);
			this->textBox7->TabIndex = 15;
			this->textBox7->Text = L"01";
			this->textBox7->Leave += gcnew System::EventHandler(this, &Form1::textBox7_Leave);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(497, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Дата и время";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(393, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Год";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(429, 120);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Месяц";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(478, 120);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"День";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(583, 136);
			this->textBox8->MaxLength = 2;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(40, 20);
			this->textBox8->TabIndex = 20;
			this->textBox8->Text = L"12";
			this->textBox8->Leave += gcnew System::EventHandler(this, &Form1::textBox8_Leave);
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(629, 136);
			this->textBox9->MaxLength = 2;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(40, 20);
			this->textBox9->TabIndex = 21;
			this->textBox9->Text = L"00";
			this->textBox9->Leave += gcnew System::EventHandler(this, &Form1::textBox9_Leave);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(590, 120);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Час";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(627, 120);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Минута";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(455, 191);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(58, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"ID Номер:";
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(517, 188);
			this->textBox10->MaxLength = 4;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(57, 20);
			this->textBox10->TabIndex = 25;
			this->textBox10->Text = L"0001";
			this->textBox10->Leave += gcnew System::EventHandler(this, &Form1::textBox10_Leave);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(500, 232);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 23);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Добавление";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(506, 308);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 27;
			this->button6->Text = L"Шоколад";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 340);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Name = L"Form1";
			this->Text = L"Бронирование билетов";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			listBox1->Items->Clear();
			for each (String^ line in File::ReadAllLines("Cinema.bin"))
				{
					listBox1->Items->Add(String::Format(line));
				}
			textBox1->Enabled=true;
			textBox2->Enabled=true;
			textBox3->Enabled=true;
			textBox4->Enabled=true;
			textBox5->Enabled=true;
			textBox6->Enabled=true;
			textBox7->Enabled=true;
			textBox8->Enabled=true;
			textBox9->Enabled=true;
			textBox10->Enabled=true;
			button3->Enabled=true;
			button2->Enabled=true;
			button4->Enabled=true;
			button5->Enabled=true;
		}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			save();
			THE_Flag = false;
		}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if(listBox1->SelectedIndex!=-1)
				listBox1->Items->RemoveAt(listBox1->SelectedIndex);
			THE_Flag = true;
		}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
		{
			save();
			if (THE_Sort == false)
			{
				ifstream in("Cinema.bin");
				vector<string> vs;
				string s;
				while(getline(in,s)) vs.push_back(s);
				sort(vs.begin(),vs.end(), greater<string>());
				ofstream on("Cinema.bin");
				copy(vs.begin(),vs.end(),ostream_iterator<string>(on,"\n"));
				listBox1->Items->Clear();
				THE_Sort = true;
				button4->Text= "Сортировка (v)";
			}
			else
			{
				ifstream in("Cinema.bin");
				vector<string> vs;
				string s;
				while(getline(in,s)) vs.push_back(s);
				sort(vs.begin(),vs.end(), less<string>());
				ofstream on("Cinema.bin");
				copy(vs.begin(),vs.end(),ostream_iterator<string>(on,"\n"));
				listBox1->Items->Clear();
				THE_Sort = false;
				button4->Text= "Сортировка (^)";
			}
			for each (String^ line in File::ReadAllLines("Cinema.bin"))
			{
				listBox1->Items->Add(String::Format(line));
			}
			THE_Flag = false;
		}
	private: System::Void textBox7_Leave(System::Object^  sender, System::EventArgs^  e)
		{
		if (textBox7->Text->Length == 0)
		{
			textBox7->Text = "01";
			System::Media::SystemSounds::Beep->Play();
		}
		else
			{
		int day = Convert::ToInt32(textBox7->Text);
		int month = Convert::ToInt32(textBox6->Text);
		int year = Convert::ToInt32(textBox5->Text);
		if ((day > 31) && ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)))
		{
			textBox7->Text="31";
			System::Media::SystemSounds::Beep->Play();
		}
		else if ((day > 30) && ((month == 4) || (month == 6) || (month == 9) || (month == 11)))
		{
			textBox7->Text="30";
			System::Media::SystemSounds::Beep->Play();
		}
		else if ((day > 29) && (month == 2) && (year % 4 == 0))
		{
			textBox7->Text="29";
			System::Media::SystemSounds::Beep->Play();
		}
		else if ((day > 28) && (month == 2) && (year % 4 != 0))
		{
			textBox7->Text="28";
			System::Media::SystemSounds::Beep->Play();
		}
		else if ((day > 0)&&(day < 10)&&(textBox7->Text->Length != 2))
		{
			textBox7->Text = "0" + textBox7->Text;
			System::Media::SystemSounds::Beep->Play();
		}
		else if (day < 1)
		{
			textBox7->Text="01";
			System::Media::SystemSounds::Beep->Play();
		}
		}
	}
	private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
		{
			if (THE_Flag == true)
				if (MessageBox::Show("У вас есть несохранённые данные. Сохранить?", "Билеты", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
					save();
		}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
		{
			listBox1->Items->Add(String::Format(textBox1->Text+"|"+textBox2->Text+"|"+textBox3->Text+"|"+textBox4->Text+"р|"+textBox5->Text+"-"+textBox6->Text+"-"+textBox7->Text+"|"+textBox8->Text+":"+textBox9->Text+"|"+textBox10->Text));
			THE_Flag = true;
		}
	private: System::Void textBox5_Leave(System::Object^  sender, System::EventArgs^  e)
		{
			int year = Convert::ToInt32(textBox5->Text);
			if (year<2000)
				textBox5->Text="2000";
		}
	private: System::Void textBox6_Leave(System::Object^  sender, System::EventArgs^  e)
		{
			int month = Convert::ToInt32(textBox6->Text);
			if (month>12)
				textBox5->Text="01";
			else if ((Convert::ToInt32(textBox6->Text)<10)&&(Convert::ToInt32(textBox6->Text)>0)&&(textBox6->Text->Length != 2))
			{
				textBox6->Text = "0" + textBox6->Text;
				System::Media::SystemSounds::Beep->Play();
			}
		}
	private: System::Void textBox10_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		if (textBox10->Text->Length == 0)
		{
			textBox10->Text = "0001";
			System::Media::SystemSounds::Beep->Play();
		}
		else if (Convert::ToInt32(textBox10->Text)<1)
		{
			textBox10->Text = "0001";
			System::Media::SystemSounds::Beep->Play();
		}
		else if ((Convert::ToInt32(textBox10->Text)<10)&&(Convert::ToInt32(textBox10->Text)>0)&&(textBox10->Text->Length != 4))
		{
			textBox10->Text = "000" + textBox10->Text;
			System::Media::SystemSounds::Beep->Play();
		}
		else if ((Convert::ToInt32(textBox10->Text)>9)&&(Convert::ToInt32(textBox10->Text)<100)&&(textBox10->Text->Length != 4))
		{
			textBox10->Text = "00" + textBox10->Text;
			System::Media::SystemSounds::Beep->Play();
		}
		else if ((Convert::ToInt32(textBox10->Text)>99)&&(Convert::ToInt32(textBox10->Text)<1000)&&(textBox10->Text->Length != 4))
		{
			textBox10->Text = "0" + textBox10->Text;
			System::Media::SystemSounds::Beep->Play();
		}
	}
	private: System::Void textBox8_Leave(System::Object^  sender, System::EventArgs^  e)
		{
			int hour = Convert::ToInt32(textBox8->Text);
			if (hour>23)
				textBox8->Text="00";
			else if ((Convert::ToInt32(textBox8->Text)<10)&&(Convert::ToInt32(textBox8->Text)>0)&&(textBox8->Text->Length != 2))
			{
				textBox8->Text = "0" + textBox8->Text;
				System::Media::SystemSounds::Beep->Play();
			}
		}
private: System::Void textBox9_Leave(System::Object^  sender, System::EventArgs^  e)
		{
			int minute = Convert::ToInt32(textBox9->Text);
			if (minute>59)
				textBox8->Text="00";
			else if ((Convert::ToInt32(textBox9->Text)<10)&&(Convert::ToInt32(textBox9->Text)>0)&&(textBox9->Text->Length != 2))
			{
				textBox9->Text = "0" + textBox9->Text;
				System::Media::SystemSounds::Beep->Play();
			}
	
		}
	private: System::Void textBox2_Leave(System::Object^  sender, System::EventArgs^  e)
		{
			if ((Convert::ToInt32(textBox2->Text)>0)&&(Convert::ToInt32(textBox2->Text)<10)&&(textBox2->Text->Length != 2))
				{
					textBox2->Text = "0" + textBox2->Text;
					System::Media::SystemSounds::Beep->Play();
				}
		}
	private: System::Void textBox3_Leave(System::Object^  sender, System::EventArgs^  e)
		{
			if ((Convert::ToInt32(textBox3->Text)>0)&&(Convert::ToInt32(textBox3->Text)<10)&&(textBox3->Text->Length != 2))
				{
					textBox3->Text = "0" + textBox3->Text;
					System::Media::SystemSounds::Beep->Play();
				}
		}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
		{
			MessageBox::Show("Шоколад!", "Шоколад?", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	};
}