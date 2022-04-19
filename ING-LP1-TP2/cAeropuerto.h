#pragma once
#include<string>
#include<iostream>
#include"cListaVuelos.h"
#include"cListaAviones.h"
using namespace std;
class cAeropuerto
{
private:
	string ID;
	//const static int CapacidadHangar = 10;
	cListaVuelos* ListaVuelos;
	cListaAviones* ListaAviones;

public:
	cAeropuerto();
	cAeropuerto(string ID);
	~cAeropuerto();
	void permiso();
};

