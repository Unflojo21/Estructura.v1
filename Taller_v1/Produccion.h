#pragma once
#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Software.h"

using namespace std;
class Produccion: public Software{
    private:
        string tipo;
    public:
        Produccion(string nombre, string developer, int CaliEdad, double precio, string tipo);
        ~Produccion();
        string getTipo();
        void CambiarTipo(string t);
};

Produccion::Produccion(string nombre, string developer, int CaliEdad, double precio, string tipo): Software(nombre,developer,CaliEdad,precio){
    this ->tipo = tipo;
}
Produccion::~Produccion(){};
string Produccion:: getTipo(){
    return this -> tipo;
}
void Produccion:: CambiarTipo(string t){
    this -> tipo = t;
}

