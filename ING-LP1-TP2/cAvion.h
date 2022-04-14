#pragma once
using namespace std;
#include<string>

class cAvion
{
private:
	string ID;
	int CantidadPasajeros;
	int PasajerosActuales;
	int PesoMaximo;
public:
	cAvion();
	~cAvion();
	int CalcularPeso();
	bool ChequearCargaMaxima();
	bool ChequearCapacidadMaxima();
	bool Verificaciones();
};

