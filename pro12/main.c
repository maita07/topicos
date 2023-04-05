#include <stdio.h>
#include <stdlib.h>
#include "../librerias/matematicas.h"

int main()
{
    int num = 8;
    int resultado = sumatoria_numeros_naturales_menores_que_n(num);
    printf("RESULTADO = %d", resultado);
    return 0;
}
