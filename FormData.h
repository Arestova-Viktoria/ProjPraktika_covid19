#pragma once
#include "PeopleList.h"
#include "Children.h"
#include "Person.h"
#include "Adult.h"
#include "Aged.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <Windows.h>
#include <dos.h>
#include <chrono>
#include <thread>


namespace ProjPraktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;
	
	/// <summary>
	/// Сводка для FormData
	/// </summary>
	public ref class FormData : public System::Windows::Forms::Form
	{
	public:
		FormData(void)
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
		~FormData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_data;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_lastExit;
	private: System::Windows::Forms::Label^ label_model;
	private: System::Windows::Forms::Button^ button_back;

	private: System::Windows::Forms::Button^ button_enter;







	private: System::Windows::Forms::Label^ label_5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Label^ label_6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::Label^ label_7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::Label^ label_8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::Label^ label_9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown9;


	private: System::Windows::Forms::Button^ button_restart;
	private: System::Windows::Forms::Button^ button_start_model;
	private: System::Windows::Forms::Button^ button_step;
	private: System::Windows::Forms::Button^ button_po1;
	private: System::Windows::Forms::Label^ label_po1;
	private: System::Windows::Forms::Button^ button_po2;
	private: System::Windows::Forms::Label^ label_po2;
	private: System::Windows::Forms::Button^ button_po3;
	private: System::Windows::Forms::Label^ label_po3;
	private: System::Windows::Forms::Button^ button_po4;
	private: System::Windows::Forms::Label^ label_po4;
	private: System::Windows::Forms::Button^ button_po5;
	private: System::Windows::Forms::Label^ label_po5;
	private: System::Windows::Forms::Label^ label_po6;
	private: System::Windows::Forms::Button^ button_po7;
	private: System::Windows::Forms::Label^ label_po7;
	private: System::Windows::Forms::GroupBox^ groupBox1;









	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_data = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_lastExit = (gcnew System::Windows::Forms::Button());
			this->label_model = (gcnew System::Windows::Forms::Label());
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->button_enter = (gcnew System::Windows::Forms::Button());
			this->label_5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_restart = (gcnew System::Windows::Forms::Button());
			this->button_start_model = (gcnew System::Windows::Forms::Button());
			this->button_step = (gcnew System::Windows::Forms::Button());
			this->button_po1 = (gcnew System::Windows::Forms::Button());
			this->label_po1 = (gcnew System::Windows::Forms::Label());
			this->button_po2 = (gcnew System::Windows::Forms::Button());
			this->label_po2 = (gcnew System::Windows::Forms::Label());
			this->button_po3 = (gcnew System::Windows::Forms::Button());
			this->label_po3 = (gcnew System::Windows::Forms::Label());
			this->button_po4 = (gcnew System::Windows::Forms::Button());
			this->label_po4 = (gcnew System::Windows::Forms::Label());
			this->button_po5 = (gcnew System::Windows::Forms::Button());
			this->label_po5 = (gcnew System::Windows::Forms::Label());
			this->label_po6 = (gcnew System::Windows::Forms::Label());
			this->button_po7 = (gcnew System::Windows::Forms::Button());
			this->label_po7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_data
			// 
			this->label_data->AutoSize = true;
			this->label_data->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_data->Font = (gcnew System::Drawing::Font(L"Broadway", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_data->ForeColor = System::Drawing::Color::Black;
			this->label_data->Location = System::Drawing::Point(12, 9);
			this->label_data->Name = L"label_data";
			this->label_data->Size = System::Drawing::Size(202, 29);
			this->label_data->TabIndex = 0;
			this->label_data->Text = L"Введите данные:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(382, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(11, 612);
			this->label1->TabIndex = 1;
			this->label1->Text = L"|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n"
				L"|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|";
			// 
			// button_lastExit
			// 
			this->button_lastExit->AutoSize = true;
			this->button_lastExit->Font = (gcnew System::Drawing::Font(L"Broadway", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_lastExit->Location = System::Drawing::Point(963, 584);
			this->button_lastExit->Name = L"button_lastExit";
			this->button_lastExit->Size = System::Drawing::Size(97, 37);
			this->button_lastExit->TabIndex = 2;
			this->button_lastExit->Text = L"Выход";
			this->button_lastExit->UseVisualStyleBackColor = true;
			this->button_lastExit->Click += gcnew System::EventHandler(this, &FormData::button_lastExit_Click);
			// 
			// label_model
			// 
			this->label_model->AutoSize = true;
			this->label_model->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_model->Font = (gcnew System::Drawing::Font(L"Broadway", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_model->Location = System::Drawing::Point(671, 11);
			this->label_model->Name = L"label_model";
			this->label_model->Size = System::Drawing::Size(97, 29);
			this->label_model->TabIndex = 3;
			this->label_model->Text = L"Модель";
			// 
			// button_back
			// 
			this->button_back->AutoSize = true;
			this->button_back->Font = (gcnew System::Drawing::Font(L"Broadway", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_back->Location = System::Drawing::Point(12, 584);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(91, 37);
			this->button_back->TabIndex = 4;
			this->button_back->Text = L"Назад";
			this->button_back->UseVisualStyleBackColor = true;
			this->button_back->Click += gcnew System::EventHandler(this, &FormData::button_back_Click);
			// 
			// button_enter
			// 
			this->button_enter->AutoSize = true;
			this->button_enter->Font = (gcnew System::Drawing::Font(L"Broadway", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_enter->Location = System::Drawing::Point(271, 584);
			this->button_enter->Name = L"button_enter";
			this->button_enter->Size = System::Drawing::Size(98, 37);
			this->button_enter->TabIndex = 6;
			this->button_enter->Text = L"Ввести";
			this->button_enter->UseVisualStyleBackColor = true;
			this->button_enter->Click += gcnew System::EventHandler(this, &FormData::button_enter_Click);
			// 
			// label_5
			// 
			this->label_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_5->Location = System::Drawing::Point(8, 54);
			this->label_5->Name = L"label_5";
			this->label_5->Size = System::Drawing::Size(257, 51);
			this->label_5->TabIndex = 14;
			this->label_5->Text = L"Входная смертность\r\n(в %):";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown5->Location = System::Drawing::Point(277, 65);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(92, 28);
			this->numericUpDown5->TabIndex = 15;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// label_6
			// 
			this->label_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_6->Location = System::Drawing::Point(8, 123);
			this->label_6->Name = L"label_6";
			this->label_6->Size = System::Drawing::Size(255, 28);
			this->label_6->TabIndex = 16;
			this->label_6->Text = L"Наличие маски (в %):";
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown6->Location = System::Drawing::Point(277, 123);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(92, 28);
			this->numericUpDown6->TabIndex = 17;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label_7
			// 
			this->label_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_7->Location = System::Drawing::Point(8, 179);
			this->label_7->Name = L"label_7";
			this->label_7->Size = System::Drawing::Size(255, 28);
			this->label_7->TabIndex = 18;
			this->label_7->Text = L"Наличие прививки (в %):";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown7->Location = System::Drawing::Point(277, 179);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(92, 28);
			this->numericUpDown7->TabIndex = 19;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 13, 0, 0, 0 });
			// 
			// label_8
			// 
			this->label_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_8->Location = System::Drawing::Point(8, 230);
			this->label_8->Name = L"label_8";
			this->label_8->Size = System::Drawing::Size(263, 54);
			this->label_8->TabIndex = 20;
			this->label_8->Text = L"Эффективность прививки\r\nот данного штамма (в %):";
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown8->Location = System::Drawing::Point(277, 242);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(92, 28);
			this->numericUpDown8->TabIndex = 21;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 98, 0, 0, 0 });
			// 
			// label_9
			// 
			this->label_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_9->Location = System::Drawing::Point(8, 299);
			this->label_9->Name = L"label_9";
			this->label_9->Size = System::Drawing::Size(255, 55);
			this->label_9->TabIndex = 22;
			this->label_9->Text = L"Вместимость больниц \r\n(в %):";
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown9->Location = System::Drawing::Point(277, 312);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(92, 28);
			this->numericUpDown9->TabIndex = 23;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 80, 0, 0, 0 });
			// 
			// button_restart
			// 
			this->button_restart->AutoSize = true;
			this->button_restart->Font = (gcnew System::Drawing::Font(L"Broadway", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_restart->Location = System::Drawing::Point(405, 584);
			this->button_restart->Name = L"button_restart";
			this->button_restart->Size = System::Drawing::Size(100, 37);
			this->button_restart->TabIndex = 26;
			this->button_restart->Text = L"Заново";
			this->button_restart->UseVisualStyleBackColor = true;
			this->button_restart->Click += gcnew System::EventHandler(this, &FormData::button_restart_Click);
			// 
			// button_start_model
			// 
			this->button_start_model->AutoSize = true;
			this->button_start_model->Font = (gcnew System::Drawing::Font(L"Broadway", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_start_model->Location = System::Drawing::Point(536, 584);
			this->button_start_model->Name = L"button_start_model";
			this->button_start_model->Size = System::Drawing::Size(186, 37);
			this->button_start_model->TabIndex = 27;
			this->button_start_model->Text = L"Запуск модели";
			this->button_start_model->UseVisualStyleBackColor = true;
			this->button_start_model->Click += gcnew System::EventHandler(this, &FormData::button_start_model_Click);
			// 
			// button_step
			// 
			this->button_step->AutoSize = true;
			this->button_step->Font = (gcnew System::Drawing::Font(L"Broadway", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_step->Location = System::Drawing::Point(738, 584);
			this->button_step->Name = L"button_step";
			this->button_step->Size = System::Drawing::Size(71, 37);
			this->button_step->TabIndex = 28;
			this->button_step->Text = L"Шаг";
			this->button_step->UseVisualStyleBackColor = true;
			this->button_step->Click += gcnew System::EventHandler(this, &FormData::button_step_Click);
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
			// label_po2
			// 
			this->label_po2->AutoSize = true;
			this->label_po2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_po2->Location = System::Drawing::Point(50, 65);
			this->label_po2->Name = L"label_po2";
			this->label_po2->Size = System::Drawing::Size(248, 40);
			this->label_po2->TabIndex = 32;
			this->label_po2->Text = L"- Переносчики (в том числе \r\n   в инкубационный период)";
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
			// label_po6
			// 
			this->label_po6->AutoSize = true;
			this->label_po6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_po6->Location = System::Drawing::Point(4, 6);
			this->label_po6->Name = L"label_po6";
			this->label_po6->Size = System::Drawing::Size(279, 20);
			this->label_po6->TabIndex = 39;
			this->label_po6->Text = L"Условные обозначения модели:";
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
			// label_po7
			// 
			this->label_po7->AutoSize = true;
			this->label_po7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_po7->Location = System::Drawing::Point(50, 135);
			this->label_po7->Name = L"label_po7";
			this->label_po7->Size = System::Drawing::Size(192, 20);
			this->label_po7->TabIndex = 41;
			this->label_po7->Text = L"- Полностью привиты";
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
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(12, 357);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(330, 218);
			this->groupBox1->TabIndex = 42;
			this->groupBox1->TabStop = false;
			// 
			// FormData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(1072, 633);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button_step);
			this->Controls->Add(this->button_start_model);
			this->Controls->Add(this->button_restart);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->label_9);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->label_8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->label_7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->label_6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->label_5);
			this->Controls->Add(this->button_enter);
			this->Controls->Add(this->button_back);
			this->Controls->Add(this->label_model);
			this->Controls->Add(this->button_lastExit);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_data);
			this->DoubleBuffered = true;
			this->Name = L"FormData";
			this->Text = L"Модель распространения коронавируса";
			this->Load += gcnew System::EventHandler(this, &FormData::FormData_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		array<Button^, 2>^ buttons;
		array<int^, 2>^ text_buttons = gcnew array<int^, 2>(21, 21);
		array<Person^, 2>^ pers_list;
		int raz = 0;

		void print_pole(int n, int m) { //прорисовка вокруг конкрестной клетки
			for (int j = 0; j < 21; j++) {
				for (int i = 0; i < 21; i++) {

					if (i == n && j == m) {
						i++;
						j++;
						buttons[i, j]->BackColor = Color::Black;
						i--;
						buttons[i, j]->BackColor = Color::Black;
						j--;

						i++;
						buttons[i, j]->BackColor = Color::Black;
						j--;
						buttons[i, j]->BackColor = Color::Black;
						j++;
						i--;


						i--;
						buttons[i, j]->BackColor = Color::Black;
						j++;
						buttons[i, j]->BackColor = Color::Black;
						i++;
						j--;

						j--;
						buttons[i, j]->BackColor = Color::Black;
						i--;
						buttons[i, j]->BackColor = Color::Black;
						j++;
						i++;

					}

				}
			}
			
		}
#pragma endregion



	private: System::Void button_lastExit_Click(System::Object^ sender, System::EventArgs^ e) {
		//выход из программы
		Application::Exit();
	}
	private: System::Void button_back_Click(System::Object^ sender, System::EventArgs^ e) {
		FormData::Hide();
	}
	private: System::Void button_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		
		MessageBox::Show(this, "Данные введены успешно!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	private: System::Void FormData_Load(System::Object^ sender, System::EventArgs^ e) {

		//отрисовка поля на форме (размер 21х21 кнопок)	
		buttons = gcnew array<Button^, 2>(21, 21);

		for (int i = 0; i < 21; i++)
		{
			for (int j = 0; j < 21; j++)
			{
				Button^ btn = gcnew Button();
				btn->Size = Drawing::Size(20, 20);
				btn->Location = Drawing::Point(330 + i * 20, 42 + j * 20);

				btn->FlatStyle = FlatStyle::Flat;
				btn->FlatAppearance->BorderColor = Color::LightGray;
				Controls->Add(btn);
				buttons[i, j] = btn;
				if (i == 10 && j == 10) {	//посередине первый зараженный, отмечен красным
					buttons[i, j]->BackColor = Color::Firebrick;
				}
			}
		}
	}



		   //перезапуск модели
	private: System::Void button_restart_Click(System::Object^ sender, System::EventArgs^ e) {

		for (int j = 0; j < 21; j++) {
			for (int i = 0; i < 21; i++) {

				buttons[i, j]->BackColor = Color::PapayaWhip;
				buttons[i, j]->FlatAppearance->BorderColor = Color::LightGray;
				if (i == 10 && j == 10)	//посередине первый зараженный, отмечен красным
					buttons[i, j]->BackColor = Color::Firebrick;
				raz = 0;

			}
		}
	}

		   //запуск модели
	private: System::Void button_start_model_Click(System::Object^ sender, System::EventArgs^ e) {
		PeopleList^ p = gcnew PeopleList();
		p->work_init(text_buttons);

			//проверка
			for (int j = 0; j < 21; j++) {
				for (int i = 0; i < 21; i++) {
					if (i == 10 && j == 10)	//посередине первый зараженный, отмечен красным
						buttons[i, j]->BackColor = Color::Firebrick;
					else {
						if (Convert::ToInt32(text_buttons[i, j]) == 1) //дети
							buttons[i, j]->BackColor = Color::PapayaWhip;
						if (Convert::ToInt32(text_buttons[i, j]) == 2) //взрослые
							buttons[i, j]->BackColor = Color::LightCoral;
						if (Convert::ToInt32(text_buttons[i, j]) == 3) //пожилые
							buttons[i, j]->BackColor = Color::LightCoral;
						if (Convert::ToInt32(text_buttons[i, j]) == 4) //исключение
							buttons[i, j]->BackColor = Color::Black;
					}
				}
			}
		

		//print_pole(10, 10);
		//Sleep(500);
		//Thread::Sleep(1000);
		//System::Threading::Tasks::Task::Delay(10000);
		
}



private: System::Void button_step_Click(System::Object^ sender, System::EventArgs^ e) {
	//std::chrono::seconds dura(1);
	//std::this_thread::sleep_for(dura);
	//i_button += 1;
	//j_button += 1;
	//if(i_button <20 && j_button<20)
	//	print_pole(i_button, j_button);
	//проверка
	Int32 range;
	Int32 mas_ranges[21][21];
	srand(time(NULL));
	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 21; j++) {
			range = 1 + rand() % 100;
			mas_ranges[i][j] = range;
		}
	}
	if (raz == 2)
		raz -= 1;
	if (raz == 0) { //заражение всех подверженных ему (не важно с симптомами или без)
		for (int j = 0; j < 21; j++) {
			for (int i = 0; i < 21; i++) {
				
				if (i == 10 && j == 10)	//посередине первый зараженный, отмечен красным
					buttons[i, j]->BackColor = Color::Firebrick;
				else {
					if (Convert::ToInt32(text_buttons[i, j]) == 1) //дети
						buttons[i, j]->BackColor = Color::PapayaWhip;
					if (Convert::ToInt32(text_buttons[i, j]) == 2 || Convert::ToInt32(text_buttons[i, j]) == 3) { //взрослые
						
						String^ mask_nal = numericUpDown6->Text;
						String^ priv_nal = numericUpDown7->Text;

						

						range = 1 + rand() % 100;
						if (Convert::ToInt32(mask_nal) <= 50) { //если маски меньше чем у 50%
							//range = 1 + rand() % 100;

							if (mas_ranges[i][j] <= 70)
								buttons[i, j]->BackColor = Color::Firebrick; // вероятность заразиться без маски и прививки 70%
							else
								buttons[i, j]->BackColor = Color::LightCoral;
						}
						if (Convert::ToInt32(mask_nal) >= 75) { //если маски больше чем у 75%
							//range = 1 + rand() % 100;

							if (mas_ranges[i][j] <= 2)
								buttons[i, j]->BackColor = Color::Firebrick; // вероятность заразиться без маски и прививки 70%
							else
							buttons[i, j]->BackColor = Color::LightCoral;
						}
						if (Convert::ToInt32(mask_nal) < 75 && Convert::ToInt32(mask_nal) > 50) { //если маски между
							//range = 1 + rand() % 100;

							if (mas_ranges[i][j] <= 50)
								buttons[i, j]->BackColor = Color::Firebrick; // вероятность заразиться без маски и прививки 70%
							else
								buttons[i, j]->BackColor = Color::LightCoral;
						}
						if (Convert::ToInt32(priv_nal) >= mas_ranges[i][j]) {
							//range = 98;
							buttons[i, j]->BackColor = Color::DarkGray; // привитые, которые не заболеют
							text_buttons[i, j] = 5;	
						}

					}
					//if (Convert::ToInt32(text_buttons[i, j]) == 3) //пожилые
					//	buttons[i, j]->BackColor = Color::Firebrick;
					if (Convert::ToInt32(text_buttons[i, j]) == 4) //исключение
						buttons[i, j]->BackColor = Color::Black;
				}
			}
		}
		raz = 2;
		
	}
	 
	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 21; j++) {
			range = 1 + rand() % 100;
			mas_ranges[i][j] = range;
		}
	}
	if (raz == 1) {
		for (int j = 0; j < 21; j++) {
			for (int i = 0; i < 21; i++) {
				if (i == 10 && j == 10)	//посередине первый зараженный, отмечен красным, выздоравливает
					buttons[i, j]->BackColor = Color::SeaGreen;
				else {
					if (Convert::ToInt32(text_buttons[i, j]) == 1) //дети
						buttons[i, j]->BackColor = Color::PapayaWhip;
					if (Convert::ToInt32(text_buttons[i, j]) == 2 || Convert::ToInt32(text_buttons[i, j]) == 3) {	//взрослые и пожилые
						
							String^ smerth = numericUpDown5->Text;
							range = 1 + rand() % 100;
							String^ mask_n = numericUpDown6->Text;

							String^ bol_nal = numericUpDown9->Text;

							if (Convert::ToInt32(mask_n) >= 70)	//маска больше чем у 70%
								range = 95;
							if (mas_ranges[i][j] > range) {		//смертность снижается до минимума
									buttons[i, j]->BackColor = Color::Black;
							}
							else
								buttons[i, j]->BackColor = Color::SeaGreen;	//остальные выздоровели
							
							if (Convert::ToInt32(bol_nal) < 50)
								range = 10;
							else
								range = 5;
							

								if (mas_ranges[i][j] <= range) {		//смертность снижается до минимума
									buttons[i, j]->BackColor = Color::Black;
								}
								else
									buttons[i, j]->BackColor = Color::SeaGreen;	//остальные выздоровели
							
					}
						

					if (Convert::ToInt32(text_buttons[i, j]) == 4) //исключение
						buttons[i, j]->BackColor = Color::Black;
				}
			}
		}
		raz = 0;
	}


}
};
}
