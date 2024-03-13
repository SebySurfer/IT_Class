#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
        
        
    string ans = "y";
        
        while(ans == "y"){
        srand(time(0));
           a = rand() % 3 + 0;
           b = rand() % 3 + 0;
           cout << a << endl;
           cout << b << endl;
           cout << "want to try again?";
           cin >> ans;
        }

    return 0;
}

