
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    double nin[52] = {0.0};
    double jov[52] = {0.0};
    double ad_j[52] = {0.0};
    double ad_m[52] = {0.0};

    int age = 0;
    double weight = 0.0;

    for (int i = 0; i < 50; i++) {
        age = rand() % 100;

        if (0 <= age && age < 13) {
            weight = (rand() / static_cast<double>(RAND_MAX)) * (45 - 1) + 1;
            nin[0]++;
            nin[i + 1] = weight;
        } else if (age >= 13 && age < 30) {
            weight = (rand() / static_cast<double>(RAND_MAX)) * (100 - 45) + 45;
            jov[0]++;
            jov[i + 1] = weight;
        } else if (age >= 30 && age < 60) {
            weight = (rand() / static_cast<double>(RAND_MAX)) * (100 - 45) + 45;
            ad_j[0]++;
            ad_j[i + 1] = weight;
        } else {
            weight = (rand() / static_cast<double>(RAND_MAX)) * (80 - 45) + 45;
            ad_m[0]++;
            ad_m[i + 1] = weight;
        }

        age = 0;
    }

    double* list[] = {nin, jov, ad_j, ad_m};

    double sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int x = 0; x < 50; x++) {
            sum += list[i][x + 1];
        }
        list[i][51] = sum;
        sum = 0;
    }

    string tabla[5][4] = {
            {"Categoria      ", "Edad       ", "Cantidad", "Promedio"},
            {"Niños          ", "0 - 12     ", "", ""},
            {"Jovenes        ", "13-29      ", "", ""},
            {"Adultos        ", "30-59      ", "", ""},
            {"Adultos mayores", "60 y mas   ", "", ""}
    };

    int integ = 0;
    for (int i = 0; i < 4; i++) {
        integ = static_cast<int>(list[i][0]);
        tabla[i + 1][2] = to_string(integ);
        tabla[i + 1][3] = to_string((list[i][51] / list[i][0]));
        integ = 0;
    }

    cout << "Resultados: " << endl;

    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 4; y++) {
            cout << tabla[x][y] + "                      ";
        }

        cout << endl;
    }

    cout << endl << "Tabla de Frecuencias: " << endl;

    for (int i = 0; i < 4; i++) {
        cout << tabla[i + 1][0] << ": ";

        for (int x = 0; x < 100; x++) {
            if (static_cast<int>(list[i][0]) == x) {
                break;
            }

            cout << "*";
        }

        int percentage = static_cast<int>(round(((list[i][0]) / 50.0) * 100));
        cout << " (" << percentage << "%)" << endl;

    }
    return 0;
}
