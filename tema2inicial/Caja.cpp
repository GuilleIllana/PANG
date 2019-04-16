#include "Caja.h"
#include <stdlib.h>




Caja::Caja()
{
	suelo.SetColor(0, 100, 0);
	techo.SetColor(0, 100, 0);
	der.SetColor(0, 150, 0);
	izq.SetColor(0, 150, 0);
	suelo.SetPos(-10,-6,0,10,-6,0);
	techo.SetPos(-10,10,0,10,10,0);
	der.SetPos(10,10,0,10,-10,0);
	izq.SetPos(-10,10,0,-10,-10,0);
}

void Caja::Dibuja()
{
	suelo.Dibuja();
	techo.Dibuja();
	izq.Dibuja();
	der.Dibuja();
}

Caja::~Caja()
{
}

