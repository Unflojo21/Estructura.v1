#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class Nino: public Usuario{
    private:

    public:
        Nino(string nombre, string contraseña, int edad);
        ~Nino();
        string presentar() override;
};

Nino :: Nino(string nombre, string contraseña, int edad): Usuario(nombre,contraseña,edad){};
Nino :: ~Nino(){};
string Nino:: presentar(){return "Niño";};

