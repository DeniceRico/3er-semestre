#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
using namespace std;

class Rectangulo
{
    public:
        Rectangulo(int b, int a);
        int Calcular_Area();

        int getAltura(void);
        void setAltura(int altura);

        int getBase(void);
        void setBase(int base);

    private:
        int resultado;
        int *base;
        int *altura;
};

#endif // RECTANGULO_H
