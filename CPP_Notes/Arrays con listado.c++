#include <iostream>

using namespace std;

int main()
{
    int count1;
    double mayinf;
    double meninf;
    
    string mes[12]= {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", 
    "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    
    cout<<"Dame la inflación de cada mes: ";
    inf = new double [12];
    
    for(int i = 0; i < 13; i++){
        cout<< mes[i], ": ";
        cin >> inf[i];
        cout<< "\n";
    }
    
    int x1, x2;
    for(int i = 1; i < 13; i++){
        x2 = x2 + inf[i];
        if (x2 > x1 ){
            x1 = 0;
            x1 = x1 + inf[i];
            x2 = 0;
            mayinf = i;
        } else {
            x2 = 0;
            
        }
       
    }
    
    //You crate a new list[n], not knowing the amount of variables put into the list, within a for-loop
    //This for-loop will determine for each position if its above the average line, and if it does, find the position of the list that is being used, use that same position
    //within the string list, and add it to our new list.

    return 0;
}