#pragma once

#include "Header.h"

namespace RGZ {

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
			int points = 0;
			int attempts = 0;
			savePoints(points);
			saveAttempts(attempts);
			this->label4attempts->Text = attempts.ToString();
			this->label3scores->Text = points.ToString();

			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^ Ïóñê;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ îïö³¿ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèá³ğÌàëşíê³âToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òàáëèöÿĞåêîğä³âToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ñêèíóòèÏğîãğåñToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òâàğèíèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àâòîìîá³ë³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôğóêòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàêîïè÷óâà÷³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ â³äêğèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çáåğåãòèĞåçóëüòàòToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label3scores;
	private: System::Windows::Forms::Label^ label4attempts;
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::ToolStripMenuItem^ ïîâåğíóòèñÿToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòèÒàáëèöşToolStripMenuItem;
	private: System::Windows::Forms::Label^ label3_leaderboard;





















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Ïóñê = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->îïö³¿ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèá³ğÌàëşíê³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òâàğèíèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àâòîìîá³ë³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôğóêòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàêîïè÷óâà÷³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òàáëèöÿĞåêîğä³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåğåãòèĞåçóëüòàòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòèÒàáëèöşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñêèíóòèÏğîãğåñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîâåğíóòèñÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label3scores = (gcnew System::Windows::Forms::Label());
			this->label4attempts = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3_leaderboard = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->pictureBox2->ImageLocation = L"Images\\Sprite-0001rrfr3f.png";
			this->pictureBox2->Location = System::Drawing::Point(12, 33);
			this->pictureBox2->MaximumSize = System::Drawing::Size(150, 150);
			this->pictureBox2->MinimumSize = System::Drawing::Size(150, 150);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(150, 150);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// Ïóñê
			// 
			this->Ïóñê->Location = System::Drawing::Point(12, 474);
			this->Ïóñê->Name = L"Ïóñê";
			this->Ïóñê->Size = System::Drawing::Size(458, 47);
			this->Ïóñê->TabIndex = 4;
			this->Ïóñê->Text = L"Îáåğòàòè áàğàáàí";
			this->Ïóñê->UseVisualStyleBackColor = true;
			this->Ïóñê->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 549);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 32);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Ê³ëüê³ñòü î÷îê:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->îïö³¿ToolStripMenuItem,
					this->ïîâåğíóòèñÿToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(482, 30);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// îïö³¿ToolStripMenuItem
			// 
			this->îïö³¿ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->âèá³ğÌàëşíê³âToolStripMenuItem,
					this->òàáëèöÿĞåêîğä³âToolStripMenuItem, this->ñêèíóòèÏğîãğåñToolStripMenuItem
			});
			this->îïö³¿ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->îïö³¿ToolStripMenuItem->Name = L"îïö³¿ToolStripMenuItem";
			this->îïö³¿ToolStripMenuItem->Size = System::Drawing::Size(72, 26);
			this->îïö³¿ToolStripMenuItem->Text = L"Îïö³¿";
			this->îïö³¿ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îïö³¿ToolStripMenuItem_Click);
			// 
			// âèá³ğÌàëşíê³âToolStripMenuItem
			// 
			this->âèá³ğÌàëşíê³âToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->òâàğèíèToolStripMenuItem,
					this->àâòîìîá³ë³ToolStripMenuItem, this->ôğóêòèToolStripMenuItem, this->íàêîïè÷óâà÷³ToolStripMenuItem
			});
			this->âèá³ğÌàëşíê³âToolStripMenuItem->Name = L"âèá³ğÌàëşíê³âToolStripMenuItem";
			this->âèá³ğÌàëşíê³âToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->âèá³ğÌàëşíê³âToolStripMenuItem->Text = L"Âèá³ğ ìàëşíê³â";
			// 
			// òâàğèíèToolStripMenuItem
			// 
			this->òâàğèíèToolStripMenuItem->Name = L"òâàğèíèToolStripMenuItem";
			this->òâàğèíèToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->òâàğèíèToolStripMenuItem->Text = L"Òâàğèíè";
			this->òâàğèíèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::òâàğèíèToolStripMenuItem_Click);
			// 
			// àâòîìîá³ë³ToolStripMenuItem
			// 
			this->àâòîìîá³ë³ToolStripMenuItem->Name = L"àâòîìîá³ë³ToolStripMenuItem";
			this->àâòîìîá³ë³ToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->àâòîìîá³ë³ToolStripMenuItem->Text = L"Àâòîìîá³ë³";
			this->àâòîìîá³ë³ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::àâòîìîá³ë³ToolStripMenuItem_Click);
			// 
			// ôğóêòèToolStripMenuItem
			// 
			this->ôğóêòèToolStripMenuItem->Name = L"ôğóêòèToolStripMenuItem";
			this->ôğóêòèToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->ôğóêòèToolStripMenuItem->Text = L"Ôğóêòè";
			this->ôğóêòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ôğóêòèToolStripMenuItem_Click);
			// 
			// íàêîïè÷óâà÷³ToolStripMenuItem
			// 
			this->íàêîïè÷óâà÷³ToolStripMenuItem->Name = L"íàêîïè÷óâà÷³ToolStripMenuItem";
			this->íàêîïè÷óâà÷³ToolStripMenuItem->Size = System::Drawing::Size(198, 26);
			this->íàêîïè÷óâà÷³ToolStripMenuItem->Text = L"Êîìï\'şòåğè";
			this->íàêîïè÷óâà÷³ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íàêîïè÷óâà÷³ToolStripMenuItem_Click);
			// 
			// òàáëèöÿĞåêîğä³âToolStripMenuItem
			// 
			this->òàáëèöÿĞåêîğä³âToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->â³äêğèòèToolStripMenuItem,
					this->çáåğåãòèĞåçóëüòàòToolStripMenuItem, this->î÷èñòèòèÒàáëèöşToolStripMenuItem
			});
			this->òàáëèöÿĞåêîğä³âToolStripMenuItem->Name = L"òàáëèöÿĞåêîğä³âToolStripMenuItem";
			this->òàáëèöÿĞåêîğä³âToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->òàáëèöÿĞåêîğä³âToolStripMenuItem->Text = L"Òàáëèöÿ ğåêîğä³â";
			// 
			// â³äêğèòèToolStripMenuItem
			// 
			this->â³äêğèòèToolStripMenuItem->Name = L"â³äêğèòèToolStripMenuItem";
			this->â³äêğèòèToolStripMenuItem->Size = System::Drawing::Size(258, 26);
			this->â³äêğèòèToolStripMenuItem->Text = L"Â³äêğèòè";
			this->â³äêğèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::â³äêğèòèToolStripMenuItem_Click);
			// 
			// çáåğåãòèĞåçóëüòàòToolStripMenuItem
			// 
			this->çáåğåãòèĞåçóëüòàòToolStripMenuItem->Name = L"çáåğåãòèĞåçóëüòàòToolStripMenuItem";
			this->çáåğåãòèĞåçóëüòàòToolStripMenuItem->Size = System::Drawing::Size(258, 26);
			this->çáåğåãòèĞåçóëüòàòToolStripMenuItem->Text = L"Çáåğåãòè ğåçóëüòàò";
			this->çáåğåãòèĞåçóëüòàòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çáåğåãòèĞåçóëüòàòToolStripMenuItem_Click);
			// 
			// î÷èñòèòèÒàáëèöşToolStripMenuItem
			// 
			this->î÷èñòèòèÒàáëèöşToolStripMenuItem->Name = L"î÷èñòèòèÒàáëèöşToolStripMenuItem";
			this->î÷èñòèòèÒàáëèöşToolStripMenuItem->Size = System::Drawing::Size(258, 26);
			this->î÷èñòèòèÒàáëèöşToolStripMenuItem->Text = L"Î÷èñòèòè òàáëèöş";
			this->î÷èñòèòèÒàáëèöşToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòèÒàáëèöşToolStripMenuItem_Click);
			// 
			// ñêèíóòèÏğîãğåñToolStripMenuItem
			// 
			this->ñêèíóòèÏğîãğåñToolStripMenuItem->Name = L"ñêèíóòèÏğîãğåñToolStripMenuItem";
			this->ñêèíóòèÏğîãğåñToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->ñêèíóòèÏğîãğåñToolStripMenuItem->Text = L"Ñêèíóòè ïğîãğåñ";
			this->ñêèíóòèÏğîãğåñToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñêèíóòèÏğîãğåñToolStripMenuItem_Click);
			// 
			// ïîâåğíóòèñÿToolStripMenuItem
			// 
			this->ïîâåğíóòèñÿToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ïîâåğíóòèñÿToolStripMenuItem->Name = L"ïîâåğíóòèñÿToolStripMenuItem";
			this->ïîâåğíóòèñÿToolStripMenuItem->Size = System::Drawing::Size(134, 26);
			this->ïîâåğíóòèñÿToolStripMenuItem->Text = L"Ïîâåğíóòèñÿ";
			this->ïîâåğíóòèñÿToolStripMenuItem->Visible = false;
			this->ïîâåğíóòèñÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîâåğíóòèñÿToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 627);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 32);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Ê³ëüê³ñòü ñïğîá:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->pictureBox1->ImageLocation = L"Images\\Apple.jpg";
			this->pictureBox1->Location = System::Drawing::Point(168, 33);
			this->pictureBox1->MaximumSize = System::Drawing::Size(150, 150);
			this->pictureBox1->MinimumSize = System::Drawing::Size(150, 150);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->pictureBox3->ImageLocation = L"Images\\Lemon3.png";
			this->pictureBox3->Location = System::Drawing::Point(324, 33);
			this->pictureBox3->MaximumSize = System::Drawing::Size(150, 150);
			this->pictureBox3->MinimumSize = System::Drawing::Size(150, 150);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(150, 150);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox4->ImageLocation = L"Images\\FruitsSet.png";
			this->pictureBox4->Location = System::Drawing::Point(112, 199);
			this->pictureBox4->MaximumSize = System::Drawing::Size(250, 250);
			this->pictureBox4->MinimumSize = System::Drawing::Size(250, 250);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(250, 250);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			// 
			// label3scores
			// 
			this->label3scores->AutoSize = true;
			this->label3scores->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3scores->Location = System::Drawing::Point(333, 549);
			this->label3scores->Name = L"label3scores";
			this->label3scores->Size = System::Drawing::Size(29, 33);
			this->label3scores->TabIndex = 13;
			this->label3scores->Text = L"0";
			// 
			// label4attempts
			// 
			this->label4attempts->AutoSize = true;
			this->label4attempts->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4attempts->Location = System::Drawing::Point(333, 628);
			this->label4attempts->Name = L"label4attempts";
			this->label4attempts->Size = System::Drawing::Size(29, 33);
			this->label4attempts->TabIndex = 14;
			this->label4attempts->Text = L"0";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->label3_leaderboard);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(0, 30);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(482, 673);
			this->panel1->TabIndex = 15;
			this->panel1->Visible = false;
			// 
			// label3_leaderboard
			// 
			this->label3_leaderboard->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3_leaderboard->AutoSize = true;
			this->label3_leaderboard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3_leaderboard->Location = System::Drawing::Point(135, 3);
			this->label3_leaderboard->Name = L"label3_leaderboard";
			this->label3_leaderboard->Size = System::Drawing::Size(183, 26);
			this->label3_leaderboard->TabIndex = 2;
			this->label3_leaderboard->Text = L"Òàáëèöÿ ğåêîğä³â";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(0, 32);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(482, 650);
			this->textBox1->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(482, 703);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label4attempts);
			this->Controls->Add(this->label3scores);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Ïóñê);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(500, 750);
			this->MinimumSize = System::Drawing::Size(500, 750);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"One-armed bandit";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ñêèíóòèÏğîãğåñToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void â³äêğèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïîâåğíóòèñÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void çáåğåãòèĞåçóëüòàòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void î÷èñòèòèÒàáëèöşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void òâàğèíèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void àâòîìîá³ë³ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ôğóêòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void íàêîïè÷óâà÷³ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void îïö³¿ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
