#pragma once
#include "Vector2D.h"
#include <stdlib.h>
#include "glut.h"
class Disparo
{	
private:	
	float Cal;
	Vector2D p;
	Vector2D v;
	Vector2D a;
	Vector2D origen;
	unsigned char red;
	unsigned char green;
	unsigned char blue;
public:
	void SetColor(unsigned char r, unsigned char g, unsigned char b);
	void SetPos(float posx, float posy, float posz);
	float getx();
	float gety();
	float getz();
	float getox();
	float getoy();
	float getoz();
	void Mueve(float t);
	void Dibuja();
	Disparo();
	~Disparo();
};

