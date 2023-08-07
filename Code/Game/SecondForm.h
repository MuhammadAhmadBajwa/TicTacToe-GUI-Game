#pragma once
#include "MyForm31.h"
#include "Credits.h" 
#include<ctime>
#include<cstdlib>
#include<iostream>
#include<fstream>
#include <string>
using  namespace std;
using namespace System;
namespace Game {
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SecondForm
	/// </summary>
	public ref class SecondForm : public System::Windows::Forms::Form
	{
	public:
		SecondForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SecondForm(String^ data1, String^ data2)
		{
			
			InitializeComponent();
			label3->Text = data1;
			label4->Text = data2;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SecondForm()
		{
			if (components)
			{
				delete components;
			}
		}







	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ToolStripMenuItem^ iNSTRUCTIONToolStripMenuItem;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::ToolStripMenuItem^ rESETToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nEWGAMEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mAINMENUToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cREDITSToolStripMenuItem;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ mENUToolStripMenuItem;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ sAVEGAMEToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ oPENSAVEDGAMEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ highScoreToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;
	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SecondForm::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->iNSTRUCTIONToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->rESETToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nEWGAMEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mAINMENUToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cREDITSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mENUToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->highScoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sAVEGAMEToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oPENSAVEDGAMEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FloralWhite;
			this->label1->Location = System::Drawing::Point(930, 58);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(412, 49);
			this->label1->TabIndex = 40;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &SecondForm::label1_Click);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FloralWhite;
			this->label8->Location = System::Drawing::Point(44, 46);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(393, 49);
			this->label8->TabIndex = 25;
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &SecondForm::label8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->Location = System::Drawing::Point(784, 397);
			this->button9->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(144, 112);
			this->button9->TabIndex = 39;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &SecondForm::button9_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(920, 653);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 51);
			this->label6->TabIndex = 37;
			this->label6->Text = L"0";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &SecondForm::label6_Click);
			// 
			// iNSTRUCTIONToolStripMenuItem
			// 
			this->iNSTRUCTIONToolStripMenuItem->Name = L"iNSTRUCTIONToolStripMenuItem";
			this->iNSTRUCTIONToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->iNSTRUCTIONToolStripMenuItem->Text = L"&iNSTRUCTION";
			this->iNSTRUCTIONToolStripMenuItem->Click += gcnew System::EventHandler(this, &SecondForm::iNSTRUCTIONToolStripMenuItem_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->Location = System::Drawing::Point(634, 397);
			this->button8->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(144, 112);
			this->button8->TabIndex = 38;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &SecondForm::button8_Click);
			// 
			// rESETToolStripMenuItem
			// 
			this->rESETToolStripMenuItem->Name = L"rESETToolStripMenuItem";
			this->rESETToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->rESETToolStripMenuItem->Text = L"&rESET";
			this->rESETToolStripMenuItem->Click += gcnew System::EventHandler(this, &SecondForm::rESETToolStripMenuItem_Click);
			// 
			// nEWGAMEToolStripMenuItem
			// 
			this->nEWGAMEToolStripMenuItem->Name = L"nEWGAMEToolStripMenuItem";
			this->nEWGAMEToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->nEWGAMEToolStripMenuItem->Text = L"&nEW GAME";
			this->nEWGAMEToolStripMenuItem->Click += gcnew System::EventHandler(this, &SecondForm::nEWGAMEToolStripMenuItem_Click);
			// 
			// mAINMENUToolStripMenuItem
			// 
			this->mAINMENUToolStripMenuItem->Name = L"mAINMENUToolStripMenuItem";
			this->mAINMENUToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->mAINMENUToolStripMenuItem->Text = L"&mAIN MENU";
			this->mAINMENUToolStripMenuItem->Click += gcnew System::EventHandler(this, &SecondForm::mAINMENUToolStripMenuItem_Click);
			// 
			// cREDITSToolStripMenuItem
			// 
			this->cREDITSToolStripMenuItem->Name = L"cREDITSToolStripMenuItem";
			this->cREDITSToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->cREDITSToolStripMenuItem->Text = L"&cREDITS";
			this->cREDITSToolStripMenuItem->Click += gcnew System::EventHandler(this, &SecondForm::cREDITSToolStripMenuItem_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(691, 653);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(237, 51);
			this->label4->TabIndex = 32;
			this->label4->Text = L"O";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &SecondForm::label4_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Location = System::Drawing::Point(484, 397);
			this->button7->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(144, 112);
			this->button7->TabIndex = 34;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &SecondForm::button7_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(607, 653);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 51);
			this->label5->TabIndex = 35;
			this->label5->Text = L"0";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &SecondForm::label5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(784, 279);
			this->button6->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(144, 112);
			this->button6->TabIndex = 29;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &SecondForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(634, 279);
			this->button5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(144, 112);
			this->button5->TabIndex = 33;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &SecondForm::button5_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(376, 653);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(240, 51);
			this->label3->TabIndex = 30;
			this->label3->Text = L"X";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &SecondForm::label3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(484, 279);
			this->button4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(144, 112);
			this->button4->TabIndex = 31;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &SecondForm::button4_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mENUToolStripMenuItem,
					this->toolStripMenuItem2
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1367, 25);
			this->menuStrip1->TabIndex = 36;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mENUToolStripMenuItem
			// 
			this->mENUToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->rESETToolStripMenuItem,
					this->nEWGAMEToolStripMenuItem, this->mAINMENUToolStripMenuItem, this->cREDITSToolStripMenuItem, this->iNSTRUCTIONToolStripMenuItem,
					this->highScoreToolStripMenuItem
			});
			this->mENUToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mENUToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->mENUToolStripMenuItem->Name = L"mENUToolStripMenuItem";
			this->mENUToolStripMenuItem->Size = System::Drawing::Size(57, 21);
			this->mENUToolStripMenuItem->Text = L"&mENU";
			this->mENUToolStripMenuItem->Click += gcnew System::EventHandler(this, &SecondForm::mENUToolStripMenuItem_Click);
			// 
			// highScoreToolStripMenuItem
			// 
			this->highScoreToolStripMenuItem->Name = L"highScoreToolStripMenuItem";
			this->highScoreToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->highScoreToolStripMenuItem->Text = L"Hi&gh Score";
			this->highScoreToolStripMenuItem->Click += gcnew System::EventHandler(this, &SecondForm::highScoreToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->sAVEGAMEToolStripMenuItem1,
					this->oPENSAVEDGAMEToolStripMenuItem
			});
			this->toolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripMenuItem2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(105, 21);
			this->toolStripMenuItem2->Text = L"&sAVE OPTION";
			// 
			// sAVEGAMEToolStripMenuItem1
			// 
			this->sAVEGAMEToolStripMenuItem1->Name = L"sAVEGAMEToolStripMenuItem1";
			this->sAVEGAMEToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->sAVEGAMEToolStripMenuItem1->Text = L"&sAVE GAME";
			this->sAVEGAMEToolStripMenuItem1->Click += gcnew System::EventHandler(this, &SecondForm::sAVEGAMEToolStripMenuItem1_Click);
			// 
			// oPENSAVEDGAMEToolStripMenuItem
			// 
			this->oPENSAVEDGAMEToolStripMenuItem->Name = L"oPENSAVEDGAMEToolStripMenuItem";
			this->oPENSAVEDGAMEToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->oPENSAVEDGAMEToolStripMenuItem->Text = L"&lOAD GAME";
			this->oPENSAVEDGAMEToolStripMenuItem->Click += gcnew System::EventHandler(this, &SecondForm::oPENSAVEDGAMEToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(784, 161);
			this->button3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 112);
			this->button3->TabIndex = 28;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &SecondForm::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(484, 161);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 112);
			this->button1->TabIndex = 26;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SecondForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(634, 161);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 112);
			this->button2->TabIndex = 27;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SecondForm::button2_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(648, 55);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(103, 37);
			this->button10->TabIndex = 41;
			this->button10->Text = L"&rESET";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &SecondForm::button10_Click);
			// 
			// SecondForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1367, 705);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"SecondForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TIC TAC TOE";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &SecondForm::SecondForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		Boolean turn = false;
		int addScore = 0;
		char saveMode = '\0';
		String^ HSname;
		int HS = 0;
#pragma endregion
	
		int z = 0;
		int random() {
			srand(time(0));
			int n = 1 + (rand() % 9);
			z = n;
			return z;
		}
		void Enable_False()
		{
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;
		}
		void reset() {

			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
			button6->Enabled = true;
			button7->Enabled = true;
			button8->Enabled = true;
			button9->Enabled = true;

			button1->Text = "";
			button2->Text = "";
			button3->Text = "";
			button4->Text = "";
			button5->Text = "";
			button6->Text = "";
			button7->Text = "";
			button8->Text = "";
			button9->Text = "";

			label1->Text = "";

			button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));

			if (turn == false) { turn = true; }
			else { turn = false; }


		}
		void turnn()
		{
			if (turn == false)
			{
				label1->Text = Convert::ToString(label4->Text + "'s Turn");
				label8->Text = "";
			}
			else if (turn == true)
			{
				label8->Text = Convert::ToString(label3->Text + "'s Turn");
				label1->Text = "";
			}
		}
		void turnn1()
		{
			if (turn == false)
			{
				label8->Text = Convert::ToString(label3->Text + "'s Turn");
				label1->Text = "";
			}
			else if (turn == true)
			{
				label1->Text = Convert::ToString(label4->Text + "'s Turn");
				label8->Text = "";
			}
		}
		void score()
		{
			random();
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X")
			{

				label1->Text = "";
				label8->Text = Convert::ToString(label3->Text + " WINS!");
				label5->Text = Convert::ToString(addScore + 1);
				if (z == 1 || z==2) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 2) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3 || z == 6) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4 || z== 5)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7 || z== 8 || z==9)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();

			}
			else if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X")
			{
				label1->Text = "";
				label8->Text = Convert::ToString(label3->Text + " WINS!");
				addScore = int ::Parse(label5->Text);
				label5->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X")
			{

				label1->Text = "";
				label8->Text = Convert::ToString(label3->Text + " WINS!");
				addScore = int ::Parse(label5->Text);
				label5->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X")
			{

				label1->Text = "";
				label8->Text = Convert::ToString(label3->Text + " WINS!");
				addScore = int ::Parse(label5->Text);
				label5->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X")
			{

				label1->Text = "";
				label8->Text = Convert::ToString(label3->Text + " WINS!");
				addScore = int ::Parse(label5->Text);
				label5->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X")
			{
				label1->Text = "";
				label8->Text = Convert::ToString(label3->Text + " Wins!");
				addScore = int ::Parse(label5->Text);
				label5->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button3->Text == "X" && button6->Text == "X" && button9->Text == "X")
			{
				label1->Text = "";
				label8->Text = Convert::ToString(label3->Text + " WINS!");
				addScore = int ::Parse(label5->Text);
				label5->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X")
			{
				label1->Text = "";
				label8->Text = Convert::ToString(label3->Text + " WINS!");
				addScore = int ::Parse(label5->Text);
				label5->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			//-----------------------------------------
			else if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O")
			{
				label8->Text = "";
				label1->Text = Convert::ToString(label4->Text + " WINS!");
				addScore = int ::Parse(label6->Text);
				label6->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O")
			{
				label8->Text = "";
				label1->Text = Convert::ToString(label4->Text + " WINS!");
				addScore = int ::Parse(label6->Text);
				label6->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O")
			{
				label8->Text = "";
				label1->Text = Convert::ToString(label4->Text + " WINS!");
				addScore = int ::Parse(label6->Text);
				label6->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O")
			{
				label8->Text = "";
				label1->Text = Convert::ToString(label4->Text + " WINS!");
				addScore = int ::Parse(label6->Text);
				label6->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button1->Text == "O" && button4->Text == "O" && button7->Text == "O")
			{

				label8->Text = "";
				label1->Text = Convert::ToString(label4->Text + " WINS!");
				addScore = int ::Parse(label6->Text);
				label6->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O")
			{

				label8->Text = "";
				label1->Text = Convert::ToString(label4->Text + " WINS!");
				addScore = int ::Parse(label6->Text);
				label6->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button3->Text == "O" && button6->Text == "O" && button9->Text == "O")
			{

				label8->Text = "";
				label1->Text = Convert::ToString(label4->Text + " WINS!");
				addScore = int ::Parse(label6->Text);
				label6->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O")
			{
				label8->Text = "";
				label1->Text = Convert::ToString(label4->Text + " WINS!");
				addScore = int ::Parse(label6->Text);
				label6->Text = Convert::ToString(addScore + 1);
				if (z == 1) {
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
						static_cast<System::Int32>(static_cast<System::Byte>(20)));
				}
				else if (z == 2) {
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				else if (z == 3) {
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(60)));
				}
				else if (z == 4)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
						static_cast<System::Int32>(static_cast<System::Byte>(145)));
				}
				else if (z == 5)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
						static_cast<System::Int32>(static_cast<System::Byte>(172)));
				}
				else if (z == 6)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(217)));
				}
				else if (z == 7)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
						static_cast<System::Int32>(static_cast<System::Byte>(198)));
				}
				else if (z == 8)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
						static_cast<System::Int32>(static_cast<System::Byte>(124)));
				}
				else if (z == 9)
				{
					this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
					this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(51)));
				}
				Enable_False();
			}
			else if (button1->Text != "" && button2->Text != "" && button3->Text != "" && button4->Text != "" && button5->Text != "" && button6->Text != "" && button7->Text != "" && button8->Text != "" && button9->Text != "")
			{
				label1->Text = "DRAW";
				label8->Text = "DRAW";
			}
		}
		void SaveName1(String^ s, string& os) {
			string n1 = "\0";
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			 n1 = os;
			int size = n1.size();
			
			if (saveMode == 's') {
				
				ofstream Name1;
				Name1.open("Name1.txt", ios::out);
				Name1 << n1;
				Name1.close();
			}
			else if (saveMode == 'o')
			{
				ifstream Name1;
				Name1.open("Name1.txt", ios::in);
				Name1 >> n1;
				String^ str2 = gcnew String(n1.c_str());
				label3->Text = str2;
				Name1.close();	
			}

		}
		void SaveName2(String^ s, string& os) {
			string n2 = "\0";
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			n2 = os;
			int size = n2.size();
		
		
			if (saveMode == 's') {
				
				ofstream Name2;
				Name2.open("Name2.txt", ios::out);
				Name2 << n2;
				Name2.close();
			}
			else if (saveMode == 'o')
			{
				
				ifstream Name2;
				Name2.open("Name2.txt", ios::in);
					Name2 >> n2;
				String^ str2 = gcnew String(n2.c_str());
				label4->Text = str2;
				Name2.close();
			}

		}
		void saveGame() {
			string n1;
			string n2;
			char box[22] = { '\0' };
			//SAVING SCORE
			int addScore1 = int ::Parse(label5->Text);
			int addScore2 = int ::Parse(label6->Text);
			box[10] = addScore1;
			box[11] = addScore2;
			
			//SAVING TURN
			if (turn == false)
				box[9] = 'f';
			else if (turn == true)
				box[9] = 't';

			//SAVING NAMES
			SaveName1(label3->Text, n1);
			SaveName2(label4->Text, n2);
			

			if (saveMode == 's') {
				
				
				if (button1->Text == "X")
				{
					box[0] = 'X';
				}
				else if (button1->Text == "O")
				{
					box[0] = 'O';
				}
				else if (button1->Text == "")
				{
					box[0] = 's';
				}

				if (button2->Text == "X")
				{
					box[1] = 'X';
				}
				else if (button2->Text == "O")
				{
					box[1] = 'O';
				}
				else if (button2->Text == "")
				{
					box[1] = 's';
				}

				if (button3->Text == "X")
				{
					box[2] = 'X';
				}
				else if (button3->Text == "O")
				{
					box[2] = 'O';
				}
				else if (button3->Text == "")
				{
					box[2] = 's';
				}

				if (button4->Text == "X")
				{
					box[3] = 'X';
				}
				else if (button4->Text == "O")
				{
					box[3] = 'O';
				}
				else if (button4->Text == "")
				{
					box[3] = 's';
				}

				if (button5->Text == "X")
				{
					box[4] = 'X';
				}
				else if (button5->Text == "O")
				{
					box[4] = 'O';
				}
				else if (button5->Text == "")
				{
					box[4] = 's';
				}

				if (button6->Text == "X")
				{
					box[5] = 'X';
				}
				else if (button6->Text == "O")
				{
					box[5] = 'O';
				}
				else if (button6->Text == "")
				{
					box[5] = 's';
				}

				if (button7->Text == "X")
				{
					box[6] = 'X';
				}
				else if (button7->Text == "O")
				{
					box[6] = 'O';
				}
				else if (button7->Text == "")
				{
					box[6] = 's';
				}

				if (button8->Text == "X")
				{
					box[7] = 'X';
				}
				else if (button8->Text == "O")
				{
					box[7] = 'O';
				}
				else if (button8->Text == "")
				{
					box[7] = 's';
				}

				if (button9->Text == "X")
				{
					box[8] = 'X';
				}
				else if (button9->Text == "O")
				{
					box[8] = 'O';
				}
				else if (button9->Text == "")
				{
					box[8] = 's';
				}

				ofstream FileName1;
				FileName1.open("FileName1.txt", ios::out);
				for (int i = 0; i < 9; i++)
				{
					FileName1 << box[i];
				}
				FileName1<< box[9];
				FileName1 << box[10];
				FileName1 << box[11];
				FileName1.close();

				
				
				
			}
			else if (saveMode == 'o' )
			{
				ifstream FileName1;
				FileName1.open("FileName1.txt", ios::in);
				for (int i = 0; i < 22; i++)
				{
					FileName1 >> box[i];
				}
				FileName1.close();


				//UPDATING TURN 
			   

				if (box[9] == 'f')
				{
					turn = false;
				}
				else if (box[9] == 't')
				{
					turn = true;
				}
				turnn1();
				//UPDATING PLAYERS SCORE
				addScore1 = box[10];
				addScore2 = box[11];
				label5->Text = Convert::ToString(addScore1);
				label6->Text = Convert::ToString(addScore2);

				//UPDATING NAMES


				// UPDATING GAME BUTTONS DATA
				if (box[0] == 'X')
				{
					button1->Text = "X";
					button1->Enabled = false;
				}
				else if (box[0] == 'O')
				{
					button1->Text = "O";
					button1->Enabled = false;
				}
				else if (box[0] == 's')
				{
					button1->Text = "";
				}

				
				if (box[1] == 'X')
				{
					button2->Text = "X";
					button2->Enabled = false;
				}
				else if (box[1] == 'O')
				{
					button2->Text = "O";
					button2->Enabled = false;
				}
				else if (box[1] == 's')
				{
					button2->Text = "";

				}

				if (box[2] == 'X')
				{
					button3->Text = "X";
					button3->Enabled = false;
				}
				else if (box[2] == 'O')
				{
					button3->Text = "O";
					button3->Enabled = false;
				}
				else if (box[2] == 's')
				{
					button3->Text = "";
				}

				if (box[3] == 'X')
				{
					button4->Text = "X";
					button4->Enabled = false;
				}
				else if (box[3] == 'O')
				{
					button4->Text = "O";
					button4->Enabled = false;
				}
				else if (box[3] == 's')
				{
					button4->Text = "";
				}

				if (box[4] == 'X')
				{
					button5->Text = "X";
					button5->Enabled = false;
				}
				else if (box[4] == 'O')
				{
					button5->Text = "O";
					button5->Enabled = false;
				}
				else if (box[4] == 's')
				{
					button5->Text = "";
				}

				if (box[5] == 'X')
				{
					button6->Text = "X";
					button6->Enabled = false;
				}
				else if (box[5] == 'O')
				{
					button6->Text = "O";
					button6->Enabled = false;
				}
				else if (box[5] == 's')
				{
					button6->Text = "";
				}

				if (box[6] == 'X')
				{
					button7->Text = "X";
					button7->Enabled = false;
				}
				else if (box[6] == 'O')
				{
					button7->Text = "O";
					button7->Enabled = false;
				}
				else if (box[6] == 's')
				{
					button7->Text = "";
				}

				if (box[7] == 'X')
				{
					button8->Text = "X";
					button8->Enabled = false;
				}
				else if (box[7] == 'O')
				{
					button8->Text = "O";
					button8->Enabled = false;
				}
				else if (box[7] == 's')
				{
					button8->Text = "";
				}

				if (box[8] == 'X')
				{
					button9->Text = "X";
					button9->Enabled = false;
				}
				else if (box[8] == 'O')
				{
					button9->Text = "O";
					button9->Enabled = false;
				}
				else if (box[8] == 's')
				{
					button9->Text = "";
				}

			}
		}
		void HighScore() {

		}
	private: System::Void SecondForm_Load(System::Object^ sender, System::EventArgs^ e) {
		label8->Text = Convert::ToString(label3->Text + "'s Turn");
		label1->Text = "";
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	turnn();
	if (turn == false)
	{
		button1->Text = "X";
		turn = true;
	}
	else
	{
		button1->Text = "O";
		turn = false;
	}
	score();
	button1->Enabled = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	turnn();
	if (turn == false)
	{
		button2->Text = "X";
		turn = true;
	}
	else
	{
		button2->Text = "O";
		turn = false;
	}
	score();
	button2->Enabled = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	turnn();
	if (turn == false)
	{
		button3->Text = "X";
		turn = true;
	}
	else
	{
		button3->Text = "O";
		turn = false;
	}
	score();
	button3->Enabled = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	turnn();
	if (turn == false)
	{
		button4->Text = "X";
		turn = true;
	}
	else
	{
		button4->Text = "O";
		turn = false;
	}
	score();
	button4->Enabled = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	turnn();
	if (turn == false)
	{
		button5->Text = "X";
		turn = true;
	}
	else
	{
		button5->Text = "O";
		turn = false;
	}
	score();
	button5->Enabled = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	turnn();
	if (turn == false)
	{
		button6->Text = "X";
		turn = true;
	}
	else
	{
		button6->Text = "O";
		turn = false;
	}
	score();
	button6->Enabled = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	turnn();
	if (turn == false)
	{
		button7->Text = "X";
		turn = true;
	}
	else
	{
		button7->Text = "O";
		turn = false;
	}
	score();
	button7->Enabled = false;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	turnn();
	if (turn == false)
	{
		button8->Text = "X";
		turn = true;
	}
	else
	{
		button8->Text = "O";
		turn = false;
	}
	score();
	button8->Enabled = false;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	turnn();
	if (turn == false)
	{
		button9->Text = "X";
		turn = true;
	}
	else
	{
		button9->Text = "O";
		turn = false;
	}
	score();
	button9->Enabled = false;
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void rESETToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		reset();
		label8->Text = "";
		if (turn == false)
		{
			label8->Text = Convert::ToString(label3->Text + "'s Turn");
			label1->Text = "";
		}
		else if (turn == true)
		{
			label1->Text = Convert::ToString(label4->Text + "'s Turn");
			label8->Text = "";
		}
		
	}
private: System::Void nEWGAMEToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	reset();
	addScore = 0;
	label5->Text = "0";
	label6->Text = "0";
	label8->Text = "";
	if (turn == false)
	{
		label8->Text = Convert::ToString(label3->Text + "'s Turn");
		label1->Text = "";
	}
	else if (turn == true)
	{
		label1->Text = Convert::ToString(label4->Text + "'s Turn");
		label8->Text = "";
	}
	turn = false;
}
private: System::Void mAINMENUToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void cREDITSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Credits^ c = gcnew Credits;
	c->ShowDialog();
}
private: System::Void iNSTRUCTIONToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm3^ f4 = gcnew MyForm3;
	f4->ShowDialog();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	reset();
	label8->Text = "";
	if (turn == false)
	{
		label8->Text = Convert::ToString(label3->Text + "'s Turn");
		label1->Text = "";
	}
	else if (turn == true)
	{
		label1->Text = Convert::ToString(label4->Text + "'s Turn");
		label8->Text = "";
	}
}
private: System::Void sAVEGAMEToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	saveMode = 's';
	saveGame();
	
}
private: System::Void oPENSAVEDGAMEToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	saveMode = 'o';
	
	saveGame();
}
private: System::Void highScoreToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void mENUToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
