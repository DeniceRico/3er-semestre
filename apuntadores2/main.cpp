#include <iostream>
#include "Rectangulo.h"
#include "Cuadrado.h"


using namespace std;

int main()
{
    Rectangulo rectangulo1(3, 4);
    Cuadrado cuadrado1(8, 5);

    cout << "El area del rectangulo es: " << rectangulo1.Calcular_Area() << endl;
    cout << "El area del cuadrado es: " << cuadrado1.Calcular_area() << endl;

    return 0;
}
