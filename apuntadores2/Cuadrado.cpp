#include "Cuadrado.h"

Cuadrado::Cuadrado(int a, int b)
{
    base=new int(b);
    altura=new int(a);
    resultado=0;
}
int Cuadrado::Calcular_area()
{
    resultado=(*altura)*(*base);
    return resultado;
}
 void Cuadrado::setAltura_(int al_)
 {
     *altura=al_;
 }
int Cuadrado::getAltura_()
{
    return *altura;
}

void Cuadrado::setBase_(int ba_)
{
    *base=ba_;
}
int Cuadrado::getBase_()
{
    return *base;
}
