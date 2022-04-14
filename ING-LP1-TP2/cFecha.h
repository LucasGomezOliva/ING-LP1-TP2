#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
class cFecha
{
private:
	tm fecha;
public:
	cFecha();
	cFecha(int dia, int mes, int anio,int hora,int minutos);
	~cFecha();
	string to_stringFecha();
	void imprimir();
};

