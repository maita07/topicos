#ifndef MACROS_H_INCLUDED
#define MACROS_H_INCLUDED

#define VALOR_ABSOLUTO(x) ((x) < 0 ? -(x) : (x))
#define PARTE_ENTERA(x) (int)x
#define PARTE_DECIMAL(x) x-PARTE_ENTERA(x)
#define REDONDEO(x) (PARTE_DECIMAL(x)>=5)? PARTE_ENTERA(x)+1 : PARTE_ENTERA(x)
#define ES_LETRA(x) (sizeof(x)==1)? 1 : 0
#define EN_NRO(x) (sizeof(x)==4||sizeof(x)==8)? 1 : 0
#define ES_MAYUS(x) (x>64||x<91)? 1 : 0
#define ES_MINUS(x) (x>96||x<123)? 1 : 0
#define ES_BLANCO(x) (x==32)? 1 : 0

#endif // MACROS_H_INCLUDED
