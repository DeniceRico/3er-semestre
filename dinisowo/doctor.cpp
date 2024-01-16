#include "doctor.h"
#include <iostream>

using namespace std;

Doctor::Doctor()
{
        years=0;
        especialidad="";
        clinica="";
        telefono="";
        nombre="";
}
Doctor::Doctor(string nombre, int years, string especialidad)
{
    this->nombre=nombre;
    this->years=years;
    this->especialidad=especialidad;
}

Doctor::Doctor(string telefono)
{
    this->telefono=telefono;
}
void Doctor::setYears(int edad_)
{
 years=edad_;

}
int Doctor::getYears(void)
{
    return years;
}
void Doctor::setEspecialidad(string especialidad_)
{
    especialidad=especialidad_;
}

string Doctor:: getEspecialidad(void)
{
    return especialidad;
}

void Doctor::setClinica(string clinica_)
{
    clinica=clinica_;
}

string Doctor::getClinica(void)
{
    return clinica;
}
void Doctor::setTelefono(string telefono_)
 {
     telefono=telefono_;
 }
string Doctor::getTelefono(void)
{
    return telefono;
}

void Doctor::setNombre(string nombre_)
{
    nombre=nombre_;
}
string Doctor::getNombre(void)
{
    return nombre;
}


