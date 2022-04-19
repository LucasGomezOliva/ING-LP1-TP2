#include "cAvion.h"
cAvion::cAvion() {
	this->ID = "";
	this->CantidadPasajeros = 0;
	this->PasajerosActuales = 0;
	this->PesoMaximo = 0;
}
cAvion::~cAvion() {

}

bool cAvion::ChequearCargaMaxima() {
	//Implementacion
	return false;
}

bool cAvion::ChequearCapacidadMaxima() {
	//Implementacion
	return false;
}
bool cAvion::Verificaciones() {
	//Implementacion
	if (ChequearCargaMaxima() == true && ChequearCapacidadMaxima() == true)
		return true;
	return false;
}

int cAvion::CalcularPeso(){
	//Implementacion
	return 4;
}
bool cAvion::AgregarPasajero(cPasajero* pasajero) {
	//Implementacion
	return true;
}
bool cAvion::BajaPasajero() {
	//Implementacion
	return true;
}