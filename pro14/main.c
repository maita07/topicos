#include <stdio.h>
#include <stdlib.h>
#include "../librerias/fechas/fechas.h"
int main()
{
    FECHA fecha;

    fecha.anio = 2021;
    fecha.mes = 2;
    fecha.dia = 29;

    int verificador = fecha_formal(fecha);

    printf("%d", verificador);

    return 0;
}
