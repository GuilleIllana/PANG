#include "Hombre.h"
#include <stdlib.h>
#include "glut.h"

Hombre::Hombre() {
	altura = 1.8f;
	a = 0;
}


Hombre::~Hombre()
{
}

void Hombre::Dibuja() {
	glPushMatrix();
	glTranslatef(p.x, p.y, p.z);
	glColor3f(1.0f, 0.0f, 0.0f);
	glutSolidSphere(altura, 20, 20);
	glTranslatef(-this->p.x, -this->p.y, -this->p.z);
	glPopMatrix();
	

}
void Hombre::Mueve(float t) {
	p = p + v * t + a * (0.5f * t * t);
	v = v + a * t;
}
float Hombre::getx() {
	return this->p.x;
}
float Hombre::gety() {
	return this->p.y;
}
float Hombre::getz() {
	return this->p.z;
}

void Hombre::SetColor(unsigned char r, unsigned char g, unsigned char b) {
	red = r;
	green = g;
	blue = b;
}

void Hombre::SetPos(float x, float y, float z) {
	this->p.x = x;
	this->p.y = y;
	this->p.z = z;
}