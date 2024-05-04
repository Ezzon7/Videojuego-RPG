#pragma once
#include "Lider.h"
#include "Cura.h"
#include "Aliado.h"
#include "Agente.h"
#include "Habitante.h"
#include <vector>

using namespace std;
using namespace System::Media;

class Controlador {
private:
	Lider* lider;
	vector<Cura*>pastillas;
	vector<Aliado*>aliados;
	vector<Agente*>agentes;
	vector<Habitante*>habitantes;
	int nhabitantes;
	int nagentes;
	int naliados;
	int tiempo;

public:
	Controlador(Bitmap^ bmpLider, Bitmap^ bmpCura, Bitmap^ bmpAliado, int naliados, Bitmap^ bmpAgente, int nagentes, Bitmap^ bmpHabitante, int nhabitantes, int tiempo){
		lider = new Lider(bmpLider->Width / 4, bmpLider->Height / 4, tiempo);
		for (int i = 0; i < nagentes; i++) {
			agentes.push_back(new Agente(bmpAgente->Width / 4, bmpAgente->Height / 4, rand() % 2));
			//agentes.push_back(new Agente(bmpAgente->Width / 4, bmpAgente->Height / 4, 1));
			//agentes.push_back(new Agente(bmpAgente->Width / 4, bmpAgente->Height / 4, 2));
		}

		for (int j = 0; j < nhabitantes; j++) {
			habitantes.push_back(new Habitante(bmpHabitante->Width / 4, bmpHabitante->Height / 4, 0));
		}

		for (int k = 0; k < naliados; k++) {
			aliados.push_back(new Aliado(bmpAliado->Width / 4, bmpAliado->Height / 4, 2, getLider()->getX(), getLider()->getY()));
		}

		pastillas.push_back(new Cura(bmpCura->Width, bmpCura->Height));
		
	}

	~Controlador() {}

	void añadirCura(int width, int height) {
		Cura* p = new Cura(width, height);
		pastillas.push_back(p);
	}

	void añadirAliado(int width, int height, int index, int x, int y) {
		Aliado* e = new Aliado(width, height, index, x, y);
		aliados.push_back(e);
	}

	void dibujarTodo(Graphics^ g, Bitmap^ bmpLider, Bitmap^ bmpCura, Bitmap^ bmpAliado, Bitmap^ bmpAgente, Bitmap^ bmpHabitante) {
		for each (Cura * p in pastillas) {
			p->dibujar(g, bmpCura);
		}

		for each (Aliado * e in aliados) {
			e->dibujar(g, bmpAliado);
		}

		for each (Agente * a in agentes) {
			a->dibujar(g, bmpAgente);
		}

		for each (Habitante * h in habitantes) {
			h->dibujar(g, bmpHabitante);
		}

		lider->dibujar(g, bmpLider);
	}

	void moverTodo(Graphics^ g) {
		for each (Aliado * e in aliados) {
			e->mover(g, lider);
		}

		for each (Agente * a in agentes) {
			a->mover(g, lider);
		}

		for each (Habitante * h in habitantes) {
			h->mover(g, lider);
		}
	}

	Lider* getLider() { return lider; }

	void colision(Graphics^ g) {
		//Verificacion

		for (int i = 0; i < aliados.size(); i++) {
			for (int j = 0; j < pastillas.size(); j++) {
				if (pastillas[j]->getRectangle().IntersectsWith(aliados[i]->getRectangle())) {
					lider->GanarPuntos();
					pastillas[j]->setVisible(false);	
				}
			}
		}

		for (int i = 0; i < aliados.size(); i++) {
			for (int j = 0; j < agentes.size(); j++) {
				if (aliados[i]->getRectangle().IntersectsWith(agentes[j]->getRectangle())) {
					aliados[i]->setVisible(false);
					lider->PerderPuntos();
				}
			}
		}

		//Eliminacion
		for (int i = 0; i < pastillas.size(); i++) {
			if (!pastillas[i]->getVisible()) {
				pastillas.erase(pastillas.begin() + i);
			}
		}

		for (int i = 0; i < aliados.size(); i++) {
			if (!aliados[i]->getVisible()) {
				aliados.erase(aliados.begin() + i);
			}
		}
	}

	int getTiempo() { return tiempo; }
	void disminuirTiempo() { tiempo--; }
};