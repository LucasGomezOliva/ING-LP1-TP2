#include "cListaAviones.h"
cListaAviones::cListaAviones() {
	this->CantidadAviones = 0;
	this->ArrayAviones = new cAvion * [CantidadMax];
	for (int i = 0; i < CantidadMax; i++)
	{
		ArrayAviones[i] = NULL;
	}
}

cListaAviones::~cListaAviones() {
	if (ArrayAviones != NULL) {
		/*for (int i = 0; i < CantidadVuelos; i++) {
			if (ArrayVuelos[i] != NULL)
				delete ArrayVuelos[i];
		}
		*/
		delete[] ArrayAviones;
	}
}

bool cListaAviones::AgregarAvion(cAvion* avion) {
	if (CantidadAviones == CantidadMax) { return false; }
	int pos = getIndex(avion->getID());
	if (pos >= 0) { return false; }
	this->ArrayAviones[CantidadAviones++] = avion;
	return true;
}
bool cListaAviones::QuitarAvion() {
	//TODO
	return true;
}

int cListaAviones::getIndex(string ID) {
	for (int i = 0; i < CantidadAviones; i++) {
		if (ArrayAviones[i]->getID() == ID)
			return i;
	}
	return -1;
}