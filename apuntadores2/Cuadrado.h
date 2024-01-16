#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>
using namespace std;

class Cuadrado
{
    public:
        Cuadrado(int b, int a);
        int Calcular_area();

        void setAltura_(int altura);
        int getAltura_(void);

        void setBase_(int base);
        int getBase_(void);



    private:
        int resultado;
        int *base;
        int *altura;
};

#endif // CUADRADO_H
