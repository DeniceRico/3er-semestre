#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    Calculator op1(2);
    Calculator op2(2.9);

    int n1 = op1.getNum1();  // Llama al m�todo para obtener el n�mero 1
    double n2 = op2.getNum2();  // Llama al m�todo para obtener el n�mero 2

    Calculator suma=op1+op2;

    cout << "Los n�meros son: " << n1 << ", " << n2 << endl;
    cout<<"La suma es:"<<suma.getRes()<<endl;

    return 0;
}


