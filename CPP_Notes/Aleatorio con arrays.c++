#include <iostream>
#include <list>
#include <string>
#include <ctime>

using namespace std;

bool path = false;
bool user_win = false;
bool prog_win = false;
bool user1 = false;
bool end = false; // end is when you're out of fichas 
bool fin = false; // fin is when you end the game 
int fila, col;
string cont = "s"; 
string ficha;
string user;
string prog;


// fichas that will be used by the user/program 

void tabla_usuario();
void tabla_prog();
string result(string f);
void verify_res();
void state();







int main()
{
    cout << "Es que jugar TIC-TAC-TOE" << endl;
    cout << "Instrucciones: Para agregar tu ficha, tienes que agregar el coordenada en usando filas/columnas" << endl;
    cout << "\n";
    
    string tabla[3][3] = {{"_","_","_"},{"_","_","_"},{"_","_","_"}};
    for(int i = 0; i < 3; i++){
        cout << "\n";
        for(int c = 0; c < 3; c++){
            cout << tabla[i][c];
            cout << "   ";
        }
    }
    
    cout << "Escoge una ficha (x/o): ";
    cin >> ficha;
    user = ficha;
    
    string prog;
    while(cont == "s"){ //repeats the program for the player to play until he says "no"
        
        
    //*********************************************************************************//
    // IF USER CHOOSES TO BE "O"
        
         if(user == "o"){
            prog = "x";
        while(path = false){ //the path verifies  what the user imputs is within the table, as well as not adding a ficha over another ficha 
            cout << "Dame la fila: ";
            cin >> fila;
            cout << "\n" << "Dame la columna: ";
            cin >> col; 
            tabla_usuario(); 
            }
        user1 = true;
        result(user);   
        state();
        if(fin != true){
            user1 = false;
            tabla_prog();
            result(prog);
            state();
        } else {
            cout << "Gracias por jugar, quieres ir de nuevo? (s/n): ";
            cin >> cont;
        }
        
        path = false;
        }
        
    //*********************************************************************************//
    //  IF USER CHOOSES TO BE "X"
        
    if(user == "x"){
        prog = "o";
        user1 = false;
        tabla_prog();
        result(prog);
        state();
        if(fin != true){
            while(path = false){
            cout << "Dame la fila: ";
            cin >> fila;
            cout << "\n" << "Dame la columna: ";
            cin >> col; 
            tabla_usuario();
            }
            user1 = true;
            result(user);
            state();
        } else {
            cout << "Gracias por jugar, quieres ir de nuevo? (s/n): ";
            cin >> cont;
        }
        path = false;
        
        
    }
    
    //*********************************************************************************//
    
        
    }
    
    return 0;
    }
    

    // NOTE: YOU HAVE TO MAKE THE VERIFICATION SYSTEM WITHIN THE COMPARISON OF COORDINATES TO ACCOMPANY THE FUNCTION tabla_usuario, 
    //DETERMINING IF THE PORGRAMMER OR USER WON/LOSS, 
    //OR THE PROGRAM TERMINATED BECAUSE THE TABLE WAS OUT OF FICHAS
    
    
    void tabla_usuario(){

    if (tabla[fila][col] != "_"){
        cout << "Perdon pero ya hay una ficha, dame otra celda" << "\n";
        path = false;
    } else {
        
        tabla[fila][col] = user;
        cout << "Tu respuesta: " << endl;
        cout << "\n";
        
        for(int i = 0; i < 3; i++){
        cout <<"\n";
        cout << "   ";
        for(int c = 0; c < 3; c++){
            cout << tabla[i][c];
            cout << "   ";
            }
        }
    path = true;
    }
    }
    
    
    void tabla_prog(){

        int a = 0;
        int b = 0;
        
        srand(time(0));
        
        
        for(int i = 0; i < 1){
           a = rand() % 3 + 0;
           b = rand() % 3 + 0;
           
           if(tabla[a][b] = "_"){
              tabla[a][b] = prog;
           }
         }
        
    }
    
    
    
    string result(string f){
    
        
    //**************************************************************************************************
    // VERIFIES IF SOMEONE WINS:
    
    // rows: 
        if(tabla[0][0] = f && tabla[0][1] = f && tabla[0][2] = f){
            verify_res();
            fin = true;
        }
        if(tabla[1][0] = f && tabla[1][1] = f && tabla[1][2] = f){
            verify_res();
            fin = true;
        }
        if(tabla[2][0] = f && tabla[2][1] = f && tabla[2][2] = f){
            verify_res();
            fin = true;
        }
        
    // columns:
        if(tabla[0][0] = f && tabla[1][0] = f && tabla[2][0] = f){
            verify_res();
            fin = true;
        }
        if(tabla[0][1] = f && tabla[1][1] = f && tabla[2][1] = f){
            verify_res();
            fin = true;
        }
        if(tabla[0][2] = f && tabla[1][2] = f && tabla[2][2] = f){
            verify_res();
            fin = true;
        }
        
        
    // diagonals:
        if(tabla[0][0] = f && tabla[1][1] = f && tabla[2][2] = f){
            verify_res();
            fin = true;
        }
        if(tabla[2][0] = f && tabla[1][1] = f && tabla[0][2] = f){
            verify_res();
            fin = true;
        }
        
    //**************************************************************************************************
    // CHECKS TO SEE OTHER TERMS 
        
        int check = 0;
        for(int i = 0; i < 3; i++){
            for(int c = 0; c < 3; c++){
                if(tabla[i][c] != "_"){
                    check++;
                } 
            }
        }
        
        if(check == 9 && user_win != true || check == 9 && prog_win != true){
            end = true;
        } 
        
        
        return 0;
    }
    
    
    void verify_res(){
       if(user1 = true){
                user_win = true;
            } else {
                prog_win = true;
            } 
    }
    
    
     void state(){
    if(user_win = true){
        cout << "You gwin ! :D" << endl;
        fin = true;
        } else if (end = true){
        cout << "U outa checkers loosa JAJAKS" << endl;
        fin = true;
        } else if (prog_win = true){
        cout << "You so weak. Me beat ur ass" << endl;
        fin = true;
        }  
    }
    
    