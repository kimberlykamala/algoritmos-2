#include "StdAfx.h"
#include "PapaFrita.h"

PapaFrita::PapaFrita(int precio): Comida(precio)
{
	pelado=false;
}

void PapaFrita::pelar()
{
	pelado=true;
}
void PapaFrita::comer()
{
	cantidadActual-=60;
}
void PapaFrita::cocinar()
{
	cocinado=true;
}
bool PapaFrita::saberSiEstaPelado()
{
	return(pelado);
}
PapaFrita::~PapaFrita(void)
{
}
