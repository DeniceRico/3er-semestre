#ifndef PADRES_H
#define PADRES_H
using namespace std;
#include <string>

class Padres
{
    public:
        Padres();
        Padres(string , string);
        void setApellido_m(string);
        void setApellido_p(string);
        string getApe_m(void);
        string getApe_p(void);
        Padres operator+(string);//el objeto de la izquierda del operador es el objeto de invoca la funcion
                                 //y el otro operando se pasa como argumento (operadores binarios).



    private:
        string apellido_madre;
        string apellido_padre;
};

#endif // PADRES_H
