#include <iostream>
#include <string>

using namespace std;
//Note: the variables HAVE to be after namespace, or else it won't include
//them in the program
int count = 0;
int n; 
string st = "*";
string ans = "";
char cont = 's';

int main()
{
    
    while (cont == 's'){
      cout << "Vamos a dibujar un triangulo. Especifica el numero de filas que quieras que imprime: ";
        cin >> n;  
        
        do{
        ans = ans + st;
        cout << ans;
        cout << " \n";
        count = count + 1;
    } while (count < n);  
    //Note: The order of the program DOES MATTER !!!!
    //If you would of put the If statement before the dowhile,
    //it would of printed the initial phrase again then asked to try again//
    
    if (count >= n){
        cout << "Quieres intentar de nuevo?: ";
        cin >> cont;
    
    }
    }
    return 0;
    
}