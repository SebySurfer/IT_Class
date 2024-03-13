#include <iostream>
#include <string>

using namespace std;

class Empleado {
public:
    string nombre;
    string ap_pat;
    double sal_men;

    Empleado(string nombre, string ap_pat, double sal_men) {
        this->nombre = nombre;
        this->ap_pat = ap_pat;
        this->sal_men = sal_men;

        //IMPORTANT NOTE: In C++, we need to do -> (arrows) instead of dots when declaring instances of an object within its constructor


        if (sal_men < 0.0) {
            sal_men = 0.0;
        }
    }

    string getNombre() {
        return nombre;
    }

    string getAp_pat() {
        return ap_pat;
    }

    double getSal_men() {
        return sal_men;
    }

    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    void setAp_pat(string ap_pat) {
        this->ap_pat = ap_pat;
    }

    void setSal_men(double sal_men) {
        this->sal_men = sal_men;
    }
};

int main() {
    Empleado emp1("John", "Connor", 150000);


    Empleado emp2("Linda", "Marshly", 120000);

    cout << emp1.getNombre() << ": " << emp1.getSal_men() << endl;

    cout << emp2.getNombre() << ": " << emp2.getSal_men() << endl;


    emp1.setSal_men(emp1.getSal_men() * 1.10);
    emp2.setSal_men(emp2.getSal_men() * 1.10);



    cout << "Ya cambiado con 10% de aumento: " << endl;


    cout << emp1.getNombre() << ": " << emp1.getSal_men() << endl;
    cout << emp2.getNombre() << ": " << emp2.getSal_men() << endl;

    return 0;
}