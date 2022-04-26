#include "cAeropuerto.h"

cAeropuerto::cAeropuerto() {
	this->ID = "";
	this->PasajerosDia = 0;
	this->ListaVuelos = new cListaVuelos();
	this->ListaAviones = new cListaAviones();
}

cAeropuerto::cAeropuerto(string ID) {
	this->ID = ID;
	this->PasajerosDia = 0;
	this->ListaVuelos = new cListaVuelos();
	this->ListaAviones = new cListaAviones();
}

cAeropuerto::~cAeropuerto() {
	delete ListaAviones;
}

cListaVuelos* cAeropuerto::getListaVuelos() {
	return ListaVuelos;
}

cListaAviones* cAeropuerto::getListaAviones() {
	return ListaAviones;
}

//void cAeropuerto::Despegue(cVuelo* vuelo) {
void cAeropuerto::Despegue() {

	//Revisa la lista de vuelos y despegan automaticamente los vuelos si son Partida quitandolo de la lista de avion y de vuelos

	for (int i = 0; i < ListaVuelos->CantidadMax; i++)
	{
		if (ListaVuelos->ArrayVuelos[i] != NULL) {
			if (ListaVuelos->ArrayVuelos[i]->getEstadoVuelo() == EstadoVuelo::Partida && PermisoDespegar(i) == true) {
				PasajerosDia = PasajerosDia + ListaVuelos->ArrayVuelos[i]->getCantidadPasajerosVuelo();
				ListaAviones->QuitarAvion(ListaVuelos->ArrayVuelos[i]->getAvion());
				ListaVuelos->QuitarVuelo(ListaVuelos->ArrayVuelos[i]->getNumeroVuelo());
				
			}
		}
	}
	/* Pasando como parametro el vuelo que va a despegar
	ListaVuelos->QuitarVuelo(vuelo->getNumeroVuelo());
	ListaAviones->QuitarAvion(vuelo->getAvion());
	PasajerosDia = PasajerosDia + vuelo->getCantidadPasajerosVuelo();
	*/
}

void cAeropuerto::Aterrizaje(cVuelo* vuelo) {
	// Pasando como parametro el vuelo que va a aterrizar
	
	if (PermisoAterrizar() == true)
	{
		PasajerosDia = PasajerosDia + vuelo->getCantidadPasajerosVuelo();
		ListaAviones->AgregarAvion(vuelo->getAvion());

	}
}

bool cAeropuerto::PermisoDespegar(int pos) {
	if (ListaVuelos->ArrayVuelos[pos]->getAvion()->Despegar() == true) return true;
	else return false;
}

bool cAeropuerto::PermisoAterrizar()
{
	if (ListaAviones->getCantidadAviones() < ListaAviones->getCapacidadMaximaHangar()) return true;
	else return false;
}
