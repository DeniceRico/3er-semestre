#ifndef GATO_H
#define GATO_H
#include "Animal.h"

#include <iostream>

using namespace std;

class Gato: public Animal
{
public:
    Gato(int, bool,int, int, int, string);
    bool comer(bool);
    int dormir(int);
    string jugar();
    string sonido();

    void setHijosG_(int);
    void setHambreG_(bool);
    void setDormirG_(int);


    int getHijosG_(void);
    bool getHambreG_(void);
    int getDormirG_(void);
    string getRaza(void);

private:
    int hijosG;
    bool hambreG;
    int dormirG;
};

#endif // GATO_H
