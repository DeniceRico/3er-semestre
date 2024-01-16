#include <iostream>

using namespace std;

int main()
{
    int uno=15;
    int *dos=&uno;
    int *tres=new int(25);
    int vec[5]={56,87,98,23,88};

    cout<<&uno<<endl;//imprime direccion de uno igualq abajo
    cout<<dos<<endl;//imprime la direccion de memoria no el valor de uno
    cout<<*dos<<endl;//se imprimibe el valor a cual estamos apuntando osea el uno
    cout<<&dos<<endl;//imprimbe la direccion de memoria del dos

    cout<<*tres<<endl;//imprimbe 25

	*tres=uno+*dos;//imprime 15 mas 15
	
	cout<<*tres<<endl;

    cout<<*(vec+1)<<endl;//para tratar el vector como puntero, iniciamos desde el 0 y la suma es para avanzar en el vector.

    return 0;
}


