#include "Bonus.h"
#include <stdlib.h>
#include "glut.h"



void Bonus::Dibuja()
{
	glPushMatrix();
	glTranslatef(p.x, p.y, p.z);
	glRotatef(30, 1, 1, 1);
	glColor3f(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX,
	rand() / (float)RAND_MAX);   
	glutSolidCube(lado);
	glRotatef(-30, -1, -1, -1);
	glTranslatef(-this->p.x, -this->p.y, -this->p.z);
	glPopMatrix();
}

void Bonus::Mueve(float t) {
	p = p + v * t + a * (0.5f * t * t);
	v = v + a * t;
}

Bonus::~Bonus()
{
}

float Bonus::getx() {
	return this->p.x;
}
float Bonus::gety() {
	return this->p.y;
}
float Bonus::getz() {
	return this->p.z;
}
void Bonus::SetColor(unsigned char r, unsigned char g, unsigned char b) {
	red = r;
	green = g;
	blue = b;
}
void Bonus::SetPos(float x, float y, float z) {
	this->p.x = x;
	this->p.y = y;
	this->p.z = z;
}

void Bonus::SetSize(float size) {
	this->lado = size;
}
Bonus::Bonus() {
	a.y = -0.00098f;
}