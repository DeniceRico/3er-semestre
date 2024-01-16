#include <iostream>
#include "SerVivo.h"
#include "Animal.h"
#include "Gato.h"
using namespace std;

int main()
{
    Gato Globin(true, true, "Macho","sphynx", 8);

    cout<<"Informacion del animal: "<<endl;
    Globin.mostrarSerVivo(Globin.getRespira());

    cout<< "Sexo: "<<Globin.getSexo()<<endl;
    cout<< "Raza: "<<Globin.getRaza()<<endl;
    cout<< "Edad: "<<Globin.getEdad()<<" años "<<endl;

    Globin.Comiendo(Globin.getComer());

    cout<< "Y el animal hace: "<<endl;
    Globin.Maullar();
    return 0;
}
