#pragma once
#include<string>
#include<iostream>
#include "cListaVuelos.h"
using namespace std;
class cAeropuerto
{
private:
	string ID;
	const static int CapacidadHangar = 10;
	cListaVuelos* listaVuelos = NULL;
	//lista aviones en el aeropuerto

public:
	cAeropuerto();
	~cAeropuerto();
	void permiso();
};

