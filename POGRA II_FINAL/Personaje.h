#pragma once
#include <iostream>

using namespace System::Drawing;

class Personaje {
protected:
	int x, y;
	int dx, dy;
	int width, height;
	int idx, idy;
	bool visible;

public:
	Personaje(int width, int height) {
		this->width = width;
		this->height = height;
		idx = idy = 0;
		visible = true;
	}

	~Personaje(){}

	virtual void dibujar(Graphics^ g, Bitmap^ bmp){}
	virtual void mover() {}

	int getX() { return x; }
	int getY() { return y; }
	void setX(int v) { x = v; }
	void setY(int v) { y = v; }

	void setVisible(bool v) { visible = v; }
	bool getVisible() { return visible; }

	Rectangle getRectangle() {
		return Rectangle(x, y, width * 0.8, height * 0.8);
	}
};