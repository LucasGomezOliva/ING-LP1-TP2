#include "cPasajero.h"
cPasajero::cPasajero() {
	this->DNI = "";
	this->Nombre = "";
	ListaValijas = new cListaValijas();
}

cPasajero::cPasajero(string DNI, string Nombre){
	this->DNI = DNI;
	this->Nombre = Nombre;
}

cPasajero::~cPasajero() {
	delete ListaValijas;
}

bool cPasajero::AgregarEquipaje(float peso) {
	this->ListaValijas->AgregarValija(peso);
	return true;
}

string cPasajero::to_stringPasajero() {
	return "\tNombre: " + Nombre + "\tDNI: " + DNI + "\tPeso Equipaje" + to_string(ListaValijas->getPesoEquipaje());
}

void cPasajero::imprimir() {
	cout << to_stringPasajero() << endl;
}