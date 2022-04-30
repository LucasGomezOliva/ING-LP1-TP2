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

	//Duda clase friend
	friend class cAeropuerto; 
	//Duda clase friend

	cListaVuelos();
	~cListaVuelos();
	bool AgregarVuelo(cVuelo* vuelo);
	bool QuitarVuelo(int NumeroVuelo); //TODO: Revisar correcto funcionamiento
	//void DespegarVuelo();
	int getIndex(int NumeroVuelo);
};

