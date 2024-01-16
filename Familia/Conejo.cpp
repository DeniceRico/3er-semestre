#include "Conejo.h"
#include <iostream>

using namespace std;

Conejo::Conejo(int hijosC, bool hambreC,int dormirC, int edad, int peso, string raza): Animal(edad,peso,raza)
{
    this->hijosC=hijosC;
    this->hambreC=hambreC;
    this->dormirC=dormirC;
    this->edad=edad;
    this->peso=peso;
    this->raza=raza;
}
void Conejo::setHijosC_(int hijosC)
{
    this->hijosC=hijosC;
}
void Conejo::setHambreC_(bool hambreC)
{
    this->hambreC=hambreC;
}
void Conejo::setDormirC_(int dormirC)
{
    this->dormirC=dormirC;
}

int Conejo::getHijosC_()
{
    return hijosC;
}
bool Conejo::getHambreC_()
{
    return hambreC;
}
int Conejo::getDormirC_()
{
    return dormirC;
}
int Conejo::getEdad()
{
    return edad;
}
int Conejo::getPeso()
{
    return peso;
}
string Conejo::getRaza()
{
    return raza;
}
bool Conejo::comer(bool hambreC)
{
    if(hambreC==true)
    {
        cout<<"El conejo come conejina"<<endl;
    }
    else
    {
        cout<<"El conejo no tiene hambre"<<endl;
    }
}
int Conejo::dormir(int dormirC)
{
    cout<<"Los conejos duermen:"<<dormirC<<" horas"<<endl;
}
string Conejo::jugar()
{
    cout<<"Los conejos juegan a correr"<<endl;
}
string Conejo::sonido()
{
    cout<<"Los conejos no hacen ningun sonido"<<endl;
}
