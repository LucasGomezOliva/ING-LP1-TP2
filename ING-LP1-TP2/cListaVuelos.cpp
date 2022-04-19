#include "cListaVuelos.h"

cListaVuelos::cListaVuelos(){
	this->CantidadVuelos = 0;
	this->ArrayVuelos = new cVuelo * [CantidadMax];
	for (int i = 0; i < CantidadMax; i++)
	{
		ArrayVuelos[i] = NULL;
	}
}

cListaVuelos::~cListaVuelos() {
	if (ArrayVuelos != NULL) {
		/*for (int i = 0; i < CantidadVuelos; i++) {
			if (ArrayVuelos[i] != NULL)
				delete ArrayVuelos[i];
		}
		*/
		delete[] ArrayVuelos;
	}
}

bool cListaVuelos::AgregarVuelo(cVuelo* vuelo) {
	if (CantidadVuelos == CantidadMax) { return false; }
	int pos = getIndex(vuelo->getNumeroVuelo());
	if (pos >= 0) { return false; }
	this->ArrayVuelos[CantidadVuelos++] = vuelo;
	return true;
}

int cListaVuelos::getIndex(int NumeroVuelo) {
	for (int i = 0; i < CantidadVuelos; i++) {
		if (ArrayVuelos[i]->getNumeroVuelo() == NumeroVuelo)
			return i;
	}
	return -1;
}