#pragma once
#include"cAvion.h"
using namespace std;
class cListaAviones
{
private:
	const int CantidadMax = 10;
	int CantidadAviones;
	cAvion** ArrayAviones;
public:
	//friend class cAeropuerto;
	cListaAviones();
	~cListaAviones();
	bool AgregarAvion(cAvion* avion);
	bool QuitarAvion(cAvion* avion);
	int getIndex(string ID);
};

