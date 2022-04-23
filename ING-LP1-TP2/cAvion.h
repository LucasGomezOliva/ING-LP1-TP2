#pragma once
using namespace std;
#include<string>
#include "cListaPasajeros.h"
#include"cPasajero.h"
class cVuelo;
class cAvion
{
private:
	string ID;
	const int Tripulacion = 4;
	const int CapacidadPasajeros = 30;
	const float PesoMaximo = 500;
	cListaPasajeros* ListaPasajeros;
public:
	friend cVuelo;
	cAvion();
	cAvion(string ID);
	~cAvion();
	float CalcularPeso();
	bool AgregarPasajero(cPasajero* pasajero);//no se usa
	bool BajaPasajero(string DNI);
	bool ChequearCargaMaxima();
	bool ChequearCapacidadMaxima();
	bool Verificaciones();
	void Despegar();
	void Aterrizar();
	cPasajero* getPasajero(string DNI);
	string getID();
};

