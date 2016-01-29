#pragma once
#include "Comida.h"

class PapaFrita: public Comida
{
	bool pelado;
	 
public:
	PapaFrita(int);
	~PapaFrita(void);
	void pelar();
	void comer();
	void cocinar();
	bool saberSiEstaPelado();
};
