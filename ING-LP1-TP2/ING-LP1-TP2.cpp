// ING-LP1-TP2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <time.h>
#include"cAeropuerto.h"
#include"cPasajero.h"
using namespace std;

int cVuelo::NumeroVuelo = 0;

int main()
{

    cVuelo* Vuelo_001 = new cVuelo("destino", 1, 1, 2000, 12, 30, 1, 1, 2000, 20, 30);
    cVuelo* Vuelo_002 = new cVuelo("destino", 1, 1, 2000, 13, 30, 1, 1, 2000, 21, 30);
    cVuelo* Vuelo_003 = new cVuelo("destino", 1, 1, 2000, 14, 30, 1, 1, 2000, 22, 30);

    Vuelo_001->imprimir();
    Vuelo_002->imprimir();
    Vuelo_003->imprimir();

    cPasajero* Pasaejero_1 = new cPasajero("DNI_0001","Nombre_0001",0);

    Pasaejero_1->AgregarEquipaje(5);
    Pasaejero_1->AgregarEquipaje(10);
    Pasaejero_1->imprimir();

    cAeropuerto* Aeropuerto_1 = new cAeropuerto("Aero");

    delete Pasaejero_1;
    delete Vuelo_001;
    delete Vuelo_002;
    delete Vuelo_003;
    delete Aeropuerto_1;
   
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
