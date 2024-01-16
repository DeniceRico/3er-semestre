#include "Perro.h"
#include <iostream>

using namespace std;

Perro::Perro(int hijosP, bool hambreP,int dormirP, int edad, int peso, string raza): Animal(edad,peso,raza)
{
    this->hijosP=hijosP;
    this->hambreP=hambreP;
    this->dormirP=dormirP;
    this->edad=edad;
    this->peso=peso;
    this->raza=raza;
}


void Perro::setHijosP_(int hijosP)
{
    this->hijosP=hijosP;
}
void Perro::setHambreP_(bool hambreP)
{
    this->hambreP=hambreP;
}
void Perro::setDormirP_(int dormirP)
{
    this->dormirP=dormirP;
}
int Perro::getHijosP_()
{
    return hijosP;
}
bool Perro::getHambreP_()
{
    return hambreP;
}
int Perro::getDormirP_()
{
    return dormirP;
}
string Perro::getRaza()
{
    return raza;
}
bool Perro::comer(bool hambreP)
{
    if(hambreP==true)
    {
        cout<<"\nEl perro come croquetas"<<endl;
    }
    else
    {
        cout<<"\nEl perro no tiene hambre"<<endl;
    }

    return hambreP;
}
int Perro::dormir(int dormirP)
{
    cout<<"\nLos perros duermen:"<<dormirP<<" horas"<<endl;
}
string Perro::jugar()
{
    cout<<"\nLos perros juegan con su pelota"<<endl;
}
string Perro::sonido()
{
    cout<<"\nLos perros hacen: Guaf!"<<endl;
}
