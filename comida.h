#pragma once

class Comida
{
protected:
	int precio;
	int cantidadActual;
	bool cocinado;
public:
	Comida(int );
	~Comida(void);
	virtual void comer();
	virtual void cocinar()=0;
	int getPrecio();
	bool getCocinado();
	int getCantidadActual();
};
