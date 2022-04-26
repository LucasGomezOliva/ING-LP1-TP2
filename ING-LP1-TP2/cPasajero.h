#pragma once
#include<string>
#include<iostream>
#include"cListaValijas.h"
using namespace std;
class cPasajero
{
private:
	string DNI;
	string Nombre;
	int NumeroVuelo;
	int Asiento;
	cListaValijas* ListaValijas = NULL;
	const float peso_prom = 75;
public:
	cPasajero();
	cPasajero(string DNI, string Nombre, int NumeroVuelo, int Asiento);
	~cPasajero();
	bool AgregarEquipaje(float peso);
	float getPeso();
	int getAsiento();
	string getDNI();
	string getNombre();
	string to_stringPasajero();
	void imprimir();

	void operator + ( float valija );

	void operator - (int CantidadEliminar);

};

