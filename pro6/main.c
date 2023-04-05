#include <stdio.h>
#include <stdlib.h>
#include "../librerias/matematicas.h"

int main()
{
    double x = 5.0;
    double tol = 0.0000001;
    double resultado = seno(x, tol);

    printf("el seno de %lf es: %lf", x, resultado);

    return 0;
}
