#pragma once
#include<string>
#include<iostream>
#include"cListaVuelos.h"
#include"cListaAviones.h"
using namespace std;
//class cListaVuelos;
class cAeropuerto
{
private:
	string ID;
	cListaVuelos* ListaVuelos;
	cListaAviones* ListaAviones;
	int PasajerosDia;
public:
	friend cVuelo;
	cAeropuerto();
	cAeropuerto(string ID);
	~cAeropuerto();
	cListaVuelos* getListaVuelos();
	cListaAviones* getListaAviones();

	//void Despegue(cVuelo* vuelo);

	void Despegue();
	void Aterrizaje();

	void PermisoDespegar();
	
};

