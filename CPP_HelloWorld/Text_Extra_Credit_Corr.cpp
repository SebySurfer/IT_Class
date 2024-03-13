/*Nombre completo: Gregory Sebstian Willis
 *ID: 00462594
 *Serie:

 *Tome este archivo main.cpp como su archivo de prueba
 *y crea otros archivos para el desarrollo de la clase
*/

#include <iostream>
#include <string>

using namespace std;


class SquidGame{
public:

    int premio;
    int num_de_jugadores;
    bool ganador;

    SquidGame(int premio, int  num_de_jugadores, bool ganador){

        this-> premio = premio;
        this-> num_de_jugadores = num_de_jugadores;
        this-> ganador = ganador;

    }

    SquidGame(){

    }

    //Getters:
    int getPremio(){
        return premio;
    }


    int getNum_de_jugadores(){
        return num_de_jugadores;
    }

    bool getGanador(){
        return ganador;
    }

    //Setters:

    void setPremio(int x){
        premio = x;
    }


    void setNum_de_jugadores(int x ){
        num_de_jugadores = x;
    }


    void setGanador(bool x){
        ganador = x;
    }




public: void Jugar(int num){
        int surv = 0;
        string juego;

        if(num == 1){
            surv = num_de_jugadores * 0.90;
            juego = "Luz Verde, Luz Roja";

        } else if(num == 2){
            surv = num_de_jugadores * 0.60;
            juego = "Ppopgi";

        } else if (num == 3){
            surv = num_de_jugadores * 0.40;
            juego = "El juego de la cuerda";

        }

        cout << surv << " jugadores de " << juego << " pasan a la siguiente ronda"<< endl;



    }

public: void FinJuego(bool all_des, bool ind_des ){
        if(all_des == true && ind_des == true){
            cout << "Fin de Juego! Han perdido "<< premio << " millones, pero siguen vivos!" <<endl;
        }


        if (ind_des == false &&  ganador == true){
            cout << "Fin de Juego !! Has ganado " << premio << " millones !" << endl;

        } else {
            cout << "EL Juego continua "<< endl;
            cout << "Jugador eliminado" << endl;


        }

    }




};

int main(){


    ;int x;
    int y;
    int j;

    SquidGame Game1(1, 2, false);
    SquidGame Game2(1, 2, false);




    cout << "Ingresa el premio para esta edicion del juego: " << endl;
    cin >> x;
    Game1.setPremio(x);

    cout << "Numero de jugadores" << endl;
    cin >> y;
    Game1.setNum_de_jugadores(y);

    cout << "Que juego van a jugar " << endl;
    cin >> j;
    Game1.Jugar(j);







    cout << "Ingresa el premio para esta edicion del juego: " << endl;
    cin >> x;
    Game2.setPremio(x);

    cout << "Numero de jugadores" << endl;
    cin >> y;
    Game2.setNum_de_jugadores(y);


    char a;
    char b;
    char c;

    bool l1;
    bool l2;
    bool l3;


    cout << "Los jugadores quieren continuar? (s/n)" << endl;
    cin >> a;

    if(a == 's'){
        l1 = true;

    } else {
        l1 = false;
    }


    cout << "El jugador quiere seguir en el juego? (s/n)" << endl;
    cin >> b;

    if(b == 's'){
        l2 = true;

    } else {
        l2 = false;
    }



    cout << "Es usted el ganador? (s/n)" << endl;
    cin >> c;

    if(c == 's'){
        Game2.setGanador(true);

    } else {
        Game2.setGanador(false);
        ;
    }

    Game2.FinJuego(l1, l2);




}










