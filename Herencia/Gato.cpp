#include "Gato.h"

Gato::Gato(bool respira, bool comer, string sexo, string raza, int edad):Animal(respira, comer, sexo)
{
    this->raza=raza;
    this->edad=edad;
}
 void Gato::Maullar()
 {
     cout<<"Miau"<<endl;
 }
void Gato::Comiendo(bool comer)
{
    if(comer)
    {
        cout<<"Come Whiskas"<<endl;
    }
    else
    {
        cout<<"Esta enfermo"<<endl;

    }
}
void Gato::setRaza(string raza)
{
    this->raza=raza;
}
string Gato::getRaza()
{
    return raza;
}
void Gato::setEdad(int edad)
{
    this->edad=edad;
}
int Gato::getEdad()
{
    return edad;
}
