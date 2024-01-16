#ifndef CALCULATOR_H
#define CALCULATOR_H


class Calculator
{
    public:
        Calculator();
        Calculator(int);
        Calculator(double);
        void setNum1(int);
        int getNum1(void);
        void setNum2(double);
        double getNum2(void);
        double getRes(void);

        Calculator operator+(const Calculator &nu1);



    private:
        int num1;
        double num2;
        double res;
};

#endif // CALCULATOR_H
