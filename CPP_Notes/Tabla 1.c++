#include <iostream>

using namespace std;

double **list;
const int fn = 0;
const int cn = 0;

int main()
{
    cout << "Vamos a crear una tabla. Cuantos celdas para la fila: ";
    cin >> fn; 
    cout << "\n Cuantos celdas para la columna: ";
    cin >> cn;
    
    list = new double[fn][cn];

    cout << "\n Dame los datos que deseas agregar en la fila";
    
    //to asign each value from the user
    
    for (int i = 0; i < fn; i++){
        
        for(int c = 0; c < cn; c++){
            cin >> list[i][c];
        }
    }
    //to print the table. and Yes, you can't put "cout << list[fn][cn]"
    for (int i = 0; i < fn; i++){
        for(int c = 0; c < cn; c++){
            cout << list[i][c];
        }
    }
    
    return 0;
}


//por alguna pnche razon no funciona por el compilador