#include "Animal.h"
#include <iostream>

Animal::Animal(bool respira, bool comer, string sexo):SerVivo(respira, comer)
{
    this->sexo=sexo;
}
void Animal::setSexo(string sexo)
{
    this->sexo=sexo;
}
string Animal::getSexo()
{
    return sexo;
}
