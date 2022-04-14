#pragma once
#include"cValija.h"
class cListaValijas
{
private:
	const int CantidadMax = 5;
	const float PesoMax = 25;
	int CantidadValijas;
	cValija** ArrayValijas;
	float PesoActual;
public:
	cListaValijas();
	~cListaValijas();
	bool AgregarValija(int peso);
	float getPesoEquipaje() { return PesoActual; };
};

