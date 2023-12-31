///Ejercicio:
///Autor: EJL
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>
# include "rlutil.h"
#include <ctime>
#include <string>


using namespace std;
/// Funci�n para lanzar los dados y obtener un n�mero aleatorio entre 1 y 6
int lanzarDados() {
    return rand() % 6 + 1;
}
    ///Con "anykey" obtenemos el codigo de las teclas;
    ///cout << "key: " << key;
    ///rlutil::anykey();

///con la funcion void le damos color al char seleccionado;
void showItem(const char* text, int posx, int posy, bool selected){

    if (selected){
        rlutil::setBackgroundColor(rlutil::BLUE);
        }
    else{
        rlutil::setBackgroundColor(rlutil::BLACK);
        }

    rlutil::locate(posx, posy);
    cout<< text <<endl;

    rlutil::setBackgroundColor(rlutil::BLACK);
        }

    int main(){
        int op=1, y=0;


        rlutil::hidecursor();

        do {

            rlutil::locate(26, 8);
            cout <<  "QUINIENTOS O ESCALERA" <<endl;
            showItem(" UN JUGADOR          ", 30, 10, y == 0);
            showItem(" DOS JUGADORES       ", 30, 11, y == 1);
            showItem(" VS CPU              ", 30, 12, y == 2);
            showItem(" SALIR                 ", 30, 13, y == 3);

        rlutil::locate(28, 10 + y);
        cout <<(char)62 << endl;


            switch (rlutil::getkey()){
            case 14:  ///up
                rlutil::locate(28, 10 + y);
                cout << " " << endl;
                y--;
                if (y < 0){
                    y=0;
                }
                break;
            case 15: ///down
                rlutil::locate(28, 10 + y);
                cout << " " << endl;
                y++;
                if(y > 3){
                    y=3;
                }
                break;
            case 1: ///enter

                switch(y){
                    case 0:rlutil::cls();
                     {
    srand(time(NULL)); /// Inicializar la semilla del generador de n�meros aleatorios

    int puntuacionObjetivo = 500;
    int puntuacionJugador = 0;
    int dimension = 6;
    int* vdados = new int[dimension]; /// Asignar memoria din�micamente con new
    int Bandera_Combos = 0;
    int c, ce;
    float contador_de_igualdades;
    int i, l;
    float n[2];
    float six = 0;
    float six2 = 0;
    float six3 = 0;
    float trioc;

    std::cout << "Bienvenido al juego de dados 500 o escaleras" << std::endl << std::endl;
     string nombre;
    std::cout << "Ingresa tu nombre a continuacion: " << std::endl << std::endl;
    getline(cin, nombre);

    cout << "Hola, " << nombre << ". Bienvenido." << endl;
    ///la funci�n getline() para leer una l�nea de entrada, incluyendo espacios en blanco, y guardarla en la variable nombre. Luego, imprimimos un mensaje de bienvenida que incluye el nombre ingresado.


    int ronda = 0;

    /// Para terminar cuando el jugador llegue a la cantidad de puntos requerida
    while (puntuacionJugador < puntuacionObjetivo) {
        int cont_lanzamiento = 0;
        ronda++;
        std::cout << "====Ronda: " << ronda <<" ===="<< std::endl;

        int lanzamiento_mayor = 0;

        /// Para separar por rondas de tres lanzamientos
        do {
            std::cout << "Lanza los dados (presiona Enter para lanzar): ";
            std::cin.ignore(); /// Esperar a que el jugador presione Enter

            int lanzamiento = 0;
            cont_lanzamiento++;

            int dado1 = lanzarDados();
            vdados[0] = dado1;
            int dado2 = lanzarDados();
            vdados[1] = dado2;
            int dado3 = lanzarDados();
            vdados[2] = dado3;
            int dado4 = lanzarDados();
            vdados[3] = dado4;
            int dado5 = lanzarDados();
            vdados[4] = dado5;
            int dado6 = lanzarDados();
            vdados[5] = dado6;

            std::cout <<"Has obtenido las siguientes puntuaciones en el lanzamiento:" << std::endl;
            std::cout << "Dado 1: " << dado1 << std::endl;
            std::cout << "Dado 2: " << dado2 << std::endl;
            std::cout << "Dado 3: " << dado3 << std::endl;
            std::cout << "Dado 4: " << dado4 << std::endl;
            std::cout << "Dado 5: " << dado5 << std::endl;
            std::cout << "Dado 6: " << dado6 << std::endl;

            /// COMBOS
            ///COMBO TRIO
            int combos = 0;
            int maxComboValue = 0;
            for (c = 1; c <= 6; c++) {
                contador_de_igualdades = 0;
                for (ce = 0; ce < 6; ce++) {
                    if (vdados[ce] == c) {
                        contador_de_igualdades++;
                        if (contador_de_igualdades >= 3) {
                            if (c > maxComboValue) {
                                maxComboValue = c;
                            }
                            combos++;
                        }
                    }
                }
            }
            ///COMBO TODOS LOS NUMEROS 6
            if (vdados[0] == 6 && vdados[1] == 6 && vdados[2] == 6 && vdados[3] == 6 && vdados[4] == 6 && vdados[5] == 6) {
                lanzamiento = 0;
                six = 1;
                six2 = 1;
                six3 = 1;
                ///COMBO ESCALERA
            } else if (vdados[0] == 1 && vdados[1] == 2 && vdados[2] == 3 && vdados[3] == 4 && vdados[4] == 5 && vdados[5] == 6) {
                lanzamiento = puntuacionObjetivo - puntuacionJugador;
            } else {
                if (combos == 1) {
                    lanzamiento = maxComboValue * 10;
                } else if (combos >= 2) {
                    lanzamiento = maxComboValue * 10;
                } else {
                    lanzamiento = dado1 + dado2 + dado3 + dado4 + dado5 + dado6;
                }
            }

            /// Combo: 6 dados id�nticos (excepto 6)
            float contador_six;
            int s;
            int s2;
            contador_six = 0;
            if (vdados[0] != 6) {
                for (s2 = 0; s2 <= 5; s2++) {
                    if (vdados[0] == vdados[s2]) {
                        contador_six = contador_six + 1;
                    }
                }
            }
            if (contador_six == 6) {
                lanzamiento = vdados[0] * 50;
            }
            ///fin de los combos


            if (lanzamiento_mayor < lanzamiento) {
                lanzamiento_mayor = lanzamiento;
            }

            if (six == 0) {
                std::cout << "En este lanzamiento tu puntuacion fue: " << lanzamiento << std::endl << std::endl;
            } else {
                std::cout << "En este lanzamiento tu puntuacion fue: " << 0 << std::endl << std::endl;
                six = 0;
            }

        } while (cont_lanzamiento < 3);

        if (six2 == 0) {
            std::cout << "El puntaje maximo de la fue: " << lanzamiento_mayor << std::endl << std::endl;
        } else {
            std::cout << "En esta ronda tu puntuacion fue: " << 0 << std::endl << std::endl;
            six2 = 0;
        }

        if (six3 == 0) {
            puntuacionJugador += lanzamiento_mayor;
        } else {
            puntuacionJugador += 0;
            six3 = 0;
        }

        std::cout << "La puntuacion total de "<< nombre << " es " << puntuacionJugador << std::endl << std::endl;
    }

    delete[] vdados; /// Liberar la memoria asignada con delete[]

    std::cout << "Felicidades " <<nombre<<", has alcanzado la puntuacion objetivo de 500." << std::endl;
    std::cout << "Eres el ganador del juego." << std::endl;}
    break;
    case 1:rlutil::cls();
    {
    srand(time(NULL)); /// Inicializar la semilla del generador de n�meros aleatorios

    int puntuacionObjetivo = 500;
    int puntuacionJugador = 0;
    int puntuacionJugador2 = 0;
    int dimension = 6;
    int* vdados = new int[dimension]; /// Asignar memoria din�micamente con new
    int* vdados2 = new int[dimension];
    int Bandera_Combos = 0;
    int Bandera_Combos2 = 0;
    int c, ce;
    int c2, ce2;
    float contador_de_igualdades;
    float contador_de_igualdades2;
    int i, l;
    int i2, l2;
    float n[2];
    float n2[2];
    float six = 0;
    float sixJ2 = 0;
    float six2 = 0;
    float six2J2 = 0;
    float six3 = 0;
    float six3J2= 0;
    float trioc;
    float trioc2;
    int J1, J2;
    int cont_lanzamiento = 0;
    std::cout << "Bienvenido al juego de dados 500 o escaleras" << std::endl << std::endl;
    string nombre;
    string nombre2;

    cout << "Ingresa tu nombre jugador 1: ";
    getline(cin, nombre);

    cout << "Ingresa tu nombre jugador 2: ";
    getline(cin, nombre2);

    cout << "Bienvenidos jugadores "<<nombre<<" y "<<nombre2<<". Que gane el mejor."<<endl;

    int ronda = 0;
    int ronda2 = 0;

    /// Para terminar cuando el jugador llegue a la cantidad de puntos requerida
    while (puntuacionJugador2 < puntuacionObjetivo && puntuacionJugador < puntuacionObjetivo ) {
        for (J1 = 1; J1 <=1; J1++) {
        cont_lanzamiento = 0;
        ronda++;
        std::cout << "Ronda: " << ronda << std::endl;
         std::cout << "Es el turno de: " << nombre << std::endl;

        int lanzamiento_mayor = 0;

        /// Para separar por rondas de tres lanzamientos
        do {
            std::cout << "Lanza los dados (presiona Enter para lanzar): ";
            std::cin.ignore(); /// Esperar a que el jugador presione Enter

            int lanzamiento = 0;
            cont_lanzamiento++;

            int dado1 = lanzarDados();
            vdados[0] = dado1;
            int dado2 = lanzarDados();
            vdados[1] = dado2;
            int dado3 = lanzarDados();
            vdados[2] = dado3;
            int dado4 = lanzarDados();
            vdados[3] = dado4;
            int dado5 = lanzarDados();
            vdados[4] = dado5;
            int dado6 = lanzarDados();
            vdados[5] = dado6;

            std::cout << "Has obtenido las siguientes puntuaciones en el lanzamiento:" << std::endl;
            std::cout << "Dado 1: " << dado1 << std::endl;
            std::cout << "Dado 2: " << dado2 << std::endl;
            std::cout << "Dado 3: " << dado3 << std::endl;
            std::cout << "Dado 4: " << dado4 << std::endl;
            std::cout << "Dado 5: " << dado5 << std::endl;
            std::cout << "Dado 6: " << dado6 << std::endl;

            /// COMBOS
            ///COMBO TRIO
            int combos = 0;
            int maxComboValue = 0;
            for (c = 1; c <= 6; c++) {
                contador_de_igualdades = 0;
                for (ce = 0; ce < 6; ce++) {
                    if (vdados[ce] == c) {
                        contador_de_igualdades++;
                        if (contador_de_igualdades >= 3) {
                            if (c > maxComboValue) {
                                maxComboValue = c;
                            }
                            combos++;
                        }
                    }
                }
            }
            ///COMBO TODOS LOS NUMEROS 6
            if (vdados[0] == 6 && vdados[1] == 6 && vdados[2] == 6 && vdados[3] == 6 && vdados[4] == 6 && vdados[5] == 6) {
                lanzamiento = 0;
                six = 1;
                six2 = 1;
                six3 = 1;
                ///COMBO ESCALERA
            } else if (vdados[0] == 1 && vdados[1] == 2 && vdados[2] == 3 && vdados[3] == 4 && vdados[4] == 5 && vdados[5] == 6) {
                lanzamiento = puntuacionObjetivo - puntuacionJugador;
            } else {
                if (combos == 1) {
                    lanzamiento = maxComboValue * 10;
                } else if (combos >= 2) {
                    lanzamiento = maxComboValue * 10;
                } else {
                    lanzamiento = dado1 + dado2 + dado3 + dado4 + dado5 + dado6;
                }
            }

            /// Combo: 6 dados id�nticos (excepto 6)
            float contador_six;
            int s;
            int s2;
            contador_six = 0;
            if (vdados[0] != 6) {
                for (s2 = 0; s2 <= 5; s2++) {
                    if (vdados[0] == vdados[s2]) {
                        contador_six = contador_six + 1;
                    }
                }
            }
            if (contador_six == 6) {
                lanzamiento = vdados[0] * 50;
            }
            ///fin de los combos


            if (lanzamiento_mayor < lanzamiento) {
                lanzamiento_mayor = lanzamiento;
            }

            if (six == 0) {
                std::cout << "En este lanzamiento tu puntuacion fue: " << lanzamiento << std::endl << std::endl;
            } else {
                std::cout << "En este lanzamiento tu puntuacion fue: " << 0 << std::endl << std::endl;
                six = 0;
            }

        } while (cont_lanzamiento < 3);

        if (six2 == 0) {
            std::cout << "En esta ronda tu puntuacion fue: " << lanzamiento_mayor << std::endl << std::endl;
        } else {
            std::cout << "En esta ronda tu puntuacion fue: " << 0 << std::endl << std::endl;
            six2 = 0;
        }

        if (six3 == 0) {
            puntuacionJugador += lanzamiento_mayor;
        } else {
            puntuacionJugador += 0;
            six3 = 0;
        }

        std::cout << "La puntuaion total de " << nombre<< " puntuacion total es: " << puntuacionJugador << std::endl << std::endl;
    }





    for (J2 = 1; J2 <=1; J2++) {
        int cont_lanzamiento2 = 0;
        ronda2++;
        std::cout << "Ronda: " << ronda2 << std::endl;
        std::cout << "Es el turno de " << nombre2 << std::endl;

        int lanzamiento_mayor2 = 0;

        /// Para separar por rondas de tres lanzamientos
        do {
            std::cout << "Lanza los dados (presiona Enter para lanzar): ";
            std::cin.ignore(); /// Esperar a que el jugador presione Enter

            int lanzamiento2 = 0;
            cont_lanzamiento2++;

            int dado1J2 = lanzarDados();
            vdados2[0] = dado1J2;
            int dado2J2 = lanzarDados();
            vdados2[1] = dado2J2;
            int dado3J2 = lanzarDados();
            vdados2[2] = dado3J2;
            int dado4J2 = lanzarDados();
            vdados2[3] = dado4J2;
            int dado5J2 = lanzarDados();
            vdados2[4] = dado5J2;
            int dado6J2 = lanzarDados();
            vdados2[5] = dado6J2;

            std::cout << "Has obtenido las siguientes puntuaciones en el lanzamiento:" << std::endl;
            std::cout << "Dado 1: " << dado1J2 << std::endl;
            std::cout << "Dado 2: " << dado2J2 << std::endl;
            std::cout << "Dado 3: " << dado3J2 << std::endl;
            std::cout << "Dado 4: " << dado4J2 << std::endl;
            std::cout << "Dado 5: " << dado5J2 << std::endl;
            std::cout << "Dado 6: " << dado6J2 << std::endl;

            /// COMBOS
            ///COMBO TRIO
            int combos2 = 0;
            int maxComboValue2 = 0;
            for (c2 = 1; c2 <= 6; c2++) {
                contador_de_igualdades2 = 0;
                for (ce2 = 0; ce2 < 6; ce2++) {
                    if (vdados[ce2] == c2) {
                        contador_de_igualdades2++;
                        if (contador_de_igualdades2 >= 3) {
                            if (c > maxComboValue2) {
                                maxComboValue2 = c2;
                            }
                            combos2++;
                        }
                    }
                }
            }
            ///COMBO TODOS LOS NUMEROS 6
            if (vdados2[0] == 6 && vdados2[1] == 6 && vdados2[2] == 6 && vdados2[3] == 6 && vdados2[4] == 6 && vdados2[5] == 6) {
                lanzamiento2 = 0;
                sixJ2 = 1;
                six2J2 = 1;
                six3J2 = 1;
                ///COMBO ESCALERA
            } else if (vdados2[0] == 1 && vdados2[1] == 2 && vdados2[2] == 3 && vdados2[3] == 4 && vdados2[4] == 5 && vdados2[5] == 6) {
                lanzamiento2 = puntuacionObjetivo - puntuacionJugador2;
            } else {
                if (combos2 == 1) {
                    lanzamiento2 = maxComboValue2 * 10;
                } else if (combos2 >= 2) {
                    lanzamiento2 = maxComboValue2 * 10;
                } else {
                    lanzamiento2 = dado1J2 + dado2J2 + dado3J2 + dado4J2 + dado5J2 + dado6J2;
                }
            }

            /// Combo: 6 dados id�nticos (excepto 6)
            float contador_six2;
            int sJ2;
            int s2J2;
            contador_six2 = 0;
            if (vdados2[0] != 6) {
                for (s2J2 = 0; s2J2 <= 5; s2J2++) {
                    if (vdados2[0] == vdados2[s2J2]) {
                        contador_six2 = contador_six2 + 1;
                    }
                }
            }
            if (contador_six2 == 6) {
                lanzamiento2 = vdados2[0] * 50;
            }
            ///fin de los combos


            if (lanzamiento_mayor2 < lanzamiento2) {
                lanzamiento_mayor2 = lanzamiento2;
            }

            if (sixJ2 == 0) {
                std::cout << "En este lanzamiento tu puntuacion fue: " << lanzamiento2 << std::endl << std::endl;
            } else {
                std::cout << "En este lanzamiento tu puntuacion fue: " << 0 << std::endl << std::endl;
                sixJ2 = 0;
            }

        } while (cont_lanzamiento2 < 3);

        if (six2J2 == 0) {
            std::cout << "En esta ronda tu puntuacion fue: " << lanzamiento_mayor2 << std::endl << std::endl;
        } else {
            std::cout << "En esta ronda tu puntuacion fue: " << 0 << std::endl << std::endl;
            six2J2 = 0;
        }

        if (six3J2 == 0) {
            puntuacionJugador2 += lanzamiento_mayor2;
        } else {
            puntuacionJugador2 += 0;
            six3J2 = 0;
        }

        std::cout << "La puntuacion total del jugador " <<nombre2<< " es: " << puntuacionJugador2 << std::endl << std::endl;
    }
    }

    delete[] vdados; /// Liberar la memoria asignada con delete[]
    delete[] vdados2; /// Liberar la memoria asignada con delete[]

    if(puntuacionJugador>=puntuacionObjetivo && puntuacionJugador==puntuacionJugador2){
    std::cout << "Tanto " <<nombre<<" como "<<nombre2<<" han alcanzado la puntuacion objetivo de 500 o mas y empataron." << std::endl;
    }else if(puntuacionJugador>=puntuacionObjetivo && puntuacionJugador>puntuacionJugador2){
    std::cout << "Felicidades " <<nombre<<", has alcanzado la puntuacion objetivo de 500." << std::endl;
    std::cout << "Eres el ganador del juego." << std::endl;
    } else {
    std::cout << "Felicidades "<<nombre2<<", has alcanzado la puntuacion objetivo de 500." << std::endl;
    std::cout << "Eres el ganador del juego." << std::endl;
    }} break;
                    case 3:
                        op = 0;
                default:
                    break;
                }

                break;
                default:
                    break;
            }

        } while (op!=0);

        cout<<endl;
        return 0;
}
