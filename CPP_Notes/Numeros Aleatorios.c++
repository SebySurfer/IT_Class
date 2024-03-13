#include <iostream>
#include <ctime>

int num;
char ans = 's';
int a;
int count = 0;

int main(){
    srand(time(NULL));
    a = rand() % 3 + 1;
    
    
    while(ans == 's'){
        
        cout << "Adivina un numero que se elige al azar: ";
        cout<< a;
        cin >> num;
        
        if(num == a){
            cout << "Ganaste! \n";
            cout << "Quieres intentar de nuevo? (s/n): ";
            cin >> ans;
            count = 0;

        } else if (num != a){ 
            count = count + 1;
            while (count < 3){
                    cout << "Intenta de nuevo\n";
                    break;
                    }
            if (count >= 3){
            cout << "Perdiste el pnche juego. El numero era: ", a , "\n";
            cout << "Quieres intentar de nuevo? (s/n): \n";
            cin >> ans;
            count = 0;
                } 
            }
    }
            return 0;
}
    