#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(int edad, bool respirar)
{
    this->edad = edad;
    this->respirar = respirar;
}

void Animal::respira(bool respirar)
{
    if(respirar)
    {
        cout<<"El animal esta vivo"<<endl;
    }
    else
    {
        cout<<"Esta muerto"<<endl;
    }
}
bool Animal::getRespirar() {
    return respirar;
}

void Animal::setRespirar(bool respirar) {
    this->respirar = respirar;
}
