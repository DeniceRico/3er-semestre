#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
using namespace std;

class Doctor
{
    public:
        Doctor();
        Doctor(string, int, string);
        Doctor(string);

        int getYears(void);
        void setYears(int);

        string getEspecialidad(void);
        void setEspecialidad(string);

        string getClinica(void);
        void setClinica(string);

        string getTelefono(void);
        void setTelefono(string);

        string getNombre(void);
        void setNombre(string);


    private:
        int years;
        string especialidad;
        string clinica;
        string telefono;
        string nombre;
};

#endif // DOCTOR_H
