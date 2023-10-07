#pragma once
#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Software.h"

using namespace std;

class Juego: public Software{
    private:
        string genero;
    public:
        Juego(string nombre, string developer, int CaliEdad, double precio, string genero);
        ~Juego();
        string getGenero();
        void setGenero(string g);


};

Juego:: Juego(string nombre, string developer, int CaliEdad, double precio, string genero):Software(nombre,developer,CaliEdad,precio){
    this -> genero = genero;
}
Juego::~Juego(){};
string Juego:: getGenero(){
    return this -> genero;
}
void Juego:: setGenero(string g){
    this -> genero = g;
}