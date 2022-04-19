#pragma once
using namespace std;
#include<string>
#include "cListaPasajeros.h"
#include"cPasajero.h"

class cAvion
{
private:
	string ID;
	const int Tripulacion = 4;
	const int CapacidadPasajeros = 30;
	const float PesoMaximo = 500;
	cListaPasajeros* ListaPasajeros;
public:
	cAvion();
	cAvion(string ID);
	~cAvion();
	float CalcularPeso();
	bool AgregarPasajero(cPasajero* pasajero);
	bool BajaPasajero(string DNI);
	bool ChequearCargaMaxima();
	bool ChequearCapacidadMaxima();
	bool Verificaciones();
	void Despegar();
	void Aterrizar();
	cPasajero* getPasajero(string DNI);
	string getID();
};

