#include <stdio.h>
#include <stdlib.h>
#include "fechas.h"
#include "structs.h"

/////////////////////////////////////////////////////////////////////////////////


int fecha_formal(FECHA fecha)
{
    int verificador_anio=0;
    int verificador_bisiesto=0;
    int verificador_mes=0;
    int verificador_dia=0;
    int verificador_fecha=0;

    if(fecha.anio > 0)
    {
        verificador_anio=1;

        verificador_bisiesto = (fecha.anio%4==0)? ((fecha.anio%100==0)? ((fecha.anio%400==0)? 1 : 0) : 1) : 0;

        if(verificador_bisiesto == 0)
        {
            verificador_mes = (fecha.mes>0&&fecha.mes<13)?1:0;

            if(verificador_mes==1)
            {
                switch(fecha.mes)
                {
                    case 1: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                    case 2: verificador_dia = (fecha.dia>0&&fecha.dia<29)?1:0;   break;
                    case 3: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                    case 4: verificador_dia = (fecha.dia>0&&fecha.dia<31)?1:0;   break;
                    case 5: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                    case 6: verificador_dia = (fecha.dia>0&&fecha.dia<31)?1:0;   break;
                    case 7: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                    case 8: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                    case 9: verificador_dia = (fecha.dia>0&&fecha.dia<31)?1:0;   break;
                    case 10: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                    case 11: verificador_dia = (fecha.dia>0&&fecha.dia<31)?1:0;   break;
                    case 12: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                }
            }
        }
        else
        {
            verificador_mes = (fecha.mes>0&&fecha.mes<13)?1:0;

            if(verificador_mes==1)
            {
                switch(fecha.mes)
                {
                    case 1: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                    case 2: verificador_dia = (fecha.dia>0&&fecha.dia<30)?1:0;   break;
                    case 3: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                    case 4: verificador_dia = (fecha.dia>0&&fecha.dia<31)?1:0;   break;
                    case 5: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                    case 6: verificador_dia = (fecha.dia>0&&fecha.dia<31)?1:0;   break;
                    case 7: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                    case 8: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                    case 9: verificador_dia = (fecha.dia>0&&fecha.dia<31)?1:0;   break;
                    case 10: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                    case 11: verificador_dia = (fecha.dia>0&&fecha.dia<31)?1:0;   break;
                    case 12: verificador_dia = (fecha.dia>0&&fecha.dia<32)?1:0;   break;
                }
            }
        }
    }

    verificador_fecha = (verificador_anio==1&&verificador_mes==1&&verificador_dia==1)?1:0;

    return verificador_fecha;
}


/////////////////////////////////////////////////////////////////////////////////
