#pragma once
#include "Matr.h"

namespace MatrixAPP2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int N = 5;
	Matr A(N), B(N);

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  M1;
	private: System::Windows::Forms::DataGridView^  M2;
	private: System::Windows::Forms::DataGridView^  M3;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->M1 = (gcnew System::Windows::Forms::DataGridView());
			this->M2 = (gcnew System::Windows::Forms::DataGridView());
			this->M3 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 532);
			this->panel1->TabIndex = 0;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(28, 217);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 30);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(28, 145);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 41);
			this->button3->TabIndex = 2;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(28, 98);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(28, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->M1);
			this->panel2->Controls->Add(this->M2);
			this->panel2->Controls->Add(this->M3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(200, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(858, 532);
			this->panel2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(627, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"���������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(405, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"B";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(135, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"A";
			// 
			// M1
			// 
			this->M1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->M1->Location = System::Drawing::Point(30, 98);
			this->M1->Name = L"M1";
			this->M1->RowTemplate->Height = 24;
			this->M1->Size = System::Drawing::Size(240, 240);
			this->M1->TabIndex = 2;
			// 
			// M2
			// 
			this->M2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->M2->Location = System::Drawing::Point(298, 98);
			this->M2->Name = L"M2";
			this->M2->RowTemplate->Height = 24;
			this->M2->Size = System::Drawing::Size(240, 240);
			this->M2->TabIndex = 1;
			// 
			// M3
			// 
			this->M3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->M3->Location = System::Drawing::Point(567, 98);
			this->M3->Name = L"M3";
			this->M3->RowTemplate->Height = 24;
			this->M3->Size = System::Drawing::Size(240, 240);
			this->M3->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 532);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//���������� ������
		System::Random ^R = gcnew Random();
		for (int i = 0; i < N * N; i++)
		{
			A[i] = R->Next() % 10 - R->Next() % 10;
			B[i] = R->Next() % 10 - R->Next() % 10;
		}
		//����� ������
		M1->ColumnCount = N;
		M2->ColumnCount = N;
		M1->RowCount = N;
		M2->RowCount = N;
		MyForm::numericUpDown1->Value = N;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++) {
				M1->Rows[i]->Cells[j]->Value = A[i * N + j];
				M2->Rows[i]->Cells[j]->Value = B[i * N + j];
			}
		M1->AutoResizeColumns();
		M1->AutoResizeRows();
		M2->AutoResizeColumns();
		M2->AutoResizeRows();
		}
	};
}
