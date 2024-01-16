#include <iostream>
#include "Universidad.h"
#include "Estudiante.h"
#include "Maestro.h"

#include "Universidad.cpp"
#include "Estudiante.cpp"
#include "Maestro.cpp"

using namespace std;

int main()
{
    Universidad udg;
    Estudiante yo;
    Maestro profesor;

 // Imprimir mensajes de la Universidad
    cout << "Bienvenido a la Universidad " << udg.nombre << endl;
    udg.ofrecer_curso();
    udg.admitir_est();

    // Imprimir mensajes del Estudiante
    cout << "Datos del estudiante:" << endl;
    cout << "Nombre: " << yo.nombre << endl;
    cout << "Edad: " << yo.edad << endl;
    cout << "Carrera: " << yo.carrera << endl;

    cout << "Acciones del estudiante:" << endl;
    yo.ir_a_clase();
    yo.hacer_tarea();

    // Imprimir mensajes del Maestro
    cout << "Datos del maestro:" << endl;
    cout << "Nombre: " << profesor.nombre << endl;
    cout << "Edad: " << profesor.edad << endl;
    cout << "Materia: " << profesor.materia << endl;

    cout << "Acciones del maestro:" << endl;
    profesor.dar_clase();
    profesor.dejar_tarea();
    profesor.calificar();





    return 0;
}
