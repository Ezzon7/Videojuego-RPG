#pragma once
#include "Personaje.h"

class Cura : public Personaje {
private:
	
public:
	Cura(int width, int height) :Personaje(width, height) {
		x = rand() % 750 + 50;
		y = rand() % 420 + 30;
		dx = dy = 0;
	}

	~Cura() {}

	void dibujar(Graphics^ g, Bitmap^ bmp) {
		Rectangle sectionShown = Rectangle(idx * width, idy * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 0.05, height * 0.05);
		g->DrawImage(bmp, zoom, sectionShown, GraphicsUnit::Pixel);
	}


};