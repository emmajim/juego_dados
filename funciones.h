#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
// Funci�n para lanzar los dados y obtener un n�mero aleatorio entre 1 y 6

int Lanzar_Dados() {
    return rand() % 6 + 1;
}

#endif // FUNCIONES_H_INCLUDED
