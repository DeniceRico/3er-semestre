#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <iostream>
using namespace std;

class Calculadora
{
    public:
        Calculadora();
        Calculadora(int);
        Calculadora(double);
        void setNum1(int);
        int getNum1(void);
        void setNum2(float);
        double getNum2(void);
        double getRes(void);

        //aqui no declaramos la sobrecarga ya que queremos que no sea miembro de la clase
        //para eso utilizamos la funcion friend
        friend Calculadora operator+(const Calculadora &n_1, const Calculadora &n_2);
        friend Calculadora operator-(const Calculadora &n_1, const Calculadora &n_2);
        friend Calculadora operator*(const Calculadora &n_1, const Calculadora &n_2);
        friend Calculadora operator/(const Calculadora &n_1, const Calculadora &n_2);

        friend ostream &operator<<(ostream &out, const Calculadora &resul);

    private:
        int num1;
        double num2;
        double res;

};

#endif // CALCULADORA_H
