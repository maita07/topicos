#include <stdio.h>
#include <stdlib.h>
void imprimir_vector(int *vec, int ce);
void cargar_vector(int *p, int ce);

int main(void){
    int vec[10], ce = 5;

    cargar_vector(vec, ce);
    imprimir_vector(vec, ce);

    return 0;
}

void cargar_vector(int *pv, int ce)
{
    int i;
    printf("Cargar %d datos: ", ce);

    for(i = 0; i < ce; i++)
    {
        scanf("%d", pv);
        pv++;
    }
}

void imprimir_vector(int *vec, int ce)
{
    int i;
    printf("\n");

    for(i = 0; i < ce; i++)
    {
        printf("%d ", *vec);
        vec++;
    }
}
