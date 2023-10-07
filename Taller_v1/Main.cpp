#include <iostream>
#include <vector>
#include "Usuario.h"
#include "Normal.h"
#include "Nino.h"
#include "Admin.h"
#include "Software.h"
#include "Juego.h"
#include "Ofimatica.h"
#include "Produccion.h"
#include "Navegador.h"
#include "Seguridad.h"
#include "Social.h"

using namespace std;

int main(){
    Admin *adm = new Admin("Jose","123123",30,"admin@admin.cl",true);Nino *nino = new Nino("lucas","lucas50",10);Nino *nino1 = new Nino("miguel","migue5021",12);Nino *nino2 = new Nino("benjamin","bj900",9);Nino *nino3 = new Nino("sofia","sof100",14);Normal *normal1 = new Normal("David","D4vid03",23,"david@gmail.com");Normal *normal2 = new Normal("Diego","D327492",32,"diego@gmail.com");Normal *normal3 = new Normal("Elias","EliasG20",20,"elias@gmail.com"); Normal *normal4 = new Normal("Javier","JavierSteel",18,"javier@gmail.com");Normal *normal5 = new Normal("Juan","JuanAniquilador",19,"juan@gmail.com");Normal *normal6 = new Normal("Gabriel","G48riel",40,"gabriel@gmail.com");Normal *normal7 = new Normal("Valentina","Valex420",22,"valentina@gmail.com");Normal *normal8 = new Normal("Daniela","DaNi!!!!",21,"daniela@gmail.com");Normal *normal9 = new Normal("Maria","M4R1A",18,"maria@gmail.com");Normal *normal0 = new Normal("Camila","Camilax20",29,"camila@gmail.com");Juego *juego1 = new Juego("Starcraft","blizzard",15,1000,"RTS");Juego *juego2 = new Juego("Age of empires","Microsoft",15,1000,"RTS");Juego *juego3 = new Juego("Diablo II","blizzard",15,1000,"RPG");Juego *juego4 = new Juego("Dark souls","FromSoftware",15,1000,"RPG");Juego *juego5 = new Juego("CS:GO","Valve",15,1000,"FPS");Juego *juego6 = new Juego("Valorant","Riot Games",15,1000,"FPS");Juego *juego7 = new Juego("Mortal Kombat","Midway Games",15,1000,"FIGHT");Juego *juego8 = new Juego("Dragon Ball Z Figthers"," Arc System Works",16,1000,"FIGHT");Juego *juego9 = new Juego("Space Invader","Taito",10,1000,"RETRO");Juego *juego10 = new Juego("Tetris","Alekséi Pázhitnov",10,1000,"RETRO");Juego *juego11 = new Juego("Minecraft","Mojang",15,1000,"SURVIVAl");Juego *juego12 = new Juego("State of Decay","Undead Labs",15,1000,"SURVIVAL");Juego *juego13 = new Juego("Read dead Redemption","Rockstar",15,1000,"OPEN WORLD");Juego *juego14 = new Juego("Days Gone","SIE Bend ",17,1000,"OPEN WORLD");Juego *juego15 = new Juego("Guitar Hero","RedOctane",14,1000,"MUSIC");Juego *juego16 = new Juego("Just Dance","Ubisoft",12,1000,"MUSIC");Juego *juego17 = new Juego("SCP CB","unkown",20,1000,"HORROR");Juego *juego18 = new Juego("Silent Hills","Konami",20,1000,"HORROR");Juego *juego19 = new Juego("World of Warcraft","blizzard",19,1000,"MMO");Juego *juego20 = new Juego("Albion","unkown",19,1000,"MMO");Ofimatica *ofimatica1 = new Ofimatica("Exel","Microsoft",15,1000,2);Ofimatica *ofimatica2 = new Ofimatica("Access","Microsoft",15,1000,3);Ofimatica *ofimatica3 = new Ofimatica("Outlook","Microsoft",15,1000,1);Ofimatica *ofimatica4 = new Ofimatica("PPT","Microsoft",15,1000,5);Ofimatica *ofimatica5 = new Ofimatica("Word","Microsoft",15,1000,6);Produccion *Produccion1 = new Produccion("Filmora","Wondershare Software",19,1000,"video");Produccion *Produccion2 = new Produccion("Auto-tune","Antares Audio",19,1000,"musica");Produccion *Produccion3 = new Produccion("Obs Studio","OBS Project.",19,1000,"streaming");Produccion *Produccion4 = new Produccion("Paint","Microsoft",19,1000,"foto");Navegador *Navegador1 = new Navegador("google","Larry Page",12,1000);Navegador1 -> agregarHistorial("facebook");Navegador1 -> agregarHistorial("youtube");Navegador1 -> agregarHistorial("github");Navegador1 -> agregarHistorial("twich");Navegador1 -> agregarHistorial("chatgpt");Navegador1 -> agregarHistorial("gmail");Navegador1 -> agregarHistorial("drive");Navegador1 -> agregarHistorial("classrom");Navegador1 -> agregarHistorial("zoom");Navegador1 -> agregarHistorial("friv");Navegador *Navegador2 = new Navegador("firefox","Corporación Mozilla",12,1000);Navegador2 -> agregarHistorial("facebook");Navegador2 -> agregarHistorial("youtube");Navegador2 -> agregarHistorial("github");Navegador2 -> agregarHistorial("twich");Navegador2 -> agregarHistorial("juegosdiarios");Navegador2 -> agregarHistorial("hotmail");Navegador2 -> agregarHistorial("postgres");Navegador2 -> agregarHistorial("cisco");Seguridad *Seguridad1 = new Seguridad("Avast","Avast Software",13,1000,"Ramsomware");Seguridad *Seguridad2 = new Seguridad("Total AV"," Hispasec Sistemas",13,1000,"Spyware");Seguridad *Seguridad3 = new Seguridad("Norton","Symantec",13,1000,"botnet");Seguridad *Seguridad4 = new Seguridad("PC Protect","Total Security Limited",13,1000,"rootkits");Seguridad *Seguridad5 = new Seguridad("Kaspersky","Yevgueni Kasperski",13,1000,"gusanos");Seguridad *Seguridad6 = new Seguridad("AVG","AVG Technologies",13,1000,"troyano");Social *social1 = new Social("Instagram","Kevin Systrom",15,1000);Social *social2 = new Social("Habbo","Sulake Corporation",19,1000);
    vector<Usuario> *Usuarios;Usuarios -> push_back(*adm);Usuarios -> push_back(*nino);Usuarios -> push_back(*nino1);Usuarios -> push_back(*nino2);Usuarios -> push_back(*nino3);Usuarios -> push_back(*normal1);Usuarios -> push_back(*normal2);Usuarios -> push_back(*normal3);Usuarios -> push_back(*normal4);Usuarios -> push_back(*normal5);Usuarios -> push_back(*normal6);Usuarios -> push_back(*normal7);Usuarios -> push_back(*normal8);Usuarios -> push_back(*normal9);Usuarios -> push_back(*normal0);
    vector<Software> *Softwares;Softwares -> push_back(*juego1);Softwares -> push_back(*juego2);Softwares -> push_back(*juego3);Softwares -> push_back(*juego4);Softwares -> push_back(*juego5);Softwares -> push_back(*juego6);Softwares -> push_back(*juego7);Softwares -> push_back(*juego8);Softwares -> push_back(*juego9);Softwares -> push_back(*juego10);Softwares -> push_back(*juego11);Softwares -> push_back(*juego12);Softwares -> push_back(*juego13);Softwares -> push_back(*juego14);Softwares -> push_back(*juego15);Softwares -> push_back(*juego16);Softwares -> push_back(*juego17);Softwares -> push_back(*juego18);Softwares -> push_back(*juego19);Softwares -> push_back(*juego20);Softwares -> push_back(*ofimatica1);Softwares -> push_back(*ofimatica2);Softwares -> push_back(*ofimatica3);Softwares -> push_back(*ofimatica4);Softwares -> push_back(*ofimatica5);Softwares -> push_back(*Produccion1);Softwares -> push_back(*Produccion2);Softwares -> push_back(*Produccion3);Softwares -> push_back(*Produccion4);Softwares -> push_back(*Navegador1);Softwares -> push_back(*Navegador2);Softwares -> push_back(*Seguridad1);Softwares -> push_back(*Seguridad2);Softwares -> push_back(*Seguridad3);Softwares -> push_back(*Seguridad4);Softwares -> push_back(*Seguridad5);Softwares -> push_back(*Seguridad6);Softwares -> push_back(*social1);Softwares -> push_back(*social2);

    bool gateway = true;
    cout<<2<<endl;
    //ciclo para el login y re login, se usan booleanos para la activacion de ciclos
    while (gateway){
    Usuario *actual;
    bool validar = false;
    cout<<"Ingrese su nombre:"<<endl;
    string usu = "";
    cin >> usu;
    cout<<"Ingrese su contrasena:"<<endl;
    string contra = "";
    cin >> contra;

    for(int i = 0; i < Usuarios->size();i++){
        if(usu == Usuarios->at(i).getNombre() && contra == Usuarios->at(i).getContraseña()){
            *actual = Usuarios->at(i);
            validar = true;
        }
    }
    if(validar == false){
        cout<<"Datos Incorrectos o inexistentes... Presiona enter para continuar"<<endl;
        string enter;
        cin >> enter; 
    }
    //si le dedicaria mas tiempo aca seria el menú
    while(validar){
        int seleccion;
        cout<<"Bienvenido Usuario "<<actual ->getNombre()<<" de tipo "<<actual ->presentar()<<endl;
        cout<<"[1] Salir"<<endl;
        cin >> seleccion;
        if(seleccion == 1){
            cout<<"desea volver a logear [1]"<<endl<<"Salir del programa[2]"<<endl;
            cin >> seleccion;
            if(seleccion == 1){
                validar = false;
            }
            if(seleccion == 2){
                validar = false;
                gateway = false;
            }
        }
    }
    }
    

    return 0;
}