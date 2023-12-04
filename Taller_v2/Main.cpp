#include <iostream>
#include <vector>
using namespace std;

void ImprimirTablero(string tablero[6][7]){
    for (int i = 0; i < 6; i++){
        for (int y = 0; y < 7; y++)
        {
            cout<<"["<< tablero[i][y]<<"] ";
        }
        cout<<endl;
    }
}

void CrearTablero(string tablero[6][7]){
    for (int i = 0; i < 6; i++)
    {
        for (int y = 0; y < 7; y++)
        {
            tablero[i][y] = "0";
        }
    }
}

bool verificarColumna(string tablero[6][7], int columna){
    if(tablero[0][columna] != "0"){
        return true;
    }
    return false;
}

void insertarFicha(string tablero[6][7], int columna, string jugador){
    int profundidad = 0;
    for(int i = 0; i < 6; i++){
        if(tablero[i][columna] == "0"){
            profundidad++;
        }
    }
    tablero[profundidad-1][columna] = jugador;
}

string cambiarJugador(string jugador){
    if(jugador == "1"){
        return "2";
    }
    return "1";
}

bool verificarTablero(string tablero[6][7]){
        // Verificar horizontalmente
        for (int i = 0; i < 6; ++i) {
        for (int j = 0; j <= 3; ++j) {
            if (tablero[i][j] == tablero[i][j + 1] &&
                tablero[i][j + 1] == tablero[i][j + 2] &&
                tablero[i][j + 2] == tablero[i][j + 3] &&
                tablero[i][j] != "0") {
                return false;
            }
        }
    }

    // Verificar verticalmente
    for (int i = 0; i <= 2; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (tablero[i][j] == tablero[i + 1][j] &&
                tablero[i + 1][j] == tablero[i + 2][j] &&
                tablero[i + 2][j] == tablero[i + 3][j] &&
                tablero[i][j] != "0") {
                return false;
            }
        }
    }

    // Verificar diagonalmente (de izquierda a derecha)
    for (int i = 0; i <= 2; ++i) {
        for (int j = 0; j <= 3; ++j) {
            if (tablero[i][j] == tablero[i + 1][j + 1] &&
                tablero[i + 1][j + 1] == tablero[i + 2][j + 2] &&
                tablero[i + 2][j + 2] == tablero[i + 3][j + 3] &&
                tablero[i][j] != "0") {
                return false;
            }
        }
    }

    // Verificar diagonalmente (de derecha a izquierda)
    for (int i = 0; i <= 2; ++i) {
        for (int j = 3; j < 7; ++j) {
            if (tablero[i][j] == tablero[i + 1][j - 1] &&
                tablero[i + 1][j - 1] == tablero[i + 2][j - 2] &&
                tablero[i + 2][j - 2] == tablero[i + 3][j - 3] &&
                tablero[i][j] != "0") {
                return false;
            }
        }
    }
    return true;

}


/* Funcion intento de Guardado
void GuardadEstado(string tablero[6][7]){
    fstream Readline("Guardado.csv", ios::in);
    if(!Readline){
        fstream CreateFile("Guardado.csv",ios::out);
    }
    File.open("Guardado.csv", ios::app);
    for(int i = 0; i < 6; i++){
        for(int y = 0; i < 7; y++){
            if(y == 6){
                File<<tablero[i][y];
            }else{
            File<<tablero[i][y]+",";}
        }
        File<<endl;
    }
    File.close();
}
*/
void juegoPvP(){
    string tablero[6][7];
    string jugador = "1";
    bool juegoEnProgreso = true;
    CrearTablero(tablero);
    while (juegoEnProgreso){
        bool repetirtirar = true;
        int columna;
        ImprimirTablero(tablero);
        while(repetirtirar){
        cout<<endl<<"Seleciona la columna que quieras tirar la ficha"<<endl<<"Respuesta: ";
        cin >> columna;
        columna--;
        repetirtirar = verificarColumna(tablero,columna);
        }
    insertarFicha(tablero,columna,jugador);
    jugador = cambiarJugador(jugador);
    juegoEnProgreso = verificarTablero(tablero);
    }
    ImprimirTablero(tablero);
    jugador = cambiarJugador(jugador);
    cout <<"Juego terminado gana: Jugador "<<jugador<<endl<<endl;

}

//Funciones como base de conect 4 y PVP

int main() {
    bool gateway = true;
    string respuesta;
    while(gateway){
        cout<<"CONECTA 4 by ed studios"<<endl<<"Selecciona el modo de juego"<<endl<<"1) PVP"<<endl<<"2) Vs Ia facil"<<endl<<"3) VS Ia Intermedio"<<endl<<"4) VS Ia Dificil"<<endl<<"5) Salir"<<endl<<"Respuesta: ";
        cin >> respuesta;
        if(respuesta == "1"){
            juegoPvP();
        }
        else if(respuesta == "2"){
            cout<<"opcion 2"<<endl;
        }
        else if(respuesta == "3"){
            cout<<"opcion 3"<<endl;
        }
        else if(respuesta == "4"){
            cout<<"opcion 4"<<endl;
        }
        else if(respuesta == "5"){
            gateway = false;
        }
    }

    return 0;
}