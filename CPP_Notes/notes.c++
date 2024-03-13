#include <iostream>

using namespace std;

int suma(int x, int y);
int res = 0;

int main()
{
    int a, b = 0;
    cout << "Dame un numero: ";
    cin >> a;
    cout << "Dame otro: ";
    cin >> b;

    suma(a, b);
    cout << "res: " << res;
    return 0;
}

int suma(int x, int y){
    res = x + y;
    return(res);
}


