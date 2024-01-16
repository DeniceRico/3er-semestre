#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal(int edad, int peso, string raza)
{
    this->edad=edad;
    this->peso=peso;
    this->raza=raza;
}
bool Animal:: comer(bool)
{

}
int Animal::dormir(int)
{

}
string Animal::jugar()
{

}
string Animal::sonido()
{

}
int Animal::getEdad()
{
    return edad;
}
int Animal::getPeso()
{
    return peso;
}
string Animal::getRaza()
{
    return raza;
}

