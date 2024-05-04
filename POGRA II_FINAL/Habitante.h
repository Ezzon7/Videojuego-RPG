#pragma once
#include "Personaje.h"
#include "Lider.h"

class Habitante : public Personaje {
private:
	int index;

public:
	Habitante(int width, int height, int index) : Personaje(width, height) {
		this->index = index;
		x = rand() % 400 + 20;
		y = rand() % 250 + 10;
		dx = dy = 0;
	}

	~Habitante() {}

	void dibujar(Graphics^ g, Bitmap^ bmp) {
		Rectangle sectionShown = Rectangle(idx * width, idy * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 0.8, height * 0.8);
		g->DrawImage(bmp, zoom, sectionShown, GraphicsUnit::Pixel);
	}

	void mover(Graphics^ g, Lider* lider) {
		switch (index)
		{
		case 0:
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
			else if (x == lider->getX() && x > lider->getX()) {
				idy = 1;
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
			else if (y == lider->getY() && x < lider->getX()) {
				idy = 2;
			}

			break;
		}
	}

	int getIndex() { return index; }
};