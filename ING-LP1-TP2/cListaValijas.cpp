#include "cListaValijas.h"

cListaValijas::cListaValijas(){
	this-> PesoActual = 0;
	this->CantidadValijas = 0;
	this->ArrayValijas = new cValija * [CantidadMax];
	for (int i = 0; i < CantidadMax; i++)
	{
		ArrayValijas[i] = NULL;
	}
}

cListaValijas::~cListaValijas() {
	if (ArrayValijas != NULL) {
		for (int i = 0; i < CantidadValijas; i++) {
			if (ArrayValijas[i] != NULL)
				delete ArrayValijas[i];
		}
		delete[] ArrayValijas;
	}
}

bool cListaValijas::AgregarValija(float peso) {
	if ((CantidadValijas == CantidadMax) || (PesoMax <= (PesoActual + peso))) {
		//throw new exception("error");

		return false;
	}
	this->ArrayValijas[CantidadValijas++] = new cValija(peso);
	this->PesoActual = PesoActual + peso;
	return true;
}

bool cListaValijas::EliminarValija(int CantidadEliminar) { ///Revisar para operador - valija
	//int cont = 0;
	int pos = CantidadValijas - CantidadEliminar;
	/*if (CantidadEliminar == CantidadValijas) {
		for (int i = 0;i < CantidadEliminar;i++) {
			if (ArrayValijas[i] != NULL) {
				PesoActual = PesoActual - ArrayValijas[i]->getPeso();
				delete ArrayValijas[i];
				CantidadValijas--;
			}
		}
	}*/
	if (CantidadEliminar <= CantidadValijas && CantidadEliminar > 0) {
			for (int i = pos; i < CantidadValijas; i++) {
				if (ArrayValijas[i] != NULL) {
					PesoActual = PesoActual - ArrayValijas[i]->getPeso();
					delete ArrayValijas[i];
					//ArrayValijas[i] = ArrayValijas[i + 1];
					//cont++;
				}
			}
			CantidadValijas = CantidadValijas - CantidadEliminar;
		return true;
	}
	return false;


}