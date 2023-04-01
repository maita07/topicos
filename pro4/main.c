#include <stdio.h>
#include <stdlib.h>
#include "../librerias/matematicas.h"

int main()
{
    double raiz_de = 4;
    double tol = 0.0001;

    printf("la raiz de %lf es: %lf", raiz_de, raiz_cuadrada(raiz_de, tol));

    return 0;
}
