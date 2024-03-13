// Fig. 13.9: Fig13_09.cpp
// Control de la precisión de los valores de punto flotante.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() // Fixed parentheses
{
    double raiz2 = sqrt(2.0); // calcula-la raíz cuadrada de 2
    int posiciones; // precisión, varía de 0 a 9
    cout << "Raiz cuadrada de 2 con precisiones de 0 a 9." << endl; // Fixed output syntax
    cout << "Precision establecida mediante la funcion miembro precision " << "de ios_base:" << endl; // Fixed output syntax
    cout << fixed; // usa la notación de punto fijo
    // muestra la raíz cuadrada usando la función precision de ios_base
    for (posiciones = 0; posiciones <= 9; ++posiciones)
        cout.precision(posiciones);
    cout << raiz2 << endl; // Fixed indentation
} // fin de for
cout << "\nPrecision establecida por el manipulador de flujo " << "setprecision:" << endl; // Fixed output syntax
// establece la precisión para cada dígito, y después muestra la raíz cuadrada
for (posiciones = 0; posiciones <= 9; ++posiciones)
cout << setprecision(posiciones) << raiz2 << endl; // Fixed indentation
} // fin de