#include <stdio.h>
#include <math.h>

double calculate_ex(int x, double tol) {
    double ex = 1.0;  // Inicializamos el resultado a 1
    double term = 1.0; // Inicializamos el primer t�rmino a 1
    int n = 1; // Inicializamos el �ndice de t�rminos a 1

    while (fabs(term) > tol) { // Continuamos el bucle hasta que el t�rmino sea menor que la tolerancia
        term *= (double)x / n; // Calculamos el siguiente t�rmino en la serie
        ex += term; // Sumamos el t�rmino actual al resultado
        n++; // Incrementamos el �ndice de t�rminos
    }

    return ex;
}

int main() {
    int x = 2;
    double tol = 1e-6; // Tolerancia de 1e-6

    double ex = calculate_ex(x, tol);
    printf("e^%d = %f\n", x, ex);

    return 0;
}
