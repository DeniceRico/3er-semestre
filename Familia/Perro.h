#ifndef PERRO_H
#define PERRO_H
#include "Animal.h"
#include <iostream>

using namespace std;

class Perro: public Animal
{
public:


    Perro(int, bool,int, int, int, string);
    bool comer(bool);
    int dormir(int);
    string jugar();
    string sonido();

    void setHijosP_(int);
    void setHambreP_(bool);
    void setDormirP_(int);


    int getHijosP_(void);
    bool getHambreP_(void);
    int getDormirP_(void);
    string getRaza(void);



private:

    int hijosP;
    bool hambreP;
    int dormirP;


};

#endif // PERRO_H
