// Fig. 13.3: fig13_03.cpp
// Impresión de la dirección almacenada en una variable char *
#include <iostream>
using namespace std;
int main()
{
    const char* palabra = "nuevamente"; // Changed const char const to const char*
    // muestra el valor de char *, y luego muestra el valor de char *
    // después de una static_cast a void *
    cout << "El valor de la palabra es: " << palabra << endl; // Fixed output syntax
    cout << "El valor de static_cast<const void*>(palabra) es: " << static_cast<const void*>(palabra) << endl; // Fixed output syntax
    //fin de main
}