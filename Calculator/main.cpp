#include <iostream>
#include "Calculadora.h"


using namespace std;

int main()
{
    Calculadora operacion1(4);
    Calculadora operacion2(2.3);



    Calculadora resultado1,resultado2,resultado3, resultado4;

    resultado1 = operacion1+operacion2;
    resultado2 = operacion1-operacion2;
    resultado3 = operacion1*operacion2;
    resultado4 = operacion1/operacion2;

    cout << "el resultado de la suma es: " << resultado1.getRes() << endl;
    cout << "el resultado de la resta es: " << resultado2.getRes() << endl;
    cout << "el resultado de la multiplicación es: " << resultado3.getRes() << endl;
    cout << "el resultado de la división es: " << resultado4.getRes() << endl;


    return 0;
}
