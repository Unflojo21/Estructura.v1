#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <utility>
#include "Nodo.h"
#include "Camino.h"

using namespace std;


int ConstruirNodo(vector<Nodo*>& nodos){
    ifstream archivo("servidores.csv");
    if(!archivo.is_open()){
        cerr << "No se logro abrir" << "Servidores" << endl;
        return 0;
    }
    string linea;
    char coma = ',';
    getline(archivo,linea);
    //saca info de los archivos
    while (getline(archivo, linea)) {
        stringstream stream(linea);
        string idS, nombre, tipo;
        getline(stream, idS, coma);
        getline(stream, nombre, coma);
        getline(stream, tipo, coma);
        int id = stoi(idS);
       
        Nodo *nodo = new Nodo(id,nombre,tipo);
        nodos.push_back(nodo);
        
    }

    archivo.close();
    getline(archivo,linea);

    return 0;
}

int HacerConexion(vector<Nodo*>& nodos){
        ifstream archivo("conexiones.csv");
    if(!archivo.is_open()){
        cerr << "No se logro abrir" << "conexiones" << endl;
        return 0;
    }
    string linea;
    char coma = ',';
    getline(archivo,linea);
    //saca info de los archivos
    while (getline(archivo, linea)) {
        stringstream stream(linea);
        string idCliente,idServidor,velocidad,distancia;
        getline(stream, idCliente, coma);
        getline(stream, idServidor, coma);
        getline(stream, velocidad, coma);
        getline(stream,distancia,coma);
        int id = stoi(idCliente);
        int idS = stoi(idServidor);
        int vel = stoi(velocidad);
        int dist = stoi(distancia);
       
        for(Nodo *n: nodos){
            if(n->getId()==id){
                n->agregarReferencias(idS,vel,dist);
            }
        }
        
    }
    return 0;
}

Nodo* buscarNodo(vector<Nodo*>& nodos, int nodo){
    for(Nodo* n:nodos){
        if(n->getId()==nodo){
            return n;
        }
    }
}

pair<string,int> RecorrerCamino(vector<Camino*>& caminos, int peso, int destino){
    for(Camino* c : caminos){
        pair<string,int> par;
        if(c->getDestinoId() == destino){
            par.first += " "+to_string(c->getDestinoId());
            par.second += c->CalcularSeg(peso);
            return par;
        }
    }
}

void bellmanFord(vector<Nodo*>& nodos, int origen,int peso, int destino){
    Nodo* nOrigen = buscarNodo(nodos,origen);
    //La idea es ocupar recursion que si no encuentra la id de destino ir por cada nodo destino y volver a recorrer su vector de camino, una vez terminando calcular su peso
    //funcionaria con un pair string int, string para el cumulo de id al cual va saltando y el int calculando el peso
    //pair<string,int> resultado = RecorrerCamino(nOrigen->getReferencias(),peso,destino);
}


int main()
{
    vector<Nodo*> nodos;
    ConstruirNodo(nodos);
    HacerConexion(nodos);
    bool gateway = true;
    string mensaje;
    int origen,peso,destino;
    while(gateway){
        cout << "Bienvenido al Servicio de mensajeria" <<endl;
        cout << "Quiere mandar un mensaje?  si/no"<<endl;
        cin >> mensaje;
        if(mensaje=="no"){gateway = false;continue;}
        cout << "Ingrese el punto del origen: " << endl;
        cin >> origen;
        cout << "Ingrese el peso del archivo: " << endl;
        cin >> peso;
        cout << "Ingrese la id del destino: " << endl;
        cin >> destino;
        //bellmanFord(nodos,origen,peso,destino);

    }
    return 0;
}
