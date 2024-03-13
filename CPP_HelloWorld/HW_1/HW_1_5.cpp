
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    cout << "Cuanta gente quieres que entre para este obra de teatro? ";

    int peop;

    cin >> peop;
    cout << "Cuanto va a costar el ticket?";

    double cost;

    cin >> cost;
    cout << "**************************************************************************" << endl;
    cout << "" << endl;

    string table[6][4] = {
            {"             ", "Edad       ", "Descuento    ", "Dinero descontado"},
            {"Categoria 1: ", "5-14       ", " 35%         $", ""},
            {"Categoria 2: ", "15-19      ", " 25%         $", ""},
            {"Categoria 3: ", "20-45      ", " 10%         $", ""},
            {"Categoria 4: ", "46-65      ", " 25%         $", ""},
            {"Categoria 5: ", "66 y mayor ", " 35%         $", ""}
    };

    int age = 0;

    int guestList[5] = {0};
    double disc[5] = {0.35, 0.25, 0.10, 0.25, 0.35};

    for (int v = 0; v < peop; v++) {
        age = rand() % 96 + 5;

        if (age >= 5 && age <= 14) {
            guestList[0]++;
        } else if (age > 14 && age <= 19) {
            guestList[1]++;
        } else if (age > 19 && age <= 45) {
            guestList[2]++;
        } else if (age > 45 && age <= 65) {
            guestList[3]++;
        } else {
            guestList[4]++;
        }

        double hold = 0;

        for (int x = 1; x <= 5; x++) {
            for (int y = 3; y <= 3; y++) {
                hold = guestList[x - 1] * cost * disc[x - 1];
                table[x][y] = to_string(hold).substr(0, 5);
            }
        }
    }

    for (int x = 0; x < 6; x++) {
        for (int y = 0; y < 4; y++) {
            cout << table[x][y];
        }
        cout << " " << endl;
    }

    return 0;
    }


