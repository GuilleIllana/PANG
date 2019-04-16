#pragma once
#include "Vector2D.h"
#include <stdlib.h>
class Hombre
{
private:
	float altura;
	Vector2D p;
	Vector2D v;
	Vector2D a;
	unsigned char red;
	unsigned char green;
	unsigned char blue;
public:
    Hombre();
	virtual ~Hombre();
	void Dibuja();
	void Mueve(float t);
	void SetColor(unsigned char r, unsigned char g, unsigned char b);
	void SetPos(float posx, float posy, float posz);
	float getx();
	float gety();
	float getz();
};

