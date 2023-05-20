#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>   
#include<vector>
#include <Windows.h>
#include <time.h>
#include <fstream>
#include <signal.h> 
#include <functional>
#include "Camera_winform.h"
#include "MyForm2.h"
using namespace std;


namespace Project38 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Web;
	using namespace System::Net;
	using namespace System::Net::Mail;
	using namespace System::Windows::Forms;
	using namespace AForge;
	using namespace AForge::Video;
	using namespace AForge::Video::DirectShow;
	using namespace DarrenLee::Media;
	using namespace System::IO;
	using namespace System::Drawing::Imaging;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Summary for Account_Settings
	/// </summary>
	public ref class Account_Settings : public System::Windows::Forms::Form
	{
		// your secondary/popup form's class




	private: System::Windows::Forms::TextBox^ Fullname_Textbox;
	private: System::Windows::Forms::TextBox^ Username_Textbox;

	private: System::Windows::Forms::GroupBox^ AccountGbox;
	private: System::Windows::Forms::Label^ Name_label;

	private: System::Windows::Forms::Label^ Phone;



	private: System::Windows::Forms::Label^ Username;






	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;




	private: System::Windows::Forms::TextBox^ Phone_Textbox;




	private: System::Windows::Forms::GroupBox^ NotificationGbox;
	private: System::Windows::Forms::Label^ Email_label;


	private: System::Windows::Forms::GroupBox^ SecurityGbox;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ Email_Textbox;
	private: System::Windows::Forms::TextBox^ Password_Textbox;



	private: System::Windows::Forms::Button^ Save_button;


	private: System::Windows::Forms::PictureBox^ pictureBox2;



	private: System::Windows::Forms::TextBox^ step2_code_Textbox;









	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ Hello_label;
	private: System::Windows::Forms::Button^ Account_button;
	private: System::Windows::Forms::Button^ Notification_button;


	private: System::Windows::Forms::Button^ Security_button;
	private: System::Windows::Forms::Button^ Logout_button;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ Current_Tab_label;













	public:
		int timer1_counter = 0;
		int timer1_counter2 = 0;
		int timer2_counter = 0;
		int timer2_counter2 = 0;
		static String^ Code;
		char who = 's';
	private: System::Windows::Forms::PictureBox^ Name_picturebox;
	private: System::Windows::Forms::PictureBox^ Name_pictureBox2;
	private: System::Windows::Forms::PictureBox^ Username_picturebox2;
	private: System::Windows::Forms::PictureBox^ Username_picturebox;
	private: System::Windows::Forms::PictureBox^ Phone_picturebox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ Password_pictureBox;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ VCODE_pictureBox;




	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ Email_picturebox;


	private: System::Windows::Forms::PictureBox^ Phone_picturebox;





	public:

	public:
		List<PictureBox^>^ pics = gcnew List<PictureBox^>();

		List<Label^>^ labels = gcnew List<Label^>();

		String^ old_username;
		String^ old_phone;
		String^ old_email;
		String^ old_name;
		String^ RandomCode;
	private: System::Windows::Forms::Label^ Username_error_label;
	private: System::Windows::Forms::Label^ Fullname_error_label;
	private: System::Windows::Forms::Label^ Phone_error_label;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ Reenter;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ Password_label_error;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Label^ Reenter_error_label;
	private: System::Windows::Forms::Timer^ timer3;
	public:
		String^ old_pass;

		bool changed = false;
		
		char s_key = '0';
		List<String^>^ EMAILS = gcnew List<String^>;
		List<String^>^ PHONES = gcnew List<String^>;
	private: System::Windows::Forms::Label^ email_error_label;
	private: System::Windows::Forms::Label^ email_error_label2;
	private: Siticone::UI::WinForms::SiticoneWinToggleSwith^ email_switch;
	private: Siticone::UI::WinForms::SiticoneWinToggleSwith^ Email_checkBox;
	private: Siticone::UI::WinForms::SiticoneButton^ Send_code_button;
	private: System::Windows::Forms::Label^ step2_code_label;
	private: System::Windows::Forms::Label^ step2_error_label;
	private: Siticone::UI::WinForms::SiticoneButton^ Browse_button;
	private: Siticone::UI::WinForms::SiticoneButton^ No_pic_button;
	private: Siticone::UI::WinForms::SiticoneButton^ New_pic_button;
private: Siticone::UI::WinForms::SiticoneButton^ Delete_button;








	public:

	public:
		List<String^>^ UNAMES = gcnew List<String^>;
		void Blue(PictureBox^ p, Label^ l) {
			l->ForeColor = Color::FromArgb(0, 102, 204);
			p->BackColor = Color::FromArgb(0, 102, 204);
		}
		void Green(PictureBox^ p, Label^ l) {
			l->ForeColor = Color::FromArgb(0, 255, 0);
			p->BackColor = Color::FromArgb(0, 255, 0);
		}
		void Red(PictureBox^ p, Label^ l) {
			l->ForeColor = Color::FromArgb(255, 0, 0);
			p->BackColor = Color::FromArgb(255, 0, 0);
		}
		void Blacken(PictureBox^ p, Label^ l) {
			l->ForeColor = Color::FromArgb(0, 0, 0);
			p->BackColor = Color::FromArgb(0, 0, 0);
		}
		void Bluen(PictureBox^ p, Label^ l) {

			for (int i = 0; i < labels->Count; i++) {
				if (labels[i]->ForeColor != Color::FromArgb(0, 255, 0))
					Blacken(pics[i], labels[i]);
			}
			Blue(p, l);
		}
		MyForm2^ c;
		char Logoutkey = '0';
		bool Delete_choice = false;
		//Camera^ MyCamera = gcnew Camera();
		void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
		void save() {
			string username;
			MarshalString(Username_Textbox->Text, username);
			if (who == 'd') {
				string old_uname;
				MarshalString(old_username, old_uname);
				old_uname = "PICs\\Doctors\\" + old_uname + ".jpg";
				String^ old_u = gcnew String(old_uname.c_str());
				System::IO::File::Delete(old_u);
				string wow = "PICs\\Doctors\\" + username + ".jpg";
				String^ str3 = gcnew String(wow.c_str());
				if (pictureBox1->ImageLocation != "PICs\\guest.jpg") {
					if (System::IO::File::Exists(str3)) {
						System::IO::File::Delete(str3);
						pictureBox1->Image->Save(str3, ImageFormat::Jpeg);
					}
					else
						pictureBox1->Image->Save(str3, ImageFormat::Jpeg);
				}
				else {
					System::IO::File::Delete(str3);
				}
			}
			else if (who == 'p') {
				string old_uname;
				MarshalString(old_username, old_uname);

				old_uname = "PICs\\patients\\" + old_uname + ".jpg";
				String^ old_u = gcnew String(old_uname.c_str());
				System::IO::File::Delete(old_u);
				string wow = "PICs\\Patients\\" + username + ".jpg";
				String^ str3 = gcnew String(wow.c_str());
				if (pictureBox1->ImageLocation != "PICs\\guest.jpg") {
					if (System::IO::File::Exists(str3)) {
						System::IO::File::Delete(str3);
						pictureBox1->Image->Save(str3, ImageFormat::Jpeg);
					}
					else
						pictureBox1->Image->Save(str3, ImageFormat::Jpeg);
				}
				else {
					System::IO::File::Delete(str3);

				}
			}
		}
		String^ GetPass() {
			return Password_Textbox->Text;
		}
		String^ GetFullname() {
			return Fullname_Textbox->Text;
		}
		String^ GetUsername() {
			return Username_Textbox->Text;
		}
		String^ GetEmail() {
			return Email_Textbox->Text;
		}
		String^ GetPhone() {
			return Phone_Textbox->Text;
		}
		bool change_occured() {
			if (changed == false)
				return false;
			else
				return true;
		}
		char Getsend_email() {
			if (Email_checkBox->Checked)
				return 'T';
			else
				return 'F';
		}
		char STEP2;
		char Getstep2() {
			if (!email_switch->Checked)
				return 'F';
			else {

				if (Step_two == false)	return 'F';
				else 	return 'T';
			}
		}
		bool logout() {
			if (Logoutkey == 'b' || Logoutkey == 'n')
				return true;
			else
				return false;
		}
		bool save_key() {
			if (Logoutkey == 'b' || Logoutkey == 'o')
				return true;
			else
				return false;
		}
		bool Delete_key() {
			if (Delete_choice)
				return true;
			else
				return false;

		}
		bool phone_or_name_changed() {
			if (Phone->ForeColor == Color::FromArgb(0, 255, 0) || Name_label->ForeColor == Color::FromArgb(0, 255, 0))
				return true;
			else
				return false;
		}
		Account_Settings(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}
		Account_Settings(string Fullname, string username, string pass, string email, string phone, char send_email, char step2, vector<string>allemails, vector<string>allphones, vector<string>allusernames, string d)
		{
			InitializeComponent();
			for (int i = 0; i < allemails.size(); i++) {
				String^ u = gcnew String(allemails[i].c_str());
				EMAILS->Add(u);
			}
			for (int i = 0; i < allphones.size(); i++) {
				String^ u = gcnew String(allphones[i].c_str());
				PHONES->Add(u);
			}
			for (int i = 0; i < allusernames.size(); i++) {
				String^ u = gcnew String(allusernames[i].c_str());
				UNAMES->Add(u);
			}
			who = 'd';
			String^ name = gcnew String(Fullname.c_str());
			String^ uname = gcnew String(username.c_str());
			String^ p = gcnew String(pass.c_str());
			String^ Em = gcnew String(email.c_str());
			String^ pho = gcnew String(phone.c_str());
			Fullname_Textbox->Text = name;
			Hello_label->Text = "Hello Dr. " + name;
			Username_Textbox->Text = uname;
			Email_Textbox->Text = Em;
			Phone_Textbox->Text = pho;
			Password_Textbox->Text = p;
			if (send_email == 'T') {
				Email_checkBox->Checked = true;
			}
			else {
				Email_checkBox->Checked = false;
			}
			if (step2 == 'T') {
				email_switch->Checked = true;
			}
			else {
				email_switch->Checked = false;
			}

			string wow = "PICs\\Doctors\\" + username + ".jpg";
			String^ str3 = gcnew String(wow.c_str());
			if (System::IO::File::Exists(str3)) {
				pictureBox1->ImageLocation = str3;
				pictureBox2->ImageLocation = str3;
			}
			else {
				pictureBox1->ImageLocation = "PICs\\guest.jpg";
				pictureBox2->ImageLocation = "PICs\\guest.jpg";
			}
			GraphicsPath^ gp = gcnew GraphicsPath();
			gp->AddEllipse(pictureBox2->DisplayRectangle);
			pictureBox2->Region = gcnew System::Drawing::Region(gp);
			AccountGbox->Show();
			NotificationGbox->Hide();
			SecurityGbox->Hide();
			Send_code_button->Hide();
			email_error_label->Hide();
			step2_code_label->Hide();
			step2_code_Textbox->Hide();
			pictureBox5->Hide();
			Send_code_button->Hide();
			VCODE_pictureBox->Hide();
			email_error_label->Hide();
			//panel3->Show();
			Password_Textbox->Text = p;
			//
			//TODO: Add the constructor code here
			//
		}
		char genders;
		Account_Settings(string Fullname, string username, string pass, string email, string phone, char gender, char step2, vector<string>allemails, vector<string>allphones, vector<string>allusernames)
		{
			InitializeComponent();
			for (int i = 0; i < allemails.size(); i++) {
				String^ u = gcnew String(allemails[i].c_str());
				EMAILS->Add(u);
			}
			for (int i = 0; i < allphones.size(); i++) {
				String^ u = gcnew String(allphones[i].c_str());
				PHONES->Add(u);
			}
			for (int i = 0; i < allusernames.size(); i++) {
				String^ u = gcnew String(allusernames[i].c_str());
				UNAMES->Add(u);
			}
			who = 'p';
			String^ name = gcnew String(Fullname.c_str());
			String^ uname = gcnew String(username.c_str());
			String^ p = gcnew String(pass.c_str());
			String^ Em = gcnew String(email.c_str());
			String^ phon = gcnew String(phone.c_str());
			genders = gender;
			/*String^ pho = gcnew String(phone.c_str());*/
			Fullname_Textbox->Text = name;
			if (gender == 'M')
				Hello_label->Text = "Hello Mr. " + name;
			else
				Hello_label->Text = "Hello Ms/Mrs." + name;

			Username_Textbox->Text = uname;
			Email_Textbox->Text = Em;
			Phone_Textbox->Text = phon;
			Password_Textbox->Text = p;
			if (step2 == 'T') {
				email_switch->Checked = true;
			}
			else {
				email_switch->Checked = false;
			}

			string wow = "PICs\\Patients\\" + username + ".jpg";
			String^ str3 = gcnew String(wow.c_str());
			if (System::IO::File::Exists(str3)) {
				pictureBox1->ImageLocation = str3;
				pictureBox2->ImageLocation = str3;
			}
			else {
				pictureBox1->ImageLocation = "PICs\\guest.jpg";
				pictureBox2->ImageLocation = "PICs\\guest.jpg";
			}
			GraphicsPath^ gp = gcnew GraphicsPath();
			gp->AddEllipse(pictureBox2->DisplayRectangle);
			pictureBox2->Region = gcnew System::Drawing::Region(gp);

			AccountGbox->Show();
			NotificationGbox->Hide();
			SecurityGbox->Hide();
			label11->Hide();
			Email_checkBox->Hide();
			step2_code_label->Hide();
			step2_code_Textbox->Hide();
			pictureBox5->Hide();
			Send_code_button->Hide();
			VCODE_pictureBox->Hide();
			email_error_label->Hide();
			//Password_Textbox->Text = p;


			//
			//TODO: Add the constructor code here
			//
		}

		void Show_Account() {

		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Account_Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Account_Settings::typeid));
			this->Fullname_Textbox = (gcnew System::Windows::Forms::TextBox());
			this->Username_Textbox = (gcnew System::Windows::Forms::TextBox());
			this->Phone_Textbox = (gcnew System::Windows::Forms::TextBox());
			this->AccountGbox = (gcnew System::Windows::Forms::GroupBox());
			this->No_pic_button = (gcnew Siticone::UI::WinForms::SiticoneButton());
			this->New_pic_button = (gcnew Siticone::UI::WinForms::SiticoneButton());
			this->Browse_button = (gcnew Siticone::UI::WinForms::SiticoneButton());
			this->Phone_error_label = (gcnew System::Windows::Forms::Label());
			this->Fullname_error_label = (gcnew System::Windows::Forms::Label());
			this->Username_error_label = (gcnew System::Windows::Forms::Label());
			this->Phone = (gcnew System::Windows::Forms::Label());
			this->Phone_picturebox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Phone_picturebox = (gcnew System::Windows::Forms::PictureBox());
			this->Username = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Name_label = (gcnew System::Windows::Forms::Label());
			this->Name_pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Name_picturebox = (gcnew System::Windows::Forms::PictureBox());
			this->Username_picturebox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Username_picturebox = (gcnew System::Windows::Forms::PictureBox());
			this->NotificationGbox = (gcnew System::Windows::Forms::GroupBox());
			this->Email_checkBox = (gcnew Siticone::UI::WinForms::SiticoneWinToggleSwith());
			this->email_error_label = (gcnew System::Windows::Forms::Label());
			this->Email_Textbox = (gcnew System::Windows::Forms::TextBox());
			this->Email_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->Email_picturebox = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SecurityGbox = (gcnew System::Windows::Forms::GroupBox());
			this->step2_error_label = (gcnew System::Windows::Forms::Label());
			this->Send_code_button = (gcnew Siticone::UI::WinForms::SiticoneButton());
			this->email_switch = (gcnew Siticone::UI::WinForms::SiticoneWinToggleSwith());
			this->email_error_label2 = (gcnew System::Windows::Forms::Label());
			this->Reenter_error_label = (gcnew System::Windows::Forms::Label());
			this->Password_label_error = (gcnew System::Windows::Forms::Label());
			this->step2_code_Textbox = (gcnew System::Windows::Forms::TextBox());
			this->step2_code_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->VCODE_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->Password_Textbox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Password_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Reenter = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->Save_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Logout_button = (gcnew System::Windows::Forms::Button());
			this->Notification_button = (gcnew System::Windows::Forms::Button());
			this->Security_button = (gcnew System::Windows::Forms::Button());
			this->Account_button = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Hello_label = (gcnew System::Windows::Forms::Label());
			this->Current_Tab_label = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Delete_button = (gcnew Siticone::UI::WinForms::SiticoneButton());
			this->AccountGbox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Phone_picturebox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Phone_picturebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Name_pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Name_picturebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Username_picturebox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Username_picturebox))->BeginInit();
			this->NotificationGbox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Email_picturebox))->BeginInit();
			this->SecurityGbox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VCODE_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Password_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Fullname_Textbox
			// 
			this->Fullname_Textbox->BackColor = System::Drawing::Color::White;
			this->Fullname_Textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Fullname_Textbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fullname_Textbox->Location = System::Drawing::Point(37, 177);
			this->Fullname_Textbox->Name = L"Fullname_Textbox";
			this->Fullname_Textbox->Size = System::Drawing::Size(371, 27);
			this->Fullname_Textbox->TabIndex = 0;
			this->Fullname_Textbox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Account_Settings::Fullname_Textbox_MouseClick);
			this->Fullname_Textbox->TextChanged += gcnew System::EventHandler(this, &Account_Settings::Fullname_Textbox_TextChanged);
			this->Fullname_Textbox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Account_Settings::Fullname_Textbox_Validating);
			// 
			// Username_Textbox
			// 
			this->Username_Textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Username_Textbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username_Textbox->Location = System::Drawing::Point(34, 266);
			this->Username_Textbox->Name = L"Username_Textbox";
			this->Username_Textbox->Size = System::Drawing::Size(371, 27);
			this->Username_Textbox->TabIndex = 1;
			this->Username_Textbox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Account_Settings::Username_Textbox_MouseClick);
			this->Username_Textbox->TextChanged += gcnew System::EventHandler(this, &Account_Settings::Username_Textbox_TextChanged);
			this->Username_Textbox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Account_Settings::Username_Textbox_Validating);
			// 
			// Phone_Textbox
			// 
			this->Phone_Textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Phone_Textbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Phone_Textbox->Location = System::Drawing::Point(35, 357);
			this->Phone_Textbox->Name = L"Phone_Textbox";
			this->Phone_Textbox->Size = System::Drawing::Size(370, 27);
			this->Phone_Textbox->TabIndex = 3;
			this->Phone_Textbox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Account_Settings::Phone_Textbox_MouseClick);
			this->Phone_Textbox->TextChanged += gcnew System::EventHandler(this, &Account_Settings::Phone_Textbox_TextChanged);
			this->Phone_Textbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Account_Settings::Phone_Textbox_KeyPress);
			this->Phone_Textbox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Account_Settings::Phone_Textbox_Validating);
			// 
			// AccountGbox
			// 
			this->AccountGbox->BackColor = System::Drawing::Color::White;
			this->AccountGbox->Controls->Add(this->Delete_button);
			this->AccountGbox->Controls->Add(this->No_pic_button);
			this->AccountGbox->Controls->Add(this->New_pic_button);
			this->AccountGbox->Controls->Add(this->Browse_button);
			this->AccountGbox->Controls->Add(this->Phone_error_label);
			this->AccountGbox->Controls->Add(this->Fullname_error_label);
			this->AccountGbox->Controls->Add(this->Username_error_label);
			this->AccountGbox->Controls->Add(this->Phone);
			this->AccountGbox->Controls->Add(this->Phone_Textbox);
			this->AccountGbox->Controls->Add(this->Phone_picturebox2);
			this->AccountGbox->Controls->Add(this->Phone_picturebox);
			this->AccountGbox->Controls->Add(this->Username_Textbox);
			this->AccountGbox->Controls->Add(this->Username);
			this->AccountGbox->Controls->Add(this->pictureBox1);
			this->AccountGbox->Controls->Add(this->label5);
			this->AccountGbox->Controls->Add(this->Name_label);
			this->AccountGbox->Controls->Add(this->Fullname_Textbox);
			this->AccountGbox->Controls->Add(this->Name_pictureBox2);
			this->AccountGbox->Controls->Add(this->Name_picturebox);
			this->AccountGbox->Controls->Add(this->Username_picturebox2);
			this->AccountGbox->Controls->Add(this->Username_picturebox);
			this->AccountGbox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AccountGbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AccountGbox->Location = System::Drawing::Point(327, 0);
			this->AccountGbox->Name = L"AccountGbox";
			this->AccountGbox->Size = System::Drawing::Size(943, 745);
			this->AccountGbox->TabIndex = 4;
			this->AccountGbox->TabStop = false;
			this->AccountGbox->Enter += gcnew System::EventHandler(this, &Account_Settings::AccountGbox_Enter);
			// 
			// No_pic_button
			// 
			this->No_pic_button->BackColor = System::Drawing::Color::White;
			this->No_pic_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->No_pic_button->BorderRadius = 18;
			this->No_pic_button->BorderThickness = 2;
			this->No_pic_button->CheckedState->Parent = this->No_pic_button;
			this->No_pic_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->No_pic_button->CustomImages->Parent = this->No_pic_button;
			this->No_pic_button->FillColor = System::Drawing::Color::Transparent;
			this->No_pic_button->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->No_pic_button->ForeColor = System::Drawing::Color::Black;
			this->No_pic_button->HoveredState->Parent = this->No_pic_button;
			this->No_pic_button->Location = System::Drawing::Point(505, 506);
			this->No_pic_button->Name = L"No_pic_button";
			this->No_pic_button->PressedColor = System::Drawing::Color::WhiteSmoke;
			this->No_pic_button->PressedDepth = 50;
			this->No_pic_button->ShadowDecoration->Parent = this->No_pic_button;
			this->No_pic_button->Size = System::Drawing::Size(117, 59);
			this->No_pic_button->TabIndex = 90;
			this->No_pic_button->Text = L"No Profile Picture";
			this->No_pic_button->Click += gcnew System::EventHandler(this, &Account_Settings::No_pic_button_Click);
			// 
			// New_pic_button
			// 
			this->New_pic_button->BackColor = System::Drawing::Color::White;
			this->New_pic_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->New_pic_button->BorderRadius = 18;
			this->New_pic_button->BorderThickness = 2;
			this->New_pic_button->CheckedState->Parent = this->New_pic_button;
			this->New_pic_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->New_pic_button->CustomImages->Parent = this->New_pic_button;
			this->New_pic_button->FillColor = System::Drawing::Color::Transparent;
			this->New_pic_button->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->New_pic_button->ForeColor = System::Drawing::Color::Black;
			this->New_pic_button->HoveredState->Parent = this->New_pic_button;
			this->New_pic_button->Location = System::Drawing::Point(505, 441);
			this->New_pic_button->Name = L"New_pic_button";
			this->New_pic_button->PressedColor = System::Drawing::Color::WhiteSmoke;
			this->New_pic_button->PressedDepth = 50;
			this->New_pic_button->ShadowDecoration->Parent = this->New_pic_button;
			this->New_pic_button->Size = System::Drawing::Size(117, 59);
			this->New_pic_button->TabIndex = 89;
			this->New_pic_button->Text = L"Take a picture";
			this->New_pic_button->Click += gcnew System::EventHandler(this, &Account_Settings::New_pic_button_Click);
			// 
			// Browse_button
			// 
			this->Browse_button->BackColor = System::Drawing::Color::White;
			this->Browse_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Browse_button->BorderRadius = 15;
			this->Browse_button->BorderThickness = 2;
			this->Browse_button->CheckedState->Parent = this->Browse_button;
			this->Browse_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Browse_button->CustomImages->Parent = this->Browse_button;
			this->Browse_button->FillColor = System::Drawing::Color::Transparent;
			this->Browse_button->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Browse_button->ForeColor = System::Drawing::Color::Black;
			this->Browse_button->HoveredState->Parent = this->Browse_button;
			this->Browse_button->Location = System::Drawing::Point(640, 484);
			this->Browse_button->Name = L"Browse_button";
			this->Browse_button->PressedColor = System::Drawing::Color::WhiteSmoke;
			this->Browse_button->PressedDepth = 50;
			this->Browse_button->ShadowDecoration->Parent = this->Browse_button;
			this->Browse_button->Size = System::Drawing::Size(117, 40);
			this->Browse_button->TabIndex = 88;
			this->Browse_button->Text = L"Browse";
			this->Browse_button->Click += gcnew System::EventHandler(this, &Account_Settings::Browse_button_Click);
			// 
			// Phone_error_label
			// 
			this->Phone_error_label->AutoSize = true;
			this->Phone_error_label->ForeColor = System::Drawing::Color::Red;
			this->Phone_error_label->Location = System::Drawing::Point(455, 366);
			this->Phone_error_label->Name = L"Phone_error_label";
			this->Phone_error_label->Size = System::Drawing::Size(43, 17);
			this->Phone_error_label->TabIndex = 21;
			this->Phone_error_label->Text = L"label1";
			// 
			// Fullname_error_label
			// 
			this->Fullname_error_label->AutoSize = true;
			this->Fullname_error_label->ForeColor = System::Drawing::Color::Red;
			this->Fullname_error_label->Location = System::Drawing::Point(455, 186);
			this->Fullname_error_label->Name = L"Fullname_error_label";
			this->Fullname_error_label->Size = System::Drawing::Size(43, 17);
			this->Fullname_error_label->TabIndex = 20;
			this->Fullname_error_label->Text = L"label1";
			// 
			// Username_error_label
			// 
			this->Username_error_label->AutoSize = true;
			this->Username_error_label->BackColor = System::Drawing::Color::White;
			this->Username_error_label->ForeColor = System::Drawing::Color::Red;
			this->Username_error_label->Location = System::Drawing::Point(458, 270);
			this->Username_error_label->Name = L"Username_error_label";
			this->Username_error_label->Size = System::Drawing::Size(43, 17);
			this->Username_error_label->TabIndex = 19;
			this->Username_error_label->Text = L"label1";
			// 
			// Phone
			// 
			this->Phone->AutoSize = true;
			this->Phone->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13));
			this->Phone->Location = System::Drawing::Point(66, 327);
			this->Phone->Name = L"Phone";
			this->Phone->Size = System::Drawing::Size(82, 30);
			this->Phone->TabIndex = 7;
			this->Phone->Text = L"Phone:";
			this->Phone->Click += gcnew System::EventHandler(this, &Account_Settings::label4_Click);
			// 
			// Phone_picturebox2
			// 
			this->Phone_picturebox2->Location = System::Drawing::Point(33, 350);
			this->Phone_picturebox2->Name = L"Phone_picturebox2";
			this->Phone_picturebox2->Size = System::Drawing::Size(375, 45);
			this->Phone_picturebox2->TabIndex = 18;
			this->Phone_picturebox2->TabStop = false;
			// 
			// Phone_picturebox
			// 
			this->Phone_picturebox->BackColor = System::Drawing::Color::Black;
			this->Phone_picturebox->Location = System::Drawing::Point(31, 346);
			this->Phone_picturebox->Name = L"Phone_picturebox";
			this->Phone_picturebox->Size = System::Drawing::Size(381, 53);
			this->Phone_picturebox->TabIndex = 17;
			this->Phone_picturebox->TabStop = false;
			// 
			// Username
			// 
			this->Username->AutoSize = true;
			this->Username->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13, System::Drawing::FontStyle::Bold));
			this->Username->Location = System::Drawing::Point(63, 232);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(117, 30);
			this->Username->TabIndex = 5;
			this->Username->Text = L"Username:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(312, 420);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(159, 155);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18));
			this->label5->Location = System::Drawing::Point(50, 484);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(219, 41);
			this->label5->TabIndex = 8;
			this->label5->Text = L" Profile picture";
			// 
			// Name_label
			// 
			this->Name_label->AutoSize = true;
			this->Name_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13));
			this->Name_label->Location = System::Drawing::Point(66, 143);
			this->Name_label->Name = L"Name_label";
			this->Name_label->Size = System::Drawing::Size(77, 30);
			this->Name_label->TabIndex = 4;
			this->Name_label->Text = L"Name:";
			// 
			// Name_pictureBox2
			// 
			this->Name_pictureBox2->Location = System::Drawing::Point(34, 168);
			this->Name_pictureBox2->Name = L"Name_pictureBox2";
			this->Name_pictureBox2->Size = System::Drawing::Size(375, 45);
			this->Name_pictureBox2->TabIndex = 14;
			this->Name_pictureBox2->TabStop = false;
			this->Name_pictureBox2->Click += gcnew System::EventHandler(this, &Account_Settings::Name_pictureBox2_Click);
			// 
			// Name_picturebox
			// 
			this->Name_picturebox->BackColor = System::Drawing::Color::Black;
			this->Name_picturebox->Location = System::Drawing::Point(32, 164);
			this->Name_picturebox->Name = L"Name_picturebox";
			this->Name_picturebox->Size = System::Drawing::Size(381, 53);
			this->Name_picturebox->TabIndex = 13;
			this->Name_picturebox->TabStop = false;
			this->Name_picturebox->Click += gcnew System::EventHandler(this, &Account_Settings::pictureBox3_Click);
			// 
			// Username_picturebox2
			// 
			this->Username_picturebox2->Location = System::Drawing::Point(33, 259);
			this->Username_picturebox2->Name = L"Username_picturebox2";
			this->Username_picturebox2->Size = System::Drawing::Size(375, 45);
			this->Username_picturebox2->TabIndex = 16;
			this->Username_picturebox2->TabStop = false;
			// 
			// Username_picturebox
			// 
			this->Username_picturebox->BackColor = System::Drawing::Color::Black;
			this->Username_picturebox->Location = System::Drawing::Point(31, 255);
			this->Username_picturebox->Name = L"Username_picturebox";
			this->Username_picturebox->Size = System::Drawing::Size(381, 53);
			this->Username_picturebox->TabIndex = 15;
			this->Username_picturebox->TabStop = false;
			// 
			// NotificationGbox
			// 
			this->NotificationGbox->BackColor = System::Drawing::Color::White;
			this->NotificationGbox->Controls->Add(this->Email_checkBox);
			this->NotificationGbox->Controls->Add(this->email_error_label);
			this->NotificationGbox->Controls->Add(this->Email_Textbox);
			this->NotificationGbox->Controls->Add(this->Email_label);
			this->NotificationGbox->Controls->Add(this->pictureBox6);
			this->NotificationGbox->Controls->Add(this->Email_picturebox);
			this->NotificationGbox->Controls->Add(this->label11);
			this->NotificationGbox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NotificationGbox->Location = System::Drawing::Point(327, 0);
			this->NotificationGbox->Name = L"NotificationGbox";
			this->NotificationGbox->Size = System::Drawing::Size(893, 739);
			this->NotificationGbox->TabIndex = 7;
			this->NotificationGbox->TabStop = false;
			// 
			// Email_checkBox
			// 
			this->Email_checkBox->Location = System::Drawing::Point(515, 339);
			this->Email_checkBox->Name = L"Email_checkBox";
			this->Email_checkBox->Size = System::Drawing::Size(58, 22);
			this->Email_checkBox->TabIndex = 20;
			this->Email_checkBox->Text = L"siticoneWinToggleSwith1";
			this->Email_checkBox->CheckedChanged += gcnew System::EventHandler(this, &Account_Settings::Email_checkBox_CheckedChanged);
			// 
			// email_error_label
			// 
			this->email_error_label->AutoSize = true;
			this->email_error_label->ForeColor = System::Drawing::Color::Red;
			this->email_error_label->Location = System::Drawing::Point(514, 270);
			this->email_error_label->Name = L"email_error_label";
			this->email_error_label->Size = System::Drawing::Size(44, 16);
			this->email_error_label->TabIndex = 19;
			this->email_error_label->Text = L"label1";
			// 
			// Email_Textbox
			// 
			this->Email_Textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Email_Textbox->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->Email_Textbox->Location = System::Drawing::Point(74, 270);
			this->Email_Textbox->Name = L"Email_Textbox";
			this->Email_Textbox->Size = System::Drawing::Size(373, 25);
			this->Email_Textbox->TabIndex = 7;
			this->Email_Textbox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Account_Settings::Email_Textbox_MouseClick);
			this->Email_Textbox->TextChanged += gcnew System::EventHandler(this, &Account_Settings::Email_Textbox_TextChanged);
			this->Email_Textbox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Account_Settings::Email_Textbox_Validating);
			// 
			// Email_label
			// 
			this->Email_label->AutoSize = true;
			this->Email_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->Email_label->Location = System::Drawing::Point(89, 239);
			this->Email_label->Name = L"Email_label";
			this->Email_label->Size = System::Drawing::Size(74, 26);
			this->Email_label->TabIndex = 6;
			this->Email_label->Text = L"Email:";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(73, 259);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(375, 45);
			this->pictureBox6->TabIndex = 18;
			this->pictureBox6->TabStop = false;
			// 
			// Email_picturebox
			// 
			this->Email_picturebox->BackColor = System::Drawing::Color::Black;
			this->Email_picturebox->Location = System::Drawing::Point(70, 255);
			this->Email_picturebox->Name = L"Email_picturebox";
			this->Email_picturebox->Size = System::Drawing::Size(382, 53);
			this->Email_picturebox->TabIndex = 17;
			this->Email_picturebox->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(53, 336);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(399, 25);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Receive an email for each patient diagnosed ";
			// 
			// SecurityGbox
			// 
			this->SecurityGbox->BackColor = System::Drawing::Color::White;
			this->SecurityGbox->Controls->Add(this->step2_error_label);
			this->SecurityGbox->Controls->Add(this->Send_code_button);
			this->SecurityGbox->Controls->Add(this->email_switch);
			this->SecurityGbox->Controls->Add(this->email_error_label2);
			this->SecurityGbox->Controls->Add(this->Reenter_error_label);
			this->SecurityGbox->Controls->Add(this->Password_label_error);
			this->SecurityGbox->Controls->Add(this->step2_code_Textbox);
			this->SecurityGbox->Controls->Add(this->step2_code_label);
			this->SecurityGbox->Controls->Add(this->pictureBox5);
			this->SecurityGbox->Controls->Add(this->VCODE_pictureBox);
			this->SecurityGbox->Controls->Add(this->Password_Textbox);
			this->SecurityGbox->Controls->Add(this->label9);
			this->SecurityGbox->Controls->Add(this->pictureBox3);
			this->SecurityGbox->Controls->Add(this->Password_pictureBox);
			this->SecurityGbox->Controls->Add(this->label8);
			this->SecurityGbox->Controls->Add(this->textBox1);
			this->SecurityGbox->Controls->Add(this->Reenter);
			this->SecurityGbox->Controls->Add(this->pictureBox7);
			this->SecurityGbox->Controls->Add(this->pictureBox8);
			this->SecurityGbox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SecurityGbox->Location = System::Drawing::Point(327, 1);
			this->SecurityGbox->Name = L"SecurityGbox";
			this->SecurityGbox->Size = System::Drawing::Size(880, 822);
			this->SecurityGbox->TabIndex = 8;
			this->SecurityGbox->TabStop = false;
			this->SecurityGbox->Enter += gcnew System::EventHandler(this, &Account_Settings::SecurityGbox_Enter);
			// 
			// step2_error_label
			// 
			this->step2_error_label->AutoSize = true;
			this->step2_error_label->ForeColor = System::Drawing::Color::Red;
			this->step2_error_label->Location = System::Drawing::Point(55, 335);
			this->step2_error_label->Name = L"step2_error_label";
			this->step2_error_label->Size = System::Drawing::Size(0, 16);
			this->step2_error_label->TabIndex = 88;
			// 
			// Send_code_button
			// 
			this->Send_code_button->BackColor = System::Drawing::Color::White;
			this->Send_code_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Send_code_button->BorderRadius = 15;
			this->Send_code_button->BorderThickness = 2;
			this->Send_code_button->CheckedState->Parent = this->Send_code_button;
			this->Send_code_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Send_code_button->CustomImages->Parent = this->Send_code_button;
			this->Send_code_button->FillColor = System::Drawing::Color::Transparent;
			this->Send_code_button->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Send_code_button->ForeColor = System::Drawing::Color::Black;
			this->Send_code_button->HoveredState->Parent = this->Send_code_button;
			this->Send_code_button->Location = System::Drawing::Point(435, 374);
			this->Send_code_button->Name = L"Send_code_button";
			this->Send_code_button->PressedColor = System::Drawing::Color::WhiteSmoke;
			this->Send_code_button->PressedDepth = 50;
			this->Send_code_button->ShadowDecoration->Parent = this->Send_code_button;
			this->Send_code_button->Size = System::Drawing::Size(126, 41);
			this->Send_code_button->TabIndex = 87;
			this->Send_code_button->Text = L"Enter";
			this->Send_code_button->Click += gcnew System::EventHandler(this, &Account_Settings::Send_code_button_Click);
			// 
			// email_switch
			// 
			this->email_switch->Location = System::Drawing::Point(352, 298);
			this->email_switch->Name = L"email_switch";
			this->email_switch->Size = System::Drawing::Size(72, 27);
			this->email_switch->TabIndex = 30;
			this->email_switch->Text = L"siticoneWinToggleSwith1";
			this->email_switch->CheckedChanged += gcnew System::EventHandler(this, &Account_Settings::step2_CheckBox_CheckedChanged);
			// 
			// email_error_label2
			// 
			this->email_error_label2->AutoSize = true;
			this->email_error_label2->ForeColor = System::Drawing::Color::White;
			this->email_error_label2->Location = System::Drawing::Point(625, 360);
			this->email_error_label2->Name = L"email_error_label2";
			this->email_error_label2->Size = System::Drawing::Size(44, 16);
			this->email_error_label2->TabIndex = 29;
			this->email_error_label2->Text = L"label1";
			// 
			// Reenter_error_label
			// 
			this->Reenter_error_label->AutoSize = true;
			this->Reenter_error_label->ForeColor = System::Drawing::Color::Red;
			this->Reenter_error_label->Location = System::Drawing::Point(459, 244);
			this->Reenter_error_label->Name = L"Reenter_error_label";
			this->Reenter_error_label->Size = System::Drawing::Size(0, 16);
			this->Reenter_error_label->TabIndex = 28;
			// 
			// Password_label_error
			// 
			this->Password_label_error->AutoSize = true;
			this->Password_label_error->ForeColor = System::Drawing::Color::Red;
			this->Password_label_error->Location = System::Drawing::Point(459, 243);
			this->Password_label_error->Name = L"Password_label_error";
			this->Password_label_error->Size = System::Drawing::Size(0, 16);
			this->Password_label_error->TabIndex = 27;
			// 
			// step2_code_Textbox
			// 
			this->step2_code_Textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->step2_code_Textbox->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->step2_code_Textbox->Location = System::Drawing::Point(47, 384);
			this->step2_code_Textbox->Name = L"step2_code_Textbox";
			this->step2_code_Textbox->Size = System::Drawing::Size(373, 25);
			this->step2_code_Textbox->TabIndex = 15;
			this->step2_code_Textbox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Account_Settings::step2_code_Textbox_MouseClick);
			this->step2_code_Textbox->TextChanged += gcnew System::EventHandler(this, &Account_Settings::step2_code_Textbox_TextChanged);
			// 
			// step2_code_label
			// 
			this->step2_code_label->AutoSize = true;
			this->step2_code_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13));
			this->step2_code_label->Location = System::Drawing::Point(53, 352);
			this->step2_code_label->Name = L"step2_code_label";
			this->step2_code_label->Size = System::Drawing::Size(190, 30);
			this->step2_code_label->TabIndex = 14;
			this->step2_code_label->Text = L"Verification Code:";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(46, 374);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(375, 45);
			this->pictureBox5->TabIndex = 22;
			this->pictureBox5->TabStop = false;
			// 
			// VCODE_pictureBox
			// 
			this->VCODE_pictureBox->BackColor = System::Drawing::Color::Black;
			this->VCODE_pictureBox->Location = System::Drawing::Point(42, 370);
			this->VCODE_pictureBox->Name = L"VCODE_pictureBox";
			this->VCODE_pictureBox->Size = System::Drawing::Size(382, 53);
			this->VCODE_pictureBox->TabIndex = 21;
			this->VCODE_pictureBox->TabStop = false;
			// 
			// Password_Textbox
			// 
			this->Password_Textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Password_Textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Password_Textbox->Location = System::Drawing::Point(47, 239);
			this->Password_Textbox->Name = L"Password_Textbox";
			this->Password_Textbox->ShortcutsEnabled = false;
			this->Password_Textbox->Size = System::Drawing::Size(373, 23);
			this->Password_Textbox->TabIndex = 8;
			this->Password_Textbox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Account_Settings::Password_Textbox_MouseClick);
			this->Password_Textbox->TextChanged += gcnew System::EventHandler(this, &Account_Settings::Password_Textbox_TextChanged);
			this->Password_Textbox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Account_Settings::Password_Textbox_Validating);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13));
			this->label9->Location = System::Drawing::Point(63, 207);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(110, 30);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Password:";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(46, 229);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(375, 45);
			this->pictureBox3->TabIndex = 18;
			this->pictureBox3->TabStop = false;
			// 
			// Password_pictureBox
			// 
			this->Password_pictureBox->BackColor = System::Drawing::Color::Black;
			this->Password_pictureBox->Location = System::Drawing::Point(42, 225);
			this->Password_pictureBox->Name = L"Password_pictureBox";
			this->Password_pictureBox->Size = System::Drawing::Size(382, 53);
			this->Password_pictureBox->TabIndex = 17;
			this->Password_pictureBox->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18));
			this->label8->Location = System::Drawing::Point(35, 286);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(262, 41);
			this->label8->TabIndex = 6;
			this->label8->Text = L"2 step verification";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(48, 239);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ShortcutsEnabled = false;
			this->textBox1->Size = System::Drawing::Size(373, 23);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Account_Settings::textBox1_TextChanged);
			this->textBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Account_Settings::textBox1_Validating);
			// 
			// Reenter
			// 
			this->Reenter->AutoSize = true;
			this->Reenter->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13));
			this->Reenter->Location = System::Drawing::Point(64, 207);
			this->Reenter->Name = L"Reenter";
			this->Reenter->Size = System::Drawing::Size(194, 30);
			this->Reenter->TabIndex = 23;
			this->Reenter->Text = L"Reenter Password:";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(47, 229);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(375, 45);
			this->pictureBox7->TabIndex = 26;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Black;
			this->pictureBox8->Location = System::Drawing::Point(43, 225);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(382, 53);
			this->pictureBox8->TabIndex = 25;
			this->pictureBox8->TabStop = false;
			// 
			// Save_button
			// 
			this->Save_button->BackColor = System::Drawing::SystemColors::HotTrack;
			this->Save_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Save_button->FlatAppearance->BorderSize = 0;
			this->Save_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Save_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Save_button->ForeColor = System::Drawing::Color::White;
			this->Save_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Save_button.Image")));
			this->Save_button->Location = System::Drawing::Point(166, 3);
			this->Save_button->Name = L"Save_button";
			this->Save_button->Size = System::Drawing::Size(157, 179);
			this->Save_button->TabIndex = 10;
			this->Save_button->Text = L" Save";
			this->Save_button->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Save_button->UseVisualStyleBackColor = false;
			this->Save_button->Click += gcnew System::EventHandler(this, &Account_Settings::Save_button_Click);
			this->Save_button->MouseLeave += gcnew System::EventHandler(this, &Account_Settings::Save_button_MouseLeave);
			this->Save_button->MouseHover += gcnew System::EventHandler(this, &Account_Settings::Save_button_MouseHover);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(101, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(117, 119);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Controls->Add(this->Notification_button);
			this->panel1->Controls->Add(this->Security_button);
			this->panel1->Controls->Add(this->Account_button);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(329, 715);
			this->panel1->TabIndex = 13;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->tableLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->Logout_button, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->Save_button, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 527);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(326, 185);
			this->tableLayoutPanel1->TabIndex = 14;
			// 
			// Logout_button
			// 
			this->Logout_button->BackColor = System::Drawing::SystemColors::HotTrack;
			this->Logout_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Logout_button->FlatAppearance->BorderSize = 0;
			this->Logout_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Logout_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Logout_button->ForeColor = System::Drawing::Color::White;
			this->Logout_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logout_button.Image")));
			this->Logout_button->Location = System::Drawing::Point(3, 3);
			this->Logout_button->Name = L"Logout_button";
			this->Logout_button->Size = System::Drawing::Size(157, 179);
			this->Logout_button->TabIndex = 11;
			this->Logout_button->Text = L" Logout";
			this->Logout_button->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Logout_button->UseVisualStyleBackColor = false;
			this->Logout_button->Click += gcnew System::EventHandler(this, &Account_Settings::Logout_button_Click);
			this->Logout_button->MouseLeave += gcnew System::EventHandler(this, &Account_Settings::Logout_button_MouseLeave);
			this->Logout_button->MouseHover += gcnew System::EventHandler(this, &Account_Settings::Logout_button_MouseHover);
			// 
			// Notification_button
			// 
			this->Notification_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->Notification_button->FlatAppearance->BorderSize = 0;
			this->Notification_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Notification_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Notification_button->ForeColor = System::Drawing::Color::White;
			this->Notification_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Notification_button.Image")));
			this->Notification_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Notification_button->Location = System::Drawing::Point(0, 415);
			this->Notification_button->Name = L"Notification_button";
			this->Notification_button->Size = System::Drawing::Size(329, 119);
			this->Notification_button->TabIndex = 16;
			this->Notification_button->Text = L"       Notification";
			this->Notification_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Notification_button->UseVisualStyleBackColor = true;
			this->Notification_button->Click += gcnew System::EventHandler(this, &Account_Settings::Notification_button_Click);
			this->Notification_button->MouseLeave += gcnew System::EventHandler(this, &Account_Settings::Notification_button_MouseLeave);
			this->Notification_button->MouseHover += gcnew System::EventHandler(this, &Account_Settings::Notification_button_MouseHover);
			// 
			// Security_button
			// 
			this->Security_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->Security_button->FlatAppearance->BorderSize = 0;
			this->Security_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Security_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Security_button->ForeColor = System::Drawing::Color::White;
			this->Security_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Security_button.Image")));
			this->Security_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Security_button->Location = System::Drawing::Point(0, 296);
			this->Security_button->Name = L"Security_button";
			this->Security_button->Size = System::Drawing::Size(329, 119);
			this->Security_button->TabIndex = 15;
			this->Security_button->Text = L"    Security";
			this->Security_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Security_button->UseVisualStyleBackColor = true;
			this->Security_button->Click += gcnew System::EventHandler(this, &Account_Settings::Security_button_Click);
			this->Security_button->MouseLeave += gcnew System::EventHandler(this, &Account_Settings::Security_button_MouseLeave);
			this->Security_button->MouseHover += gcnew System::EventHandler(this, &Account_Settings::Security_button_MouseHover);
			// 
			// Account_button
			// 
			this->Account_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Account_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->Account_button->FlatAppearance->BorderSize = 0;
			this->Account_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Account_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Account_button->ForeColor = System::Drawing::Color::White;
			this->Account_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Account_button.Image")));
			this->Account_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Account_button->Location = System::Drawing::Point(0, 177);
			this->Account_button->Name = L"Account_button";
			this->Account_button->Size = System::Drawing::Size(329, 119);
			this->Account_button->TabIndex = 14;
			this->Account_button->Text = L"     Account";
			this->Account_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Account_button->UseVisualStyleBackColor = true;
			this->Account_button->Click += gcnew System::EventHandler(this, &Account_Settings::Account_button_Click);
			this->Account_button->MouseLeave += gcnew System::EventHandler(this, &Account_Settings::Account_button_MouseLeave);
			this->Account_button->MouseHover += gcnew System::EventHandler(this, &Account_Settings::Account_button_MouseHover);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->Hello_label);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(329, 177);
			this->panel2->TabIndex = 0;
			// 
			// Hello_label
			// 
			this->Hello_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hello_label->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Hello_label->Location = System::Drawing::Point(14, 125);
			this->Hello_label->Name = L"Hello_label";
			this->Hello_label->Size = System::Drawing::Size(290, 48);
			this->Hello_label->TabIndex = 14;
			this->Hello_label->Text = L"label3";
			this->Hello_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Current_Tab_label
			// 
			this->Current_Tab_label->AutoSize = true;
			this->Current_Tab_label->BackColor = System::Drawing::Color::White;
			this->Current_Tab_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Current_Tab_label->Location = System::Drawing::Point(693, 12);
			this->Current_Tab_label->Name = L"Current_Tab_label";
			this->Current_Tab_label->Size = System::Drawing::Size(154, 42);
			this->Current_Tab_label->TabIndex = 0;
			this->Current_Tab_label->Text = L"Account";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Account_Settings::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Account_Settings::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &Account_Settings::timer3_Tick);
			// 
			// Delete_button
			// 
			this->Delete_button->BackColor = System::Drawing::Color::White;
			this->Delete_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Delete_button->BorderColor = System::Drawing::Color::Red;
			this->Delete_button->BorderRadius = 18;
			this->Delete_button->BorderThickness = 2;
			this->Delete_button->CheckedState->Parent = this->Delete_button;
			this->Delete_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Delete_button->CustomImages->Parent = this->Delete_button;
			this->Delete_button->FillColor = System::Drawing::Color::Transparent;
			this->Delete_button->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete_button->ForeColor = System::Drawing::Color::Red;
			this->Delete_button->HoveredState->Parent = this->Delete_button;
			this->Delete_button->Location = System::Drawing::Point(363, 627);
			this->Delete_button->Name = L"Delete_button";
			this->Delete_button->PressedColor = System::Drawing::Color::WhiteSmoke;
			this->Delete_button->PressedDepth = 50;
			this->Delete_button->ShadowDecoration->Parent = this->Delete_button;
			this->Delete_button->Size = System::Drawing::Size(117, 59);
			this->Delete_button->TabIndex = 91;
			this->Delete_button->Text = L"Delete Account";
			this->Delete_button->Click += gcnew System::EventHandler(this, &Account_Settings::Delete_button_Click);
			// 
			// Account_Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(1205, 715);
			this->Controls->Add(this->Current_Tab_label);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->AccountGbox);
			this->Controls->Add(this->SecurityGbox);
			this->Controls->Add(this->NotificationGbox);
			this->Name = L"Account_Settings";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Account Settings";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Account_Settings::Account_Settings_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Account_Settings::Account_Settings_Load);
			this->AccountGbox->ResumeLayout(false);
			this->AccountGbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Phone_picturebox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Phone_picturebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Name_pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Name_picturebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Username_picturebox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Username_picturebox))->EndInit();
			this->NotificationGbox->ResumeLayout(false);
			this->NotificationGbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Email_picturebox))->EndInit();
			this->SecurityGbox->ResumeLayout(false);
			this->SecurityGbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VCODE_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Password_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int curr_loc;
	private: System::Void Account_Settings_Load(System::Object^ sender, System::EventArgs^ e) {

		curr_loc = Password_Textbox->Location.Y;
		Show_Account();
		changed = false;
		old_username = Username_Textbox->Text;
		old_phone = Phone_Textbox->Text;
		old_email = Email_Textbox->Text;
		old_name = Fullname_Textbox->Text;
		old_pass = Password_Textbox->Text;


		labels->Add(label9);
		labels->Add(Name_label);
		labels->Add(Phone);
		labels->Add(Username);
		labels->Add(Email_label);
		labels->Add(step2_code_label);
		labels->Add(Reenter);

		pics->Add(Password_pictureBox);
		pics->Add(Name_picturebox);
		pics->Add(Phone_picturebox);
		pics->Add(Username_picturebox);
		pics->Add(Email_picturebox);
		pics->Add(VCODE_pictureBox);
		pics->Add(pictureBox8);

		Reenter->Hide();
		pictureBox7->Hide();
		pictureBox8->Hide();
		textBox1->Hide();
		Username_error_label->Hide();
		Fullname_error_label->Hide();
		Password_label_error->Hide();
		Reenter_error_label->Hide();
		Phone_error_label->Hide();
		email_error_label->Hide();
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Phone_Textbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (!isdigit(ch) && ch != 8)
		{
			e->Handled = true;
		}
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Browse_button_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ dialog = gcnew OpenFileDialog();
		string filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp)|*.jpg; *.jpeg; *.gif; *.bmp";
		String^ str3 = gcnew String(filter.c_str());
		dialog->Filter = str3;
		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			//MyCamera->Stop();
			pictureBox1->ImageLocation = dialog->FileName;
			pictureBox2->ImageLocation = dialog->FileName;
			changed = true;
		}

	}
	private: System::Void Security_button_Click(System::Object^ sender, System::EventArgs^ e) {
		SecurityGbox->Show();
		AccountGbox->Hide();
		NotificationGbox->Hide();
		Current_Tab_label->Text = "Security";
	}
	private: System::Void Account_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccountGbox->Show();
		NotificationGbox->Hide();
		SecurityGbox->Hide();
		Current_Tab_label->Text = "Account";


	}
	private: System::Void Notification_button_Click(System::Object^ sender, System::EventArgs^ e) {
		NotificationGbox->Show();
		AccountGbox->Hide();
		SecurityGbox->Hide();
		Current_Tab_label->Text = "Notification";


	}
	private: System::Void No_pic_button_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->ImageLocation = "PICs\\guest.jpg";
		pictureBox2->ImageLocation = "PICs\\guest.jpg";
		changed = true;

	}
	private: System::Void Save_button_Click(System::Object^ sender, System::EventArgs^ e) {
		save();
		Logoutkey = 'o';
		s_key = '1';
	}
	private: System::Void New_pic_button_Click(System::Object^ sender, System::EventArgs^ e) {
		bool check_errors = false;
		for (int i = 0; i < labels->Count; i++) {
			if (labels[i]->ForeColor == Color::FromArgb(255, 0, 0)) {
				check_errors = true;
				break;
			}
		}
		if (!check_errors) {
			string username;
			MarshalString(Username_Textbox->Text, username);
			string temp = "PICs\\" + username + ".jpg";
			String^ temp_loc = gcnew String(temp.c_str());
			System::IO::File::Delete(temp_loc);
			Camera_winform^ cm = gcnew Camera_winform(username);
			cm->ShowDialog();
			if (who == 'd') {
				string org = "PICs\\Doctors\\" + username + ".jpg";
				String^ org_loc = gcnew String(temp.c_str());
				if (System::IO::File::Exists(temp_loc)) {
					changed = true;
					pictureBox1->ImageLocation = temp_loc;
					pictureBox2->ImageLocation = temp_loc;
				}
				else if (System::IO::File::Exists(org_loc)) {
					pictureBox1->ImageLocation = org_loc;
					pictureBox2->ImageLocation = org_loc;

				}
			}
			else if (who == 'p') {
				string org = "PICs\\Patients\\" + username + ".jpg";
				String^ org_loc = gcnew String(temp.c_str());
				if (System::IO::File::Exists(temp_loc)) {
					changed = true;
					pictureBox1->ImageLocation = temp_loc;
					pictureBox2->ImageLocation = temp_loc;
				}
				else if (System::IO::File::Exists(org_loc)) {
					pictureBox1->ImageLocation = org_loc;
					pictureBox2->ImageLocation = org_loc;

				}
			}
		}
		else {
			System::Windows::Forms::DialogResult Quit_result = MessageBox::Show("You cannot save while having errors,please fix them first", "Errors", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	private: System::Void Account_Settings_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		this->ActiveControl = Name_label;
		string username;
		MarshalString(Username_Textbox->Text, username);
		string temp = "PICs\\" + username + ".jpg";
		String^ temp_loc = gcnew String(temp.c_str());
		if (Delete_choice == false) {
			bool check_errors = false;
			for (int i = 0; i < labels->Count; i++) {
				if (labels[i]->ForeColor == Color::FromArgb(255, 0, 0)) {
					check_errors = true;
					break;
				}
			}
			if (System::IO::File::Exists(temp_loc))
				System::IO::File::Delete(temp_loc);
			if (!check_errors || Logoutkey == 'b') {
				if (Logoutkey == '0' && s_key == '0' && changed) {
					System::Windows::Forms::DialogResult Quit_result = MessageBox::Show("Do you want to save Current changes?", "Quit?", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
					if (Quit_result == System::Windows::Forms::DialogResult::Yes) {
						//Save_button->PerformClick();
						save();
						Logoutkey = 'o';
					}
					else if (Quit_result == System::Windows::Forms::DialogResult::Cancel) {
						e->Cancel = true;
					}
				}
			}
			else {
				System::Windows::Forms::DialogResult Quit_result = MessageBox::Show("You still have errors, do you want to exit without saving?", "Errors", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
				if (Quit_result == System::Windows::Forms::DialogResult::No) {
					//Save_button->PerformClick()
					e->Cancel = true;

				}
			}
		}

		else {
			System::Windows::Forms::DialogResult Delete_result = MessageBox::Show("Are you sure you want to delete all your data including diseases and its symptoms ?", "Delete", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
			if (Delete_result == System::Windows::Forms::DialogResult::No) {
					e->Cancel = true;
			}
			else {
				string randCode;
				string from, pass, MessageBody;
				srand(time(0));
				randCode = to_string((rand() % 10000000) + 1000000);
				MailMessage^ message = gcnew MailMessage();
				from = "selfdiagnosissupp@gmail.com";
				pass = "eomootfkfmpefvut";
				MessageBody = "We  are very sorry that you aree deleting ypour account.\n Remember that deleting your account means that you are deleting all your info and all diseases created by you will be deleted\n Here is the verification code to confirm the delete process " + randCode + " .";
				String^ From = gcnew String(from.c_str());
				String^ MB = gcnew String(MessageBody.c_str());
				String^ To;
				String^ Pass = gcnew String(pass.c_str());
				message->From = gcnew MailAddress(From);
				message->Body = MB;
				message->Subject = "Account Delete :(";

				To = Email_Textbox->Text;
				SmtpClient^ smtp = gcnew SmtpClient("smtp.gmail.com");
				smtp->EnableSsl = true;
				message->To->Add(To);
				smtp->Port = 587;
				smtp->DeliveryMethod = SmtpDeliveryMethod::Network;
				smtp->Credentials = gcnew NetworkCredential(From, Pass);
				try {
					smtp->Send(message);
					message->To->Clear();
				}
				catch (exception ex) {

				}
				c = gcnew MyForm2(randCode);
				c->ShowDialog();
				this->Show();
				if (System::IO::File::Exists(temp_loc))
					System::IO::File::Delete(temp_loc);

				//Deleting all Doctor's pictures(Temp,old username, new username)
				if (who == 'd') {
					string old_uname;
					MarshalString(old_username, old_uname);
					old_uname = "PICs\\Doctors\\" + old_uname + ".jpg";
					String^ old_u = gcnew String(old_uname.c_str());
					System::IO::File::Delete(old_u);
					string wow = "PICs\\Doctors\\" + username + ".jpg";
					String^ str3 = gcnew String(wow.c_str());
					if (pictureBox1->ImageLocation != "PICs\\guest.jpg") {
						if (System::IO::File::Exists(str3)) {
							System::IO::File::Delete(str3);
						}
					}
					else {
						System::IO::File::Delete(str3);
					}
				}
				//Deleting all patient's pictures(Temp,old username, new username)
				else if (who == 'p') {
					string old_uname;
					MarshalString(old_username, old_uname);

					old_uname = "PICs\\patients\\" + old_uname + ".jpg";
					String^ old_u = gcnew String(old_uname.c_str());
					System::IO::File::Delete(old_u);
					string wow = "PICs\\Patients\\" + username + ".jpg";
					String^ str3 = gcnew String(wow.c_str());
					if (pictureBox1->ImageLocation != "PICs\\guest.jpg") {
						if (System::IO::File::Exists(str3)) {
							System::IO::File::Delete(str3);
						}
					}
					else {
						System::IO::File::Delete(str3);

					}
				}
			}


		}
	}

	private: System::Void Logout_button_Click(System::Object^ sender, System::EventArgs^ e) {
		bool check_errors = false;
		for (int i = 0; i < labels->Count; i++) {
			if (labels[i]->ForeColor == Color::FromArgb(255, 0, 0)) {
				check_errors = true;
				break;
			}
		}
		if (!check_errors) {
			if (s_key != '1' && changed) {
				System::Windows::Forms::DialogResult Logout_result = MessageBox::Show("Are you sure you want to Logout & save Current changes?", "Logout?", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
				if (Logout_result == System::Windows::Forms::DialogResult::Yes) {
					//Save_button->PerformClick();
					save();
					Logoutkey = 'b';
					this->Close();
				}
				else if (Logout_result == System::Windows::Forms::DialogResult::No) {
					Logoutkey = 'n';
					this->Close();
				}
			}
			else {
				System::Windows::Forms::DialogResult Logout_result = MessageBox::Show("Are you sure you want to Logout?", "Logout?", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (Logout_result == System::Windows::Forms::DialogResult::Yes) {
					//Save_button->PerformClick();
					Logoutkey = 'b';
					this->Close();
				}
			}
		}
		else {

			System::Windows::Forms::DialogResult Quit_result = MessageBox::Show("You still have errors, do you want to logout without saving?", "Errors", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
			if (Quit_result == System::Windows::Forms::DialogResult::Yes) {
				Logoutkey = 'b';
				this->Close();
			}

		}

	}
		   int counter = 0;
	private: System::Void step2_CheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		counter++;
		if (email_switch->Checked == true) {
			Send_code_button->Show();
			changed = true;
			VCODE_pictureBox->Show();
			pictureBox5->Show();
			pictureBox5->BringToFront();
			step2_code_Textbox->Show();
			step2_code_Textbox->BringToFront();
			step2_code_label->Show();
			step2_code_label->BringToFront();
			Send_code_button->Text = "Send";
			Send_code_button->PerformClick();
			Send_code_button->Text = "Enter";
		}
		else {
			step2_code_label->Hide();
			step2_code_Textbox->Hide();
			Send_code_button->Hide();
			Blacken(VCODE_pictureBox, step2_code_label);
			step2_error_label->Hide();
			step2_code_Textbox->Text = "";
			Step_two = false;
		}
	}
	private: System::Void step2_phone_Textbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (!isdigit(ch) && ch != 8)
		{
			e->Handled = true;
		}
	}
	private: System::Void Account_button_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		Account_button->BackColor = Color::FromArgb(255, 255, 255);
		Account_button->ForeColor = Color::FromArgb(0, 0, 0);
		Account_button->Image = System::Drawing::Image::FromFile("PICs\\sys\\Avatar_black.GIF");
		Account_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	}
	private: System::Void Account_button_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		Account_button->BackColor = Color::FromArgb(0, 102, 204);
		Account_button->ForeColor = Color::FromArgb(255, 255, 255);
		Account_button->Image = System::Drawing::Image::FromFile("PICs\\sys\\Avatar_white.GIF");
		Account_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	}
	private: System::Void Security_button_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		Security_button->BackColor = Color::FromArgb(255, 255, 255);
		Security_button->ForeColor = Color::FromArgb(0, 0, 0);
		Security_button->Image = System::Drawing::Image::FromFile("PICs\\sys\\Security_black.GIF");
		Security_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	}
	private: System::Void Security_button_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		Security_button->BackColor = Color::FromArgb(0, 102, 204);
		Security_button->ForeColor = Color::FromArgb(255, 255, 255);
		Security_button->Image = System::Drawing::Image::FromFile("PICs\\sys\\Security_white.GIF");
		Security_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	}
	private: System::Void Notification_button_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		Notification_button->BackColor = Color::FromArgb(255, 255, 255);
		Notification_button->ForeColor = Color::FromArgb(0, 0, 0);
		Notification_button->Image = System::Drawing::Image::FromFile("PICs\\sys\\Notification_black.GIF");
		Notification_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	}
	private: System::Void Notification_button_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		Notification_button->BackColor = Color::FromArgb(0, 102, 204);
		Notification_button->ForeColor = Color::FromArgb(255, 255, 255);
		Notification_button->Image = System::Drawing::Image::FromFile("PICs\\sys\\Notification_white.GIF");
		Notification_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	}
	private: System::Void Save_button_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		Save_button->BackColor = Color::FromArgb(255, 255, 255);
		Save_button->ForeColor = Color::FromArgb(0, 0, 0);
		Save_button->Image = System::Drawing::Image::FromFile("PICs\\sys\\bookmark_black.GIF");
		Save_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;

	}
	private: System::Void Save_button_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		Save_button->BackColor = Color::FromArgb(0, 102, 204);
		Save_button->ForeColor = Color::FromArgb(255, 255, 255);
		Save_button->Image = System::Drawing::Image::FromFile("PICs\\sys\\bookmark_white.GIF");
		Save_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;

	}
	private: System::Void Logout_button_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		Logout_button->BackColor = Color::FromArgb(255, 255, 255);
		Logout_button->ForeColor = Color::FromArgb(0, 0, 0);
		Logout_button->Image = System::Drawing::Image::FromFile("PICs\\sys\\exit_sign_black.GIF");
		Logout_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	}
	private: System::Void Logout_button_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		Logout_button->BackColor = Color::FromArgb(0, 102, 204);
		Logout_button->ForeColor = Color::FromArgb(255, 255, 255);
		Logout_button->Image = System::Drawing::Image::FromFile("PICs\\sys\\exit_sign_white.GIF");
		Logout_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	}
		   bool Step_two = false;
	private: System::Void Send_code_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Send_code_button->Text == "Send" && counter != 1) {
			step2_error_label->Text = "An e-mail has been sent to your email";
			step2_error_label->ForeColor= Color::FromArgb(255, 0, 0);
			step2_error_label->Show();
			RandomCode = gcnew String(to_string((rand() % 10000000) + 1000000).c_str());
			string from, pass, MessageBody;
			srand(time(0));
			string random_c;
			MarshalString(RandomCode, random_c);
			MailMessage^ message = gcnew MailMessage();
			from = "selfdiagnosissupp@gmail.com";
			pass = "eomootfkfmpefvut";
			MessageBody = "Your 2 Step Verification Code is " + random_c + " .";
			String^ From = gcnew String(from.c_str());
			String^ MB = gcnew String(MessageBody.c_str());
			String^ To;
			String^ Pass = gcnew String(pass.c_str());
			message->From = gcnew MailAddress(From);
			message->Body = MB;
			message->Subject = "2 Step Verification Code";
			To = Email_Textbox->Text;
			SmtpClient^ smtp = gcnew SmtpClient("smtp.gmail.com");
			smtp->EnableSsl = true;
			message->To->Add(To);
			smtp->Port = 587;
			smtp->DeliveryMethod = SmtpDeliveryMethod::Network;
			smtp->Credentials = gcnew NetworkCredential(From, Pass);
			try {
				smtp->SendMailAsync(message);
				message->To->Clear();
			}
			catch (exception ex) {

			}
		}
		else {
			if (RandomCode == step2_code_Textbox->Text) {
				System::Windows::Forms::MessageBox::Show("2-Step Verification has been activated", "2-Step", MessageBoxButtons::OK, MessageBoxIcon::Information);
				step2_error_label->Hide();
				Blacken(VCODE_pictureBox, step2_code_label);
				step2_error_label->Hide();
				step2_code_label->Hide();
				step2_code_Textbox->Hide();
				VCODE_pictureBox->Hide();
				pictureBox5->Hide();
				Send_code_button->Hide();
				Step_two = true;
			}
			else {
				if (counter != 1) {
					step2_error_label->Text = "Invalid Code";
					step2_error_label->Show();
					Red(VCODE_pictureBox, step2_code_label);
					Step_two = false;
				}
			}
		}

	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Fullname_Textbox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Bluen(Name_picturebox, Name_label);
	}
	private: System::Void Username_Textbox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Bluen(Username_picturebox, Username);
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Username_Textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		changed = true;
		string UNAME;
		MarshalString(Username_Textbox->Text, UNAME);
	}
	private: System::Void Phone_Textbox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Bluen(Phone_picturebox, Phone);
	}
	private: System::Void Fullname_Textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		changed = true;
	}
	private: System::Void Phone_Textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		changed = true;

	}
	private: System::Void Password_Textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		timer1_counter2 = 0;
		changed = true;
		if (old_pass != Password_Textbox->Text && old_pass != nullptr) {
			Bluen(Password_pictureBox, label9);
		}
		else {
			if (old_pass == Password_Textbox->Text) {
				Blacken(Password_pictureBox, label9);
				timer1->Stop();
				return;
			}
		}
		if (label9->ForeColor == Color::FromArgb(0, 102, 204) && old_pass != nullptr) {
			Password_label_error->Text = "";
			string old_p;
			MarshalString(old_pass, old_p);
			string new_p;
			MarshalString(Password_Textbox->Text, new_p);
			string curr_uname;
			MarshalString(Username_Textbox->Text, curr_uname);
			if (old_p != new_p) {
				string org2 = "";
				for (int i = 0; i < curr_uname.size(); i++) {
					org2 += char(tolower(curr_uname[i]));
				}
				string org1 = "";
				for (int i = 0; i < new_p.size(); i++) {
					org1 += char(tolower(new_p[i]));
				}
				if (org1 != org2) {
					timer1->Start();
					Password_label_error->Hide();
					Green(Password_pictureBox, label9);
					textBox1->Focus();

				}
				else {
					timer1->Stop();
					Password_label_error->Text = "Password cannot be the same as Username";
					Password_label_error->Show();
					Red(Password_pictureBox, label9);
				}
			}
		}

	}
	private: System::Void step2_email_Textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		changed = true;

	}
	private: System::Void step2_code_Textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		changed = true;
	}
	private: System::Void Email_Textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Email_Textbox->Text != old_email) {
			changed = true;
		}
	}
	private: System::Void Email_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		changed = true;
	}
	private: System::Void Username_Textbox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		string new_uname;
		MarshalString(Username_Textbox->Text, new_uname);
		string old_uname;
		MarshalString(old_username, old_uname);
		bool test_name = false;
		Username_error_label->Text = "";

		if (new_uname != old_uname) {
			if (new_uname.size() >= 3) {
				for (int i = 0; i < new_uname.size(); i++) {
					char c = new_uname[i];
					if (!isalnum(c)) {

						/*label2->Text = "username cannot have symbols";
						label2->Show();*/
						Username_error_label->Text += "Username cannot have symbols\n";
						Username_error_label->Show();
						test_name = false;
						Red(Username_picturebox, Username);
						e->Cancel = true;
						break;
					}
					test_name = true;
					Blacken(Username_picturebox, Username);
					e->Cancel = false;
				}

			}
			else {
				Username_error_label->Text += "Username should be 3 characters or more\n";
				Username_error_label->Show();
				Red(Username_picturebox, Username);
				e->Cancel = true;
			}
			if (test_name) {
				for (int i = 0; i < UNAMES->Count; i++) {
					string u;
					MarshalString(UNAMES[i], u);
					string org2 = "";
					for (int j = 0; j < u.size(); j++) {
						if (isalpha(u[j]))
							org2 += char(tolower(u[j]));
						else {
							org2 += u[j];
						}
					}
					string org = "";
					for (int j = 0; j < new_uname.size(); j++) {
						if (isalpha(new_uname[j]))
							org += char(tolower(new_uname[j]));
						else {
							org += new_uname[j];
						}
					}

					if (org == org2) {
						Username_error_label->Text = "This Username is already taken\n";
						Username_error_label->Show();

						Red(Username_picturebox, Username);
						e->Cancel = true;
						break;
					}
					else {
						Green(Username_picturebox, Username);
						Username_error_label->Hide();
						e->Cancel = false;
					}

				}

			}
		}
		else {
			Blacken(Username_picturebox, Username);
		}
	}
	private: System::Void AccountGbox_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Name_pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Password_Textbox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Bluen(Password_pictureBox, label9);
		if (Reenter->Visible)
			this->ActiveControl = label9;
	}
	private: System::Void step2_phone_Textbox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void Email_Textbox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Bluen(Email_picturebox, Email_label);
	}
	private: System::Void step2_code_Textbox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void Fullname_Textbox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		string old_fullname;
		MarshalString(old_name, old_fullname);
		string new_fullname;
		MarshalString(Fullname_Textbox->Text, new_fullname);
		bool check_name = false;
		if (old_fullname != new_fullname) {
			if (new_fullname.size() >= 3) {
				for (int i = 0; i < new_fullname.size(); i++) {
					if (!isalnum(new_fullname[i]) && new_fullname[i] != ' ') {
						check_name = true;
						break;
					}
				}
				if (genders == 'M')
					Hello_label->Text = "Hello Mr. " + Fullname_Textbox->Text;
				else
					Hello_label->Text = "Hello Ms/Mrs. " + Fullname_Textbox->Text;
				if (check_name) {
					Fullname_error_label->Text = "Full Name should not contain special characters";
					Fullname_error_label->Show();
					Red(Name_picturebox, Name_label);
					e->Cancel = true;
				}
				else {
					Green(Name_picturebox, Name_label);
					Fullname_error_label->Hide();
					e->Cancel = false;
				}
			}

			else {
				Fullname_error_label->Text = "Full Name should be more than three characters";
				Fullname_error_label->Show();
				Red(Name_picturebox, Name_label);
				e->Cancel = true;
			}
		}
		else {
			Blacken(Name_picturebox, Name_label);
			if (who == 'p') {
				if (genders == 'M')
					Hello_label->Text = "Hello Mr. " + Fullname_Textbox->Text;
				else
					Hello_label->Text = "Hello Ms/Mrs. " + Fullname_Textbox->Text;
			}
			else
				Hello_label->Text = "Hello Dr. " + Fullname_Textbox->Text;
		}
	}
	private: System::Void Phone_Textbox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		string old_p;
		MarshalString(old_phone, old_p);
		string new_p;
		MarshalString(Phone_Textbox->Text, new_p);
		double mphone = System::Convert::ToDouble(Phone_Textbox->Text);
		double cphone = mphone;
		bool vphone = true;
		int lengthCount = 1;
		if (old_p != new_p) {
			for (; cphone > 0.9; cphone /= 10, lengthCount++);//Here we count the entered numbers
			if (lengthCount != 11) {
				vphone = false;
				Phone_error_label->Text = "Phone numbers are 11 numbers";
				Phone_error_label->Show();

			}
			int check[11];
			for (int i = lengthCount - 1; i >= 0; i--) {
				check[i] = (int)mphone % 10;
				mphone /= 10;
			}
			if (check[2] != 1 && check[2] != 2 && check[2] != 0 && check[2] != 5) {
				Phone_error_label->Text = "Invalid phone number";
				Phone_error_label->Show();
				vphone = false;
			}
			if (vphone) {
				Blacken(Phone_picturebox, Phone);
				e->Cancel = false;
				bool check_phone = false;
				for (int i = 0; i < PHONES->Count; i++) {
					if (Phone_Textbox->Text == PHONES[i]) {
						Red(Phone_picturebox, Phone);
						e->Cancel = true;
						Phone_error_label->Text = "This phone number is already taken\n";
						Phone_error_label->Show();
						check_phone = true;
						break;
					}
				}
				if (!check_phone) {
					Phone_error_label->Hide();
					Green(Phone_picturebox, Phone);

				}
			}
			else {
				Red(Phone_picturebox, Phone);
				e->Cancel = true;
			}
		}
		else {
			Blacken(Phone_picturebox, Phone);
			Phone_error_label->Hide();
		}
	}
	private: System::Void Password_Textbox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		if (label9->ForeColor == Color::Red) {
			e->Cancel = true;
		}
		else {
			if (old_pass == Password_Textbox->Text) {
				Blacken(Password_pictureBox, label9);
			}
			e->Cancel = false;
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (timer1_counter2 == 120) {
			if (curr_loc != Password_Textbox->Location.Y + 70) {
				if (timer1_counter == 70) {
					timer1_counter = 0;
					timer1->Stop();
				}
				timer1_counter += 10;
				Password_Textbox->Location = Drawing::Point(Password_Textbox->Location.X, Password_Textbox->Location.Y - 10);
				Password_label_error->Location = Drawing::Point(Password_label_error->Location.X, Password_label_error->Location.Y - 10);
				Password_pictureBox->Location = Drawing::Point(Password_pictureBox->Location.X, Password_pictureBox->Location.Y - 10);
				pictureBox3->Location = Drawing::Point(pictureBox3->Location.X, pictureBox3->Location.Y - 10);
				label9->Location = Drawing::Point(label9->Location.X, label9->Location.Y - 10);
				Reenter->Show();
				pictureBox7->Show();
				pictureBox8->Show();
				textBox1->Show();
				Blacken(pictureBox8, Reenter);
				textBox1->Focus();
			}
		}
		else
			timer1_counter2 += 5;

	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (timer2_counter2 == 120) {
			if (curr_loc != Password_Textbox->Location.Y) {
				if (timer2_counter == 70) {
					timer2_counter2 = 0;
					timer2_counter = 0;
					timer2->Stop();
					Reenter->Hide();
					pictureBox7->Hide();
					pictureBox8->Hide();
					textBox1->Hide();
					textBox1->Text = "";
					Green(Password_pictureBox, label9);
					Blacken(pictureBox8, Reenter);
					Reenter_error_label->Hide();
				}
				timer2_counter += 10;
				Password_Textbox->Location = Drawing::Point(Password_Textbox->Location.X, Password_Textbox->Location.Y + 10);
				Password_label_error->Location = Drawing::Point(Password_label_error->Location.X, Password_label_error->Location.Y + 10);
				Password_pictureBox->Location = Drawing::Point(Password_pictureBox->Location.X, Password_pictureBox->Location.Y + 10);
				pictureBox3->Location = Drawing::Point(pictureBox3->Location.X, pictureBox3->Location.Y + 10);
				label9->Location = Drawing::Point(label9->Location.X, label9->Location.Y + 10);


			}
		}
		else
			timer2_counter2 += 5;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == Password_Textbox->Text) {
			Green(pictureBox8, Reenter);
			this->ActiveControl = Reenter;
			timer2->Start();
		}

	}
	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		if (textBox1->Text == "") {
			Red(pictureBox8, Reenter);
			Reenter_error_label->Text = "Passwords do not match";
			Reenter_error_label->Show();
			e->Cancel = true;
		}
		if (Reenter->ForeColor == Color::FromArgb(255, 0, 0)) {
			e->Cancel = true;
		}
		else {
			e->Cancel = false;
		}
	}
	private: System::Void Email_Textbox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		string new_email;
		MarshalString(Email_Textbox->Text, new_email);
		string s_old_email;
		MarshalString(old_email, s_old_email);
		bool test_email = false;
		email_error_label->Text = "";
		string domains[6] = { "gmail.com","outlook.com","yahoo.com","hotmail.com","icloud.com","cis.asu.edu.eg" };
		int at_index = new_email.find("@");
		if (new_email != s_old_email) {
			string email_username = new_email.substr(0, at_index);
			for (int i = 0; i < at_index; i++)
			{
				if (email_username[i] != '.' && !isalnum(email_username[i]))
				{
					test_email = false;
					test_email = false;
					if (Email_label->Visible) {
						Red(Email_picturebox, Email_label);
						email_error_label->Text = "Invalid email\n";
						email_error_label->Show();
					}
					else {
						email_error_label2->Text = "Invalid email\n";
						email_error_label2->Show();
					}
					e->Cancel = true;
					break;
				}
				else {
					test_email = true;
					if (Email_label->Visible) {
						Blacken(Email_picturebox, Email_label);

					}
					else
						e->Cancel = false;
				}
			}
			if (test_email) {
				for (int i = 0; i < 6; i++) {
					if (new_email.find(domains[i], at_index) == -1) {
						test_email = false;
						if (Email_label->Visible) {
							Red(Email_picturebox, Email_label);
							email_error_label->Text = "Invalid email\n";
							email_error_label->Show();
						}
						else {
							email_error_label2->Text = "Invalid email\n";
							email_error_label2->Show();
						}
						e->Cancel = true;
					}
					else {
						test_email = true;
						if (Email_label->Visible) {
							Blacken(Email_picturebox, Email_label);

						}
						else
							e->Cancel = false;
						break;
					}
				}
			}
			string org = "";
			for (int j = 0; j < new_email.size(); j++) {
				if (isalpha(new_email[j]))
					org += char(tolower(new_email[j]));
				else {
					org += new_email[j];
				}
			}
			if (test_email) {
				for (int i = 0; i < EMAILS->Count; i++) {
					string u;
					MarshalString(EMAILS[i], u);
					string org2 = "";
					for (int j = 0; j < u.size(); j++) {
						if (isalpha(u[j]))
							org2 += char(tolower(u[j]));
						else {
							org2 += u[j];
						}
					}
					if (org == org2) {
						if (Email_label->Visible) {
							Red(Email_picturebox, Email_label);
							email_error_label->Text = "This E-mail is already taken\n";
							email_error_label->Show();
						}
						else {
							email_error_label2->Text = "This E-mail is already taken\n";
							email_error_label2->Show();
						}
						e->Cancel = true;
						break;
					}
					else {
						if (Email_label->Visible) {
							Green(Email_picturebox, Email_label);
							email_error_label->Hide();
						}
						else {
							email_error_label2->Hide();
						}
						e->Cancel = false;
						Email_Textbox->Text = gcnew String(org.c_str());
					}

				}

			}
		}
		else {
			if (Email_label->Visible) {
				Blacken(Email_picturebox, Email_label);

			}
			else
				changed = false;
		}
	}

	private: System::Void SecurityGbox_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Vemail_pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void siticoneNumericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Delete_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Delete_choice = true;
		this->Close();
	}
};
}