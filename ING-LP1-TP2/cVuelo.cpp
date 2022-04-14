#include "cVuelo.h"

cVuelo::cVuelo() {
	//NVuelo++;
	this->destino = "";
}

cVuelo::cVuelo(string _destino,int P_dia, int P_mes, int P_anio, int P_hora, int P_minutos, int A_dia, int A_mes, int A_anio, int A_hora, int A_minutos) {
	this->destino = _destino;
	partida = new cFecha(P_dia, P_mes, P_anio, P_hora, P_minutos);
	arribo = new cFecha(A_dia, A_mes, A_anio, A_hora, A_minutos);
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

}
void cVuelo::CambiarPasajero(string DNI, string asiento) {

}
void cVuelo::EliminarPasajero(string DNI){

}

string getPasajero(string DNI) {
	return "Datos Pasajero";
}