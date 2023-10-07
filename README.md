Para el taller1 se mostraran las Linenas utilizadas para poblar la base de datos, pero antes de eso se mostrara el como se compila utilizando msys2.
g++ Main.cpp -o Main
comando utilizado para la compilacion y la creacion de un ejectable que sera el utilizado para ver el taller
./Main.exe
cabe destacar que esto tiene que estar en el directorio (unico) del taller
Disfrute :D
    Admin *adm = new Admin("Jose","123123",30,"admin@admin.cl",true);
    Nino *nino = new Nino("lucas","lucas50",10);
    Nino *nino1 = new Nino("miguel","migue5021",12);
    Nino *nino2 = new Nino("benjamin","bj900",9);
    Nino *nino3 = new Nino("sofia","sof100",14);
    Normal *normal1 = new Normal("David","D4vid03",23,"david@gmail.com");
    Normal *normal2 = new Normal("Diego","D327492",32,"diego@gmail.com");
    Normal *normal3 = new Normal("Elias","EliasG20",20,"elias@gmail.com");
    Normal *normal4 = new Normal("Javier","JavierSteel",18,"javier@gmail.com");
    Normal *normal5 = new Normal("Juan","JuanAniquilador",19,"juan@gmail.com");
    Normal *normal6 = new Normal("Gabriel","G48riel",40,"gabriel@gmail.com");
    Normal *normal7 = new Normal("Valentina","Valex420",22,"valentina@gmail.com");
    Normal *normal8 = new Normal("Daniela","DaNi!!!!",21,"daniela@gmail.com");
    Normal *normal9 = new Normal("Maria","M4R1A",18,"maria@gmail.com");
    Normal *normal0 = new Normal("Camila","Camilax20",29,"camila@gmail.com");
    Juego *juego1 = new Juego("Starcraft","blizzard",15,1000,"RTS");
    Juego *juego2 = new Juego("Age of empires","Microsoft",15,1000,"RTS");
    Juego *juego3 = new Juego("Diablo II","blizzard",15,1000,"RPG");
    Juego *juego4 = new Juego("Dark souls","FromSoftware",15,1000,"RPG");
    Juego *juego5 = new Juego("CS:GO","Valve",15,1000,"FPS");
    Juego *juego6 = new Juego("Valorant","Riot Games",15,1000,"FPS");
    Juego *juego7 = new Juego("Mortal Kombat","Midway Games",15,1000,"FIGHT");
    Juego *juego8 = new Juego("Dragon Ball Z Figthers"," Arc System Works",16,1000,"FIGHT");
    Juego *juego9 = new Juego("Space Invader","Taito",10,1000,"RETRO");
    Juego *juego10 = new Juego("Tetris","Alekséi Pázhitnov",10,1000,"RETRO");
    Juego *juego11 = new Juego("Minecraft","Mojang",15,1000,"SURVIVAl");
    Juego *juego12 = new Juego("State of Decay","Undead Labs",15,1000,"SURVIVAL");
    Juego *juego13 = new Juego("Read dead Redemption","Rockstar",15,1000,"OPEN WORLD");
    Juego *juego14 = new Juego("Days Gone","SIE Bend ",17,1000,"OPEN WORLD");
    Juego *juego15 = new Juego("Guitar Hero","RedOctane",14,1000,"MUSIC");
    Juego *juego16 = new Juego("Just Dance","Ubisoft",12,1000,"MUSIC");
    Juego *juego17 = new Juego("SCP CB","unkown",20,1000,"HORROR");
    Juego *juego18 = new Juego("Silent Hills","Konami",20,1000,"HORROR");
    Juego *juego19 = new Juego("World of Warcraft","blizzard",19,1000,"MMO");
    Juego *juego20 = new Juego("Albion","unkown",19,1000,"MMO");
    Ofimatica *ofimatica1 = new Ofimatica("Exel","Microsoft",15,1000,2);
    Ofimatica *ofimatica2 = new Ofimatica("Access","Microsoft",15,1000,3);
    Ofimatica *ofimatica3 = new Ofimatica("Outlook","Microsoft",15,1000,1);
    Ofimatica *ofimatica4 = new Ofimatica("PPT","Microsoft",15,1000,5);
    Ofimatica *ofimatica5 = new Ofimatica("Word","Microsoft",15,1000,6);
    Produccion *Produccion1 = new Produccion("Filmora","Wondershare Software",19,1000,"video");
    Produccion *Produccion2 = new Produccion("Auto-tune","Antares Audio",19,1000,"musica");
    Produccion *Produccion3 = new Produccion("Obs Studio","OBS Project.",19,1000,"streaming");
    Produccion *Produccion4 = new Produccion("Paint","Microsoft",19,1000,"foto");
    Navegador *Navegador1 = new Navegador("google","Larry Page",12,1000);
    Navegador1 -> agregarHistorial("facebook");
    Navegador1 -> agregarHistorial("youtube");
    Navegador1 -> agregarHistorial("github");
    Navegador1 -> agregarHistorial("twich");
    Navegador1 -> agregarHistorial("chatgpt");
    Navegador1 -> agregarHistorial("gmail");
    Navegador1 -> agregarHistorial("drive");
    Navegador1 -> agregarHistorial("classrom");
    Navegador1 -> agregarHistorial("zoom");
    Navegador1 -> agregarHistorial("friv");
    Navegador *Navegador2 = new Navegador("firefox","Corporación Mozilla",12,1000);
    Navegador2 -> agregarHistorial("facebook");
    Navegador2 -> agregarHistorial("youtube");
    Navegador2 -> agregarHistorial("github");
    Navegador2 -> agregarHistorial("twich");
    Navegador2 -> agregarHistorial("juegosdiarios");
    Navegador2 -> agregarHistorial("hotmail");
    Navegador2 -> agregarHistorial("postgres");
    Navegador2 -> agregarHistorial("cisco");
    Navegador2 -> agregarHistorial("zoom");
    Navegador2 -> agregarHistorial("friv");
    Seguridad *Seguridad1 = new Seguridad("Avast","Avast Software",13,1000,"Ramsomware");
    Seguridad *Seguridad2 = new Seguridad("Total AV"," Hispasec Sistemas",13,1000,"Spyware");
    Seguridad *Seguridad3 = new Seguridad("Norton","Symantec",13,1000,"botnet");
    Seguridad *Seguridad4 = new Seguridad("PC Protect","Total Security Limited",13,1000,"rootkits");
    Seguridad *Seguridad5 = new Seguridad("Kaspersky","Yevgueni Kasperski",13,1000,"gusanos");
    Seguridad *Seguridad6 = new Seguridad("AVG","AVG Technologies",13,1000,"troyano");
    Social *social1 = new Social("Instagram","Kevin Systrom",15,1000);
    Social *social2 = new Social("Habbo","Sulake Corporation",19,1000);


    En esta parte sera algo que pueda omitir la verdad y es que le mostraria un mejor codigo si le dedicaba mas tiempo o directamente codigo porque compila pero no ejecuta gg no estudiante
