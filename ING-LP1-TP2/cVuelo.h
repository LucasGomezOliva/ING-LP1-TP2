#pragma once
using namespace std;
#include<string>
#include"cFecha.h"
#include"cAvion.h"
#include"cPasajero.h"

//TODO separar enum
enum class EstadoVuelo { Arribo, Partida };

class cVuelo
{
private:
	static int NumeroVuelo;
	string ID;
	EstadoVuelo estado;
	cAvion* Avion = NULL;
	cFecha* partida = NULL;
	cFecha* arribo = NULL;
	string destino;

public:
	cVuelo();
	cVuelo(string _destino, int P_dia, int P_mes, int P_anio, int P_hora, int P_minutos, int A_dia, int A_mes, int A_anio, int A_hora, int A_minutos);
	~cVuelo();
	bool AsociarAvion(cAvion* avion);
	void AgregarPasajero(cPasajero* pasajero);
	void CambiarPasajero(string DNI, string asiento);
	void EliminarPasajero(string DNI);
	string getPasajero(string DNI);
	int getNumeroVuelo();
	string getID();
	string to_stringVuelo();
	void imprimir();
};

