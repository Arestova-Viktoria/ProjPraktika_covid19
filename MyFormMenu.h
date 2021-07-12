#pragma once
#include "FormData.h"
#include "FormAbout.h"
namespace ProjPraktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyFormMenu
	/// </summary>
	public ref class MyFormMenu : public System::Windows::Forms::Form
	{
	public:
		MyFormMenu(void)
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
		~MyFormMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_menu;
	private: System::Windows::Forms::Button^ button_korona;
	private: System::Windows::Forms::Button^ button_about;
	private: System::Windows::Forms::Button^ button_exit;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormMenu::typeid));
			this->label_menu = (gcnew System::Windows::Forms::Label());
			this->button_korona = (gcnew System::Windows::Forms::Button());
			this->button_about = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_menu
			// 
			this->label_menu->AutoSize = true;
			this->label_menu->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_menu->Font = (gcnew System::Drawing::Font(L"Broadway", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_menu->Location = System::Drawing::Point(468, 85);
			this->label_menu->Name = L"label_menu";
			this->label_menu->Size = System::Drawing::Size(131, 48);
			this->label_menu->TabIndex = 0;
			this->label_menu->Text = L"Меню";
			// 
			// button_korona
			// 
			this->button_korona->AutoSize = true;
			this->button_korona->Font = (gcnew System::Drawing::Font(L"Broadway", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_korona->Location = System::Drawing::Point(374, 200);
			this->button_korona->Name = L"button_korona";
			this->button_korona->Size = System::Drawing::Size(318, 67);
			this->button_korona->TabIndex = 1;
			this->button_korona->Text = L"Коронавирус";
			this->button_korona->UseVisualStyleBackColor = true;
			this->button_korona->Click += gcnew System::EventHandler(this, &MyFormMenu::button1_Click);
			// 
			// button_about
			// 
			this->button_about->AutoSize = true;
			this->button_about->Font = (gcnew System::Drawing::Font(L"Broadway", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_about->Location = System::Drawing::Point(374, 320);
			this->button_about->Name = L"button_about";
			this->button_about->Size = System::Drawing::Size(318, 67);
			this->button_about->TabIndex = 2;
			this->button_about->Text = L"О программе";
			this->button_about->UseVisualStyleBackColor = true;
			this->button_about->Click += gcnew System::EventHandler(this, &MyFormMenu::button2_Click);
			// 
			// button_exit
			// 
			this->button_exit->AutoSize = true;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Broadway", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->Location = System::Drawing::Point(374, 440);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(318, 67);
			this->button_exit->TabIndex = 3;
			this->button_exit->Text = L"Выход";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyFormMenu::button_exit_Click);
			// 
			// MyFormMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1062, 606);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_about);
			this->Controls->Add(this->button_korona);
			this->Controls->Add(this->label_menu);
			this->Name = L"MyFormMenu";
			this->Text = L"MyFormMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		FormData^ form1 = gcnew FormData();  //создаем новый экземпляр
		form1->Show();	//открываем новую форму
		//MyFormMenu::Hide();	//скрываем первую форму
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// о программе
	FormAbout^ form_ab = gcnew FormAbout();  //создаем новый экземпляр
	form_ab->Show();	//открываем новую форму
}
private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	//выход из программы
	Application::Exit();
}
};
}
