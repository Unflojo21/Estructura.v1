#pragma once
#include <iostream>
#include <vector>
#include "Usuario.h"

using namespace std;

class Software{
    private:
        string nombre, developer;
        int CaliEdad;
        vector<Usuario> Lista;
        double precio;
    public:
        Software(string nombre, string developer, int CaliEdad, double precio);
        ~Software();
        string getNombre();
        string getDev();
        int getEdad();
        double getPrecio();
        vector<Usuario> mirarLista();
        void agregarUsuario(Usuario u);
        void quitarUsuario();
};

Software::Software(string nombre, string developer, int CaliEdad, double precio){};
Software::~Software(){};
string Software::getNombre(){return this -> nombre;};
string Software:: getDev(){return this -> developer;};
int Software:: getEdad(){return this -> CaliEdad;};
double Software:: getPrecio(){return this -> precio;};
vector<Usuario> Software:: mirarLista(){
    return this -> Lista;
};
void Software:: agregarUsuario(Usuario u){
    Lista.push_back(u);
};
void Software:: quitarUsuario(){
    Lista.pop_back();
};