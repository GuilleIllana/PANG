#pragma once
#include "Vector2D.h"
#include <stdlib.h>
class Bonus
{
private:
	
	float lado;
	Vector2D p;
	Vector2D v;
	Vector2D a;
	unsigned char red;
	unsigned char green;
	unsigned char blue;
public:
	Bonus();
	virtual ~Bonus();
	void SetSize(float size);
	void SetColor(unsigned char r, unsigned char g, unsigned char b);
	void SetPos(float posx, float posy, float posz);
	float getx();
	float gety();
	float getz();
	void Dibuja();
	void Mueve(float t);
};

