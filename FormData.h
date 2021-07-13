#pragma once
namespace ProjPraktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button_enter;
	private: System::Windows::Forms::Label^ label_1;
	private: System::Windows::Forms::Label^ label_2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label_3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label_4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
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
	private: System::Windows::Forms::Label^ label_10;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown10;
	private: System::Windows::Forms::Button^ button_restart;







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
			this->label_data = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_lastExit = (gcnew System::Windows::Forms::Button());
			this->label_model = (gcnew System::Windows::Forms::Label());
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_enter = (gcnew System::Windows::Forms::Button());
			this->label_1 = (gcnew System::Windows::Forms::Label());
			this->label_2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
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
			this->label_10 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_restart = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
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
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(277, 57);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(92, 28);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
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
			// label_1
			// 
			this->label_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_1->Location = System::Drawing::Point(8, 57);
			this->label_1->Name = L"label_1";
			this->label_1->Size = System::Drawing::Size(243, 28);
			this->label_1->TabIndex = 7;
			this->label_1->Text = L"Инкубационный период:";
			// 
			// label_2
			// 
			this->label_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_2->Location = System::Drawing::Point(8, 94);
			this->label_2->Name = L"label_2";
			this->label_2->Size = System::Drawing::Size(263, 28);
			this->label_2->TabIndex = 8;
			this->label_2->Text = L"Длительность симптомов:";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(277, 94);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(92, 28);
			this->numericUpDown2->TabIndex = 9;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label_3
			// 
			this->label_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_3->Location = System::Drawing::Point(8, 131);
			this->label_3->Name = L"label_3";
			this->label_3->Size = System::Drawing::Size(255, 28);
			this->label_3->TabIndex = 10;
			this->label_3->Text = L"Радиус перемещения:";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown3->Location = System::Drawing::Point(277, 131);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(92, 28);
			this->numericUpDown3->TabIndex = 11;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label_4
			// 
			this->label_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_4->Location = System::Drawing::Point(8, 170);
			this->label_4->Name = L"label_4";
			this->label_4->Size = System::Drawing::Size(255, 28);
			this->label_4->TabIndex = 12;
			this->label_4->Text = L"Контактов в день:";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown4->Location = System::Drawing::Point(277, 170);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(92, 28);
			this->numericUpDown4->TabIndex = 13;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label_5
			// 
			this->label_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_5->Location = System::Drawing::Point(8, 209);
			this->label_5->Name = L"label_5";
			this->label_5->Size = System::Drawing::Size(257, 51);
			this->label_5->TabIndex = 14;
			this->label_5->Text = L"Входная смертность\r\n(в %):";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown5->Location = System::Drawing::Point(277, 220);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(92, 28);
			this->numericUpDown5->TabIndex = 15;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label_6
			// 
			this->label_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_6->Location = System::Drawing::Point(8, 271);
			this->label_6->Name = L"label_6";
			this->label_6->Size = System::Drawing::Size(255, 28);
			this->label_6->TabIndex = 16;
			this->label_6->Text = L"Наличие маски (в %):";
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown6->Location = System::Drawing::Point(277, 271);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(92, 28);
			this->numericUpDown6->TabIndex = 17;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label_7
			// 
			this->label_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_7->Location = System::Drawing::Point(8, 309);
			this->label_7->Name = L"label_7";
			this->label_7->Size = System::Drawing::Size(255, 28);
			this->label_7->TabIndex = 18;
			this->label_7->Text = L"Наличие прививки (в %):";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown7->Location = System::Drawing::Point(277, 309);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(92, 28);
			this->numericUpDown7->TabIndex = 19;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label_8
			// 
			this->label_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_8->Location = System::Drawing::Point(8, 349);
			this->label_8->Name = L"label_8";
			this->label_8->Size = System::Drawing::Size(263, 54);
			this->label_8->TabIndex = 20;
			this->label_8->Text = L"Эффективность прививки\r\nот данного штамма (в %):";
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown8->Location = System::Drawing::Point(277, 365);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(92, 28);
			this->numericUpDown8->TabIndex = 21;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label_9
			// 
			this->label_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_9->Location = System::Drawing::Point(8, 416);
			this->label_9->Name = L"label_9";
			this->label_9->Size = System::Drawing::Size(255, 55);
			this->label_9->TabIndex = 22;
			this->label_9->Text = L"Вместимость больниц \r\n(в %):";
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown9->Location = System::Drawing::Point(277, 431);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(92, 28);
			this->numericUpDown9->TabIndex = 23;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label_10
			// 
			this->label_10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_10->Location = System::Drawing::Point(8, 480);
			this->label_10->Name = L"label_10";
			this->label_10->Size = System::Drawing::Size(255, 52);
			this->label_10->TabIndex = 24;
			this->label_10->Text = L"Общее состояние\r\nздоровья людей (в %):";
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown10->Location = System::Drawing::Point(277, 491);
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(92, 28);
			this->numericUpDown10->TabIndex = 25;
			this->numericUpDown10->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
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
			// FormData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(1072, 633);
			this->Controls->Add(this->button_restart);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->label_10);
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
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->label_4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label_3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label_2);
			this->Controls->Add(this->label_1);
			this->Controls->Add(this->button_enter);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button_back);
			this->Controls->Add(this->label_model);
			this->Controls->Add(this->button_lastExit);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_data);
			this->DoubleBuffered = true;
			this->Name = L"FormData";
			this->Text = L"Модель распространения коронавируса";
			this->Load += gcnew System::EventHandler(this, &FormData::FormData_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		array<Button^, 2>^ buttons;
#pragma endregion



private: System::Void button_lastExit_Click(System::Object^ sender, System::EventArgs^ e) {
	//выход из программы
	Application::Exit();
}
private: System::Void button_back_Click(System::Object^ sender, System::EventArgs^ e) {
	FormData::Hide();
}
private: System::Void button_enter_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ one = numericUpDown1->Text;
	if (one == "20")
		MessageBox::Show(this, "Всё ок", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);

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
			if(i == 10 && j == 10)	//посередине первый зараженный, отмечен красным
				buttons[i, j]->BackColor = Color::Red;
		}
	}
}

//перезапуск модели
private: System::Void button_restart_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int j = 0; j < 21; j++) {
		for (int i = 0; i < 21; i++) {
			buttons[i, j]->FlatAppearance->BorderColor = Color::LightGray;
			if (i == 10 && j == 10)	//посередине первый зараженный, отмечен красным
				buttons[i, j]->BackColor = Color::Red;
		}
	}
}
};
}
