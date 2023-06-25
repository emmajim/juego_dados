#include <iostream>
#include <cstdlib>
#include <ctime>
#include "rlutil.h"


// Función para lanzar los dados y obtener un número aleatorio entre 1 y 6
int lanzarDados() {
    return rand() % 6 + 1;
}

void drawOne(int posx, int posy){

        rlutil::locate(posx ,posy);
        std::cout<< " ...........";
        rlutil::locate(posx,posy + 1);
        std::cout<< " :         :";
        rlutil::locate(posx,posy + 2);
        std::cout<< " :    *    :";
        rlutil::locate(posx,posy + 3);
        std::cout<< " :         :";
        rlutil::locate(posx, posy + 4);
        std::cout<< " :.........: ";
}

void drawTwo(int posx, int posy){

        rlutil::locate(posx ,posy);
        std::cout<< " ...........";
        rlutil::locate(posx ,posy + 1);
        std::cout<< " :         :";
        rlutil::locate(posx ,posy + 2);
        std::cout<< " :  *   *  :";
        rlutil::locate(posx ,posy + 3);
        std::cout<< " :         :";
        rlutil::locate(posx ,posy + 4);
        std::cout<< " :.........: ";
}

void drawThree(int posx, int posy){

        rlutil::locate(posx ,posy);
        std::cout<< " ...........";
        rlutil::locate(posx ,posy + 1);
        std::cout<< " :       * :";
        rlutil::locate(posx ,posy + 2);
        std::cout<< " :    *    :";
        rlutil::locate(posx ,posy + 3);
        std::cout<< " : *       :";
        rlutil::locate(posx ,posy + 4);
        std::cout<< " :.........: ";
}

void drawFour(int posx, int posy){

        rlutil::locate(posx ,posy);
        std::cout<< " ...........";
        rlutil::locate(posx ,posy + 1);
        std::cout<< " : *     * :";
        rlutil::locate(posx ,posy + 2);
        std::cout<< " :         :";
        rlutil::locate(posx ,posy + 3);
        std::cout<< " : *     * :";
        rlutil::locate(posx ,posy + 4);
        std::cout<< " :.........: ";
}

void drawFive(int posx, int posy){

        rlutil::locate(posx ,posy);
        std::cout<< " ...........";
        rlutil::locate(posx ,posy + 1);
        std::cout<< " : *     * :";
        rlutil::locate(posx ,posy + 2);
        std::cout<< " :    *    :";
        rlutil::locate(posx ,posy + 3);
        std::cout<< " : *     * :";
        rlutil::locate(posx ,posy + 4);
        std::cout<< " :.........: ";
}

void drawSix(int posx, int posy){

        rlutil::locate(posx ,posy);
        std::cout<< " ...........";
        rlutil::locate(posx ,posy + 1);
        std::cout<< " : *     * :";
        rlutil::locate(posx ,posy + 2);
        std::cout<< " : *     * :";
        rlutil::locate(posx ,posy + 3);
        std::cout<< " : *     * :";
        rlutil::locate(posx ,posy + 4);
        std::cout<< " :.........: ";
}


int main() {
    srand(time(NULL)); // Inicializar la semilla del generador de números aleatorios

    int puntuacionObjetivo = 500;
    int puntuacionJugador = 0;
    int dimension = 6;
    int* vdados = new int[dimension]; // Asignar memoria dinámicamente con new
    int Bandera_Combos = 0;
    int c, ce;
    float contador_de_igualdades;
    int i, l;
    float n[2];
    float six = 0;
    float six2 = 0;
    float six3 = 0;
    float trioc;

    rlutil::locate(26,2);

    std::cout << "Bienvenido al juego de dados 500 o escaleras" << std::endl << std::endl;

    int ronda = 0;

    // Para terminar cuando el jugador llegue a la cantidad de puntos requerida
    while (puntuacionJugador < puntuacionObjetivo) {
        int cont_lanzamiento = 0;
        ronda++;
        rlutil::locate(1,4);
        std::cout << "Ronda: " << ronda << std::endl;

        int lanzamiento_mayor = 0;

        // Para separar por rondas de tres lanzamientos
        do {
                rlutil::locate(1,6);
            std::cout << "Lanza los dados (presiona Enter para lanzar): ";
            std::cin.ignore(); // Esperar a que el jugador presione Enter

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

        //    std::cout << "Has obtenido las siguientes puntuaciones en el lanzamiento:" << std::endl;
          //  std::cout << "Dado 1: " << dado1 << std::endl;
            //std::cout << "Dado 2: " << dado2 << std::endl;
            //std::cout << "Dado 3: " << dado3 << std::endl;
            //std::cout << "Dado 4: " << dado4 << std::endl;
            //std::cout << "Dado 5: " << dado5 << std::endl;
            //std::cout << "Dado 6: " << dado6 << std::endl;

switch(vdados[0]){
        case 1 :
    rlutil::setColor(rlutil::WHITE);
    drawOne(1,8);
            break;
        case 2:
    rlutil::setColor(rlutil::WHITE);
    drawTwo(1,8);
            break;
            case 3:
    rlutil::setColor(rlutil::WHITE);
    drawThree(1,8);
            break;
            case 4 :
    rlutil::setColor(rlutil::WHITE);
    drawFour(1,8);
            break;
            case 5 :
    rlutil::setColor(rlutil::WHITE);
    drawFive(1,8);
            break;
            case 6 :
    rlutil::setColor(rlutil::WHITE);
    drawSix(1,8);
            break;
        default:
            break;
            }
for ( i =1; i<=5 ; i++){
        switch(vdados[i]){
        case 1 :
    rlutil::setColor(rlutil::WHITE);
    drawOne(13 * i ,8);
            break;
        case 2:
    rlutil::setColor(rlutil::WHITE);
    drawTwo(13 * i,8);
            break;
            case 3:
    rlutil::setColor(rlutil::WHITE);
    drawThree(13 * i,8);
            break;
            case 4 :
    rlutil::setColor(rlutil::WHITE);
    drawFour(13 * i,8);
            break;
            case 5 :
    rlutil::setColor(rlutil::WHITE);
    drawFive(13 * i,8);
            break;
            case 6 :
    rlutil::setColor(rlutil::WHITE);
    drawSix(13 * i,8);
            break;
        default:
            break;
            }

            }





            // COMBOS
            //COMBO TRIO
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
            //COMBO TODOS LOS NUMEROS 6
            if (vdados[0] == 6 && vdados[1] == 6 && vdados[2] == 6 && vdados[3] == 6 && vdados[4] == 6 && vdados[5] == 6) {
                lanzamiento = 0;
                six = 1;
                six2 = 1;
                six3 = 1;
                //COMBO ESCALERA
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

            // Combo: 6 dados idénticos (excepto 6)
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

            if (lanzamiento_mayor < lanzamiento) {
                lanzamiento_mayor = lanzamiento;
            }

            rlutil::locate(1,13);
            if (six == 0) {
                std::cout << "En este lanzamiento tu puntuacion fue: " << lanzamiento << std::endl << std::endl;
            } else {
                std::cout << "En este lanzamiento tu puntuacion fue: " << 0 << std::endl << std::endl;
                six = 0;
            }

        } while (cont_lanzamiento < 3);

        rlutil::locate(1,15);
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

        rlutil::locate(1,17);
        std::cout << "Tu puntuacion total es: " << puntuacionJugador << std::endl << std::endl;
    }

    delete[] vdados; // Liberar la memoria asignada con delete[]

    rlutil::locate(1,19);
    std::cout << "Felicidades, has alcanzado la puntuacion objetivo de 500." << std::endl;
    std::cout << "Eres el ganador del juego." << std::endl;

    return 0;
}
