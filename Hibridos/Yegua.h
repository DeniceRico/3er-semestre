#ifndef YEGUA_H
#define YEGUA_H
#include "Animal.h"
using namespace std;

#include <iostream>

class Yegua: virtual public Animal
{
    public:
        Yegua(int, bool,double,int,string);
        void gestacion(string);

        int getPeso(void);
        string getGestacion(void);
        double getTamano(void);

    private:
        double tamano;
        int peso;
        string gestacion_;

};

#endif // YEGUA_H
