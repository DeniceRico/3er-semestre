#include "Burro.h"
#include <iostream>
Burro::Burro(int edad, bool respirar, double tamano_, int peso_):Animal(edad, respirar)
{
    this->peso_=peso_;
    this->tamano_=tamano_;
}
int Burro::getPesoB()
{
    return peso_;
}
double Burro::getTamanoB()
{
    return tamano_;
}
