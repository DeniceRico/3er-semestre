#include "Calculadora.h"
#include <iostream>

using namespace std;


Calculadora::Calculadora()
{
    num1=0;
    num2=0;
    res=0;
}
Calculadora::Calculadora(int numero1)
{
    num1=numero1;

}
Calculadora::Calculadora(double numero2)
{
    num2=numero2;
}
void Calculadora::setNum1(int n1)
{
    num1=n1;
}
int Calculadora::getNum1(void)
{
    return num1;
}
void Calculadora::setNum2(float n2)
{
    num2=n2;
}
double Calculadora::getNum2(void)
{
    return num2;
}
double Calculadora::getRes(void)
{
    return res;
}
Calculadora operator+(const Calculadora &n_1, const Calculadora &n_2)
{
    Calculadora resultado;
    resultado.res = n_1.num1 + n_2.num2;
    return resultado;
}

Calculadora operator-(const Calculadora &n_1, const Calculadora &n_2)
{
    Calculadora resultado;
    resultado.res = n_1.num1 - n_2.num2;
    return resultado;
}

Calculadora operator*(const Calculadora &n_1, const Calculadora &n_2)
{
    Calculadora resultado;
    resultado.res = n_1.num1 * n_2.num2;
    return resultado;
}

Calculadora operator/(const Calculadora &n_1, const Calculadora &n_2)
{
    Calculadora resultado;
    resultado.res = n_1.num1 / n_2.num2;
    return resultado;
}
ostream& operator<<(ostream& out, Calculadora &resul)
{
    out << "el resultado es:"<<resul.getRes();

    return out;
}
