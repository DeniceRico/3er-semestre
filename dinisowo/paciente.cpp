#include "paciente.h"

Paciente::Paciente()
{
    edad;
    nombre;
    direccion;
    telefono_p;
}
Paciente :: Paciente(int edad, string nombre, string direccion)
{
    this->edad=edad;
    this->nombre=nombre;
    this->direccion=direccion;
}
void Paciente:: setEdad(int edad_)
{
    edad=edad_;
}
int Paciente:: getEdad(void)
{
    return edad;
}
void Paciente::setNombre(string nombre_)
{
    nombre=nombre_;
}
string Paciente::getNombre(void)
{
    return nombre;
}
void Paciente:: setDireccion(string direccion_)
{
    direccion=direccion_;
}
string Paciente::getDireccion(void)
{
    return direccion;
}
void Paciente::setTelefono(string telefono_np)
{
    telefono_p=telefono_np;
}
string Paciente:: getTelefono(void)
{
    return telefono_p;
}

