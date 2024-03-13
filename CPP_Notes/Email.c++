#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

string c;
int info = 0;
int correo = 0;
int fin = 0; 
int comp = 0;
bool email;
int comp_nom(string c);
int correo_inst(string c);
int final_com(string c);
int det(bool a);
string comp1= "";
int countm;

int main()
{
    cout << "Dame tu correo electronico " << endl;
    cin >> c; 
    
    
    comp_nom(c);
    det(email);
    correo_inst(c);
    det(email);
    final_com(c);
    det(email);
    
    if (countm = 3){
        cout << "Bien hecho !" << endl;
    } else {
        cout << "Get outa here >:(" << endl;
    }


    return 0;
}

int det(bool a){
    if(a = true){
        countm++;
    } else{
        countm = 0;
    }
    return countm;
}


//lee el nombre del usuario hasta llegar a un @
//Tambien compreuba que no haya un @ repetida

int comp_nom(string c){
    
   
     for(int i = 0; i <= c.length(); i++ ){
         
         
        comp = c[i];
        if (comp1 == "@"){
            info++;
            comp1 = "";
            break; 
        } else {
            comp1 = "";
            info++;
        }
    }
    return info;
    
       int checar = 0;
    for(int i = 0; i <= c.length(); i++){
        comp1 = c[i];
        if (comp1 == "@"){
            comp1 = "";
            checar++;
        }
        if (checar > 1){
            email = false;
        } else if (checar = 0){
            email = false;
        } 
 }
 return email;
}

//lee la parte de la organizacion hasta toparse con un punto
int correo_inst(string c){
    
    for(int i = info + 1; i <= c.length(); i++){
        if (comp1 == "."){
            correo++;
            comp1 = "";
            break;
        } else {
            correo++;
        }
    }
    
    return correo;
}

//Comprueba que en el final me da .com, sin el "."
//Naturalmente, esto comprueba que no se dio dos ".", porque solo se puede usar 
//cuando se termina la organizacion, y si logicamente no hay un "com" despues, 
//significa que el usuario esta en lo incorrecto

int final_com(string c){
    for(int i = info + correo; i <= c.length(); i++){
        fin++;
        comp1 = c[i];
        switch(fin){
        case 1:
        if (comp1 == "c"){
            email = true;
            comp1 = "";
        } else { 
            email = false;
            comp1 = "";
        }
        break;
        
        case 2:
        if (comp1 == "o"){
            email = true;
            comp1 = "";
        } else { 
            email = false;
            comp1 = "";
        }
        break;
        
        case 3:
        if (comp1 == "m"){
            email = true;
            comp1 = "";
        } else { 
            email = false;
            comp1 = "";
        }
        break;
        }
        }
        
        return email;
    }