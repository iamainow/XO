/*
0 - none
1 - X (user)
2 - O (cpu)
*/
namespace XO22 {
#define SIZE 15
	unsigned char FIELD[SIZE][SIZE];
	int RATE[SIZE][SIZE];
	//
	int DEGREE[6];
	//
	unsigned char COURSE;
	//
	unsigned char ISWIN;
	int WINX;
	int WINO;
	int WINNONE;
	//
	int HISTORY[SIZE*SIZE];
	int NHISTORY;
	//
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
#pragma region Windows Form Designer generated code
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		array<System::Windows::Forms::Button^>^ _a;
	public:
		Form1(void)
		{
			InitializeComponent();
		}
	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  _start;
	private: System::Windows::Forms::CheckBox^  _cpu_start;
	private: System::Windows::Forms::Label^  _win;
	private: System::Windows::Forms::Label^  _winx;
	private: System::Windows::Forms::Label^  _wino;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  _show_rate;
	private: System::Windows::Forms::Label^  _multiply;
	private: System::Windows::Forms::Label^  _text_width;
	private: System::Windows::Forms::NumericUpDown^  _width;
	private: System::Windows::Forms::Label^  _text_depth;
	private: System::Windows::Forms::NumericUpDown^  _depth;
	private: System::Windows::Forms::RadioButton^  _player_player;
	private: System::Windows::Forms::RadioButton^  _player_cpu;
	private: System::Windows::Forms::RadioButton^  _simple;
	private: System::Windows::Forms::RadioButton^  _complecated;
	private: System::Windows::Forms::GroupBox^  _group_cpu_level;
	private: System::Windows::Forms::GroupBox^  _group_game_settings;
	private: System::Windows::Forms::GroupBox^  _group_cpu_complicated_settings;
	private: System::Windows::Forms::Label^  _text_show_rate;
	private: System::Windows::Forms::GroupBox^  _group_cpu_simple_settings;
	private: System::Windows::Forms::TrackBar^  _trackbar_simple_level;
	private: System::Windows::Forms::Label^  _text_trackbar_simple_level;
	private: System::Windows::Forms::MenuStrip^  _menu;
	private: System::Windows::Forms::NumericUpDown^  _num_degree;
	private: System::Windows::Forms::Label^  _text_strategy;
	private: System::Windows::Forms::Button^  _abort;
	private: System::Windows::Forms::CheckBox^  _select_last;
	private: System::Windows::Forms::RadioButton^  _cpu_cpu;
	private: System::Windows::Forms::Button^  _clear;
	private: System::Windows::Forms::Label^  _cpu_cpu_text_strategy_x;
	private: System::Windows::Forms::NumericUpDown^  _cpu_cpu_strategy_x;
	private: System::Windows::Forms::Label^  _cpu_cpu_text_strategy_o;
	private: System::Windows::Forms::NumericUpDown^  _cpu_cpu_strategy_o;
	private: System::Windows::Forms::Label^  _cpu_cpu_text_level_o;
	private: System::Windows::Forms::Label^  _cpu_cpu_text_level_x;
	private: System::Windows::Forms::NumericUpDown^  _cpu_cpu_level_x;
	private: System::Windows::Forms::NumericUpDown^  _cpu_cpu_level_o;
	private: System::Windows::Forms::Label^  _cpu_cpu_text_time;
	private: System::Windows::Forms::NumericUpDown^  _cpu_cpu_time;
	private: System::Windows::Forms::Label^  _cpu_cpu_text_x;
	private: System::Windows::Forms::Label^  _cpu_cpu_text_o;
	private: System::Windows::Forms::GroupBox^  _group_cpu_cpu_settings;
	private: System::Windows::Forms::CheckBox^  _cpu_cpu_faster;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  _winnone;
	private: System::Windows::Forms::Button^  _generate;
	private: System::Windows::Forms::Label^  _text_generate;



	private: System::ComponentModel::IContainer^  components;
	private:
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->_start = (gcnew System::Windows::Forms::Button());
			this->_cpu_start = (gcnew System::Windows::Forms::CheckBox());
			this->_win = (gcnew System::Windows::Forms::Label());
			this->_winx = (gcnew System::Windows::Forms::Label());
			this->_wino = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->_show_rate = (gcnew System::Windows::Forms::Button());
			this->_multiply = (gcnew System::Windows::Forms::Label());
			this->_text_width = (gcnew System::Windows::Forms::Label());
			this->_width = (gcnew System::Windows::Forms::NumericUpDown());
			this->_text_depth = (gcnew System::Windows::Forms::Label());
			this->_depth = (gcnew System::Windows::Forms::NumericUpDown());
			this->_player_player = (gcnew System::Windows::Forms::RadioButton());
			this->_player_cpu = (gcnew System::Windows::Forms::RadioButton());
			this->_simple = (gcnew System::Windows::Forms::RadioButton());
			this->_complecated = (gcnew System::Windows::Forms::RadioButton());
			this->_group_cpu_level = (gcnew System::Windows::Forms::GroupBox());
			this->_group_game_settings = (gcnew System::Windows::Forms::GroupBox());
			this->_cpu_cpu = (gcnew System::Windows::Forms::RadioButton());
			this->_group_cpu_complicated_settings = (gcnew System::Windows::Forms::GroupBox());
			this->_group_cpu_simple_settings = (gcnew System::Windows::Forms::GroupBox());
			this->_text_trackbar_simple_level = (gcnew System::Windows::Forms::Label());
			this->_trackbar_simple_level = (gcnew System::Windows::Forms::TrackBar());
			this->_group_cpu_cpu_settings = (gcnew System::Windows::Forms::GroupBox());
			this->_cpu_cpu_faster = (gcnew System::Windows::Forms::CheckBox());
			this->_cpu_cpu_text_x = (gcnew System::Windows::Forms::Label());
			this->_cpu_cpu_text_o = (gcnew System::Windows::Forms::Label());
			this->_cpu_cpu_strategy_x = (gcnew System::Windows::Forms::NumericUpDown());
			this->_cpu_cpu_text_strategy_x = (gcnew System::Windows::Forms::Label());
			this->_cpu_cpu_text_time = (gcnew System::Windows::Forms::Label());
			this->_cpu_cpu_strategy_o = (gcnew System::Windows::Forms::NumericUpDown());
			this->_cpu_cpu_time = (gcnew System::Windows::Forms::NumericUpDown());
			this->_cpu_cpu_text_strategy_o = (gcnew System::Windows::Forms::Label());
			this->_cpu_cpu_level_o = (gcnew System::Windows::Forms::NumericUpDown());
			this->_cpu_cpu_level_x = (gcnew System::Windows::Forms::NumericUpDown());
			this->_cpu_cpu_text_level_o = (gcnew System::Windows::Forms::Label());
			this->_cpu_cpu_text_level_x = (gcnew System::Windows::Forms::Label());
			this->_text_show_rate = (gcnew System::Windows::Forms::Label());
			this->_menu = (gcnew System::Windows::Forms::MenuStrip());
			this->_num_degree = (gcnew System::Windows::Forms::NumericUpDown());
			this->_text_strategy = (gcnew System::Windows::Forms::Label());
			this->_abort = (gcnew System::Windows::Forms::Button());
			this->_select_last = (gcnew System::Windows::Forms::CheckBox());
			this->_clear = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->_winnone = (gcnew System::Windows::Forms::Label());
			this->_generate = (gcnew System::Windows::Forms::Button());
			this->_text_generate = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_width))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_depth))->BeginInit();
			this->_group_cpu_level->SuspendLayout();
			this->_group_game_settings->SuspendLayout();
			this->_group_cpu_complicated_settings->SuspendLayout();
			this->_group_cpu_simple_settings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_trackbar_simple_level))->BeginInit();
			this->_group_cpu_cpu_settings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_cpu_cpu_strategy_x))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_cpu_cpu_strategy_o))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_cpu_cpu_time))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_cpu_cpu_level_o))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_cpu_cpu_level_x))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_num_degree))->BeginInit();
			this->SuspendLayout();
			// 
			// _start
			// 
			this->_start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_start->Location = System::Drawing::Point(512, 27);
			this->_start->Name = L"_start";
			this->_start->Size = System::Drawing::Size(164, 40);
			this->_start->TabIndex = 230;
			this->_start->TabStop = false;
			this->_start->Text = L"Start";
			this->_start->UseVisualStyleBackColor = true;
			this->_start->Click += gcnew System::EventHandler(this, &Form1::_start_Click);
			// 
			// _cpu_start
			// 
			this->_cpu_start->Checked = true;
			this->_cpu_start->CheckState = System::Windows::Forms::CheckState::Checked;
			this->_cpu_start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_cpu_start->Location = System::Drawing::Point(512, 73);
			this->_cpu_start->Name = L"_cpu_start";
			this->_cpu_start->Size = System::Drawing::Size(164, 20);
			this->_cpu_start->TabIndex = 231;
			this->_cpu_start->TabStop = false;
			this->_cpu_start->Text = L"Cpu Is Starting";
			this->_cpu_start->UseVisualStyleBackColor = true;
			// 
			// _win
			// 
			this->_win->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->_win->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->_win->ForeColor = System::Drawing::Color::Green;
			this->_win->Location = System::Drawing::Point(512, 96);
			this->_win->Name = L"_win";
			this->_win->Size = System::Drawing::Size(164, 39);
			this->_win->TabIndex = 234;
			this->_win->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// _winx
			// 
			this->_winx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_winx->ForeColor = System::Drawing::Color::Red;
			this->_winx->Location = System::Drawing::Point(512, 138);
			this->_winx->Name = L"_winx";
			this->_winx->Size = System::Drawing::Size(50, 20);
			this->_winx->TabIndex = 0;
			this->_winx->Text = L"0";
			this->_winx->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// _wino
			// 
			this->_wino->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_wino->ForeColor = System::Drawing::Color::Blue;
			this->_wino->Location = System::Drawing::Point(595, 138);
			this->_wino->Name = L"_wino";
			this->_wino->Size = System::Drawing::Size(50, 20);
			this->_wino->TabIndex = 0;
			this->_wino->Text = L"0";
			this->_wino->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(568, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L":";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// _show_rate
			// 
			this->_show_rate->Location = System::Drawing::Point(512, 499);
			this->_show_rate->Name = L"_show_rate";
			this->_show_rate->Size = System::Drawing::Size(122, 25);
			this->_show_rate->TabIndex = 242;
			this->_show_rate->Text = L"Show Rate";
			this->_show_rate->UseVisualStyleBackColor = true;
			this->_show_rate->Click += gcnew System::EventHandler(this, &Form1::_show_rate_Click);
			// 
			// _multiply
			// 
			this->_multiply->Location = System::Drawing::Point(6, 16);
			this->_multiply->Name = L"_multiply";
			this->_multiply->Size = System::Drawing::Size(120, 13);
			this->_multiply->TabIndex = 249;
			this->_multiply->Text = L"x1";
			this->_multiply->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// _text_width
			// 
			this->_text_width->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_text_width->Location = System::Drawing::Point(62, 56);
			this->_text_width->Name = L"_text_width";
			this->_text_width->Size = System::Drawing::Size(64, 20);
			this->_text_width->TabIndex = 248;
			this->_text_width->Text = L"Width";
			this->_text_width->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// _width
			// 
			this->_width->Location = System::Drawing::Point(6, 56);
			this->_width->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {15, 0, 0, 0});
			this->_width->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->_width->Name = L"_width";
			this->_width->Size = System::Drawing::Size(50, 20);
			this->_width->TabIndex = 247;
			this->_width->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->_width->ValueChanged += gcnew System::EventHandler(this, &Form1::_width_ValueChanged);
			// 
			// _text_depth
			// 
			this->_text_depth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_text_depth->Location = System::Drawing::Point(62, 30);
			this->_text_depth->Name = L"_text_depth";
			this->_text_depth->Size = System::Drawing::Size(64, 20);
			this->_text_depth->TabIndex = 246;
			this->_text_depth->Text = L"Depth";
			this->_text_depth->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// _depth
			// 
			this->_depth->Location = System::Drawing::Point(6, 30);
			this->_depth->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {15, 0, 0, 0});
			this->_depth->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->_depth->Name = L"_depth";
			this->_depth->Size = System::Drawing::Size(50, 20);
			this->_depth->TabIndex = 245;
			this->_depth->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->_depth->ValueChanged += gcnew System::EventHandler(this, &Form1::_depth_ValueChanged);
			// 
			// _player_player
			// 
			this->_player_player->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_player_player->Location = System::Drawing::Point(6, 45);
			this->_player_player->Name = L"_player_player";
			this->_player_player->Size = System::Drawing::Size(121, 20);
			this->_player_player->TabIndex = 1;
			this->_player_player->Text = L"Player vs Player";
			this->_player_player->UseVisualStyleBackColor = true;
			// 
			// _player_cpu
			// 
			this->_player_cpu->Checked = true;
			this->_player_cpu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_player_cpu->Location = System::Drawing::Point(6, 19);
			this->_player_cpu->Name = L"_player_cpu";
			this->_player_cpu->Size = System::Drawing::Size(121, 20);
			this->_player_cpu->TabIndex = 0;
			this->_player_cpu->TabStop = true;
			this->_player_cpu->Text = L"Player vs CPU";
			this->_player_cpu->UseVisualStyleBackColor = true;
			this->_player_cpu->CheckedChanged += gcnew System::EventHandler(this, &Form1::_player_cpu_CheckedChanged);
			// 
			// _simple
			// 
			this->_simple->Checked = true;
			this->_simple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_simple->Location = System::Drawing::Point(6, 19);
			this->_simple->Name = L"_simple";
			this->_simple->Size = System::Drawing::Size(120, 20);
			this->_simple->TabIndex = 0;
			this->_simple->TabStop = true;
			this->_simple->Text = L"Simple";
			this->_simple->UseVisualStyleBackColor = true;
			this->_simple->CheckedChanged += gcnew System::EventHandler(this, &Form1::_simple_CheckedChanged);
			// 
			// _complecated
			// 
			this->_complecated->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_complecated->Location = System::Drawing::Point(6, 45);
			this->_complecated->Name = L"_complecated";
			this->_complecated->Size = System::Drawing::Size(120, 20);
			this->_complecated->TabIndex = 1;
			this->_complecated->Text = L"Complecated";
			this->_complecated->UseVisualStyleBackColor = true;
			this->_complecated->CheckedChanged += gcnew System::EventHandler(this, &Form1::_complecated_CheckedChanged);
			// 
			// _group_cpu_level
			// 
			this->_group_cpu_level->Controls->Add(this->_complecated);
			this->_group_cpu_level->Controls->Add(this->_simple);
			this->_group_cpu_level->Location = System::Drawing::Point(512, 264);
			this->_group_cpu_level->Name = L"_group_cpu_level";
			this->_group_cpu_level->Size = System::Drawing::Size(133, 71);
			this->_group_cpu_level->TabIndex = 254;
			this->_group_cpu_level->TabStop = false;
			this->_group_cpu_level->Text = L"CPU Level";
			this->_group_cpu_level->Visible = false;
			// 
			// _group_game_settings
			// 
			this->_group_game_settings->Controls->Add(this->_cpu_cpu);
			this->_group_game_settings->Controls->Add(this->_player_player);
			this->_group_game_settings->Controls->Add(this->_player_cpu);
			this->_group_game_settings->Location = System::Drawing::Point(512, 161);
			this->_group_game_settings->Name = L"_group_game_settings";
			this->_group_game_settings->Size = System::Drawing::Size(133, 97);
			this->_group_game_settings->TabIndex = 255;
			this->_group_game_settings->TabStop = false;
			this->_group_game_settings->Text = L"Game Settings";
			// 
			// _cpu_cpu
			// 
			this->_cpu_cpu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_cpu_cpu->Location = System::Drawing::Point(6, 71);
			this->_cpu_cpu->Name = L"_cpu_cpu";
			this->_cpu_cpu->Size = System::Drawing::Size(121, 20);
			this->_cpu_cpu->TabIndex = 2;
			this->_cpu_cpu->Text = L"CPU vs CPU";
			this->_cpu_cpu->UseVisualStyleBackColor = true;
			this->_cpu_cpu->CheckedChanged += gcnew System::EventHandler(this, &Form1::_cpu_cpu_CheckedChanged);
			// 
			// _group_cpu_complicated_settings
			// 
			this->_group_cpu_complicated_settings->Controls->Add(this->_width);
			this->_group_cpu_complicated_settings->Controls->Add(this->_text_depth);
			this->_group_cpu_complicated_settings->Controls->Add(this->_depth);
			this->_group_cpu_complicated_settings->Controls->Add(this->_multiply);
			this->_group_cpu_complicated_settings->Controls->Add(this->_text_width);
			this->_group_cpu_complicated_settings->Location = System::Drawing::Point(651, 192);
			this->_group_cpu_complicated_settings->Name = L"_group_cpu_complicated_settings";
			this->_group_cpu_complicated_settings->Size = System::Drawing::Size(132, 82);
			this->_group_cpu_complicated_settings->TabIndex = 256;
			this->_group_cpu_complicated_settings->TabStop = false;
			this->_group_cpu_complicated_settings->Text = L"CPU Settings";
			this->_group_cpu_complicated_settings->Visible = false;
			// 
			// _group_cpu_simple_settings
			// 
			this->_group_cpu_simple_settings->Controls->Add(this->_text_trackbar_simple_level);
			this->_group_cpu_simple_settings->Controls->Add(this->_trackbar_simple_level);
			this->_group_cpu_simple_settings->Location = System::Drawing::Point(651, 192);
			this->_group_cpu_simple_settings->Name = L"_group_cpu_simple_settings";
			this->_group_cpu_simple_settings->Size = System::Drawing::Size(132, 82);
			this->_group_cpu_simple_settings->TabIndex = 258;
			this->_group_cpu_simple_settings->TabStop = false;
			this->_group_cpu_simple_settings->Text = L"CPU Settings";
			// 
			// _text_trackbar_simple_level
			// 
			this->_text_trackbar_simple_level->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->_text_trackbar_simple_level->Location = System::Drawing::Point(95, 58);
			this->_text_trackbar_simple_level->Name = L"_text_trackbar_simple_level";
			this->_text_trackbar_simple_level->Size = System::Drawing::Size(31, 18);
			this->_text_trackbar_simple_level->TabIndex = 0;
			this->_text_trackbar_simple_level->Text = L"10";
			this->_text_trackbar_simple_level->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// _trackbar_simple_level
			// 
			this->_trackbar_simple_level->AutoSize = false;
			this->_trackbar_simple_level->LargeChange = 1;
			this->_trackbar_simple_level->Location = System::Drawing::Point(6, 19);
			this->_trackbar_simple_level->Name = L"_trackbar_simple_level";
			this->_trackbar_simple_level->Size = System::Drawing::Size(120, 36);
			this->_trackbar_simple_level->TabIndex = 0;
			this->_trackbar_simple_level->TabStop = false;
			this->_trackbar_simple_level->Value = 10;
			this->_trackbar_simple_level->Scroll += gcnew System::EventHandler(this, &Form1::_trackbar_simple_level_Scroll);
			// 
			// _group_cpu_cpu_settings
			// 
			this->_group_cpu_cpu_settings->Controls->Add(this->_cpu_cpu_faster);
			this->_group_cpu_cpu_settings->Controls->Add(this->_cpu_cpu_text_x);
			this->_group_cpu_cpu_settings->Controls->Add(this->_cpu_cpu_text_o);
			this->_group_cpu_cpu_settings->Controls->Add(this->_cpu_cpu_strategy_x);
			this->_group_cpu_cpu_settings->Controls->Add(this->_cpu_cpu_text_strategy_x);
			this->_group_cpu_cpu_settings->Controls->Add(this->_cpu_cpu_text_time);
			this->_group_cpu_cpu_settings->Controls->Add(this->_cpu_cpu_strategy_o);
			this->_group_cpu_cpu_settings->Controls->Add(this->_cpu_cpu_time);
			this->_group_cpu_cpu_settings->Controls->Add(this->_cpu_cpu_text_strategy_o);
			this->_group_cpu_cpu_settings->Controls->Add(this->_cpu_cpu_level_o);
			this->_group_cpu_cpu_settings->Controls->Add(this->_cpu_cpu_level_x);
			this->_group_cpu_cpu_settings->Controls->Add(this->_cpu_cpu_text_level_o);
			this->_group_cpu_cpu_settings->Controls->Add(this->_cpu_cpu_text_level_x);
			this->_group_cpu_cpu_settings->Location = System::Drawing::Point(512, 299);
			this->_group_cpu_cpu_settings->Name = L"_group_cpu_cpu_settings";
			this->_group_cpu_cpu_settings->Size = System::Drawing::Size(263, 137);
			this->_group_cpu_cpu_settings->TabIndex = 279;
			this->_group_cpu_cpu_settings->TabStop = false;
			this->_group_cpu_cpu_settings->Text = L"CPU Settings";
			this->_group_cpu_cpu_settings->Visible = false;
			// 
			// _cpu_cpu_faster
			// 
			this->_cpu_cpu_faster->Checked = true;
			this->_cpu_cpu_faster->CheckState = System::Windows::Forms::CheckState::Checked;
			this->_cpu_cpu_faster->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_cpu_cpu_faster->Location = System::Drawing::Point(166, 18);
			this->_cpu_cpu_faster->Name = L"_cpu_cpu_faster";
			this->_cpu_cpu_faster->Size = System::Drawing::Size(82, 20);
			this->_cpu_cpu_faster->TabIndex = 280;
			this->_cpu_cpu_faster->Text = L"Faster";
			this->_cpu_cpu_faster->UseVisualStyleBackColor = true;
			this->_cpu_cpu_faster->CheckedChanged += gcnew System::EventHandler(this, &Form1::_cpu_cpu_faster_CheckedChanged);
			// 
			// _cpu_cpu_text_x
			// 
			this->_cpu_cpu_text_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_cpu_cpu_text_x->ForeColor = System::Drawing::Color::Red;
			this->_cpu_cpu_text_x->Location = System::Drawing::Point(6, 42);
			this->_cpu_cpu_text_x->Name = L"_cpu_cpu_text_x";
			this->_cpu_cpu_text_x->Size = System::Drawing::Size(118, 35);
			this->_cpu_cpu_text_x->TabIndex = 277;
			this->_cpu_cpu_text_x->Text = L"X";
			this->_cpu_cpu_text_x->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// _cpu_cpu_text_o
			// 
			this->_cpu_cpu_text_o->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_cpu_cpu_text_o->ForeColor = System::Drawing::Color::Blue;
			this->_cpu_cpu_text_o->Location = System::Drawing::Point(130, 42);
			this->_cpu_cpu_text_o->Name = L"_cpu_cpu_text_o";
			this->_cpu_cpu_text_o->Size = System::Drawing::Size(118, 35);
			this->_cpu_cpu_text_o->TabIndex = 278;
			this->_cpu_cpu_text_o->Text = L"O";
			this->_cpu_cpu_text_o->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// _cpu_cpu_strategy_x
			// 
			this->_cpu_cpu_strategy_x->Location = System::Drawing::Point(84, 106);
			this->_cpu_cpu_strategy_x->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			this->_cpu_cpu_strategy_x->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->_cpu_cpu_strategy_x->Name = L"_cpu_cpu_strategy_x";
			this->_cpu_cpu_strategy_x->Size = System::Drawing::Size(40, 20);
			this->_cpu_cpu_strategy_x->TabIndex = 266;
			this->_cpu_cpu_strategy_x->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			// 
			// _cpu_cpu_text_strategy_x
			// 
			this->_cpu_cpu_text_strategy_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->_cpu_cpu_text_strategy_x->Location = System::Drawing::Point(3, 106);
			this->_cpu_cpu_text_strategy_x->Name = L"_cpu_cpu_text_strategy_x";
			this->_cpu_cpu_text_strategy_x->Size = System::Drawing::Size(75, 20);
			this->_cpu_cpu_text_strategy_x->TabIndex = 267;
			this->_cpu_cpu_text_strategy_x->Text = L"Strategy:";
			this->_cpu_cpu_text_strategy_x->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// _cpu_cpu_text_time
			// 
			this->_cpu_cpu_text_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_cpu_cpu_text_time->Location = System::Drawing::Point(3, 19);
			this->_cpu_cpu_text_time->Name = L"_cpu_cpu_text_time";
			this->_cpu_cpu_text_time->Size = System::Drawing::Size(75, 20);
			this->_cpu_cpu_text_time->TabIndex = 276;
			this->_cpu_cpu_text_time->Text = L"Time:";
			this->_cpu_cpu_text_time->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// _cpu_cpu_strategy_o
			// 
			this->_cpu_cpu_strategy_o->Location = System::Drawing::Point(208, 106);
			this->_cpu_cpu_strategy_o->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			this->_cpu_cpu_strategy_o->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->_cpu_cpu_strategy_o->Name = L"_cpu_cpu_strategy_o";
			this->_cpu_cpu_strategy_o->Size = System::Drawing::Size(40, 20);
			this->_cpu_cpu_strategy_o->TabIndex = 268;
			this->_cpu_cpu_strategy_o->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			// 
			// _cpu_cpu_time
			// 
			this->_cpu_cpu_time->DecimalPlaces = 2;
			this->_cpu_cpu_time->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 131072});
			this->_cpu_cpu_time->Location = System::Drawing::Point(84, 19);
			this->_cpu_cpu_time->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->_cpu_cpu_time->Name = L"_cpu_cpu_time";
			this->_cpu_cpu_time->Size = System::Drawing::Size(45, 20);
			this->_cpu_cpu_time->TabIndex = 275;
			this->_cpu_cpu_time->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 65536});
			// 
			// _cpu_cpu_text_strategy_o
			// 
			this->_cpu_cpu_text_strategy_o->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->_cpu_cpu_text_strategy_o->Location = System::Drawing::Point(127, 106);
			this->_cpu_cpu_text_strategy_o->Name = L"_cpu_cpu_text_strategy_o";
			this->_cpu_cpu_text_strategy_o->Size = System::Drawing::Size(75, 20);
			this->_cpu_cpu_text_strategy_o->TabIndex = 269;
			this->_cpu_cpu_text_strategy_o->Text = L"Strategy:";
			this->_cpu_cpu_text_strategy_o->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// _cpu_cpu_level_o
			// 
			this->_cpu_cpu_level_o->Location = System::Drawing::Point(208, 80);
			this->_cpu_cpu_level_o->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->_cpu_cpu_level_o->Name = L"_cpu_cpu_level_o";
			this->_cpu_cpu_level_o->Size = System::Drawing::Size(40, 20);
			this->_cpu_cpu_level_o->TabIndex = 274;
			this->_cpu_cpu_level_o->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->_cpu_cpu_level_o->ValueChanged += gcnew System::EventHandler(this, &Form1::_cpu_level_o_ValueChanged);
			// 
			// _cpu_cpu_level_x
			// 
			this->_cpu_cpu_level_x->Location = System::Drawing::Point(84, 80);
			this->_cpu_cpu_level_x->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->_cpu_cpu_level_x->Name = L"_cpu_cpu_level_x";
			this->_cpu_cpu_level_x->Size = System::Drawing::Size(40, 20);
			this->_cpu_cpu_level_x->TabIndex = 270;
			this->_cpu_cpu_level_x->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			// 
			// _cpu_cpu_text_level_o
			// 
			this->_cpu_cpu_text_level_o->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->_cpu_cpu_text_level_o->Location = System::Drawing::Point(127, 80);
			this->_cpu_cpu_text_level_o->Name = L"_cpu_cpu_text_level_o";
			this->_cpu_cpu_text_level_o->Size = System::Drawing::Size(75, 20);
			this->_cpu_cpu_text_level_o->TabIndex = 273;
			this->_cpu_cpu_text_level_o->Text = L"Level:";
			this->_cpu_cpu_text_level_o->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// _cpu_cpu_text_level_x
			// 
			this->_cpu_cpu_text_level_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->_cpu_cpu_text_level_x->Location = System::Drawing::Point(3, 80);
			this->_cpu_cpu_text_level_x->Name = L"_cpu_cpu_text_level_x";
			this->_cpu_cpu_text_level_x->Size = System::Drawing::Size(75, 20);
			this->_cpu_cpu_text_level_x->TabIndex = 271;
			this->_cpu_cpu_text_level_x->Text = L"Level:";
			this->_cpu_cpu_text_level_x->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// _text_show_rate
			// 
			this->_text_show_rate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_text_show_rate->ForeColor = System::Drawing::Color::Green;
			this->_text_show_rate->Location = System::Drawing::Point(640, 499);
			this->_text_show_rate->Name = L"_text_show_rate";
			this->_text_show_rate->Size = System::Drawing::Size(36, 25);
			this->_text_show_rate->TabIndex = 257;
			this->_text_show_rate->Text = L"OFF";
			this->_text_show_rate->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// _menu
			// 
			this->_menu->Location = System::Drawing::Point(0, 0);
			this->_menu->Name = L"_menu";
			this->_menu->Size = System::Drawing::Size(790, 24);
			this->_menu->TabIndex = 259;
			this->_menu->Text = L"Menu";
			// 
			// _num_degree
			// 
			this->_num_degree->Location = System::Drawing::Point(594, 473);
			this->_num_degree->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			this->_num_degree->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->_num_degree->Name = L"_num_degree";
			this->_num_degree->Size = System::Drawing::Size(40, 20);
			this->_num_degree->TabIndex = 260;
			this->_num_degree->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->_num_degree->ValueChanged += gcnew System::EventHandler(this, &Form1::_num_degree_ValueChanged);
			// 
			// _text_strategy
			// 
			this->_text_strategy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_text_strategy->Location = System::Drawing::Point(513, 473);
			this->_text_strategy->Name = L"_text_strategy";
			this->_text_strategy->Size = System::Drawing::Size(75, 20);
			this->_text_strategy->TabIndex = 261;
			this->_text_strategy->Text = L"Strategy:";
			this->_text_strategy->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// _abort
			// 
			this->_abort->Enabled = false;
			this->_abort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_abort->Location = System::Drawing::Point(682, 27);
			this->_abort->Name = L"_abort";
			this->_abort->Size = System::Drawing::Size(103, 40);
			this->_abort->TabIndex = 262;
			this->_abort->TabStop = false;
			this->_abort->Text = L"Abort";
			this->_abort->UseVisualStyleBackColor = true;
			this->_abort->Click += gcnew System::EventHandler(this, &Form1::_abort_Click);
			// 
			// _select_last
			// 
			this->_select_last->Checked = true;
			this->_select_last->CheckState = System::Windows::Forms::CheckState::Checked;
			this->_select_last->Location = System::Drawing::Point(651, 166);
			this->_select_last->Name = L"_select_last";
			this->_select_last->Size = System::Drawing::Size(134, 20);
			this->_select_last->TabIndex = 263;
			this->_select_last->Text = L"Select Pressed Square";
			this->_select_last->UseVisualStyleBackColor = true;
			// 
			// _clear
			// 
			this->_clear->Location = System::Drawing::Point(734, 140);
			this->_clear->Name = L"_clear";
			this->_clear->Size = System::Drawing::Size(51, 20);
			this->_clear->TabIndex = 264;
			this->_clear->Text = L"Clear";
			this->_clear->UseVisualStyleBackColor = true;
			this->_clear->Click += gcnew System::EventHandler(this, &Form1::_clear_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(651, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 20);
			this->label1->TabIndex = 280;
			this->label1->Text = L":";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// _winnone
			// 
			this->_winnone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->_winnone->ForeColor = System::Drawing::Color::Black;
			this->_winnone->Location = System::Drawing::Point(678, 138);
			this->_winnone->Name = L"_winnone";
			this->_winnone->Size = System::Drawing::Size(50, 20);
			this->_winnone->TabIndex = 281;
			this->_winnone->Text = L"0";
			this->_winnone->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// _generate
			// 
			this->_generate->Location = System::Drawing::Point(676, 499);
			this->_generate->Name = L"_generate";
			this->_generate->Size = System::Drawing::Size(109, 25);
			this->_generate->TabIndex = 282;
			this->_generate->Text = L"Generate...";
			this->_generate->UseVisualStyleBackColor = true;
			this->_generate->Visible = false;
			this->_generate->Click += gcnew System::EventHandler(this, &Form1::_generate_Click);
			// 
			// _text_generate
			// 
			this->_text_generate->Location = System::Drawing::Point(546, 445);
			this->_text_generate->Name = L"_text_generate";
			this->_text_generate->Size = System::Drawing::Size(237, 25);
			this->_text_generate->TabIndex = 283;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(790, 529);
			this->Controls->Add(this->_group_cpu_level);
			this->Controls->Add(this->_text_generate);
			this->Controls->Add(this->_generate);
			this->Controls->Add(this->_group_cpu_cpu_settings);
			this->Controls->Add(this->_winnone);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->_clear);
			this->Controls->Add(this->_group_cpu_complicated_settings);
			this->Controls->Add(this->_select_last);
			this->Controls->Add(this->_group_cpu_simple_settings);
			this->Controls->Add(this->_abort);
			this->Controls->Add(this->_text_strategy);
			this->Controls->Add(this->_num_degree);
			this->Controls->Add(this->_text_show_rate);
			this->Controls->Add(this->_show_rate);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->_wino);
			this->Controls->Add(this->_winx);
			this->Controls->Add(this->_win);
			this->Controls->Add(this->_cpu_start);
			this->Controls->Add(this->_start);
			this->Controls->Add(this->_group_game_settings);
			this->Controls->Add(this->_menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->_menu;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Visual XO";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_width))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_depth))->EndInit();
			this->_group_cpu_level->ResumeLayout(false);
			this->_group_game_settings->ResumeLayout(false);
			this->_group_cpu_complicated_settings->ResumeLayout(false);
			this->_group_cpu_simple_settings->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_trackbar_simple_level))->EndInit();
			this->_group_cpu_cpu_settings->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_cpu_cpu_strategy_x))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_cpu_cpu_strategy_o))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_cpu_cpu_time))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_cpu_cpu_level_o))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_cpu_cpu_level_x))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->_num_degree))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Button^ ReturnA(int n)
		{
			return ((Button^)(_a->GetValue(n)));
		}
		void CreateA()
		{
			int size=32;
			int border=1;
			int i1;
			Button^ b;
			_a=gcnew array<System::Windows::Forms::Button^>(225);
			for(i1=0;i1<SIZE*SIZE;i1++)
			{
				this->Controls->RemoveByKey("_a"+i1.ToString());
			}
			for(i1=0;i1<SIZE*SIZE;i1++)
			{
				b=gcnew Button();
				b->BackColor = System::Drawing::Color::White;
				b->FlatAppearance->BorderColor = System::Drawing::Color::Black;
				b->FlatAppearance->BorderSize = 0;
				b->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
				b->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(224,224,224);
				b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif",15.75F,System::Drawing::FontStyle::Bold,System::Drawing::GraphicsUnit::Point,204));
				b->ForeColor = System::Drawing::Color::White;
				b->Location = System::Drawing::Point(12+((size+border)*(i1%SIZE)), 27+(size+border)*((int)(i1/SIZE)));
				b->Name = "_a"+i1.ToString();
				b->Size = System::Drawing::Size(size, size);
				b->TabIndex = 0;
				b->TabStop = false;
				b->Text = " ";
				b->UseVisualStyleBackColor = false;
				b->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::_aX_Click);
				_a->SetValue(b,i1);
			}
			this->Controls->AddRange(_a);
		}
		bool SetXO(int x,int y,unsigned char value)
		{
			if(FIELD[x][y]==value)
			{
				return false;
			}
			FIELD[x][y]=value;
			return true;
		}
		bool SetXO(unsigned char n,unsigned char value)
		{
			int x,y;
			bool b1;
			x=(int)(n/SIZE);
			y=n%SIZE;
			b1=SetXO(x,y,value);
			return b1;
		}
		void ClearField()
		{
			int x,y;
			for(x=0;x<SIZE;x++)
			{
				for(y=0;y<SIZE;y++)
				{
					FIELD[x][y]=0;
				}
			}
		}
		void ClearRate()
		{
			int x,y;
			for(x=0;x<SIZE;x++)
			{
				for(y=0;y<SIZE;y++)
				{
					RATE[x][y]=0;
				}
			}
		}
		void ClearHistory()
		{
			int n;
			NHISTORY=0;
			for(n=0;n<SIZE*SIZE;n++)
			{
				HISTORY[n]=0;
			}
		}
		bool SetDegree(int n)
		{
			switch(n)
			{
			case 1:
				DEGREE[0]=1;
				DEGREE[1]=10;
				DEGREE[2]=40;
				DEGREE[3]=120;
				DEGREE[4]=240;
				DEGREE[5]=240;
				return true;
			case 2:
				DEGREE[0]=1;
				DEGREE[1]=6;
				DEGREE[2]=30;
				DEGREE[3]=120;
				DEGREE[4]=240;
				DEGREE[5]=240;
				return true;
			case 3:
				DEGREE[0]=1;
				DEGREE[1]=16;
				DEGREE[2]=256;
				DEGREE[3]=4096;
				DEGREE[4]=32768;
				DEGREE[5]=32768;
				return true;
			}
			return false;
		}
		bool IsWin(unsigned char C)
		{
			int x,y;
			for(x=0;x<SIZE;x++)
			{
				for(y=0;y<SIZE;y++)
				{
					if(FIELD[x][y]!=C)
					{
						continue;
					}
					if(x<SIZE-4 && y>=4)
					{
						if(FIELD[x+1][y-1]==C)
						{
							if(FIELD[x+2][y-2]==C)
							{
								if(FIELD[x+3][y-3]==C)
								{
									if(FIELD[x+4][y-4]==C)
									{
										return true;
									}
								}
							}
						}
					}
					if(x<SIZE-4)
					{
						if(FIELD[x+1][y]==C)
						{
							if(FIELD[x+2][y]==C)
							{
								if(FIELD[x+3][y]==C)
								{
									if(FIELD[x+4][y]==C)
									{
										return true;
									}
								}
							}
						}
					}
					if(x<SIZE-4 && y<SIZE-4)
					{
						if(FIELD[x+1][y+1]==C)
						{
							if(FIELD[x+2][y+2]==C)
							{
								if(FIELD[x+3][y+3]==C)
								{
									if(FIELD[x+4][y+4]==C)
									{
										return true;
									}
								}
							}
						}
					}
					if(y<SIZE-4)
					{
						if(FIELD[x][y+1]==C)
						{
							if(FIELD[x][y+2]==C)
							{
								if(FIELD[x][y+3]==C)
								{
									if(FIELD[x][y+4]==C)
									{
										return true;
									}
								}
							}
						}
					}
				}
			}
			return false;
		}
		bool IsWin(unsigned char C,int X,int Y)
		{
			if(FIELD[X][Y]!=C)
			{
				return false;
			}
			if(X>=4 && Y>=4)
			{
				if(FIELD[X-1][Y-1]==C)
				{
					if(FIELD[X-2][Y-2]==C)
					{
						if(FIELD[X-3][Y-3]==C)
						{
							if(FIELD[X-4][Y-4]==C)
							{
								return true;
							}
						}
					}
				}
			}
			if(X>=4 && Y<SIZE-4)
			{
				if(FIELD[X-1][Y+1]==C)
				{
					if(FIELD[X-2][Y+2]==C)
					{
						if(FIELD[X-3][Y+3]==C)
						{
							if(FIELD[X-4][Y+4]==C)
							{
								return true;
							}
						}
					}
				}
			}
			if(X<SIZE-4 && Y>=4)
			{
				if(FIELD[X+1][Y-1]==C)
				{
					if(FIELD[X+2][Y-2]==C)
					{
						if(FIELD[X+3][Y-3]==C)
						{
							if(FIELD[X+4][Y-4]==C)
							{
								return true;
							}
						}
					}
				}
			}
			if(X<SIZE-4 && Y<SIZE-4)
			{
				if(FIELD[X+1][Y+1]==C)
				{
					if(FIELD[X+2][Y+2]==C)
					{
						if(FIELD[X+3][Y+3]==C)
						{
							if(FIELD[X+4][Y+4]==C)
							{
								return true;
							}
						}
					}
				}
			}
			if(X>=4)
			{
				if(FIELD[X-1][Y]==C)
				{
					if(FIELD[X-2][Y]==C)
					{
						if(FIELD[X-3][Y]==C)
						{
							if(FIELD[X-4][Y]==C)
							{
								return true;
							}
						}
					}
				}
			}
			if(Y>=4)
			{
				if(FIELD[X][Y-1]==C)
				{
					if(FIELD[X][Y-2]==C)
					{
						if(FIELD[X][Y-3]==C)
						{
							if(FIELD[X][Y-4]==C)
							{
								return true;
							}
						}
					}
				}
			}
			if(X<SIZE-4)
			{
				if(FIELD[X+1][Y]==C)
				{
					if(FIELD[X+2][Y]==C)
					{
						if(FIELD[X+3][Y]==C)
						{
							if(FIELD[X+4][Y]==C)
							{
								return true;
							}
						}
					}
				}
			}
			if(Y<SIZE-4)
			{
				if(FIELD[X][Y+1]==C)
				{
					if(FIELD[X][Y+2]==C)
					{
						if(FIELD[X][Y+3]==C)
						{
							if(FIELD[X][Y+4]==C)
							{
								return true;
							}
						}
					}
				}
			}
			return false;
		}
		bool IsDraw()
		{
			int i1,i2;
			for(i1=0;i1<SIZE;i1++)
			{
				for(i2=0;i2<SIZE;i2++)
				{
					if(FIELD[i1][i2]==0)
					{
						return false;
					}
				}
			}
			return true;
		}
		void GlobalStatus()
		{
			if(IsWin(1))
			{
				ISWIN=1;
				return;
			}
			if(IsWin(2))
			{
				ISWIN=2;
				return;
			}
			if(IsDraw())
			{
				ISWIN=3;
				return;
			}
			ISWIN=0;
			return;
		}
		void PrintFieldOne(int n)
		{
			int x,y;
			x=(int)(n/SIZE);
			y=n%SIZE;
			if(FIELD[x][y]==1)
			{
				ReturnA(n)->ForeColor=Color::Red;
				ReturnA(n)->Text="X";
			}
			if(FIELD[x][y]==2)
			{
				ReturnA(n)->ForeColor=Color::Blue;
				ReturnA(n)->Text="O";
			}
			if(FIELD[x][y]==0)
			{
				ReturnA(n)->Text=" ";
			}
		}
		void PrintFieldAll()
		{
			int i1;
			for(i1=0;i1<SIZE*SIZE;i1++)
			{
				PrintFieldOne(i1);
			}
		}
		//расчет одного (можно улучшить)
		bool RateOne(unsigned char C,int K,int X,int Y,int DX,int DY)
		{
			unsigned char AC;
			int count;
			int i1;
			if(X<0 || X>=SIZE)
			{
				return false;
			}
			if(Y<0 || Y>=SIZE)
			{
				return false;
			}
			if(X+4*DX<0 || X+4*DX>=SIZE)
			{
				return false;
			}
			if(Y+4*DY<0 || Y+4*DY>=SIZE)
			{
				return false;
			}
			count=0;
			AC=3-C;
			for(i1=0;i1<5;i1++)
			{
				if(FIELD[X+i1*DX][Y+i1*DY]==C)
				{
					count++;
				}
				if(FIELD[X+i1*DX][Y+i1*DY]==AC)
				{
					return true;
				}
			}
			for(i1=0;i1<5;i1++)
			{
				if(FIELD[X+i1*DX][Y+i1*DY]==0)
				{
					RATE[X+i1*DX][Y+i1*DY]+=K*DEGREE[count];
				}
			}
			return true;
		}
		void RateFour(unsigned char C,int K,int X,int Y)
		{
			RateOne(C,K,X,Y,1,-1);
			RateOne(C,K,X,Y,1,0);
			RateOne(C,K,X,Y,1,1);
			RateOne(C,K,X,Y,0,1);
		}
		void RateFour(int K,int X,int Y)
		{
			RateOne(1,K,X,Y,1,-1);
			RateOne(1,K,X,Y,1,0);
			RateOne(1,K,X,Y,1,1);
			RateOne(1,K,X,Y,0,1);
			RateOne(2,K,X,Y,1,-1);
			RateOne(2,K,X,Y,1,0);
			RateOne(2,K,X,Y,1,1);
			RateOne(2,K,X,Y,0,1);
		}
		void RateAll()
		{
			int i1,i2;
			for(i1=0;i1<SIZE;i1++)
			{
				for(i2=0;i2<SIZE;i2++)
				{
					RateFour(1,i1,i2);
				}
			}
		}
		void SetEmpty()
		{
			ClearField();
			ClearRate();
			RateAll();
			PrintFieldAll();
			COURSE=0;
			ISWIN=0;
		}
		void SolveSimple(unsigned char C,int Level,bool print)
		{
			int i1,i2,i3;
			int maxn,maxx,maxy;
			unsigned char AC;
			int n;
			System::Random^ random=gcnew System::Random();
			AC=3-C;
			for(i1=0;i1<SIZE;i1++)
			{
				for(i2=0;i2<SIZE;i2++)
				{
					if(FIELD[i1][i2]==0)
					{
						SetXO(i1,i2,C);
						if(IsWin(C))
						{
							if(print)
							{
								PrintFieldAll();
								if(_select_last->Checked)
								{
									ReturnA(SIZE*i1+i2)->ForeColor=Color::Black;
								}
							}
							return;
						}
						SetXO(i1,i2,0);
					}
				}
			}
			for(i1=0;i1<SIZE;i1++)
			{
				for(i2=0;i2<SIZE;i2++)
				{
					if(FIELD[i1][i2]==0)
					{
						SetXO(i1,i2,AC);
						if(IsWin(AC))
						{
							SetXO(i1,i2,C);
							if(print)
							{
								PrintFieldAll();
								if(_select_last->Checked)
								{
									ReturnA(SIZE*i1+i2)->ForeColor=Color::Black;
								}
							}
							return;
						}
						SetXO(i1,i2,0);
					}
				}
			}
			ClearRate();
			RateAll();
			maxn=-1;
			maxx=0;
			maxy=0;
			i3=0;
			for(i1=0;i1<SIZE;i1++)
			{
				for(i2=0;i2<SIZE;i2++)
				{
					if(RATE[i1][i2]>maxn && FIELD[i1][i2]==0)
					{
						maxn=RATE[i1][i2];
						maxx=i1;
						maxy=i2;
					}
				}
			}
			if(maxn==0)
			{
				for(i1=0;i1<SIZE;i1++)
				{
					for(i2=0;i2<SIZE;i2++)
					{
						if(FIELD[i1][i2]==0)
						{
							i3++;
						}
					}
				}
				n=(int)(random->NextDouble()*i3);
				i3=0;
				for(i1=0;i1<SIZE;i1++)
				{
					for(i2=0;i2<SIZE;i2++)
					{
						if(FIELD[i1][i2]==0)
						{
							if(i3>=n)
							{
								SetXO(i1,i2,C);
								if(print)
								{
									PrintFieldAll();
									if(_select_last->Checked)
									{
										ReturnA(SIZE*i1+i2)->ForeColor=Color::Black;
									}
								}
								return;
							}
							i3++;
						}
					}
				}
				return;
			}
			for(i1=0;i1<SIZE;i1++)
			{
				for(i2=0;i2<SIZE;i2++)
				{
					if((int)(10*RATE[i1][i2]/maxn)>=Level && FIELD[i1][i2]==0)
					{
						i3++;
					}
				}
			}
			n=(int)(random->NextDouble()*i3);
			i3=0;
			for(i1=0;i1<SIZE;i1++)
			{
				for(i2=0;i2<SIZE;i2++)
				{
					if((int)(10*RATE[i1][i2]/maxn)>=Level && FIELD[i1][i2]==0)
					{
						if(i3>=n)
						{
							SetXO(i1,i2,C);
							if(print)
							{
								PrintFieldAll();
								if(_select_last->Checked)
								{
									ReturnA(SIZE*i1+i2)->ForeColor=Color::Black;
								}
							}
							return;
						}
						i3++;
					}
				}
			}
		}
		void PlayerCpu(int n)
		{
			if(ISWIN!=0)
			{
				return;
			}
			if(FIELD[(int)(n/SIZE)][n%SIZE]!=0)
			{
				return;
			}
			if(_text_show_rate->Text=="ON")
			{
				return;
			}
			SetXO((int)(n/SIZE),n%SIZE,1);
			ClearRate();
			RateAll();
			PrintFieldAll();
			GlobalStatus();
			if(ISWIN==1)
			{
				_win->Text="Win X";
				WINX++;
				_winx->Text=WINX.ToString();
				_start->Enabled=true;
				_abort->Enabled=false;
				return;
			}
			if(ISWIN==2)
			{
				_win->Text="Win O";
				WINO++;
				_wino->Text=WINO.ToString();
				_start->Enabled=true;
				_abort->Enabled=false;
				return;
			}
			if(ISWIN==3)
			{
				_win->Text="Draw";
				WINNONE++;
				_winnone->Text=WINNONE.ToString();
				_start->Enabled=true;
				_abort->Enabled=false;
				return;
			}
			if(ISWIN==0)
			{
				_win->Text="";
			}
			if(ISWIN!=0)
			{
				return;
			}
			SolveSimple(2,(int)(_trackbar_simple_level->Value),true);
			GlobalStatus();
			if(ISWIN==1)
			{
				_win->Text="Win X";
				WINX++;
				_winx->Text=WINX.ToString();
				_start->Enabled=true;
				_abort->Enabled=false;
				return;
			}
			if(ISWIN==2)
			{
				_win->Text="Win O";
				WINO++;
				_wino->Text=WINO.ToString();
				_start->Enabled=true;
				_abort->Enabled=false;
				return;
			}
			if(ISWIN==3)
			{
				_win->Text="Draw";
				WINNONE++;
				_winnone->Text=WINNONE.ToString();
				_start->Enabled=true;
				_abort->Enabled=false;
				return;
			}
			if(ISWIN==0)
			{
				_win->Text="";
			}
		}
		void CpuCpu(int time)
		{
			int i1;
			while(1)
			{
				if(ISWIN!=0)
				{
					return;
				}
				if(_text_show_rate->Text=="ON")
				{
					return;
				}
				for(i1=0;i1<time;i1+=50)
				{
					System::Threading::Thread::Sleep(50);
					Application::DoEvents();
				}
				if(ISWIN!=0)
				{
					return;
				}
				SetDegree((int)(_cpu_cpu_strategy_x->Value));
				SolveSimple(1,(int)(_cpu_cpu_level_x->Value),true);
				Application::DoEvents();
				if(ISWIN!=0)
				{
					return;
				}
				GlobalStatus();
				if(ISWIN==1)
				{
					_win->Text="Win X";
					WINX++;
					_winx->Text=WINX.ToString();
					_start->Enabled=true;
					_abort->Enabled=false;
					return;
				}
				if(ISWIN==2)
				{
					_win->Text="Win O";
					WINO++;
					_wino->Text=WINO.ToString();
					_start->Enabled=true;
					_abort->Enabled=false;
					return;
				}
				if(ISWIN==3)
				{
					_win->Text="Draw";
					WINNONE++;
					_winnone->Text=WINNONE.ToString();
					_start->Enabled=true;
					_abort->Enabled=false;
					return;
				}
				if(ISWIN==0)
				{
					_win->Text="";
				}
				Application::DoEvents();
				if(ISWIN!=0)
				{
					return;
				}
				if(_text_show_rate->Text=="ON")
				{
					return;
				}
				for(i1=0;i1<time;i1+=50)
				{
					System::Threading::Thread::Sleep(50);
					Application::DoEvents();
				}
				if(ISWIN!=0)
				{
					return;
				}
				SetDegree((int)(_cpu_cpu_strategy_o->Value));
				SolveSimple(2,(int)(_cpu_cpu_level_o->Value),true);
				Application::DoEvents();
				if(ISWIN!=0)
				{
					return;
				}
				GlobalStatus();
				if(ISWIN==1)
				{
					_win->Text="Win X";
					WINX++;
					_winx->Text=WINX.ToString();
					_start->Enabled=true;
					_abort->Enabled=false;
					return;
				}
				if(ISWIN==2)
				{
					_win->Text="Win O";
					WINO++;
					_wino->Text=WINO.ToString();
					_start->Enabled=true;
					_abort->Enabled=false;
					return;
				}
				if(ISWIN==3)
				{
					_win->Text="Draw";
					WINNONE++;
					_winnone->Text=WINNONE.ToString();
					_start->Enabled=true;
					_abort->Enabled=false;
					return;
				}
				if(ISWIN==0)
				{
					_win->Text="";
				}
				Application::DoEvents();
			}
		}
		void CpuCpuFast()
		{
			while(1)
			{
				if(ISWIN!=0)
				{
					return;
				}
				if(_text_show_rate->Text=="ON")
				{
					return;
				}
				SetDegree((int)(_cpu_cpu_strategy_x->Value));
				SolveSimple(1,(int)(_cpu_cpu_level_x->Value),false);
				if(ISWIN!=0)
				{
					return;
				}
				GlobalStatus();
				if(ISWIN==1)
				{
					WINX++;
					_winx->Text=WINX.ToString();
					return;
				}
				if(ISWIN==2)
				{
					WINO++;
					_wino->Text=WINO.ToString();
					return;
				}
				if(ISWIN==3)
				{
					WINNONE++;
					_winnone->Text=WINNONE.ToString();
					return;
				}
				if(ISWIN==0)
				{
				}
				if(ISWIN!=0)
				{
					return;
				}
				if(_text_show_rate->Text=="ON")
				{
					return;
				}
				if(ISWIN!=0)
				{
					return;
				}
				SetDegree((int)(_cpu_cpu_strategy_o->Value));
				SolveSimple(2,(int)(_cpu_cpu_level_o->Value),false);
				if(ISWIN!=0)
				{
					return;
				}
				GlobalStatus();
				if(ISWIN==1)
				{
					WINX++;
					_winx->Text=WINX.ToString();
					return;
				}
				if(ISWIN==2)
				{
					WINO++;
					_wino->Text=WINO.ToString();
					return;
				}
				if(ISWIN==3)
				{
					WINNONE++;
					_winnone->Text=WINNONE.ToString();
					return;
				}
				if(ISWIN==0)
				{
				}
			}
		}
		void PlayerPlayer(int n)
		{
			if(ISWIN!=0)
			{
				return;
			}
			if(FIELD[(int)(n/SIZE)][n%SIZE]!=0)
			{
				return;
			}
			if(_text_show_rate->Text=="ON")
			{
				return;
			}
			SetXO((int)(n/SIZE),n%SIZE,COURSE);
			PrintFieldAll();
			if(_select_last->Checked)
			{
				ReturnA(n)->ForeColor=Color::Black;
			}
			GlobalStatus();
			if(ISWIN==1)
			{
				_win->Text="Win X";
				WINX++;
				_winx->Text=WINX.ToString();
				_start->Enabled=true;
				_abort->Enabled=false;
				return;
			}
			if(ISWIN==2)
			{
				_win->Text="Win O";
				WINO++;
				_wino->Text=WINO.ToString();
				_start->Enabled=true;
				_abort->Enabled=false;
				return;
			}
			if(ISWIN==3)
			{
				_win->Text="Draw";
				WINNONE++;
				_winnone->Text=WINNONE.ToString();
				_start->Enabled=true;
				_abort->Enabled=false;
				return;
			}
			COURSE=3-COURSE;
			if(ISWIN==0)
			{
				if(COURSE==1)
				{
					_win->Text="X";
				}
				if(COURSE==2)
				{
					_win->Text="O";
				}
			}
		}
		void ClickPicture(int n)
		{
			if(_player_cpu->Checked)
			{
				PlayerCpu(n);
			}
			if(_player_player->Checked)
			{
				PlayerPlayer(n);
			}
		}
		void ShowHideInterface()
		{
			//_group_cpu_level->Visible=_player_cpu->Checked;
			_group_cpu_simple_settings->Visible=((_player_cpu->Checked&&_simple->Checked));
			_group_cpu_complicated_settings->Visible=(_player_cpu->Checked&&_complecated->Checked);
			_cpu_start->Visible=_player_cpu->Checked;
			_group_cpu_cpu_settings->Visible=_cpu_cpu->Checked;
			_cpu_cpu_time->Enabled=!_cpu_cpu_faster->Checked;
		}
		void Abort()
		{
			_abort->Enabled=false;
			if(_player_cpu->Checked)
			{
				WINO++;
				_wino->Text=WINO.ToString();
				_win->Text="Win O";
				_start->Enabled=true;
				ISWIN=2;
			}
			if(_cpu_cpu->Checked)
			{
				_win->Text="Draw";
				WINNONE++;
				_winnone->Text=WINNONE.ToString();
				_start->Enabled=true;
				ISWIN=3;
			}
			if(_player_player->Checked)
			{
				if(COURSE==1)
				{
					WINO++;
					_wino->Text=WINO.ToString();
					_win->Text="Win O";
					_start->Enabled=true;
					ISWIN=2;
				}
				if(COURSE==2)
				{
					WINX++;
					_winx->Text=WINX.ToString();
					_win->Text="Win X";
					_start->Enabled=true;
					ISWIN=1;
				}
			}
		}
		void Start()
		{
			if(_text_show_rate->Text=="OFF")
			{
				SetEmpty();
				_win->Text="";
				_start->Enabled=false;
				_abort->Enabled=true;
				if(_player_cpu->Checked)
				{
					if(_cpu_start->Checked)
					{
						COURSE=2;
						SolveSimple(2,(int)(_trackbar_simple_level->Value),true);
					}
					if(!_cpu_start->Checked)
					{
						COURSE=1;
					}
				}
				if(_cpu_cpu->Checked)
				{
					COURSE=1;
					if(!_cpu_cpu_faster->Checked)
					{
						CpuCpu((int)(1000*_cpu_cpu_time->Value));
					}
					if(_cpu_cpu_faster->Checked)
					{
						while(1)
						{
							SetEmpty();
							CpuCpuFast();
							Application::DoEvents();
							if(_abort->Enabled==false)
							{
								break;
							}
						}
					}
				}
				if(_player_player->Checked)
				{
					COURSE=1;
					if(COURSE==1)
					{
						_win->Text="X";
					}
					if(COURSE==2)
					{
						_win->Text="O";
					}
				}
			}
		}
	private: System::Void _start_Click(System::Object^  sender, System::EventArgs^  e) {
					Start();
				}
	private: System::Void _show_rate_Click(System::Object^  sender, System::EventArgs^  e) {
					int i1,i2,maxn;
					if(_text_show_rate->Text=="OFF")
					{
						_text_show_rate->Text="ON";
						_show_rate->Enabled=false;
						ClearRate();
						RateAll();
						maxn=1;
						for(i1=0;i1<SIZE;i1++)
						{
							for(i2=0;i2<SIZE;i2++)
							{
								if(RATE[i1][i2]>maxn)
								{
									maxn=RATE[i1][i2];
								}
							}
						}
						for(i1=0;i1<SIZE*SIZE;i1++)
						{
							i2=(int)(255*((double)(RATE[(int)(i1/SIZE)][i1%SIZE])/(double)(maxn)));
							ReturnA(i1)->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif",6.75F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,204));
							ReturnA(i1)->BackColor=Color::FromArgb(0,i2,0);
							ReturnA(i1)->Text=((int)(100*i2/255)).ToString();
							ReturnA(i1)->ForeColor=Color::Black;
							Application::DoEvents();
						}
						_show_rate->Enabled=true;
						return;
					}
					if(_text_show_rate->Text=="ON")
					{
						_text_show_rate->Text="OFF";
						_show_rate->Enabled=false;
						for(i1=0;i1<SIZE*SIZE;i1++)
						{
							ReturnA(i1)->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif",15.75F,System::Drawing::FontStyle::Bold,System::Drawing::GraphicsUnit::Point,204));
							ReturnA(i1)->BackColor=Color::White;
							PrintFieldOne(i1);
							Application::DoEvents();
						}
						_show_rate->Enabled=true;
						return;
					}
				}
	private: System::Void _player_cpu_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					ShowHideInterface();
				}
	private: System::Void _complecated_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					ShowHideInterface();
				}
	private: System::Void _depth_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
					float f1;
					int i1,i2;
					i1=(int)(_width->Value);
					f1=(float)(Math::Pow((double)(Math::Pow((double)_width->Value,(double)(_depth->Value/5))/5),5));
					if(f1>=1)
				 {
					 _multiply->Text="x"+((int)(f1)).ToString();
				 }
					if(f1<1)
				 {
					 _multiply->Text="/"+((int)(1/f1)).ToString();
				 }
					i2=(int)(Math::Pow(2,31/(double)(_depth->Value)));
					if(i1>i2)
				 {
					 _width->Value=Math::Min(i2,SIZE);
				 }
				}
	private: System::Void _width_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
					float f1;
					int i1,i2;
					i1=(int)(_depth->Value);
					f1=(float)(Math::Pow((double)(Math::Pow((double)_width->Value,(double)(_depth->Value/5))/5),5));
					if(f1>=1)
				 {
					 _multiply->Text="x"+((int)(f1)).ToString();
				 }
					if(f1<1)
				 {
					 _multiply->Text="/"+((int)(1/f1)).ToString();
				 }
					i2=(int)(31/Math::Log((double)(_width->Value),2));
					if(i1>i2)
				 {
					 _depth->Value=Math::Min(i2,SIZE);
				 }
				}
	private: System::Void _simple_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					ShowHideInterface();
				}
	private: System::Void _trackbar_simple_level_Scroll(System::Object^  sender, System::EventArgs^  e) {
					_text_trackbar_simple_level->Text=_trackbar_simple_level->Value.ToString();
				}
	private: System::Void _num_degree_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
					SetDegree((int)(_num_degree->Value));
				}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
					CreateA();
					SetEmpty();
					SetDegree((int)(_num_degree->Value));
					_num_degree_ValueChanged(sender,e);
					ISWIN=3;
				}
	private: System::Void _abort_Click(System::Object^  sender, System::EventArgs^  e) {
					Abort();
				}
	private: System::Void _cpu_cpu_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					ShowHideInterface();
				}
	private: System::Void _clear_Click(System::Object^  sender, System::EventArgs^  e) {
					WINX=0;
					WINO=0;
					WINNONE=0;
					_winx->Text=WINX.ToString();
					_wino->Text=WINO.ToString();
					_winnone->Text=WINNONE.ToString();
				}
	private: System::Void _aX_Click(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
					ClickPicture(Convert::ToInt32(((Button^)(sender))->Name->Substring(2)));
				}
	private: System::Void _cpu_level_o_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void _cpu_cpu_faster_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					ShowHideInterface();
			 }
	private: System::Void _generate_Click(System::Object^  sender, System::EventArgs^  e) {
					int nn0,nn1,nn2,nn3,nn4,nn5;
					nn0=1;
					for(int n1=6;n1<=12;n1+=2)
				 {
					 nn1=nn0*n1;
					 for(int n2=4;n2<=7;n2++)
					 {
						 nn2=nn1*n2;
						 for(int n3=3;n3<=6;n3++)
						 {
							 nn3=nn2*n3;
							 for(int n4=2;n4<=5;n4++)
							 {
								 nn4=nn3*n4;
								 nn5=nn4;
								 WINX=0;
								 WINO=0;
								 WINNONE=0;
								 for(int N=0;N<400;N++)
								 {
									 ClearField();
									 COURSE=0;
									 ISWIN=0;
									 while(1)
									 {
										 if(ISWIN!=0)
										 {
											 break;
										 }
										 SetDegree(2);
										 SolveSimple(1,10,false);
										 GlobalStatus();
										 if(ISWIN==1)
										 {
											 WINX++;
											 break;
										 }
										 if(ISWIN==2)
										 {
											 WINO++;
											 break;
										 }
										 if(ISWIN==3)
										 {
											 WINNONE++;
											 break;
										 }
										 if(ISWIN!=0)
										 {
											 break;
										 }
										 DEGREE[0]=nn0;
										 DEGREE[1]=nn1;
										 DEGREE[2]=nn2;
										 DEGREE[3]=nn3;
										 DEGREE[4]=nn4;
										 DEGREE[5]=nn5;
										 SolveSimple(2,10,false);
										 GlobalStatus();
										 if(ISWIN==1)
										 {
											 WINX++;
											 break;
										 }
										 if(ISWIN==2)
										 {
											 WINO++;
											 break;
										 }
										 if(ISWIN==3)
										 {
											 WINNONE++;
											 break;
										 }
									 }
								 }
								 _text_generate->Text=n1.ToString()+" "+n2.ToString()+" "+n3.ToString()+" "+n4.ToString();
								 if(WINO-WINX>=-20)
								 {
									 IO::File::AppendAllText("E:\\logxo.txt",nn0.ToString()+" "+nn1.ToString()+" "+nn2.ToString()+" "+nn3.ToString()+" "+nn4.ToString()+" "+nn5.ToString()+"   "+WINX.ToString()+" "+WINO.ToString()+(wchar_t)13+(wchar_t)10);
								 }
								 Application::DoEvents();
							 }
						 }
					 }
				 }
			 }
	};
}