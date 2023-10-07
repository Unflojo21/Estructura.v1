#pragma once
#include <iostream>
#include "Usuario.h"

using namespace std;

class Normal: public Usuario{
    private:
        string correo;
    public: 
        Normal(string nombre, string contraseña, int edad,string correo);
        ~Normal();
        string getCorreo();
        string presentar() override;
};

Normal:: Normal(string nombre, string contraseña, int edad,string correo): Usuario(nombre,contraseña,edad){
    this -> correo = correo;
};
Normal:: ~Normal(){};
string Normal:: getCorreo(){
    return this -> correo;
};
string Normal:: presentar(){
    return "Comun";
};


