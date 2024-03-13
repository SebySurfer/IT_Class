
#include <iostream>

/*
Using namespace std allows the program not to use std every dam time 
*/
using namespace std;


int main()
{
    
    short srt;
    cout<<"Dame un Short";
    cin >> srt;

    
    int integer;
    cout << "Dame un integer";
    cin >> integer;

    
    long intlong;
    cout << "Dame un long, siendo un entero, pero mas largo";
    cin >> intlong;

    
    char character;
    cout << "Dame un character, basicamente una letrita";
    cin >> character;

    
    float numdec;
    cout << "Dame un float, que es numero con decimales";
    cin >> numdec;

    
    double numdec2;
    cout << "Dame un double, q es mas preciso que el anterior";
    cin >> numdec2;

    
    long double numdec3;
    cout << "Dame un long double ... creo que ya sabes donde va con esto";
    cin >> numdec3;

    bool alogic;
    cout << "Ahora dame algo 'true' or 'false' ";
    cin >> alogic;
    

    return 0;
    
    
}

