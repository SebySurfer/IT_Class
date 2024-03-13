#include <iostream>
#include <string>

using namespace std;


int main() {
    Factura facturaTest("0EV-303-23R", "Pieza chida", 6, 250.50);

    facturaTest.setDescr("De hecho es mas chida que lo que pense");



    cout << facturaTest.getDescr() << endl;
    cout << facturaTest.obtenerMontoFactura() << endl;

    return 0;
}