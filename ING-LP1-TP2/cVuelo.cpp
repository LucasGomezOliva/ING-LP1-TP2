#include "cVuelo.h"

cVuelo::cVuelo() {
	this->NumeroVuelo++;
	this->ID = to_string(NumeroVuelo);
	this->destino = "";
	this->estado = EstadoVuelo::Partida;
}

cVuelo::cVuelo(string _destino,int P_dia, int P_mes, int P_anio, int P_hora, int P_minutos, int A_dia, int A_mes, int A_anio, int A_hora, int A_minutos) {
	this->NumeroVuelo++;
	this->ID = to_string(NumeroVuelo);
	this->destino = _destino;
	this->partida = new cFecha(P_dia, P_mes, P_anio, P_hora, P_minutos);
	this->arribo = new cFecha(A_dia, A_mes, A_anio, A_hora, A_minutos);
}
cVuelo::~cVuelo() {
	delete partida;
	delete arribo;
}

bool cVuelo::AsociarAvion(cAvion* avion) {
	this->Avion = avion;
	return true;
}

void cVuelo::AgregarPasajero(cPasajero* pasajero) {
	Avion->AgregarPasajero(pasajero);
}
void cVuelo::CambiarPasajero(string DNI, string asiento) {
	//Implementación
}
void cVuelo::EliminarPasajero(string DNI){
	Avion->BajaPasajero(DNI);
}

string cVuelo::getPasajero(string DNI) {
	return Avion->getPasajero(DNI)->to_stringPasajero();
}

int cVuelo::getNumeroVuelo() {
	return NumeroVuelo;
}

string cVuelo::getID() {
	return ID;
}

string cVuelo::to_stringVuelo() {
	return "Numero de vuelo:" + getID() + "\n\tPartida: " + partida->to_stringFecha() + "\n\tArribo: " + arribo->to_stringFecha();
}
void cVuelo::imprimir() {
	cout << to_stringVuelo() << endl;
}