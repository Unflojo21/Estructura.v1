#pragma once
#include <iostream>
#include "Usuario.h"
#include "Normal.h"

using namespace std;

class Admin: public Normal{
    private:
        bool log;
    public:
        Admin(string nombre, string contraseña, int edad,string correo, bool log);
        ~Admin();
        bool getLog();
        string presentar() override;
};

Admin:: Admin(string nombre, string contraseña, int edad,string correo, bool log): Normal(nombre,contraseña,edad,correo){
    this -> log = true;
};
Admin:: ~Admin(){};
bool Admin:: getLog(){
    return this -> log;
}
string Admin::presentar(){
    return "Admin";
};