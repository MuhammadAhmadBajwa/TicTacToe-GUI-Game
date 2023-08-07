#pragma once
#include "MyForm2.h"
#include"Credits.h"
namespace Game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ mENUToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ cREDITSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mAINMENUToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mENUToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cREDITSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mAINMENUToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Blue;
			this->button1->Location = System::Drawing::Point(681, 574);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"&nEXT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(464, 172);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(542, 90);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ENTER PLAYER 1 NAME";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(463, 255);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(543, 39);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L" ";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(469, 468);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(543, 39);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L" ";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mENUToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1367, 25);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mENUToolStripMenuItem
			// 
			this->mENUToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cREDITSToolStripMenuItem,
					this->mAINMENUToolStripMenuItem
			});
			this->mENUToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mENUToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->mENUToolStripMenuItem->Name = L"mENUToolStripMenuItem";
			this->mENUToolStripMenuItem->Size = System::Drawing::Size(57, 21);
			this->mENUToolStripMenuItem->Text = L"MENU";
			// 
			// cREDITSToolStripMenuItem
			// 
			this->cREDITSToolStripMenuItem->Name = L"cREDITSToolStripMenuItem";
			this->cREDITSToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->cREDITSToolStripMenuItem->Text = L"CREDITS";
			this->cREDITSToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::cREDITSToolStripMenuItem_Click);
			// 
			// mAINMENUToolStripMenuItem
			// 
			this->mAINMENUToolStripMenuItem->Name = L"mAINMENUToolStripMenuItem";
			this->mAINMENUToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->mAINMENUToolStripMenuItem->Text = L"MAIN MENU";
			this->mAINMENUToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::mAINMENUToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(464, 375);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(542, 90);
			this->label2->TabIndex = 7;
			this->label2->Text = L"ENTER PLAYER 2 NAME";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1367, 696);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		}
			   private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
				   if (textBox1->Text != " " && textBox2->Text != " ")
				   {
					   button1->Enabled = true;
				   }
			   }
	
		
	
		   private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

		   }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		this->Hide();
		MyForm2^ f3 = gcnew MyForm2(textBox1->Text,textBox2->Text);
		f3->ShowDialog();
		this->Close();
	}
	


private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cREDITSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Credits^ c = gcnew Credits;
	c->ShowDialog();
}
private: System::Void mAINMENUToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
