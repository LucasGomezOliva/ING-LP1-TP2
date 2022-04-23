#include "cPasajero.h"
cPasajero::cPasajero() {
	this->DNI = "";
	this->Nombre = "";
	this->Asiento = 0;
	this->ListaValijas = new cListaValijas();
}

cPasajero::cPasajero(string DNI, string Nombre,int Asiento){
	this->DNI = DNI;
	this->Nombre = Nombre;
	this->Asiento = Asiento;
	this->ListaValijas = new cListaValijas();
}

cPasajero::~cPasajero() {
	delete ListaValijas;
}

bool cPasajero::AgregarEquipaje(float peso) {
	this->ListaValijas->AgregarValija(peso);
	return true;
}

float cPasajero::getPeso() {
	float PesoPasajeroConEquipaje = (ListaValijas->getPesoEquipaje()) + peso_prom;
	return PesoPasajeroConEquipaje;
}

int cPasajero::getAsiento() {
	return Asiento;
}

string cPasajero::getDNI() { 
	return DNI; 
}
string cPasajero::getNombre() {
	return Nombre; 
}

string cPasajero::to_stringPasajero() {
	return "\tNombre: " + Nombre + "\tDNI: " + DNI + "\tPeso Equipaje: " + to_string(ListaValijas->getPesoEquipaje()) + "\tPeso Pasajero+Equipaje: " + to_string(getPeso());
}

void cPasajero::imprimir() {
	cout << to_stringPasajero() << endl;
}

void cPasajero::operator+ ( float valija) {
	AgregarEquipaje(valija);
}

void cPasajero::operator-( int CantidadEliminar) {
	ListaValijas->EliminarValija(CantidadEliminar);
}