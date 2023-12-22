#pragma once
#include <iostream>
using namespace std;

class Camino{
    private:
        int destinoId;
        int velocidad;
        int segundos;
    public:
        Camino(int id, int vel, int seg);
        ~Camino();
        int getDestinoId();
        int getVelocidad();
        int getSegundos();
        int CalcularSeg(int tamaño);
};

Camino::Camino(int id, int vel, int seg){
    this -> destinoId = id;
    this -> velocidad = vel;
    this -> segundos = seg;
};
Camino::~Camino(){};
int Camino::getDestinoId(){
    return this -> destinoId;
};
int Camino::getVelocidad(){
    return this -> velocidad;
};
int Camino::getSegundos(){
    return this -> segundos;
};
int Camino::CalcularSeg(int tamaño){
    if(tamaño%velocidad != 0){
        return ((int)(tamaño/velocidad)+1)*segundos;
    }else if(tamaño < velocidad){
        return segundos;
    }
    else{
        return tamaño/velocidad * segundos;
    }
};
