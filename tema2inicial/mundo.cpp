#include <stdlib.h>
#include "mundo.h"
#include "esfera.h"
#include "Hombre.h"
#include "Disparo.h"
#include <math.h>


void Mundo::set_pov(float x, float y, float z) {
	this->x_ojo = x;
	this->y_ojo = y;
	this->z_ojo = z;
}

//Mundo mundo;
void Mundo::Inicializa() {
	set_pov(0, 7.5, 30);
	esfera1.SetColor(255, 255, 255);
	esfera1.SetPos(2.0f, 4.0f, 0.0f);
	esfera1.SetRadio(2.0f);
	bonus.SetPos(5.0f, 0.0f, 0.0f);
	disparo.SetPos(5.0f, 0.0f, 0.0f);
	disparo.SetColor(0, 0, 255);
	plataforma.SetPos(-5.0f, 7.0f, 0.0f, 5.0f, 7.0f, 0.0f);
	plataforma.SetColor(255, 255, 255);
	bonus.SetSize(5.0f);
	
}

void Mundo::Dibuja() {
	esfera1.Dibuja();
	caja.Dibuja();
	hombre.Dibuja();
	disparo.Dibuja();
	plataforma.Dibuja();
	bonus.Dibuja();
 }

void Mundo::Mueve(float t) {
	hombre.Mueve(t);
	esfera1.Mueve(t);
	bonus.Mueve(t);
	disparo.Mueve(t);
}

void Mundo::tecla(unsigned char key) {
	
	
	}
float Mundo::get_x_ojo() {
	return this->x_ojo;
}
float  Mundo::get_y_ojo() {
	return this->y_ojo;
}
float Mundo::get_z_ojo() {
	return this->z_ojo;
}
int Mundo::Distanciaes() {
	/*int i = 0, j = 1;
	float delta_x = esfera1.getx() - esfera2.getx();
	float delta_y = esfera1.gety() - esfera2.gety();
	float delta_z = esfera1.getz() - esfera2.getz();
	float norma = delta_x * delta_x + delta_y * delta_y + delta_z * delta_z;
	float dist = sqrt(norma);
	dist -= (esfera1.getRadio() + esfera2.getRadio());
	if (dist < 0) {
		return i;
	}
	else return j;
	return dist;*/
	return 0;
}


