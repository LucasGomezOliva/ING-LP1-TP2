#pragma once
#include "cVuelo.h"
using namespace std;
class cListaVuelos
{
private:
	const int CantidadMax = 10;
	int CantidadVuelos;
	cVuelo** ArrayVuelos;
public:
	cListaVuelos();
	~cListaVuelos();
	bool AgregarVuelo(cVuelo* vuelo);
	int getIndex(int NumeroVuelo);
};

