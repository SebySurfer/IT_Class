// Fig. 13.6: Fig13_06.cpp
// Introducción de caracteres mediante la función miembro getline de cin.
#include <iostream>
using namespace std;
int main() // Fixed parentheses
{
    const int TAMANIO = 80;
    char buffer[TAMANIO]; // Fixed syntax
    // introduce caracteres en buffer mediante la función getline de cin
    cout << "Escriba un enunciado:" << endl; // Fixed output syntax
    cin.getline(buffer, TAMANIO); // Fixed syntax
    // muestra el contenido de buffer
    cout << "\nEl enunciado introducido es:" << endl << buffer << endl; // Fixed output syntax
} // fin de main