#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal
{
public:
    Animal(int, int, string);
    virtual bool comer(bool);
    virtual int dormir(int);
    virtual string jugar();
    virtual string sonido();

    int getEdad(void);
    int getPeso(void);
    string getRaza(void);


protected:
    int edad;
    int peso;
    string raza;

};

#endif // ANIMAL_H
