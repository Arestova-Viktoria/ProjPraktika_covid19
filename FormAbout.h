#pragma once

namespace ProjPraktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormAbout
	/// </summary>
	public ref class FormAbout : public System::Windows::Forms::Form
	{
	public:
		FormAbout(void)
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
		~FormAbout()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_back2;
	private: System::Windows::Forms::Button^ button_exit2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label_po7;
	private: System::Windows::Forms::Button^ button_po7;
	private: System::Windows::Forms::Label^ label_po6;
	private: System::Windows::Forms::Label^ label_po5;
	private: System::Windows::Forms::Button^ button_po5;
	private: System::Windows::Forms::Label^ label_po4;
	private: System::Windows::Forms::Button^ button_po4;
	private: System::Windows::Forms::Label^ label_po3;
	private: System::Windows::Forms::Button^ button_po3;
	private: System::Windows::Forms::Label^ label_po2;
	private: System::Windows::Forms::Button^ button_po2;
	private: System::Windows::Forms::Label^ label_po1;
	private: System::Windows::Forms::Button^ button_po1;
	private: System::Windows::Forms::Label^ label2;


	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAbout::typeid));
			this->button_back2 = (gcnew System::Windows::Forms::Button());
			this->button_exit2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label_po7 = (gcnew System::Windows::Forms::Label());
			this->button_po7 = (gcnew System::Windows::Forms::Button());
			this->label_po6 = (gcnew System::Windows::Forms::Label());
			this->label_po5 = (gcnew System::Windows::Forms::Label());
			this->button_po5 = (gcnew System::Windows::Forms::Button());
			this->label_po4 = (gcnew System::Windows::Forms::Label());
			this->button_po4 = (gcnew System::Windows::Forms::Button());
			this->label_po3 = (gcnew System::Windows::Forms::Label());
			this->button_po3 = (gcnew System::Windows::Forms::Button());
			this->label_po2 = (gcnew System::Windows::Forms::Label());
			this->button_po2 = (gcnew System::Windows::Forms::Button());
			this->label_po1 = (gcnew System::Windows::Forms::Label());
			this->button_po1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_back2
			// 
			this->button_back2->AutoSize = true;
			this->button_back2->Font = (gcnew System::Drawing::Font(L"Broadway", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_back2->Location = System::Drawing::Point(22, 550);
			this->button_back2->Name = L"button_back2";
			this->button_back2->Size = System::Drawing::Size(91, 37);
			this->button_back2->TabIndex = 0;
			this->button_back2->Text = L"Назад";
			this->button_back2->UseVisualStyleBackColor = true;
			this->button_back2->Click += gcnew System::EventHandler(this, &FormAbout::button_back2_Click);
			// 
			// button_exit2
			// 
			this->button_exit2->AutoSize = true;
			this->button_exit2->Font = (gcnew System::Drawing::Font(L"Broadway", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit2->Location = System::Drawing::Point(941, 550);
			this->button_exit2->Name = L"button_exit2";
			this->button_exit2->Size = System::Drawing::Size(97, 37);
			this->button_exit2->TabIndex = 1;
			this->button_exit2->Text = L"Выход";
			this->button_exit2->UseVisualStyleBackColor = true;
			this->button_exit2->Click += gcnew System::EventHandler(this, &FormAbout::button_exit2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Broadway", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(462, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Справка:";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::PapayaWhip;
			this->groupBox1->Controls->Add(this->label_po7);
			this->groupBox1->Controls->Add(this->button_po7);
			this->groupBox1->Controls->Add(this->label_po6);
			this->groupBox1->Controls->Add(this->label_po5);
			this->groupBox1->Controls->Add(this->button_po5);
			this->groupBox1->Controls->Add(this->label_po4);
			this->groupBox1->Controls->Add(this->button_po4);
			this->groupBox1->Controls->Add(this->label_po3);
			this->groupBox1->Controls->Add(this->button_po3);
			this->groupBox1->Controls->Add(this->label_po2);
			this->groupBox1->Controls->Add(this->button_po2);
			this->groupBox1->Controls->Add(this->label_po1);
			this->groupBox1->Controls->Add(this->button_po1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(364, 369);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(330, 218);
			this->groupBox1->TabIndex = 43;
			this->groupBox1->TabStop = false;
			// 
			// label_po7
			// 
			this->label_po7->AutoSize = true;
			this->label_po7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_po7->Location = System::Drawing::Point(50, 134);
			this->label_po7->Name = L"label_po7";
			this->label_po7->Size = System::Drawing::Size(192, 20);
			this->label_po7->TabIndex = 41;
			this->label_po7->Text = L"- Полностью привиты";
			// 
			// button_po7
			// 
			this->button_po7->BackColor = System::Drawing::Color::DarkGray;
			this->button_po7->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button_po7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_po7->Location = System::Drawing::Point(14, 135);
			this->button_po7->Name = L"button_po7";
			this->button_po7->Size = System::Drawing::Size(20, 20);
			this->button_po7->TabIndex = 40;
			this->button_po7->UseVisualStyleBackColor = false;
			// 
			// label_po6
			// 
			this->label_po6->AutoSize = true;
			this->label_po6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_po6->Location = System::Drawing::Point(10, 0);
			this->label_po6->Name = L"label_po6";
			this->label_po6->Size = System::Drawing::Size(279, 20);
			this->label_po6->TabIndex = 39;
			this->label_po6->Text = L"Условные обозначения модели:";
			// 
			// label_po5
			// 
			this->label_po5->AutoSize = true;
			this->label_po5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_po5->Location = System::Drawing::Point(50, 187);
			this->label_po5->Name = L"label_po5";
			this->label_po5->Size = System::Drawing::Size(91, 20);
			this->label_po5->TabIndex = 38;
			this->label_po5->Text = L"- Погибли";
			// 
			// button_po5
			// 
			this->button_po5->BackColor = System::Drawing::Color::Black;
			this->button_po5->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button_po5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_po5->Location = System::Drawing::Point(14, 187);
			this->button_po5->Name = L"button_po5";
			this->button_po5->Size = System::Drawing::Size(20, 20);
			this->button_po5->TabIndex = 37;
			this->button_po5->UseVisualStyleBackColor = false;
			// 
			// label_po4
			// 
			this->label_po4->AutoSize = true;
			this->label_po4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_po4->Location = System::Drawing::Point(50, 160);
			this->label_po4->Name = L"label_po4";
			this->label_po4->Size = System::Drawing::Size(135, 20);
			this->label_po4->TabIndex = 36;
			this->label_po4->Text = L"- Выздоровели";
			// 
			// button_po4
			// 
			this->button_po4->BackColor = System::Drawing::Color::SeaGreen;
			this->button_po4->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button_po4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_po4->Location = System::Drawing::Point(14, 161);
			this->button_po4->Name = L"button_po4";
			this->button_po4->Size = System::Drawing::Size(20, 20);
			this->button_po4->TabIndex = 35;
			this->button_po4->UseVisualStyleBackColor = false;
			// 
			// label_po3
			// 
			this->label_po3->AutoSize = true;
			this->label_po3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_po3->Location = System::Drawing::Point(50, 110);
			this->label_po3->Name = L"label_po3";
			this->label_po3->Size = System::Drawing::Size(205, 20);
			this->label_po3->TabIndex = 34;
			this->label_po3->Text = L"- Не подвержены риску";
			// 
			// button_po3
			// 
			this->button_po3->BackColor = System::Drawing::Color::PapayaWhip;
			this->button_po3->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button_po3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_po3->Location = System::Drawing::Point(14, 111);
			this->button_po3->Name = L"button_po3";
			this->button_po3->Size = System::Drawing::Size(20, 20);
			this->button_po3->TabIndex = 33;
			this->button_po3->UseVisualStyleBackColor = false;
			// 
			// label_po2
			// 
			this->label_po2->AutoSize = true;
			this->label_po2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_po2->Location = System::Drawing::Point(50, 64);
			this->label_po2->Name = L"label_po2";
			this->label_po2->Size = System::Drawing::Size(248, 40);
			this->label_po2->TabIndex = 32;
			this->label_po2->Text = L"- Переносчики (в том числе \r\n   в инкубационный период)";
			// 
			// button_po2
			// 
			this->button_po2->BackColor = System::Drawing::Color::LightCoral;
			this->button_po2->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button_po2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_po2->Location = System::Drawing::Point(14, 65);
			this->button_po2->Name = L"button_po2";
			this->button_po2->Size = System::Drawing::Size(20, 20);
			this->button_po2->TabIndex = 31;
			this->button_po2->UseVisualStyleBackColor = false;
			// 
			// label_po1
			// 
			this->label_po1->AutoSize = true;
			this->label_po1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_po1->Location = System::Drawing::Point(50, 39);
			this->label_po1->Name = L"label_po1";
			this->label_po1->Size = System::Drawing::Size(102, 20);
			this->label_po1->TabIndex = 30;
			this->label_po1->Text = L"- Заболели";
			// 
			// button_po1
			// 
			this->button_po1->BackColor = System::Drawing::Color::Firebrick;
			this->button_po1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_po1->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button_po1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_po1->Location = System::Drawing::Point(14, 39);
			this->button_po1->Name = L"button_po1";
			this->button_po1->Size = System::Drawing::Size(20, 20);
			this->button_po1->TabIndex = 29;
			this->button_po1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(55, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(952, 312);
			this->label2->TabIndex = 44;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// FormAbout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(1062, 606);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_exit2);
			this->Controls->Add(this->button_back2);
			this->Name = L"FormAbout";
			this->Text = L"О программе";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_back2_Click(System::Object^ sender, System::EventArgs^ e) {
		FormAbout::Hide();
	}
	private: System::Void button_exit2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

};
}
