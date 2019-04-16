#pragma once
#include <stdlib.h>
#include "Esfera.h"
#include "Pared.h"
#include "Hombre.h"
#include "Disparo.h"
#include "Caja.h"
#include "Vector2D.h"
#include "Bonus.h"


class Mundo {
private:
	float x_ojo;
	float y_ojo;
	float z_ojo;
	Esfera esfera1, esfera2;
	Caja caja;
	Disparo disparo;
	Bonus bonus;
	Hombre hombre;
	Pared plataforma;

public:
	void set_pov(float x, float y, float z);
	float get_x_ojo();
	float get_y_ojo();
	float get_z_ojo();
	void Inicializa();
	void tecla(unsigned char key);
	int Distanciaes();
	void Mueve(float t);
	void Dibuja();

};

