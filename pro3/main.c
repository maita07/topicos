#include <stdio.h>
#include <stdlib.h>
#include "../librerias/matematicas.h"

int main(void)
{
    double x, tol;
    printf("Ingrese el valor de x: ");
    scanf("%lf", &x);
    printf("Ingrese el valor de la tolerancia: ");
    scanf("%lf", &tol);

    double ex = calcular_ex(x, tol);

    printf("El valor de e^%.2f es: %f", x, ex);

    return 0;
}
