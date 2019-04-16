#pragma once
#include "Vector2D.h"
#include "Pared.h"
#include <stdlib.h>

class Caja
{
private:

	Pared suelo;
	Pared techo;
	Pared izq;
	Pared der;
public:
	void Dibuja();
	Caja();
	virtual ~Caja();
};

