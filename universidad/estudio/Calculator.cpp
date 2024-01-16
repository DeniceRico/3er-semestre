#include "Calculator.h"

Calculator::Calculator()
{
    num1;
    num2;
    res;
}
Calculator::Calculator(int num1)
{
    this->num1=num1;
}
Calculator::Calculator(double num2)
{
    this->num2=num2;
}


void Calculator::setNum1(int num1)
{
  this->num1=num1;
}
void Calculator::setNum2(double num2)
{
  this->num2=num2;
}
int Calculator::getNum1(void)
{
    return num1;
}
double Calculator::getNum2(void)
{
    return num2;
}
double Calculator::getRes(void)
{
    return res;
}
Calculator Calculator:: operator+(const Calculator &nu1)
{
    Calculator resultado;
    resultado.res=this->num1+nu1.num2;
    return resultado;
}
