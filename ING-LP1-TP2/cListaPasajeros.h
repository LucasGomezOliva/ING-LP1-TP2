#pragma once
using namespace std;
#include"cPasajero.h"
class cListaPasajeros
{
private:
	const int CantidadMax = 5;
	int CantidadPasajeros;
	cPasajero** ArrayPasajeros;
public:
	cListaPasajeros();
	~cListaPasajeros();
	void AgregarPasajeros(cPasajero* pasajero);
};

