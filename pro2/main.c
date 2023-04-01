#include <stdio.h>
#include <stdlib.h>
#include "../librerias/matematicas.h"

int main()
{
    int num1, num2, resultado;

    printf("Ingrese el primer numero ");
    scanf("%d",&num1);

    printf("Ingrese el segundo numero ");
    scanf("%d",&num2);

    resultado=combinatorio(num1,num2);

    printf("El resultado es %d",resultado);

    return 0;
}
