#include <stdio.h>
#include <stdlib.h>
#include "../librerias/matematicas.h"

int main()
{
    int numero = 5, resultado;

    if(numero < 0)
    {
        printf("NUMERO NO VALIDO...\n");
    }
    else
    {
        resultado = factorial(numero);
        printf("El factorial de %d es: %d", numero, resultado);
    }
    return 0;
}
