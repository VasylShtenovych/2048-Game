#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
namespace Game2048 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2048
	/// </summary>
	public ref class Form2048 : public System::Windows::Forms::Form
	{
	public:
		Form2048(void)
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
		~Form2048()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:















	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;




































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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 20);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Score : 0";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label7, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label8, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label9, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label11, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label12, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->label13, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label14, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label15, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label16, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->label17, 3, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(23, 94);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(395, 331);
			this->tableLayoutPanel1->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(28);
			this->label2->Size = System::Drawing::Size(91, 73);
			this->label2->TabIndex = 0;
			this->label2->Text = L"128";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(101, 0);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(28);
			this->label3->Size = System::Drawing::Size(86, 82);
			this->label3->TabIndex = 1;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(199, 0);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(28);
			this->label4->Size = System::Drawing::Size(86, 82);
			this->label4->TabIndex = 2;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(297, 0);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(28);
			this->label5->Size = System::Drawing::Size(95, 82);
			this->label5->TabIndex = 3;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(3, 82);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(28);
			this->label6->Size = System::Drawing::Size(86, 82);
			this->label6->TabIndex = 4;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(101, 82);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(28);
			this->label7->Size = System::Drawing::Size(86, 82);
			this->label7->TabIndex = 5;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(199, 82);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(28);
			this->label8->Size = System::Drawing::Size(86, 82);
			this->label8->TabIndex = 6;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(297, 82);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(28);
			this->label9->Size = System::Drawing::Size(95, 82);
			this->label9->TabIndex = 7;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(3, 164);
			this->label10->Name = L"label10";
			this->label10->Padding = System::Windows::Forms::Padding(28);
			this->label10->Size = System::Drawing::Size(86, 82);
			this->label10->TabIndex = 8;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label11->Location = System::Drawing::Point(101, 164);
			this->label11->Name = L"label11";
			this->label11->Padding = System::Windows::Forms::Padding(28);
			this->label11->Size = System::Drawing::Size(86, 82);
			this->label11->TabIndex = 9;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label12->Location = System::Drawing::Point(199, 164);
			this->label12->Name = L"label12";
			this->label12->Padding = System::Windows::Forms::Padding(28);
			this->label12->Size = System::Drawing::Size(86, 82);
			this->label12->TabIndex = 10;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label13->Location = System::Drawing::Point(297, 164);
			this->label13->Name = L"label13";
			this->label13->Padding = System::Windows::Forms::Padding(28);
			this->label13->Size = System::Drawing::Size(95, 82);
			this->label13->TabIndex = 11;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label14->Location = System::Drawing::Point(3, 246);
			this->label14->Name = L"label14";
			this->label14->Padding = System::Windows::Forms::Padding(28);
			this->label14->Size = System::Drawing::Size(86, 85);
			this->label14->TabIndex = 12;
			this->label14->Text = L"label14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label15->Location = System::Drawing::Point(101, 246);
			this->label15->Name = L"label15";
			this->label15->Padding = System::Windows::Forms::Padding(28);
			this->label15->Size = System::Drawing::Size(86, 85);
			this->label15->TabIndex = 13;
			this->label15->Text = L"label15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label16->Location = System::Drawing::Point(199, 246);
			this->label16->Name = L"label16";
			this->label16->Padding = System::Windows::Forms::Padding(28);
			this->label16->Size = System::Drawing::Size(86, 85);
			this->label16->TabIndex = 14;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label17->Location = System::Drawing::Point(297, 246);
			this->label17->Name = L"label17";
			this->label17->Padding = System::Windows::Forms::Padding(28);
			this->label17->Size = System::Drawing::Size(95, 85);
			this->label17->TabIndex = 15;
			this->label17->Text = L"label17";
			// 
			// Form2048
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(486, 492);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Name = L"Form2048";
			this->Text = L"2048";
			this->Load += gcnew System::EventHandler(this, &Form2048::Form2048_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form2048::Form2048_KeyDown);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool p = false;
		const int N = 4;
		int score = 0;
		static array<int, 2>^ matrix = gcnew array<int, 2>(4, 4);
		int upKeyPressed(cli::array<int, 2>^, int onlyCheck)
		{
			int didAction = 0;
			for (int i = 0; i < N; i++) //do algorythm for all colums
			{
				for (int j = 0; j < N; j++) // go through all rows
				{
					if (matrix[j,i] == 0) // found first free cell
					{
						for (int k = j + 1; k < N; k++) // take a look for not free cells down
						{
							if (matrix[k,i] != 0) // found not free cell
							{
								// swap it with free
								if (!onlyCheck)
								{
									matrix[j,i] = matrix[k,i];
									matrix[k,i] = 0;
								}
								didAction = 1;
								break;
							}
						}
					}
				}
				// sum same neibour elements
				for (int j = 0; j < N - 1; j++)
				{
					if (matrix[j,i] == matrix[j + 1,i] && matrix[j,i] != 0)
					{
						didAction = 1;
						if (!onlyCheck)
						{
							matrix[j,i] *= 2;
							score += matrix[j, i];
							matrix[j + 1,i] = 0;
							for (int k = j + 2; k < N; k++) // take up elements in down
							{
								matrix[k - 1,i] = matrix[k,i];
								matrix[k,i] = 0;
							}
						}
					}
				}
			}
			return didAction;
		}

		int downKeyPressed(cli::array<int, 2>^, int onlyCheck)
		{
			int didAction = 0;
			for (int i = 0; i < N; i++) //do algorythm for all colums
			{
				for (int j = N - 1; j >= 0; j--) // go through all rows from down to up
				{
					if (matrix[j,i] == 0) // found first free cell
					{
						for (int k = j - 1; k >= 0; k--) // take a look for not free cells up
						{
							if (matrix[k,i] != 0) // found not free cell
							{
								// swap it with free
								if (!onlyCheck)
								{
									matrix[j,i] = matrix[k,i];
									matrix[k,i] = 0;
								}
								didAction = 1;
								break;
							}
						}
					}
				}
				// sum same neibour elements
				for (int j = N - 1; j >= 1; j--)
				{
					if (matrix[j,i] == matrix[j - 1,i] && matrix[j,i] != 0)
					{
						didAction = 1;
						if (!onlyCheck)
						{
							matrix[j,i] *= 2;
							score += matrix[j, i];
							matrix[j - 1,i] = 0;
							for (int k = j - 2; k >= 0; k--) // take up elements in down
							{
								matrix[k + 1,i] = matrix[k,i];
								matrix[k,i] = 0;
							}
						}
					}
				}
			}
			return didAction;
		}

		int leftKeyPressed(cli::array<int, 2>^, int onlyCheck)
		{
			int didAction = 0;
			for (int i = 0; i < N; i++) //do algorythm for all rows
			{
				for (int j = 0; j < N; j++) // go through all columns
				{
					if (matrix[i,j] == 0) // found first free cell
					{
						for (int k = j + 1; k < N; k++) // take a look for not free cells on the right
						{
							if (matrix[i,k] != 0) // found not free cell
							{
								// swap it with free
								if (!onlyCheck)
								{
									matrix[i,j] = matrix[i,k];
									matrix[i,k] = 0;
								}
								didAction = 1;
								break;
							}
						}
					}
				}
				// sum same neibour elements
				for (int j = 0; j < N - 1; j++)
				{
					if (matrix[i,j] == matrix[i,j + 1] && matrix[i,j] != 0)
					{
						didAction = 1;
						if (!onlyCheck)
						{
							matrix[i,j] *= 2;
							score += matrix[i,j];
							matrix[i,j + 1] = 0;
							for (int k = j + 2; k < N; k++) // take up elements in down
							{
								matrix[i,k - 1] = matrix[i,k];
								matrix[i,k] = 0;
							}
						}
					}
				}
			}
			return didAction;
		}


		int rightKeyPressed(cli::array<int, 2>^, int onlyCheck)
		{
			int didAction = 0;
			for (int i = 0; i < N; i++) //do algorythm for all row
			{
				for (int j = N - 1; j >= 0; j--) // go through all colums from right to left
				{
					if (matrix[i,j] == 0) // found first free cell
					{
						for (int k = j - 1; k >= 0; k--) // take a look for not free cells left
						{
							if (matrix[i,k] != 0) // found not free cell
							{
								// swap it with free
								if (!onlyCheck)
								{
									matrix[i,j] = matrix[i,k];
									matrix[i,k] = 0;
								}

								didAction = 1;
								break;
							}
						}
					}
				}
				// sum same neibour elements
				for (int j = N - 1; j >= 1; j--)
				{
					if (matrix[i,j] == matrix[i,j - 1] && matrix[i,j] != 0)
					{
						didAction = 1;
						if (!onlyCheck)
						{
							matrix[i,j] *= 2;
							score += matrix[i, j];
							matrix[i,j - 1] = 0;
							for (int k = j - 2; k >= 0; k--) // take up elements in down
							{
								matrix[i,k + 1] = matrix[i,k];
								matrix[i,k] = 0;
							}
						}

					}
				}
			}
			return didAction;
		}

		void printMatix(cli::array<int, 2>^)
		{
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					Control^ c = tableLayoutPanel1->GetControlFromPosition(j,i);
					if (matrix[i, j] != 0)
					{
						c->Text = matrix[i, j].ToString();
						if (matrix[i, j] <= 4)
							c->ForeColor = ColorTranslator::FromHtml("#776e65");
						else c->ForeColor = ColorTranslator::FromHtml("#f9f6f2");
						if(matrix[i,j] == 2)
							c->BackColor = ColorTranslator::FromHtml("#eee4da");
						if (matrix[i, j] == 4)
							c->BackColor = ColorTranslator::FromHtml("#ede0c8");
						if (matrix[i, j] == 8)
							c->BackColor = ColorTranslator::FromHtml("#f2b179");
						if (matrix[i, j] == 16)
							c->BackColor = ColorTranslator::FromHtml("#f59563");
						if (matrix[i, j] == 32)
							c->BackColor = ColorTranslator::FromHtml("#f67c5f");
						if (matrix[i, j] == 64)
							c->BackColor = ColorTranslator::FromHtml("#f65e3b");
						if (matrix[i, j] >= 128)
							c->BackColor = ColorTranslator::FromHtml("#edcf72");
					}
						
					else
					{
						c->Text = "";
						c->BackColor = ColorTranslator::FromHtml("#bbada0");
					}

					label1->Text = "Score : " + score.ToString();
				}
			}

		}
		void spawnNewItem(cli::array<int, 2>^)
		{
			int r1, r2;
			do {
				r1 = rand() % N;
				r2 = rand() % N;
			} while (matrix[r1,r2] != 0);

			matrix[r1,r2] = 2;
		}

		int userLost(cli::array<int, 2>^)
		{
			if (!upKeyPressed(matrix, 1) && !downKeyPressed(matrix, 1) && !leftKeyPressed(matrix, 1) && !rightKeyPressed(matrix, 1))
				return 1;
			else return 0;
		}

		void startNewGame(cli::array<int, 2>^)
		{
			for (int i = 0; i < N; i++)
				for (int j = 0; j < N; j++)
					matrix[i,j] = 0;
			spawnNewItem(matrix);
			printMatix(matrix);
			score = 0;
		}

		private: System::Void Form2048_Load(System::Object^  sender, System::EventArgs^  e) {

			srand(time(NULL));
			startNewGame(matrix); 
			this->BackColor = ColorTranslator::FromHtml("#bbada0");
		
		}
		private: System::Void Form2048_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			if (userLost(matrix))
			{
				String^ message = "Do you want to play again?";
				String^ caption = "You lost! :(";
				MessageBoxButtons buttons = MessageBoxButtons::YesNo;
				System::Windows::Forms::DialogResult result = MessageBox::Show(message, caption, buttons);

				if (result == System::Windows::Forms::DialogResult::Yes)
					startNewGame(matrix);
				if (result == System::Windows::Forms::DialogResult::No)
					Application::Exit();
			}

			int didAction = 0;
			switch (e->KeyCode)
			{
			case Keys::Up: didAction = upKeyPressed(matrix, 0); break;
			case Keys::Down: didAction = downKeyPressed(matrix, 0); break;
			case Keys::Left: didAction = leftKeyPressed(matrix, 0); break;
			case Keys::Right: didAction = rightKeyPressed(matrix, 0); break;
			};
			if (didAction)
				spawnNewItem(matrix);


			printMatix(matrix);
		}

};
}
