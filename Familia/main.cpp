#include <iostream>

#include "Perro.h"
#include "Gato.h"
#include "Conejo.h"

using namespace std;

int main()
{
    Perro bruno(3,true,12,5,6,"Chihuahua");
    Gato michi(0, false,14,2,4,"Siames");
    Conejo kuki(0, true,7,2,4, "Mini lop");

    /*Animal* animalP;


    animalP = &bruno;
    cout << "Raza de bruno: " << animalP->getRaza() << endl;
    animalP->comer(bruno.getHambreP_());
    animalP->dormir(bruno.getDormirP_());
    animalP->jugar();
    animalP->sonido();

    animalP = &michi;
    cout << "Raza de michi: " << animalP->getRaza() << endl;
    animalP->comer(michi.getHambreG_());
    animalP->dormir(michi.getDormirG_());
    animalP->jugar();
    animalP->sonido();

    animalP = &kuki;
    cout << "Raza de kuki: " << animalP->getRaza() << endl;
    animalP->comer(kuki.getHambreC_());
    animalP->dormir(michi.getDormirG_());
    animalP->jugar();
    animalP->sonido();*/



    cout<<"la raza de kuki es: "<<kuki.getRaza()<<endl;
    cout<<"la raza de bruno es: "<<bruno.getRaza()<<endl;
    cout<<"la raza de michi es: "<<michi.getRaza()<<endl;

    bruno.comer(bruno.getHambreP_());
    michi.comer(michi.getHambreG_());
    kuki.comer(kuki.getHambreC_());

    bruno.dormir(bruno.getDormirP_());
    michi.dormir(michi.getDormirG_());
    kuki.dormir(kuki.getDormirC_());

    bruno.sonido();
    michi.sonido();
    kuki.sonido();

    bruno.jugar();
    michi.jugar();
    kuki.jugar();




    return 0;
}
