#include "Esfera.h"
#include <stdlib.h>
#include "glut.h"

Esfera::Esfera()
{
	red = green = blue = 255; //blanco
	radio = 1.0f;
	a.y = -0.98f;
	a.x = 0.0f;
}

void Esfera::SetColor(unsigned char r, unsigned char g, unsigned char b) {
	red = r;
	green = g;
	blue = b;
}

void Esfera::SetPos(float x, float y, float z) {
	this->p.x = x;
	this->p.y = y;
	this->p.z = z;
}

float Esfera::getRadio() {
	return this->radio;
}

Vector2D Esfera::getPos() {
	return this->p;
}

void Esfera::SetRadio(float r) {
	this->radio = r;
}

void Esfera::Dibuja() {
	glColor3ub(this->red, this->green, this->blue);
	glTranslatef(this->p.x, this->p.y, this->p.z);
	glutSolidSphere(this->radio, 20, 20);
	glTranslatef(-this->p.x, -this->p.y, -this->p.z);
}

void Esfera::Mueve(float t) {
	this->p = p + v * t + a * (0.5f * t * t);
	this->v = v + a * t;
}