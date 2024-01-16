#ifndef CLINICA_H
#define CLINICA_H

#include "doctor.h"
#include "paciente.h"

class Clinica
{
    public:
        Clinica();
        Clinica(string, string, float);
        Clinica(Doctor, Paciente);
        void asignar_clinica(Doctor, Paciente, string, string, float);
        string getNombre(void);
        string getUbicacion(void);
        float getNum_estrellas(void);

    private:
       string nombre_clinica;
       string ubicacion;
       float num_estrellas;
       Doctor doctorAsignado;
       Paciente pacienteAsignado;
};

#endif // CLINICA_H

