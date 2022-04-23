#include "cListaPasajeros.h"
cListaPasajeros::cListaPasajeros() {
	this->CantidadPasajeros = 0;
	this->ArrayPasajeros = new cPasajero * [CantidadMax];
	for (int i = 0; i < CantidadMax; i++)
	{
		ArrayPasajeros[i] = NULL;
	}
}

cListaPasajeros::~cListaPasajeros() {
	if (ArrayPasajeros != NULL) {
		for (int i = 0; i < CantidadPasajeros; i++) {
			//if (ArrayPasajeros[i] != NULL)

				///delete ArrayPasajeros[i];
		}
		delete[] ArrayPasajeros;
	}
}
void cListaPasajeros::AgregarPasajeros(cPasajero* pasajero) {
	if (ArrayPasajeros[pasajero->getAsiento()] == NULL) {
		ArrayPasajeros[pasajero->getAsiento()] = pasajero;
		CantidadPasajeros++;
	}
}

void cListaPasajeros::QuitarPasajero(string DNI) {
	int pos = getIndex(DNI);
	if (pos >= 0) {
		ArrayPasajeros[pos] = NULL;
	}
}

float cListaPasajeros::CalcularPeso() {
	float PesoTotal = 0;
	for (int i = 0; i < CantidadMax; i++) {
		if (ArrayPasajeros[i] != NULL) {
			PesoTotal = PesoTotal + ArrayPasajeros[i]->getPeso();
		}
	}
	return PesoTotal;
}

int cListaPasajeros::getCantidadPasajeros() {
	return CantidadPasajeros;
}

int cListaPasajeros::getIndex(string DNI) {
	for (int i = 0; i < CantidadMax; i++) {
		if (ArrayPasajeros[i]->getDNI() == DNI)
			return i;
	}
	return -1;
}

cPasajero* cListaPasajeros::getPasajero(string DNI) {
	int pos = getIndex(DNI);
	if (pos >= 0) {
		return ArrayPasajeros[pos];
	}
}