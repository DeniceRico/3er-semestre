#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
using namespace std;

class Paciente
{
    public:
        Paciente();
        Paciente(int, string, string);
        Paciente(string);

        int getEdad(void);
        void setEdad(int);

        string getNombre(void);
        void setNombre(string);

        string getDireccion(void);
        void setDireccion(string);

        string getTelefono(void);
        void setTelefono(string);





    private:
        int edad;
        string nombre;
        string direccion;
        string telefono_p;

};

#endif // PACIENTE_H
