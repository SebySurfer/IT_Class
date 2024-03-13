#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;



int main() {

    srand(static_cast<unsigned>(time(0)));

    int cand1 = 0;
    int cand2 = 0;
    int cand3 = 0;
    int vot;

    for (int i = 0; i < 2500000; i++) {
        vot = rand() % 3;

        if (vot == 0) {
            cand1++;
        } else if (vot == 1) {
            cand2++;
        } else {
            cand3++;
        }
    }

    int list[] = {cand1, cand2, cand3};

    for (int x = 0; x < 3; x++) {
        cout << "Candidato " << (x + 1) << ": " << list[x] << " votos" << endl;
    }

    cout << " " << endl;
    cout << "*********************************************" << endl;

    cout << "Resultados: ";

    if (cand1 > cand2 && cand1 > cand3) {
        cout << "Candidato 1 gano!!! con " << cand1 << " votos" << endl;
    } else if (cand2 > cand1 && cand2 > cand3) {
        cout << "Candidato 2 gano!!! con " << cand2 << " votos" << endl;
    } else {
        cout << "Candidato 3 gano!!! con " << cand3 << " votos" << endl;
    }
    return 0;
}




