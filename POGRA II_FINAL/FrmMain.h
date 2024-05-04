#pragma once
#include <ctime>
#include "Controlador.h"

namespace POGRAIIFINAL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmMain
	/// </summary>
	public ref class FrmMain : public System::Windows::Forms::Form
	{
	public:
		FrmMain(int tiempo, int habitantes, int agentes, int aliados)
		{
			srand(time(NULL));
			InitializeComponent();
			panel1->Width = this->Width;
			panel1->Height = this->Height;
			//Buffer
			g = panel1->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(g, panel1->ClientRectangle);

			//Bitmaps
			bmpLider = gcnew Bitmap("lider.png");
			bmpCura = gcnew Bitmap("pastilla.png");
			bmpAliado = gcnew Bitmap("aliado.png");
			bmpAgente = gcnew Bitmap("agente.png");
			bmpHabitante = gcnew Bitmap("habitante.png");
			bmpMapa = gcnew Bitmap("mapa1.png");
			

			//Controlador
			controlador = new Controlador(bmpLider, bmpCura, bmpAliado, aliados, bmpAgente, agentes, bmpHabitante, habitantes, tiempo);
		}

	private:
		//Buffer
		Graphics^ g;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;

		//Bitmaps
		Bitmap^ bmpLider;
		Bitmap^ bmpCura;
		Bitmap^ bmpAliado;
		Bitmap^ bmpAgente;
		Bitmap^ bmpHabitante;
		Bitmap^ bmpMapa;
	
		//Arreglo
		Controlador* controlador;
	private: System::Windows::Forms::Label^ lblTiempo;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblPuntos;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timerTiempo;


	private: System::Windows::Forms::Timer^ timerMain;
	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~FrmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblTiempo = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblPuntos = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timerMain = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerTiempo = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->lblTiempo);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->lblPuntos);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(2, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(835, 500);
			this->panel1->TabIndex = 0;
			// 
			// lblTiempo
			// 
			this->lblTiempo->AutoSize = true;
			this->lblTiempo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempo->Location = System::Drawing::Point(773, 20);
			this->lblTiempo->Name = L"lblTiempo";
			this->lblTiempo->Size = System::Drawing::Size(18, 20);
			this->lblTiempo->TabIndex = 3;
			this->lblTiempo->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(685, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Tiempo: ";
			// 
			// lblPuntos
			// 
			this->lblPuntos->AutoSize = true;
			this->lblPuntos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPuntos->Location = System::Drawing::Point(99, 20);
			this->lblPuntos->Name = L"lblPuntos";
			this->lblPuntos->Size = System::Drawing::Size(18, 20);
			this->lblPuntos->TabIndex = 1;
			this->lblPuntos->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Puntos: ";
			// 
			// timerMain
			// 
			this->timerMain->Enabled = true;
			this->timerMain->Tick += gcnew System::EventHandler(this, &FrmMain::timerMain_Tick);
			// 
			// timerTiempo
			// 
			this->timerTiempo->Enabled = true;
			this->timerTiempo->Interval = 1000;
			this->timerTiempo->Tick += gcnew System::EventHandler(this, &FrmMain::timerTiempo_Tick);
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(839, 504);
			this->Controls->Add(this->panel1);
			this->Name = L"FrmMain";
			this->Text = L"FrmMain";
			this->Load += gcnew System::EventHandler(this, &FrmMain::FrmMain_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmMain::PresionarTecla);
			this->Resize += gcnew System::EventHandler(this, &FrmMain::FrmMain_Resize);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timerMain_Tick(System::Object^ sender, System::EventArgs^ e) {
		//Clear
		buffer->Graphics->Clear(Color::WhiteSmoke);
		//Colision
		controlador->colision(buffer->Graphics);
		//Mover
		controlador->moverTodo(buffer->Graphics);
		//Dibujar
		buffer->Graphics->DrawImage(bmpMapa, 0, 0, panel1->Width * 1, panel1->Height * 1);
		lblPuntos->Text = "" + controlador->getLider()->getPuntos();
		lblTiempo->Text = "" + controlador->getLider()->getTiempo();
		controlador->dibujarTodo(buffer->Graphics, bmpLider, bmpCura, bmpAliado, bmpAgente, bmpHabitante);
		
		if (controlador->getLider()->getTiempo() == 0) {
			timerMain->Enabled = false;
			MessageBox::Show("HAS PERDIDO");
			this->Close();
		}
		else if (controlador->getLider()->getPuntos() >= 100) {
			timerMain->Enabled = false;
			MessageBox::Show("HAS GANADO");
			this->Close();
		}
		else {
			//Render
			buffer->Render(g);
		}
	}
	private: System::Void PresionarTecla(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode)
		{
		case Keys::A: case Keys::Left:
			controlador->getLider()->mover(buffer->Graphics, 'A'); break;
		case Keys::D: case Keys::Right:
			controlador->getLider()->mover(buffer->Graphics, 'D'); break;
		case Keys::W: case Keys::Up:
			controlador->getLider()->mover(buffer->Graphics, 'W'); break;
		case Keys::S: case Keys::Down:
			controlador->getLider()->mover(buffer->Graphics, 'S'); break;
		case Keys::Q:
			controlador->a�adirCura(bmpCura->Width, bmpCura->Height); break;
		case Keys::E:
			controlador->a�adirAliado(bmpAliado->Width / 4, bmpAliado->Height / 4, 2,
				controlador->getLider()->getX(), controlador->getLider()->getY());
		}
	}
	private: System::Void FrmMain_Load(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void FrmMain_Resize(System::Object^ sender, System::EventArgs^ e) {
	panel1->Width = this->Width;
	panel1->Height = this->Height;
	g = panel1->CreateGraphics();
	space = BufferedGraphicsManager::Current;
	buffer = space->Allocate(g, panel1->ClientRectangle);
}
private: System::Void timerTiempo_Tick(System::Object^ sender, System::EventArgs^ e) {
	controlador->getLider()->disminuirTiempo();
}
};
}
