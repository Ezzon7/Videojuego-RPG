#pragma once
#include "Personaje.h"
#include "Lider.h"

class Agente : public Personaje {
private:
	int index;

public:
	Agente(int width, int height, int index) : Personaje(width, height) {
		this->index = index;
		x = rand() % 820 + 5;
		y = rand() % 480 + 5;
		dx = dy = 3;
	}

	~Agente() {}

	void dibujar(Graphics^ g, Bitmap^ bmp) {
		Rectangle sectionShown = Rectangle(idx * width, idy * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 0.8, height * 0.8);
		g->DrawImage(bmp, zoom, sectionShown, GraphicsUnit::Pixel);
	}

	void mover(Graphics^ g, Lider* lider) {
		switch (index)
		{
		case 0: //Horizontal
			if (x + width * 1.0 > g->VisibleClipBounds.Width || x < 0)
				dx *= -1;
			if (dx > 0) {
				idy = 2;
			}
			else {
				idy = 1;
			}
			x += dx;
			break;

		case 1: //Vertical
			if (y + height * 1.0 > g->VisibleClipBounds.Height || y < 0)
				dy *= -1;
			if (dy > 0) {
				idy = 0;
			}
			else {
				idy = 3;
			}
			y += dy;
			break;

		case 2: //Perseguir
			if (x == lider->getX()) {
				x += 0;
			}
			else if (x > lider->getX()) {
				x -= dx;
				idy = 1;
			}
			else if (x < lider->getX()) {
				x += dx;
				idy = 2;
			}

			if (y == lider->getY()) {
				y += 0;
			}
			else if (y > lider->getY()) {
				y -= dy;
				idy = 3;
			}
			else if (y < lider->getY()) {
				y += dy;
				idy = 0;
			}
			break;
		}
		idx++;
		if (idx > 3)idx = 0;
	}

	int getIndex() { return index; }
};