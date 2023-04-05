#include <stdio.h>
#include <stdlib.h>
#include "../librerias/matematicas.h"

int main()
{
    int num1 = 3, num2 = 7;
    int resultado = producto_por_sumas_sucesivas(num1, num2);
    printf("RESULTADO: %d", resultado);

    return 0;
}
