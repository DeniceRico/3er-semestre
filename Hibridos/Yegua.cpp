#include "Yegua.h"
#include <iostream>
Yegua::Yegua(int edad, bool respirar, double tamano, int peso, string gestacion_): Animal(edad, respirar) {
    this->peso = peso;
    this->tamano = tamano;
    this->gestacion_ = gestacion_;
}

int Yegua::getPeso() {
    return peso;
}

void Yegua::gestacion(string gestacion_) {
    cout << "El tiempo de gestacion fue de: " << gestacion_ << endl;
}
string Yegua::getGestacion()
{
    return gestacion_;
}
double Yegua::getTamano()
{
    return tamano;
}
