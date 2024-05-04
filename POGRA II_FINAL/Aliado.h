#pragma once
#include "Personaje.h"
#include "Lider.h"

class Aliado : public Personaje {
private:
	int index;

public:
	Aliado(int width, int height, int index, int x, int y) : Personaje(width, height) {
		this->index = index;
		this->x = x;
		this->y = y;
		dx = dy = 10;
	}

	~Aliado() {}

	void dibujar(Graphics^ g, Bitmap^ bmp) {
		Rectangle sectionShown = Rectangle(idx * width, idy * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 0.8, height * 0.8);
		g->DrawImage(bmp, zoom, sectionShown, GraphicsUnit::Pixel);
	}

	void mover(Graphics^ g, Lider* lider) {
		switch (index)
		{
		case 2:
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