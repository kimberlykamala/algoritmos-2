#include "StdAfx.h"
#include "Comida.h"4
Comida::Comida(int precio)
{
	this->precio=precio;
	cantidadActual=100;
	cocinado=false;
}

int Comida::getCantidadActual()
{
	return(cantidadActual);
}
bool Comida::getCocinado()
{
	return(cocinado);
}
int Comida::getPrecio()
{
	return(precio);
}
void Comida::comer()
{
	cantidadActual-=50;
}
Comida::~Comida(void)
{
}
