#pragma once
#include<fstream>
#include<sstream>
#include<iostream>
#include<vector>
#include <string>
#include <filesystem>
#include "Form1.h"
#include"DataInput.h"
#include "PowerFactorCalc.h"
#include "SignalFiltering.h"
#include "TariffCalc.h"
#include "PowerCalc.h"
#include "EnergyCalc.h"
#include "Alarm.h"
#include "PeriodsCalc.h"
#include "DataLogging.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
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

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label7;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(191, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 1;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(32, 196);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 52);
			this->button1->TabIndex = 2;
			this->button1->Text = L"LOAD 1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// button2
			// 
			this->button2->AllowDrop = true;
			this->button2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(32, 254);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 52);
			this->button2->TabIndex = 3;
			this->button2->Text = L"LOAD 2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->AllowDrop = true;
			this->button3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(32, 312);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 52);
			this->button3->TabIndex = 4;
			this->button3->Text = L"LOAD 3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->AllowDrop = true;
			this->button4->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(32, 370);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 52);
			this->button4->TabIndex = 5;
			this->button4->Text = L"LOAD 4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label2
			// 
			this->label2->AllowDrop = true;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(618, 230);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 32);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Power Factor";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AllowDrop = true;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(618, 283);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(311, 32);
			this->label3->TabIndex = 8;
			this->label3->Text = L"TotalEnergy @50Sec.";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AllowDrop = true;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(618, 341);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(317, 32);
			this->label4->TabIndex = 9;
			this->label4->Text = L"TotalEnergy @1Month";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AllowDrop = true;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(618, 399);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(214, 32);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Cost @1Month";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AllowDrop = true;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(612, 158);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(133, 32);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Results :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// button6
			// 
			this->button6->AllowDrop = true;
			this->button6->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(32, 428);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(91, 52);
			this->button6->TabIndex = 13;
			this->button6->Text = L"TOTAL";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label7
			// 
			this->label7->AllowDrop = true;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(619, 455);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 25);
			this->label7->TabIndex = 14;
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->BackgroundImage = System::Drawing::Image::FromFile("SMARTMETERR.png");
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1421, 648);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<double> I3, V3, T3;
		DataInput("Loadfiltered3.csv", I3, V3, T3);

		vector<double>pw3 = powercalc(V3, I3);
		double pwavg3 = poweravg(pw3);
		double irms3 = Irms(I3);
		double vrms3 = Vrms(V3);
		double totenergy3 = calculateEnergy(pw3, 0.0001);
		label2->Text = " power factor = " + System::Convert::ToString((PowerFactor(pwavg3, irms3, vrms3)));
		label3->Text = " TotalEnergy @50Sec. = " + System::Convert::ToString((calculateEnergy(pw3, 0.0001))) + " KWH";
		label4->Text = " TotalEnergy @1Month = " + System::Convert::ToString((30 * 24 * 3600 / 50.0) * (calculateEnergy(pw3, 0.0001))) + " KWH";
		label5->Text = " Cost @1Month = " + System::Convert::ToString((Tarrif_calc(totenergy3))) + " LE";
		label7->Text = " Values stored in Loadfiltered3.csv ";

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<double> I4, V4, T4;
		DataInput("Loadfiltered4.csv", I4, V4, T4);

		vector<double>pw4 = powercalc(V4, I4);
		double pwavg4 = poweravg(pw4);
		double irms4 = Irms(I4);
		double vrms4 = Vrms(V4);
		double totenergy4 = calculateEnergy(pw4, 0.0001);
		label2->Text = " power factor = " + System::Convert::ToString((PowerFactor(pwavg4, irms4, vrms4)));
		label3->Text = " TotalEnergy @50Sec. = " + System::Convert::ToString((calculateEnergy(pw4, 0.0001))) + " KWH";
		label4->Text = " TotalEnergy @1Month = " + System::Convert::ToString((30 * 24 * 3600 / 50.0) * (calculateEnergy(pw4, 0.0001))) + " KWH";
		label5->Text = " Cost @1Month = " + System::Convert::ToString((Tarrif_calc(totenergy4))) + " LE";
		label7->Text = " Values stored in Loadfiltered4.csv ";

	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		vector<double> I1, V1, T1;
		DataInput("Loadfiltered1.csv", I1, V1, T1);

		vector<double>pw1= powercalc(V1, I1);
		double pwavg1 = poweravg(pw1);
		double irms1 = Irms(I1);
		double vrms1 = Vrms(V1);
		double totenergy1 = calculateEnergy(pw1, 0.0001);
		label2->Text = " power factor = " + System::Convert::ToString((PowerFactor(pwavg1, irms1, vrms1)));
		label3->Text = " TotalEnergy @50Sec. = " + System::Convert::ToString((calculateEnergy(pw1, 0.0001))) + " KWH";
		label4->Text = " TotalEnergy @1Month = " + System::Convert::ToString((30 * 24 * 3600 / 50.0) * (calculateEnergy(pw1, 0.0001))) + " KWH";
		label5->Text = " Cost @1Month = " + System::Convert::ToString((Tarrif_calc(totenergy1))) + " LE";
		label7->Text = " Values stored in Loadfiltered1.csv ";

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	vector<double> I2, V2, T2;
	DataInput("Loadfiltered2.csv", I2, V2, T2);

	vector<double>pw2 = powercalc(V2, I2);
	double pwavg2 = poweravg(pw2);
	double irms2 = Irms(I2);
	double vrms2 = Vrms(V2);
	double totenergy2 = calculateEnergy(pw2, 0.0001);
	label2->Text = " power factor = " + System::Convert::ToString((PowerFactor(pwavg2, irms2, vrms2)));
	label3->Text = " TotalEnergy @50Sec. = " + System::Convert::ToString((calculateEnergy(pw2, 0.0001))) + " KWH";
	label4->Text = " TotalEnergy @1Month = " + System::Convert::ToString((30 * 24 * 3600 / 50.0) *(calculateEnergy(pw2, 0.0001))) + " KWH";
	label5->Text = " Cost @1Month = " + System::Convert::ToString((Tarrif_calc(totenergy2))) + " LE";
	label7->Text = " Values stored in Loadfiltered2.csv ";



}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	







}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	vector<double> It, Vt, Tt;
	DataInput("Loadfilteredtotal.csv", It, Vt, Tt);

	vector<double> I1, V1, T1;
	DataInput("Loadfiltered1.csv", I1, V1, T1);
	vector<double>pw1 = powercalc(V1, I1);
	double totenergy1 = calculateEnergy(pw1, 0.0001);

	vector<double> I2, V2, T2;
	DataInput("Loadfiltered2.csv", I2, V2, T2);
	vector<double>pw2 = powercalc(V2, I2);
	double totenergy2 = calculateEnergy(pw2, 0.0001);

	vector<double> I3, V3, T3;
	DataInput("Loadfiltered3.csv", I3, V3, T3);
	vector<double>pw3 = powercalc(V3, I3);
	double totenergy3 = calculateEnergy(pw3, 0.0001);

	vector<double> I4, V4, T4;
	DataInput("Loadfiltered4.csv", I4, V4, T4);
	vector<double>pw4 = powercalc(V4, I4);
	double totenergy4 = calculateEnergy(pw4, 0.0001);



	vector<double>pwt = powercalc(Vt, It);
	double pwavgt = poweravg(pwt);
	double irmst = Irms(It);
	double vrmst = Vrms(Vt);
	double totenergyt = calculateEnergy(pwt, 0.0001);
	
	label2->Text = " power factor = " + System::Convert::ToString((PowerFactor(pwavgt, irmst, vrmst)));
	label3->Text = " TotalEnergy @50Sec. = " + System::Convert::ToString((calculateEnergy(pwt, 0.0001))) + " KWH";
	label4->Text = " TotalEnergy @1Month = " + System::Convert::ToString((30 * 24 * 3600 / 50.0) * (calculateEnergy(pwt, 0.0001))) + " KWH";
	label5->Text = " Cost @1Month = " + System::Convert::ToString(Tarrif_calc(totenergy1) + Tarrif_calc(totenergy2) + Tarrif_calc(totenergy3) + Tarrif_calc(totenergy4)) + " LE";
	label7->Text = " Values stored in Loadfilteredtotal.csv ";

}
};
}