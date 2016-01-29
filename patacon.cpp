#include "StdAfx.h"
#include "Patacon.h"

Patacon::Patacon(void)
{
	aplastado= false;
}
void Patacon::aplastar()
{
	aplastado= true;
}
int Patacon::getAplastado()
{
	return(aplastado);
}
Patacon::~Patacon(void)
{
}
