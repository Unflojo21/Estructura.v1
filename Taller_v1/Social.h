#pragma once
#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Software.h"

using namespace std;
class Social: public Software{
    private:
        vector<Usuario> amigos;
    public:
        Social(string nombre, string developer, int CaliEdad, double precio);
        ~Social();
        vector<Usuario> mirarAmigos();
        void solicitudA(Usuario u);
        void eliminarA();
};

Social:: Social(string nombre, string developer, int CaliEdad, double precio): Software(nombre,developer,CaliEdad,precio){};
Social:: ~Social(){}
vector<Usuario> Social::mirarAmigos()
{
        return this -> amigos;
}
void Social::solicitudA(Usuario u){
    amigos.push_back(u); 
}
void Social::eliminarA(){
    amigos.pop_back();
}
