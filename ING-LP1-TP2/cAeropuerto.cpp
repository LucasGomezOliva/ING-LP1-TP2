#include "cAeropuerto.h"

cAeropuerto::cAeropuerto() {
	this->ID = "";
	this->ListaVuelos = new cListaVuelos();
	this->ListaAviones = new cListaAviones();
}

cAeropuerto::cAeropuerto(string ID) {
	this->ID = ID;
	this->ListaVuelos = new cListaVuelos();
	this->ListaAviones = new cListaAviones();
}

cAeropuerto::~cAeropuerto() {
	delete ListaAviones;
}

void cAeropuerto::permiso() {

}