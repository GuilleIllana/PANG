#pragma once
#include "Vector2D.h"
#include <stdlib.h>

class Esfera {
private: 
	float radio;
	Vector2D p;
	Vector2D v;
	Vector2D a;
public:
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	Esfera();
	//virtual ~Esfera();
	void SetColor(unsigned char r, unsigned char g, unsigned char b);
	void SetPos(float posx, float posy, float posz);
	void SetRadio(float r);
	Vector2D getPos();
	void Dibuja();
	float getRadio();
	void Mueve(float t);

};

