#include "Pared.h"
#include <stdlib.h>
#include "glut.h"


Pared::Pared()
{
	red = green = blue = 255;
}
void Pared::Dibuja()
{
	glDisable(GL_LIGHTING);
	glColor3ub(red, green, blue);
	glBegin(GL_POLYGON);
	glVertex3d(this->limite1.x, this->limite1.y, 10);
	glVertex3d(this->limite2.x, this->limite2.y, 10);
	glVertex3d(this->limite2.x, this->limite2.y, -10);
	glVertex3d(this->limite1.x, this->limite1.y, -10);
	glEnd();
	glEnable(GL_LIGHTING);
}

Pared::~Pared()
{
}

void Pared::SetColor(unsigned char r, unsigned char g, unsigned char b) {
	this->red = r;
	this->green = g;
	this->blue = b;
}
void Pared::SetPos(float x1, float y1, float z1, float x2, float y2, float z2) {
	this->limite1.x = x1;
	this->limite1.y = y1;
	this->limite1.z = z1;
	this->limite2.x = x2;
	this->limite2.y = y2;
	this->limite2.z = z2;
}
float Pared::getx1() {
	return this->limite1.x;
}
float Pared::gety1() {
	return this->limite1.y;
}
float Pared::getz1() {
	return this->limite1.z;
}
float Pared::getx2() {
	return this->limite2.x;
}
float Pared::gety2() {
	return this->limite2.y;
}
float Pared::getz2() {
	return this->limite2.z;
}