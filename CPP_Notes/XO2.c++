#include <iostream>
#include <list>
#include <string>
#include <ctime>

using namespace std;

bool path = false; //verifica si el usuario pone las coordenadas correctamente
//pueden ser razones como salirse de rango, agregar una celda donde ya hay una ficha, o simplemente cometer un error

bool user_win = false; // verifica si el usuario gana
bool prog_win = false; // verifica si el programa gana el juego
bool user1 = false; // para verificar que el usuario está jugando en este momento
bool endf = false; // final es cuando te quedas sin fichas
bool fin = false; // fin es cuando terminas el juego 

int fila, col; //variables para las coordenadas
string cont = "s";  // para continuar el programa
string user; // identificador de ficha para el usuario
string prog; // identificador de ficha para el programa
bool repeat = false; // verifica si el juego se repite, y si es así, restablecerá todos los valores booleanos



// fichas that will be used by the user/program 

void tabla_usuario(); 
void tabla_prog();
void result(string f); //verifica lo que se agrega por cada jugador y determina si alguien ya ganó o no
void verify_res(); 
void state(); //checa como alguien ganó, perdió, o se termino el programa
int main();

    string tabla[3][3] = {{"_","_","_"},{"_","_","_"},{"_","_","_"}};



int main()
{

    
    
    while(cont == "s"){//repite el programa para que el jugador juegue hasta que diga "no"
    if(repeat == true){ //siempre cuando se repite el programa, resetea los bucles para no tener errores futuras
        path = false;
        user_win = false;
        prog_win = false;
        user1 = false; // para verificar que el usuario esta jugando en el momento
        endf = false; 
        fin = false;
        repeat = false;
    }
    cout << "Es que jugar TIC-TAC-TOE" << endl;
    cout << "Instrucciones: Para agregar tu ficha, tienes que agregar el coordenada en usando filas/columnas" << endl;
    cout << "Nota importante: la coordenada mas pequeña seria [0][0], y la mas grande [2][2]" << endl;
    cout << "\n";
    
    //tabla
    for(int i = 0; i < 3; i++){
        cout << "   ";
        for(int c = 0; c < 3; c++){
            cout << tabla[i][c];
            cout << "   ";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
    cout << "Escoge una ficha (x/o): ";
    cin >> user;
    // checa y asigna el turno del jugador, al igual de ver si pone otro dipo de dato que no es
    if(user == "o"){
        prog = "x";
    } else if (user == "x"){
        prog = "o";
    } else {
        cout << "Por favor escoge una ficha de nuevo (x/o): ";
        cin >> user;
    }
    
    //*********************************************************************************//
    // SI EL USUARIO DECIDE LA FICHA "O"
        
        while(user == "o"){
            prog = "x";
        while(path == false){ //la ruta verifica lo que ingresa el usuario dentro de la tabla, además de no agregar una ficha sobre otra ficha
            cout << "\n";
            cout << "Tu turno \n";
            cout << "Dame la fila: ";
            cin >> fila;
            cout << "\n" << "Dame la columna: ";
            cin >> col; 
            tabla_usuario(); //nos lleva a la funcion del usuario
            }
        user1 = true; // este bool verifica que es el turno del usuario antes de entrar al funcion resultado
        //esto es porque tenemos que ver el turno del jugador para saber quien gana en el identificador que "alguien gano" 
        //basicamente esto asegura quien es ese "alguien"
        result(user);   
        state();
        if(fin == false){ //verifica si no ha terminado el juego por el razon de que el usuario ya gano
        //si el usuario gano antes de que el programa imprima sus propios valores, se tiene que prevenir que ese turno se permita y acabar el juego
            user1 = false; // asigna que ya es el turno del programa
            tabla_prog(); //nos lleva a la funcion en como juega el programa
            result(prog); // se agrega la ficha del programa 
            state();
        } else if (fin == true){ // dice si se acaba el juego, pregunto al usuario si quiere repetir el juego
            cout << "\n"; 
            cout << "Gracias por jugar, quieres ir de nuevo? (s/n): ";
            cin >> cont;
            cout << "\n";
            // este variable,, como habiamos dicho, hace  de repeat hace que 
            if(cont == "s"){
                repeat = true;
            } else {
                repeat = false;
            }
            break;
        }
        
        path = false;
        }
        
    //*********************************************************************************//
    //  SI EL USUARIO ESCOGE LA FICHA "X"
    // la unica diferencia aqui es que se cambia el orden de quien empieza el juego. 
    //todos los datos son iguales, solo acomodados de manera diferente
        
    while(user == "x"){
        prog = "o";
        user1 = false;
        tabla_prog();
        result(prog);
        state();
        path = false;
        if(fin == false){
            while(path == false){
            cout << "\n";
            cout << "Tu turno \n";
            cout << "Dame la fila: ";
            cin >> fila;
            cout << "\n" << "Dame la columna: ";
            cin >> col; 
            tabla_usuario();
            }
            user1 = true;
            result(user);
            state();
        } else if (fin == true) {
            cout << "\n";
            cout << "Gracias por jugar, quieres ir de nuevo? (s/n): ";
            cout << "\n";
            cin >> cont;
            if(cont == "s"){
                repeat = true;
            } else {
                repeat = false;
            }
            break;
        }
        path = false;
        
        
    }
    //*********************************************************************************//
        
    }
    
    return 0;
    }
   // NOTA: HAY QUE HACER LA VERIFICACION DEL SISTEMA DENTRO DE LA COMPARACION DE COORDENADAS PARA ACOMPAÑAR LA FUNCION tabla_usuario,
     //DETERMINAR SI EL PORGRAMADOR O EL USUARIO GANÓ/PERRO,
     //O SE TERMINÓ EL PROGRAMA PORQUE LA MESA SE QUEDÓ SIN FICHAS
    
    
    void tabla_usuario(){ //aqui empezamos en como funciona la funcion del usuario
    //basicamente la primera parte se verifica todos los errores del usuario y de porque ocurre 
    if(fin != true){ // si al final no se ha verificado que el juego ha determinado, en el caso que el programa hubiera ganado antes del turno del jugador
    if (fila > 2 || col > 2){ //este es un identifucador de rango, por si alcaso el usuario pon un rango demasiado grande
    //lo cual pregunta al usuario de nuevo para insertar sus datos 
        cout << "\n";
        cout << "Perdon pero saliste fuera de rango, recuerda que son coordenadas desde [0][0] hasta [2][2]" << endl;
        path = false;
        //esto identifica si el usuario esta intentando de agregar una ficha en una celda en donde ya hay una 
    } else if (tabla[fila][col] != "_"){
        cout << "\n";
        cout << "Perdon pero ya hay una ficha, dame otra celda" << "\n";
        path = false;
    
    } else {
        //al final, si no corre errores el usuario, ya podemos ubicar la coordenada y reemplazarlo con la ficha del usuario
        tabla[fila][col] = user;
        cout << "\n";
        cout << "Tu respuesta: " << endl;
        cout << "\n";
        
        for(int i = 0; i < 3; i++){
        cout << "   ";
        for(int c = 0; c < 3; c++){
            cout << tabla[i][c];
            cout << "   ";
            }
            cout << "\n";
        }
    path = true; // da que se puede continuar el programa, al confirmar que ya no hay errores 
    }
    
    }
    }
    
    //esto es el funcion del programa, donde se utiliza numeros aleatorios para escoger la coordenada para su ficha 
    void tabla_prog(){
        
        int a = 0;
        int b = 0;
        
        
        int i = 0;
        
        if(fin != true){
        //aqui importamos una semilla en un ciclo donde se repite tantas veces posibles hasta que nos da una coordenada random que se podrá utilizar 
        //el rango es de 0 a 2 para los numeros aleatoros
        //los numeros aleatorios se saca por medio del tiempo del sistema 
        while(i < 1){
        srand(time(0));
           a = rand() % 3 + 0;
           b = rand() % 3 + 0;
           
           if(tabla[a][b] == "_"){
              tabla[a][b] = prog;
                i++;
           } else {
               continue;
           }
        cout << "\n";
        cout << "Mi respuesta: " << endl;
         //imprima la tabla del programa
        for(int i = 0; i < 3; i++){
        cout << "   ";
        for(int c = 0; c < 3; c++){
            cout << tabla[i][c];
            cout << "   ";
        
            }
        cout << "\n";
        }
         }
         
        }
    }
    
    
    void result(string f){
    // esta funcion determina si el jugador a ganado o perdido al insertar una coordenada
    // se evalua 8 diferentes posibilidades de ganar
    
    //**************************************************************************************************
    // VERIFIES IF SOMEONE WINS:
    
    // rows: 
        if(tabla[0][0] == f && tabla[0][1] == f && tabla[0][2] == f){
            verify_res();
            
        }
        if(tabla[1][0] == f && tabla[1][1] == f && tabla[1][2] == f){
            verify_res();
        }
        if(tabla[2][0] == f && tabla[2][1] == f && tabla[2][2] == f){
            verify_res();
        }
        
    // columns:
        if(tabla[0][0] == f && tabla[1][0] == f && tabla[2][0] == f){
            verify_res();
        }
        if(tabla[0][1] == f && tabla[1][1] == f && tabla[2][1] == f){
            verify_res();
        }
        if(tabla[0][2] == f && tabla[1][2] == f && tabla[2][2] == f){
            verify_res();
        }
        
        
    // diagonals:
        if(tabla[0][0] == f && tabla[1][1] == f && tabla[2][2] == f){
            verify_res();
        }
        if(tabla[2][0] == f && tabla[1][1] == f && tabla[0][2] == f){
            verify_res();
        }
        
    //**************************************************************************************************
    // CHECKS TO SEE OTHER TERMS 
        
        // aqui checa si todavia hay disponibilidad de celdas para agregar una ficha
        int check = 0;
        for(int i = 0; i < 3; i++){
            for(int c = 0; c < 3; c++){
                if(tabla[i][c] != "_"){
                    check++;
                } 
            }
        }
        // dice que si no hay mas espacios, se ha terminado el juego por default 
        if(check == 9 && user_win != true || check == 9 && prog_win != true){
            endf = true;
        } 
        check = 0;

    }
    
    // esto se somete dentro de nuestra funcion void result() para ver cual es el jugador quien gano al ser aprobado de los casos
    // se hace por ver cual es el turno del jugador
    void verify_res(){
       if(user1 == true){
                user_win = true;
                fin = true;
            } else {
                prog_win = true;
                fin = true;
            } 
    }
    
    // aqui es la funcion donde se determina quien, y como gana/pierde un jugador, terminando el programa
    // esro crea una confirmacion que el end = true
     void state(){
    if(user_win == true){
        cout << "\n";
        cout << "You gwin ! :D" << endl;
        fin = true;
        
        } else if (endf == true){
        cout << "\n";
        cout << "U outa checkers loosa JAJAKS" << endl;
        fin = true;
        } else if (prog_win == true){
        cout << "\n";
        cout << "You so weak. Me beat ur ass" << endl;
        fin = true;
        } 
        
        //al terminar el primer "juego", se resetea la tabla si posiblemente el usuario quiere jugar de nuevo
        if(fin == true){
            for(int i = 0; i < 3; i++){
                for(int c = 0; c < 3; c++){
                    tabla[i][c] = "_";
                }
            }
        }
        
     }

    