#pragma once
#include "Personaje.h"

class Lider : public Personaje {
private:
	int puntos;
	char direccion;
	int tiempo;

public:
	Lider(int width, int height, int tiempo) : Personaje(width, height) {
		x = 100;
		y = 100;
		dx = dy = 5;
		direccion = 'S';
		puntos = 0;
		this->tiempo = tiempo;
	}

	~Lider() {}

	void dibujar(Graphics^ g, Bitmap^ bmp) {
		Rectangle sectionShown = Rectangle(idx * width, idy * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 0.8, height * 0.8);
		g->DrawImage(bmp, zoom, sectionShown, GraphicsUnit::Pixel);
	}

	void mover(Graphics^ g, char i) {
		switch (i)
		{
		case 'A':
			if (x > 0) {
				x -= dx;
				idy = 1;
				direccion = 'A';
			}
			break;

		case 'D':
			if (x + width * 1.0 < g->VisibleClipBounds.Width) {
				x += dx;
				idy = 2;
				direccion = 'D';
			}
			break;

		case 'W':
			if (y > 0) {
				y -= dy;
				idy = 3;
				direccion = 'W';
			}
			break;

		case 'S':
			if (y + height * 1.0 < g->VisibleClipBounds.Height) {
				y += dy;
				idy = 0;
				direccion = 'S';
			}
		}

		idx++;
		if (idx > 3)idx = 0;
	}

	char getDireccion() { return direccion; }
	
	float getPuntos() { return puntos; }
	void GanarPuntos() { puntos++, puntos++, puntos++, puntos++, puntos++, puntos++, puntos++, puntos++, puntos++, puntos++; }
	void PerderPuntos() { puntos--, puntos--, puntos--, puntos--, puntos--; }


	int getTiempo() { return tiempo; }
	void disminuirTiempo() { tiempo--; }
};