#include "Gato.h"
#include <iostream>

using namespace std;

Gato::Gato(int hijosG,bool hambreG,int dormirG,int edad, int peso, string raza): Animal(edad,peso,raza)
{
    this->hijosG=hijosG;
    this->hambreG=hambreG;
    this->dormirG=dormirG;
    this->edad=edad;
    this->peso=peso;
    this->raza=raza;
}
void Gato::setHijosG_(int hijosG)
{
    this->hijosG=hijosG;
}
void Gato::setHambreG_(bool hambreG)
{
    this->hambreG=hambreG;
}
void Gato::setDormirG_(int dormirG)
{
    this->dormirG=dormirG;
}
int Gato::getHijosG_()
{
    return hijosG;
}
bool Gato::getHambreG_()
{
    return hambreG;
}
int Gato::getDormirG_()
{
    return dormirG;
}
string Gato::getRaza()
{
    return raza;
}
bool Gato::comer(bool hambreG)
{
    if(hambreG==true)
    {
        cout<<"El gato come whiskas"<<endl;
    }
    else
    {
        cout<<"El gato no tiene hambre"<<endl;
    }
}
int Gato::dormir(int dormirG)
{
    cout<<"Los gatos duermen:"<<dormirG<<" horas"<<endl;

}
string Gato::jugar()
{
    cout<<"Los gatos juegan con sus plumas"<<endl;
}
string Gato::sonido()
{
    cout<<"Los gatos hacen: Miau!"<<endl;
}
