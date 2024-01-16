#ifndef GATO_H
#define GATO_H
#include "SerVivo.h"
#include "Animal.h"
#include <iostream>
using namespace std;

class Gato:public Animal
{
    public:
        Gato(bool,bool,string,string,int);
        void Maullar();
        void Comiendo(bool);

        void setRaza(string);
        string getRaza(void);

        void setEdad(int);
        int getEdad(void);


    private:
        string raza;
        int edad;
};

#endif // GATO_H
