#include <iostream>
#include <string>

using namespace std;
string star = "*";
string ans;
int count = 0;
int n = 0;
int ne = 0;
int i;

int main()
{
    cout << "vamos hacer un triangulo en revez. Cuantos filas quieres hacer?";
    cin >> n;
    
    ne = ne + n;
        
    do{
        for (i = 0; i < ne; i++){
            ans = ans + star;
        }
        //What i did, is i made it loop until it printed the answer i wanted//
        i = 0;
        ne = ne - 1;
        cout << ans;
        cout << "\n";
        count = count + 1;
        ans = "";
        
    } while (count < n);
    
   
    return 0;
    
}