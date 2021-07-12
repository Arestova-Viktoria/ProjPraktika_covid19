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
			this->button_back2 = (gcnew System::Windows::Forms::Button());
			this->button_exit2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->label1->Location = System::Drawing::Point(464, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Справка:";
			// 
			// FormAbout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(1062, 606);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_exit2);
			this->Controls->Add(this->button_back2);
			this->Name = L"FormAbout";
			this->Text = L"О программе";
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
