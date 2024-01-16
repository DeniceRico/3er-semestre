#include "SerVivo.h"
#include <iostream>
using namespace std;

SerVivo::SerVivo(bool respira,bool comer)
{
    this->respira=respira;
    this->comer=comer;
}

void SerVivo::mostrarSerVivo(bool respira)
{
    if(respira)
    {
       cout<<"Vivo"<<endl;
    }
    else
    {
        cout<<"Muerto"<<endl;
    }

}
bool SerVivo::getRespira()
 {
    return respira;
}

bool SerVivo::getComer()
 {
    return comer;
}

void SerVivo::setRespira(bool respira)
{
    this->respira=respira;
}

void SerVivo::setComer(bool comer)
{

    this->comer=comer;

}
