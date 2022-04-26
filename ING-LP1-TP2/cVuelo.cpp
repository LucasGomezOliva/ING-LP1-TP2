#include "cVuelo.h"

cVuelo::cVuelo() {
	this->NumeroVuelo++;
	this->ID = to_string(NumeroVuelo);
	this->destino = "";
	this->estado = EstadoVuelo::Partida;
}

cVuelo::cVuelo(string _destino,int P_dia, int P_mes, int P_anio, int P_hora, int P_minutos, int A_dia, int A_mes, int A_anio, int A_hora, int A_minutos,EstadoVuelo Estado) {
	this->NumeroVuelo++;
	this->ID = to_string(NumeroVuelo);
	this->estado = Estado;
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
	//Avion->AgregarPasajero(pasajero);
	//Clase friend
	Avion->ListaPasajeros->AgregarPasajeros(pasajero);

}
void cVuelo::CambiarPasajero(string DNI, cVuelo* NuevoVuelo) {

}
void cVuelo::EliminarPasajero(string DNI){
	//Avion->ListaPasajeros->QuitarPasajero(DNI);
	//Clase friend
	Avion->ListaPasajeros->QuitarPasajero(DNI);
}

cPasajero* cVuelo::getPasajero(string DNI) {
	//return Avion->getPasajero(DNI)->to_stringPasajero();

	return Avion->ListaPasajeros->getPasajero(DNI);
}

int cVuelo::getNumeroVuelo() {
	return NumeroVuelo;
}

int cVuelo::getCantidadPasajerosVuelo() {
	return Avion->getCantidadPasajeros();
}

string cVuelo::getID() {
	return ID;
}

cAvion* cVuelo::getAvion() {
	return Avion;
}

EstadoVuelo cVuelo::getEstadoVuelo() {
	return estado;
}

string cVuelo::to_stringVuelo() {
	string stringestado;
	if (this->estado == EstadoVuelo::Arribo) {stringestado = "Arribo";}
	else { stringestado = "Partida"; }
	return "Numero de vuelo:" + getID() + "\n\tPartida: " + partida->to_stringFecha() + "\n\tArribo: " + arribo->to_stringFecha() + "\n\tEstado:" + stringestado;
}
void cVuelo::imprimir() {
	cout << to_stringVuelo() << endl;
}