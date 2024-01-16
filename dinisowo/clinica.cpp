#include "clinica.h"
#include "doctor.h"

Clinica::Clinica()
{
    nombre_clinica = "";
    ubicacion = "";
    num_estrellas = 0;
    doctorAsignado = Doctor();
    pacienteAsignado = Paciente();
}

Clinica::Clinica(string nom_, string ubi_, float num_est)
{
    nombre_clinica = nom_;
    ubicacion = ubi_;
    num_estrellas = num_est;
}

Clinica::Clinica(Doctor doc_, Paciente px_)
{
    asignar_clinica(doc_, px_, "", "", 0.0);//valores iniciales porque es el constructor
}

void Clinica::asignar_clinica(Doctor doc_, Paciente px_, string nom_, string ubi_, float num_est)
{
    doctorAsignado = doc_;
    pacienteAsignado = px_;

    if (doctorAsignado.getEspecialidad() == "Cardiologo")
    {
        nombre_clinica = nom_;
        ubicacion = ubi_;
        num_estrellas = num_est;
    }
    else if (doctorAsignado.getEspecialidad() == "Ortopedista")
    {
        nombre_clinica = nom_;
        ubicacion = ubi_;
        num_estrellas = num_est;
    }
    else if (doctorAsignado.getEspecialidad() == "Neurologo")
    {
        nombre_clinica = nom_;
        ubicacion = ubi_;
        num_estrellas = num_est;
    }
}
string Clinica::getNombre(void)
{
    return nombre_clinica;
}
string Clinica::getUbicacion(void)
{
    return ubicacion;
}
float Clinica:: getNum_estrellas(void)
{
    return num_estrellas;
}
