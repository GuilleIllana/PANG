#pragma once
#include <stdlib.h>
#include "glut.h"
#include "Vector2D.h"
class Pared
{
private:
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	Vector2D limite1;
	Vector2D limite2;
public:
	Pared();
	virtual ~Pared();
	void Dibuja();
	void SetColor(unsigned char r, unsigned char g, unsigned char b);
	void SetPos(float x1, float y1, float z1, float x2, float y2, float z2);
	float getx1();
	float gety1();
	float getz1();
	float getx2();
	float gety2();
	float getz2();
};

