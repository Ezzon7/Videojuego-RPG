#pragma once
#include "FrmMain.h"
#include "FrmMainn.h"
#include "FrmCreditos.h"
#include "FrmInstrucciones.h"
#include "FrmTematica.h"

namespace POGRAIIFINAL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Resumen de FrmMenu
	/// </summary>
	public ref class FrmMenu : public System::Windows::Forms::Form
	{
	public:
		FrmMenu(void)
		{
			InitializeComponent();
			spMusic = gcnew SoundPlayer("musica.wav");
		}

	private:
		SoundPlayer^ spMusic;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FrmMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ btnJugar1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Button^ btnCreditos;
	private: System::Windows::Forms::Button^ btnInstrucciones;
	private: System::Windows::Forms::Button^ btnJugar2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnTematica;
	protected:

	
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnJugar1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnCreditos = (gcnew System::Windows::Forms::Button());
			this->btnInstrucciones = (gcnew System::Windows::Forms::Button());
			this->btnJugar2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnTematica = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Clarendon BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(65, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tiempo:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(236, 88);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(95, 25);
			this->numericUpDown1->TabIndex = 1;
			// 
			// btnJugar1
			// 
			this->btnJugar1->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnJugar1->Location = System::Drawing::Point(68, 306);
			this->btnJugar1->Name = L"btnJugar1";
			this->btnJugar1->Size = System::Drawing::Size(120, 53);
			this->btnJugar1->TabIndex = 2;
			this->btnJugar1->Text = L"Jugar Nivel Campo";
			this->btnJugar1->UseVisualStyleBackColor = true;
			this->btnJugar1->Click += gcnew System::EventHandler(this, &FrmMenu::btnJugar1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Clarendon BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(65, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Numero de habitantes:\r\n";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(236, 127);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(95, 25);
			this->numericUpDown2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Clarendon BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(65, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Numero de agentes:";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown3->Location = System::Drawing::Point(236, 167);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(95, 25);
			this->numericUpDown3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Clarendon BT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(65, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Numero de aliados:";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown4->Location = System::Drawing::Point(236, 205);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(95, 25);
			this->numericUpDown4->TabIndex = 8;
			// 
			// btnCreditos
			// 
			this->btnCreditos->Font = (gcnew System::Drawing::Font(L"News706 BT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreditos->Location = System::Drawing::Point(307, 255);
			this->btnCreditos->Name = L"btnCreditos";
			this->btnCreditos->Size = System::Drawing::Size(75, 23);
			this->btnCreditos->TabIndex = 9;
			this->btnCreditos->Text = L"Creditos";
			this->btnCreditos->UseVisualStyleBackColor = true;
			this->btnCreditos->Click += gcnew System::EventHandler(this, &FrmMenu::btnCreditos_Click);
			// 
			// btnInstrucciones
			// 
			this->btnInstrucciones->Font = (gcnew System::Drawing::Font(L"News706 BT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInstrucciones->Location = System::Drawing::Point(163, 255);
			this->btnInstrucciones->Name = L"btnInstrucciones";
			this->btnInstrucciones->Size = System::Drawing::Size(103, 23);
			this->btnInstrucciones->TabIndex = 10;
			this->btnInstrucciones->Text = L"Instrucciones";
			this->btnInstrucciones->UseVisualStyleBackColor = true;
			this->btnInstrucciones->Click += gcnew System::EventHandler(this, &FrmMenu::btnInstrucciones_Click);
			// 
			// btnJugar2
			// 
			this->btnJugar2->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnJugar2->Location = System::Drawing::Point(236, 306);
			this->btnJugar2->Name = L"btnJugar2";
			this->btnJugar2->Size = System::Drawing::Size(116, 53);
			this->btnJugar2->TabIndex = 11;
			this->btnJugar2->Text = L"Jugar Nivel Desierto";
			this->btnJugar2->UseVisualStyleBackColor = true;
			this->btnJugar2->Click += gcnew System::EventHandler(this, &FrmMenu::btnJugar2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Stencil", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(95, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(275, 44);
			this->label5->TabIndex = 12;
			this->label5->Text = L"DAWN OF EVIL";
			// 
			// btnTematica
			// 
			this->btnTematica->Font = (gcnew System::Drawing::Font(L"News706 BT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTematica->Location = System::Drawing::Point(51, 255);
			this->btnTematica->Name = L"btnTematica";
			this->btnTematica->Size = System::Drawing::Size(75, 23);
			this->btnTematica->TabIndex = 13;
			this->btnTematica->Text = L"Tematica";
			this->btnTematica->UseVisualStyleBackColor = true;
			this->btnTematica->Click += gcnew System::EventHandler(this, &FrmMenu::btnTematica_Click);
			// 
			// FrmMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 381);
			this->Controls->Add(this->btnTematica);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnJugar2);
			this->Controls->Add(this->btnInstrucciones);
			this->Controls->Add(this->btnCreditos);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnJugar1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Name = L"FrmMenu";
			this->Text = L"FrmMenu";
			this->Load += gcnew System::EventHandler(this, &FrmMenu::FrmMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnJugar1_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmMain^ frm = gcnew FrmMain(Convert::ToInt32(numericUpDown1->Value), Convert::ToInt32(numericUpDown2->Value), Convert::ToInt32(numericUpDown3->Value), Convert::ToInt32(numericUpDown4->Value));
		this->Hide();
		frm->ShowDialog();
		this->Show();
	}
	private: System::Void btnCreditos_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmCreditos^ frm = gcnew FrmCreditos();
		this->Hide();
		frm->ShowDialog();
		this->Show();
	}
private: System::Void btnInstrucciones_Click(System::Object^ sender, System::EventArgs^ e) {
	FrmInstrucciones^ frm = gcnew FrmInstrucciones();
	this->Hide();
	frm->ShowDialog();
	this->Show();
}
private: System::Void btnJugar2_Click(System::Object^ sender, System::EventArgs^ e) {
	FrmMainn^ frm = gcnew FrmMainn(Convert::ToInt32(numericUpDown1->Value), Convert::ToInt32(numericUpDown2->Value), Convert::ToInt32(numericUpDown3->Value), Convert::ToInt32(numericUpDown4->Value));
	this->Hide();
	frm->ShowDialog();
	this->Show();
}
private: System::Void btnTematica_Click(System::Object^ sender, System::EventArgs^ e) {
	FrmTematica^ frm = gcnew FrmTematica();
	this->Hide();
	frm->ShowDialog();
	this->Show();
}
private: System::Void FrmMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	spMusic->PlayLooping();
}
};
}
