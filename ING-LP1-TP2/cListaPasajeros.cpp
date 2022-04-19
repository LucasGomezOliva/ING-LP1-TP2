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

}