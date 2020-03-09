#pragma once
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include<vector>
using namespace std;
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;

	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;










	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(1, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1000, 540);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox16);
			this->tabPage1->Controls->Add(this->textBox15);
			this->tabPage1->Controls->Add(this->textBox14);
			this->tabPage1->Controls->Add(this->textBox13);
			this->tabPage1->Controls->Add(this->textBox12);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->textBox10);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(992, 514);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая задача";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(143, 173);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(67, 20);
			this->textBox16->TabIndex = 17;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(15, 173);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(124, 20);
			this->textBox15->TabIndex = 16;
			this->textBox15->Text = L"Параметр Omega";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(809, 216);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(149, 20);
			this->textBox14->TabIndex = 15;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &Form1::textBox14_TextChanged);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(809, 178);
			this->textBox13->Margin = System::Windows::Forms::Padding(2);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(149, 18);
			this->textBox13->TabIndex = 14;
			this->textBox13->Text = L"Общая погрешность:";
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &Form1::textBox13_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(809, 141);
			this->textBox12->Margin = System::Windows::Forms::Padding(2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(149, 20);
			this->textBox12->TabIndex = 13;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox12_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(842, 71);
			this->textBox11->Margin = System::Windows::Forms::Padding(2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(73, 20);
			this->textBox11->TabIndex = 12;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(809, 107);
			this->textBox10->Margin = System::Windows::Forms::Padding(2);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(149, 18);
			this->textBox10->TabIndex = 11;
			this->textBox10->Text = L"Достигнута точность:";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox10_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(809, 37);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(149, 20);
			this->textBox9->TabIndex = 10;
			this->textBox9->Text = L"Число затраченных шагов:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(15, 141);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(125, 20);
			this->textBox8->TabIndex = 9;
			this->textBox8->Text = L"Точность метода";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(15, 107);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(125, 20);
			this->textBox7->TabIndex = 8;
			this->textBox7->Text = L"Ограничение шагов";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(15, 71);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(125, 20);
			this->textBox6->TabIndex = 7;
			this->textBox6->Text = L"Число разбиений по y:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(15, 37);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(125, 20);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L"Число разбиений по x:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(143, 141);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(68, 20);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"1e-008";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(143, 107);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"500";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(143, 71);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(68, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"3";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(143, 37);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(51, 432);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Решение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(228, 10);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(565, 495);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->textBox18);
			this->tabPage2->Controls->Add(this->textBox19);
			this->tabPage2->Controls->Add(this->textBox20);
			this->tabPage2->Controls->Add(this->textBox21);
			this->tabPage2->Controls->Add(this->textBox22);
			this->tabPage2->Controls->Add(this->textBox23);
			this->tabPage2->Controls->Add(this->textBox24);
			this->tabPage2->Controls->Add(this->textBox25);
			this->tabPage2->Controls->Add(this->textBox26);
			this->tabPage2->Controls->Add(this->textBox27);
			this->tabPage2->Controls->Add(this->textBox28);
			this->tabPage2->Controls->Add(this->textBox29);
			this->tabPage2->Controls->Add(this->textBox30);
			this->tabPage2->Controls->Add(this->textBox31);
			this->tabPage2->Controls->Add(this->textBox32);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(992, 514);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Основная задача";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(153, 173);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(67, 20);
			this->textBox17->TabIndex = 35;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(25, 173);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(124, 20);
			this->textBox18->TabIndex = 34;
			this->textBox18->Text = L"Параметр Omega";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(819, 216);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(149, 20);
			this->textBox19->TabIndex = 33;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(819, 178);
			this->textBox20->Margin = System::Windows::Forms::Padding(2);
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(149, 18);
			this->textBox20->TabIndex = 32;
			this->textBox20->Text = L"Общая погрешность:";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(819, 141);
			this->textBox21->Margin = System::Windows::Forms::Padding(2);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(149, 20);
			this->textBox21->TabIndex = 31;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(852, 71);
			this->textBox22->Margin = System::Windows::Forms::Padding(2);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(73, 20);
			this->textBox22->TabIndex = 30;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(819, 107);
			this->textBox23->Margin = System::Windows::Forms::Padding(2);
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(149, 18);
			this->textBox23->TabIndex = 29;
			this->textBox23->Text = L"Достигнута точность:";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(819, 37);
			this->textBox24->Margin = System::Windows::Forms::Padding(2);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(149, 20);
			this->textBox24->TabIndex = 28;
			this->textBox24->Text = L"Число затраченных шагов:";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(25, 141);
			this->textBox25->Margin = System::Windows::Forms::Padding(2);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(125, 20);
			this->textBox25->TabIndex = 27;
			this->textBox25->Text = L"Точность метода";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(25, 107);
			this->textBox26->Margin = System::Windows::Forms::Padding(2);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(125, 20);
			this->textBox26->TabIndex = 26;
			this->textBox26->Text = L"Ограничение шагов";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(25, 71);
			this->textBox27->Margin = System::Windows::Forms::Padding(2);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(125, 20);
			this->textBox27->TabIndex = 25;
			this->textBox27->Text = L"Число разбиений по y:";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(25, 37);
			this->textBox28->Margin = System::Windows::Forms::Padding(2);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(125, 20);
			this->textBox28->TabIndex = 24;
			this->textBox28->Text = L"Число разбиений по x:";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(153, 141);
			this->textBox29->Margin = System::Windows::Forms::Padding(2);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(68, 20);
			this->textBox29->TabIndex = 23;
			this->textBox29->Text = L"1e-008";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(153, 107);
			this->textBox30->Margin = System::Windows::Forms::Padding(2);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(68, 20);
			this->textBox30->TabIndex = 22;
			this->textBox30->Text = L"500";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(153, 71);
			this->textBox31->Margin = System::Windows::Forms::Padding(2);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(68, 20);
			this->textBox31->TabIndex = 21;
			this->textBox31->Text = L"3";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(153, 37);
			this->textBox32->Margin = System::Windows::Forms::Padding(2);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(68, 20);
			this->textBox32->TabIndex = 20;
			this->textBox32->Text = L"3";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(61, 432);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 40);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Решение";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(238, 10);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(565, 495);
			this->dataGridView2->TabIndex = 18;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 538);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Решение задачи Дирихле для уравнения Пуассона";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		double func(double x, double y)
		{
			return 1 - x * x - y * y;
		}
		//вычисления
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int Nmax = Convert::ToDouble(textBox3->Text);
		int S = 0;
		double w = Convert::ToDouble(textBox16->Text);
		double eps = Convert::ToDouble(textBox4->Text);
		double eps_max = 0;
		double eps_cur = 0;
		double a2, k2, h2;
		int n = Convert::ToDouble(textBox1->Text);
		int m = Convert::ToDouble(textBox2->Text);
		this->dataGridView1->ColumnCount = n + 2;
		this->dataGridView1->RowCount = m + 2;
		double v[200][200] = { 0 };
		double f[200][200];
		double a = -1.0, b = 1.0, c = -1.0, d = 1.0;
		int i, j;
		int p, r;
		double v_old;
		double v_new;
		bool ff = false;
		double h = (b - a) / n;
		double k = (d - c) / m;
		h2 = (n / (b - a)) * (n / (b - a));
		k2 = (m / (d - c)) * (m / (d - c));
		a2 = -2 * (h2 + k2);
		for (int j = 0; j < m + 1; j++)
		{
			for (int i = 0; i < n + 1; i++)
			{
				f[i][j] = -4;
			}
		}


		//x = i * h - 1;
		//y = j * k ;
		for (int j = 0; j < m + 1; j++)
		{
			v[0][j] = -(j * k - 1) * (j * k - 1);
			v[n][j] = -(j * k - 1) * (j * k - 1);

		}

		for (int i = 0; i < n + 1; i++)
		{
			v[i][0] = -(i * h - 1) * (i * h - 1);
			v[i][m] = -(i * h - 1) * (i * h - 1);
		}
		int eps_n = 0;
		while (!ff)
		{
			eps_max = 0;
			for (j = 1; j < m; j++)
			{
				for (i = 1; i < n; i++)
				{
					v_old = v[i][j];
					v_new = -w * (h2*(v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]));
					v_new = v_new + (1 - w)*a2*v[i][j] + w * f[i][j];
					v_new = v_new / a2;
					eps_cur = fabs(v_old - v_new);
					eps_n = eps_cur;
					if (eps_cur > eps_max)
					{
						eps_max = eps_cur;
					}
					v[i][j] = v_new;
				}
			}
			S++;
			if (eps_max < eps || S >= Nmax)
			{
				ff = true;
			}
		}

		double x = 0, y = 0;
		double maxeps = 0;
		double cureps = 0;
		for (j = 0; j < m + 1; j++)
		{
			for (i = 0; i < n + 1; i++)
			{
				y = j * k - 1;
				x = i * h - 1;
				cureps = fabs(func(x, y) - v[i][j]);
				if (cureps >= maxeps)
				{
					maxeps = cureps;
				}
			}
		}

		//Подсчет невязки здесь!!!!

		//
		this->dataGridView1->ColumnCount = n + 2;
		this->dataGridView1->RowCount = m + 2;
		dataGridView1->Columns[0]->HeaderText = "i";
		dataGridView1->Rows[0]->HeaderCell->Value = "j";
		for (int i = 1; i <= n + 1; i++)
		{
			dataGridView1->Rows[0]->Cells[i]->Value = round(((i - 1) * h - 1) * 10000) / 10000;
			dataGridView1->Columns[i]->HeaderText = Convert::ToString(i - 1);
		}
		dataGridView1->RowHeadersVisible = true;
		p = 1;
		for (int j = m + 1; j >= 1; j--)
		{
			dataGridView1->Rows[p]->Cells[0]->Value = round(((j - 1) * k - 1) * 10000) / 10000;
			dataGridView1->Rows[p]->HeaderCell->Value = Convert::ToString(j - 1);
			p++;
		}

		dataGridView1->Rows[0]->Cells[0]->Value = "Y/X";



		for (int j = 1; j < m + 2; j++)
		{
			for (int i = 1; i < n + 2; i++)
			{

				dataGridView1->Rows[j]->Cells[i]->Value = round(v[i - 1][m + 1 - j] * 10000) / 10000;
			}

		}
		this->textBox11->Text = Convert::ToString(S);
		this->textBox12->Text = Convert::ToString(eps_max);
		this->textBox14->Text = Convert::ToString(maxeps);
		memset(v, 0, 40000 * sizeof(double));
		memset(f, 0, 40000 * sizeof(double));
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void DataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void TextBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

			 //Основная
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		int Nmax = Convert::ToDouble(textBox30->Text);
		int S = 0;
		double w = Convert::ToDouble(textBox17->Text);
		double eps = Convert::ToDouble(textBox29->Text);
		double eps_max = 0;
		double eps_cur = 0;
		int eps_n = 0;
		double a2, k2, h2;
		int n = Convert::ToDouble(textBox32->Text);
		int m = Convert::ToDouble(textBox31->Text);
		this->dataGridView2->ColumnCount = n + 2;
		this->dataGridView2->RowCount = m + 2;
		double v[200][200] = { 0 };
		double f[200][200];
		double a = 1.0, b = 2.0, c = 1.0, d = 2.0;
		int i, j;
		int p, r;
		double v_old;
		double v_new;
		bool ff = false;
		double h = (b - a) / n;
		double k = (d - c) / m;
		h2 = (n / (b - a)) * (n / (b - a));
		k2 = (m / (d - c)) * (m / (d - c));
		a2 = -2 * (h2 + k2);
		dataGridView2->Columns[0]->HeaderText = "i";
		dataGridView2->Rows[0]->HeaderCell->Value = "j";
		dataGridView2->Rows[0]->Cells[0]->Value = "Y/X";
		for (int i = 1; i <= n + 1; i++)
		{
			dataGridView2->Rows[0]->Cells[i]->Value = round(((i - 1) * h + a) * 10000) / 10000;
			dataGridView2->Columns[i]->HeaderText = Convert::ToString(i - 1);
		}
		dataGridView2->RowHeadersVisible = true;
		p = 1;
		for (int j = m + 1; j >= 1; j--)
		{
			dataGridView2->Rows[p]->Cells[0]->Value = round(((j - 1) * k + c) * 10000) / 10000;
			dataGridView2->Rows[p]->HeaderCell->Value = Convert::ToString(j - 1);
			p++;
		}
		for (int j = 0; j < m + 1; j++)
		{
			for (int i = 0; i < n + 1; i++)
			{
				f[i][j] = -4;
			}
		}
		while (!ff)
		{
			eps_max = 0;
			for (j = 1; j < m; j++)
			{
				for (i = 1; i < n; i++)
				{
					v_old = v[i][j];
					v_new = -w * (h2*(v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]));
					v_new = v_new + (1 - w)*a2*v[i][j] + w * f[i][j];
					v_new = v_new / a2;
					eps_cur = fabs(v_old - v_new);
					eps_n = eps_cur;
					if (eps_cur > eps_max)
					{
						eps_max = eps_cur;
					}
					v[i][j] = v_new;
				}
			}
			S++;
			if (eps_max < eps || S >= Nmax)
			{
				ff = true;
			}
		}
	}
	};
}
