#include "Rectangulo.h"

Rectangulo::Rectangulo(int b, int a)
{
    base=new int(b);
    altura=new int(a);
    resultado=0;
}
int Rectangulo::Calcular_Area()
{
    resultado=(*altura)*(*base);
    return resultado;
}
void Rectangulo::setAltura(int a_)
{
    *altura=a_;
}
int Rectangulo::getAltura()
{
    return *altura;
}
void Rectangulo::setBase(int b_)
{
    *base=b_;
}
int Rectangulo::getBase()
{
    return *base;
}
