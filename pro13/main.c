#include <stdio.h>
#include <stdlib.h>
#include "../librerias/matematicas.h"

int main()
{
    int num = 2;
    int verificador = primo(num);

    verificador == 1 ? printf("ES PRIMO") : printf("NO ES PRIMO");
    return 0;
}
