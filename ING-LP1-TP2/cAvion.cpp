#include "cAvion.h"
cAvion::cAvion() {
	string ID = "";
	this->CantidadPasajeros = 0;
	this->PasajerosActuales = 0;
	this->PesoMaximo = 0;
}
cAvion::~cAvion() {

}

bool cAvion::ChequearCargaMaxima() {
	return false;
}

bool cAvion::ChequearCapacidadMaxima() {
	return false;
}
bool cAvion::Verificaciones() {
	if (ChequearCargaMaxima() == true && ChequearCargaMaxima() == true)
		return true;
	return false;
}