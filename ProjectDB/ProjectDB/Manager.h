#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjectDB {

	/// <summary>
	/// Сводка для Manager
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Manager : public System::Windows::Forms::Form
	{
	public:
		Manager(void)
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
		~Manager()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ArtistColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  AlbumColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  YearColumn;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  QuantityColumn;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ArtistColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AlbumColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->YearColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuantityColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выберите жанр:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Поп", L"Рок", L"Электронная музыка"});
			this->comboBox1->Location = System::Drawing::Point(107, 6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(135, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Manager::comboBox1_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->ArtistColumn, 
				this->AlbumColumn, this->YearColumn, this->QuantityColumn});
			this->dataGridView1->Location = System::Drawing::Point(12, 33);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(491, 240);
			this->dataGridView1->TabIndex = 2;
			// 
			// ArtistColumn
			// 
			this->ArtistColumn->HeaderText = L"Исполнитель";
			this->ArtistColumn->Name = L"ArtistColumn";
			// 
			// AlbumColumn
			// 
			this->AlbumColumn->HeaderText = L"Альбом";
			this->AlbumColumn->Name = L"AlbumColumn";
			// 
			// YearColumn
			// 
			this->YearColumn->HeaderText = L"Год записи";
			this->YearColumn->Name = L"YearColumn";
			// 
			// QuantityColumn
			// 
			this->QuantityColumn->HeaderText = L"Количество дисков";
			this->QuantityColumn->Name = L"QuantityColumn";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(434, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Поиск:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(482, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(546, 333);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Manager::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(163, 333);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Выдать диск";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 333);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Сохранить изменения";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// Manager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(658, 391);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Manager";
			this->Text = L"Manager";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			if (comboBox1->SelectedItem == "Поп")
			{
				dataGridView1->Rows->Clear();
				dataGridView1->Rows->Add("Michael Jackson", "Thriller", "1982", "10");
				dataGridView1->Rows->Add("Prince", "The Rainbow Children", "2001", "12");
				dataGridView1->Rows->Add("Reol","Sigma","2015","5");
			}
			if (comboBox1->SelectedItem == "Рок")
			{
				dataGridView1->Rows->Clear();
				dataGridView1->Rows->Add("Franz Ferdinand", "Ulysses", "2008", "5");
				dataGridView1->Rows->Add("Muse", "Drones", "2015", "10");
				dataGridView1->Rows->Add("Wildways", "Day X", "2018", "10");
			}
		 }
};
}
