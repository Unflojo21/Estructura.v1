#pragma once
#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Software.h"

using namespace std;

class Navegador: public Software{
    private:
        vector<string> historial;
    public:
        Navegador(string nombre, string developer, int CaliEdad, double precio);
        ~Navegador();
        vector<string> getHistorial();
        void agregarHistorial(string str);
        void quitarHistorial();
};

Navegador:: Navegador(string nombre, string developer, int CaliEdad, double precio): Software(nombre,developer,CaliEdad,precio){
}
Navegador:: ~Navegador(){};
vector<string> Navegador:: getHistorial(){
    return this -> historial;
}
void Navegador::agregarHistorial(string str){
    historial.push_back(str);
}
void Navegador::quitarHistorial(){
    historial.pop_back();
}
