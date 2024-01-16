#ifndef BURRO_H
#define BURRO_H
#include "Animal.h"
#include <iostream>

class Burro: virtual public Animal
{
    public:
        Burro(int, bool, double, int);

        int getPesoB(void);
        double getTamanoB(void);

    private:
        double tamano_;
        int peso_;
};

#endif // BURRO_H
