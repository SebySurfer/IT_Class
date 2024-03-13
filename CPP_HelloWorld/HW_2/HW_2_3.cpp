#include <iostream>
#include <string>

using namespace std;

class Fecha {
public:
    int mes;
    int dia;
    int año;

    Fecha(int mes, int dia, int año) {
        this->mes = mes;
        this->dia = dia;
        this->año = año;



    }

    string mostrarFecha() {
        return to_string(mes) + " / " + to_string(dia) + " / " + to_string(año);
    }


    int getMes() {
        return mes;
    }

    int getDia() {
        return dia;
    }

    int getAño() {
        return año;
    }

    void setMes(int mes) {
        this->mes = mes;
    }

    void setDia(int dia) {
        this->dia = dia;
    }

    void setAño(int año) {
        this->año = año;
    }
};

int main() {
    Fecha FechaTest(5, 12, 2024);

    cout << FechaTest.mostrarFecha() << endl;


    cout << "Mi sig cumple :D" << endl;



    return 0;
}