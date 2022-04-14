#pragma once
#include<string>
#include<iostream>
//#include"cValija.h"
#include"cListaValijas.h"
using namespace std;
class cPasajero
{
private:
	string DNI;
	string Nombre;
	//numero de vuelo
	//asiento
	cListaValijas* ListaValijas = NULL;
	const int peso_prom = 75;
public:
	cPasajero();
	cPasajero(string DNI, string Nombre);
	~cPasajero();

	bool AgregarEquipaje(float peso);

	string getDNI() { return DNI; };
	string getNombre() { return Nombre; };

	string to_stringPasajero();
	void imprimir();
};

