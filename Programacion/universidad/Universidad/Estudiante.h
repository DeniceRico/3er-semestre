#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H


class Estudiante
{
    public:
        //atributos

        string nombre;
        int edad;
        string carrera;


        //metodos
        Estudiante();

        void ir_a_clase();
        void hacer_tarea();
        void agendar_materia();



};

#endif // ESTUDIANTE_H
