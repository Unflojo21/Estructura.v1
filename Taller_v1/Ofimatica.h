#pragma once
#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Software.h"

using namespace std;

class Ofimatica: public Software{
    private:
        int archivo;
    public:
        Ofimatica(string nombre, string developer, int CaliEdad, double precio, int archivo);
        ~Ofimatica();
        int getArchivo();
        void crearArchivo();
        void borrarArchivo();
};

Ofimatica::Ofimatica(string nombre, string developer, int CaliEdad, double precio, int archivo): Software(nombre,developer,CaliEdad,precio){
    this ->archivo = archivo;
}
Ofimatica::~Ofimatica(){};
int Ofimatica::getArchivo(){
    return this-> archivo;
}
void Ofimatica::crearArchivo(){
    this -> archivo = archivo + 1;
}
void Ofimatica::borrarArchivo(){
    this -> archivo = archivo - 1;
}