
#include <iostream>
#include <string>

using namespace std;

class Factura {
public:
    string pieza;
    string descr;
    int num;
    double precio;

    Factura(string pieza, string descr, int num, double precio) {
        this->pieza = pieza;
        this->descr = descr;
        this->num = num;
        this->precio = precio;
    }

    string getPieza() {
        return pieza;
    }

    string getDescr() {
        return descr;
    }

    int getNum() {
        return num;
    }

    double getPrecio() {
        return precio;
    }



    void setPieza(string pieza) {
        this->pieza = pieza;
    }

    void setDescr(string descr) {
        this->descr = descr;
    }

    void setNum(int num) {
        this->num = num;
    }

    void setPrecio(double precio) {
        this->precio = precio;
    }

    double obtenerMontoFactura() {
        double p = 0;

        if (num < 0) {
            num = 0;
        }

        if (precio < 0) {
            precio = 0.0;
        }

        p = num * precio;

        return p;
    }
};

int main() {

    Factura facturaTest("0EV-303-23R", "Pieza chida", 6, 250.50);

    facturaTest.setDescr("De hecho es mas chida que lo que pense");

    cout << facturaTest.getDescr() << endl;



    cout << facturaTest.obtenerMontoFactura() << endl;

    return 0;
}

