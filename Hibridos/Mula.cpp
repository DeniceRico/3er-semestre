#include "Mula.h"
using namespace std;
#include <iostream>

Mula::Mula(int edad, bool respirar,int edad_,bool respirar_,double tamano, int peso, string gestacion_,double tamano_, int peso_, double peso_mula, double estatura_propia):
    Yegua(edad,respirar,tamano, peso, gestacion_), Burro(edad, respirar,tamano_,peso_),Animal(edad, respirar)
{
    peso_mula=pesoPropio();
    estatura_propia=estaturaPropia();
}
double Mula::pesoPropio()
{

    return (getPeso()+getPesoB())/2;
}
double Mula::estaturaPropia()
{
    return (getTamano()+getTamanoB())/2;
}
