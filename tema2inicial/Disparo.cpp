#include "Disparo.h"
#include <stdlib.h>
#include "glut.h"



Disparo::Disparo() {
	Cal = 0.25f;
	a.y = 0.98f;
	a.x = 0.0f;
}
void Disparo::Dibuja()
{
	glColor3f(red, green, blue);
	glPushMatrix();
	glTranslatef(p.x, p.y, 0);
	glutSolidSphere(Cal, 20, 20);
	glTranslatef(-this->p.x, -this->p.y, -this->p.z);
	glPopMatrix();
	
    
	//Estela
	glColor3f(200, 0, 133);
	glBegin(GL_LINES);
	glVertex2d(p.x, p.y);
	glVertex2d(origen.x, origen.y);
	glTranslatef(-this->p.x, -this->p.y, -this->p.z);
	glEnd();

}

Disparo::~Disparo()
{
}

void Disparo::Mueve(float t) {
	p = p + v * t + a * (0.5f * t * t);
	v = v + a * t;
}

float Disparo::getx() {
	return this->p.x;
}
float Disparo::gety() {
	return this->p.y;
}
float Disparo::getz() {
	return this->p.z;
}

void Disparo::SetColor(unsigned char r, unsigned char g, unsigned char b) {
	this->red = r;
	this->green = g;
	this->blue = b;
}
void Disparo::SetPos(float x, float y, float z) {
	this->p.x = x;
	this->p.y = y;
	this->p.z = z;
	this->origen.x = x;
	this->origen.y = y;
	this->origen.z = z;
}

float Disparo::getox() {
	return this->origen.x;
}
float Disparo::getoy() {
	return this->origen.y;
}
float Disparo::getoz() {
	return this->origen.z;
}