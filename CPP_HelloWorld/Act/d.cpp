// Fig. 13.8: Fig13_08.cpp
// Uso de los manipuladores de flujos hex, oct, dec y setbase.
#include <iostream>
#include <iomanip>
using namespace std;
int main() // Fixed parentheses
{
    int numero;
    cout << "Escriba un número decimal: "; // Fixed output syntax
    cin >> numero; // recibe el numero de entrada
    // usa el manipulador de flujo hex para mostrar un número hexadecimal
    cout << numero << " en hexadecimal es: " << hex << numero << endl; // Fixed output syntax
    // usa el manipulador de flujo oct para mostrar un número octal
    cout << dec << numero << " en octal es: " << oct << numero << endl; // Fixed output syntax and added missing semicolon
    // usa el manipulador de flujo setbase para mostrar un número decimal
    cout << setbase(10) << numero << " en decimal es: " << numero << endl; // Fixed output syntax
} // fin de main