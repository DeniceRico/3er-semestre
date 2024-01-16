#include <iostream>
#include "Mula.h"
using namespace std;

int main()
{

    Mula maria(4,true,5,true,1.4,89,"11 meses",1.2,78,0,0);
    maria.respira(maria.getRespirar());

    cout<<"Maria pesa: "<<maria.pesoPropio()<<" kg"<<endl;
    cout<<"Maria mide: "<<maria.estaturaPropia()<<" mts"<<endl;
    maria.gestacion(maria.getGestacion());


    cout<<"\nInformacion de la madre:"<<endl;
    cout<<"Peso de la yegua:"<<maria.getPeso()<<" kg"<<endl;
    cout<<"Tamano de la yegua:"<<maria.getTamano()<<" mts"<<endl;

     cout<<"\nInformacion del padre:"<<endl;
     cout<<"Peso del burro:"<<maria.getPesoB()<<" kg"<<endl;
     cout<<"Tamaño del burro:"<<maria.getTamanoB()<<" mts"<<endl;


    return 0;
}
