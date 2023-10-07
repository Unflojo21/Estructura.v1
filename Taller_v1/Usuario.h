#pragma once
#include <iostream>

using namespace std;

class Usuario{
    private:
        string nombre, contraseña;
        int edad;
    public:
        Usuario(string nombre, string contraseña, int edad);
        ~Usuario();
        string getNombre();
        string getContraseña();
        int getEdad();
        virtual string presentar();

};

Usuario::Usuario(string nombre, string contraseña, int edad){
    this -> nombre = nombre;
    this -> contraseña = contraseña;
    this -> edad = edad;
};
Usuario:: ~Usuario(){};

string Usuario:: getNombre(){
    return this -> nombre;
}; 
string Usuario:: getContraseña(){
    return this -> contraseña;
};
int Usuario:: getEdad(){
    return this -> edad;
}
string Usuario::presentar(){return "Usuario";};
