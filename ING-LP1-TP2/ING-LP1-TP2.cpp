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

    cAvion* Avion_001 = new cAvion();

    cVuelo* Vuelo_001 = new cVuelo("destino", 1, 1, 2000, 12, 30, 1, 1, 2000, 20, 30, EstadoVuelo::Partida);
    //cVuelo* Vuelo_002 = new cVuelo("destino", 1, 1, 2000, 13, 30, 1, 1, 2000, 21, 30, EstadoVuelo::Arribo);
    //cVuelo* Vuelo_003 = new cVuelo("destino", 1, 1, 2000, 14, 30, 1, 1, 2000, 22, 30, EstadoVuelo::Partida);

    Vuelo_001->AsociarAvion(Avion_001);

    Vuelo_001->imprimir();

    cPasajero* Pasaejero_1 = new cPasajero("DNI_0001", "Nombre_0001", 0);
    cPasajero* Pasaejero_2 = new cPasajero("DNI_0002", "Nombre_0002", 1);
    cPasajero* Pasaejero_3 = new cPasajero("DNI_0003", "Nombre_0003", 2);

    Pasaejero_1->AgregarEquipaje(5);
    Pasaejero_1->AgregarEquipaje(10);
   
    
    //Pasaejero_2->AgregarEquipaje(5);
    //Pasaejero_2->AgregarEquipaje(10);

    *(Pasaejero_2) + 5;
    *(Pasaejero_2) + 10;

    Pasaejero_3->AgregarEquipaje(5);
    Pasaejero_3->AgregarEquipaje(10);

    Pasaejero_1->imprimir();
    Pasaejero_2->imprimir();
    Pasaejero_3->imprimir();

    //*(Pasaejero_2)-2;

    Pasaejero_2->imprimir();

    Vuelo_001->AgregarPasajero(Pasaejero_1);
    Vuelo_001->AgregarPasajero(Pasaejero_2);
    Vuelo_001->AgregarPasajero(Pasaejero_3);

    

   // cAeropuerto* Aeropuerto_1 = new cAeropuerto("Aero");

    delete Pasaejero_1;
    delete Pasaejero_2;
    delete Pasaejero_3;

    delete Avion_001;

    delete Vuelo_001;
    //delete Vuelo_002;
    //delete Vuelo_003;
    //delete Aeropuerto_1;
   
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
