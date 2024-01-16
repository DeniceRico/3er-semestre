#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H

#include<iostream>

using namespace std;

class Universidad
{
    public:
        //atributos
        string nombre;
        string direccion;
        int colegiatura;



        //metodos
        Universidad();
        void admitir_est();
        void ofrecer_curso();
        void dar_baja();



};

#endif // UNIVERSIDAD_H
