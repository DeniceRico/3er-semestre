#ifndef CONEJO_H
#define CONEJO_H
#include "Animal.h"

#include <iostream>

using namespace std;


class Conejo: public Animal
{
public:
    Conejo(int, bool, int, int, int, string);
    bool comer(bool);
    int dormir(int);
    string jugar();
    string sonido();

    void setHijosC_(int);
    void setHambreC_(bool);
    void setDormirC_(int);

    int getHijosC_(void);
    bool getHambreC_(void);
    int getDormirC_(void);


    int getEdad(void);
    int getPeso(void);
    string getRaza(void);


private:
    int hijosC;
    bool hambreC;
    int dormirC;
};

#endif // CONEJO_H
