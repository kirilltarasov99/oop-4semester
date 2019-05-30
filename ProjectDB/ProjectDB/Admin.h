#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectDB {

	/// <summary>
	/// Сводка для Admin
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  UserColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PwdColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ReadColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  WriteColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  AdminColumn;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->UserColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PwdColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ReadColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->WriteColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AdminColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Пользователи";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->UserColumn, 
				this->PwdColumn, this->ReadColumn, this->WriteColumn, this->AdminColumn});
			this->dataGridView1->Location = System::Drawing::Point(12, 39);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(557, 150);
			this->dataGridView1->TabIndex = 1;
			// 
			// UserColumn
			// 
			this->UserColumn->HeaderText = L"User";
			this->UserColumn->Name = L"UserColumn";
			// 
			// PwdColumn
			// 
			this->PwdColumn->HeaderText = L"Password";
			this->PwdColumn->Name = L"PwdColumn";
			// 
			// ReadColumn
			// 
			this->ReadColumn->HeaderText = L"Read";
			this->ReadColumn->Name = L"ReadColumn";
			// 
			// WriteColumn
			// 
			this->WriteColumn->HeaderText = L"Write";
			this->WriteColumn->Name = L"WriteColumn";
			// 
			// AdminColumn
			// 
			this->AdminColumn->HeaderText = L"Admin";
			this->AdminColumn->Name = L"AdminColumn";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(569, 269);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 269);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(686, 333);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
private: System::Void Admin_Load(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1->Rows->Add("Клиент", "1234", true, false, false);
		dataGridView1->Rows->Add("Менеджер", "manager123", true, true,false);
		dataGridView1->Rows->Add("Администратор", "admin123", false, false,true);
		 }
};
}
