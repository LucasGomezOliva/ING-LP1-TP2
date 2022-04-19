#pragma once
using namespace std;
#include<string>
#include "cListaPasajeros.h"
#include"cPasajero.h"

class cAvion
{
private:
	string ID;
	int CantidadPasajeros;
	int PasajerosActuales;
	int PesoMaximo;
	cListaPasajeros* ListaPasajeros = NULL;
public:
	cAvion();
	~cAvion();
	int CalcularPeso();
	bool AgregarPasajero(cPasajero* pasajero);
	bool BajaPasajero();
	bool ChequearCargaMaxima();
	bool ChequearCapacidadMaxima();
	bool Verificaciones();
};

