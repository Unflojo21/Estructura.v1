#pragma once
#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Software.h"

using namespace std;

class Seguridad: public Software{
    private:
        string Malware;
    public:
        Seguridad(string nombre, string developer, int CaliEdad, double precio, string malware);
        ~Seguridad();
        string getMalware();
        void CambiarMalware(string mal);
};

Seguridad:: Seguridad(string nombre, string developer, int CaliEdad, double precio, string malware): Software(nombre,developer,CaliEdad,precio){
    this -> Malware = malware;
}
Seguridad:: ~Seguridad(){}
string Seguridad::getMalware(){
    return this -> Malware;
}
void Seguridad:: CambiarMalware(string mal){
    this -> Malware = mal;
}