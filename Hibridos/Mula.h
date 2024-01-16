#ifndef MULA_H
#define MULA_H
#include "Yegua.h"
#include "Burro.h"

using namespace std;
#include <iostream>

class Mula: virtual public Yegua, virtual public Burro
{
    public:
        Mula(int,bool,int, bool, double, int, string, double, int, double, double);
        double pesoPropio();
        double estaturaPropia();

    private:
        double peso_mula;
        double estatura_propia;
};

#endif // MULA_H
