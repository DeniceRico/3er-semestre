#ifndef ANIMAL_H
#define ANIMAL_H
#include "SerVivo.h"
#include <iostream>
 using namespace std;

class Animal:public SerVivo
{
    public:
        Animal(bool, bool, string);
        void setSexo(string);
        string getSexo(void);
    private:
        string sexo;

};

#endif // ANIMAL_H
