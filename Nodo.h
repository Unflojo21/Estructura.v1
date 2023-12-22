#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Camino.h"
using namespace std;

class Nodo{
    private:
        int id;
        string nombre, tipo;
        vector<Camino*> referencias;
    public:
        Nodo(int id,string nombre,string tipo);
        ~Nodo();
        int getId();
        string getNombre();
        string getTipo();
        vector<Camino*> getReferencias();
        void agregarReferencias(int id, int vel, int seg);
};

Nodo::Nodo(int id, string nombre, string tipo){
    this -> id = id;
    this -> nombre = nombre;
    this -> tipo = tipo;
};
Nodo::~Nodo(){};
int Nodo:: getId(){
    return this -> id;
};
string Nodo:: getNombre(){
    return this -> nombre;
};
string Nodo:: getTipo(){
    return this -> tipo;
};
vector<Camino*> Nodo:: getReferencias(){
    return this -> referencias;
};
void Nodo:: agregarReferencias(int id, int vel, int seg){
    Camino* c = new Camino(id, vel, seg);
    referencias.push_back(c);
};
